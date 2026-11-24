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

// Function: sub_0029CD80
// Address: 0x29cd80 - 0x29cdf0
void sub_0029CD80_0x29cd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CD80_0x29cd80");
#endif

    ctx->pc = 0x29cd80u;

    // 0x29cd80: 0x9083000a  lbu         $v1, 0xA($a0)
    ctx->pc = 0x29cd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x29cd84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29cd88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29CD88u;
    {
        const bool branch_taken_0x29cd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD88u;
        // 0x29cd8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd88) {
            ctx->pc = 0x29CDC0u;
            goto label_29cdc0;
        }
    }
    ctx->pc = 0x29CD90u;
    // 0x29cd90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29CD90u;
    {
        const bool branch_taken_0x29cd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29cd90) {
            ctx->pc = 0x29CDA0u;
            goto label_29cda0;
        }
    }
    ctx->pc = 0x29CD98u;
    // 0x29cd98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x29CD98u;
    {
        const bool branch_taken_0x29cd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cd98) {
            ctx->pc = 0x29CDE0u;
            goto label_29cde0;
        }
    }
    ctx->pc = 0x29CDA0u;
label_29cda0:
    // 0x29cda0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x29cda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29cda4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29cda8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x29cdac: 0x24425060  addiu       $v0, $v0, 0x5060
    ctx->pc = 0x29cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20576));
    // 0x29cdb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cdb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29CDB4u;
    {
        const bool branch_taken_0x29cdb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDB4u;
        // 0x29cdb8: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdb4) {
            ctx->pc = 0x29CDE8u;
            goto label_29cde8;
        }
    }
    ctx->pc = 0x29CDBCu;
    // 0x29cdbc: 0x0  nop
    ctx->pc = 0x29cdbcu;
    // NOP
label_29cdc0:
    // 0x29cdc0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x29cdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29cdc4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x29cdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29cdc8: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x29cdcc: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x29cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
    // 0x29cdd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29cdd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29CDD4u;
    {
        const bool branch_taken_0x29cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDD4u;
        // 0x29cdd8: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdd4) {
            ctx->pc = 0x29CDE8u;
            goto label_29cde8;
        }
    }
    ctx->pc = 0x29CDDCu;
    // 0x29cddc: 0x0  nop
    ctx->pc = 0x29cddcu;
    // NOP
label_29cde0:
    // 0x29cde0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29cde4: 0x0  nop
    ctx->pc = 0x29cde4u;
    // NOP
label_29cde8:
    // 0x29cde8: 0x3e00008  jr          $ra
    ctx->pc = 0x29CDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29CDF0u;
}
