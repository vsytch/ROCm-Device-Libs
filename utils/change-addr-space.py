import sys
import os

if __name__ == "__main__":
    for f in os.listdir("."):
        if f.endswith(".ll"):
            if len(sys.argv) < 3:
                src = []
                with open(f, "r") as src_file:
                    for line in src_file.readlines():
                        src.append(line\
                                    .replace("\"amdgcn--amdhsa\"", sys.argv[1])\
                                    .replace("-p:32:32-", "-p:64:64-")\
                                    .replace("-p4:64:64-", "-p4:32:32-")\
                                    .replace("-n32:64", "-n32:64-A5")\
                                    .replace(".p4i32(", ".p0i32(")\
                                    .replace("addrspace(0)*", "addrspace(5)*")\
                                    .replace("addrspace(4)*", "addrspace(0)*"))
                with open(f, "w") as src_file:
                    src_file.writelines(src)
            else:
                with open(f, "r") as src_file:
                    for line in src_file.readlines():
                        src.append(line\
                                    .replace(sys.argv[1], "\"amdgcn--amdhsa\"")\
                                    .replace("-p:64:64-", "-p:32:32-")\
                                    .replace("-p4:32:32-", "-p4:64:64-")\
                                    .replace("-n32:64-A5", "-n32:64")\
                                    .replace(".p0i32(", ".p4i32(")\
                                    .replace("addrspace(5)*", "addrspace(0)*")\
                                    .replace("addrspace(0)*", "addrspace(4)*"))
                with open(f, "w") as src_file:
                    src_file.writelines(src)