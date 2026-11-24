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

// Function: sub_00179F00
// Address: 0x179f00 - 0x179fe8
void sub_00179F00_0x179f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179F00_0x179f00");
#endif

    ctx->pc = 0x179f00u;

    // 0x179f00: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x179f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x179f04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x179f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x179f08: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x179f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x179f0c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x179f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x179f10: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x179f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x179f14: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x179F14u;
    {
        const bool branch_taken_0x179f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179f14) {
            ctx->pc = 0x179FC0u;
            goto label_179fc0;
        }
    }
    ctx->pc = 0x179F1Cu;
    // 0x179f1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x179f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179f20: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x179f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x179f24: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x179f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x179f28: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x179F28u;
    {
        const bool branch_taken_0x179f28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x179f28) {
            ctx->pc = 0x179F40u;
            goto label_179f40;
        }
    }
    ctx->pc = 0x179F30u;
    // 0x179f30: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x179f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x179f34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179f38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x179F38u;
    {
        const bool branch_taken_0x179f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F38u;
        // 0x179f3c: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f38) {
            ctx->pc = 0x179FC8u;
            goto label_179fc8;
        }
    }
    ctx->pc = 0x179F40u;
label_179f40:
    // 0x179f40: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x179f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x179f44: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x179F44u;
    {
        const bool branch_taken_0x179f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f44) {
            ctx->pc = 0x179FA8u;
            goto label_179fa8;
        }
    }
    ctx->pc = 0x179F4Cu;
    // 0x179f4c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x179f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x179f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179f54: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x179f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x179f58: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x179f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x179f5c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x179f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x179f60: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x179f60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x179f64: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179F64u;
    {
        const bool branch_taken_0x179f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179f64) {
            ctx->pc = 0x179F70u;
            goto label_179f70;
        }
    }
    ctx->pc = 0x179F6Cu;
    // 0x179f6c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x179f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_179f70:
    // 0x179f70: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x179f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x179f74: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x179f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x179f78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x179f78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x179f7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179f80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x179f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179f84: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x179f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x179f88: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x179f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x179f8c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x179f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x179f90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x179f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x179f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x179f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x179f98: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x179f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179f9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179F9Cu;
    {
        const bool branch_taken_0x179f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F9Cu;
        // 0x179fa0: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f9c) {
            ctx->pc = 0x179FC8u;
            goto label_179fc8;
        }
    }
    ctx->pc = 0x179FA4u;
    // 0x179fa4: 0x0  nop
    ctx->pc = 0x179fa4u;
    // NOP
label_179fa8:
    // 0x179fa8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x179fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x179fac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x179facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x179fb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x179fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x179fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x179FB4u;
    {
        const bool branch_taken_0x179fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FB4u;
        // 0x179fb8: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fb4) {
            ctx->pc = 0x179FC8u;
            goto label_179fc8;
        }
    }
    ctx->pc = 0x179FBCu;
    // 0x179fbc: 0x0  nop
    ctx->pc = 0x179fbcu;
    // NOP
label_179fc0:
    // 0x179fc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x179fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x179fc4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x179fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_179fc8:
    // 0x179fc8: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x179fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x179fcc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x179fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x179fd0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x179fd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x179fd4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x179FD4u;
    {
        const bool branch_taken_0x179fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179fd4) {
            ctx->pc = 0x179FE0u;
            goto label_179fe0;
        }
    }
    ctx->pc = 0x179FDCu;
    // 0x179fdc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x179fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_179fe0:
    // 0x179fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x179FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FE0u;
        // 0x179fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FE8u;
}
