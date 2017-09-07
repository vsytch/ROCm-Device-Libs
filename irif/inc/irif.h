/*===--------------------------------------------------------------------------
 *                   ROCm Device Libraries
 *
 * This file is distributed under the University of Illinois Open Source
 * License. See LICENSE.TXT for details.
 *===------------------------------------------------------------------------*/

#ifndef IRIF_H
#define IRIF_H

#pragma OPENCL EXTENSION cl_khr_fp16 : enable

// Generic intrinsics
extern __attribute__((const)) half __llvm_sqrt_f16(half) __asm("llvm.sqrt.f16");
extern __attribute__((const)) float __llvm_sqrt_f32(float) __asm("llvm.sqrt.f32");
extern __attribute__((const)) double __llvm_sqrt_f64(double) __asm("llvm.sqrt.f64");

extern __attribute__((const)) half __llvm_sin_f16(half) __asm("llvm.sin.f16");
extern __attribute__((const)) float __llvm_sin_f32(float) __asm("llvm.sin.f32");

extern __attribute__((const)) half __llvm_cos_f16(half) __asm("llvm.cos.f16");
extern __attribute__((const)) float __llvm_cos_f32(float) __asm("llvm.cos.f32");

extern __attribute__((const)) half __llvm_exp2_f16(half) __asm("llvm.exp2.f16");
extern __attribute__((const)) float __llvm_exp2_f32(float) __asm("llvm.exp2.f32");

extern __attribute__((const)) half __llvm_log2_f16(half) __asm("llvm.log2.f16");
extern __attribute__((const)) float __llvm_log2_f32(float) __asm("llvm.log2.f32");

extern __attribute__((const)) half __llvm_fma_f16(half, half, half) __asm("llvm.fma.f16");
extern __attribute__((const)) half2 __llvm_fma_2f16(half2, half2, half2) __asm("llvm.fma.v2f16");
extern __attribute__((const)) float __llvm_fma_f32(float, float, float) __asm("llvm.fma.f32");
extern __attribute__((const)) double __llvm_fma_f64(double, double, double) __asm("llvm.fma.f64");

extern __attribute__((const)) half __llvm_fabs_f16(half) __asm("llvm.fabs.f16");
extern __attribute__((const)) half2 __llvm_fabs_2f16(half2) __asm("llvm.fabs.v2f16");
extern __attribute__((const)) float __llvm_fabs_f32(float) __asm("llvm.fabs.f32");
extern __attribute__((const)) double __llvm_fabs_f64(double) __asm("llvm.fabs.f64");

extern __attribute__((const)) half __llvm_minnum_f16(half, half) __asm("llvm.minnum.f16");
extern __attribute__((const)) half2 __llvm_minnum_2f16(half2, half2) __asm("llvm.minnum.v2f16");
extern __attribute__((const)) float __llvm_minnum_f32(float, float) __asm("llvm.minnum.f32");
extern __attribute__((const)) double __llvm_minnum_f64(double, double) __asm("llvm.minnum.f64");

extern __attribute__((const)) half __llvm_maxnum_f16(half, half) __asm("llvm.maxnum.f16");
extern __attribute__((const)) half2 __llvm_maxnum_2f16(half2, half2) __asm("llvm.maxnum.v2f16");
extern __attribute__((const)) float __llvm_maxnum_f32(float, float) __asm("llvm.maxnum.f32");
extern __attribute__((const)) double __llvm_maxnum_f64(double, double) __asm("llvm.maxnum.f64");

extern __attribute__((const)) half __llvm_copysign_f16(half, half) __asm("llvm.copysign.f16");
extern __attribute__((const)) half2 __llvm_copysign_2f16(half2, half2) __asm("llvm.copysign.v2f16");
extern __attribute__((const)) float __llvm_copysign_f32(float, float) __asm("llvm.copysign.f32");
extern __attribute__((const)) double __llvm_copysign_f64(double, double) __asm("llvm.copysign.f64");

extern __attribute__((const)) half __llvm_floor_f16(half) __asm("llvm.floor.f16");
extern __attribute__((const)) half2 __llvm_floor_2f16(half2) __asm("llvm.floor.v2f16");
extern __attribute__((const)) float __llvm_floor_f32(float) __asm("llvm.floor.f32");
extern __attribute__((const)) double __llvm_floor_f64(double) __asm("llvm.floor.f64");

extern __attribute__((const)) half __llvm_ceil_f16(half) __asm("llvm.ceil.f16");
extern __attribute__((const)) half2 __llvm_ceil_2f16(half2) __asm("llvm.ceil.v2f16");
extern __attribute__((const)) float __llvm_ceil_f32(float) __asm("llvm.ceil.f32");
extern __attribute__((const)) double __llvm_ceil_f64(double) __asm("llvm.ceil.f64");

