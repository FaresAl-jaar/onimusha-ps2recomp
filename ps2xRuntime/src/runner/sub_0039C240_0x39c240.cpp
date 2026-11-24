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

// Function: sub_0039C240
// Address: 0x39c240 - 0x39c2d8
void sub_0039C240_0x39c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C240_0x39c240");
#endif

    ctx->pc = 0x39c240u;

    // 0x39c240: 0x84822bd0  lh          $v0, 0x2BD0($a0)
    ctx->pc = 0x39c240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 11216)));
    // 0x39c244: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x39c244u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x39c248: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x39C248u;
    {
        const bool branch_taken_0x39c248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C248u;
        // 0x39c24c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c248) {
            ctx->pc = 0x39C2C8u;
            goto label_39c2c8;
        }
    }
    ctx->pc = 0x39C250u;
    // 0x39c250: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39c250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39c254: 0x246324f0  addiu       $v1, $v1, 0x24F0
    ctx->pc = 0x39c254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9456));
    // 0x39c258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c25c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39c260: 0x400008  jr          $v0
    ctx->pc = 0x39C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39C268u: goto label_39c268;
            case 0x39C270u: goto label_39c270;
            case 0x39C278u: goto label_39c278;
            case 0x39C280u: goto label_39c280;
            case 0x39C288u: goto label_39c288;
            case 0x39C290u: goto label_39c290;
            case 0x39C298u: goto label_39c298;
            case 0x39C2B0u: goto label_39c2b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C260u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39C268u;
label_39c268:
    // 0x39c268: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x39C268u;
    {
        const bool branch_taken_0x39c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C268u;
        // 0x39c26c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c268) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C270u;
label_39c270:
    // 0x39c270: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39C270u;
    {
        const bool branch_taken_0x39c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C270u;
        // 0x39c274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c270) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C278u;
label_39c278:
    // 0x39c278: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x39C278u;
    {
        const bool branch_taken_0x39c278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C278u;
        // 0x39c27c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c278) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C280u;
label_39c280:
    // 0x39c280: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x39C280u;
    {
        const bool branch_taken_0x39c280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C280u;
        // 0x39c284: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c280) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C288u;
label_39c288:
    // 0x39c288: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39C288u;
    {
        const bool branch_taken_0x39c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C288u;
        // 0x39c28c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c288) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C290u;
label_39c290:
    // 0x39c290: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39C290u;
    {
        const bool branch_taken_0x39c290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C290u;
        // 0x39c294: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c290) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C298u;
label_39c298:
    // 0x39c298: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39c29c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x39c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x39c2a0: 0x24422450  addiu       $v0, $v0, 0x2450
    ctx->pc = 0x39c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9296));
    // 0x39c2a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c2a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39C2A8u;
    {
        const bool branch_taken_0x39c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2A8u;
        // 0x39c2ac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2a8) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C2B0u;
label_39c2b0:
    // 0x39c2b0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x39c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x39c2b4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x39c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x39c2b8: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x39c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x39c2bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39c2c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39C2C0u;
    {
        const bool branch_taken_0x39c2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C2C0u;
        // 0x39c2c4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c2c0) {
            ctx->pc = 0x39C2D0u;
            goto label_39c2d0;
        }
    }
    ctx->pc = 0x39C2C8u;
label_39c2c8:
    // 0x39c2c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39c2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c2cc: 0x0  nop
    ctx->pc = 0x39c2ccu;
    // NOP
label_39c2d0:
    // 0x39c2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x39C2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C2D8u;
}
