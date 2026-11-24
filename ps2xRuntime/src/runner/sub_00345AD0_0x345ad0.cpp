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

// Function: sub_00345AD0
// Address: 0x345ad0 - 0x345c50
void sub_00345AD0_0x345ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345AD0_0x345ad0");
#endif

    switch (ctx->pc) {
        case 0x345b38u: goto label_345b38;
        case 0x345c38u: goto label_345c38;
        default: break;
    }

    ctx->pc = 0x345ad0u;

    // 0x345ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x345ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x345ad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x345ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x345adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x345adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x345ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x345ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x345ae4: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x345ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x345ae8: 0x8c920080  lw          $s2, 0x80($a0)
    ctx->pc = 0x345ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x345aec: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x345aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x345af0: 0x864300ca  lh          $v1, 0xCA($s2)
    ctx->pc = 0x345af0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 202)));
    // 0x345af4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x345af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x345af8: 0x864700cc  lh          $a3, 0xCC($s2)
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x345afc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x345afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345b00: 0x864200c8  lh          $v0, 0xC8($s2)
    ctx->pc = 0x345b00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 200)));
    // 0x345b04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x345b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b08: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x345b08u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345b0c: 0x0  nop
    ctx->pc = 0x345b0cu;
    // NOP
    // 0x345b10: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x345b10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x345b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b18: 0x0  nop
    ctx->pc = 0x345b18u;
    // NOP
    // 0x345b1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x345b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x345b20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345b24: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x345b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x345b28: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x345b28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x345b2c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x345b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x345b30: 0xc0414ca  jal         func_105328
    ctx->pc = 0x345B30u;
    SET_GPR_U32(ctx, 31, 0x345B38u);
    ctx->pc = 0x345B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345B30u;
    // 0x345b34: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x345B30u, 0x345B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B38u;
label_345b38:
    // 0x345b38: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x345b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345b3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345b40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345b44: 0x0  nop
    ctx->pc = 0x345b44u;
    // NOP
    // 0x345b48: 0x28411001  slti        $at, $v0, 0x1001
    ctx->pc = 0x345b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x345b4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x345B4Cu;
    {
        const bool branch_taken_0x345b4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x345b4c) {
            ctx->pc = 0x345B58u;
            goto label_345b58;
        }
    }
    ctx->pc = 0x345B54u;
    // 0x345b54: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x345b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_345b58:
    // 0x345b58: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345B58u;
    {
        const bool branch_taken_0x345b58 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x345b58) {
            ctx->pc = 0x345B68u;
            goto label_345b68;
        }
    }
    ctx->pc = 0x345B60u;
    // 0x345b60: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x345b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x345b64: 0x0  nop
    ctx->pc = 0x345b64u;
    // NOP
label_345b68:
    // 0x345b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b6c: 0x0  nop
    ctx->pc = 0x345b6cu;
    // NOP
    // 0x345b70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345b74: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x345b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x345b78: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x345b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345b7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345b7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345b80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345b80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345b84: 0x0  nop
    ctx->pc = 0x345b84u;
    // NOP
    // 0x345b88: 0x28411001  slti        $at, $v0, 0x1001
    ctx->pc = 0x345b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x345b8c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x345B8Cu;
    {
        const bool branch_taken_0x345b8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x345b8c) {
            ctx->pc = 0x345B98u;
            goto label_345b98;
        }
    }
    ctx->pc = 0x345B94u;
    // 0x345b94: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x345b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_345b98:
    // 0x345b98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345B98u;
    {
        const bool branch_taken_0x345b98 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x345b98) {
            ctx->pc = 0x345BA8u;
            goto label_345ba8;
        }
    }
    ctx->pc = 0x345BA0u;
    // 0x345ba0: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x345ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x345ba4: 0x0  nop
    ctx->pc = 0x345ba4u;
    // NOP
label_345ba8:
    // 0x345ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bac: 0x0  nop
    ctx->pc = 0x345bacu;
    // NOP
    // 0x345bb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345bb4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x345bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x345bb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x345bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345bbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345bbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345bc0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345bc4: 0x0  nop
    ctx->pc = 0x345bc4u;
    // NOP
    // 0x345bc8: 0x28411001  slti        $at, $v0, 0x1001
    ctx->pc = 0x345bc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4097) ? 1 : 0);
    // 0x345bcc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x345BCCu;
    {
        const bool branch_taken_0x345bcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x345bcc) {
            ctx->pc = 0x345BD8u;
            goto label_345bd8;
        }
    }
    ctx->pc = 0x345BD4u;
    // 0x345bd4: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x345bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
label_345bd8:
    // 0x345bd8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x345BD8u;
    {
        const bool branch_taken_0x345bd8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x345bd8) {
            ctx->pc = 0x345BE8u;
            goto label_345be8;
        }
    }
    ctx->pc = 0x345BE0u;
    // 0x345be0: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x345be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
    // 0x345be4: 0x0  nop
    ctx->pc = 0x345be4u;
    // NOP
label_345be8:
    // 0x345be8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x345be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345bf0: 0x264500c8  addiu       $a1, $s2, 0xC8
    ctx->pc = 0x345bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x345bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345bf8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x345bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x345bfc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x345bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345c04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345c08: 0x0  nop
    ctx->pc = 0x345c08u;
    // NOP
    // 0x345c0c: 0xa64200c8  sh          $v0, 0xC8($s2)
    ctx->pc = 0x345c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 200), (uint16_t)GPR_U32(ctx, 2));
    // 0x345c10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x345c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345c14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345c18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345c18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345c1c: 0x0  nop
    ctx->pc = 0x345c1cu;
    // NOP
    // 0x345c20: 0xa64200ca  sh          $v0, 0xCA($s2)
    ctx->pc = 0x345c20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 202), (uint16_t)GPR_U32(ctx, 2));
    // 0x345c24: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x345c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x345c2c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345c30: 0xc04d60c  jal         func_135830
    ctx->pc = 0x345C30u;
    SET_GPR_U32(ctx, 31, 0x345C38u);
    ctx->pc = 0x345C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C30u;
    // 0x345c34: 0xa64200cc  sh          $v0, 0xCC($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 204), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135830u, 0x345C30u, 0x345C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C38u;
label_345c38:
    // 0x345c38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345c3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x345c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345c48: 0x3e00008  jr          $ra
    ctx->pc = 0x345C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C48u;
        // 0x345c4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345C50u;
}
