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

// Function: sub_003EF480
// Address: 0x3ef480 - 0x3ef4c8
void sub_003EF480_0x3ef480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF480_0x3ef480");
#endif

    switch (ctx->pc) {
        case 0x3ef498u: goto label_3ef498;
        default: break;
    }

    ctx->pc = 0x3ef480u;

    // 0x3ef480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef484: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ef484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ef488: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ef488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ef48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ef48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef490: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3EF490u;
    SET_GPR_U32(ctx, 31, 0x3EF498u);
    ctx->pc = 0x3EF494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF490u;
    // 0x3ef494: 0x8c842950  lw          $a0, 0x2950($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3EF490u, 0x3EF498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF498u;
label_3ef498:
    // 0x3ef498: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3ef498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3ef49c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3ef49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3ef4a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3ef4a0u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ef4a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ef4a4u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ef4a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3ef4a8u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ef4ac: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3ef4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3ef4b0: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3ef4b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3ef4b4: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3ef4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3ef4b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ef4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ef4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4C0u;
        // 0x3ef4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF4C8u;
}
