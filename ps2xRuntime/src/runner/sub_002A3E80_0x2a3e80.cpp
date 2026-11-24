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

// Function: sub_002A3E80
// Address: 0x2a3e80 - 0x2a3f10
void sub_002A3E80_0x2a3e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3E80_0x2a3e80");
#endif

    switch (ctx->pc) {
        case 0x2a3ed0u: goto label_2a3ed0;
        case 0x2a3ef8u: goto label_2a3ef8;
        default: break;
    }

    ctx->pc = 0x2a3e80u;

    // 0x2a3e80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a3e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a3e84: 0x3c024c00  lui         $v0, 0x4C00
    ctx->pc = 0x2a3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19456 << 16));
    // 0x2a3e88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a3e8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a3e8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a3e94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a3e94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3e98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a3e9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a3e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a3ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a3ea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a3ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ea8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a3ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3eac: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a3eb0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a3eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a3eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a3eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3eb8: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a3eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a3ebc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a3ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ec0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3ec0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ec4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a3ec4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ec8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A3EC8u;
    SET_GPR_U32(ctx, 31, 0x2A3ED0u);
    ctx->pc = 0x2A3ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EC8u;
    // 0x2a3ecc: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A3EC8u, 0x2A3ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3ED0u;
label_2a3ed0:
    // 0x2a3ed0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a3ed0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ed4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a3ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ed8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a3ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3edc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a3edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ee0: 0x2405073c  addiu       $a1, $zero, 0x73C
    ctx->pc = 0x2a3ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1852));
    // 0x2a3ee4: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x2a3ee8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a3eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a3eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ef0: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A3EF0u;
    SET_GPR_U32(ctx, 31, 0x2A3EF8u);
    ctx->pc = 0x2A3EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3EF0u;
    // 0x2a3ef4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A3EF0u, 0x2A3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3EF8u;
label_2a3ef8:
    // 0x2a3ef8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a3ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a3efc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a3efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a3f00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a3f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3f04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a3f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3f08: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F08u;
        // 0x2a3f0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F10u;
}
