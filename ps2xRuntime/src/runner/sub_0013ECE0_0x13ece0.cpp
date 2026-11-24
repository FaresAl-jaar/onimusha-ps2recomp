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

// Function: sub_0013ECE0
// Address: 0x13ece0 - 0x13ed64
void sub_0013ECE0_0x13ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ECE0_0x13ece0");
#endif

    switch (ctx->pc) {
        case 0x13ed20u: goto label_13ed20;
        case 0x13ed3cu: goto label_13ed3c;
        default: break;
    }

    ctx->pc = 0x13ece0u;

    // 0x13ece0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ece4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ece4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13ece8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13ecec: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13ececu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13ecf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ecf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ecf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ecf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ecf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ecfc: 0x8c22fc90  lw          $v0, -0x370($at)
    ctx->pc = 0x13ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81FC90u));
    // 0x13ed00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ed00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13ed04: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13ed08: 0x8c26fc94  lw          $a2, -0x36C($at)
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81FC94u));
    // 0x13ed0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13ed0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ed10: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x13ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x13ed14: 0x438024  and         $s0, $v0, $v1
    ctx->pc = 0x13ed14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13ed18: 0xc04fba4  jal         func_13EE90
    ctx->pc = 0x13ED18u;
    SET_GPR_U32(ctx, 31, 0x13ED20u);
    ctx->pc = 0x13ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED18u;
    // 0x13ed1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EE90u, 0x13ED18u, 0x13ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED20u;
label_13ed20:
    // 0x13ed20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13ed20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed24: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13ed28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ed28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed2c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x13ed2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed30: 0x24846d20  addiu       $a0, $a0, 0x6D20
    ctx->pc = 0x13ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27936));
    // 0x13ed34: 0xc04c090  jal         func_130240
    ctx->pc = 0x13ED34u;
    SET_GPR_U32(ctx, 31, 0x13ED3Cu);
    ctx->pc = 0x13ED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED34u;
    // 0x13ed38: 0x2606fff0  addiu       $a2, $s0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130240u, 0x13ED34u, 0x13ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED3Cu;
label_13ed3c:
    // 0x13ed3c: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x13ed3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x13ed40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x13ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x13ed44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13ed48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x13ed48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x13ed4c: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x13ed4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
    // 0x13ed50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ed54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ed54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ed58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ed58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ed5c: 0x3e00008  jr          $ra
    ctx->pc = 0x13ED5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ED5Cu;
        // 0x13ed60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ED5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ED64u;
}
