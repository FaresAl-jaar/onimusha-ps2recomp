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

// Function: sub_00244378
// Address: 0x244378 - 0x2443dc
void sub_00244378_0x244378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244378_0x244378");
#endif

    switch (ctx->pc) {
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        default: break;
    }

    ctx->pc = 0x244378u;

label_244378:
    // 0x244378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24437c:
    // 0x24437c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x24437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
label_244380:
    // 0x244380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x244380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_244384:
    // 0x244384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244388:
    // 0x244388: 0x24505f40  addiu       $s0, $v0, 0x5F40
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24384));
label_24438c:
    // 0x24438c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_244390:
    // 0x244390: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x244390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_244394:
    // 0x244394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x244394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244398:
    // 0x244398: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24439c:
    if (ctx->pc == 0x24439Cu) {
        ctx->pc = 0x24439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244398u;
        // 0x24439c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443A0u;
        goto label_2443a0;
    }
    ctx->pc = 0x244398u;
    {
        const bool branch_taken_0x244398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244398u;
        // 0x24439c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244398) {
            ctx->pc = 0x2443BCu;
            goto label_2443bc;
        }
    }
    ctx->pc = 0x2443A0u;
label_2443a0:
    // 0x2443a0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2443a4:
    // 0x2443a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2443a8:
    if (ctx->pc == 0x2443A8u) {
        ctx->pc = 0x2443A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443A4u;
        // 0x2443a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443ACu;
        goto label_2443ac;
    }
    ctx->pc = 0x2443A4u;
    {
        const bool branch_taken_0x2443a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443A4u;
        // 0x2443a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443a4) {
            ctx->pc = 0x2443BCu;
            goto label_2443bc;
        }
    }
    ctx->pc = 0x2443ACu;
label_2443ac:
    // 0x2443ac: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x2443acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_2443b0:
    // 0x2443b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2443b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2443b4:
    // 0x2443b4: 0x40f809  jalr        $v0
label_2443b8:
    if (ctx->pc == 0x2443B8u) {
        ctx->pc = 0x2443B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B4u;
        // 0x2443b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443BCu;
        goto label_2443bc;
    }
    ctx->pc = 0x2443B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2443BCu);
        ctx->pc = 0x2443B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443B4u;
        // 0x2443b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2443B4u, 0x2443BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2443BCu;
label_2443bc:
    // 0x2443bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2443bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2443c0:
    // 0x2443c0: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
label_2443c4:
    if (ctx->pc == 0x2443C4u) {
        ctx->pc = 0x2443C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443C0u;
        // 0x2443c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443C8u;
        goto label_2443c8;
    }
    ctx->pc = 0x2443C0u;
    {
        const bool branch_taken_0x2443c0 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x2443c0) {
            ctx->pc = 0x2443C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2443C0u;
            // 0x2443c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244398;
        }
    }
    ctx->pc = 0x2443C8u;
label_2443c8:
    // 0x2443c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2443c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2443cc:
    // 0x2443cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2443ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2443d0:
    // 0x2443d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2443d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2443d4:
    // 0x2443d4: 0x3e00008  jr          $ra
label_2443d8:
    if (ctx->pc == 0x2443D8u) {
        ctx->pc = 0x2443D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D4u;
        // 0x2443d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443DCu;
        goto label_fallthrough_0x2443d4;
    }
    ctx->pc = 0x2443D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D4u;
        // 0x2443d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2443D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2443d4:
    ctx->pc = 0x2443DCu;
}
