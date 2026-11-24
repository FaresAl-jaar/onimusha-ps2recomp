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

// Function: sub_003514A0
// Address: 0x3514a0 - 0x351520
void sub_003514A0_0x3514a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003514A0_0x3514a0");
#endif

    ctx->pc = 0x3514a0u;

    // 0x3514a0: 0xa0800015  sb          $zero, 0x15($a0)
    ctx->pc = 0x3514a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x3514a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3514a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3514a8: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x3514a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x3514ac: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x3514ACu;
    {
        const bool branch_taken_0x3514ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514ACu;
        // 0x3514b0: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514ac) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x3514B4u;
    // 0x3514b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3514b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3514b8: 0x24a5f760  addiu       $a1, $a1, -0x8A0
    ctx->pc = 0x3514b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
    // 0x3514bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3514bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3514c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3514c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3514c4: 0x600008  jr          $v1
    ctx->pc = 0x3514C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3514D0u: goto label_3514d0;
            case 0x3514E8u: goto label_3514e8;
            case 0x351500u: goto label_351500;
            case 0x351518u: goto label_351518;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3514C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3514CCu;
    // 0x3514cc: 0x0  nop
    ctx->pc = 0x3514ccu;
    // NOP
label_3514d0:
    // 0x3514d0: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3514d4: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3514d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3514d8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3514D8u;
    {
        const bool branch_taken_0x3514d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514D8u;
        // 0x3514dc: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514d8) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x3514E0u;
    // 0x3514e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3514E0u;
    {
        const bool branch_taken_0x3514e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514E0u;
        // 0x3514e4: 0xa0830015  sb          $v1, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514e0) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x3514E8u;
label_3514e8:
    // 0x3514e8: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3514ec: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3514ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3514f0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3514F0u;
    {
        const bool branch_taken_0x3514f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514F0u;
        // 0x3514f4: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514f0) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x3514F8u;
    // 0x3514f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3514F8u;
    {
        const bool branch_taken_0x3514f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514F8u;
        // 0x3514fc: 0xa0830015  sb          $v1, 0x15($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514f8) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x351500u;
label_351500:
    // 0x351500: 0x80830003  lb          $v1, 0x3($a0)
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x351504: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x351504u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x351508: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x351508u;
    {
        const bool branch_taken_0x351508 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351508u;
        // 0x35150c: 0x24030032  addiu       $v1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351508) {
            ctx->pc = 0x351518u;
            goto label_351518;
        }
    }
    ctx->pc = 0x351510u;
    // 0x351510: 0xa0830015  sb          $v1, 0x15($a0)
    ctx->pc = 0x351510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 21), (uint8_t)GPR_U32(ctx, 3));
    // 0x351514: 0x0  nop
    ctx->pc = 0x351514u;
    // NOP
label_351518:
    // 0x351518: 0x3e00008  jr          $ra
    ctx->pc = 0x351518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351520u;
}
