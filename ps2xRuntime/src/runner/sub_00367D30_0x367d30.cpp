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

// Function: sub_00367D30
// Address: 0x367d30 - 0x367d98
void sub_00367D30_0x367d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367D30_0x367d30");
#endif

    ctx->pc = 0x367d30u;

    // 0x367d30: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x367d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x367d34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367D34u;
    {
        const bool branch_taken_0x367d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367d34) {
            ctx->pc = 0x367D48u;
            goto label_367d48;
        }
    }
    ctx->pc = 0x367D3Cu;
    // 0x367d3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x367D3Cu;
    {
        const bool branch_taken_0x367d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D3Cu;
        // 0x367d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367d3c) {
            ctx->pc = 0x367D90u;
            goto label_367d90;
        }
    }
    ctx->pc = 0x367D44u;
    // 0x367d44: 0x0  nop
    ctx->pc = 0x367d44u;
    // NOP
label_367d48:
    // 0x367d48: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x367d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367d4c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x367d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x367d50: 0x30420f00  andi        $v0, $v0, 0xF00
    ctx->pc = 0x367d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x367d54: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x367d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x367d58: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x367D58u;
    {
        const bool branch_taken_0x367d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x367d58) {
            ctx->pc = 0x367D68u;
            goto label_367d68;
        }
    }
    ctx->pc = 0x367D60u;
    // 0x367d60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x367D60u;
    {
        const bool branch_taken_0x367d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D60u;
        // 0x367d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367d60) {
            ctx->pc = 0x367D90u;
            goto label_367d90;
        }
    }
    ctx->pc = 0x367D68u;
label_367d68:
    // 0x367d68: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x367d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x367d6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367D6Cu;
    {
        const bool branch_taken_0x367d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367d6c) {
            ctx->pc = 0x367D80u;
            goto label_367d80;
        }
    }
    ctx->pc = 0x367D74u;
    // 0x367d74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x367D74u;
    {
        const bool branch_taken_0x367d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D74u;
        // 0x367d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367d74) {
            ctx->pc = 0x367D90u;
            goto label_367d90;
        }
    }
    ctx->pc = 0x367D7Cu;
    // 0x367d7c: 0x0  nop
    ctx->pc = 0x367d7cu;
    // NOP
label_367d80:
    // 0x367d80: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x367d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x367d84: 0x2442faf0  addiu       $v0, $v0, -0x510
    ctx->pc = 0x367d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966000));
    // 0x367d88: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x367d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x367d8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x367d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_367d90:
    // 0x367d90: 0x3e00008  jr          $ra
    ctx->pc = 0x367D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367D98u;
}
