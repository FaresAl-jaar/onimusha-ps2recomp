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

// Function: sub_00323090
// Address: 0x323090 - 0x3230e4
void sub_00323090_0x323090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323090_0x323090");
#endif

    switch (ctx->pc) {
        case 0x3230d4u: goto label_3230d4;
        default: break;
    }

    ctx->pc = 0x323090u;

    // 0x323090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x323094: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x323094u;
    {
        const bool branch_taken_0x323094 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x323098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323094u;
        // 0x323098: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323094) {
            ctx->pc = 0x3230A8u;
            goto label_3230a8;
        }
    }
    ctx->pc = 0x32309Cu;
    // 0x32309c: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x32309cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3230a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3230A0u;
    {
        const bool branch_taken_0x3230a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3230a0) {
            ctx->pc = 0x3230B0u;
            goto label_3230b0;
        }
    }
    ctx->pc = 0x3230A8u;
label_3230a8:
    // 0x3230a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3230A8u;
    {
        const bool branch_taken_0x3230a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3230a8) {
            ctx->pc = 0x3230D8u;
            goto label_3230d8;
        }
    }
    ctx->pc = 0x3230B0u;
label_3230b0:
    // 0x3230b0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3230b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3230b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3230b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3230b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x3230b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x3230bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3230bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3230c0: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x3230c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x3230c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3230c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3230c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3230c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3230cc: 0xc0cfbc8  jal         func_33EF20
    ctx->pc = 0x3230CCu;
    SET_GPR_U32(ctx, 31, 0x3230D4u);
    ctx->pc = 0x3230D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230CCu;
    // 0x3230d0: 0x412021  addu        $a0, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EF20u, 0x3230CCu, 0x3230D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3230D4u;
label_3230d4:
    // 0x3230d4: 0x0  nop
    ctx->pc = 0x3230d4u;
    // NOP
label_3230d8:
    // 0x3230d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3230d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3230dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3230DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3230E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230DCu;
        // 0x3230e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3230DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3230E4u;
}
