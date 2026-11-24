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

// Function: sub_0012E558
// Address: 0x12e558 - 0x12e61c
void sub_0012E558_0x12e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E558_0x12e558");
#endif

    switch (ctx->pc) {
        case 0x12e580u: goto label_12e580;
        case 0x12e584u: goto label_12e584;
        default: break;
    }

    ctx->pc = 0x12e558u;

    // 0x12e558: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e55c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12e55cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e560: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12e564: 0x2dcf0002  sltiu       $t7, $t6, 0x2
    ctx->pc = 0x12e564u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12e568: 0x11e00019  beqz        $t7, . + 4 + (0x19 << 2)
    ctx->pc = 0x12E568u;
    {
        const bool branch_taken_0x12e568 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E568u;
        // 0x12e56c: 0x8c8d0004  lw          $t5, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e568) {
            ctx->pc = 0x12E5D0u;
            goto label_12e5d0;
        }
    }
    ctx->pc = 0x12E570u;
    // 0x12e570: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e574: 0x240b07ff  addiu       $t3, $zero, 0x7FF
    ctx->pc = 0x12e574u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x12e578: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x12e578u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x12e57c: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x12e57cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
label_12e580:
    // 0x12e580: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12e580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_12e584:
    // 0x12e584: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12e584u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12e588: 0xe753c  dsll32      $t6, $t6, 20
    ctx->pc = 0x12e588u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 20));
    // 0x12e58c: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x12e58cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x12e590: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x12e590u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x12e594: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x12e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x12e598: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x12e598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x12e59c: 0x316e07ff  andi        $t6, $t3, 0x7FF
    ctx->pc = 0x12e59cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2047);
    // 0x12e5a0: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x12e5a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x12e5a4: 0xe753c  dsll32      $t6, $t6, 20
    ctx->pc = 0x12e5a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 20));
    // 0x12e5a8: 0xf7d3c  dsll32      $t7, $t7, 20
    ctx->pc = 0x12e5a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
    // 0x12e5ac: 0xd6ffc  dsll32      $t5, $t5, 31
    ctx->pc = 0x12e5acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 31));
    // 0x12e5b0: 0xf7827  nor         $t7, $zero, $t7
    ctx->pc = 0x12e5b0u;
    SET_GPR_U64(ctx, 15, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 15)));
    // 0x12e5b4: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x12e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x12e5b8: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12e5b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12e5bc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x12e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x12e5c0: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x12e5c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12e5c4: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x12e5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x12e5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5C8u;
        // 0x12e5cc: 0x4d1025  or          $v0, $v0, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E5D0u;
label_12e5d0:
    // 0x12e5d0: 0x39cf0004  xori        $t7, $t6, 0x4
    ctx->pc = 0x12e5d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)4);
    // 0x12e5d4: 0x51e0000f  beql        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x12E5D4u;
    {
        const bool branch_taken_0x12e5d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5d4) {
            ctx->pc = 0x12E5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5D4u;
            // 0x12e5d8: 0x240b07ff  addiu       $t3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E614u;
            goto label_12e614;
        }
    }
    ctx->pc = 0x12E5DCu;
    // 0x12e5dc: 0x39cf0002  xori        $t7, $t6, 0x2
    ctx->pc = 0x12e5dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)2);
    // 0x12e5e0: 0x51e0ffe7  beql        $t7, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12E5E0u;
    {
        const bool branch_taken_0x12e5e0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e5e0) {
            ctx->pc = 0x12E5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5E0u;
            // 0x12e5e4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E5E8u;
    // 0x12e5e8: 0x1180ffe6  beqz        $t4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x12E5E8u;
    {
        const bool branch_taken_0x12e5e8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E5E8u;
        // 0x12e5ec: 0x240ff000  addiu       $t7, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5e8) {
            ctx->pc = 0x12E584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e584;
        }
    }
    ctx->pc = 0x12E5F0u;
    // 0x12e5f0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x12e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12e5f4: 0x288ffc02  slti        $t7, $a0, -0x3FE
    ctx->pc = 0x12e5f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x12e5f8: 0x55e0ffe1  bnel        $t7, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x12E5F8u;
    {
        const bool branch_taken_0x12e5f8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e5f8) {
            ctx->pc = 0x12E5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E5F8u;
            // 0x12e5fc: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E600u;
    // 0x12e600: 0x288f0400  slti        $t7, $a0, 0x400
    ctx->pc = 0x12e600u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12e604: 0x248b03ff  addiu       $t3, $a0, 0x3FF
    ctx->pc = 0x12e604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x12e608: 0x15e0ffdd  bnez        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x12E608u;
    {
        const bool branch_taken_0x12e608 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E608u;
        // 0x12e60c: 0xc623a  dsrl        $t4, $t4, 8 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e608) {
            ctx->pc = 0x12E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E610u;
    // 0x12e610: 0x240b07ff  addiu       $t3, $zero, 0x7FF
    ctx->pc = 0x12e610u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_12e614:
    // 0x12e614: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12E614u;
    {
        const bool branch_taken_0x12e614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E614u;
        // 0x12e618: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e614) {
            ctx->pc = 0x12E580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e580;
        }
    }
    ctx->pc = 0x12E61Cu;
}
