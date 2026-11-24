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

// Function: sub_002052F8
// Address: 0x2052f8 - 0x20536c
void sub_002052F8_0x2052f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002052F8_0x2052f8");
#endif

    switch (ctx->pc) {
        case 0x205318u: goto label_205318;
        case 0x205344u: goto label_205344;
        default: break;
    }

    ctx->pc = 0x2052f8u;

    // 0x2052f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2052f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2052fc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x2052fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x205300: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x205300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205304: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x205304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x205308: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x205308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20530c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20530cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205310: 0xc088eb6  jal         func_223AD8
    ctx->pc = 0x205310u;
    SET_GPR_U32(ctx, 31, 0x205318u);
    ctx->pc = 0x205314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205310u;
    // 0x205314: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD8u, 0x205310u, 0x205318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205318u;
label_205318:
    // 0x205318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x205318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20531c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20531cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205320: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x205320u;
    {
        const bool branch_taken_0x205320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x205324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205320u;
        // 0x205324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205320) {
            ctx->pc = 0x205358u;
            goto label_205358;
        }
    }
    ctx->pc = 0x205328u;
    // 0x205328: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x205328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20532c: 0x5604000b  bnel        $s0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x20532Cu;
    {
        const bool branch_taken_0x20532c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x20532c) {
            ctx->pc = 0x205330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20532Cu;
            // 0x205330: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20535Cu;
            goto label_20535c;
        }
    }
    ctx->pc = 0x205334u;
    // 0x205334: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x205334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205338: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x205338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x20533c: 0xc089274  jal         func_2249D0
    ctx->pc = 0x20533Cu;
    SET_GPR_U32(ctx, 31, 0x205344u);
    ctx->pc = 0x205340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20533Cu;
    // 0x205340: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2249D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2249D0u, 0x20533Cu, 0x205344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205344u;
label_205344:
    // 0x205344: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205344u;
    {
        const bool branch_taken_0x205344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x205348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205344u;
        // 0x205348: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205344) {
            ctx->pc = 0x205358u;
            goto label_205358;
        }
    }
    ctx->pc = 0x20534Cu;
    // 0x20534c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x20534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205350: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x205350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x205354: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x205354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_205358:
    // 0x205358: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x205358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20535c:
    // 0x20535c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20535cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205360: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205364: 0x3e00008  jr          $ra
    ctx->pc = 0x205364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205364u;
        // 0x205368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20536Cu;
}