extern __attribute__((const)) half __llvm_trunc_f16(half) __asm("llvm.trunc.f16");
extern __attribute__((const)) half2 __llvm_trunc_2f16(half2) __asm("llvm.trunc.v2f16");
extern __attribute__((const)) float __llvm_trunc_f32(float) __asm("llvm.trunc.f32");
extern __attribute__((const)) double __llvm_trunc_f64(double) __asm("llvm.trunc.f64");

extern __attribute__((const)) half __llvm_rint_f16(half) __asm("llvm.rint.f16");
extern __attribute__((const)) half2 __llvm_rint_2f16(half2) __asm("llvm.rint.v2f16");
extern __attribute__((const)) float __llvm_rint_f32(float) __asm("llvm.rint.f32");
extern __attribute__((const)) double __llvm_rint_f64(double) __asm("llvm.rint.f64");

extern __attribute__((const)) half __llvm_nearbyint_f16(half) __asm("llvm.nearbyint.f16");
extern __attribute__((const)) half2 __llvm_nearbyint_2f16(half2) __asm("llvm.nearbyint.v2f16");
extern __attribute__((const)) float __llvm_nearbyint_f32(float) __asm("llvm.nearbyint.f32");
extern __attribute__((const)) double __llvm_nearbyint_f64(double) __asm("llvm.nearbyint.f64");

extern __attribute__((const)) half __llvm_round_f16(half) __asm("llvm.round.f16");
extern __attribute__((const)) half2 __llvm_round_2f16(half2) __asm("llvm.round.v2f16");
extern __attribute__((const)) float __llvm_round_f32(float) __asm("llvm.round.f32");
extern __attribute__((const)) double __llvm_round_f64(double) __asm("llvm.round.f64");

extern __attribute__((const)) int __llvm_bitreverse_i32(int) __asm("llvm.bitreverse.i32");
extern __attribute__((const)) long __llvm_bitreverse_i64(long) __asm("llvm.bitreverse.i64");

extern __attribute__((const)) int __llvm_ctpop_i32(int) __asm("llvm.ctpop.i32");
extern __attribute__((const)) long __llvm_ctpop_i64(long) __asm("llvm.ctpop.i64");

extern __attribute__((const)) half __llvm_fmuladd_f16(half, half, half) __asm("llvm.fmuladd.f16");
extern __attribute__((const)) half2 __llvm_fmuladd_2f16(half2, half2, half2) __asm("llvm.fmuladd.v2f16");
extern __attribute__((const)) float __llvm_fmuladd_f32(float, float, float) __asm("llvm.fmuladd.f32");
extern __attribute__((const)) double __llvm_fmuladd_f64(double, double, double) __asm("llvm.fmuladd.f64");

extern __attribute__((const)) half __llvm_canonicalize_f16(half) __asm("llvm.canonicalize.f16");
extern __attribute__((const)) half2 __llvm_canonicalize_2f16(half2) __asm("llvm.canonicalize.v2f16");
extern __attribute__((const)) float __llvm_canonicalize_f32(float) __asm("llvm.canonicalize.f32");
extern __attribute__((const)) double __llvm_canonicalize_f64(double) __asm("llvm.canonicalize.f64");

// Intrinsics requiring wrapping
extern bool __llvm_sadd_with_overflow_i16(short, short, __private short*);
extern bool __llvm_uadd_with_overflow_i16(ushort, ushort, __private ushort*);
extern bool __llvm_sadd_with_overflow_i32(int, int, __private int*);
extern bool __llvm_uadd_with_overflow_i32(uint, uint, __private uint*);
extern bool __llvm_sadd_with_overflow_i64(long, long, __private long*);
extern bool __llvm_uadd_with_overflow_i64(ulong, ulong, __private ulong*);

extern bool __llvm_ssub_with_overflow_i16(short, short, __private short*);
extern bool __llvm_usub_with_overflow_i16(ushort, ushort, __private ushort*);
extern bool __llvm_ssub_with_overflow_i32(int, int, __private int*);
extern bool __llvm_usub_with_overflow_i32(uint, uint, __private uint*);
extern bool __llvm_ssub_with_overflow_i64(long, long, __private long*);
extern bool __llvm_usub_with_overflow_i64(ulong, ulong, __private ulong*);

extern bool __llvm_smul_with_overflow_i16(short, short, __private short*);
extern bool __llvm_umul_with_overflow_i16(ushort, ushort, __private ushort*);
extern bool __llvm_smul_with_overflow_i32(int, int, __private int*);
extern bool __llvm_umul_with_overflow_i32(uint, uint, __private uint*);
extern bool __llvm_smul_with_overflow_i64(long, long, __private long*);
extern bool __llvm_umul_with_overflow_i64(ulong, ulong, __private ulong*);

