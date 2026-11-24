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

// Function: sub_001128C0
// Address: 0x1128c0 - 0x11292c
void sub_001128C0_0x1128c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001128C0_0x1128c0");
#endif

    switch (ctx->pc) {
        case 0x1128dcu: goto label_1128dc;
        case 0x1128e4u: goto label_1128e4;
        case 0x1128f8u: goto label_1128f8;
        case 0x112914u: goto label_112914;
        default: break;
    }

    ctx->pc = 0x1128c0u;

    // 0x1128c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1128c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1128c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1128c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1128c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1128c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1128cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1128ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1128d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1128d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1128d4: 0xc044996  jal         func_112658
    ctx->pc = 0x1128D4u;
    SET_GPR_U32(ctx, 31, 0x1128DCu);
    ctx->pc = 0x1128D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128D4u;
    // 0x1128d8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112658u, 0x1128D4u, 0x1128DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128DCu;
label_1128dc:
    // 0x1128dc: 0xc043808  jal         func_10E020
    ctx->pc = 0x1128DCu;
    SET_GPR_U32(ctx, 31, 0x1128E4u);
    ctx->pc = 0x1128E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128DCu;
    // 0x1128e0: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x1128DCu, 0x1128E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128E4u;
label_1128e4:
    // 0x1128e4: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1128e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1128e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1128E8u;
    {
        const bool branch_taken_0x1128e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E8u;
        // 0x1128ec: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128e8) {
            ctx->pc = 0x112900u;
            goto label_112900;
        }
    }
    ctx->pc = 0x1128F0u;
    // 0x1128f0: 0xc043800  jal         func_10E000
    ctx->pc = 0x1128F0u;
    SET_GPR_U32(ctx, 31, 0x1128F8u);
    ctx->pc = 0x1128F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1128F0u;
    // 0x1128f4: 0x8e242b48  lw          $a0, 0x2B48($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x1128F0u, 0x1128F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128F8u;
label_1128f8:
    // 0x1128f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1128F8u;
    {
        const bool branch_taken_0x1128f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128F8u;
        // 0x1128fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128f8) {
            ctx->pc = 0x112918u;
            goto label_112918;
        }
    }
    ctx->pc = 0x112900u;
label_112900:
    // 0x112900: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x112900u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x112904: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x112904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x112908: 0x8e242b48  lw          $a0, 0x2B48($s1)
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11080)));
    // 0x11290c: 0xc043800  jal         func_10E000
    ctx->pc = 0x11290Cu;
    SET_GPR_U32(ctx, 31, 0x112914u);
    ctx->pc = 0x112910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11290Cu;
    // 0x112910: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E000u, 0x11290Cu, 0x112914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112914u;
label_112914:
    // 0x112914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x112914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112918:
    // 0x112918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x112918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11291c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11291cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112920: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112920u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112924: 0x3e00008  jr          $ra
    ctx->pc = 0x112924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112924u;
        // 0x112928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11292Cu;
}
