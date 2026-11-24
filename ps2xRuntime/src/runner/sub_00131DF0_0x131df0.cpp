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

// Function: sub_00131DF0
// Address: 0x131df0 - 0x131e64
void sub_00131DF0_0x131df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131DF0_0x131df0");
#endif

    switch (ctx->pc) {
        case 0x131e2cu: goto label_131e2c;
        case 0x131e50u: goto label_131e50;
        default: break;
    }

    ctx->pc = 0x131df0u;

    // 0x131df0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x131df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x131df4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x131df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x131df8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x131df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x131dfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131e00: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x131e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x131e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131e08: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x131e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x131e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131e14: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x131e18: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x131e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x131e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e20: 0x26110458  addiu       $s1, $s0, 0x458
    ctx->pc = 0x131e20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1112));
    // 0x131e24: 0xc049590  jal         func_125640
    ctx->pc = 0x131E24u;
    SET_GPR_U32(ctx, 31, 0x131E2Cu);
    ctx->pc = 0x131E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131E24u;
    // 0x131e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131E24u, 0x131E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E2Cu;
label_131e2c:
    // 0x131e2c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x131e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x131e30: 0x26040494  addiu       $a0, $s0, 0x494
    ctx->pc = 0x131e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1172));
    // 0x131e34: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x131e34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x131e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e3c: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x131e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e40: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x131e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x131e44: 0xa222001a  sb          $v0, 0x1A($s1)
    ctx->pc = 0x131e44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e48: 0xc049590  jal         func_125640
    ctx->pc = 0x131E48u;
    SET_GPR_U32(ctx, 31, 0x131E50u);
    ctx->pc = 0x131E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131E48u;
    // 0x131e4c: 0xa222001b  sb          $v0, 0x1B($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x131E48u, 0x131E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E50u;
label_131e50:
    // 0x131e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x131E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E5Cu;
        // 0x131e60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E64u;
}