extern __attribute__((const)) uchar __llvm_ctlz_i8(uchar);
extern __attribute__((const)) ushort __llvm_ctlz_i16(ushort);
extern __attribute__((const)) uint __llvm_ctlz_i32(uint);
extern __attribute__((const)) ulong __llvm_ctlz_i64(ulong);

extern __attribute__((const)) uchar __llvm_cttz_i8(uchar);
extern __attribute__((const)) ushort __llvm_cttz_i16(ushort);
extern __attribute__((const)) uint __llvm_cttz_i32(uint);
extern __attribute__((const)) ulong __llvm_cttz_i64(ulong);

// Fence intrinsics
extern void __llvm_fence_acq_wi(void);
extern void __llvm_fence_acq_sg(void);
extern void __llvm_fence_acq_wg(void);
extern void __llvm_fence_acq_dev(void);
extern void __llvm_fence_acq_sys(void);
extern void __llvm_fence_rel_wi(void);
extern void __llvm_fence_rel_sg(void);
extern void __llvm_fence_rel_wg(void);
extern void __llvm_fence_rel_dev(void);
extern void __llvm_fence_rel_sys(void);
extern void __llvm_fence_ar_wi(void);
extern void __llvm_fence_ar_sg(void);
extern void __llvm_fence_ar_wg(void);
extern void __llvm_fence_ar_dev(void);
extern void __llvm_fence_ar_sys(void);
extern void __llvm_fence_sc_wi(void);
extern void __llvm_fence_sc_sg(void);
extern void __llvm_fence_sc_wg(void);
extern void __llvm_fence_sc_dev(void);
extern void __llvm_fence_sc_sys(void);

// Atomics
extern uint __llvm_ld_atomic_a1_x_dev_i32(__global uint *);
extern ulong __llvm_ld_atomic_a1_x_dev_i64(__global ulong *);
extern uint __llvm_ld_atomic_a3_x_wg_i32(__local uint *);
extern ulong __llvm_ld_atomic_a3_x_wg_i64(__local ulong *);

extern void __llvm_st_atomic_a1_x_dev_i32(__global uint *, uint);
extern void __llvm_st_atomic_a1_x_dev_i64(__global ulong *, ulong);
extern void __llvm_st_atomic_a3_x_wg_i32(__local uint *, uint);
extern void __llvm_st_atomic_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_atomic_add_a1_x_dev_i32(__global uint *, uint);
extern ulong __llvm_atomic_add_a1_x_dev_i64(__global ulong *, ulong);
extern uint __llvm_atomic_add_a3_x_wg_i32(__local uint *, uint);
extern ulong __llvm_atomic_add_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_atomic_and_a1_x_dev_i32(__global uint *, uint);
extern ulong __llvm_atomic_and_a1_x_dev_i64(__global ulong *, ulong);
extern uint __llvm_atomic_and_a3_x_wg_i32(__local uint *, uint);
extern ulong __llvm_atomic_and_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_atomic_or_a1_x_dev_i32(__global uint *, uint);
extern ulong __llvm_atomic_or_a1_x_dev_i64(__global ulong *, ulong);
extern uint __llvm_atomic_or_a3_x_wg_i32(__local uint *, uint);
extern ulong __llvm_atomic_or_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_atomic_max_a1_x_dev_i32(__global int *, int);
extern uint __llvm_atomic_umax_a1_x_dev_i32(__global uint *, uint);
extern ulong __llvm_atomic_max_a1_x_dev_i64(__global long *, long);
extern ulong __llvm_atomic_umax_a1_x_dev_i64(__global ulong *, ulong);
extern uint __llvm_atomic_max_a3_x_wg_i32(__local int *, int);
extern uint __llvm_atomic_umax_a3_x_wg_i32(__local uint *, uint);
extern ulong __llvm_atomic_max_a3_x_wg_i64(__local long *, long);
extern ulong __llvm_atomic_umax_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_atomic_min_a1_x_dev_i32(__global int *, int);
extern uint __llvm_atomic_umin_a1_x_dev_i32(__global uint *, uint);
extern ulong __llvm_atomic_min_a1_x_dev_i64(__global long *, long);
extern ulong __llvm_atomic_umin_a1_x_dev_i64(__global ulong *, ulong);
extern uint __llvm_atomic_min_a3_x_wg_i32(__local int *, int);
extern uint __llvm_atomic_umin_a3_x_wg_i32(__local uint *, uint);
extern ulong __llvm_atomic_min_a3_x_wg_i64(__local long *, long);
extern ulong __llvm_atomic_umin_a3_x_wg_i64(__local ulong *, ulong);

extern uint __llvm_cmpxchg_a1_x_x_dev_i32(__global uint *, uint, uint);
extern ulong __llvm_cmpxchg_a1_x_x_dev_i64(__global ulong *, ulong, ulong);
extern uint __llvm_cmpxchg_a3_x_x_wg_i32(__local uint *, uint, uint);
extern ulong __llvm_cmpxchg_a3_x_x_wg_i64(__local ulong *, ulong, ulong);

