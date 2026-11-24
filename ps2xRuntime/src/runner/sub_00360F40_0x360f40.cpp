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

// Function: sub_00360F40
// Address: 0x360f40 - 0x361048
void sub_00360F40_0x360f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360F40_0x360f40");
#endif

    switch (ctx->pc) {
        case 0x360f50u: goto label_360f50;
        case 0x360fd0u: goto label_360fd0;
        default: break;
    }

    ctx->pc = 0x360f40u;

    // 0x360f40: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x360F40u;
    {
        const bool branch_taken_0x360f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x360F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F40u;
        // 0x360f44: 0x24870010  addiu       $a3, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f40) {
            ctx->pc = 0x360FC8u;
            goto label_360fc8;
        }
    }
    ctx->pc = 0x360F48u;
    // 0x360f48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x360f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f4c: 0x0  nop
    ctx->pc = 0x360f4cu;
    // NOP
label_360f50:
    // 0x360f50: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x360f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360f54: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x360f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x360f58: 0x28a307e0  slti        $v1, $a1, 0x7E0
    ctx->pc = 0x360f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2016) ? 1 : 0);
    // 0x360f5c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x360f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x360f60: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x360f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x360f64: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x360f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x360f68: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x360f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x360f6c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x360f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360f70: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x360f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x360f74: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x360f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x360f78: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x360f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x360f7c: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x360f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x360f80: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x360f80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x360f84: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x360f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360f88: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x360f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x360f8c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x360f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x360f90: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x360f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x360f94: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x360f94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x360f98: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x360f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x360f9c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x360f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x360fa0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x360fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x360fa4: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x360fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x360fa8: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x360fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x360fac: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x360facu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x360fb0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x360fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x360fb4: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x360FB4u;
    {
        const bool branch_taken_0x360fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x360FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FB4u;
        // 0x360fb8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360fb4) {
            ctx->pc = 0x360F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360f50;
        }
    }
    ctx->pc = 0x360FBCu;
    // 0x360fbc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x360FBCu;
    {
        const bool branch_taken_0x360fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360fbc) {
            ctx->pc = 0x361040u;
            goto label_361040;
        }
    }
    ctx->pc = 0x360FC4u;
    // 0x360fc4: 0x0  nop
    ctx->pc = 0x360fc4u;
    // NOP
label_360fc8:
    // 0x360fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x360fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360fcc: 0x0  nop
    ctx->pc = 0x360fccu;
    // NOP
label_360fd0:
    // 0x360fd0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x360fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x360fd4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x360fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x360fd8: 0x28a307e0  slti        $v1, $a1, 0x7E0
    ctx->pc = 0x360fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2016) ? 1 : 0);
    // 0x360fdc: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x360fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x360fe0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x360fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x360fe4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x360fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x360fe8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x360fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x360fec: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x360fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x360ff0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x360ff4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x360ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x360ff8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x360ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x360ffc: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x360ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x361000: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x361000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x361004: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x361004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361008: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x361008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x36100c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x36100cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x361010: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x361010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x361014: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x361014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x361018: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x361018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x36101c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x361020: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x361020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x361024: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x361024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x361028: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x361028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x36102c: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x36102cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x361030: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x361030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x361034: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x361034u;
    {
        const bool branch_taken_0x361034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x361038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361034u;
        // 0x361038: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361034) {
            ctx->pc = 0x360FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360fd0;
        }
    }
    ctx->pc = 0x36103Cu;
    // 0x36103c: 0x0  nop
    ctx->pc = 0x36103cu;
    // NOP
label_361040:
    // 0x361040: 0x3e00008  jr          $ra
    ctx->pc = 0x361040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361048u;
}
