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

// Function: sub_0020CC60
// Address: 0x20cc60 - 0x20cd18
void sub_0020CC60_0x20cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CC60_0x20cc60");
#endif

    switch (ctx->pc) {
        case 0x20cc9cu: goto label_20cc9c;
        default: break;
    }

    ctx->pc = 0x20cc60u;

    // 0x20cc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cc68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20cc6c: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x20cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20cc70: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20cc74: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20CC74u;
    {
        const bool branch_taken_0x20cc74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC74u;
        // 0x20cc78: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc74) {
            ctx->pc = 0x20CD08u;
            goto label_20cd08;
        }
    }
    ctx->pc = 0x20CC7Cu;
    // 0x20cc7c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CC7Cu;
    {
        const bool branch_taken_0x20cc7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC7Cu;
        // 0x20cc80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc7c) {
            ctx->pc = 0x20CC90u;
            goto label_20cc90;
        }
    }
    ctx->pc = 0x20CC84u;
    // 0x20cc84: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20CC84u;
    {
        const bool branch_taken_0x20cc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC84u;
        // 0x20cc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc84) {
            ctx->pc = 0x20CCF4u;
            goto label_20ccf4;
        }
    }
    ctx->pc = 0x20CC8Cu;
    // 0x20cc8c: 0x0  nop
    ctx->pc = 0x20cc8cu;
    // NOP
label_20cc90:
    // 0x20cc90: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x20cc90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20cc94: 0xc047b94  jal         func_11EE50
    ctx->pc = 0x20CC94u;
    SET_GPR_U32(ctx, 31, 0x20CC9Cu);
    ctx->pc = 0x20CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CC94u;
    // 0x20cc98: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE50u, 0x20CC94u, 0x20CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CC9Cu;
label_20cc9c:
    // 0x20cc9c: 0x3c0140dd  lui         $at, 0x40DD
    ctx->pc = 0x20cc9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16605 << 16));
    // 0x20cca0: 0x34210c54  ori         $at, $at, 0xC54
    ctx->pc = 0x20cca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3156);
    // 0x20cca4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20cca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20cca8: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x20cca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x20ccac: 0x3421677d  ori         $at, $at, 0x677D
    ctx->pc = 0x20ccacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26493);
    // 0x20ccb0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20ccb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20ccb4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20ccb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20ccb8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x20ccbc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20ccbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x20ccc0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20ccc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20ccc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20ccc8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20ccc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20cccc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ccccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x20ccd0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x20ccd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20ccd4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20ccd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20ccd8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x20ccd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20ccdc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x20ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20cce0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20cce4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x20cce8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20ccec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ccf0: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x20ccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ccf4:
    // 0x20ccf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20ccf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ccf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ccf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ccfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ccfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cd00: 0x808eeec  j           func_23BBB0
    ctx->pc = 0x20CD00u;
    ctx->pc = 0x20CD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CD00u;
    // 0x20cd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BBB0u;
    sub_0023BBB0_0x23bbb0(rdram, ctx, runtime); return;
    ctx->pc = 0x20CD08u;
label_20cd08:
    // 0x20cd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cd0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20cd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cd10: 0x3e00008  jr          $ra
    ctx->pc = 0x20CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CD10u;
        // 0x20cd14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CD18u;
}
