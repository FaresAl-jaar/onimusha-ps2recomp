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

// Function: sub_0012E9F0
// Address: 0x12e9f0 - 0x12ebe4
void sub_0012E9F0_0x12e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E9F0_0x12e9f0");
#endif

    switch (ctx->pc) {
        case 0x12ea2cu: goto label_12ea2c;
        case 0x12ea48u: goto label_12ea48;
        case 0x12ea64u: goto label_12ea64;
        case 0x12eb58u: goto label_12eb58;
        case 0x12ebb0u: goto label_12ebb0;
        default: break;
    }

    ctx->pc = 0x12e9f0u;

    // 0x12e9f0: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12e9f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e9f4: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9f8: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e9fc: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x12E9FCu;
    {
        const bool branch_taken_0x12e9fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9FCu;
        // 0x12ea00: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9fc) {
            ctx->pc = 0x12EA2Cu;
            goto label_12ea2c;
        }
    }
    ctx->pc = 0x12EA04u;
    // 0x12ea04: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x12ea04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ea08: 0x2daf0002  sltiu       $t7, $t5, 0x2
    ctx->pc = 0x12ea08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ea0c: 0x55e00015  bnel        $t7, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x12EA0Cu;
    {
        const bool branch_taken_0x12ea0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ea0c) {
            ctx->pc = 0x12EA10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA0Cu;
            // 0x12ea10: 0x8c8f0004  lw          $t7, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EA64u;
            goto label_12ea64;
        }
    }
    ctx->pc = 0x12EA14u;
    // 0x12ea14: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x12ea14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12ea18: 0x15e0000d  bnez        $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x12EA18u;
    {
        const bool branch_taken_0x12ea18 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA18u;
        // 0x12ea1c: 0x39af0004  xori        $t7, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea18) {
            ctx->pc = 0x12EA50u;
            goto label_12ea50;
        }
    }
    ctx->pc = 0x12EA20u;
    // 0x12ea20: 0x39af0002  xori        $t7, $t5, 0x2
    ctx->pc = 0x12ea20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
    // 0x12ea24: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12EA24u;
    {
        const bool branch_taken_0x12ea24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA24u;
        // 0x12ea28: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea24) {
            ctx->pc = 0x12EA48u;
            goto label_12ea48;
        }
    }
    ctx->pc = 0x12EA2Cu;
label_12ea2c:
    // 0x12ea2c: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x12ea2cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x12ea30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ea30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea34: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12ea34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12ea38: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x12ea38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x12ea3c: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x12ea3cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12ea40: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA40u;
        // 0x12ea44: 0xac8f0004  sw          $t7, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA48u;
label_12ea48:
    // 0x12ea48: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA48u;
        // 0x12ea4c: 0x25e24578  addiu       $v0, $t7, 0x4578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 17784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA50u;
label_12ea50:
    // 0x12ea50: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x12EA50u;
    {
        const bool branch_taken_0x12ea50 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA50u;
        // 0x12ea54: 0x39cf0002  xori        $t7, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea50) {
            ctx->pc = 0x12EA7Cu;
            goto label_12ea7c;
        }
    }
    ctx->pc = 0x12EA58u;
    // 0x12ea58: 0x11e0fffb  beqz        $t7, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12EA58u;
    {
        const bool branch_taken_0x12ea58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA58u;
        // 0x12ea5c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea58) {
            ctx->pc = 0x12EA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea48;
        }
    }
    ctx->pc = 0x12EA60u;
    // 0x12ea60: 0x8c8f0004  lw          $t7, 0x4($a0)
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_12ea64:
    // 0x12ea64: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x12ea64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea68: 0x8d8e0004  lw          $t6, 0x4($t4)
    ctx->pc = 0x12ea68u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x12ea6c: 0x1ee7826  xor         $t7, $t7, $t6
    ctx->pc = 0x12ea6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 14));
    // 0x12ea70: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12ea74: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA74u;
        // 0x12ea78: 0xad8f0004  sw          $t7, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA7Cu;
