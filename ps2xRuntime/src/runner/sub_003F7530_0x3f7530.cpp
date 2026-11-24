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

// Function: sub_003F7530
// Address: 0x3f7530 - 0x3f75d4
void sub_003F7530_0x3f7530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7530_0x3f7530");
#endif

    switch (ctx->pc) {
        case 0x3f7544u: goto label_3f7544;
        case 0x3f75a4u: goto label_3f75a4;
        case 0x3f75b4u: goto label_3f75b4;
        default: break;
    }

    ctx->pc = 0x3f7530u;

    // 0x3f7530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f7530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3f7534: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3f7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3f7538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3f753c: 0xc0a4a1c  jal         func_292870
    ctx->pc = 0x3F753Cu;
    SET_GPR_U32(ctx, 31, 0x3F7544u);
    ctx->pc = 0x3F7540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F753Cu;
    // 0x3f7540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292870u, 0x3F753Cu, 0x3F7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7544u;
label_3f7544:
    // 0x3f7544: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3f7544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3f7548: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F7548u;
    {
        const bool branch_taken_0x3f7548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F754Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7548u;
        // 0x3f754c: 0x3c03457a  lui         $v1, 0x457A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7548) {
            ctx->pc = 0x3F7568u;
            goto label_3f7568;
        }
    }
    ctx->pc = 0x3F7550u;
    // 0x3f7550: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3f7550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3f7554: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3f7554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x3f7558: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3f7558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3f755c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f755cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3f7560: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3f7560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3f7564: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f7564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3f7568:
    // 0x3f7568: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3f7568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3f756c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3f756cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3f7570: 0x26042b40  addiu       $a0, $s0, 0x2B40
    ctx->pc = 0x3f7570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    // 0x3f7574: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f7574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f7578: 0xae0206c8  sw          $v0, 0x6C8($s0)
    ctx->pc = 0x3f7578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 2));
    // 0x3f757c: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3f757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3f7580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3f7580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3f7584: 0xae0206cc  sw          $v0, 0x6CC($s0)
    ctx->pc = 0x3f7584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    // 0x3f7588: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3f7588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3f758c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3f758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3f7590: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3f7590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3f7594: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x3f7594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x3f7598: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3f7598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3f759c: 0xc04150c  jal         func_105430
    ctx->pc = 0x3F759Cu;
    SET_GPR_U32(ctx, 31, 0x3F75A4u);
    ctx->pc = 0x3F75A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F759Cu;
    // 0x3f75a0: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3F759Cu, 0x3F75A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F75A4u;
label_3f75a4:
    // 0x3f75a4: 0x8e052b18  lw          $a1, 0x2B18($s0)
    ctx->pc = 0x3f75a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11032)));
    // 0x3f75a8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3f75a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3f75ac: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3F75ACu;
    SET_GPR_U32(ctx, 31, 0x3F75B4u);
    ctx->pc = 0x3F75B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F75ACu;
    // 0x3f75b0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3F75ACu, 0x3F75B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F75B4u;
label_3f75b4:
    // 0x3f75b4: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3f75b8: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3f75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3f75bc: 0x786300b0  lq          $v1, 0xB0($v1)
    ctx->pc = 0x3f75bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x3f75c0: 0x7e032b30  sq          $v1, 0x2B30($s0)
    ctx->pc = 0x3f75c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 11056), GPR_VEC(ctx, 3));
    // 0x3f75c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3f75c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f75c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f75c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f75cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F75CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F75CCu;
        // 0x3f75d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F75CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F75D4u;
}
