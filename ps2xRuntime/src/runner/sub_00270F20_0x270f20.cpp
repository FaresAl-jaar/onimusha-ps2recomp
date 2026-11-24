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

// Function: sub_00270F20
// Address: 0x270f20 - 0x270fd0
void sub_00270F20_0x270f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270F20_0x270f20");
#endif

    switch (ctx->pc) {
        case 0x270f44u: goto label_270f44;
        case 0x270f50u: goto label_270f50;
        case 0x270fc4u: goto label_270fc4;
        default: break;
    }

    ctx->pc = 0x270f20u;

    // 0x270f20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x270f24: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x270f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x270f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270f2c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f30: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x270f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x270f34: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x270f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x270f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f3c: 0xc04c668  jal         func_1319A0
    ctx->pc = 0x270F3Cu;
    SET_GPR_U32(ctx, 31, 0x270F44u);
    ctx->pc = 0x270F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F3Cu;
    // 0x270f40: 0xaf828894  sw          $v0, -0x776C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936724), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1319A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319A0u, 0x270F3Cu, 0x270F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F44u;
label_270f44:
    // 0x270f44: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x270f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x270f48: 0xc052260  jal         func_148980
    ctx->pc = 0x270F48u;
    SET_GPR_U32(ctx, 31, 0x270F50u);
    ctx->pc = 0x270F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F48u;
    // 0x270f4c: 0x24848b30  addiu       $a0, $a0, -0x74D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148980u, 0x270F48u, 0x270F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270F50u;
label_270f50:
    // 0x270f50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f54: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x270f58: 0x8c29ceb8  lw          $t1, -0x3148($at)
    ctx->pc = 0x270f58u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x270f5c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x270f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x270f60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x270f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x270f64: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x270f68: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x270f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x270f6c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x270f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x270f70: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x270f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x270f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x270f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f7c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x270f7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x270f80: 0x8c27cebc  lw          $a3, -0x3144($at)
    ctx->pc = 0x270f80u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x270f84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f88: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x270f88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x270f8c: 0xac28ceb8  sw          $t0, -0x3148($at)
    ctx->pc = 0x270f8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x270f90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f94: 0xac26cebc  sw          $a2, -0x3144($at)
    ctx->pc = 0x270f94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x270f98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270f9c: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x270f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x270fa0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x270fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x270fa4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270fa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270fa8: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x270fa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x270fac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270fb0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x270fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x270fb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x270fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x270fb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x270fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x270fbc: 0xc05ee50  jal         func_17B940
    ctx->pc = 0x270FBCu;
    SET_GPR_U32(ctx, 31, 0x270FC4u);
    ctx->pc = 0x270FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270FBCu;
    // 0x270fc0: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B940u, 0x270FBCu, 0x270FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270FC4u;
label_270fc4:
    // 0x270fc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x270FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FC8u;
        // 0x270fcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270FD0u;
}
