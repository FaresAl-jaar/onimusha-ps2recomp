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

// Function: sub_0022D640
// Address: 0x22d640 - 0x22d6c0
void sub_0022D640_0x22d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D640_0x22d640");
#endif

    switch (ctx->pc) {
        case 0x22d670u: goto label_22d670;
        default: break;
    }

    ctx->pc = 0x22d640u;

    // 0x22d640: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x22d640u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x22d644: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x22d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x22d648: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x22d648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x22d64c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x22d64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x22d650: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x22D650u;
    {
        const bool branch_taken_0x22d650 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x22D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D650u;
        // 0x22d654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d650) {
            ctx->pc = 0x22D69Cu;
            goto label_22d69c;
        }
    }
    ctx->pc = 0x22D658u;
    // 0x22d658: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x22d658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d65c: 0x54490004  bnel        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D65Cu;
    {
        const bool branch_taken_0x22d65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x22d65c) {
            ctx->pc = 0x22D660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D65Cu;
            // 0x22d660: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D670u;
            goto label_22d670;
        }
    }
    ctx->pc = 0x22D664u;
    // 0x22d664: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x22D664u;
    {
        const bool branch_taken_0x22d664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D664u;
        // 0x22d668: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d664) {
            ctx->pc = 0x22D69Cu;
            goto label_22d69c;
        }
    }
    ctx->pc = 0x22D66Cu;
    // 0x22d66c: 0x0  nop
    ctx->pc = 0x22d66cu;
    // NOP
label_22d670:
    // 0x22d670: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x22d670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22d674: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D674u;
    {
        const bool branch_taken_0x22d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D674u;
        // 0x22d678: 0x871821  addu        $v1, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d674) {
            ctx->pc = 0x22D69Cu;
            goto label_22d69c;
        }
    }
    ctx->pc = 0x22D67Cu;
    // 0x22d67c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x22d67cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d680: 0x0  nop
    ctx->pc = 0x22d680u;
    // NOP
    // 0x22d684: 0x0  nop
    ctx->pc = 0x22d684u;
    // NOP
    // 0x22d688: 0x0  nop
    ctx->pc = 0x22d688u;
    // NOP
    // 0x22d68c: 0x5449fff8  bnel        $v0, $t1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22D68Cu;
    {
        const bool branch_taken_0x22d68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x22d68c) {
            ctx->pc = 0x22D690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D68Cu;
            // 0x22d690: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d670;
        }
    }
    ctx->pc = 0x22D694u;
    // 0x22d694: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x22d694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x22d698: 0xe2400b  movn        $t0, $a3, $v0
    ctx->pc = 0x22d698u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
label_22d69c:
    // 0x22d69c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x22d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x22d6a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x22d6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22d6a4: 0x51020004  beql        $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D6A4u;
    {
        const bool branch_taken_0x22d6a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x22d6a4) {
            ctx->pc = 0x22D6A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D6A4u;
            // 0x22d6a8: 0xa4c00000  sh          $zero, 0x0($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D6B8u;
            goto label_22d6b8;
        }
    }
    ctx->pc = 0x22D6ACu;
    // 0x22d6ac: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x22d6acu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x22d6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x22D6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6B0u;
        // 0x22d6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D6B8u;
label_22d6b8:
    // 0x22d6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x22D6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D6B8u;
        // 0x22d6bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D6C0u;
}
