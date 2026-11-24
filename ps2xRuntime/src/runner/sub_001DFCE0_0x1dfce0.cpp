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

// Function: sub_001DFCE0
// Address: 0x1dfce0 - 0x1dfd38
void sub_001DFCE0_0x1dfce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFCE0_0x1dfce0");
#endif

    switch (ctx->pc) {
        case 0x1dfd04u: goto label_1dfd04;
        default: break;
    }

    ctx->pc = 0x1dfce0u;

    // 0x1dfce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dfce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dfce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dfce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dfcec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dfcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dfcf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dfcf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dfcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dfcf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dfcf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcfc: 0xc076f20  jal         func_1DBC80
    ctx->pc = 0x1DFCFCu;
    SET_GPR_U32(ctx, 31, 0x1DFD04u);
    ctx->pc = 0x1DFD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCFCu;
    // 0x1dfd00: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBC80u, 0x1DFCFCu, 0x1DFD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD04u;
label_1dfd04:
    // 0x1dfd04: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1dfd08: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1dfd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dfd0c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1dfd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1dfd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfd14: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x1dfd14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x1dfd18: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x1dfd18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x1dfd1c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1dfd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1dfd20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dfd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfd24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfd24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfd28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfd28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfd2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfd30: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD30u;
        // 0x1dfd34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFD38u;
}
