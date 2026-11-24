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

// Function: sub_00220F18
// Address: 0x220f18 - 0x220f94
void sub_00220F18_0x220f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220F18_0x220f18");
#endif

    switch (ctx->pc) {
        case 0x220f3cu: goto label_220f3c;
        case 0x220f68u: goto label_220f68;
        default: break;
    }

    ctx->pc = 0x220f18u;

    // 0x220f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x220f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x220f1c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x220f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x220f20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x220f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f28: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x220f2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x220f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x220f30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x220f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x220f34: 0xc08824e  jal         func_220938
    ctx->pc = 0x220F34u;
    SET_GPR_U32(ctx, 31, 0x220F3Cu);
    ctx->pc = 0x220F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220F34u;
    // 0x220f38: 0x26300d30  addiu       $s0, $s1, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220938u, 0x220F34u, 0x220F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F3Cu;
label_220f3c:
    // 0x220f3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f44: 0x8e03028c  lw          $v1, 0x28C($s0)
    ctx->pc = 0x220f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x220f48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220F48u;
    {
        const bool branch_taken_0x220f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x220F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F48u;
        // 0x220f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f48) {
            ctx->pc = 0x220F60u;
            goto label_220f60;
        }
    }
    ctx->pc = 0x220F50u;
    // 0x220f50: 0x8e030290  lw          $v1, 0x290($s0)
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x220f54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x220f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x220f58: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220F58u;
    {
        const bool branch_taken_0x220f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x220F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F58u;
        // 0x220f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f58) {
            ctx->pc = 0x220F7Cu;
            goto label_220f7c;
        }
    }
    ctx->pc = 0x220F60u;
label_220f60:
    // 0x220f60: 0xc088118  jal         func_220460
    ctx->pc = 0x220F60u;
    SET_GPR_U32(ctx, 31, 0x220F68u);
    ctx->pc = 0x220460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220460u, 0x220F60u, 0x220F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F68u;
label_220f68:
    // 0x220f68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f6c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x220f70: 0xae02028c  sw          $v0, 0x28C($s0)
    ctx->pc = 0x220f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 2));
    // 0x220f74: 0xae030290  sw          $v1, 0x290($s0)
    ctx->pc = 0x220f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 3));
    // 0x220f78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220f7c:
    // 0x220f7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x220f7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220f80: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x220f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x220f84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x220f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220f88: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x220f88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x220f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x220F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F8Cu;
        // 0x220f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220F94u;
}
