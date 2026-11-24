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

// Function: sub_0021E910
// Address: 0x21e910 - 0x21e9d8
void sub_0021E910_0x21e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E910_0x21e910");
#endif

    switch (ctx->pc) {
        case 0x21e940u: goto label_21e940;
        case 0x21e974u: goto label_21e974;
        default: break;
    }

    ctx->pc = 0x21e910u;

    // 0x21e910: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x21e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x21e914: 0xc76021  addu        $t4, $a2, $a3
    ctx->pc = 0x21e914u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21e918: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x21e918u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x21e91c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21e91cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e920: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21E920u;
    {
        const bool branch_taken_0x21e920 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21E924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E920u;
        // 0x21e924: 0x8c890010  lw          $t1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e920) {
            ctx->pc = 0x21E9D0u;
            goto label_21e9d0;
        }
    }
    ctx->pc = 0x21E928u;
    // 0x21e928: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x21e928u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e92c: 0xa6302b  sltu        $a2, $a1, $a2
    ctx->pc = 0x21e92cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x21e930: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x21e930u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e934: 0xac682b  sltu        $t5, $a1, $t4
    ctx->pc = 0x21e934u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x21e938: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x21e938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x21e93c: 0x0  nop
    ctx->pc = 0x21e93cu;
    // NOP
label_21e940:
    // 0x21e940: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x21e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x21e944: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21e948: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21e94c: 0xa3402b  sltu        $t0, $a1, $v1
    ctx->pc = 0x21e94cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x21e950: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x21e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21e954: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x21e954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21e958: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21E958u;
    {
        const bool branch_taken_0x21e958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E958u;
        // 0x21e95c: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e958) {
            ctx->pc = 0x21E980u;
            goto label_21e980;
        }
    }
    ctx->pc = 0x21E960u;
    // 0x21e960: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21E960u;
    {
        const bool branch_taken_0x21e960 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E960u;
        // 0x21e964: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e960) {
            ctx->pc = 0x21E9ACu;
            goto label_21e9ac;
        }
    }
    ctx->pc = 0x21E968u;
    // 0x21e968: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x21e968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x21e96c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x21E96Cu;
    {
        const bool branch_taken_0x21e96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e96c) {
            ctx->pc = 0x21E970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E96Cu;
            // 0x21e970: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9ACu;
            goto label_21e9ac;
        }
    }
    ctx->pc = 0x21E974u;
label_21e974:
    // 0x21e974: 0x3e00008  jr          $ra
    ctx->pc = 0x21E974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E974u;
        // 0x21e978: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E97Cu;
    // 0x21e97c: 0x0  nop
    ctx->pc = 0x21e97cu;
    // NOP
label_21e980:
    // 0x21e980: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E980u;
    {
        const bool branch_taken_0x21e980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e980) {
            ctx->pc = 0x21E990u;
            goto label_21e990;
        }
    }
    ctx->pc = 0x21E988u;
    // 0x21e988: 0x15a0fffa  bnez        $t5, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21E988u;
    {
        const bool branch_taken_0x21e988 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e988) {
            ctx->pc = 0x21E974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e974;
        }
    }
    ctx->pc = 0x21E990u;
label_21e990:
    // 0x21e990: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E990u;
    {
        const bool branch_taken_0x21e990 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E990u;
        // 0x21e994: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e990) {
            ctx->pc = 0x21E9ACu;
            goto label_21e9ac;
        }
    }
    ctx->pc = 0x21E998u;
    // 0x21e998: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x21e99c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x21e99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21e9a0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x21E9A0u;
    {
        const bool branch_taken_0x21e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e9a0) {
            ctx->pc = 0x21E974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e974;
        }
    }
    ctx->pc = 0x21E9A8u;
    // 0x21e9a8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x21e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_21e9ac:
    // 0x21e9ac: 0x4b182a  slt         $v1, $v0, $t3
    ctx->pc = 0x21e9acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x21e9b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E9B0u;
    {
        const bool branch_taken_0x21e9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9B0u;
        // 0x21e9b4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9b0) {
            ctx->pc = 0x21E9C0u;
            goto label_21e9c0;
        }
    }
    ctx->pc = 0x21E9B8u;
    // 0x21e9b8: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x21e9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21e9c0:
    // 0x21e9c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x21e9c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9c4: 0x14e102a  slt         $v0, $t2, $t6
    ctx->pc = 0x21e9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x21e9c8: 0x5440ffdd  bnel        $v0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21E9C8u;
    {
        const bool branch_taken_0x21e9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e9c8) {
            ctx->pc = 0x21E9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E9C8u;
            // 0x21e9cc: 0x91100  sll         $v0, $t1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e940;
        }
    }
    ctx->pc = 0x21E9D0u;
label_21e9d0:
    // 0x21e9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9D0u;
        // 0x21e9d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E9D8u;
}
