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

// Function: sub_0031C320
// Address: 0x31c320 - 0x31c3b0
void sub_0031C320_0x31c320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C320_0x31c320");
#endif

    switch (ctx->pc) {
        case 0x31c338u: goto label_31c338;
        default: break;
    }

    ctx->pc = 0x31c320u;

    // 0x31c320: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31c320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31c324: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x31c324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x31c328: 0x9027fc8d  lbu         $a3, -0x373($at)
    ctx->pc = 0x31c328u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x31c32c: 0x250894a0  addiu       $t0, $t0, -0x6B60
    ctx->pc = 0x31c32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939808));
    // 0x31c330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31c330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c334: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x31c334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_31c338:
    // 0x31c338: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x31c338u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31c33c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x31c33cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31c340: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x31C340u;
    {
        const bool branch_taken_0x31c340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c340) {
            ctx->pc = 0x31C390u;
            goto label_31c390;
        }
    }
    ctx->pc = 0x31C348u;
    // 0x31c348: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x31c348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x31c34c: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x31c34cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31c350: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x31C350u;
    {
        const bool branch_taken_0x31c350 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C350u;
        // 0x31c354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c350) {
            ctx->pc = 0x31C390u;
            goto label_31c390;
        }
    }
    ctx->pc = 0x31C358u;
    // 0x31c358: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31C358u;
    {
        const bool branch_taken_0x31c358 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x31c358) {
            ctx->pc = 0x31C368u;
            goto label_31c368;
        }
    }
    ctx->pc = 0x31C360u;
    // 0x31c360: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31C360u;
    {
        const bool branch_taken_0x31c360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c360) {
            ctx->pc = 0x31C370u;
            goto label_31c370;
        }
    }
    ctx->pc = 0x31C368u;
label_31c368:
    // 0x31c368: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31C368u;
    {
        const bool branch_taken_0x31c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C368u;
        // 0x31c36c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c368) {
            ctx->pc = 0x31C3A8u;
            goto label_31c3a8;
        }
    }
    ctx->pc = 0x31C370u;
label_31c370:
    // 0x31c370: 0xa31023  subu        $v0, $a1, $v1
    ctx->pc = 0x31c370u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31c374: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x31c374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x31c378: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x31c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x31c37c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x31c37cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31c380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31c380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31c384: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C384u;
    {
        const bool branch_taken_0x31c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C384u;
        // 0x31c388: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c384) {
            ctx->pc = 0x31C3A8u;
            goto label_31c3a8;
        }
    }
    ctx->pc = 0x31C38Cu;
    // 0x31c38c: 0x0  nop
    ctx->pc = 0x31c38cu;
    // NOP
label_31c390:
    // 0x31c390: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31c390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31c394: 0x2cc20005  sltiu       $v0, $a2, 0x5
    ctx->pc = 0x31c394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x31c398: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x31C398u;
    {
        const bool branch_taken_0x31c398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C398u;
        // 0x31c39c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c398) {
            ctx->pc = 0x31C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c338;
        }
    }
    ctx->pc = 0x31C3A0u;
    // 0x31c3a0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x31c3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c3a4: 0x0  nop
    ctx->pc = 0x31c3a4u;
    // NOP
label_31c3a8:
    // 0x31c3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x31C3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31C3B0u;
}
