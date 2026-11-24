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

// Function: sub_002E7560
// Address: 0x2e7560 - 0x2e75ac
void sub_002E7560_0x2e7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7560_0x2e7560");
#endif

    switch (ctx->pc) {
        case 0x2e757cu: goto label_2e757c;
        default: break;
    }

    ctx->pc = 0x2e7560u;

    // 0x2e7560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7564: 0x24050c00  addiu       $a1, $zero, 0xC00
    ctx->pc = 0x2e7564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x2e7568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e7568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e756c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7574: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x2E7574u;
    SET_GPR_U32(ctx, 31, 0x2E757Cu);
    ctx->pc = 0x2E7578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7574u;
    // 0x2e7578: 0x26042b20  addiu       $a0, $s0, 0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x2E7574u, 0x2E757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E757Cu;
label_2e757c:
    // 0x2e757c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x2e757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2e7580: 0x26042b50  addiu       $a0, $s0, 0x2B50
    ctx->pc = 0x2e7580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x2e7584: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2e7584u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e7588: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e7588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e758c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2e758cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x2e7590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e7590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7594: 0x0  nop
    ctx->pc = 0x2e7594u;
    // NOP
    // 0x2e7598: 0xe6002b5c  swc1        $f0, 0x2B5C($s0)
    ctx->pc = 0x2e7598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11100), bits); }
    // 0x2e759c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e759cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e75a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e75a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e75a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E75A4u;
        // 0x2e75a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E75A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E75ACu;
}
