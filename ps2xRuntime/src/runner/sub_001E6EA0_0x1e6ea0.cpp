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

// Function: sub_001E6EA0
// Address: 0x1e6ea0 - 0x1e6f3c
void sub_001E6EA0_0x1e6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6EA0_0x1e6ea0");
#endif

    switch (ctx->pc) {
        case 0x1e6ea0u: goto label_1e6ea0;
        case 0x1e6ea4u: goto label_1e6ea4;
        case 0x1e6ea8u: goto label_1e6ea8;
        case 0x1e6eacu: goto label_1e6eac;
        case 0x1e6eb0u: goto label_1e6eb0;
        case 0x1e6eb4u: goto label_1e6eb4;
        case 0x1e6eb8u: goto label_1e6eb8;
        case 0x1e6ebcu: goto label_1e6ebc;
        case 0x1e6ec0u: goto label_1e6ec0;
        case 0x1e6ec4u: goto label_1e6ec4;
        case 0x1e6ec8u: goto label_1e6ec8;
        case 0x1e6eccu: goto label_1e6ecc;
        case 0x1e6ed0u: goto label_1e6ed0;
        case 0x1e6ed4u: goto label_1e6ed4;
        case 0x1e6ed8u: goto label_1e6ed8;
        case 0x1e6edcu: goto label_1e6edc;
        case 0x1e6ee0u: goto label_1e6ee0;
        case 0x1e6ee4u: goto label_1e6ee4;
        case 0x1e6ee8u: goto label_1e6ee8;
        case 0x1e6eecu: goto label_1e6eec;
        case 0x1e6ef0u: goto label_1e6ef0;
        case 0x1e6ef4u: goto label_1e6ef4;
        case 0x1e6ef8u: goto label_1e6ef8;
        case 0x1e6efcu: goto label_1e6efc;
        case 0x1e6f00u: goto label_1e6f00;
        case 0x1e6f04u: goto label_1e6f04;
        case 0x1e6f08u: goto label_1e6f08;
        case 0x1e6f0cu: goto label_1e6f0c;
        case 0x1e6f10u: goto label_1e6f10;
        case 0x1e6f14u: goto label_1e6f14;
        case 0x1e6f18u: goto label_1e6f18;
        case 0x1e6f1cu: goto label_1e6f1c;
        case 0x1e6f20u: goto label_1e6f20;
        case 0x1e6f24u: goto label_1e6f24;
        case 0x1e6f28u: goto label_1e6f28;
        case 0x1e6f2cu: goto label_1e6f2c;
        case 0x1e6f30u: goto label_1e6f30;
        case 0x1e6f34u: goto label_1e6f34;
        case 0x1e6f38u: goto label_1e6f38;
        default: break;
    }

    ctx->pc = 0x1e6ea0u;

label_1e6ea0:
    // 0x1e6ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e6ea4:
    // 0x1e6ea4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1e6ea8:
    // 0x1e6ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e6eac:
    // 0x1e6eac: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6eb0:
    // 0x1e6eb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e6eb4:
    if (ctx->pc == 0x1E6EB4u) {
        ctx->pc = 0x1E6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB0u;
        // 0x1e6eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EB8u;
        goto label_1e6eb8;
    }
    ctx->pc = 0x1E6EB0u;
    {
        const bool branch_taken_0x1e6eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EB0u;
        // 0x1e6eb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6eb0) {
            ctx->pc = 0x1E6EC0u;
            goto label_1e6ec0;
        }
    }
    ctx->pc = 0x1E6EB8u;
label_1e6eb8:
    // 0x1e6eb8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e6ebc:
    if (ctx->pc == 0x1E6EBCu) {
        ctx->pc = 0x1E6EC0u;
        goto label_1e6ec0;
    }
    ctx->pc = 0x1E6EB8u;
    {
        const bool branch_taken_0x1e6eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6eb8) {
            ctx->pc = 0x1E6F30u;
            goto label_1e6f30;
        }
    }
    ctx->pc = 0x1E6EC0u;
label_1e6ec0:
    // 0x1e6ec0: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x1e6ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_1e6ec4:
    // 0x1e6ec4: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1e6ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1e6ec8:
    // 0x1e6ec8: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1e6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