label_12ea7c:
    // 0x12ea7c: 0x11e0ffeb  beqz        $t7, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12EA7Cu;
    {
        const bool branch_taken_0x12ea7c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA7Cu;
        // 0x12ea80: 0x39af0002  xori        $t7, $t5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea7c) {
            ctx->pc = 0x12EA2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea2c;
        }
    }
    ctx->pc = 0x12EA84u;
    // 0x12ea84: 0x51e0fff7  beql        $t7, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12EA84u;
    {
        const bool branch_taken_0x12ea84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea84) {
            ctx->pc = 0x12EA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EA84u;
            // 0x12ea88: 0x8c8f0004  lw          $t7, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ea64;
        }
    }
    ctx->pc = 0x12EA8Cu;
    // 0x12ea8c: 0xdc8d0010  ld          $t5, 0x10($a0)
    ctx->pc = 0x12ea8cu;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12ea90: 0xdcae0010  ld          $t6, 0x10($a1)
    ctx->pc = 0x12ea90u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x12ea94: 0xd303f  dsra32      $a2, $t5, 0
    ctx->pc = 0x12ea94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x12ea98: 0x8d870008  lw          $a3, 0x8($t4)
    ctx->pc = 0x12ea98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x12ea9c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12ea9cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12eaa0: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x12eaa0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12eaa4: 0xe403f  dsra32      $t0, $t6, 0
    ctx->pc = 0x12eaa4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12eaa8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x12eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12eaac: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x12eaacu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x12eab0: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x12eab0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12eab4: 0x10d0019  multu       $t0, $t5
    ctx->pc = 0x12eab4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eab8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12eab8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12eabc: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12eabcu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12eac0: 0x1274821  addu        $t1, $t1, $a3
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x12eac4: 0x1455026  xor         $t2, $t2, $a1
    ctx->pc = 0x12eac4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 5));
    // 0x12eac8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x12eac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x12eacc: 0xa502b  sltu        $t2, $zero, $t2
    ctx->pc = 0x12eaccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12ead0: 0xac490008  sw          $t1, 0x8($v0)
    ctx->pc = 0x12ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 9));
    // 0x12ead4: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12ead4u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x12ead8: 0x20582d  daddu       $t3, $at, $zero
    ctx->pc = 0x12ead8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eadc: 0x1c60019  multu       $t6, $a2
    ctx->pc = 0x12eadcu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 14) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eae0: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12eae0u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x12eae4: 0x20782d  daddu       $t7, $at, $zero
    ctx->pc = 0x12eae4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eae8: 0x1cd0019  multu       $t6, $t5
    ctx->pc = 0x12eae8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 14) * (uint64_t)GPR_U32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eaec: 0x16f782d  daddu       $t7, $t3, $t7
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12eaf0: 0x1eb602b  sltu        $t4, $t7, $t3
    ctx->pc = 0x12eaf0u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x12eaf4: 0xf583c  dsll32      $t3, $t7, 0
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12eaf8: 0xc603c  dsll32      $t4, $t4, 0
    ctx->pc = 0x12eaf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 0));
    // 0x12eafc: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x12eafcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x12eb00: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12eb00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12eb04: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12eb04u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x12eb08: 0x20702d  daddu       $t6, $at, $zero
    ctx->pc = 0x12eb08u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb0c: 0x1060019  multu       $t0, $a2
    ctx->pc = 0x12eb0cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 8) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eb10: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x12eb10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12eb14: 0x1cb682d  daddu       $t5, $t6, $t3
    ctx->pc = 0x12eb14u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 11));
    // 0x12eb18: 0x1ae702b  sltu        $t6, $t5, $t6
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12eb1c: 0x18e602d  daddu       $t4, $t4, $t6
    ctx->pc = 0x12eb1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 14));
    // 0x12eb20: 0x70000830  pmfhl.lw    $at
    ctx->pc = 0x12eb20u;
    SET_GPR_VEC(ctx, 1, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x12eb24: 0x20402d  daddu       $t0, $at, $zero
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb28: 0x1e8782d  daddu       $t7, $t7, $t0
    ctx->pc = 0x12eb28u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 8));
    // 0x12eb2c: 0x18f602d  daddu       $t4, $t4, $t7
    ctx->pc = 0x12eb2cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12eb30: 0x240ffff8  addiu       $t7, $zero, -0x8
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x12eb34: 0xf78fa  dsrl        $t7, $t7, 3
    ctx->pc = 0x12eb34u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 3);
    // 0x12eb38: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12eb38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12eb3c: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x12EB3Cu;
    {
        const bool branch_taken_0x12eb3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB3Cu;
        // 0x12eb40: 0xac4a0004  sw          $t2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb3c) {
            ctx->pc = 0x12EB88u;
            goto label_12eb88;
        }
    }
    ctx->pc = 0x12EB44u;
    // 0x12eb44: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x12eb44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12eb48: 0x240afff8  addiu       $t2, $zero, -0x8
    ctx->pc = 0x12eb48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x12eb4c: 0x94ffc  dsll32      $t1, $t1, 31
    ctx->pc = 0x12eb4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 31));
    // 0x12eb50: 0xa50fa  dsrl        $t2, $t2, 3
    ctx->pc = 0x12eb50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 3);
    // 0x12eb54: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x12eb54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12eb58:
    // 0x12eb58: 0x318e0001  andi        $t6, $t4, 0x1
    ctx->pc = 0x12eb58u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x12eb5c: 0xc607a  dsrl        $t4, $t4, 1
    ctx->pc = 0x12eb5cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 1);
    // 0x12eb60: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12eb60u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12eb64: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12eb68: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12eb68u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12eb6c: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x12eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x12eb70: 0x11c00003  beqz        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB70u;
    {
        const bool branch_taken_0x12eb70 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB70u;
        // 0x12eb74: 0x14c582b  sltu        $t3, $t2, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb70) {
            ctx->pc = 0x12EB80u;
            goto label_12eb80;
        }
    }
    ctx->pc = 0x12EB78u;
    // 0x12eb78: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x12eb78u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x12eb7c: 0x1a96825  or          $t5, $t5, $t1
    ctx->pc = 0x12eb7cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 9));
