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

// Function: sub_00236590
// Address: 0x236590 - 0x23661c
void sub_00236590_0x236590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236590_0x236590");
#endif

    switch (ctx->pc) {
        case 0x2365b8u: goto label_2365b8;
        case 0x2365c4u: goto label_2365c4;
        case 0x2365d0u: goto label_2365d0;
        default: break;
    }

    ctx->pc = 0x236590u;

    // 0x236590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236598: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23659c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23659cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2365a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2365a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2365a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2365a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2365a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2365ac: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x2365acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2365b0: 0xc08af1c  jal         func_22BC70
    ctx->pc = 0x2365B0u;
    SET_GPR_U32(ctx, 31, 0x2365B8u);
    ctx->pc = 0x2365B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365B0u;
    // 0x2365b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BC70u, 0x2365B0u, 0x2365B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365B8u;
label_2365b8:
    // 0x2365b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2365b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365bc: 0xc08b01c  jal         func_22C070
    ctx->pc = 0x2365BCu;
    SET_GPR_U32(ctx, 31, 0x2365C4u);
    ctx->pc = 0x2365C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365BCu;
    // 0x2365c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C070u, 0x2365BCu, 0x2365C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365C4u;
label_2365c4:
    // 0x2365c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2365c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2365c8: 0xc08b01e  jal         func_22C078
    ctx->pc = 0x2365C8u;
    SET_GPR_U32(ctx, 31, 0x2365D0u);
    ctx->pc = 0x2365CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365C8u;
    // 0x2365cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C078u, 0x2365C8u, 0x2365D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365D0u;
label_2365d0:
    // 0x2365d0: 0x8e440034  lw          $a0, 0x34($s2)
    ctx->pc = 0x2365d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x2365d4: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x2365d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2365d8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x2365d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2365dc: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2365dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2365e0: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x2365e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2365e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2365e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2365e8: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x2365e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2365ec: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2365ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2365f0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2365f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2365f4: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2365f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2365f8: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x2365f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x2365fc: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x2365fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
    // 0x236600: 0xae450030  sw          $a1, 0x30($s2)
    ctx->pc = 0x236600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
    // 0x236604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x236608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23660c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23660cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x236610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x236610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236614: 0x3e00008  jr          $ra
    ctx->pc = 0x236614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236614u;
        // 0x236618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23661Cu;
}
