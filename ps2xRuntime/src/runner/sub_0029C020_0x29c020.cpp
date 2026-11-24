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

// Function: sub_0029C020
// Address: 0x29c020 - 0x29c108
void sub_0029C020_0x29c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C020_0x29c020");
#endif

    switch (ctx->pc) {
        case 0x29c058u: goto label_29c058;
        case 0x29c0c0u: goto label_29c0c0;
        default: break;
    }

    ctx->pc = 0x29c020u;

    // 0x29c020: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x29c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x29c024: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x29c024u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29c028: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x29c028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c02c: 0xe03827  not         $a3, $a3
    ctx->pc = 0x29c02cu;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
    // 0x29c030: 0xc75824  and         $t3, $a2, $a3
    ctx->pc = 0x29c030u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x29c034: 0x11600018  beqz        $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x29C034u;
    {
        const bool branch_taken_0x29c034 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C034u;
        // 0x29c038: 0x94630068  lhu         $v1, 0x68($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c034) {
            ctx->pc = 0x29C098u;
            goto label_29c098;
        }
    }
    ctx->pc = 0x29C03Cu;
    // 0x29c03c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x29c03cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c040: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C040u;
    {
        const bool branch_taken_0x29c040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C040u;
        // 0x29c044: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c040) {
            ctx->pc = 0x29C098u;
            goto label_29c098;
        }
    }
    ctx->pc = 0x29C048u;
    // 0x29c048: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29c048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c04c: 0x3c06f7ff  lui         $a2, 0xF7FF
    ctx->pc = 0x29c04cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63487 << 16));
    // 0x29c050: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x29c050u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x29c054: 0x0  nop
    ctx->pc = 0x29c054u;
    // NOP
label_29c058:
    // 0x29c058: 0x31660001  andi        $a2, $t3, 0x1
    ctx->pc = 0x29c058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x29c05c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C05Cu;
    {
        const bool branch_taken_0x29c05c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c05c) {
            ctx->pc = 0x29C080u;
            goto label_29c080;
        }
    }
    ctx->pc = 0x29C064u;
    // 0x29c064: 0x8ca6004c  lw          $a2, 0x4C($a1)
    ctx->pc = 0x29c064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x29c068: 0x8cc6007c  lw          $a2, 0x7C($a2)
    ctx->pc = 0x29c068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x29c06c: 0xc94021  addu        $t0, $a2, $t1
    ctx->pc = 0x29c06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x29c070: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x29c070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x29c074: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x29c074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x29c078: 0xad060004  sw          $a2, 0x4($t0)
    ctx->pc = 0x29c078u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
    // 0x29c07c: 0x0  nop
    ctx->pc = 0x29c07cu;
    // NOP
label_29c080:
    // 0x29c080: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29c080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29c084: 0x143302a  slt         $a2, $t2, $v1
    ctx->pc = 0x29c084u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c088: 0xb5842  srl         $t3, $t3, 1
    ctx->pc = 0x29c088u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x29c08c: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x29C08Cu;
    {
        const bool branch_taken_0x29c08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C08Cu;
        // 0x29c090: 0x252901f0  addiu       $t1, $t1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c08c) {
            ctx->pc = 0x29C058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c058;
        }
    }
    ctx->pc = 0x29C094u;
    // 0x29c094: 0x0  nop
    ctx->pc = 0x29c094u;
    // NOP
label_29c098:
    // 0x29c098: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x29c098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29c09c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x29c09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29c0a0: 0xc03027  not         $a2, $a2
    ctx->pc = 0x29c0a0u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x29c0a4: 0xc44024  and         $t0, $a2, $a0
    ctx->pc = 0x29c0a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x29c0a8: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
    ctx->pc = 0x29C0A8u;
    {
        const bool branch_taken_0x29c0a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0A8u;
        // 0x29c0ac: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0a8) {
            ctx->pc = 0x29C100u;
            goto label_29c100;
        }
    }
    ctx->pc = 0x29C0B0u;
    // 0x29c0b0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x29C0B0u;
    {
        const bool branch_taken_0x29c0b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0B0u;
        // 0x29c0b4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0b0) {
            ctx->pc = 0x29C100u;
            goto label_29c100;
        }
    }
    ctx->pc = 0x29C0B8u;
    // 0x29c0b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29c0b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0bc: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x29c0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
label_29c0c0:
    // 0x29c0c0: 0x31040001  andi        $a0, $t0, 0x1
    ctx->pc = 0x29c0c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x29c0c4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29C0C4u;
    {
        const bool branch_taken_0x29c0c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c0c4) {
            ctx->pc = 0x29C0E8u;
            goto label_29c0e8;
        }
    }
    ctx->pc = 0x29C0CCu;
    // 0x29c0cc: 0x8ca4004c  lw          $a0, 0x4C($a1)
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x29c0d0: 0x8c84007c  lw          $a0, 0x7C($a0)
    ctx->pc = 0x29c0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x29c0d4: 0x893821  addu        $a3, $a0, $t1
    ctx->pc = 0x29c0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x29c0d8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x29c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x29c0dc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x29c0dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x29c0e0: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x29c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x29c0e4: 0x0  nop
    ctx->pc = 0x29c0e4u;
    // NOP
label_29c0e8:
    // 0x29c0e8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29c0e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29c0ec: 0x143202a  slt         $a0, $t2, $v1
    ctx->pc = 0x29c0ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29c0f0: 0x84042  srl         $t0, $t0, 1
    ctx->pc = 0x29c0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x29c0f4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x29C0F4u;
    {
        const bool branch_taken_0x29c0f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C0F4u;
        // 0x29c0f8: 0x252901f0  addiu       $t1, $t1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c0f4) {
            ctx->pc = 0x29C0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c0c0;
        }
    }
    ctx->pc = 0x29C0FCu;
    // 0x29c0fc: 0x0  nop
    ctx->pc = 0x29c0fcu;
    // NOP
label_29c100:
    // 0x29c100: 0x3e00008  jr          $ra
    ctx->pc = 0x29C100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C108u;
}