// Constrained floating point
extern __attribute__((const)) half __llvm_add_rte_f16(half, half);
extern __attribute__((const)) half __llvm_add_rtn_f16(half, half);
extern __attribute__((const)) half __llvm_add_rtp_f16(half, half);
extern __attribute__((const)) half __llvm_add_rtz_f16(half, half);
extern __attribute__((const)) float __llvm_add_rte_f32(float, float);
extern __attribute__((const)) float __llvm_add_rtn_f32(float, float);
extern __attribute__((const)) float __llvm_add_rtp_f32(float, float);
extern __attribute__((const)) float __llvm_add_rtz_f32(float, float);
extern __attribute__((const)) double __llvm_add_rte_f64(double, double);
extern __attribute__((const)) double __llvm_add_rtn_f64(double, double);
extern __attribute__((const)) double __llvm_add_rtp_f64(double, double);
extern __attribute__((const)) double __llvm_add_rtz_f64(double, double);
extern __attribute__((const)) half __llvm_sub_rte_f16(half, half);
extern __attribute__((const)) half __llvm_sub_rtn_f16(half, half);
extern __attribute__((const)) half __llvm_sub_rtp_f16(half, half);
extern __attribute__((const)) half __llvm_sub_rtz_f16(half, half);
extern __attribute__((const)) float __llvm_sub_rte_f32(float, float);
extern __attribute__((const)) float __llvm_sub_rtn_f32(float, float);
extern __attribute__((const)) float __llvm_sub_rtp_f32(float, float);
extern __attribute__((const)) float __llvm_sub_rtz_f32(float, float);
extern __attribute__((const)) double __llvm_sub_rte_f64(double, double);
extern __attribute__((const)) double __llvm_sub_rtn_f64(double, double);
extern __attribute__((const)) double __llvm_sub_rtp_f64(double, double);
extern __attribute__((const)) double __llvm_sub_rtz_f64(double, double);
extern __attribute__((const)) half __llvm_mul_rte_f16(half, half);
extern __attribute__((const)) half __llvm_mul_rtn_f16(half, half);
extern __attribute__((const)) half __llvm_mul_rtp_f16(half, half);
extern __attribute__((const)) half __llvm_mul_rtz_f16(half, half);
extern __attribute__((const)) float __llvm_mul_rte_f32(float, float);
extern __attribute__((const)) float __llvm_mul_rtn_f32(float, float);
extern __attribute__((const)) float __llvm_mul_rtp_f32(float, float);
extern __attribute__((const)) float __llvm_mul_rtz_f32(float, float);
extern __attribute__((const)) double __llvm_mul_rte_f64(double, double);
extern __attribute__((const)) double __llvm_mul_rtn_f64(double, double);
extern __attribute__((const)) double __llvm_mul_rtp_f64(double, double);
extern __attribute__((const)) double __llvm_mul_rtz_f64(double, double);
extern __attribute__((const)) half __llvm_div_rte_f16(half, half);
extern __attribute__((const)) half __llvm_div_rtn_f16(half, half);
extern __attribute__((const)) half __llvm_div_rtp_f16(half, half);
extern __attribute__((const)) half __llvm_div_rtz_f16(half, half);
extern __attribute__((const)) float __llvm_div_rte_f32(float, float);
extern __attribute__((const)) float __llvm_div_rtn_f32(float, float);
extern __attribute__((const)) float __llvm_div_rtp_f32(float, float);
extern __attribute__((const)) float __llvm_div_rtz_f32(float, float);
extern __attribute__((const)) double __llvm_div_rte_f64(double, double);
extern __attribute__((const)) double __llvm_div_rtn_f64(double, double);
extern __attribute__((const)) double __llvm_div_rtp_f64(double, double);
extern __attribute__((const)) double __llvm_div_rtz_f64(double, double);
extern __attribute__((const)) half __llvm_sqrt_rte_f16(half);
extern __attribute__((const)) half __llvm_sqrt_rtn_f16(half);
extern __attribute__((const)) half __llvm_sqrt_rtp_f16(half);
extern __attribute__((const)) half __llvm_sqrt_rtz_f16(half);
extern __attribute__((const)) float __llvm_sqrt_rte_f32(float);
extern __attribute__((const)) float __llvm_sqrt_rtn_f32(float);
extern __attribute__((const)) float __llvm_sqrt_rtp_f32(float);
extern __attribute__((const)) float __llvm_sqrt_rtz_f32(float);
extern __attribute__((const)) double __llvm_sqrt_rte_f64(double);
extern __attribute__((const)) double __llvm_sqrt_rtn_f64(double);
extern __attribute__((const)) double __llvm_sqrt_rtp_f64(double);
extern __attribute__((const)) double __llvm_sqrt_rtz_f64(double);
extern __attribute__((const)) half __llvm_fma_rte_f16(half, half, half);
extern __attribute__((const)) half __llvm_fma_rtn_f16(half, half, half);
extern __attribute__((const)) half __llvm_fma_rtp_f16(half, half, half);
extern __attribute__((const)) half __llvm_fma_rtz_f16(half, half, half);
extern __attribute__((const)) float __llvm_fma_rte_f32(float, float, float);
extern __attribute__((const)) float __llvm_fma_rtn_f32(float, float, float);
extern __attribute__((const)) float __llvm_fma_rtp_f32(float, float, float);
extern __attribute__((const)) float __llvm_fma_rtz_f32(float, float, float);
extern __attribute__((const)) double __llvm_fma_rte_f64(double, double, double);
extern __attribute__((const)) double __llvm_fma_rtn_f64(double, double, double);
extern __attribute__((const)) double __llvm_fma_rtp_f64(double, double, double);
extern __attribute__((const)) double __llvm_fma_rtz_f64(double, double, double);

