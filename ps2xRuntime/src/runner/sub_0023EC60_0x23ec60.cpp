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

// Function: sub_0023EC60
// Address: 0x23ec60 - 0x23ed1c
void sub_0023EC60_0x23ec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EC60_0x23ec60");
#endif

    switch (ctx->pc) {
        case 0x23ec98u: goto label_23ec98;
        case 0x23ecb0u: goto label_23ecb0;
        case 0x23ecbcu: goto label_23ecbc;
        case 0x23ecc8u: goto label_23ecc8;
        case 0x23ecd0u: goto label_23ecd0;
        case 0x23ece8u: goto label_23ece8;
        case 0x23ecfcu: goto label_23ecfc;
        default: break;
    }

    ctx->pc = 0x23ec60u;

    // 0x23ec60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23ec64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23ec68: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23ec68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec6c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23ec70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23ec74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23ec78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23ec78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23ec80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23ec84: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    // 0x23ec88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x23ec88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x23ec8c: 0x8e52b968  lw          $s2, -0x4698($s2)
    ctx->pc = 0x23ec8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949224)));
    // 0x23ec90: 0xc08fb00  jal         func_23EC00
    ctx->pc = 0x23EC90u;
    SET_GPR_U32(ctx, 31, 0x23EC98u);
    ctx->pc = 0x23EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC90u;
    // 0x23ec94: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC00u, 0x23EC90u, 0x23EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC98u;
label_23ec98:
    // 0x23ec98: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23ec9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23EC9Cu;
    {
        const bool branch_taken_0x23ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC9Cu;
        // 0x23eca0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec9c) {
            ctx->pc = 0x23ECB0u;
            goto label_23ecb0;
        }
    }
    ctx->pc = 0x23ECA4u;
    // 0x23eca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23eca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eca8: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ECA8u;
    SET_GPR_U32(ctx, 31, 0x23ECB0u);
    ctx->pc = 0x23ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECA8u;
    // 0x23ecac: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ECA8u, 0x23ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECB0u;
label_23ecb0:
    // 0x23ecb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23ecb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecb4: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ECB4u;
    SET_GPR_U32(ctx, 31, 0x23ECBCu);
    ctx->pc = 0x23ECB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECB4u;
    // 0x23ecb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ECB4u, 0x23ECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECBCu;
label_23ecbc:
    // 0x23ecbc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23ECBCu;
    {
        const bool branch_taken_0x23ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECBCu;
        // 0x23ecc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecbc) {
            ctx->pc = 0x23ECD4u;
            goto label_23ecd4;
        }
    }
    ctx->pc = 0x23ECC4u;
    // 0x23ecc4: 0x0  nop
    ctx->pc = 0x23ecc4u;
    // NOP
label_23ecc8:
    // 0x23ecc8: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x23ECC8u;
    SET_GPR_U32(ctx, 31, 0x23ECD0u);
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x23ECC8u, 0x23ECD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECD0u;
label_23ecd0:
    // 0x23ecd0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x23ecd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23ecd4:
    // 0x23ecd4: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x23ecd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x23ecd8: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x23ECD8u;
    {
        const bool branch_taken_0x23ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x23ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECD8u;
        // 0x23ecdc: 0x108200  sll         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecd8) {
            ctx->pc = 0x23ECF4u;
            goto label_23ecf4;
        }
    }
    ctx->pc = 0x23ECE0u;
    // 0x23ece0: 0xc08fb02  jal         func_23EC08
    ctx->pc = 0x23ECE0u;
    SET_GPR_U32(ctx, 31, 0x23ECE8u);
    ctx->pc = 0x23ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECE0u;
    // 0x23ece4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC08u, 0x23ECE0u, 0x23ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECE8u;
label_23ece8:
    // 0x23ece8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecec: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x23ECECu;
    {
        const bool branch_taken_0x23ecec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECECu;
        // 0x23ecf0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecec) {
            ctx->pc = 0x23ECC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ecc8;
        }
    }
    ctx->pc = 0x23ECF4u;
label_23ecf4:
    // 0x23ecf4: 0xc08fb02  jal         func_23EC08
    ctx->pc = 0x23ECF4u;
    SET_GPR_U32(ctx, 31, 0x23ECFCu);
    ctx->pc = 0x23ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF4u;
    // 0x23ecf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EC08u, 0x23ECF4u, 0x23ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECFCu;
label_23ecfc:
    // 0x23ecfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ecfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ed00: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ed00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x23ed04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ed04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23ed08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ed08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ed0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23ed0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23ed10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23ed10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ed14: 0x3e00008  jr          $ra
    ctx->pc = 0x23ED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED14u;
        // 0x23ed18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ED1Cu;
}
