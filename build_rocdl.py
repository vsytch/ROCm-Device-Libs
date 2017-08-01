import os
from sys import exit, argv
from shutil import rmtree, copyfile
from subprocess import check_call

src_dir = ""
build_dir = ""
bin = ""
clang = "clang"
opt = "opt"
llvm_link = "llvm-link"

rocdl = \
{
    "hc" :
    {
        "hc" :
        [
            "hc_kernel",
            "hc_math",
            "hc_amdgcn",
            "hc_atomic"
        ]
    },
    "irif" :
    {
        "irif" :
        [
            "reg",
            "atomic",
            "cz",
            "fence",
            "overflow"
        ]
    },
    "ockl" :
    {
        "ockl" :
        [
            "add_sat",
            "mul_hi",
            "workitem",
            "wfaas",
            "mul24",
            "clz",
            "activelane",
            "sub_sat",
            "toas",
            "ctz",
            "wfbc",
            "media",
            "hsaqs",
            "popcount",
            "wfredscan"
        ]
    },
    "oclc" :
    {
        "oclc_correctly_rounded_sqrt_off" :
        [
            "correctly_rounded_sqrt_off"
        ],
        "oclc_correctly_rounded_sqrt_on" :
        [
            "correctly_rounded_sqrt_on"
        ],
        "oclc_daz_opt_off" :
        [
            "daz_opt_off"
        ],
        "oclc_daz_opt_on" :
        [
            "daz_opt_on"
        ],
        "oclc_finite_only_off" :
        [
            "finite_only_off"
        ],
        "oclc_finite_only_on" :
        [
            "finite_only_on"
        ],
        "oclc_unsafe_math_off" :
        [
            "unsafe_math_off"
        ],
        "oclc_unsafe_math_on" :
        [
            "unsafe_math_on"
        ],
        "oclc_isa_version_700" :
        [
            "isa_version_700"
        ],
        "oclc_isa_version_701" :
        [
            "isa_version_701"
        ],
        "oclc_isa_version_800" :
        [
            "isa_version_800"
        ],
        "oclc_isa_version_802" :
        [
            "isa_version_802"
        ],
        "oclc_isa_version_803" :
        [
            "isa_version_803"
        ],
        "oclc_isa_version_804" :
        [
            "isa_version_804"
        ],
        "oclc_isa_version_810" :
        [
            "isa_version_810"
        ],
        "oclc_isa_version_900" :
        [
            "isa_version_900"
        ],
        "oclc_isa_version_901" :
        [
            "isa_version_901"
        ]
    },
    "ocml" :
    {
        "ocml":
        [
            "acosD",
            "acosF",
            "acosH",
            "acoshD",
            "acoshF",
            "acoshH",
            "acospiD",
            "acospiF",
            "acospiH",
            "addD",
            "addF",
            "addH",
            "asinD",
            "asinF",
            "asinH",
            "asinhD",
            "asinhF",
            "asinhH",
            "asinpiD",
            "asinpiF",
            "asinpiH",
            "atan2D",
            "atan2F",
            "atan2H",
            "atan2piD",
            "atan2piF",
            "atan2piH",
            "atanD",
            "atanF",
            "atanH",
            "atanhD",
            "atanhF",
            "atanhH",
            "atanpiD",
            "atanpiF",
            "atanpiH",
            "atanpiredD",
            "atanpiredF",
            "atanpiredH",
            "atanredD",
            "atanredF",
            "atanredH",
            "ba0D",
            "ba0F",
            "ba1D",
            "ba1F",
            "bp0D",
            "bp0F",
            "bp1D",
            "bp1F",
            "cbrtD",
            "cbrtF",
            "cbrtH",
            "ceilD",
            "ceilF",
            "ceilH",
            "copysignD",
            "copysignF",
            "copysignH",
            "cosbD",
            "cosbF",
            "cosD",
            "cosF",
            "cosH",
            "coshD",
            "coshF",
            "coshH",
            "cospiD",
            "cospiF",
            "cospiH",
            "divD",
            "divF",
            "divH",
            "epexpepD",
            "epexpepF",
            "eplnD",
            "eplnF",
            "erfcD",
            "erfcF",
            "erfcH",
            "erfcinvD",
            "erfcinvF",
            "erfcinvH",
            "erfcxD",
            "erfcxF",
            "erfcxH",
            "erfD",
            "erfF",
            "erfH",
            "erfinvD",
            "erfinvF",
            "erfinvH",
            "exp10D",
            "exp10F",
            "exp10H",
            "exp2D",
            "exp2F",
            "exp2H",
            "expD",
            "expepD",
            "expepF",
            "expF",
            "expH",
            "expm1D",
            "expm1F",
            "expm1H",
            "fabsD",
            "fabsF",
            "fabsH",
            "fdimD",
            "fdimF",
            "fdimH",
            "floorD",
            "floorF",
            "floorH",
            "fmaD",
            "fmaF",
            "fmaH",
            "fmaxD",
            "fmaxF",
            "fmaxH",
            "fminD",
            "fminF",
            "fminH",
            "fmodD",
            "fmodF",
            "fmodH",
            "fpclassifyD",
            "fpclassifyF",
            "fpclassifyH",
            "fractD",
            "fractF",
            "fractH",
            "frexpD",
            "frexpF",
            "frexpH",
            "hypotD",
            "hypotF",
            "hypotH",
            "i0D",
            "i0F",
            "i0H",
            "i1D",
            "i1F",
            "i1H",
            "ilogbD",
            "ilogbF",
            "ilogbH",
            "isfiniteD",
            "isfiniteF",
            "isfiniteH",
            "isinfD",
            "isinfF",
            "isinfH",
            "isnanD",
            "isnanF",
            "isnanH",
            "isnormalD",
            "isnormalF",
            "isnormalH",
            "j0D",
            "j0F",
            "j0H",
            "j1D",
            "j1F",
            "j1H",
            "ldexpD",
            "ldexpF",
            "ldexpH",
            "len3D",
            "len3F",
            "len3H",
            "len4D",
            "len4F",
            "len4H",
            "lgammaD",
            "lgammaF",
            "lgammaH",
            "lgamma_rD",
            "lgamma_rF",
            "lgamma_rH",
            "lnepD",
            "lnepF",
            "log10D",
            "log10F",
            "log10H",
            "log1pD",
            "log1pF",
            "log1pH",
            "log2D",
            "log2F",
            "log2H",
            "logbD",
            "logbF",
            "logbH",
            "logD",
            "logF",
            "logH",
            "madD",
            "madF",
            "madH",
            "maxD",
            "maxF",
            "maxH",
            "maxmagD",
            "maxmagF",
            "maxmagH",
            "minD",
            "minF",
            "minH",
            "minmagD",
            "minmagF",
            "minmagH",
            "modfD",
            "modfF",
            "modfH",
            "mulD",
            "mulF",
            "mulH",
            "nanD",
            "nanF",
            "nanH",
            "ncdfD",
            "ncdfF",
            "ncdfH",
            "ncdfinvD",
            "ncdfinvF",
            "ncdfinvH",
            "nearbyintD",
            "nearbyintF",
            "nearbyintH",
            "nextafterD",
            "nextafterF",
            "nextafterH",
            "powD",
            "powF",
            "powH",
            "pownD",
            "pownF",
            "pownH",
            "powrD",
            "powrF",
            "powrH",
            "rcbrtD",
            "rcbrtF",
            "rcbrtH",
            "remainderD",
            "remainderF",
            "remainderH",
            "remquoD",
            "remquoF",
            "remquoH",
            "rhypotD",
            "rhypotF",
            "rhypotH",
            "rintD",
            "rintF",
            "rintH",
            "rlen3D",
            "rlen3F",
            "rlen3H",
            "rlen4D",
            "rlen4F",
            "rlen4H",
            "rootnD",
            "rootnF",
            "rootnH",
            "roundD",
            "roundF",
            "roundH",
            "rsqrtD",
            "rsqrtF",
            "rsqrtH",
            "scalbD",
            "scalbF",
            "scalbH",
            "scalbnD",
            "scalbnF",
            "scalbnH",
            "signbitD",
            "signbitF",
            "signbitH",
            "sinbD",
            "sinbF",
            "sincosD",
            "sincosF",
            "sincosH",
            "sincospiD",
            "sincospiF",
            "sincospiH",
            "sincospiredD",
            "sincospiredF",
            "sincospiredH",
            "sincosred2D",
            "sincosred2F",
            "sincosredD",
            "sincosredF",
            "sincosredH",
            "sinD",
            "sinF",
            "sinH",
            "sinhD",
            "sinhF",
            "sinhH",
            "sinpiD",
            "sinpiF",
            "sinpiH",
            "sqrtD",
            "sqrtF",
            "sqrtH",
            "subD",
            "subF",
            "subH",
            "tables",
            "tanD",
            "tanF",
            "tanH",
            "tanhD",
            "tanhF",
            "tanhH",
            "tanpiD",
            "tanpiF",
            "tanpiH",
            "tanpiredD",
            "tanpiredF",
            "tanpiredH",
            "tanred2D",
            "tanredF",
            "tanredH",
            "tgammaD",
            "tgammaF",
            "tgammaH",
            "trigpiredD",
            "trigpiredF",
            "trigpiredH",
            "trigredD",
            "trigredF",
            "trigredH",
            "trigredlargeD",
            "trigredlargeF",
            "trigredsmallD",
            "trigredsmallF",
            "truncD",
            "truncF",
            "truncH",
            "y0D",
            "y0F",
            "y0H",
            "y1D",
            "y1F",
            "y1H"
        ]
    },
    "opencl" :
    {
        "opencl":
        [
            "async/waitge",
            "async/prefetch",
            "async/awgcpy",
            "common/degrees",
            "common/fclamp",
            "common/step",
            "common/smoothstep",
            "common/sign",
            "common/mix",
            "geometric/fast_distance",
            "geometric/dot",
            "geometric/normalize",
            "geometric/length",
            "geometric/distance",
            "geometric/fast_normalize",
            "geometric/cross",
            "geometric/fast_length",
            "image/isamp",
            "image/imwrap",
            "integer/abs_diff",
            "integer/add_sat",
            "integer/mad24",
            "integer/mul_hi",
            "integer/hadd",
            "integer/rhadd",
            "integer/mul24",
            "integer/clz",
            "integer/sub_sat",
            "integer/iclamp",
            "integer/rotate",
            "integer/ctz",
            "integer/popcount",
            "integer/mad_sat",
            "integer/max",
            "integer/mad_hi",
            "integer/min",
            "integer/upsample",
            "math/native",
            "math/wrapu",
            "math/wrapbp",
            "math/wrapu2",
            "math/wrapbs",
            "math/halfscr",
            "math/halfmath",
            "math/wrapt",
            "math/halftr",
            "math/wraptp",
            "math/wrapb",
            "math/halfred",
            "media/pack",
            "media/sadhi",
            "media/mqsad",
            "media/bfm",
            "media/imax3",
            "media/qsad",
            "media/fmax3",
            "media/unpack",
            "media/sad4",
            "media/umin3",
            "media/bitalign",
            "media/ubfe",
            "media/sad",
            "media/sadd",
            "media/ibfe",
            "media/imin3",
            "media/lerp",
            "media/imed3",
            "media/bytealign",
            "media/sadw",
            "media/umed3",
            "media/fmed3",
            "media/umax3",
            "media/msad",
            "media/fmin3",
            "misc/shuffle",
            "misc/workitem",
            "misc/conversions",
            "misc/printf",
            "misc/awif",
            "misc/amdblit",
            "misc/cdhx",
            "relational/bselect",
            "relational/select",
            "relational/predicates",
            "relational/anyall",
            "subgroup/subredscan",
            "subgroup/subbcast",
            "subgroup/subbar",
            "subgroup/subget",
            "subgroup/suballany",
            "vldst/vldst_gen",
            "vldst/vldst_half",
            "workgroup/wgbcast",
            "workgroup/wgreduce",
            "workgroup/wgscan",
            "workgroup/wganyall",
            "workgroup/wgbarrier",
            "workgroup/wgscratch"
        ]
    }
}