// AMDGPU intrinsics
extern __attribute__((const)) bool __llvm_amdgcn_class_f16(half, int) __asm("llvm.amdgcn.class.f16");
extern __attribute__((const)) bool __llvm_amdgcn_class_f32(float, int) __asm("llvm.amdgcn.class.f32");
extern __attribute__((const)) bool __llvm_amdgcn_class_f64(double, int) __asm("llvm.amdgcn.class.f64");

extern __attribute__((const)) half __llvm_amdgcn_fract_f16(half) __asm("llvm.amdgcn.fract.f16");
extern __attribute__((const)) float __llvm_amdgcn_fract_f32(float) __asm("llvm.amdgcn.fract.f32");
extern __attribute__((const)) double __llvm_amdgcn_fract_f64(double) __asm("llvm.amdgcn.fract.f64");

extern __attribute__((const)) float __llvm_amdgcn_cos_f32(float) __asm("llvm.amdgcn.cos.f32");

extern __attribute__((const)) half __llvm_amdgcn_rcp_f16(half) __asm("llvm.amdgcn.rcp.f16");
extern __attribute__((const)) float __llvm_amdgcn_rcp_f32(float) __asm("llvm.amdgcn.rcp.f32");
extern __attribute__((const)) double __llvm_amdgcn_rcp_f64(double) __asm("llvm.amdgcn.rcp.f64");

extern __attribute__((const)) half __llvm_amdgcn_rsq_f16(half) __asm("llvm.amdgcn.rsq.f16");
extern __attribute__((const)) float __llvm_amdgcn_rsq_f32(float) __asm("llvm.amdgcn.rsq.f32");
extern __attribute__((const)) double __llvm_amdgcn_rsq_f64(double) __asm("llvm.amdgcn.rsq.f64");

extern __attribute__((const)) float __llvm_amdgcn_sin_f32(float) __asm("llvm.amdgcn.sin.f32");

extern __attribute__((const)) half __llvm_amdgcn_ldexp_f16(half, int) __asm("llvm.amdgcn.ldexp.f16");
extern __attribute__((const)) float __llvm_amdgcn_ldexp_f32(float, int) __asm("llvm.amdgcn.ldexp.f32");
extern __attribute__((const)) double __llvm_amdgcn_ldexp_f64(double, int) __asm("llvm.amdgcn.ldexp.f64");

extern __attribute__((const)) half __llvm_amdgcn_frexp_mant_f16(half) __asm("llvm.amdgcn.frexp.mant.f16");
extern __attribute__((const)) float __llvm_amdgcn_frexp_mant_f32(float) __asm("llvm.amdgcn.frexp.mant.f32");
extern __attribute__((const)) double __llvm_amdgcn_frexp_mant_f64(double) __asm("llvm.amdgcn.frexp.mant.f64");

extern __attribute__((const)) short __llvm_amdgcn_frexp_exp_i16_f16(half) __asm("llvm.amdgcn.frexp.exp.i16.f16");
extern __attribute__((const)) int __llvm_amdgcn_frexp_exp_i32_f32(float) __asm("llvm.amdgcn.frexp.exp.i32.f32");
extern __attribute__((const)) int __llvm_amdgcn_frexp_exp_i32_f64(double) __asm("llvm.amdgcn.frexp.exp.i32.f64");

extern __attribute__((const)) double __llvm_amdgcn_trig_preop_f64(double, int) __asm("llvm.amdgcn.trig.preop.f64");

extern __attribute__((const)) half __llvm_amdgcn_fmed3_f16(half, half, half) __asm("llvm.amdgcn.fmed3.f16");
extern __attribute__((const)) float __llvm_amdgcn_fmed3_f32(float, float, float) __asm("llvm.amdgcn.fmed3.f32");

