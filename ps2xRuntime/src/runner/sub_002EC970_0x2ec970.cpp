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

// Function: sub_002EC970
// Address: 0x2ec970 - 0x2ec9e0
void sub_002EC970_0x2ec970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC970_0x2ec970");
#endif

    switch (ctx->pc) {
        case 0x2ec9a4u: goto label_2ec9a4;
        case 0x2ec9acu: goto label_2ec9ac;
        default: break;
    }

    ctx->pc = 0x2ec970u;

    // 0x2ec970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ec970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ec974: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ec978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ec97c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec980: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2EC980u;
    {
        const bool branch_taken_0x2ec980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC980u;
        // 0x2ec984: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec980) {
            ctx->pc = 0x2EC9D0u;
            goto label_2ec9d0;
        }
    }
    ctx->pc = 0x2EC988u;
    // 0x2ec988: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2ec988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2ec98c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2ec990: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2ec990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2ec994: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ec994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ec998: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2ec998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2ec99c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2EC99Cu;
    SET_GPR_U32(ctx, 31, 0x2EC9A4u);
    ctx->pc = 0x2EC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC99Cu;
    // 0x2ec9a0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2EC99Cu, 0x2EC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9A4u;
label_2ec9a4:
    // 0x2ec9a4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2EC9A4u;
    SET_GPR_U32(ctx, 31, 0x2EC9ACu);
    ctx->pc = 0x2EC9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9A4u;
    // 0x2ec9a8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2EC9A4u, 0x2EC9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9ACu;
label_2ec9ac:
    // 0x2ec9ac: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ec9acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ec9b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ec9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec9b4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2ec9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2ec9b8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ec9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ec9bc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2ec9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2ec9c0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2ec9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ec9c4: 0x24637c90  addiu       $v1, $v1, 0x7C90
    ctx->pc = 0x2ec9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31888));
    // 0x2ec9c8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2ec9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2ec9cc: 0x0  nop
    ctx->pc = 0x2ec9ccu;
    // NOP
label_2ec9d0:
    // 0x2ec9d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec9d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ec9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D8u;
        // 0x2ec9dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC9E0u;
}
