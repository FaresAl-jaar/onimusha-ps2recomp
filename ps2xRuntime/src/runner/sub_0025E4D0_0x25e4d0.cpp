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

// Function: sub_0025E4D0
// Address: 0x25e4d0 - 0x25e558
void sub_0025E4D0_0x25e4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E4D0_0x25e4d0");
#endif

    ctx->pc = 0x25e4d0u;

    // 0x25e4d0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x25e4d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25e4d4: 0x28a200e0  slti        $v0, $a1, 0xE0
    ctx->pc = 0x25e4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x25e4d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E4D8u;
    {
        const bool branch_taken_0x25e4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4D8u;
        // 0x25e4dc: 0x28a100f0  slti        $at, $a1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)240) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4d8) {
            ctx->pc = 0x25E4F0u;
            goto label_25e4f0;
        }
    }
    ctx->pc = 0x25E4E0u;
    // 0x25e4e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E4E0u;
    {
        const bool branch_taken_0x25e4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4E0u;
        // 0x25e4e4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4e0) {
            ctx->pc = 0x25E4F0u;
            goto label_25e4f0;
        }
    }
    ctx->pc = 0x25E4E8u;
    // 0x25e4e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x25E4E8u;
    {
        const bool branch_taken_0x25e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e4e8) {
            ctx->pc = 0x25E550u;
            goto label_25e550;
        }
    }
    ctx->pc = 0x25E4F0u;
label_25e4f0:
    // 0x25e4f0: 0x30a300f0  andi        $v1, $a1, 0xF0
    ctx->pc = 0x25e4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
    // 0x25e4f4: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x25e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x25e4f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E4F8u;
    {
        const bool branch_taken_0x25e4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E4F8u;
        // 0x25e4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e4f8) {
            ctx->pc = 0x25E508u;
            goto label_25e508;
        }
    }
    ctx->pc = 0x25E500u;
    // 0x25e500: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25E500u;
    {
        const bool branch_taken_0x25e500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e500) {
            ctx->pc = 0x25E550u;
            goto label_25e550;
        }
    }
    ctx->pc = 0x25E508u;
label_25e508:
    // 0x25e508: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x25e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x25e50c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x25e50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x25e510: 0x24420ca0  addiu       $v0, $v0, 0xCA0
    ctx->pc = 0x25e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
    // 0x25e514: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25e518: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x25e518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x25e51c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x25e51cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e520: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E520u;
    {
        const bool branch_taken_0x25e520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x25e520) {
            ctx->pc = 0x25E530u;
            goto label_25e530;
        }
    }
    ctx->pc = 0x25E528u;
    // 0x25e528: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25E528u;
    {
        const bool branch_taken_0x25e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e528) {
            ctx->pc = 0x25E550u;
            goto label_25e550;
        }
    }
    ctx->pc = 0x25E530u;
label_25e530:
    // 0x25e530: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x25e530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x25e534: 0x2861001d  slti        $at, $v1, 0x1D
    ctx->pc = 0x25e534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x25e538: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x25E538u;
    {
        const bool branch_taken_0x25e538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e538) {
            ctx->pc = 0x25E548u;
            goto label_25e548;
        }
    }
    ctx->pc = 0x25E540u;
    // 0x25e540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25E540u;
    {
        const bool branch_taken_0x25e540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E540u;
        // 0x25e544: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e540) {
            ctx->pc = 0x25E54Cu;
            goto label_25e54c;
        }
    }
    ctx->pc = 0x25E548u;
label_25e548:
    // 0x25e548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_25e54c:
    // 0x25e54c: 0x0  nop
    ctx->pc = 0x25e54cu;
    // NOP
label_25e550:
    // 0x25e550: 0x3e00008  jr          $ra
    ctx->pc = 0x25E550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E558u;
}
