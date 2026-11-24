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

// Function: sub_003F3380
// Address: 0x3f3380 - 0x3f346c
void sub_003F3380_0x3f3380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3380_0x3f3380");
#endif

    switch (ctx->pc) {
        case 0x3f3434u: goto label_3f3434;
        default: break;
    }

    ctx->pc = 0x3f3380u;

    // 0x3f3380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f3380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f3384: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3f3384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3f3388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f3388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f338c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3f338cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3f3390: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x3f3390u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x3f3394: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f3394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f3398: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x3F3398u;
    {
        const bool branch_taken_0x3f3398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3398u;
        // 0x3f339c: 0x3c038000  lui         $v1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f3398) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F33A0u;
    // 0x3f33a0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3f33a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3f33a4: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3F33A4u;
    {
        const bool branch_taken_0x3f33a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f33a4) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F33ACu;
    // 0x3f33ac: 0x8f858d38  lw          $a1, -0x72C8($gp)
    ctx->pc = 0x3f33acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f33b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f33b4: 0x80a40390  lb          $a0, 0x390($a1)
    ctx->pc = 0x3f33b4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 912)));
    // 0x3f33b8: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3F33B8u;
    {
        const bool branch_taken_0x3f33b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F33BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33B8u;
        // 0x3f33bc: 0x24a60390  addiu       $a2, $a1, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f33b8) {
            ctx->pc = 0x3F33F0u;
            goto label_3f33f0;
        }
    }
    ctx->pc = 0x3F33C0u;
    // 0x3f33c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f33c4: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3F33C4u;
    {
        const bool branch_taken_0x3f33c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F33C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33C4u;
        // 0x3f33c8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f33c4) {
            ctx->pc = 0x3F33F0u;
            goto label_3f33f0;
        }
    }
    ctx->pc = 0x3F33CCu;
    // 0x3f33cc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F33CCu;
    {
        const bool branch_taken_0x3f33cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f33cc) {
            ctx->pc = 0x3F33F0u;
            goto label_3f33f0;
        }
    }
    ctx->pc = 0x3F33D4u;
    // 0x3f33d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f33d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f33d8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F33D8u;
    {
        const bool branch_taken_0x3f33d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f33d8) {
            ctx->pc = 0x3F33F0u;
            goto label_3f33f0;
        }
    }
    ctx->pc = 0x3F33E0u;
    // 0x3f33e0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3F33E0u;
    {
        const bool branch_taken_0x3f33e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f33e0) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F33E8u;
    // 0x3f33e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3F33E8u;
    {
        const bool branch_taken_0x3f33e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f33e8) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F33F0u;
label_3f33f0:
    // 0x3f33f0: 0x80a40391  lb          $a0, 0x391($a1)
    ctx->pc = 0x3f33f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 913)));
    // 0x3f33f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f33f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3f33f8: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F33F8u;
    {
        const bool branch_taken_0x3f33f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F33FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F33F8u;
        // 0x3f33fc: 0x24a70391  addiu       $a3, $a1, 0x391 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 913));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f33f8) {
            ctx->pc = 0x3F3458u;
            goto label_3f3458;
        }
    }
    ctx->pc = 0x3F3400u;
    // 0x3f3400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f3400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f3404: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3F3404u;
    {
        const bool branch_taken_0x3f3404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f3404) {
            ctx->pc = 0x3F3428u;
            goto label_3f3428;
        }
    }
    ctx->pc = 0x3F340Cu;
    // 0x3f340c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F340Cu;
    {
        const bool branch_taken_0x3f340c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f340c) {
            ctx->pc = 0x3F3420u;
            goto label_3f3420;
        }
    }
    ctx->pc = 0x3F3414u;
    // 0x3f3414: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3F3414u;
    {
        const bool branch_taken_0x3f3414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f3414) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F341Cu;
    // 0x3f341c: 0x0  nop
    ctx->pc = 0x3f341cu;
    // NOP
label_3f3420:
    // 0x3f3420: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3f3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3f3424: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3f3424u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_3f3428:
    // 0x3f3428: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x3f3428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f342c: 0xc0fc714  jal         func_3F1C50
    ctx->pc = 0x3F342Cu;
    SET_GPR_U32(ctx, 31, 0x3F3434u);
    ctx->pc = 0x3F3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F342Cu;
    // 0x3f3430: 0x244403a0  addiu       $a0, $v0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F1C50u, 0x3F342Cu, 0x3F3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F3434u;
label_3f3434:
    // 0x3f3434: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f3434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f3438: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F3438u;
    {
        const bool branch_taken_0x3f3438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f3438) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F3440u;
    // 0x3f3440: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x3f3440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x3f3444: 0x80830391  lb          $v1, 0x391($a0)
    ctx->pc = 0x3f3444u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 913)));
    // 0x3f3448: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f3448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3f344c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F344Cu;
    {
        const bool branch_taken_0x3f344c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F3450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F344Cu;
        // 0x3f3450: 0xa0830391  sb          $v1, 0x391($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 913), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f344c) {
            ctx->pc = 0x3F3460u;
            goto label_3f3460;
        }
    }
    ctx->pc = 0x3F3454u;
    // 0x3f3454: 0x0  nop
    ctx->pc = 0x3f3454u;
    // NOP
label_3f3458:
    // 0x3f3458: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x3f3458u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3f345c: 0x0  nop
    ctx->pc = 0x3f345cu;
    // NOP
label_3f3460:
    // 0x3f3460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f3460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f3464: 0x3e00008  jr          $ra
    ctx->pc = 0x3F3464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F3468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F3464u;
        // 0x3f3468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F3464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F346Cu;
}
