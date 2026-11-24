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

// Function: sub_0023B2D0
// Address: 0x23b2d0 - 0x23b33c
void sub_0023B2D0_0x23b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B2D0_0x23b2d0");
#endif

    switch (ctx->pc) {
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        case 0x23b2e0u: goto label_23b2e0;
        case 0x23b2e4u: goto label_23b2e4;
        case 0x23b2e8u: goto label_23b2e8;
        case 0x23b2ecu: goto label_23b2ec;
        case 0x23b2f0u: goto label_23b2f0;
        case 0x23b2f4u: goto label_23b2f4;
        case 0x23b2f8u: goto label_23b2f8;
        case 0x23b2fcu: goto label_23b2fc;
        case 0x23b300u: goto label_23b300;
        case 0x23b304u: goto label_23b304;
        case 0x23b308u: goto label_23b308;
        case 0x23b30cu: goto label_23b30c;
        case 0x23b310u: goto label_23b310;
        case 0x23b314u: goto label_23b314;
        case 0x23b318u: goto label_23b318;
        case 0x23b31cu: goto label_23b31c;
        case 0x23b320u: goto label_23b320;
        case 0x23b324u: goto label_23b324;
        case 0x23b328u: goto label_23b328;
        case 0x23b32cu: goto label_23b32c;
        case 0x23b330u: goto label_23b330;
        case 0x23b334u: goto label_23b334;
        case 0x23b338u: goto label_23b338;
        default: break;
    }

    ctx->pc = 0x23b2d0u;

label_23b2d0:
    // 0x23b2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23b2d4:
    // 0x23b2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23b2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23b2d8:
    // 0x23b2d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b2d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b2dc:
    // 0x23b2dc: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_23b2e0:
    if (ctx->pc == 0x23B2E0u) {
        ctx->pc = 0x23B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2DCu;
        // 0x23b2e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2E4u;
        goto label_23b2e4;
    }
    ctx->pc = 0x23B2DCu;
    {
        const bool branch_taken_0x23b2dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2DCu;
        // 0x23b2e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2dc) {
            ctx->pc = 0x23B2F8u;
            goto label_23b2f8;
        }
    }
    ctx->pc = 0x23B2E4u;
label_23b2e4:
    // 0x23b2e4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_23b2e8:
    // 0x23b2e8: 0xc08baa4  jal         func_22EA90
label_23b2ec:
    if (ctx->pc == 0x23B2ECu) {
        ctx->pc = 0x23B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2E8u;
        // 0x23b2ec: 0x2484b490  addiu       $a0, $a0, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2F0u;
        goto label_23b2f0;
    }
    ctx->pc = 0x23B2E8u;
    SET_GPR_U32(ctx, 31, 0x23B2F0u);
    ctx->pc = 0x23B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B2E8u;
    // 0x23b2ec: 0x2484b490  addiu       $a0, $a0, -0x4B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x23B2E8u, 0x23B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B2F0u;
label_23b2f0:
    // 0x23b2f0: 0x1000000e  b           . + 4 + (0xE << 2)
label_23b2f4:
    if (ctx->pc == 0x23B2F4u) {
        ctx->pc = 0x23B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2F0u;
        // 0x23b2f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B2F8u;
        goto label_23b2f8;
    }
    ctx->pc = 0x23B2F0u;
    {
        const bool branch_taken_0x23b2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2F0u;
        // 0x23b2f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2f0) {
            ctx->pc = 0x23B32Cu;
            goto label_23b32c;
        }
    }
    ctx->pc = 0x23B2F8u;
label_23b2f8:
    // 0x23b2f8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x23b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_23b2fc:
    // 0x23b2fc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_23b300:
    if (ctx->pc == 0x23B300u) {
        ctx->pc = 0x23B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2FCu;
        // 0x23b300: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B304u;
        goto label_23b304;
    }
    ctx->pc = 0x23B2FCu;
    {
        const bool branch_taken_0x23b2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B2FCu;
        // 0x23b300: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b2fc) {
            ctx->pc = 0x23B328u;
            goto label_23b328;
        }
    }
    ctx->pc = 0x23B304u;
label_23b304:
    // 0x23b304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23b308:
    // 0x23b308: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x23b308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23b30c:
    // 0x23b30c: 0x40f809  jalr        $v0
label_23b310:
    if (ctx->pc == 0x23B310u) {
        ctx->pc = 0x23B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B30Cu;
        // 0x23b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B314u;
        goto label_23b314;
    }
    ctx->pc = 0x23B30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B314u);
        ctx->pc = 0x23B310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B30Cu;
        // 0x23b310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B30Cu, 0x23B314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B314u;
label_23b314:
    // 0x23b314: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x23b314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_23b318:
    // 0x23b318: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x23b318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_23b31c:
    // 0x23b31c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x23b31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23b320:
    // 0x23b320: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b324:
    if (ctx->pc == 0x23B324u) {
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B328u;
        goto label_23b328;
    }
    ctx->pc = 0x23B320u;
    {
        const bool branch_taken_0x23b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B320u;
        // 0x23b324: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b320) {
            ctx->pc = 0x23B32Cu;
            goto label_23b32c;
        }
    }
    ctx->pc = 0x23B328u;
label_23b328:
    // 0x23b328: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23b328u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b32c:
    // 0x23b32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b330:
    // 0x23b330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b334:
    // 0x23b334: 0x3e00008  jr          $ra
label_23b338:
    if (ctx->pc == 0x23B338u) {
        ctx->pc = 0x23B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B334u;
        // 0x23b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B33Cu;
        goto label_fallthrough_0x23b334;
    }
    ctx->pc = 0x23B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B334u;
        // 0x23b338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b334:
    ctx->pc = 0x23B33Cu;
}
