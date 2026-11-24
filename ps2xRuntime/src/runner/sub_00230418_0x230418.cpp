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

// Function: sub_00230418
// Address: 0x230418 - 0x2304d8
void sub_00230418_0x230418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230418_0x230418");
#endif

    switch (ctx->pc) {
        case 0x23045cu: goto label_23045c;
        case 0x230464u: goto label_230464;
        case 0x230488u: goto label_230488;
        case 0x23049cu: goto label_23049c;
        case 0x2304b4u: goto label_2304b4;
        default: break;
    }

    ctx->pc = 0x230418u;

    // 0x230418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23041c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23041cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x230420: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x230420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x230424: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x230424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230428: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x230428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23042c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23042cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230434: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x230434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23043c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23043cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230440: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x230444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230448: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x230448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23044c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230450: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x230450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x230454: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x230454u;
    SET_GPR_U32(ctx, 31, 0x23045Cu);
    ctx->pc = 0x230458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230454u;
    // 0x230458: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x230454u, 0x23045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23045Cu;
label_23045c:
    // 0x23045c: 0xc08c040  jal         func_230100
    ctx->pc = 0x23045Cu;
    SET_GPR_U32(ctx, 31, 0x230464u);
    ctx->pc = 0x230100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230100u, 0x23045Cu, 0x230464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230464u;
label_230464:
    // 0x230464: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x230468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23046c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x23046cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230474: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x230474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230478: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x230478u;
    {
        const bool branch_taken_0x230478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230478u;
        // 0x23047c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230478) {
            ctx->pc = 0x23049Cu;
            goto label_23049c;
        }
    }
    ctx->pc = 0x230480u;
    // 0x230480: 0xc08c0cc  jal         func_230330
    ctx->pc = 0x230480u;
    SET_GPR_U32(ctx, 31, 0x230488u);
    ctx->pc = 0x230330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230330u, 0x230480u, 0x230488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230488u;
label_230488:
    // 0x230488: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230488u;
    {
        const bool branch_taken_0x230488 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x23048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230488u;
        // 0x23048c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230488) {
            ctx->pc = 0x2304A0u;
            goto label_2304a0;
        }
    }
    ctx->pc = 0x230490u;
    // 0x230490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230494: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x230494u;
    SET_GPR_U32(ctx, 31, 0x23049Cu);
    ctx->pc = 0x230498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230494u;
    // 0x230498: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x230494u, 0x23049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23049Cu;
label_23049c:
    // 0x23049c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23049cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2304a0:
    // 0x2304a0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2304a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2304a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2304a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2304a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2304ac: 0xc08bbbc  jal         func_22EEF0
    ctx->pc = 0x2304ACu;
    SET_GPR_U32(ctx, 31, 0x2304B4u);
    ctx->pc = 0x2304B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304ACu;
    // 0x2304b0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EEF0u, 0x2304ACu, 0x2304B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304B4u;
label_2304b4:
    // 0x2304b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2304b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2304b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2304bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2304bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2304c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2304c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2304c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2304c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2304c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2304c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2304cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2304ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2304d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2304D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2304D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304D0u;
        // 0x2304d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2304D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2304D8u;
}
