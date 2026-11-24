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

// Function: sub_003325D0
// Address: 0x3325d0 - 0x33268c
void sub_003325D0_0x3325d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003325D0_0x3325d0");
#endif

    switch (ctx->pc) {
        case 0x3325e0u: goto label_3325e0;
        case 0x3325f4u: goto label_3325f4;
        case 0x33260cu: goto label_33260c;
        case 0x33264cu: goto label_33264c;
        case 0x332664u: goto label_332664;
        case 0x33267cu: goto label_33267c;
        default: break;
    }

    ctx->pc = 0x3325d0u;

    // 0x3325d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3325d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3325d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3325d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3325d8: 0xc0d9044  jal         func_364110
    ctx->pc = 0x3325D8u;
    SET_GPR_U32(ctx, 31, 0x3325E0u);
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x3325D8u, 0x3325E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325E0u;
label_3325e0:
    // 0x3325e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3325e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3325e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3325E4u;
    {
        const bool branch_taken_0x3325e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3325E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3325E4u;
        // 0x3325e8: 0x3c04004f  lui         $a0, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3325e4) {
            ctx->pc = 0x332600u;
            goto label_332600;
        }
    }
    ctx->pc = 0x3325ECu;
    // 0x3325ec: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x3325ECu;
    SET_GPR_U32(ctx, 31, 0x3325F4u);
    ctx->pc = 0x3325F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3325ECu;
    // 0x3325f0: 0x2484a100  addiu       $a0, $a0, -0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x3325ECu, 0x3325F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3325F4u;
label_3325f4:
    // 0x3325f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3325F4u;
    {
        const bool branch_taken_0x3325f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3325f4) {
            ctx->pc = 0x332610u;
            goto label_332610;
        }
    }
    ctx->pc = 0x3325FCu;
    // 0x3325fc: 0x0  nop
    ctx->pc = 0x3325fcu;
    // NOP
label_332600:
    // 0x332600: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x332600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x332604: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x332604u;
    SET_GPR_U32(ctx, 31, 0x33260Cu);
    ctx->pc = 0x332608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332604u;
    // 0x332608: 0x2484a130  addiu       $a0, $a0, -0x5ED0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x332604u, 0x33260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33260Cu;
label_33260c:
    // 0x33260c: 0x0  nop
    ctx->pc = 0x33260cu;
    // NOP
label_332610:
    // 0x332610: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x332610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x332614: 0x90246c10  lbu         $a0, 0x6C10($at)
    ctx->pc = 0x332614u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C10u));
    // 0x332618: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x332618u;
    {
        const bool branch_taken_0x332618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332618u;
        // 0x33261c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332618) {
            ctx->pc = 0x332670u;
            goto label_332670;
        }
    }
    ctx->pc = 0x332620u;
    // 0x332620: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x332620u;
    {
        const bool branch_taken_0x332620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x332620) {
            ctx->pc = 0x332658u;
            goto label_332658;
        }
    }
    ctx->pc = 0x332628u;
    // 0x332628: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33262c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33262Cu;
    {
        const bool branch_taken_0x33262c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33262c) {
            ctx->pc = 0x332640u;
            goto label_332640;
        }
    }
    ctx->pc = 0x332634u;
    // 0x332634: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x332634u;
    {
        const bool branch_taken_0x332634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332634) {
            ctx->pc = 0x332680u;
            goto label_332680;
        }
    }
    ctx->pc = 0x33263Cu;
    // 0x33263c: 0x0  nop
    ctx->pc = 0x33263cu;
    // NOP
label_332640:
    // 0x332640: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x332640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x332644: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x332644u;
    SET_GPR_U32(ctx, 31, 0x33264Cu);
    ctx->pc = 0x332648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332644u;
    // 0x332648: 0x2484a1b0  addiu       $a0, $a0, -0x5E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x332644u, 0x33264Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33264Cu;
label_33264c:
    // 0x33264c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33264Cu;
    {
        const bool branch_taken_0x33264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33264c) {
            ctx->pc = 0x332680u;
            goto label_332680;
        }
    }
    ctx->pc = 0x332654u;
    // 0x332654: 0x0  nop
    ctx->pc = 0x332654u;
    // NOP
label_332658:
    // 0x332658: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x332658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x33265c: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x33265Cu;
    SET_GPR_U32(ctx, 31, 0x332664u);
    ctx->pc = 0x332660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33265Cu;
    // 0x332660: 0x2484a1c0  addiu       $a0, $a0, -0x5E40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x33265Cu, 0x332664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332664u;
label_332664:
    // 0x332664: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x332664u;
    {
        const bool branch_taken_0x332664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x332664) {
            ctx->pc = 0x332680u;
            goto label_332680;
        }
    }
    ctx->pc = 0x33266Cu;
    // 0x33266c: 0x0  nop
    ctx->pc = 0x33266cu;
    // NOP
label_332670:
    // 0x332670: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x332670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x332674: 0xc0cc95c  jal         func_332570
    ctx->pc = 0x332674u;
    SET_GPR_U32(ctx, 31, 0x33267Cu);
    ctx->pc = 0x332678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332674u;
    // 0x332678: 0x2484a1d0  addiu       $a0, $a0, -0x5E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332570u, 0x332674u, 0x33267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33267Cu;
label_33267c:
    // 0x33267c: 0x0  nop
    ctx->pc = 0x33267cu;
    // NOP
label_332680:
    // 0x332680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332684: 0x3e00008  jr          $ra
    ctx->pc = 0x332684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332684u;
        // 0x332688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33268Cu;
}
