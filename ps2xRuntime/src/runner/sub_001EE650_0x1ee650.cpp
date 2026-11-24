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

// Function: sub_001EE650
// Address: 0x1ee650 - 0x1ee6b8
void sub_001EE650_0x1ee650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EE650_0x1ee650");
#endif

    switch (ctx->pc) {
        case 0x1ee67cu: goto label_1ee67c;
        case 0x1ee69cu: goto label_1ee69c;
        default: break;
    }

    ctx->pc = 0x1ee650u;

    // 0x1ee650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee654: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ee654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ee658: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ee658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ee65c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ee65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ee660: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ee660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee664: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE664u;
    {
        const bool branch_taken_0x1ee664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE664u;
        // 0x1ee668: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee664) {
            ctx->pc = 0x1EE6A0u;
            goto label_1ee6a0;
        }
    }
    ctx->pc = 0x1EE66Cu;
    // 0x1ee66c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x1ee66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x1ee670: 0x24427350  addiu       $v0, $v0, 0x7350
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29520));
    // 0x1ee674: 0xc07ba14  jal         func_1EE850
    ctx->pc = 0x1EE674u;
    SET_GPR_U32(ctx, 31, 0x1EE67Cu);
    ctx->pc = 0x1EE678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE674u;
    // 0x1ee678: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE850u, 0x1EE674u, 0x1EE67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE67Cu;
label_1ee67c:
    // 0x1ee67c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1ee67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1ee680: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ee680u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ee684: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE684u;
    {
        const bool branch_taken_0x1ee684 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x1ee684) {
            ctx->pc = 0x1EE6A0u;
            goto label_1ee6a0;
        }
    }
    ctx->pc = 0x1EE68Cu;
    // 0x1ee68c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE68Cu;
    {
        const bool branch_taken_0x1ee68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE68Cu;
        // 0x1ee690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee68c) {
            ctx->pc = 0x1EE6A0u;
            goto label_1ee6a0;
        }
    }
    ctx->pc = 0x1EE694u;
    // 0x1ee694: 0xc0741a8  jal         func_1D06A0
    ctx->pc = 0x1EE694u;
    SET_GPR_U32(ctx, 31, 0x1EE69Cu);
    ctx->pc = 0x1D06A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D06A0u, 0x1EE694u, 0x1EE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE69Cu;
label_1ee69c:
    // 0x1ee69c: 0x0  nop
    ctx->pc = 0x1ee69cu;
    // NOP
label_1ee6a0:
    // 0x1ee6a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ee6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee6a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ee6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee6a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee6a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee6ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee6acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE6B0u;
        // 0x1ee6b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE6B8u;
}