def compile_pb():
    os.chdir(src_dir + "/utils/prepare-builtins")
    if not os.path.isfile("prepare-builtins.exe"):
        check_call(["cl",
            "/MD",
            "/I" + bin + "../../../compiler/include",
            "/I" + bin + "../../include",
            "/GR-",
            "/DDLLVM_BUILD_GLOBAL_ISEL",
            "/D__STDC_CONSTANT_MACROS",
            "/D__STDC_FORMAT_MACROS",
            "/D__STDC_LIMIT_MACROS",
            "/c",
            "/EHsc",
            "prepare-builtins.cpp"])
        check_call(["link",
            "/out:prepare-builtins.exe",
            bin + "../lib/LLVMSupport.lib",
            bin + "../lib/LLVMCore.lib",
            bin + "../lib/LLVMBitReader.lib",
            bin + "../lib/LLVMBitWriter.lib",
            bin + "../lib/LLVMAnalysis.lib",
            bin + "../lib/LLVMObject.lib",
            bin + "../lib/LLVMMCParser.lib",
            bin + "../lib/LLVMMC.lib",
            bin + "../lib/LLVMProfileData.lib",
            bin + "../lib/LLVMDemangle.lib",
            bin + "../lib/LLVMBinaryFormat.lib",
            "prepare-builtins.obj"])

