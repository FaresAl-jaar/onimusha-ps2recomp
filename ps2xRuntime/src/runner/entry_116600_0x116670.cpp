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

// Function: entry_116600
// Address: 0x116600 - 0x116670
void entry_116600_0x116670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116600_0x116670");
#endif

    switch (ctx->pc) {
        case 0x116650u: goto label_116650;
        default: break;
    }

    ctx->pc = 0x116600u;

    // 0x116600: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x116604: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116608: 0x8c432b58  lw          $v1, 0x2B58($v0)
    ctx->pc = 0x116608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x402B58u));
    // 0x11660c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11660cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116610: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116610u;
    {
        const bool branch_taken_0x116610 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x116614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116610u;
        // 0x116614: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116610) {
            ctx->pc = 0x116620u;
            goto label_116620;
        }
    }
    ctx->pc = 0x116618u;
    // 0x116618: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x116618u;
    {
        const bool branch_taken_0x116618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116618u;
        // 0x11661c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116618) {
            ctx->pc = 0x116660u;
            goto label_116660;
        }
    }
    ctx->pc = 0x116620u;
label_116620:
    // 0x116620: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116624: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x116628: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x116628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x11662c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116630: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x116630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x116634: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116638: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11663c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11663cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116640: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x116644: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116648: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116648u;
    SET_GPR_U32(ctx, 31, 0x116650u);
    ctx->pc = 0x11664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116648u;
    // 0x11664c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116648u, 0x116650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116650u;
label_116650:
    // 0x116650: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116650u;
    {
        const bool branch_taken_0x116650 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x116650) {
            ctx->pc = 0x116654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116650u;
            // 0x116654: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116660u;
            goto label_116660;
        }
    }
    ctx->pc = 0x116658u;
    // 0x116658: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11665c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11665cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_116660:
    // 0x116660: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116664: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116668: 0x3e00008  jr          $ra
    ctx->pc = 0x116668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116668u;
        // 0x11666c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116670u;
}
