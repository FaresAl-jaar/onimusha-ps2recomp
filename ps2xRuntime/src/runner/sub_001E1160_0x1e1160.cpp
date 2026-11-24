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

// Function: sub_001E1160
// Address: 0x1e1160 - 0x1e11ac
void sub_001E1160_0x1e1160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1160_0x1e1160");
#endif

    switch (ctx->pc) {
        case 0x1e1184u: goto label_1e1184;
        default: break;
    }

    ctx->pc = 0x1e1160u;

    // 0x1e1160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e1168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e116c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e1170: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e1170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1178: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e1178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e117c: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1E117Cu;
    SET_GPR_U32(ctx, 31, 0x1E1184u);
    ctx->pc = 0x1E1180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E117Cu;
    // 0x1e1180: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1E117Cu, 0x1E1184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1184u;
label_1e1184:
    // 0x1e1184: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1e1184u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1e1188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e118c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x1e118cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x1e1190: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x1e1190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    // 0x1e1194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e1194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e119c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e119cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e11a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e11a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e11a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E11A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E11A4u;
        // 0x1e11a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E11A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E11ACu;
}
