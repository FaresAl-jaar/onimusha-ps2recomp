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

// Function: sub_00396490
// Address: 0x396490 - 0x396500
void sub_00396490_0x396490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396490_0x396490");
#endif

    switch (ctx->pc) {
        case 0x3964c4u: goto label_3964c4;
        case 0x3964ccu: goto label_3964cc;
        default: break;
    }

    ctx->pc = 0x396490u;

    // 0x396490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39649c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39649cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3964a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3964A0u;
    {
        const bool branch_taken_0x3964a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3964A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964A0u;
        // 0x3964a4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3964a0) {
            ctx->pc = 0x3964F0u;
            goto label_3964f0;
        }
    }
    ctx->pc = 0x3964A8u;
    // 0x3964a8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3964a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3964ac: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3964acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3964b0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3964b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3964b4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3964b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3964b8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3964b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3964bc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3964BCu;
    SET_GPR_U32(ctx, 31, 0x3964C4u);
    ctx->pc = 0x3964C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964BCu;
    // 0x3964c0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3964BCu, 0x3964C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964C4u;
label_3964c4:
    // 0x3964c4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3964C4u;
    SET_GPR_U32(ctx, 31, 0x3964CCu);
    ctx->pc = 0x3964C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964C4u;
    // 0x3964c8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3964C4u, 0x3964CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964CCu;
label_3964cc:
    // 0x3964cc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3964ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3964d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3964d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3964d4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3964d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3964d8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3964d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3964dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3964dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3964e0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3964e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3964e4: 0x24639e50  addiu       $v1, $v1, -0x61B0
    ctx->pc = 0x3964e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942288));
    // 0x3964e8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3964e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3964ec: 0x0  nop
    ctx->pc = 0x3964ecu;
    // NOP
label_3964f0:
    // 0x3964f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3964f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3964f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3964f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3964f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3964F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3964FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3964F8u;
        // 0x3964fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3964F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396500u;
}
