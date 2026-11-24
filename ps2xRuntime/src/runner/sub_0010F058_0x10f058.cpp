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

// Function: sub_0010F058
// Address: 0x10f058 - 0x10f120
void sub_0010F058_0x10f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F058_0x10f058");
#endif

    switch (ctx->pc) {
        case 0x10f0a8u: goto label_10f0a8;
        case 0x10f0c8u: goto label_10f0c8;
        case 0x10f0dcu: goto label_10f0dc;
        case 0x10f0f0u: goto label_10f0f0;
        case 0x10f100u: goto label_10f100;
        case 0x10f108u: goto label_10f108;
        default: break;
    }

    ctx->pc = 0x10f058u;

    // 0x10f058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10f058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10f05c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10f060: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10f064: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10f064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f068: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10f068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10f06c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10f070: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10f070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10f074: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10f074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10f078: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F078u;
    {
        const bool branch_taken_0x10f078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f078) {
            ctx->pc = 0x10F07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F078u;
            // 0x10f07c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F08Cu;
            goto label_10f08c;
        }
    }
    ctx->pc = 0x10F080u;
    // 0x10f080: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10f080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10f084: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10F084u;
    {
        const bool branch_taken_0x10f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F084u;
        // 0x10f088: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f084) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F08Cu;
label_10f08c:
    // 0x10f08c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10f08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f090: 0x244223f0  addiu       $v0, $v0, 0x23F0
    ctx->pc = 0x10f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9200));
    // 0x10f094: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10f094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10f098: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10f09c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10f09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0a0: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x10F0A0u;
    SET_GPR_U32(ctx, 31, 0x10F0A8u);
    ctx->pc = 0x10F0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0A0u;
    // 0x10f0a4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x10F0A0u, 0x10F0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0A8u;
label_10f0a8:
    // 0x10f0a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10f0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0ac: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F0ACu;
    {
        const bool branch_taken_0x10f0ac = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x10F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0ACu;
        // 0x10f0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0ac) {
            ctx->pc = 0x10F0C0u;
            goto label_10f0c0;
        }
    }
    ctx->pc = 0x10F0B4u;
    // 0x10f0b4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10f0b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10F0B8u;
    {
        const bool branch_taken_0x10f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0B8u;
        // 0x10f0bc: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0b8) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F0C0u;
label_10f0c0:
    // 0x10f0c0: 0xc0466e0  jal         func_119B80
    ctx->pc = 0x10F0C0u;
    SET_GPR_U32(ctx, 31, 0x10F0C8u);
    ctx->pc = 0x10F0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0C0u;
    // 0x10f0c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119B80u, 0x10F0C0u, 0x10F0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0C8u;
label_10f0c8:
    // 0x10f0c8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10f0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10f0cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0d0: 0x24a5f298  addiu       $a1, $a1, -0xD68
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963864));
    // 0x10f0d4: 0xc04674c  jal         func_119D30
    ctx->pc = 0x10F0D4u;
    SET_GPR_U32(ctx, 31, 0x10F0DCu);
    ctx->pc = 0x10F0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0D4u;
    // 0x10f0d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119D30u, 0x10F0D4u, 0x10F0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0DCu;
label_10f0dc:
    // 0x10f0dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f0e0: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F0E0u;
    {
        const bool branch_taken_0x10f0e0 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x10f0e0) {
            ctx->pc = 0x10F0F8u;
            goto label_10f0f8;
        }
    }
    ctx->pc = 0x10F0E8u;
    // 0x10f0e8: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x10F0E8u;
    SET_GPR_U32(ctx, 31, 0x10F0F0u);
    ctx->pc = 0x10F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0E8u;
    // 0x10f0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x10F0E8u, 0x10F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F0F0u;
label_10f0f0:
    // 0x10f0f0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10F0F0u;
    {
        const bool branch_taken_0x10f0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F0F0u;
        // 0x10f0f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0f0) {
            ctx->pc = 0x10F10Cu;
            goto label_10f10c;
        }
    }
    ctx->pc = 0x10F0F8u;
label_10f0f8:
    // 0x10f0f8: 0xc043808  jal         func_10E020
    ctx->pc = 0x10F0F8u;
    SET_GPR_U32(ctx, 31, 0x10F100u);
    ctx->pc = 0x10F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F0F8u;
    // 0x10f0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x10F0F8u, 0x10F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F100u;
label_10f100:
    // 0x10f100: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x10F100u;
    SET_GPR_U32(ctx, 31, 0x10F108u);
    ctx->pc = 0x10F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F100u;
    // 0x10f104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x10F100u, 0x10F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F108u;
label_10f108:
    // 0x10f108: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f10c:
    // 0x10f10c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10f10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f110: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10f110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f114: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10f114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10f118: 0x3e00008  jr          $ra
    ctx->pc = 0x10F118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F118u;
        // 0x10f11c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F120u;
}
