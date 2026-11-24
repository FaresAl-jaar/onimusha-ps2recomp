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

// Function: sub_002B42F0
// Address: 0x2b42f0 - 0x2b4358
void sub_002B42F0_0x2b42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B42F0_0x2b42f0");
#endif

    switch (ctx->pc) {
        case 0x2b4310u: goto label_2b4310;
        default: break;
    }

    ctx->pc = 0x2b42f0u;

    // 0x2b42f0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2b42f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b42f4: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x2b42f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b42f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B42F8u;
    {
        const bool branch_taken_0x2b42f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B42FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42F8u;
        // 0x2b42fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b42f8) {
            ctx->pc = 0x2B4308u;
            goto label_2b4308;
        }
    }
    ctx->pc = 0x2B4300u;
    // 0x2b4300: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2B4300u;
    {
        const bool branch_taken_0x2b4300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4300) {
            ctx->pc = 0x2B4350u;
            goto label_2b4350;
        }
    }
    ctx->pc = 0x2B4308u;
label_2b4308:
    // 0x2b4308: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b430c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b430cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4310:
    // 0x2b4310: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2b4310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b4314: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4314u;
    {
        const bool branch_taken_0x2b4314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4314u;
        // 0x2b4318: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4314) {
            ctx->pc = 0x2B4338u;
            goto label_2b4338;
        }
    }
    ctx->pc = 0x2B431Cu;
    // 0x2b431c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2b431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b4320: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b4320u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2b4324: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b4324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b4328: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x2b4328u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b432c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2b432cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4330u;
    {
        const bool branch_taken_0x2b4330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4330u;
        // 0x2b4334: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4330) {
            ctx->pc = 0x2B4350u;
            goto label_2b4350;
        }
    }
    ctx->pc = 0x2B4338u;
label_2b4338:
    // 0x2b4338: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2b4338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2b433c: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x2b433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b4340: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2B4340u;
    {
        const bool branch_taken_0x2b4340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4340u;
        // 0x2b4344: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4340) {
            ctx->pc = 0x2B4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4310;
        }
    }
    ctx->pc = 0x2B4348u;
    // 0x2b4348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b434c: 0x0  nop
    ctx->pc = 0x2b434cu;
    // NOP
label_2b4350:
    // 0x2b4350: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4358u;
}
