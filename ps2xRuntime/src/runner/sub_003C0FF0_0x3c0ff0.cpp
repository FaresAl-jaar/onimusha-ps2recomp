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

// Function: sub_003C0FF0
// Address: 0x3c0ff0 - 0x3c102c
void sub_003C0FF0_0x3c0ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0FF0_0x3c0ff0");
#endif

    switch (ctx->pc) {
        case 0x3c100cu: goto label_3c100c;
        default: break;
    }

    ctx->pc = 0x3c0ff0u;

    // 0x3c0ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c0ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c0ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c0ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c0ff8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c0ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c0ffc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c0ffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c1000: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c1000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1004: 0xc0f03f0  jal         func_3C0FC0
    ctx->pc = 0x3C1004u;
    SET_GPR_U32(ctx, 31, 0x3C100Cu);
    ctx->pc = 0x3C1008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1004u;
    // 0x3c1008: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FC0u, 0x3C1004u, 0x3C100Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C100Cu;
label_3c100c:
    // 0x3c100c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3c100cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x3c1010: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c1010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c1014: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3c1014u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c1018: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c1018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c101c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c1020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c1020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c1024: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1024u;
        // 0x3c1028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C102Cu;
}