extern void __llvm_amdgcn_s_sendmsg(uint, uint) __asm("llvm.amdgcn.s.sendmsg");
extern void __llvm_amdgcn_s_barrier(void) __asm("llvm.amdgcn.s.barrier");
extern void __llvm_amdgcn_wave_barrier(void) __asm("llvm.amdgcn.wave.barrier");

extern __attribute__((const)) uint __llvm_amdgcn_workitem_id_x(void) __asm("llvm.amdgcn.workitem.id.x");
extern __attribute__((const)) uint __llvm_amdgcn_workitem_id_y(void) __asm("llvm.amdgcn.workitem.id.y");
extern __attribute__((const)) uint __llvm_amdgcn_workitem_id_z(void) __asm("llvm.amdgcn.workitem.id.z");

extern __attribute__((const)) uint __llvm_amdgcn_workgroup_id_x(void) __asm("llvm.amdgcn.workgroup.id.x");
extern __attribute__((const)) uint __llvm_amdgcn_workgroup_id_y(void) __asm("llvm.amdgcn.workgroup.id.y");
extern __attribute__((const)) uint __llvm_amdgcn_workgroup_id_z(void) __asm("llvm.amdgcn.workgroup.id.z");

extern __attribute__((const)) __constant void *__llvm_amdgcn_dispatch_ptr(void) __asm("llvm.amdgcn.dispatch.ptr");
extern __attribute__((const)) __constant void *__llvm_amdgcn_queue_ptr(void) __asm("llvm.amdgcn.queue.ptr");
extern __attribute__((const)) __constant void *__llvm_amdgcn_kernarg_segment_ptr(void) __asm("llvm.amdgcn.kernarg.segment.ptr");
extern __attribute__((const)) __constant void *__llvm_amdgcn_implicitarg_ptr(void) __asm("llvm.amdgcn.implicitarg.ptr");

extern __attribute__((const)) uint __llvm_amdgcn_groupstaticsize(void) __asm("llvm.amdgcn.groutstaticsize");

extern void __llvm_amdgcn_s_sleep(uint) __asm("llvm.amdgcn.s.sleep");
extern ulong __llvm_amdgcn_s_memtime(void) __asm("llvm.amdgcn.s.memtime");
extern ulong __llvm_amdgcn_s_memrealtime(void) __asm("llvm.amdgcn.s.memrealtime");

extern uint __llvm_amdgcn_ds_bpermute(uint, uint) __asm("llvm.amdgcn.ds.bpermute");
extern uint __llvm_amdgcn_ds_swizzle(uint, uint) __asm("llvm.amdgcn.ds.swizzle");

// llvm.amdgcn.mov.dpp.i32 <src> <dpp_ctrl> <row_mask> <bank_mask> <bound_ctrl>
extern uint __llvm_amdgcn_mov_dpp_i32(uint, uint, uint, uint, bool) __asm("llvm.amdgcn.mov.dpp.i32");

// Operand bits: [0..3]=VM_CNT, [4..6]=EXP_CNT (Export), [8..11]=LGKM_CNT (LDS, GDS, Konstant, Message)
extern void __llvm_amdgcn_s_waitcnt(int) __asm("llvm.amdgcn.s.waitcnt");

extern void __llvm_amdgcn_s_dcache_inv_vol(void) __asm("llvm.amdgcn.s.dcache.inv.vol");
extern void __llvm_amdgcn_s_dcache_wb(void) __asm("llvm.amdgcn.s.dcache.wb");
extern void __llvm_amdgcn_s_dcache_wb_vol(void) __asm("llvm.amdgcn.s.dcache.wb.vol");
extern void __llvm_amdcgn_buffer_wbinvl1_vol(void) __asm("llvm.amdgcn.buffer.wbinvl1.vol");

extern __attribute__((const)) uint __llvm_amdgcn_mbcnt_lo(uint, uint) __asm("llvm.amdgcn.mbcnt.lo");
extern __attribute__((const)) uint __llvm_amdgcn_mbcnt_hi(uint, uint) __asm("llvm.amdgcn.mbcnt.hi");

extern __attribute__((convergent)) ulong __llvm_amdgcn_read_exec(void);
extern __attribute__((convergent)) uint __llvm_amdgcn_read_exec_lo(void);
extern __attribute__((convergent)) uint __llvm_amdgcn_read_exec_hi(void);

extern uint __llvm_amdgcn_s_getreg(uint) __asm("llvm.amdgcn.s.getreg");

extern uint __llvm_amdgcn_readfirstlane(uint) __asm("llvm.amdgcn.readfirstlane");
extern uint __llvm_amdgcn_readlane(uint, uint) __asm("llvm.amdgcn.readlane");

