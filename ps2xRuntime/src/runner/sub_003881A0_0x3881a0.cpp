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

// Function: sub_003881A0
// Address: 0x3881a0 - 0x3881ec
void sub_003881A0_0x3881a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003881A0_0x3881a0");
#endif

    switch (ctx->pc) {
        case 0x3881bcu: goto label_3881bc;
        default: break;
    }

    ctx->pc = 0x3881a0u;

    // 0x3881a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3881a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3881a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3881a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3881a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3881a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3881ac: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3881acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3881b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3881b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3881b4: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3881B4u;
    SET_GPR_U32(ctx, 31, 0x3881BCu);
    ctx->pc = 0x3881B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3881B4u;
    // 0x3881b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3881B4u, 0x3881BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3881BCu;
label_3881bc:
    // 0x3881bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3881bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3881c0: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3881c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3881c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3881c4u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3881c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3881c8u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3881cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3881ccu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3881d0: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3881d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3881d4: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3881d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3881d8: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3881d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3881dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3881dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3881e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3881e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3881e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3881E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3881E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881E4u;
        // 0x3881e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3881E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3881ECu;
}
