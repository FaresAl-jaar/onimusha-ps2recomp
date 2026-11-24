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

// Function: sub_002EC1E0
// Address: 0x2ec1e0 - 0x2ec260
void sub_002EC1E0_0x2ec1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC1E0_0x2ec1e0");
#endif

    switch (ctx->pc) {
        case 0x2ec1f8u: goto label_2ec1f8;
        default: break;
    }

    ctx->pc = 0x2ec1e0u;

    // 0x2ec1e0: 0x30c900ff  andi        $t1, $a2, 0xFF
    ctx->pc = 0x2ec1e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ec1e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ec1e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ec1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec1f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ec1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec1f4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2ec1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ec1f8:
    // 0x2ec1f8: 0x1128000b  beq         $t1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x2EC1F8u;
    {
        const bool branch_taken_0x2ec1f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ec1f8) {
            ctx->pc = 0x2EC228u;
            goto label_2ec228;
        }
    }
    ctx->pc = 0x2EC200u;
    // 0x2ec200: 0x11270007  beq         $t1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC200u;
    {
        const bool branch_taken_0x2ec200 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ec200) {
            ctx->pc = 0x2EC220u;
            goto label_2ec220;
        }
    }
    ctx->pc = 0x2EC208u;
    // 0x2ec208: 0x11260003  beq         $t1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC208u;
    {
        const bool branch_taken_0x2ec208 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ec208) {
            ctx->pc = 0x2EC218u;
            goto label_2ec218;
        }
    }
    ctx->pc = 0x2EC210u;
    // 0x2ec210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC210u;
    {
        const bool branch_taken_0x2ec210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec210) {
            ctx->pc = 0x2EC230u;
            goto label_2ec230;
        }
    }
    ctx->pc = 0x2EC218u;
label_2ec218:
    // 0x2ec218: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC218u;
    {
        const bool branch_taken_0x2ec218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC218u;
        // 0x2ec21c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec218) {
            ctx->pc = 0x2EC238u;
            goto label_2ec238;
        }
    }
    ctx->pc = 0x2EC220u;
label_2ec220:
    // 0x2ec220: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC220u;
    {
        const bool branch_taken_0x2ec220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC220u;
        // 0x2ec224: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec220) {
            ctx->pc = 0x2EC238u;
            goto label_2ec238;
        }
    }
    ctx->pc = 0x2EC228u;
label_2ec228:
    // 0x2ec228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EC228u;
    {
        const bool branch_taken_0x2ec228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC228u;
        // 0x2ec22c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec228) {
            ctx->pc = 0x2EC238u;
            goto label_2ec238;
        }
    }
    ctx->pc = 0x2EC230u;
label_2ec230:
    // 0x2ec230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2EC230u;
    {
        const bool branch_taken_0x2ec230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC230u;
        // 0x2ec234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec230) {
            ctx->pc = 0x2EC258u;
            goto label_2ec258;
        }
    }
    ctx->pc = 0x2EC238u;
label_2ec238:
    // 0x2ec238: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2ec238u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ec23c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC23Cu;
    {
        const bool branch_taken_0x2ec23c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC23Cu;
        // 0x2ec240: 0xa92821  addu        $a1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec23c) {
            ctx->pc = 0x2EC258u;
            goto label_2ec258;
        }
    }
    ctx->pc = 0x2EC244u;
    // 0x2ec244: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2ec244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2ec248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ec248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ec24c: 0x2943000a  slti        $v1, $t2, 0xA
    ctx->pc = 0x2ec24cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2ec250: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2EC250u;
    {
        const bool branch_taken_0x2ec250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EC254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC250u;
        // 0x2ec254: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec250) {
            ctx->pc = 0x2EC1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec1f8;
        }
    }
    ctx->pc = 0x2EC258u;
label_2ec258:
    // 0x2ec258: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC260u;
}
