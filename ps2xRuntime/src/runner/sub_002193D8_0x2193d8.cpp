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

// Function: sub_002193D8
// Address: 0x2193d8 - 0x219488
void sub_002193D8_0x2193d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002193D8_0x2193d8");
#endif

    switch (ctx->pc) {
        case 0x219410u: goto label_219410;
        case 0x219428u: goto label_219428;
        case 0x21945cu: goto label_21945c;
        default: break;
    }

    ctx->pc = 0x2193d8u;

    // 0x2193d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2193d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2193dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2193dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2193e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2193e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2193e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2193e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2193e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2193e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2193ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2193ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2193f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2193f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2193f4: 0x18c0001c  blez        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2193F4u;
    {
        const bool branch_taken_0x2193f4 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x2193F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2193F4u;
        // 0x2193f8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2193f4) {
            ctx->pc = 0x219468u;
            goto label_219468;
        }
    }
    ctx->pc = 0x2193FCu;
    // 0x2193fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2193fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219400: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x219400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219404: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x219404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219408: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x219408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21940c: 0x0  nop
    ctx->pc = 0x21940cu;
    // NOP
label_219410:
    // 0x219410: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x219414: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x219414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x219418: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x219418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21941c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219420: 0xc08805a  jal         func_220168
    ctx->pc = 0x219420u;
    SET_GPR_U32(ctx, 31, 0x219428u);
    ctx->pc = 0x219424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219420u;
    // 0x219424: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220168u, 0x219420u, 0x219428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219428u;
label_219428:
    // 0x219428: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x219428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21942c: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x21942cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x219430: 0x2604005c  addiu       $a0, $s0, 0x5C
    ctx->pc = 0x219430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x219434: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x219434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x219438: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x219438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x21943c: 0xae14003c  sw          $s4, 0x3C($s0)
    ctx->pc = 0x21943cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 20));
    // 0x219440: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x219440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x219444: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x219444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x219448: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x219448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x21944c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x21944cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x219450: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x219450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x219454: 0xc086522  jal         func_219488
    ctx->pc = 0x219454u;
    SET_GPR_U32(ctx, 31, 0x21945Cu);
    ctx->pc = 0x219458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219454u;
    // 0x219458: 0xae130058  sw          $s3, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219488u, 0x219454u, 0x21945Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21945Cu;
label_21945c:
    // 0x21945c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x21945cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x219460: 0x1620ffeb  bnez        $s1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x219460u;
    {
        const bool branch_taken_0x219460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x219464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219460u;
        // 0x219464: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219460) {
            ctx->pc = 0x219410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219410;
        }
    }
    ctx->pc = 0x219468u;
label_219468:
    // 0x219468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21946c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21946cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x219470: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x219470u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219474: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x219474u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x219478: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x219478u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21947c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21947cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x219480: 0x3e00008  jr          $ra
    ctx->pc = 0x219480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219480u;
        // 0x219484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219488u;
}
