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

// Function: sub_001432F0
// Address: 0x1432f0 - 0x143344
void sub_001432F0_0x1432f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001432F0_0x1432f0");
#endif

    switch (ctx->pc) {
        case 0x143304u: goto label_143304;
        default: break;
    }

    ctx->pc = 0x1432f0u;

    // 0x1432f0: 0x460c7301  sub.s       $f12, $f14, $f12
    ctx->pc = 0x1432f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x1432f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1432f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1432f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1432f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1432fc: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1432FCu;
    SET_GPR_U32(ctx, 31, 0x143304u);
    ctx->pc = 0x143300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1432FCu;
    // 0x143300: 0x460d7b41  sub.s       $f13, $f15, $f13 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1432FCu, 0x143304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143304u;
label_143304:
    // 0x143304: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x143304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x143308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14330c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x14330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x143310: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x143310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143314: 0x0  nop
    ctx->pc = 0x143314u;
    // NOP
    // 0x143318: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14331c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14331cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143320: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143324: 0x0  nop
    ctx->pc = 0x143324u;
    // NOP
    // 0x143328: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14332c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14332cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143330: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x143330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x143334: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143338: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143338u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14333c: 0x3e00008  jr          $ra
    ctx->pc = 0x14333Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14333Cu;
        // 0x143340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14333Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143344u;
}
