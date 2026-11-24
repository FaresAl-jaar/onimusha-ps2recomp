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

// Function: sub_0034EFF0
// Address: 0x34eff0 - 0x34f0d0
void sub_0034EFF0_0x34eff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034EFF0_0x34eff0");
#endif

    switch (ctx->pc) {
        case 0x34f00cu: goto label_34f00c;
        case 0x34f014u: goto label_34f014;
        default: break;
    }

    ctx->pc = 0x34eff0u;

    // 0x34eff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34eff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34eff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34eff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34eff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34eff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34effc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x34effcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34f000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34f004: 0xc0d343c  jal         func_34D0F0
    ctx->pc = 0x34F004u;
    SET_GPR_U32(ctx, 31, 0x34F00Cu);
    ctx->pc = 0x34F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F004u;
    // 0x34f008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D0F0u, 0x34F004u, 0x34F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F00Cu;
label_34f00c:
    // 0x34f00c: 0xc0d8d1c  jal         func_363470
    ctx->pc = 0x34F00Cu;
    SET_GPR_U32(ctx, 31, 0x34F014u);
    ctx->pc = 0x34F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F00Cu;
    // 0x34f010: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363470u, 0x34F00Cu, 0x34F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F014u;
label_34f014:
    // 0x34f014: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x34f014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x34f018: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x34f018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34f01c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x34f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x34f020: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F020u;
    {
        const bool branch_taken_0x34f020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f020) {
            ctx->pc = 0x34F030u;
            goto label_34f030;
        }
    }
    ctx->pc = 0x34F028u;
    // 0x34f028: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x34F028u;
    {
        const bool branch_taken_0x34f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f028) {
            ctx->pc = 0x34F058u;
            goto label_34f058;
        }
    }
    ctx->pc = 0x34F030u;
label_34f030:
    // 0x34f030: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x34f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x34f034: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x34f034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x34f038: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x34f038u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x34f03c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F03Cu;
    {
        const bool branch_taken_0x34f03c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F03Cu;
        // 0x34f040: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f03c) {
            ctx->pc = 0x34F058u;
            goto label_34f058;
        }
    }
    ctx->pc = 0x34F044u;
    // 0x34f044: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x34f044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34f048: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34F048u;
    {
        const bool branch_taken_0x34f048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34f048) {
            ctx->pc = 0x34F058u;
            goto label_34f058;
        }
    }
    ctx->pc = 0x34F050u;
    // 0x34f050: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x34f050u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x34f054: 0x0  nop
    ctx->pc = 0x34f054u;
    // NOP
label_34f058:
    // 0x34f058: 0x28610018  slti        $at, $v1, 0x18
    ctx->pc = 0x34f058u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x34f05c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F05Cu;
    {
        const bool branch_taken_0x34f05c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F05Cu;
        // 0x34f060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f05c) {
            ctx->pc = 0x34F070u;
            goto label_34f070;
        }
    }
    ctx->pc = 0x34F064u;
    // 0x34f064: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x34F064u;
    {
        const bool branch_taken_0x34f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f064) {
            ctx->pc = 0x34F090u;
            goto label_34f090;
        }
    }
    ctx->pc = 0x34F06Cu;
    // 0x34f06c: 0x0  nop
    ctx->pc = 0x34f06cu;
    // NOP
label_34f070:
    // 0x34f070: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x34f070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x34f074: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x34F074u;
    {
        const bool branch_taken_0x34f074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F074u;
        // 0x34f078: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f074) {
            ctx->pc = 0x34F088u;
            goto label_34f088;
        }
    }
    ctx->pc = 0x34F07Cu;
    // 0x34f07c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34F07Cu;
    {
        const bool branch_taken_0x34f07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f07c) {
            ctx->pc = 0x34F090u;
            goto label_34f090;
        }
    }
    ctx->pc = 0x34F084u;
    // 0x34f084: 0x0  nop
    ctx->pc = 0x34f084u;
    // NOP
label_34f088:
    // 0x34f088: 0x2462ffe8  addiu       $v0, $v1, -0x18
    ctx->pc = 0x34f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x34f08c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34f090:
    // 0x34f090: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34f090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34f094: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x34f094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34f098: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x34f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x34f09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f0a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34f0a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x34f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34f0a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34f0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f0ac: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x34f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x34f0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f0b4: 0x246380e0  addiu       $v1, $v1, -0x7F20
    ctx->pc = 0x34f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934752));
    // 0x34f0b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f0b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f0bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34f0c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34f0c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x34F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F0C8u;
        // 0x34f0cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F0D0u;
}
