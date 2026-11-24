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

// Function: sub_00350A90
// Address: 0x350a90 - 0x350af4
void sub_00350A90_0x350a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350A90_0x350a90");
#endif

    switch (ctx->pc) {
        case 0x350ae4u: goto label_350ae4;
        default: break;
    }

    ctx->pc = 0x350a90u;

    // 0x350a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x350a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x350a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x350a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x350a98: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x350a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x350a9c: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x350A9Cu;
    {
        const bool branch_taken_0x350a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x350a9c) {
            ctx->pc = 0x350AE8u;
            goto label_350ae8;
        }
    }
    ctx->pc = 0x350AA4u;
    // 0x350aa4: 0xac85003c  sw          $a1, 0x3C($a0)
    ctx->pc = 0x350aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 5));
    // 0x350aa8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x350aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x350aac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x350AACu;
    {
        const bool branch_taken_0x350aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x350AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AACu;
        // 0x350ab0: 0x2466eae6  addiu       $a2, $v1, -0x151A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961894));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350aac) {
            ctx->pc = 0x350AE8u;
            goto label_350ae8;
        }
    }
    ctx->pc = 0x350AB4u;
    // 0x350ab4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x350ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x350ab8: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x350ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x350abc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x350abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x350ac0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x350ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x350ac4: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x350ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x350ac8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x350ac8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x350accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ad0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x350ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x350ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x350ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x350ad8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x350ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x350adc: 0xc0cea1c  jal         func_33A870
    ctx->pc = 0x350ADCu;
    SET_GPR_U32(ctx, 31, 0x350AE4u);
    ctx->pc = 0x350AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350ADCu;
    // 0x350ae0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A870u, 0x350ADCu, 0x350AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350AE4u;
label_350ae4:
    // 0x350ae4: 0x0  nop
    ctx->pc = 0x350ae4u;
    // NOP
label_350ae8:
    // 0x350ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x350ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350aec: 0x3e00008  jr          $ra
    ctx->pc = 0x350AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350AECu;
        // 0x350af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350AF4u;
}
