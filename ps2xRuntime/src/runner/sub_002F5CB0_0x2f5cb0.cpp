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

// Function: sub_002F5CB0
// Address: 0x2f5cb0 - 0x2f5d34
void sub_002F5CB0_0x2f5cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5CB0_0x2f5cb0");
#endif

    switch (ctx->pc) {
        case 0x2f5cd4u: goto label_2f5cd4;
        case 0x2f5ce8u: goto label_2f5ce8;
        case 0x2f5d00u: goto label_2f5d00;
        default: break;
    }

    ctx->pc = 0x2f5cb0u;

    // 0x2f5cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f5cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f5cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f5cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f5cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f5cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5cc0: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f5cc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f5cc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5CC4u;
    {
        const bool branch_taken_0x2f5cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CC4u;
        // 0x2f5cc8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cc4) {
            ctx->pc = 0x2F5CE0u;
            goto label_2f5ce0;
        }
    }
    ctx->pc = 0x2F5CCCu;
    // 0x2f5ccc: 0xc09ac98  jal         func_26B260
    ctx->pc = 0x2F5CCCu;
    SET_GPR_U32(ctx, 31, 0x2F5CD4u);
    ctx->pc = 0x2F5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CCCu;
    // 0x2f5cd0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B260u, 0x2F5CCCu, 0x2F5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CD4u;
label_2f5cd4:
    // 0x2f5cd4: 0x8222000c  lb          $v0, 0xC($s1)
    ctx->pc = 0x2f5cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2f5cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5cdc: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x2f5cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
label_2f5ce0:
    // 0x2f5ce0: 0xc09ac9c  jal         func_26B270
    ctx->pc = 0x2F5CE0u;
    SET_GPR_U32(ctx, 31, 0x2F5CE8u);
    ctx->pc = 0x26B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B270u, 0x2F5CE0u, 0x2F5CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CE8u;
label_2f5ce8:
    // 0x2f5ce8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f5ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5cec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5CF0u;
    {
        const bool branch_taken_0x2f5cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5CF0u;
        // 0x2f5cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5cf0) {
            ctx->pc = 0x2F5D00u;
            goto label_2f5d00;
        }
    }
    ctx->pc = 0x2F5CF8u;
    // 0x2f5cf8: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F5CF8u;
    SET_GPR_U32(ctx, 31, 0x2F5D00u);
    ctx->pc = 0x2F5CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5CF8u;
    // 0x2f5cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F5CF8u, 0x2F5D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D00u;
label_2f5d00:
    // 0x2f5d00: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x2f5d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x2f5d04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5D04u;
    {
        const bool branch_taken_0x2f5d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D04u;
        // 0x2f5d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d04) {
            ctx->pc = 0x2F5D18u;
            goto label_2f5d18;
        }
    }
    ctx->pc = 0x2F5D0Cu;
    // 0x2f5d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5D0Cu;
    {
        const bool branch_taken_0x2f5d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d0c) {
            ctx->pc = 0x2F5D20u;
            goto label_2f5d20;
        }
    }
    ctx->pc = 0x2F5D14u;
    // 0x2f5d14: 0x0  nop
    ctx->pc = 0x2f5d14u;
    // NOP
label_2f5d18:
    // 0x2f5d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5d1c: 0x0  nop
    ctx->pc = 0x2f5d1cu;
    // NOP
label_2f5d20:
    // 0x2f5d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5d28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5D2Cu;
        // 0x2f5d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5D34u;
}
