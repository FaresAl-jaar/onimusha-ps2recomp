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

// Function: sub_0021B4F8
// Address: 0x21b4f8 - 0x21b598
void sub_0021B4F8_0x21b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B4F8_0x21b4f8");
#endif

    switch (ctx->pc) {
        case 0x21b52cu: goto label_21b52c;
        case 0x21b56cu: goto label_21b56c;
        case 0x21b57cu: goto label_21b57c;
        default: break;
    }

    ctx->pc = 0x21b4f8u;

    // 0x21b4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b4fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21b4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21b500: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21b500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b504: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21b504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21b508: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21b508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b50c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x21b50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x21b510: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x21b510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x21b514: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21b514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b518: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x21b518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x21b51c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b520: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21b520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21b524: 0xc086a46  jal         func_21A918
    ctx->pc = 0x21B524u;
    SET_GPR_U32(ctx, 31, 0x21B52Cu);
    ctx->pc = 0x21B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B524u;
    // 0x21b528: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A918u, 0x21B524u, 0x21B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B52Cu;
label_21b52c:
    // 0x21b52c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b530: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x21b530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x21b534: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x21b534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b538: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21b538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21b53c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x21b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x21b540: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21b540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21b544: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x21b544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21b548: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x21b548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x21b54c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x21b54cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x21b550: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x21b550u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b554: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x21b554u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b558: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x21b558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x21b55c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x21b55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x21b560: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21b560u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b564: 0xc086e24  jal         func_21B890
    ctx->pc = 0x21B564u;
    SET_GPR_U32(ctx, 31, 0x21B56Cu);
    ctx->pc = 0x21B568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B564u;
    // 0x21b568: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B890u, 0x21B564u, 0x21B56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B56Cu;
label_21b56c:
    // 0x21b56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21b56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21b570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b574: 0xc086a82  jal         func_21AA08
    ctx->pc = 0x21B574u;
    SET_GPR_U32(ctx, 31, 0x21B57Cu);
    ctx->pc = 0x21B578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B574u;
    // 0x21b578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AA08u, 0x21B574u, 0x21B57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B57Cu;
label_21b57c:
    // 0x21b57c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b57cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b580: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21b580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21b584: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21b584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b588: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b58c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21b58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21b590: 0x3e00008  jr          $ra
    ctx->pc = 0x21B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B590u;
        // 0x21b594: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B598u;
}
