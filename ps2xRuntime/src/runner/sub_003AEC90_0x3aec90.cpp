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

// Function: sub_003AEC90
// Address: 0x3aec90 - 0x3aed00
void sub_003AEC90_0x3aec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEC90_0x3aec90");
#endif

    switch (ctx->pc) {
        case 0x3aecc4u: goto label_3aecc4;
        case 0x3aecccu: goto label_3aeccc;
        default: break;
    }

    ctx->pc = 0x3aec90u;

    // 0x3aec90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3aec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3aec94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3aec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3aec98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aec9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aec9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aeca0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3AECA0u;
    {
        const bool branch_taken_0x3aeca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECA0u;
        // 0x3aeca4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeca0) {
            ctx->pc = 0x3AECF0u;
            goto label_3aecf0;
        }
    }
    ctx->pc = 0x3AECA8u;
    // 0x3aeca8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3aeca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3aecac: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3aecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3aecb0: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x3aecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3aecb4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aecb8: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x3aecb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x3aecbc: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x3AECBCu;
    SET_GPR_U32(ctx, 31, 0x3AECC4u);
    ctx->pc = 0x3AECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AECBCu;
    // 0x3aecc0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x3AECBCu, 0x3AECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AECC4u;
label_3aecc4:
    // 0x3aecc4: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3AECC4u;
    SET_GPR_U32(ctx, 31, 0x3AECCCu);
    ctx->pc = 0x3AECC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AECC4u;
    // 0x3aecc8: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3AECC4u, 0x3AECCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AECCCu;
label_3aeccc:
    // 0x3aeccc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3aecccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3aecd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3aecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aecd4: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x3aecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x3aecd8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aecdc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3aecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3aece0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3aece0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3aece4: 0x2463a270  addiu       $v1, $v1, -0x5D90
    ctx->pc = 0x3aece4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943344));
    // 0x3aece8: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3aece8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3aecec: 0x0  nop
    ctx->pc = 0x3aececu;
    // NOP
label_3aecf0:
    // 0x3aecf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3aecf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aecf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aecf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aecf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AECF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AECF8u;
        // 0x3aecfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AECF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AED00u;
}
