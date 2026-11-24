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

// Function: sub_00293B90
// Address: 0x293b90 - 0x293bf0
void sub_00293B90_0x293b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293B90_0x293b90");
#endif

    switch (ctx->pc) {
        case 0x293bc4u: goto label_293bc4;
        case 0x293bccu: goto label_293bcc;
        default: break;
    }

    ctx->pc = 0x293b90u;

    // 0x293b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x293b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x293b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x293b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ba0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x293BA0u;
    {
        const bool branch_taken_0x293ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BA0u;
        // 0x293ba4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ba0) {
            ctx->pc = 0x293BE0u;
            goto label_293be0;
        }
    }
    ctx->pc = 0x293BA8u;
    // 0x293ba8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x293ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x293bac: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x293bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x293bb0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x293bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x293bb4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x293bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x293bb8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x293bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x293bbc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x293BBCu;
    SET_GPR_U32(ctx, 31, 0x293BC4u);
    ctx->pc = 0x293BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293BBCu;
    // 0x293bc0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x293BBCu, 0x293BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BC4u;
label_293bc4:
    // 0x293bc4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x293BC4u;
    SET_GPR_U32(ctx, 31, 0x293BCCu);
    ctx->pc = 0x293BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293BC4u;
    // 0x293bc8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x293BC4u, 0x293BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293BCCu;
label_293bcc:
    // 0x293bcc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x293bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x293bd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x293bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x293bd4: 0x248476c0  addiu       $a0, $a0, 0x76C0
    ctx->pc = 0x293bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30400));
    // 0x293bd8: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x293bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x293bdc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x293bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_293be0:
    // 0x293be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293be8: 0x3e00008  jr          $ra
    ctx->pc = 0x293BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293BE8u;
        // 0x293bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293BF0u;
}
