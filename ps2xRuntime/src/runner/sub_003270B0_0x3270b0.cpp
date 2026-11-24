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

// Function: sub_003270B0
// Address: 0x3270b0 - 0x327128
void sub_003270B0_0x3270b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003270B0_0x3270b0");
#endif

    switch (ctx->pc) {
        case 0x3270d4u: goto label_3270d4;
        case 0x3270dcu: goto label_3270dc;
        case 0x327110u: goto label_327110;
        case 0x327118u: goto label_327118;
        default: break;
    }

    ctx->pc = 0x3270b0u;

    // 0x3270b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3270b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3270b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3270b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3270b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3270b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3270bc: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3270BCu;
    {
        const bool branch_taken_0x3270bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270BCu;
        // 0x3270c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270bc) {
            ctx->pc = 0x327118u;
            goto label_327118;
        }
    }
    ctx->pc = 0x3270C4u;
    // 0x3270c4: 0x960204e8  lhu         $v0, 0x4E8($s0)
    ctx->pc = 0x3270c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x3270c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3270c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270cc: 0xc0a5fd0  jal         func_297F40
    ctx->pc = 0x3270CCu;
    SET_GPR_U32(ctx, 31, 0x3270D4u);
    ctx->pc = 0x3270D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270CCu;
    // 0x3270d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F40u, 0x3270CCu, 0x3270D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270D4u;
label_3270d4:
    // 0x3270d4: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3270D4u;
    SET_GPR_U32(ctx, 31, 0x3270DCu);
    ctx->pc = 0x3270D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3270D4u;
    // 0x3270d8: 0x8e0404e4  lw          $a0, 0x4E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3270D4u, 0x3270DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3270DCu;
label_3270dc:
    // 0x3270dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3270dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3270e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3270e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3270e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3270e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3270e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3270e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3270ec: 0x3c025a00  lui         $v0, 0x5A00
    ctx->pc = 0x3270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23040 << 16));
    // 0x3270f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3270f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3270f4: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x3270f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x3270f8: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3270f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3270fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3270fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327100: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327104: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327104u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327108: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x327108u;
    SET_GPR_U32(ctx, 31, 0x327110u);
    ctx->pc = 0x32710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327108u;
    // 0x32710c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x327108u, 0x327110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327110u;
label_327110:
    // 0x327110: 0xc0c9c08  jal         func_327020
    ctx->pc = 0x327110u;
    SET_GPR_U32(ctx, 31, 0x327118u);
    ctx->pc = 0x327114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327110u;
    // 0x327114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327020u, 0x327110u, 0x327118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327118u;
label_327118:
    // 0x327118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32711c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32711cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327120: 0x3e00008  jr          $ra
    ctx->pc = 0x327120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327120u;
        // 0x327124: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327128u;
}
