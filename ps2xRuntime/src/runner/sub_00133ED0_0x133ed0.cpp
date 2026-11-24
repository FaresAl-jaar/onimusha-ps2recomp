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

// Function: sub_00133ED0
// Address: 0x133ed0 - 0x133f48
void sub_00133ED0_0x133ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133ED0_0x133ed0");
#endif

    ctx->pc = 0x133ed0u;

    // 0x133ed0: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x133ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x133ed4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x133ED4u;
    {
        const bool branch_taken_0x133ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x133ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133ED4u;
        // 0x133ed8: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ed4) {
            ctx->pc = 0x133F28u;
            goto label_133f28;
        }
    }
    ctx->pc = 0x133EDCu;
    // 0x133edc: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x133EDCu;
    {
        const bool branch_taken_0x133edc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133edc) {
            ctx->pc = 0x133F28u;
            goto label_133f28;
        }
    }
    ctx->pc = 0x133EE4u;
    // 0x133ee4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x133ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x133ee8: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x133EE8u;
    {
        const bool branch_taken_0x133ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x133EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133EE8u;
        // 0x133eec: 0x24030024  addiu       $v1, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ee8) {
            ctx->pc = 0x133F10u;
            goto label_133f10;
        }
    }
    ctx->pc = 0x133EF0u;
    // 0x133ef0: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133EF0u;
    {
        const bool branch_taken_0x133ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133ef0) {
            ctx->pc = 0x133F10u;
            goto label_133f10;
        }
    }
    ctx->pc = 0x133EF8u;
    // 0x133ef8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x133ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x133efc: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133EFCu;
    {
        const bool branch_taken_0x133efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x133efc) {
            ctx->pc = 0x133F10u;
            goto label_133f10;
        }
    }
    ctx->pc = 0x133F04u;
    // 0x133f04: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x133F04u;
    {
        const bool branch_taken_0x133f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133f04) {
            ctx->pc = 0x133F40u;
            goto label_133f40;
        }
    }
    ctx->pc = 0x133F0Cu;
    // 0x133f0c: 0x0  nop
    ctx->pc = 0x133f0cu;
    // NOP
label_133f10:
    // 0x133f10: 0x94850002  lhu         $a1, 0x2($a0)
    ctx->pc = 0x133f10u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133f14: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x133f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x133f18: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x133f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x133f1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133F1Cu;
    {
        const bool branch_taken_0x133f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F1Cu;
        // 0x133f20: 0xa4830002  sh          $v1, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f1c) {
            ctx->pc = 0x133F40u;
            goto label_133f40;
        }
    }
    ctx->pc = 0x133F24u;
    // 0x133f24: 0x0  nop
    ctx->pc = 0x133f24u;
    // NOP
label_133f28:
    // 0x133f28: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x133f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133f2c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x133f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x133f30: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x133f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x133f34: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x133f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x133f38: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x133f38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x133f3c: 0x0  nop
    ctx->pc = 0x133f3cu;
    // NOP
label_133f40:
    // 0x133f40: 0x3e00008  jr          $ra
    ctx->pc = 0x133F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133F48u;
}