def generate():
    if os.path.isdir(build_dir):
        rmtree(build_dir)
    os.mkdir(build_dir)

    for dir in rocdl.keys():
        os.mkdir(build_dir + "/" + dir)
        os.mkdir(build_dir + "/" + dir + "/src")
        os.chdir(src_dir + "/" + dir + "/src")
        for lib in rocdl[dir].keys():
            os.mkdir(build_dir + "/" + dir + "/" + lib + "_lib_bc_dir")
            for obj in rocdl[dir][lib]:
                if os.path.isfile(obj + ".ll"):
                    print("Generating " + obj + ".o")
                    
                    f1 = open(obj + ".ll", "r")
                    f2 = open(build_dir + "/" + dir + "/" + lib + "_lib_bc_dir/" + os.path.basename(obj) + ".o", "w")

                    for line in f1.readlines():
                        f2.write(line\
                            .replace("\"amdgcn--amdhsa\"", "\"amdgcn--amdhsa-amdgiz\"")\
                            .replace("-p:32:32-", "-p:64:64-")\
                            .replace("-p4:64:64-", "-p4:32:32-")\
                            .replace("-n32:64", "-n32:64-A5")\
                            .replace(".p4i32(", ".p0i32(")\
                            .replace("addrspace(0)*", "addrspace(5)*")\
                            .replace("addrspace(4)*", "addrspace(0)*"))
                    
                    f1.close()
                    f2.close()

                elif os.path.isfile(obj + ".cl"):
                    print("Generating " + obj + ".c")
                    copyfile(obj + ".cl", build_dir + "/" + dir + "/src/" + os.path.basename(obj) + ".c")
                else:
                    print("Couldn't find " + obj)
                    exit(1)
