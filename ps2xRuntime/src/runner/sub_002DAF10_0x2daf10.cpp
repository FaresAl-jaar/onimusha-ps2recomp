#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DAF10
// Address: 0x2daf10 - 0x2db0b0
void sub_002DAF10_0x2daf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAF10_0x2daf10");
#endif

    switch (ctx->pc) {
        case 0x2daf78u: goto label_2daf78;
        case 0x2daf80u: goto label_2daf80;
        case 0x2daf90u: goto label_2daf90;
        case 0x2dafa4u: goto label_2dafa4;
        case 0x2dafb4u: goto label_2dafb4;
        case 0x2dafbcu: goto label_2dafbc;
        case 0x2dafc4u: goto label_2dafc4;
        case 0x2db074u: goto label_2db074;
        default: break;
    }

    ctx->pc = 0x2daf10u;

    // 0x2daf10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2daf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2daf14: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2daf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2daf18: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2daf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2daf1c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2daf1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2daf20: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2daf20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf24: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2daf24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2daf28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2daf28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2daf2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2daf30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2daf30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2daf34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2daf38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2daf38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2daf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2daf40: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2daf40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2daf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2daf48: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2daf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf4c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2daf4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2daf50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2daf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2daf54: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2daf54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2daf58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2daf58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2daf5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2daf60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2daf60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf64: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2daf64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2daf68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2daf68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf6c: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2daf6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2daf70: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x2DAF70u;
    SET_GPR_U32(ctx, 31, 0x2DAF78u);
    ctx->pc = 0x2DAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF70u;
    // 0x2daf74: 0x46007586  mov.s       $f22, $f14 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x2DAF70u, 0x2DAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF78u;
label_2daf78:
    // 0x2daf78: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x2DAF78u;
    SET_GPR_U32(ctx, 31, 0x2DAF80u);
    ctx->pc = 0x2DAF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF78u;
    // 0x2daf7c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x2DAF78u, 0x2DAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF80u;
label_2daf80:
    // 0x2daf80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2daf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf84: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2daf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2daf88: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2DAF88u;
    SET_GPR_U32(ctx, 31, 0x2DAF90u);
    ctx->pc = 0x2DAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF88u;
    // 0x2daf8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2DAF88u, 0x2DAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAF90u;
label_2daf90:
    // 0x2daf90: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2daf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2daf94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2daf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2daf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2daf9c: 0xc074350  jal         func_1D0D40
    ctx->pc = 0x2DAF9Cu;
    SET_GPR_U32(ctx, 31, 0x2DAFA4u);
    ctx->pc = 0x2DAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAF9Cu;
    // 0x2dafa0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D40u, 0x2DAF9Cu, 0x2DAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFA4u;
label_2dafa4:
    // 0x2dafa4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2dafa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dafa8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dafa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dafac: 0xc074378  jal         func_1D0DE0
    ctx->pc = 0x2DAFACu;
    SET_GPR_U32(ctx, 31, 0x2DAFB4u);
    ctx->pc = 0x2DAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFACu;
    // 0x2dafb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0DE0u, 0x2DAFACu, 0x2DAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFB4u;
label_2dafb4:
    // 0x2dafb4: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x2DAFB4u;
    SET_GPR_U32(ctx, 31, 0x2DAFBCu);
    ctx->pc = 0x2DAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFB4u;
    // 0x2dafb8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x2DAFB4u, 0x2DAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFBCu;
label_2dafbc:
    // 0x2dafbc: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x2DAFBCu;
    SET_GPR_U32(ctx, 31, 0x2DAFC4u);
    ctx->pc = 0x2DAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DAFBCu;
    // 0x2dafc0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x2DAFBCu, 0x2DAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAFC4u;
label_2dafc4:
    // 0x2dafc4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2dafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2dafc8: 0x16643c  dsll32      $t4, $s6, 16
    ctx->pc = 0x2dafc8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 22) << (32 + 16));
    // 0x2dafcc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2dafccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dafd0: 0x94460004  lhu         $a2, 0x4($v0)
    ctx->pc = 0x2dafd0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dafd4: 0x84480008  lh          $t0, 0x8($v0)
    ctx->pc = 0x2dafd4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dafd8: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x2dafd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2dafdc: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x2dafdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x2dafe0: 0x94470006  lhu         $a3, 0x6($v0)
    ctx->pc = 0x2dafe0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2dafe4: 0x8449000a  lh          $t1, 0xA($v0)
    ctx->pc = 0x2dafe4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2dafe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dafe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dafec: 0x7a2d0000  lq          $t5, 0x0($s1)
    ctx->pc = 0x2dafecu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2daff0: 0xc643f  dsra32      $t4, $t4, 16
    ctx->pc = 0x2daff0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x2daff4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x2daff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x2daff8: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x2daff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x2daffc: 0x3465fff0  ori         $a1, $v1, 0xFFF0
    ctx->pc = 0x2daffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x2db000: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2db000u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2db004: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2db004u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db008: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x2db008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x2db00c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2db010: 0x7fad0090  sq          $t5, 0x90($sp)
    ctx->pc = 0x2db010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 13));
    // 0x2db014: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2db014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2db018: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x2db018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2db01c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2db01cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2db020: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x2db020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
    // 0x2db024: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2db024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db028: 0x8442000a  lh          $v0, 0xA($v0)
    ctx->pc = 0x2db028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2db02c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2db02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2db030: 0x0  nop
    ctx->pc = 0x2db030u;
    // NOP
    // 0x2db034: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2db034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2db038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db03c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x2db03cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2db040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2db040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2db044: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2db044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2db048: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2db048u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2db04c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2db04cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2db050: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2db050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2db054: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2db054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2db058: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x2db058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2db05c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2db05cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2db060: 0x46011bc2  mul.s       $f15, $f3, $f1
    ctx->pc = 0x2db060u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2db064: 0x46001b42  mul.s       $f13, $f3, $f0
    ctx->pc = 0x2db064u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2db068: 0x4602ab80  add.s       $f14, $f21, $f2
    ctx->pc = 0x2db068u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
    // 0x2db06c: 0xc075458  jal         func_1D5160
    ctx->pc = 0x2DB06Cu;
    SET_GPR_U32(ctx, 31, 0x2DB074u);
    ctx->pc = 0x2DB070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB06Cu;
    // 0x2db070: 0x4602ab01  sub.s       $f12, $f21, $f2 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5160u, 0x2DB06Cu, 0x2DB074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB074u;
label_2db074:
    // 0x2db074: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2db074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2db078: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2db078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2db07c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2db07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db080: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2db080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2db084: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2db084u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db088: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2db088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2db08c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2db08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db090: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2db090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db094: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2db094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db098: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2db098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db09c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2db09cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db0a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2db0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db0a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0A8u;
        // 0x2db0ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB0B0u;
}
