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

// Function: sub_00363760
// Address: 0x363760 - 0x3637c4
void sub_00363760_0x363760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363760_0x363760");
#endif

    switch (ctx->pc) {
        case 0x363788u: goto label_363788;
        default: break;
    }

    ctx->pc = 0x363760u;

    // 0x363760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363764: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x363764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x363768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36376c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36376Cu;
    {
        const bool branch_taken_0x36376c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x363770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36376Cu;
        // 0x363770: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36376c) {
            ctx->pc = 0x363780u;
            goto label_363780;
        }
    }
    ctx->pc = 0x363774u;
    // 0x363774: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x363774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x363778: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x363778u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x36377c: 0x0  nop
    ctx->pc = 0x36377cu;
    // NOP
label_363780:
    // 0x363780: 0xc0d8cac  jal         func_3632B0
    ctx->pc = 0x363780u;
    SET_GPR_U32(ctx, 31, 0x363788u);
    ctx->pc = 0x3632B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3632B0u, 0x363780u, 0x363788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363788u;
label_363788:
    // 0x363788: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x363788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x36378c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36378cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x363790: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x363790u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x363794: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x363794u;
    {
        const bool branch_taken_0x363794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x363798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363794u;
        // 0x363798: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363794) {
            ctx->pc = 0x3637B8u;
            goto label_3637b8;
        }
    }
    ctx->pc = 0x36379Cu;
    // 0x36379c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3637a0: 0x2484c178  addiu       $a0, $a0, -0x3E88
    ctx->pc = 0x3637a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951288));
    // 0x3637a4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3637a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3637a8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x3637a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3637ac: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3637ACu;
    {
        const bool branch_taken_0x3637ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3637B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637ACu;
        // 0x3637b0: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3637ac) {
            ctx->pc = 0x3637B8u;
            goto label_3637b8;
        }
    }
    ctx->pc = 0x3637B4u;
    // 0x3637b4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3637b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_3637b8:
    // 0x3637b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3637b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3637bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3637BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3637C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3637BCu;
        // 0x3637c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3637BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3637C4u;
}
