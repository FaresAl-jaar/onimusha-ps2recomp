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

// Function: sub_003A0B70
// Address: 0x3a0b70 - 0x3a0c08
void sub_003A0B70_0x3a0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0B70_0x3a0b70");
#endif

    switch (ctx->pc) {
        case 0x3a0b88u: goto label_3a0b88;
        case 0x3a0ba0u: goto label_3a0ba0;
        case 0x3a0bc0u: goto label_3a0bc0;
        case 0x3a0bf8u: goto label_3a0bf8;
        default: break;
    }

    ctx->pc = 0x3a0b70u;

    // 0x3a0b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0b74: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x3a0b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x3a0b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a0b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a0b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a0b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a0b80: 0xc0d8e98  jal         func_363A60
    ctx->pc = 0x3A0B80u;
    SET_GPR_U32(ctx, 31, 0x3A0B88u);
    ctx->pc = 0x3A0B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B80u;
    // 0x3a0b84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x3A0B80u, 0x3A0B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0B88u;
label_3a0b88:
    // 0x3a0b88: 0xaf828c54  sw          $v0, -0x73AC($gp)
    ctx->pc = 0x3a0b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 2));
    // 0x3a0b8c: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x3a0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x3a0b90: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A0B90u;
    {
        const bool branch_taken_0x3a0b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B90u;
        // 0x3a0b94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b90) {
            ctx->pc = 0x3A0BF8u;
            goto label_3a0bf8;
        }
    }
    ctx->pc = 0x3A0B98u;
    // 0x3a0b98: 0xc049590  jal         func_125640
    ctx->pc = 0x3A0B98u;
    SET_GPR_U32(ctx, 31, 0x3A0BA0u);
    ctx->pc = 0x3A0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0B98u;
    // 0x3a0b9c: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3A0B98u, 0x3A0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BA0u;
label_3a0ba0:
    // 0x3a0ba0: 0x8f838c54  lw          $v1, -0x73AC($gp)
    ctx->pc = 0x3a0ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
    // 0x3a0ba4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a0ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a0ba8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3a0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3a0bac: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a0bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a0bb0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3a0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3a0bb4: 0x34461012  ori         $a2, $v0, 0x1012
    ctx->pc = 0x3a0bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4114);
    // 0x3a0bb8: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x3A0BB8u;
    SET_GPR_U32(ctx, 31, 0x3A0BC0u);
    ctx->pc = 0x3A0BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BB8u;
    // 0x3a0bbc: 0xa0600020  sb          $zero, 0x20($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x3A0BB8u, 0x3A0BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BC0u;
label_3a0bc0:
    // 0x3a0bc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a0bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a0bc4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3a0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3a0bc8: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3a0bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a0bcc: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x3a0bccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3a0bd0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3a0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3a0bd4: 0xaf828c58  sw          $v0, -0x73A8($gp)
    ctx->pc = 0x3a0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
    // 0x3a0bd8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3a0bd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3a0bdc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a0bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a0be0: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A0BE0u;
    {
        const bool branch_taken_0x3a0be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0BE0u;
        // 0x3a0be4: 0xac24cebc  sw          $a0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0be0) {
            ctx->pc = 0x3A0BF8u;
            goto label_3a0bf8;
        }
    }
    ctx->pc = 0x3A0BE8u;
    // 0x3a0be8: 0x93868a54  lbu         $a2, -0x75AC($gp)
    ctx->pc = 0x3a0be8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x3a0bec: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3a0becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3a0bf0: 0xc0ce5e4  jal         func_339790
    ctx->pc = 0x3A0BF0u;
    SET_GPR_U32(ctx, 31, 0x3A0BF8u);
    ctx->pc = 0x3A0BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0BF0u;
    // 0x3a0bf4: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339790u, 0x3A0BF0u, 0x3A0BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0BF8u;
label_3a0bf8:
    // 0x3a0bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a0bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0c00: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0C00u;
        // 0x3a0c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0C08u;
}
