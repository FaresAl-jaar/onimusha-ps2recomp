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

// Function: sub_003BEED0
// Address: 0x3beed0 - 0x3bef14
void sub_003BEED0_0x3beed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEED0_0x3beed0");
#endif

    switch (ctx->pc) {
        case 0x3bef08u: goto label_3bef08;
        default: break;
    }

    ctx->pc = 0x3beed0u;

    // 0x3beed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3beed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3beed4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3beed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3beed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3beed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3beedc: 0x2463e1c0  addiu       $v1, $v1, -0x1E40
    ctx->pc = 0x3beedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959552));
    // 0x3beee0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3beee0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E1C0u));
    // 0x3beee4: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x3beee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3beee8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3beee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3beeec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3beeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3beef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3beef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3beef4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3beef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3beef8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3beef8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3beefc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3beefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bef00: 0xc0efb1c  jal         func_3BEC70
    ctx->pc = 0x3BEF00u;
    SET_GPR_U32(ctx, 31, 0x3BEF08u);
    ctx->pc = 0x3BEF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BEF00u;
    // 0x3bef04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEC70u, 0x3BEF00u, 0x3BEF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BEF08u;
label_3bef08:
    // 0x3bef08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bef08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BEF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BEF0Cu;
        // 0x3bef10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BEF14u;
}
