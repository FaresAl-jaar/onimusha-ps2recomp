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

// Function: sub_00396400
// Address: 0x396400 - 0x396490
void sub_00396400_0x396400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396400_0x396400");
#endif

    switch (ctx->pc) {
        case 0x396420u: goto label_396420;
        case 0x396438u: goto label_396438;
        case 0x396474u: goto label_396474;
        default: break;
    }

    ctx->pc = 0x396400u;

    // 0x396400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x396404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x396404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x396408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x396408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39640c: 0x90832b32  lbu         $v1, 0x2B32($a0)
    ctx->pc = 0x39640cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11058)));
    // 0x396410: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x396410u;
    {
        const bool branch_taken_0x396410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x396414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396410u;
        // 0x396414: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396410) {
            ctx->pc = 0x396480u;
            goto label_396480;
        }
    }
    ctx->pc = 0x396418u;
    // 0x396418: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x396418u;
    SET_GPR_U32(ctx, 31, 0x396420u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x396418u, 0x396420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396420u;
label_396420:
    // 0x396420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396424: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x396424u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x396428: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x396428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39642c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x39642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x396430: 0xc0aa28c  jal         func_2A8A30
    ctx->pc = 0x396430u;
    SET_GPR_U32(ctx, 31, 0x396438u);
    ctx->pc = 0x396434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396430u;
    // 0x396434: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8A30u, 0x396430u, 0x396438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396438u;
label_396438:
    // 0x396438: 0x92032b2c  lbu         $v1, 0x2B2C($s0)
    ctx->pc = 0x396438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11052)));
    // 0x39643c: 0x3c022600  lui         $v0, 0x2600
    ctx->pc = 0x39643cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9728 << 16));
    // 0x396440: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x396440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x396444: 0x34454502  ori         $a1, $v0, 0x4502
    ctx->pc = 0x396444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17666);
    // 0x396448: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x396448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39644c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39644cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396450: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x396450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396454: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x396454u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x396458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39645c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39645cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396460: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x396460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x396464: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x396464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x396468: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x396468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x39646c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39646Cu;
    SET_GPR_U32(ctx, 31, 0x396474u);
    ctx->pc = 0x396470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39646Cu;
    // 0x396470: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39646Cu, 0x396474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396474u;
label_396474:
    // 0x396474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x396474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396478: 0xa2032b32  sb          $v1, 0x2B32($s0)
    ctx->pc = 0x396478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11058), (uint8_t)GPR_U32(ctx, 3));
    // 0x39647c: 0x0  nop
    ctx->pc = 0x39647cu;
    // NOP
label_396480:
    // 0x396480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x396484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396488: 0x3e00008  jr          $ra
    ctx->pc = 0x396488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396488u;
        // 0x39648c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396490u;
}
