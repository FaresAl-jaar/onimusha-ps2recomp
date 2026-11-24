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

// Function: sub_003D7170
// Address: 0x3d7170 - 0x3d71c0
void sub_003D7170_0x3d7170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7170_0x3d7170");
#endif

    switch (ctx->pc) {
        case 0x3d7190u: goto label_3d7190;
        default: break;
    }

    ctx->pc = 0x3d7170u;

    // 0x3d7170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d7174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d717c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3d717cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3d7180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d7180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d7184: 0xa0802b32  sb          $zero, 0x2B32($a0)
    ctx->pc = 0x3d7184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11058), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7188: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3D7188u;
    SET_GPR_U32(ctx, 31, 0x3D7190u);
    ctx->pc = 0x3D718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7188u;
    // 0x3d718c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3D7188u, 0x3D7190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7190u;
label_3d7190:
    // 0x3d7190: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3d7190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3d7194: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3d7194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3d7198: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3d7198u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d719c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3d719cu;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d71a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3d71a0u;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d71a4: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3d71a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3d71a8: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3d71a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3d71ac: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3d71acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3d71b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d71b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d71b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d71b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d71b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D71B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D71B8u;
        // 0x3d71bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D71B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D71C0u;
}
