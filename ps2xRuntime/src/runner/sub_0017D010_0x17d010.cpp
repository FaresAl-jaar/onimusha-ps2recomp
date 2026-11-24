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

// Function: sub_0017D010
// Address: 0x17d010 - 0x17d07c
void sub_0017D010_0x17d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D010_0x17d010");
#endif

    switch (ctx->pc) {
        case 0x17d028u: goto label_17d028;
        default: break;
    }

    ctx->pc = 0x17d010u;

    // 0x17d010: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d014: 0x8c650078  lw          $a1, 0x78($v1)
    ctx->pc = 0x17d014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x17d018: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x17d018u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17d01c: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x17d01cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17d020: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x17D020u;
    {
        const bool branch_taken_0x17d020 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D020u;
        // 0x17d024: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d020) {
            ctx->pc = 0x17D068u;
            goto label_17d068;
        }
    }
    ctx->pc = 0x17D028u;
label_17d028:
    // 0x17d028: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x17d028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x17d02c: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x17d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x17d030: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17D030u;
    {
        const bool branch_taken_0x17d030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D030u;
        // 0x17d034: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d030) {
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17D038u;
    // 0x17d038: 0x8c63fff8  lw          $v1, -0x8($v1)
    ctx->pc = 0x17d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x17d03c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D03Cu;
    {
        const bool branch_taken_0x17d03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d03c) {
            ctx->pc = 0x17D058u;
            goto label_17d058;
        }
    }
    ctx->pc = 0x17D044u;
    // 0x17d044: 0x90c30018  lbu         $v1, 0x18($a2)
    ctx->pc = 0x17d044u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x17d048: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x17d048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x17d04c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D04Cu;
    {
        const bool branch_taken_0x17d04c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d04c) {
            ctx->pc = 0x17D068u;
            goto label_17d068;
        }
    }
    ctx->pc = 0x17D054u;
    // 0x17d054: 0x0  nop
    ctx->pc = 0x17d054u;
    // NOP
label_17d058:
    // 0x17d058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17d05c: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17d060: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x17D060u;
    {
        const bool branch_taken_0x17d060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D060u;
        // 0x17d064: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d060) {
            ctx->pc = 0x17D028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d028;
        }
    }
    ctx->pc = 0x17D068u;
label_17d068:
    // 0x17d068: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D068u;
    {
        const bool branch_taken_0x17d068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x17d068) {
            ctx->pc = 0x17D074u;
            goto label_17d074;
        }
    }
    ctx->pc = 0x17D070u;
    // 0x17d070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17d074:
    // 0x17d074: 0x3e00008  jr          $ra
    ctx->pc = 0x17D074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D07Cu;
}
