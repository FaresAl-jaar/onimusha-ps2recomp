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

// Function: sub_0017D080
// Address: 0x17d080 - 0x17d148
void sub_0017D080_0x17d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D080_0x17d080");
#endif

    switch (ctx->pc) {
        case 0x17d0a0u: goto label_17d0a0;
        case 0x17d0d0u: goto label_17d0d0;
        case 0x17d0e8u: goto label_17d0e8;
        default: break;
    }

    ctx->pc = 0x17d080u;

    // 0x17d080: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x17d080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17d084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d088: 0x8c660078  lw          $a2, 0x78($v1)
    ctx->pc = 0x17d088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x17d08c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x17d08cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x17d090: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x17d090u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17d094: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x17D094u;
    {
        const bool branch_taken_0x17d094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D094u;
        // 0x17d098: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d094) {
            ctx->pc = 0x17D140u;
            goto label_17d140;
        }
    }
    ctx->pc = 0x17D09Cu;
    // 0x17d09c: 0x0  nop
    ctx->pc = 0x17d09cu;
    // NOP
label_17d0a0:
    // 0x17d0a0: 0x90c30028  lbu         $v1, 0x28($a2)
    ctx->pc = 0x17d0a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x17d0a4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x17d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x17d0a8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x17D0A8u;
    {
        const bool branch_taken_0x17d0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0A8u;
        // 0x17d0ac: 0x24c50010  addiu       $a1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0a8) {
            ctx->pc = 0x17D130u;
            goto label_17d130;
        }
    }
    ctx->pc = 0x17D0B0u;
    // 0x17d0b0: 0x8ca80020  lw          $t0, 0x20($a1)
    ctx->pc = 0x17d0b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x17d0b4: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x17d0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x17d0b8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17D0B8u;
    {
        const bool branch_taken_0x17d0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d0b8) {
            ctx->pc = 0x17D130u;
            goto label_17d130;
        }
    }
    ctx->pc = 0x17D0C0u;
    // 0x17d0c0: 0x90a50024  lbu         $a1, 0x24($a1)
    ctx->pc = 0x17d0c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x17d0c4: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x17d0c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17d0c8: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x17D0C8u;
    {
        const bool branch_taken_0x17d0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0C8u;
        // 0x17d0cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0c8) {
            ctx->pc = 0x17D130u;
            goto label_17d130;
        }
    }
    ctx->pc = 0x17D0D0u;
label_17d0d0:
    // 0x17d0d0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x17d0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17d0d4: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x17d0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x17d0d8: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x17d0d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17d0dc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x17D0DCu;
    {
        const bool branch_taken_0x17d0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0DCu;
        // 0x17d0e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d0dc) {
            ctx->pc = 0x17D120u;
            goto label_17d120;
        }
    }
    ctx->pc = 0x17D0E4u;
    // 0x17d0e4: 0x0  nop
    ctx->pc = 0x17d0e4u;
    // NOP
label_17d0e8:
    // 0x17d0e8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x17d0e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17d0ec: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x17d0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x17d0f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x17d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17d0f4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x17d0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17d0f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D0F8u;
    {
        const bool branch_taken_0x17d0f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d0f8) {
            ctx->pc = 0x17D108u;
            goto label_17d108;
        }
    }
    ctx->pc = 0x17D100u;
    // 0x17d100: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x17d100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d104: 0x0  nop
    ctx->pc = 0x17d104u;
    // NOP
label_17d108:
    // 0x17d108: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x17d108u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x17d10c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x17d10cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x17d110: 0x123182b  sltu        $v1, $t1, $v1
    ctx->pc = 0x17d110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17d114: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x17D114u;
    {
        const bool branch_taken_0x17d114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D114u;
        // 0x17d118: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d114) {
            ctx->pc = 0x17D0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d0e8;
        }
    }
    ctx->pc = 0x17D11Cu;
    // 0x17d11c: 0x0  nop
    ctx->pc = 0x17d11cu;
    // NOP
label_17d120:
    // 0x17d120: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x17d124: 0x145182b  sltu        $v1, $t2, $a1
    ctx->pc = 0x17d124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x17d128: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17D128u;
    {
        const bool branch_taken_0x17d128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D128u;
        // 0x17d12c: 0x2508001c  addiu       $t0, $t0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d128) {
            ctx->pc = 0x17D0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d0d0;
        }
    }
    ctx->pc = 0x17D130u;
label_17d130:
    // 0x17d130: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x17d134: 0x164182b  sltu        $v1, $t3, $a0
    ctx->pc = 0x17d134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17d138: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x17D138u;
    {
        const bool branch_taken_0x17d138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D138u;
        // 0x17d13c: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d138) {
            ctx->pc = 0x17D0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17d0a0;
        }
    }
    ctx->pc = 0x17D140u;
label_17d140:
    // 0x17d140: 0x3e00008  jr          $ra
    ctx->pc = 0x17D140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D148u;
}
