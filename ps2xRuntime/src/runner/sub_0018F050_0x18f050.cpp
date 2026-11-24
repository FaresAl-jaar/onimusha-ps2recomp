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

// Function: sub_0018F050
// Address: 0x18f050 - 0x18f100
void sub_0018F050_0x18f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F050_0x18f050");
#endif

    switch (ctx->pc) {
        case 0x18f078u: goto label_18f078;
        case 0x18f0c4u: goto label_18f0c4;
        case 0x18f0d8u: goto label_18f0d8;
        default: break;
    }

    ctx->pc = 0x18f050u;

    // 0x18f050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18f058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18f05c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x18f05cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x18f060: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18F060u;
    {
        const bool branch_taken_0x18f060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F060u;
        // 0x18f064: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f060) {
            ctx->pc = 0x18F080u;
            goto label_18f080;
        }
    }
    ctx->pc = 0x18F068u;
    // 0x18f068: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18f068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18f06c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f070: 0xc0e1404  jal         func_385010
    ctx->pc = 0x18F070u;
    SET_GPR_U32(ctx, 31, 0x18F078u);
    ctx->pc = 0x18F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F070u;
    // 0x18f074: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385010u, 0x18F070u, 0x18F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F078u;
label_18f078:
    // 0x18f078: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18F078u;
    {
        const bool branch_taken_0x18f078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f078) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18F080u;
label_18f080:
    // 0x18f080: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x18F080u;
    {
        const bool branch_taken_0x18f080 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F080u;
        // 0x18f084: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f080) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F088u;
    // 0x18f088: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f08c: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x18f08cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x18f090: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18F090u;
    {
        const bool branch_taken_0x18f090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18f090) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F098u;
    // 0x18f098: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x18f098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x18f09c: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x18f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x18f0a0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x18f0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x18f0a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18F0A4u;
    {
        const bool branch_taken_0x18f0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0A4u;
        // 0x18f0a8: 0x30620400  andi        $v0, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0a4) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F0ACu;
    // 0x18f0ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18F0ACu;
    {
        const bool branch_taken_0x18f0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0ac) {
            ctx->pc = 0x18F0D0u;
            goto label_18f0d0;
        }
    }
    ctx->pc = 0x18F0B4u;
    // 0x18f0b4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18f0b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x18f0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18f0bc: 0xc0e140c  jal         func_385030
    ctx->pc = 0x18F0BCu;
    SET_GPR_U32(ctx, 31, 0x18F0C4u);
    ctx->pc = 0x18F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0BCu;
    // 0x18f0c0: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385030u, 0x18F0BCu, 0x18F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0C4u;
label_18f0c4:
    // 0x18f0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f0c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18F0C8u;
    {
        const bool branch_taken_0x18f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0C8u;
        // 0x18f0cc: 0xa2030004  sb          $v1, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0c8) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18F0D0u;
label_18f0d0:
    // 0x18f0d0: 0xc0e1414  jal         func_385050
    ctx->pc = 0x18F0D0u;
    SET_GPR_U32(ctx, 31, 0x18F0D8u);
    ctx->pc = 0x18F0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F0D0u;
    // 0x18f0d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385050u, 0x18F0D0u, 0x18F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F0D8u;
label_18f0d8:
    // 0x18f0d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18F0D8u;
    {
        const bool branch_taken_0x18f0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f0d8) {
            ctx->pc = 0x18F0F0u;
            goto label_18f0f0;
        }
    }
    ctx->pc = 0x18F0E0u;
    // 0x18f0e0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x18f0e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18f0e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18f0e8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x18f0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18f0ec: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x18f0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_18f0f0:
    // 0x18f0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18f0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x18F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0F8u;
        // 0x18f0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F100u;
}
