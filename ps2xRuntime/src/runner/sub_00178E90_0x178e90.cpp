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

// Function: sub_00178E90
// Address: 0x178e90 - 0x178ee0
void sub_00178E90_0x178e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178E90_0x178e90");
#endif

    switch (ctx->pc) {
        case 0x178eccu: goto label_178ecc;
        default: break;
    }

    ctx->pc = 0x178e90u;

    // 0x178e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178e94: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x178e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x178e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178e9c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x178e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x178ea0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x178ea4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x178ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x178ea8: 0x8c872df8  lw          $a3, 0x2DF8($a0)
    ctx->pc = 0x178ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11768)));
    // 0x178eac: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x178eb0: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x178eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x178eb4: 0x468024  and         $s0, $v0, $a2
    ctx->pc = 0x178eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x178eb8: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x178eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x178ebc: 0xac822df8  sw          $v0, 0x2DF8($a0)
    ctx->pc = 0x178ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 11768), GPR_U32(ctx, 2));
    // 0x178ec0: 0x8c852df8  lw          $a1, 0x2DF8($a0)
    ctx->pc = 0x178ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11768)));
    // 0x178ec4: 0xc055068  jal         func_1541A0
    ctx->pc = 0x178EC4u;
    SET_GPR_U32(ctx, 31, 0x178ECCu);
    ctx->pc = 0x178EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178EC4u;
    // 0x178ec8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1541A0u, 0x178EC4u, 0x178ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178ECCu;
label_178ecc:
    // 0x178ecc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x178ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178ED8u;
        // 0x178edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178EE0u;
}
