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

// Function: sub_0024ADA0
// Address: 0x24ada0 - 0x24ae68
void sub_0024ADA0_0x24ada0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024ADA0_0x24ada0");
#endif

    switch (ctx->pc) {
        case 0x24ade8u: goto label_24ade8;
        case 0x24ae10u: goto label_24ae10;
        default: break;
    }

    ctx->pc = 0x24ada0u;

    // 0x24ada0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24ada0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24ada4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24ada4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x24ada8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x24ada8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24adb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24adb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24adb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24adb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adbc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24adbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24adc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24adc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adc4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x24adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x24adc8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x24adc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24adccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24add0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24add4: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x24ADD4u;
    {
        const bool branch_taken_0x24add4 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x24ADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADD4u;
        // 0x24add8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24add4) {
            ctx->pc = 0x24AE38u;
            goto label_24ae38;
        }
    }
    ctx->pc = 0x24ADDCu;
    // 0x24addc: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24ade0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x24ade0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ade4: 0x24551100  addiu       $s5, $v0, 0x1100
    ctx->pc = 0x24ade4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4352));
label_24ade8:
    // 0x24ade8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x24ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x24adec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24adf0: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x24adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x24adf4: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x24adf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24adf8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x24adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x24adfc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x24adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24ae00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24ae00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x24ae04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24ae08: 0xc0929c8  jal         func_24A720
    ctx->pc = 0x24AE08u;
    SET_GPR_U32(ctx, 31, 0x24AE10u);
    ctx->pc = 0x24AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE08u;
    // 0x24ae0c: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A720u, 0x24AE08u, 0x24AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE10u;
label_24ae10:
    // 0x24ae10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AE10u;
    {
        const bool branch_taken_0x24ae10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE10u;
        // 0x24ae14: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae10) {
            ctx->pc = 0x24AE30u;
            goto label_24ae30;
        }
    }
    ctx->pc = 0x24AE18u;
    // 0x24ae18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ae1c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x24ae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x24ae20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24ae24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24AE24u;
    {
        const bool branch_taken_0x24ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE24u;
        // 0x24ae28: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae24) {
            ctx->pc = 0x24AE40u;
            goto label_24ae40;
        }
    }
    ctx->pc = 0x24AE2Cu;
    // 0x24ae2c: 0x0  nop
    ctx->pc = 0x24ae2cu;
    // NOP
label_24ae30:
    // 0x24ae30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x24AE30u;
    {
        const bool branch_taken_0x24ae30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE30u;
        // 0x24ae34: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae30) {
            ctx->pc = 0x24ADE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ade8;
        }
    }
    ctx->pc = 0x24AE38u;
label_24ae38:
    // 0x24ae38: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x24ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x24ae3c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x24ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_24ae40:
    // 0x24ae40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ae40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ae44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ae44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ae48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24ae48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ae4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24ae4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ae50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24ae50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ae54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24ae54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ae58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x24ae58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ae5c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24ae5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE60u;
        // 0x24ae64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE68u;
}