def build():
    include_dirs = []
    for dir in rocdl.keys():
        if os.path.isdir(src_dir + "/" + dir):
            include_dirs.append(src_dir + "/" + dir)
        if os.path.isdir(src_dir + "/" + dir + "/inc"):
            include_dirs.append(src_dir + "/" + dir + "/inc")
        if os.path.isdir(src_dir + "/" + dir + "/src"):
            include_dirs.append(src_dir + "/" + dir + "/src")
        for d in list(rocdl[dir].values())[0]:
            if (os.path.dirname(d) != "") and \
                (os.path.isdir(src_dir + "/" + dir + "/src/" + os.path.dirname(d))) and \
                (src_dir + "/" + dir + "/src/" + os.path.dirname(d)) not in include_dirs:
                    include_dirs.append(src_dir + "/" + dir + "/src/" + os.path.dirname(d))

    for dir in rocdl.keys():
        os.chdir(build_dir + "/" + dir + "/src")
        for lib in rocdl[dir].keys():
            for obj in rocdl[dir][lib]:
                if os.path.isfile(os.path.basename(obj) + ".c"):
                    print("Building C object " + obj + ".o")
                    check_call([clang] + \
                        [("-I" + i_dir) for i_dir in include_dirs] + \
                        ["-Werror",
                        "-x",
                        "cl",
                        "-Xclang",
                        "-cl-std=CL2.0",
                        "-fblocks",
                        "-fshort-wchar",
                        "-target",
                        "amdgcn--amdhsa-amdgizcl",
                        "-DCL_VERSION_2_0=200",
                        "-D_OPENCL_C_VERSION=200",
                        "-Dcl_khr_fp64",
                        "-Dcl_khr_fp16",
                        "-Dcl_khr__subgroups",
                        "-Dcl_khr_in64_base_atomics",
                        "-Dcl_khr_int64_extended_atomics",
                        "-Xclang",
                        "-finclude-default-header",
                        "-emit-llvm",
                        "-o",
                        build_dir + "/" + dir + "/" + lib + "_lib_bc_dir/" + os.path.basename(obj) + ".o",
                        "-c",
                        os.path.basename(obj) + ".c"])

def link():
    for dir in rocdl.keys():
        os.chdir(build_dir + "/" + dir)
        for lib in rocdl[dir].keys():
            print("Linking library " + lib + ".lib.bc")
            check_call([llvm_link,
                "-o",
                lib + ".lib.bc"] + \
                [(build_dir + "/" + dir + "/" + lib + "_lib_bc_dir/" + os.path.basename(obj) + ".o") for obj in rocdl[dir][lib]])

def optimize():
   for dir in rocdl.keys():
        os.chdir(build_dir + "/" + dir)
        for lib in rocdl[dir].keys():
            print("Generating " + lib + ".optout.bc")
            check_call([opt,
                "-O2",
                "-infer-address-spaces",
                "-dce",
                "-globaldce",
                lib + ".lib.bc",
                "-o",
                lib + ".optout.bc"])

def prepare_builtins():
    os.mkdir(build_dir + "/lib")

    for dir in rocdl.keys():
        os.chdir(build_dir + "/" + dir)
        for lib in rocdl[dir].keys():
            print("Built " + lib + ".amdgcn.bc")
            check_call([src_dir + "/utils/prepare-builtins/prepare-builtins.exe",
                lib + ".optout.bc",
                "-o",
                lib + ".amdgcn.bc"])
            copyfile(lib + ".amdgcn.bc", build_dir + "/lib/" + lib + ".amdgcn.bc")
            
if __name__ == "__main__":
    if not src_dir:
        src_dir = os.path.dirname(argv[0])
    build_dir = src_dir + "/build"
    bin = src_dir + "/../build/release/bin/"

    compile_pb()
    generate()
    build()
    link()
    optimize()
    prepare_builtins()