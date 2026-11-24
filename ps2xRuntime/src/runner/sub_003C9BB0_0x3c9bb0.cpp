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

// Function: sub_003C9BB0
// Address: 0x3c9bb0 - 0x3c9c20
void sub_003C9BB0_0x3c9bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9BB0_0x3c9bb0");
#endif

    switch (ctx->pc) {
        case 0x3c9be4u: goto label_3c9be4;
        case 0x3c9becu: goto label_3c9bec;
        default: break;
    }

    ctx->pc = 0x3c9bb0u;

    // 0x3c9bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c9bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c9bb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c9bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c9bb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c9bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c9bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c9bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c9bc0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C9BC0u;
    {
        const bool branch_taken_0x3c9bc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9BC0u;
        // 0x3c9bc4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9bc0) {
            ctx->pc = 0x3C9C10u;
            goto label_3c9c10;
        }
    }
    ctx->pc = 0x3C9BC8u;
    // 0x3c9bc8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3c9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3c9bcc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3c9bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3c9bd0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3c9bd4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c9bd8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3c9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3c9bdc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3C9BDCu;
    SET_GPR_U32(ctx, 31, 0x3C9BE4u);
    ctx->pc = 0x3C9BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9BDCu;
    // 0x3c9be0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3C9BDCu, 0x3C9BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9BE4u;
label_3c9be4:
    // 0x3c9be4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3C9BE4u;
    SET_GPR_U32(ctx, 31, 0x3C9BECu);
    ctx->pc = 0x3C9BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C9BE4u;
    // 0x3c9be8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3C9BE4u, 0x3C9BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9BECu;
label_3c9bec:
    // 0x3c9bec: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3c9becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3c9bf0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c9bf4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3c9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3c9bf8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c9bfc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3c9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3c9c00: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3c9c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c9c04: 0x2463a700  addiu       $v1, $v1, -0x5900
    ctx->pc = 0x3c9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944512));
    // 0x3c9c08: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3c9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3c9c0c: 0x0  nop
    ctx->pc = 0x3c9c0cu;
    // NOP
label_3c9c10:
    // 0x3c9c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c9c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c9c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c9c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9c18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9C18u;
        // 0x3c9c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C20u;
}