extern __attribute__((const)) uint __llvm_amdgcn_ubfe_i32(uint, uint, uint) __asm("llvm.amdgcn.ubfe.i32");
extern __attribute__((const)) int __llvm_amdgcn_sbfe_i32(int, uint, uint) __asm("llvm.amdgcn.sbfe.i32");

extern __attribute__((const)) uint __llvm_amdgcn_alignbit(uint, uint, uint) __asm("llvm.amdgcn.alignbit");
extern __attribute__((const)) uint __llvm_amdgcn_alignbyte(uint, uint, uint) __asm("llvm.amdgcn.alignbyte");

extern __attribute__((const)) uint __llvm_amdgcn_lerp(uint, uint, uint) __asm("llvm.amdgcn.lerp");
extern __attribute__((const)) ulong __llvm_amdgcn_mqsad_pk_u16_u8(ulong, uint, ulong) __asm("llvm.amdgcn.mqsad.pk.u16.u8");
extern __attribute__((const)) uint __llvm_amdgcn_cvt_pk_u8_f32(float, uint, uint) __asm("llvm.amdgcn.cvt.pk.u8.f32");
extern __attribute__((const)) ulong __llvm_amdgcn_qsad_pk_u16_u8(ulong, uint, ulong) __asm("llvm.amdgcn.qsad.pk.u16.u8");
extern __attribute__((const)) uint __llvm_amdgcn_sad_u8(uint, uint, uint) __asm("llvm.amdgcn.sad.u8");
extern __attribute__((const)) uint __llvm_amdgcn_sad_hi_u8(uint, uint, uint) __asm("llvm.amdgcn.sad.hi.u8");
extern __attribute__((const)) uint __llvm_amdgcn_sad_u16(uint, uint, uint) __asm("llvm.amdgcn.sad.u16");
extern __attribute__((const)) uint __llvm_amdgcn_msad_u8(uint, uint, uint) __asm("llvm.amdgcn.msad.u8");

extern __attribute__((const)) ulong __llvm_amdgcn_icmp_i32(uint, uint, uint) __asm("llvm.amdgcn.icmp.i32");
extern __attribute__((const)) ulong __llvm_amdgcn_icmp_i64(ulong, ulong, uint) __asm("llvm.amdgcn.icmp.i64");
extern __attribute__((const)) ulong __llvm_amdgcn_fcmp_f32(float, float, uint) __asm("llvm.amdgcn.fcmp.f32");
extern __attribute__((const)) ulong __llvm_amdgcn_fcmp_f64(double, double, uint) __asm("llvm.amdgcn.fcmp.f64");

extern __attribute__((const)) float __llvm_amdgcn_cubeid(float, float, float) __asm("llvm.amdgcn.cubeid");
extern __attribute__((const)) float __llvm_amdgcn_cubema(float, float, float) __asm("llvm.amdgcn.cubema");
extern __attribute__((const)) float __llvm_amdgcn_cubesc(float, float, float) __asm("llvm.amdgcn.cubesc");
extern __attribute__((const)) float __llvm_amdgcn_cubetc(float, float, float) __asm("llvm.amdgcn.cubetc");

// Buffer Load/Store

extern __attribute__((pure)) float4 __llvm_amdgcn_buffer_load_format_v4f32(uint4 v, uint i, uint o, bool glc, bool slc) __asm("llvm.amdgcn.buffer.load.format.v4f32");
extern __attribute__((pure)) half4 __llvm_amdgcn_buffer_load_format_v4f16(uint4 v, uint i, uint o, bool glc, bool slc) __asm("llvm.amdgcn.buffer.load.format.v4f16");
extern void __llvm_amdgcn_buffer_store_format_v4f32(float4 p, uint4 v, uint i, uint o, bool glc, bool slc) __asm("llvm.amdgcn.buffer.store.format.v4f32");
extern void __llvm_amdgcn_buffer_store_format_v4f16(half4 p, uint4 v, uint i, uint o, bool glc, bool slc) __asm("llvm.amdgcn.buffer.store.format.v4f16");

