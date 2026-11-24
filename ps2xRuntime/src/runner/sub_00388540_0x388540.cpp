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

// Function: sub_00388540
// Address: 0x388540 - 0x38858c
void sub_00388540_0x388540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00388540_0x388540");
#endif

    switch (ctx->pc) {
        case 0x38855cu: goto label_38855c;
        default: break;
    }

    ctx->pc = 0x388540u;

    // 0x388540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x388540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x388544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x388544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388548: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x388548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38854c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x38854cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x388550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x388550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x388554: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x388554u;
    SET_GPR_U32(ctx, 31, 0x38855Cu);
    ctx->pc = 0x388558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388554u;
    // 0x388558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x388554u, 0x38855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38855Cu;
label_38855c:
    // 0x38855c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x38855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x388560: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x388560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x388564: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x388564u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x388568: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x388568u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38856c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x38856cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x388570: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x388570u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x388574: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x388574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x388578: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x388578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x38857c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38857cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x388580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388584: 0x3e00008  jr          $ra
    ctx->pc = 0x388584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388584u;
        // 0x388588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38858Cu;
}
