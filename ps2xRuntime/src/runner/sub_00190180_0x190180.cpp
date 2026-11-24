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

// Function: sub_00190180
// Address: 0x190180 - 0x1901ec
void sub_00190180_0x190180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190180_0x190180");
#endif

    switch (ctx->pc) {
        case 0x1901b8u: goto label_1901b8;
        case 0x1901c8u: goto label_1901c8;
        case 0x1901d8u: goto label_1901d8;
        default: break;
    }

    ctx->pc = 0x190180u;

    // 0x190180: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x190180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x190184: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x190184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x190188: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x190188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19018c: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x19018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x190190: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190194: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x190194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19019c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19019cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901a0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1901a0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x40D8B0u));
    // 0x1901a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1901a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1901ac: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1901acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1901b0: 0xc04150c  jal         func_105430
    ctx->pc = 0x1901B0u;
    SET_GPR_U32(ctx, 31, 0x1901B8u);
    ctx->pc = 0x1901B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901B0u;
    // 0x1901b4: 0xe7ac0078  swc1        $f12, 0x78($sp) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x1901B0u, 0x1901B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901B8u;
label_1901b8:
    // 0x1901b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1901b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1901bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1901bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901c0: 0xc064048  jal         func_190120
    ctx->pc = 0x1901C0u;
    SET_GPR_U32(ctx, 31, 0x1901C8u);
    ctx->pc = 0x1901C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901C0u;
    // 0x1901c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190120u, 0x1901C0u, 0x1901C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901C8u;
label_1901c8:
    // 0x1901c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1901c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1901cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1901ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1901d0: 0xc041442  jal         func_105108
    ctx->pc = 0x1901D0u;
    SET_GPR_U32(ctx, 31, 0x1901D8u);
    ctx->pc = 0x1901D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1901D0u;
    // 0x1901d4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1901D0u, 0x1901D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1901D8u;
label_1901d8:
    // 0x1901d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1901d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1901dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1901dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1901e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1901e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1901E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901E4u;
        // 0x1901e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901ECu;
}
