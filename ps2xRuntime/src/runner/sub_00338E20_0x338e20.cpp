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

// Function: sub_00338E20
// Address: 0x338e20 - 0x338ee4
void sub_00338E20_0x338e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338E20_0x338e20");
#endif

    switch (ctx->pc) {
        case 0x338e88u: goto label_338e88;
        case 0x338eb8u: goto label_338eb8;
        case 0x338ec8u: goto label_338ec8;
        default: break;
    }

    ctx->pc = 0x338e20u;

    // 0x338e20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x338e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x338e24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x338e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x338e28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x338e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x338e2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x338e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x338e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x338e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x338e34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x338e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x338e38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x338e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x338e40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x338e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x338e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x338e48: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x338e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e4c: 0x8c24cee4  lw          $a0, -0x311C($at)
    ctx->pc = 0x338e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEE4u));
    // 0x338e50: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x338e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x338e54: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x338E54u;
    {
        const bool branch_taken_0x338e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E54u;
        // 0x338e58: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e54) {
            ctx->pc = 0x338EC8u;
            goto label_338ec8;
        }
    }
    ctx->pc = 0x338E5Cu;
    // 0x338e5c: 0x240219e7  addiu       $v0, $zero, 0x19E7
    ctx->pc = 0x338e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6631));
    // 0x338e60: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x338E60u;
    {
        const bool branch_taken_0x338e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x338e60) {
            ctx->pc = 0x338E78u;
            goto label_338e78;
        }
    }
    ctx->pc = 0x338E68u;
    // 0x338e68: 0x8f8285b0  lw          $v0, -0x7A50($gp)
    ctx->pc = 0x338e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
    // 0x338e6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x338E6Cu;
    {
        const bool branch_taken_0x338e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338e6c) {
            ctx->pc = 0x338E78u;
            goto label_338e78;
        }
    }
    ctx->pc = 0x338E74u;
    // 0x338e74: 0x241119e8  addiu       $s1, $zero, 0x19E8
    ctx->pc = 0x338e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6632));
label_338e78:
    // 0x338e78: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x338e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x338e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e80: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x338E80u;
    SET_GPR_U32(ctx, 31, 0x338E88u);
    ctx->pc = 0x338E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E80u;
    // 0x338e84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x338E80u, 0x338E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E88u;
label_338e88:
    // 0x338e88: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x338e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x338e8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x338e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e90: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x338e90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x338e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x338e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338e9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x338e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ea0: 0xa242000a  sb          $v0, 0xA($s2)
    ctx->pc = 0x338ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x338ea4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x338ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x338ea8: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x338ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x338eac: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x338eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    // 0x338eb0: 0xc0ce34c  jal         func_338D30
    ctx->pc = 0x338EB0u;
    SET_GPR_U32(ctx, 31, 0x338EB8u);
    ctx->pc = 0x338EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EB0u;
    // 0x338eb4: 0xa2420008  sb          $v0, 0x8($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D30u, 0x338EB0u, 0x338EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EB8u;
label_338eb8:
    // 0x338eb8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x338eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338ebc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x338ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ec0: 0xc08f1ac  jal         func_23C6B0
    ctx->pc = 0x338EC0u;
    SET_GPR_U32(ctx, 31, 0x338EC8u);
    ctx->pc = 0x338EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EC0u;
    // 0x338ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C6B0u, 0x338EC0u, 0x338EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EC8u;
label_338ec8:
    // 0x338ec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x338ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x338ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x338eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x338ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x338ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338edc: 0x3e00008  jr          $ra
    ctx->pc = 0x338EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EDCu;
        // 0x338ee0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338EE4u;
}