label_1e6ecc:
    // 0x1e6ecc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1e6eccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6ed0:
    // 0x1e6ed0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e6ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6ed4:
    // 0x1e6ed4: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1e6ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e6ed8:
    // 0x1e6ed8: 0x84830034  lh          $v1, 0x34($a0)
    ctx->pc = 0x1e6ed8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
label_1e6edc:
    // 0x1e6edc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e6ee0:
    if (ctx->pc == 0x1E6EE0u) {
        ctx->pc = 0x1E6EE4u;
        goto label_1e6ee4;
    }
    ctx->pc = 0x1E6EDCu;
    {
        const bool branch_taken_0x1e6edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e6edc) {
            ctx->pc = 0x1E6F00u;
            goto label_1e6f00;
        }
    }
    ctx->pc = 0x1E6EE4u;
label_1e6ee4:
    // 0x1e6ee4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1e6ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6ee8:
    // 0x1e6ee8: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1e6ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1e6eec:
    // 0x1e6eec: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1e6ef0:
    if (ctx->pc == 0x1E6EF0u) {
        ctx->pc = 0x1E6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EECu;
        // 0x1e6ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6EF4u;
        goto label_1e6ef4;
    }
    ctx->pc = 0x1E6EECu;
    {
        const bool branch_taken_0x1e6eec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EECu;
        // 0x1e6ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6eec) {
            ctx->pc = 0x1E6F28u;
            goto label_1e6f28;
        }
    }
    ctx->pc = 0x1E6EF4u;
label_1e6ef4:
    // 0x1e6ef4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1e6ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e6ef8:
    // 0x1e6ef8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e6efc:
    if (ctx->pc == 0x1E6EFCu) {
        ctx->pc = 0x1E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EF8u;
        // 0x1e6efc: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F00u;
        goto label_1e6f00;
    }
    ctx->pc = 0x1E6EF8u;
    {
        const bool branch_taken_0x1e6ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6EF8u;
        // 0x1e6efc: 0xa0820003  sb          $v0, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6ef8) {
            ctx->pc = 0x1E6F28u;
            goto label_1e6f28;
        }
    }
    ctx->pc = 0x1E6F00u;
label_1e6f00:
    // 0x1e6f00: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1e6f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6f04:
    // 0x1e6f04: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e6f04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6f08:
    // 0x1e6f08: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1e6f0c:
    if (ctx->pc == 0x1E6F0Cu) {
        ctx->pc = 0x1E6F10u;
        goto label_1e6f10;
    }
    ctx->pc = 0x1E6F08u;
    {
        const bool branch_taken_0x1e6f08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6f08) {
            ctx->pc = 0x1E6F28u;
            goto label_1e6f28;
        }
    }
    ctx->pc = 0x1E6F10u;
label_1e6f10:
    // 0x1e6f10: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1e6f14:
    // 0x1e6f14: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e6f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e6f18:
    // 0x1e6f18: 0x320f809  jalr        $t9
label_1e6f1c:
    if (ctx->pc == 0x1E6F1Cu) {
        ctx->pc = 0x1E6F20u;
        goto label_1e6f20;
    }
    ctx->pc = 0x1E6F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E6F20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6F18u, 0x1E6F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E6F20u;
label_1e6f20:
    // 0x1e6f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6f24:
    if (ctx->pc == 0x1E6F24u) {
        ctx->pc = 0x1E6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F20u;
        // 0x1e6f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F28u;
        goto label_1e6f28;
    }
    ctx->pc = 0x1E6F20u;
    {
        const bool branch_taken_0x1e6f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F20u;
        // 0x1e6f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6f20) {
            ctx->pc = 0x1E6F30u;
            goto label_1e6f30;
        }
    }
    ctx->pc = 0x1E6F28u;
label_1e6f28:
    // 0x1e6f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6f2c:
    // 0x1e6f2c: 0x0  nop
    ctx->pc = 0x1e6f2cu;
    // NOP
label_1e6f30:
    // 0x1e6f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e6f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6f34:
    // 0x1e6f34: 0x3e00008  jr          $ra
label_1e6f38:
    if (ctx->pc == 0x1E6F38u) {
        ctx->pc = 0x1E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F34u;
        // 0x1e6f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6F3Cu;
        goto label_fallthrough_0x1e6f34;
    }
    ctx->pc = 0x1E6F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6F34u;
        // 0x1e6f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e6f34:
    ctx->pc = 0x1E6F3Cu;
}
