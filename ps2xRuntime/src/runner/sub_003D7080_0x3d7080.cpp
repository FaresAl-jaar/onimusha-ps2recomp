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

// Function: sub_003D7080
// Address: 0x3d7080 - 0x3d70d0
void sub_003D7080_0x3d7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7080_0x3d7080");
#endif

    switch (ctx->pc) {
        case 0x3d70a0u: goto label_3d70a0;
        default: break;
    }

    ctx->pc = 0x3d7080u;

    // 0x3d7080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7084: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d7084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d708c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d708cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d7094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7098: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3D7098u;
    SET_GPR_U32(ctx, 31, 0x3D70A0u);
    ctx->pc = 0x3D709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7098u;
    // 0x3d709c: 0xa0852b32  sb          $a1, 0x2B32($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 11058), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3D7098u, 0x3D70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D70A0u;
label_3d70a0:
    // 0x3d70a0: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d70a4: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3d70a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3d70a8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3d70a8u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d70ac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3d70acu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d70b0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3d70b0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d70b4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3d70b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3d70b8: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3d70b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3d70bc: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3d70bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3d70c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d70c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d70c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d70c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d70c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D70C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D70CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D70C8u;
        // 0x3d70cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D70C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D70D0u;
}
