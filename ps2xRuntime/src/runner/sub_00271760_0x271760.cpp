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

// Function: sub_00271760
// Address: 0x271760 - 0x2717b4
void sub_00271760_0x271760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271760_0x271760");
#endif

    switch (ctx->pc) {
        case 0x2717a8u: goto label_2717a8;
        default: break;
    }

    ctx->pc = 0x271760u;

    // 0x271760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271764: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x271764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x271768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27176c: 0x84830008  lh          $v1, 0x8($a0)
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x271770: 0x8482000a  lh          $v0, 0xA($a0)
    ctx->pc = 0x271770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x271774: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x271774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27177c: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x27177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
    // 0x271780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x271780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x271784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271788: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x271788u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x27178c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x27178cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x271790: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x271794: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x271794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x271798: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x271798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x27179c: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x27179cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x2717a0: 0xc09c540  jal         func_271500
    ctx->pc = 0x2717A0u;
    SET_GPR_U32(ctx, 31, 0x2717A8u);
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x2717A0u, 0x2717A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717A8u;
label_2717a8:
    // 0x2717a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2717a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2717ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2717ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2717B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717ACu;
        // 0x2717b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2717ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2717B4u;
}
