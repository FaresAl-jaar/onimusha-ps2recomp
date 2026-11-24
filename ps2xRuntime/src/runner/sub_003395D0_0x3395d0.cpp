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

// Function: sub_003395D0
// Address: 0x3395d0 - 0x339638
void sub_003395D0_0x3395d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003395D0_0x3395d0");
#endif

    switch (ctx->pc) {
        case 0x3395e8u: goto label_3395e8;
        case 0x3395f4u: goto label_3395f4;
        case 0x3395fcu: goto label_3395fc;
        case 0x33960cu: goto label_33960c;
        case 0x339618u: goto label_339618;
        default: break;
    }

    ctx->pc = 0x3395d0u;

    // 0x3395d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3395d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3395d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3395d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3395d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3395dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3395dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3395e0: 0xc0ce7a8  jal         func_339EA0
    ctx->pc = 0x3395E0u;
    SET_GPR_U32(ctx, 31, 0x3395E8u);
    ctx->pc = 0x3395E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395E0u;
    // 0x3395e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x3395E0u, 0x3395E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395E8u;
label_3395e8:
    // 0x3395e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3395e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3395ec: 0xc0ce7a8  jal         func_339EA0
    ctx->pc = 0x3395ECu;
    SET_GPR_U32(ctx, 31, 0x3395F4u);
    ctx->pc = 0x3395F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395ECu;
    // 0x3395f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339EA0u, 0x3395ECu, 0x3395F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395F4u;
label_3395f4:
    // 0x3395f4: 0xc0ce6b4  jal         func_339AD0
    ctx->pc = 0x3395F4u;
    SET_GPR_U32(ctx, 31, 0x3395FCu);
    ctx->pc = 0x3395F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3395F4u;
    // 0x3395f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339AD0u, 0x3395F4u, 0x3395FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3395FCu;
label_3395fc:
    // 0x3395fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3395fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x339600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339604: 0xc0cea98  jal         func_33AA60
    ctx->pc = 0x339604u;
    SET_GPR_U32(ctx, 31, 0x33960Cu);
    ctx->pc = 0x339608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339604u;
    // 0x339608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AA60u, 0x339604u, 0x33960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33960Cu;
label_33960c:
    // 0x33960c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339610: 0xc0ceae8  jal         func_33ABA0
    ctx->pc = 0x339610u;
    SET_GPR_U32(ctx, 31, 0x339618u);
    ctx->pc = 0x339614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339610u;
    // 0x339614: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ABA0u, 0x339610u, 0x339618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339618u;
label_339618:
    // 0x339618: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33961c: 0xfc20f898  sd          $zero, -0x768($at)
    ctx->pc = 0x33961cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 0)); ps2TraceGuestWrite(rdram, 0x90F898u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x90F898u, _value); } while (0);
    // 0x339620: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x339620u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x339624: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x339624u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x339628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x339628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33962c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33962cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339630: 0x3e00008  jr          $ra
    ctx->pc = 0x339630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339630u;
        // 0x339634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339638u;
}
