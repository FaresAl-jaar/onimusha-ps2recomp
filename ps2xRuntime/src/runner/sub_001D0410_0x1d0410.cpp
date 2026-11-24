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

// Function: sub_001D0410
// Address: 0x1d0410 - 0x1d04d4
void sub_001D0410_0x1d0410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0410_0x1d0410");
#endif

    switch (ctx->pc) {
        case 0x1d044cu: goto label_1d044c;
        case 0x1d0458u: goto label_1d0458;
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0470u: goto label_1d0470;
        case 0x1d0478u: goto label_1d0478;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d04acu: goto label_1d04ac;
        default: break;
    }

    ctx->pc = 0x1d0410u;

    // 0x1d0410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d041c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d041cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0420: 0x90833038  lbu         $v1, 0x3038($a0)
    ctx->pc = 0x1d0420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12344)));
    // 0x1d0424: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x1d0424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x1d0428: 0xa0833038  sb          $v1, 0x3038($a0)
    ctx->pc = 0x1d0428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12344), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d042c: 0x90833038  lbu         $v1, 0x3038($a0)
    ctx->pc = 0x1d042cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12344)));
    // 0x1d0430: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x1d0430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x1d0434: 0xa0833038  sb          $v1, 0x3038($a0)
    ctx->pc = 0x1d0434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12344), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d0438: 0x90833024  lbu         $v1, 0x3024($a0)
    ctx->pc = 0x1d0438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12324)));
    // 0x1d043c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D043Cu;
    {
        const bool branch_taken_0x1d043c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D043Cu;
        // 0x1d0440: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d043c) {
            ctx->pc = 0x1D04C0u;
            goto label_1d04c0;
        }
    }
    ctx->pc = 0x1D0444u;
    // 0x1d0444: 0xc046028  jal         func_1180A0
    ctx->pc = 0x1D0444u;
    SET_GPR_U32(ctx, 31, 0x1D044Cu);
    ctx->pc = 0x1180A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180A0u, 0x1D0444u, 0x1D044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D044Cu;
label_1d044c:
    // 0x1d044c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d044cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0450: 0xc043898  jal         func_10E260
    ctx->pc = 0x1D0450u;
    SET_GPR_U32(ctx, 31, 0x1D0458u);
    ctx->pc = 0x1D0454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0450u;
    // 0x1d0454: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1D0450u, 0x1D0458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0458u;
label_1d0458:
    // 0x1d0458: 0xc043898  jal         func_10E260
    ctx->pc = 0x1D0458u;
    SET_GPR_U32(ctx, 31, 0x1D0460u);
    ctx->pc = 0x1D045Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0458u;
    // 0x1d045c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1D0458u, 0x1D0460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0460u;
label_1d0460:
    // 0x1d0460: 0xa2003021  sb          $zero, 0x3021($s0)
    ctx->pc = 0x1d0460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12321), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0464: 0xf  sync
    ctx->pc = 0x1d0464u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1d0468: 0xc043898  jal         func_10E260
    ctx->pc = 0x1D0468u;
    SET_GPR_U32(ctx, 31, 0x1D0470u);
    ctx->pc = 0x1D046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0468u;
    // 0x1d046c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1D0468u, 0x1D0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0470u;
label_1d0470:
    // 0x1d0470: 0xc043898  jal         func_10E260
    ctx->pc = 0x1D0470u;
    SET_GPR_U32(ctx, 31, 0x1D0478u);
    ctx->pc = 0x1D0474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0470u;
    // 0x1d0474: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E260u, 0x1D0470u, 0x1D0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0478u;
label_1d0478:
    // 0x1d0478: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0478u;
    {
        const bool branch_taken_0x1d0478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0478) {
            ctx->pc = 0x1D0488u;
            goto label_1d0488;
        }
    }
    ctx->pc = 0x1D0480u;
    // 0x1d0480: 0xc04603c  jal         func_1180F0
    ctx->pc = 0x1D0480u;
    SET_GPR_U32(ctx, 31, 0x1D0488u);
    ctx->pc = 0x1180F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180F0u, 0x1D0480u, 0x1D0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0488u;
label_1d0488:
    // 0x1d0488: 0xa2003020  sb          $zero, 0x3020($s0)
    ctx->pc = 0x1d0488u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12320), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d048c: 0xa2003024  sb          $zero, 0x3024($s0)
    ctx->pc = 0x1d048cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12324), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d0490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0494: 0xa2023025  sb          $v0, 0x3025($s0)
    ctx->pc = 0x1d0494u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d0498: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d049c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d049cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d04a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d04a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d04a4: 0xc04121a  jal         func_104868
    ctx->pc = 0x1D04A4u;
    SET_GPR_U32(ctx, 31, 0x1D04ACu);
    ctx->pc = 0x1D04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04A4u;
    // 0x1d04a8: 0x34449000  ori         $a0, $v0, 0x9000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104868u, 0x1D04A4u, 0x1D04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04ACu;
label_1d04ac:
    // 0x1d04ac: 0x8e033030  lw          $v1, 0x3030($s0)
    ctx->pc = 0x1d04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12336)));
    // 0x1d04b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D04B0u;
    {
        const bool branch_taken_0x1d04b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04b0) {
            ctx->pc = 0x1D04C0u;
            goto label_1d04c0;
        }
    }
    ctx->pc = 0x1D04B8u;
    // 0x1d04b8: 0xae003034  sw          $zero, 0x3034($s0)
    ctx->pc = 0x1d04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12340), GPR_U32(ctx, 0));
    // 0x1d04bc: 0xae003030  sw          $zero, 0x3030($s0)
    ctx->pc = 0x1d04bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12336), GPR_U32(ctx, 0));
label_1d04c0:
    // 0x1d04c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d04c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d04c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d04c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d04c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d04c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d04cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D04CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04CCu;
        // 0x1d04d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D04CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D04D4u;
}
