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

// Function: sub_002F0E80
// Address: 0x2f0e80 - 0x2f0ef0
void sub_002F0E80_0x2f0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0E80_0x2f0e80");
#endif

    switch (ctx->pc) {
        case 0x2f0eb0u: goto label_2f0eb0;
        case 0x2f0ed4u: goto label_2f0ed4;
        default: break;
    }

    ctx->pc = 0x2f0e80u;

    // 0x2f0e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f0e84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f0e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f0e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f0e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f0e90: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f0e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f0e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f0e98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f0e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f0e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f0ea0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f0ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ea4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2f0ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ea8: 0xc097404  jal         func_25D010
    ctx->pc = 0x2F0EA8u;
    SET_GPR_U32(ctx, 31, 0x2F0EB0u);
    ctx->pc = 0x2F0EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0EA8u;
    // 0x2f0eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D010u, 0x2F0EA8u, 0x2F0EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0EB0u;
label_2f0eb0:
    // 0x2f0eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f0eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0eb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f0eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0eb8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f0eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ebc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f0ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ec0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f0ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0ec4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f0ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0ec8: 0x240a0026  addiu       $t2, $zero, 0x26
    ctx->pc = 0x2f0ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2f0ecc: 0xc0d3138  jal         func_34C4E0
    ctx->pc = 0x2F0ECCu;
    SET_GPR_U32(ctx, 31, 0x2F0ED4u);
    ctx->pc = 0x2F0ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0ECCu;
    // 0x2f0ed0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C4E0u, 0x2F0ECCu, 0x2F0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0ED4u;
label_2f0ed4:
    // 0x2f0ed4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f0ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f0ed8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f0ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0edc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f0edcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f0ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f0ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0EE8u;
        // 0x2f0eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0EF0u;
}
