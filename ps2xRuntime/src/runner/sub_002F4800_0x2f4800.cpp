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

// Function: sub_002F4800
// Address: 0x2f4800 - 0x2f4860
void sub_002F4800_0x2f4800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4800_0x2f4800");
#endif

    ctx->pc = 0x2f4800u;

    // 0x2f4800: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2f4800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2f4804: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f4804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f4808: 0x30830f00  andi        $v1, $a0, 0xF00
    ctx->pc = 0x2f4808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x2f480c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f480cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f4810: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f4810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f4814: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4814u;
    {
        const bool branch_taken_0x2f4814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4814u;
        // 0x2f4818: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4814) {
            ctx->pc = 0x2F4828u;
            goto label_2f4828;
        }
    }
    ctx->pc = 0x2F481Cu;
    // 0x2f481c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F481Cu;
    {
        const bool branch_taken_0x2f481c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f481c) {
            ctx->pc = 0x2F4850u;
            goto label_2f4850;
        }
    }
    ctx->pc = 0x2F4824u;
    // 0x2f4824: 0x0  nop
    ctx->pc = 0x2f4824u;
    // NOP
label_2f4828:
    // 0x2f4828: 0x28820b00  slti        $v0, $a0, 0xB00
    ctx->pc = 0x2f4828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2816) ? 1 : 0);
    // 0x2f482c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F482Cu;
    {
        const bool branch_taken_0x2f482c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F482Cu;
        // 0x2f4830: 0x28810b1c  slti        $at, $a0, 0xB1C (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2844) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f482c) {
            ctx->pc = 0x2F4848u;
            goto label_2f4848;
        }
    }
    ctx->pc = 0x2F4834u;
    // 0x2f4834: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4834u;
    {
        const bool branch_taken_0x2f4834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4834u;
        // 0x2f4838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4834) {
            ctx->pc = 0x2F4848u;
            goto label_2f4848;
        }
    }
    ctx->pc = 0x2F483Cu;
    // 0x2f483c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F483Cu;
    {
        const bool branch_taken_0x2f483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f483c) {
            ctx->pc = 0x2F4858u;
            goto label_2f4858;
        }
    }
    ctx->pc = 0x2F4844u;
    // 0x2f4844: 0x0  nop
    ctx->pc = 0x2f4844u;
    // NOP
label_2f4848:
    // 0x2f4848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4848u;
    {
        const bool branch_taken_0x2f4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4848u;
        // 0x2f484c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4848) {
            ctx->pc = 0x2F4858u;
            goto label_2f4858;
        }
    }
    ctx->pc = 0x2F4850u;
label_2f4850:
    // 0x2f4850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4854: 0x0  nop
    ctx->pc = 0x2f4854u;
    // NOP
label_2f4858:
    // 0x2f4858: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4860u;
}
