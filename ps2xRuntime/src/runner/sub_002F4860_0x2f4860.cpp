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

// Function: sub_002F4860
// Address: 0x2f4860 - 0x2f48fc
void sub_002F4860_0x2f4860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4860_0x2f4860");
#endif

    switch (ctx->pc) {
        case 0x2f48c8u: goto label_2f48c8;
        case 0x2f48dcu: goto label_2f48dc;
        default: break;
    }

    ctx->pc = 0x2f4860u;

    // 0x2f4860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f4860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f4864: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x2f4864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x2f4868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f4868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f486c: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2f486cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2f4870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4874: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f4874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f4878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f487c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2f487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f4880: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2f4880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4884: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4884u;
    {
        const bool branch_taken_0x2f4884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4884u;
        // 0x2f4888: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4884) {
            ctx->pc = 0x2F4898u;
            goto label_2f4898;
        }
    }
    ctx->pc = 0x2F488Cu;
    // 0x2f488c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F488Cu;
    {
        const bool branch_taken_0x2f488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F488Cu;
        // 0x2f4890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f488c) {
            ctx->pc = 0x2F48E8u;
            goto label_2f48e8;
        }
    }
    ctx->pc = 0x2F4894u;
    // 0x2f4894: 0x0  nop
    ctx->pc = 0x2f4894u;
    // NOP
label_2f4898:
    // 0x2f4898: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f489c: 0x10e20004  beq         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F489Cu;
    {
        const bool branch_taken_0x2f489c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F489Cu;
        // 0x2f48a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f489c) {
            ctx->pc = 0x2F48B0u;
            goto label_2f48b0;
        }
    }
    ctx->pc = 0x2F48A4u;
    // 0x2f48a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2F48A4u;
    {
        const bool branch_taken_0x2f48a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f48a4) {
            ctx->pc = 0x2F48E8u;
            goto label_2f48e8;
        }
    }
    ctx->pc = 0x2F48ACu;
    // 0x2f48ac: 0x0  nop
    ctx->pc = 0x2f48acu;
    // NOP
label_2f48b0:
    // 0x2f48b0: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F48B0u;
    {
        const bool branch_taken_0x2f48b0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2F48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48B0u;
        // 0x2f48b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48b0) {
            ctx->pc = 0x2F48C0u;
            goto label_2f48c0;
        }
    }
    ctx->pc = 0x2F48B8u;
    // 0x2f48b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F48B8u;
    {
        const bool branch_taken_0x2f48b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f48b8) {
            ctx->pc = 0x2F48E8u;
            goto label_2f48e8;
        }
    }
    ctx->pc = 0x2F48C0u;
label_2f48c0:
    // 0x2f48c0: 0xc0bce70  jal         func_2F39C0
    ctx->pc = 0x2F48C0u;
    SET_GPR_U32(ctx, 31, 0x2F48C8u);
    ctx->pc = 0x2F48C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48C0u;
    // 0x2f48c4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39C0u, 0x2F48C0u, 0x2F48C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48C8u;
label_2f48c8:
    // 0x2f48c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F48C8u;
    {
        const bool branch_taken_0x2f48c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48C8u;
        // 0x2f48cc: 0x103023  negu        $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48c8) {
            ctx->pc = 0x2F48E4u;
            goto label_2f48e4;
        }
    }
    ctx->pc = 0x2F48D0u;
    // 0x2f48d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f48d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48d4: 0xc0bcfbc  jal         func_2F3EF0
    ctx->pc = 0x2F48D4u;
    SET_GPR_U32(ctx, 31, 0x2F48DCu);
    ctx->pc = 0x2F48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48D4u;
    // 0x2f48d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3EF0u, 0x2F48D4u, 0x2F48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48DCu;
label_2f48dc:
    // 0x2f48dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F48DCu;
    {
        const bool branch_taken_0x2f48dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f48dc) {
            ctx->pc = 0x2F48E8u;
            goto label_2f48e8;
        }
    }
    ctx->pc = 0x2F48E4u;
label_2f48e4:
    // 0x2f48e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f48e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f48e8:
    // 0x2f48e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f48e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f48ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f48ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f48f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f48f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f48f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F48F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48F4u;
        // 0x2f48f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F48F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F48FCu;
}
