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

// Function: sub_003AEB30
// Address: 0x3aeb30 - 0x3aeba0
void sub_003AEB30_0x3aeb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEB30_0x3aeb30");
#endif

    switch (ctx->pc) {
        case 0x3aeb64u: goto label_3aeb64;
        case 0x3aeb6cu: goto label_3aeb6c;
        default: break;
    }

    ctx->pc = 0x3aeb30u;

    // 0x3aeb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aeb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aeb34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aeb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aeb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aeb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aeb3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aeb3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeb40: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AEB40u;
    {
        const bool branch_taken_0x3aeb40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB40u;
        // 0x3aeb44: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb40) {
            ctx->pc = 0x3AEB90u;
            goto label_3aeb90;
        }
    }
    ctx->pc = 0x3AEB48u;
    // 0x3aeb48: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3aeb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3aeb4c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3aeb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3aeb50: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3aeb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3aeb54: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aeb54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aeb58: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3aeb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3aeb5c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3AEB5Cu;
    SET_GPR_U32(ctx, 31, 0x3AEB64u);
    ctx->pc = 0x3AEB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB5Cu;
    // 0x3aeb60: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3AEB5Cu, 0x3AEB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB64u;
label_3aeb64:
    // 0x3aeb64: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3AEB64u;
    SET_GPR_U32(ctx, 31, 0x3AEB6Cu);
    ctx->pc = 0x3AEB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEB64u;
    // 0x3aeb68: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3AEB64u, 0x3AEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB6Cu;
label_3aeb6c:
    // 0x3aeb6c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3aeb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3aeb70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aeb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aeb74: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3aeb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3aeb78: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aeb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aeb7c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3aeb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3aeb80: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3aeb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aeb84: 0x2463a300  addiu       $v1, $v1, -0x5D00
    ctx->pc = 0x3aeb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943488));
    // 0x3aeb88: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aeb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aeb8c: 0x0  nop
    ctx->pc = 0x3aeb8cu;
    // NOP
label_3aeb90:
    // 0x3aeb90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aeb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aeb94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aeb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aeb98: 0x3e00008  jr          $ra
    ctx->pc = 0x3AEB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB98u;
        // 0x3aeb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEBA0u;
}
