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

// Function: sub_003929D0
// Address: 0x3929d0 - 0x392a9c
void sub_003929D0_0x3929d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003929D0_0x3929d0");
#endif

    switch (ctx->pc) {
        case 0x392a78u: goto label_392a78;
        default: break;
    }

    ctx->pc = 0x3929d0u;

    // 0x3929d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3929d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3929d4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x3929d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3929d8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3929D8u;
    {
        const bool branch_taken_0x3929d8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3929DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929D8u;
        // 0x3929dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929d8) {
            ctx->pc = 0x3929ECu;
            goto label_3929ec;
        }
    }
    ctx->pc = 0x3929E0u;
    // 0x3929e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3929e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3929e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3929E4u;
    {
        const bool branch_taken_0x3929e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3929E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3929E4u;
        // 0x3929e8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3929e4) {
            ctx->pc = 0x392A08u;
            goto label_392a08;
        }
    }
    ctx->pc = 0x3929ECu;
label_3929ec:
    // 0x3929ec: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3929ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3929f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3929f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3929f4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3929f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3929f8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3929f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3929fc: 0x0  nop
    ctx->pc = 0x3929fcu;
    // NOP
    // 0x392a00: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x392a00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x392a04: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x392a04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_392a08:
    // 0x392a08: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392a0c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392a10: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x392a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392a14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392a18: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x392a18u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392a20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392a20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392a24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392a28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392a2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392A2Cu;
    {
        const bool branch_taken_0x392a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x392a2c) {
            ctx->pc = 0x392A44u;
            goto label_392a44;
        }
    }
    ctx->pc = 0x392A34u;
    // 0x392a34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392a38: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392a3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392A3Cu;
    {
        const bool branch_taken_0x392a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A3Cu;
        // 0x392a40: 0x8c83003c  lw          $v1, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392a3c) {
            ctx->pc = 0x392A60u;
            goto label_392a60;
        }
    }
    ctx->pc = 0x392A44u;
label_392a44:
    // 0x392a44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392a44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392a48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392a4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392a50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392a50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392a54: 0x0  nop
    ctx->pc = 0x392a54u;
    // NOP
    // 0x392a58: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x392a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x392a5c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x392a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_392a60:
    // 0x392a60: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x392a60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x392a64: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x392A64u;
    {
        const bool branch_taken_0x392a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x392a64) {
            ctx->pc = 0x392A80u;
            goto label_392a80;
        }
    }
    ctx->pc = 0x392A6Cu;
    // 0x392a6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x392a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392a70: 0xc0e4aa8  jal         func_392AA0
    ctx->pc = 0x392A70u;
    SET_GPR_U32(ctx, 31, 0x392A78u);
    ctx->pc = 0x392A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392A70u;
    // 0x392a74: 0xac82003c  sw          $v0, 0x3C($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AA0u, 0x392A70u, 0x392A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392A78u;
label_392a78:
    // 0x392a78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x392A78u;
    {
        const bool branch_taken_0x392a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392a78) {
            ctx->pc = 0x392A90u;
            goto label_392a90;
        }
    }
    ctx->pc = 0x392A80u;
label_392a80:
    // 0x392a80: 0x90830031  lbu         $v1, 0x31($a0)
    ctx->pc = 0x392a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x392a84: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x392a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x392a88: 0xa0830031  sb          $v1, 0x31($a0)
    ctx->pc = 0x392a88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 49), (uint8_t)GPR_U32(ctx, 3));
    // 0x392a8c: 0x0  nop
    ctx->pc = 0x392a8cu;
    // NOP
label_392a90:
    // 0x392a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x392a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392a94: 0x3e00008  jr          $ra
    ctx->pc = 0x392A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392A94u;
        // 0x392a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392A9Cu;
}