label_12eb80:
    // 0x12eb80: 0x5560fff5  bnel        $t3, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x12EB80u;
    {
        const bool branch_taken_0x12eb80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x12eb80) {
            ctx->pc = 0x12EB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EB80u;
            // 0x12eb84: 0x8c4f0008  lw          $t7, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eb58;
        }
    }
    ctx->pc = 0x12EB88u;
label_12eb88:
    // 0x12eb88: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x12eb88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12eb8c: 0xf793a  dsrl        $t7, $t7, 4
    ctx->pc = 0x12eb8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 4);
    // 0x12eb90: 0x1ec782b  sltu        $t7, $t7, $t4
    ctx->pc = 0x12eb90u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12eb94: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12EB94u;
    {
        const bool branch_taken_0x12eb94 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB94u;
        // 0x12eb98: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb94) {
            ctx->pc = 0x12EBD8u;
            goto label_12ebd8;
        }
    }
    ctx->pc = 0x12EB9Cu;
    // 0x12eb9c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x12eb9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12eba0: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x12eba0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12eba4: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x12eba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x12eba8: 0x94ffc  dsll32      $t1, $t1, 31
    ctx->pc = 0x12eba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 31));
    // 0x12ebac: 0xa513a  dsrl        $t2, $t2, 4
    ctx->pc = 0x12ebacu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> 4);
label_12ebb0:
    // 0x12ebb0: 0xc6078  dsll        $t4, $t4, 1
    ctx->pc = 0x12ebb0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 1);
    // 0x12ebb4: 0x1a97024  and         $t6, $t5, $t1
    ctx->pc = 0x12ebb4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 9));
    // 0x12ebb8: 0x358f0001  ori         $t7, $t4, 0x1
    ctx->pc = 0x12ebb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)1);
    // 0x12ebbc: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x12ebbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x12ebc0: 0x1ee600b  movn        $t4, $t7, $t6
    ctx->pc = 0x12ebc0u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 15));
    // 0x12ebc4: 0x14c782b  sltu        $t7, $t2, $t4
    ctx->pc = 0x12ebc4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x12ebc8: 0x11e0fff9  beqz        $t7, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EBC8u;
    {
        const bool branch_taken_0x12ebc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBC8u;
        // 0x12ebcc: 0xd6878  dsll        $t5, $t5, 1 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebc8) {
            ctx->pc = 0x12EBB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ebb0;
        }
    }
    ctx->pc = 0x12EBD0u;
    // 0x12ebd0: 0xac4b0008  sw          $t3, 0x8($v0)
    ctx->pc = 0x12ebd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 11));
    // 0x12ebd4: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12ebd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12ebd8:
    // 0x12ebd8: 0xfc4c0010  sd          $t4, 0x10($v0)
    ctx->pc = 0x12ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 12));
    // 0x12ebdc: 0x3e00008  jr          $ra
    ctx->pc = 0x12EBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBDCu;
        // 0x12ebe0: 0xac4f0000  sw          $t7, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EBE4u;
}
