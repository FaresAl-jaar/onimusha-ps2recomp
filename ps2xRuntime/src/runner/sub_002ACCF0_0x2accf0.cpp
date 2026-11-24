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

// Function: sub_002ACCF0
// Address: 0x2accf0 - 0x2acdb0
void sub_002ACCF0_0x2accf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACCF0_0x2accf0");
#endif

    switch (ctx->pc) {
        case 0x2acd20u: goto label_2acd20;
        case 0x2acd30u: goto label_2acd30;
        case 0x2acd44u: goto label_2acd44;
        case 0x2acd54u: goto label_2acd54;
        case 0x2acd74u: goto label_2acd74;
        default: break;
    }

    ctx->pc = 0x2accf0u;

    // 0x2accf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2accf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2accf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2accf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2accf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2accf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2accfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2accfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2acd00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2acd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2acd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2acd08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2acd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd0c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acd10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2acd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2acd14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd18: 0xc04e720  jal         func_139C80
    ctx->pc = 0x2ACD18u;
    SET_GPR_U32(ctx, 31, 0x2ACD20u);
    ctx->pc = 0x2ACD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD18u;
    // 0x2acd1c: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C80u, 0x2ACD18u, 0x2ACD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD20u;
label_2acd20:
    // 0x2acd20: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acd20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acd24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2acd24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd28: 0xc04e728  jal         func_139CA0
    ctx->pc = 0x2ACD28u;
    SET_GPR_U32(ctx, 31, 0x2ACD30u);
    ctx->pc = 0x2ACD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD28u;
    // 0x2acd2c: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CA0u, 0x2ACD28u, 0x2ACD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD30u;
label_2acd30:
    // 0x2acd30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2acd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2acd34: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acd38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2acd38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2acd3c: 0xc04e714  jal         func_139C50
    ctx->pc = 0x2ACD3Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD44u);
    ctx->pc = 0x2ACD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD3Cu;
    // 0x2acd40: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C50u, 0x2ACD3Cu, 0x2ACD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD44u;
label_2acd44:
    // 0x2acd44: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acd44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acd48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2acd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd4c: 0xc04e710  jal         func_139C40
    ctx->pc = 0x2ACD4Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD54u);
    ctx->pc = 0x2ACD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD4Cu;
    // 0x2acd50: 0x24846710  addiu       $a0, $a0, 0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C40u, 0x2ACD4Cu, 0x2ACD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD54u;
label_2acd54:
    // 0x2acd54: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2acd54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2acd58: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2acd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2acd5c: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x2acd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x2acd60: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2acd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2acd64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2acd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd68: 0x27a8006c  addiu       $t0, $sp, 0x6C
    ctx->pc = 0x2acd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2acd6c: 0xc04e954  jal         func_13A550
    ctx->pc = 0x2ACD6Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD74u);
    ctx->pc = 0x2ACD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD6Cu;
    // 0x2acd70: 0xafb0006c  sw          $s0, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A550u, 0x2ACD6Cu, 0x2ACD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD74u;
label_2acd74:
    // 0x2acd74: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ACD74u;
    {
        const bool branch_taken_0x2acd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2acd74) {
            ctx->pc = 0x2ACD90u;
            goto label_2acd90;
        }
    }
    ctx->pc = 0x2ACD7Cu;
    // 0x2acd7c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x2acd7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acd80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acd84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ACD84u;
    {
        const bool branch_taken_0x2acd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD84u;
        // 0x2acd88: 0x7e430000  sq          $v1, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acd84) {
            ctx->pc = 0x2ACD98u;
            goto label_2acd98;
        }
    }
    ctx->pc = 0x2ACD8Cu;
    // 0x2acd8c: 0x0  nop
    ctx->pc = 0x2acd8cu;
    // NOP
label_2acd90:
    // 0x2acd90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2acd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd94: 0x0  nop
    ctx->pc = 0x2acd94u;
    // NOP
label_2acd98:
    // 0x2acd98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2acd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acd9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acd9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2acda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acda4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2acda4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDA8u;
        // 0x2acdac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACDB0u;
}