// Image Load
extern __attribute__((pure)) float4 __llvm_amdgcn_image_load_v4f32_i32(int c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f32.i32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_load_v4f32_v2i32(int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f32.v2i32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_load_v4f32_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f32.v4i32.v8i32");

extern __attribute__((pure)) float4 __llvm_amdgcn_image_load_mip_v4f32_v2i32(int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.mip.v4f32.v2i32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_load_mip_v4f32_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.mip.v4f32.v4i32.v8i32");

extern __attribute__((pure)) half4 __llvm_amdgcn_image_load_v4f16_i32(int c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f16.i32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_load_v4f16_v2i32(int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f16.v2i32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_load_v4f16_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.v4f16.v4i32.v8i32");

extern __attribute__((pure)) half4 __llvm_amdgcn_image_load_mip_v4f16_v2i32(int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.mip.v4f16.v2i32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_load_mip_v4f16_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.mip.v4f16.v4i32.v8i32");

// Depth Image load

extern __attribute__((pure)) float __llvm_amdgcn_image_load_f32_v2i32(int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.f32.v2i32.v8i32");
extern __attribute__((pure)) float __llvm_amdgcn_image_load_f32_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.f32.v4i32.v8i32");

extern __attribute__((pure)) float __llvm_amdgcn_image_load_mip_f32_v4i32(int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.load.mip.f32.v4i32.v8i32");

// Image Store
extern void __llvm_amdgcn_image_store_v4f32_i32(float4 p, int c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f32.i32.v8i32");
extern void __llvm_amdgcn_image_store_v4f32_v2i32(float4 p, int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f32.v2i32.v8i32");
extern void __llvm_amdgcn_image_store_v4f32_v4i32(float4 p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f32.v4i32.v8i32");

extern void __llvm_amdgcn_image_store_mip_v4f32_v2i32(float4 p, int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.mip.v4f32.v2i32.v8i32");
extern void __llvm_amdgcn_image_store_mip_v4f32_v4i32(float4 p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.mip.v4f32.v4i32.v8i32");

extern void __llvm_amdgcn_image_store_v4f16_i32(half4 p, int c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f16.i32.v8i32");
extern void __llvm_amdgcn_image_store_v4f16_v2i32(half4 p, int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f16.v2i32.v8i32");
extern void __llvm_amdgcn_image_store_v4f16_v4i32(half4 p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.v4f16.v4i32.v8i32");

extern void __llvm_amdgcn_image_store_mip_v4f16_v2i32(half4 p, int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.mip.v4f16.v2i32.v8i32");
extern void __llvm_amdgcn_image_store_mip_v4f16_v4i32(half4 p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.mip.v4f16.v4i32.v8i32");

// Depth image store

extern void __llvm_amdgcn_image_store_f32_v2i32(float p, int2 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.f32.v2i32.v8i32");
extern void __llvm_amdgcn_image_store_f32_v4i32(float p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.f32.v4i32.v8i32");

extern void __llvm_amdgcn_image_store_mip_f32_v4i32(float p, int4 c, uint8 t, uint dmask, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.store.mip.f32.v4i32.v8i32");

// Image Sample: Only expose 8 word T# and a few of the other combinations
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_lz_v4f32_f32(float c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f32.f32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_lz_v4f32_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f32.v2f32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_lz_v4f32_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f32.v4f32.v8i32");

extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_l_v4f32_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f32.v2f32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_l_v4f32_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f32.v4f32.v8i32");

extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_d_v4f32_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f32.v4f32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_d_v4f32_v8f32(float8 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f32.v8f32.v8i32");
extern __attribute__((pure)) float4 __llvm_amdgcn_image_sample_d_v4f32_v16f32(float16 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f32.v16f32.v8i32");

extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_lz_v4f16_f32(float c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f16.f32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_lz_v4f16_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f16.v2f32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_lz_v4f16_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.v4f16.v4f32.v8i32");

extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_l_v4f16_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f16.v2f32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_l_v4f16_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f16.v4f32.v8i32");

extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_d_v4f16_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f16.v4f32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_d_v4f16_v8f32(float8 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f16.v8f32.v8i32");
extern __attribute__((pure)) half4 __llvm_amdgcn_image_sample_d_v4f16_v16f32(float16 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.v4f16.v16f32.v8i32");

// depth image sample
extern __attribute__((pure)) float __llvm_amdgcn_image_sample_lz_f32_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.f32.v2f32.v8i32");
extern __attribute__((pure)) float __llvm_amdgcn_image_sample_lz_f32_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.lz.f32.v4f32.v8i32");

extern __attribute__((pure)) float __llvm_amdgcn_image_sample_l_f32_v4f32(float4 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.f32.v4f32.v8i32");

extern __attribute__((pure)) float __llvm_amdgcn_image_sample_d_f32_v8f32(float8 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.f32.v8f32.v8i32");
extern __attribute__((pure)) float __llvm_amdgcn_image_sample_d_f32_v16f32(float16 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
    __asm("llvm.amdgcn.image.sample.l.f32.v16f32.v8i32");

// image fetch
extern __attribute__((pure)) float4 __llvm_amdgcn_image_gather4_lz_v4f32_v2f32(float2 c, uint8 t, uint4 s, uint dmask, bool unorm, bool glc, bool slc, bool lwe, bool da)
        __asm("llvm.amdgcn.image.gather4.lz.v4f32.v2f32.v8i32");

#pragma OPENCL EXTENSION cl_khr_fp16 : disable
#endif // IRIF_H
