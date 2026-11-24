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

// Function: sub_00205F40
// Address: 0x205f40 - 0x205f9c
void sub_00205F40_0x205f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F40_0x205f40");
#endif

    switch (ctx->pc) {
        case 0x205f6cu: goto label_205f6c;
        default: break;
    }

    ctx->pc = 0x205f40u;

    // 0x205f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x205f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x205f44: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x205f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x205f48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x205f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x205f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x205f50: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x205f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f54: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x205f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x205f58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x205f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f5c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x205f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x205f60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x205f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f64: 0xc0877ec  jal         func_21DFB0
    ctx->pc = 0x205F64u;
    SET_GPR_U32(ctx, 31, 0x205F6Cu);
    ctx->pc = 0x205F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F64u;
    // 0x205f68: 0x8c84003c  lw          $a0, 0x3C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21DFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DFB0u, 0x205F64u, 0x205F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F6Cu;
label_205f6c:
    // 0x205f6c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205f70: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x205f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x205f74: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x205f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x205f78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x205f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x205f7c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x205f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x205f80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x205f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x205f84: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x205f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205f88: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x205f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f8c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x205f90: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x205f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x205f94: 0x3e00008  jr          $ra
    ctx->pc = 0x205F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F94u;
        // 0x205f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205F9Cu;
}
