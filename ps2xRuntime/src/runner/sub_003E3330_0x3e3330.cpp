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

// Function: sub_003E3330
// Address: 0x3e3330 - 0x3e33d8
void sub_003E3330_0x3e3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3330_0x3e3330");
#endif

    ctx->pc = 0x3e3330u;

    // 0x3e3330: 0x3c060092  lui         $a2, 0x92
    ctx->pc = 0x3e3330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)146 << 16));
    // 0x3e3334: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e3334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e3338: 0x24c63468  addiu       $a2, $a2, 0x3468
    ctx->pc = 0x3e3338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13416));
    // 0x3e333c: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e333cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e3340: 0x90c50058  lbu         $a1, 0x58($a2)
    ctx->pc = 0x3e3340u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x9234C0u));
    // 0x3e3344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e3348: 0x24a50003  addiu       $a1, $a1, 0x3
    ctx->pc = 0x3e3348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x3e334c: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E334Cu;
    {
        const bool branch_taken_0x3e334c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E334Cu;
        // 0x3e3350: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e334c) {
            ctx->pc = 0x3E3390u;
            goto label_3e3390;
        }
    }
    ctx->pc = 0x3E3354u;
    // 0x3e3354: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3e3354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3e3358: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x3e3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3e335c: 0x90236c10  lbu         $v1, 0x6C10($at)
    ctx->pc = 0x3e335cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x3e3360: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3E3360u;
    {
        const bool branch_taken_0x3e3360 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3360u;
        // 0x3e3364: 0x24a3fffd  addiu       $v1, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3360) {
            ctx->pc = 0x3E33D0u;
            goto label_3e33d0;
        }
    }
    ctx->pc = 0x3E3368u;
    // 0x3e3368: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3e3368u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3e336c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E336Cu;
    {
        const bool branch_taken_0x3e336c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e336c) {
            ctx->pc = 0x3E3380u;
            goto label_3e3380;
        }
    }
    ctx->pc = 0x3E3374u;
    // 0x3e3374: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e3374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e3378: 0x14a30015  bne         $a1, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3E3378u;
    {
        const bool branch_taken_0x3e3378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3378) {
            ctx->pc = 0x3E33D0u;
            goto label_3e33d0;
        }
    }
    ctx->pc = 0x3E3380u;
label_3e3380:
    // 0x3e3380: 0x90c30058  lbu         $v1, 0x58($a2)
    ctx->pc = 0x3e3380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x3e3384: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e3384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e3388: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E3388u;
    {
        const bool branch_taken_0x3e3388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3388u;
        // 0x3e338c: 0xa0c30058  sb          $v1, 0x58($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 88), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3388) {
            ctx->pc = 0x3E33D0u;
            goto label_3e33d0;
        }
    }
    ctx->pc = 0x3E3390u;
label_3e3390:
    // 0x3e3390: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3e3390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e3394: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3394u;
    {
        const bool branch_taken_0x3e3394 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E3398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3394u;
        // 0x3e3398: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3394) {
            ctx->pc = 0x3E33A8u;
            goto label_3e33a8;
        }
    }
    ctx->pc = 0x3E339Cu;
    // 0x3e339c: 0x90236c10  lbu         $v1, 0x6C10($at)
    ctx->pc = 0x3e339cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
    // 0x3e33a0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E33A0u;
    {
        const bool branch_taken_0x3e33a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e33a0) {
            ctx->pc = 0x3E33C0u;
            goto label_3e33c0;
        }
    }
    ctx->pc = 0x3E33A8u;
label_3e33a8:
    // 0x3e33a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3e33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e33ac: 0x14a40008  bne         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E33ACu;
    {
        const bool branch_taken_0x3e33ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x3E33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E33ACu;
        // 0x3e33b0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e33ac) {
            ctx->pc = 0x3E33D0u;
            goto label_3e33d0;
        }
    }
    ctx->pc = 0x3E33B4u;
    // 0x3e33b4: 0x90236c10  lbu         $v1, 0x6C10($at)
    ctx->pc = 0x3e33b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27664)));
    // 0x3e33b8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E33B8u;
    {
        const bool branch_taken_0x3e33b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3e33b8) {
            ctx->pc = 0x3E33D0u;
            goto label_3e33d0;
        }
    }
    ctx->pc = 0x3E33C0u;
label_3e33c0:
    // 0x3e33c0: 0x90c30058  lbu         $v1, 0x58($a2)
    ctx->pc = 0x3e33c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x3e33c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e33c8: 0xa0c30058  sb          $v1, 0x58($a2)
    ctx->pc = 0x3e33c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e33cc: 0x0  nop
    ctx->pc = 0x3e33ccu;
    // NOP
label_3e33d0:
    // 0x3e33d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E33D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E33D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E33D8u;
}
