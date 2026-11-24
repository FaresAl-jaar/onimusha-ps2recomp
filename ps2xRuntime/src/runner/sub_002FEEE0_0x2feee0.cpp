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

// Function: sub_002FEEE0
// Address: 0x2feee0 - 0x2fef40
void sub_002FEEE0_0x2feee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEEE0_0x2feee0");
#endif

    switch (ctx->pc) {
        case 0x2fef10u: goto label_2fef10;
        case 0x2fef28u: goto label_2fef28;
        default: break;
    }

    ctx->pc = 0x2feee0u;

    // 0x2feee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2feee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2feee4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2feee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2feee8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2feee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2feeec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2feeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2feef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2feef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feef4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2FEEF4u;
    {
        const bool branch_taken_0x2feef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEEF4u;
        // 0x2feef8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2feef4) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEEFCu;
    // 0x2feefc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2feefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2fef00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fef00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef04: 0x24427f80  addiu       $v0, $v0, 0x7F80
    ctx->pc = 0x2fef04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32640));
    // 0x2fef08: 0xc096b20  jal         func_25AC80
    ctx->pc = 0x2FEF08u;
    SET_GPR_U32(ctx, 31, 0x2FEF10u);
    ctx->pc = 0x2FEF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEF08u;
    // 0x2fef0c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC80u, 0x2FEF08u, 0x2FEF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF10u;
label_2fef10:
    // 0x2fef10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2fef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2fef14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2fef14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2fef18: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEF18u;
    {
        const bool branch_taken_0x2fef18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2FEF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF18u;
        // 0x2fef1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fef18) {
            ctx->pc = 0x2FEF28u;
            goto label_2fef28;
        }
    }
    ctx->pc = 0x2FEF20u;
    // 0x2fef20: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x2FEF20u;
    SET_GPR_U32(ctx, 31, 0x2FEF28u);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x2FEF20u, 0x2FEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEF28u;
label_2fef28:
    // 0x2fef28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fef28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fef2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fef2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fef30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fef30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fef34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fef34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fef38: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEF38u;
        // 0x2fef3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEF40u;
}
