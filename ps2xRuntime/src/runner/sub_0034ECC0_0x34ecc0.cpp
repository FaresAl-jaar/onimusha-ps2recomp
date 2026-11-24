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

// Function: sub_0034ECC0
// Address: 0x34ecc0 - 0x34ed60
void sub_0034ECC0_0x34ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034ECC0_0x34ecc0");
#endif

    switch (ctx->pc) {
        case 0x34ece8u: goto label_34ece8;
        default: break;
    }

    ctx->pc = 0x34ecc0u;

    // 0x34ecc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ecc4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34ecc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ecc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34eccc: 0x9083002d  lbu         $v1, 0x2D($a0)
    ctx->pc = 0x34ecccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x34ecd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34ECD0u;
    {
        const bool branch_taken_0x34ecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECD0u;
        // 0x34ecd4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecd0) {
            ctx->pc = 0x34ECE0u;
            goto label_34ece0;
        }
    }
    ctx->pc = 0x34ECD8u;
    // 0x34ecd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34ECD8u;
    {
        const bool branch_taken_0x34ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ECD8u;
        // 0x34ecdc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ecd8) {
            ctx->pc = 0x34ECECu;
            goto label_34ecec;
        }
    }
    ctx->pc = 0x34ECE0u;
label_34ece0:
    // 0x34ece0: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34ECE0u;
    SET_GPR_U32(ctx, 31, 0x34ECE8u);
    ctx->pc = 0x34ECE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ECE0u;
    // 0x34ece4: 0x90a4002e  lbu         $a0, 0x2E($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34ECE0u, 0x34ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34ECE8u;
label_34ece8:
    // 0x34ece8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34ecec:
    // 0x34ecec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34ececu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ecf0: 0x90a2002e  lbu         $v0, 0x2E($a1)
    ctx->pc = 0x34ecf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x34ecf4: 0x28410018  slti        $at, $v0, 0x18
    ctx->pc = 0x34ecf4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34ecf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x34ECF8u;
    {
        const bool branch_taken_0x34ecf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ecf8) {
            ctx->pc = 0x34ED08u;
            goto label_34ed08;
        }
    }
    ctx->pc = 0x34ED00u;
    // 0x34ed00: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34ED00u;
    {
        const bool branch_taken_0x34ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED00u;
        // 0x34ed04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed00) {
            ctx->pc = 0x34ED28u;
            goto label_34ed28;
        }
    }
    ctx->pc = 0x34ED08u;
label_34ed08:
    // 0x34ed08: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x34ed08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34ed0c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34ED0Cu;
    {
        const bool branch_taken_0x34ed0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34ed0c) {
            ctx->pc = 0x34ED20u;
            goto label_34ed20;
        }
    }
    ctx->pc = 0x34ED14u;
    // 0x34ed14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34ED14u;
    {
        const bool branch_taken_0x34ed14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED14u;
        // 0x34ed18: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ed14) {
            ctx->pc = 0x34ED28u;
            goto label_34ed28;
        }
    }
    ctx->pc = 0x34ED1Cu;
    // 0x34ed1c: 0x0  nop
    ctx->pc = 0x34ed1cu;
    // NOP
label_34ed20:
    // 0x34ed20: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x34ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x34ed24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34ed24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34ed28:
    // 0x34ed28: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34ed28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34ed2c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x34ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x34ed30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ed34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34ed34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34ed38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34ed38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34ed3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34ed40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x34ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34ed44: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x34ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x34ed48: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x34ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
    // 0x34ed4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34ed50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34ed54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34ed58: 0x3e00008  jr          $ra
    ctx->pc = 0x34ED58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34ED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ED58u;
        // 0x34ed5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34ED58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34ED60u;
}
