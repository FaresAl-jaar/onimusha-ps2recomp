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

// Function: sub_003994A0
// Address: 0x3994a0 - 0x399534
void sub_003994A0_0x3994a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003994A0_0x3994a0");
#endif

    switch (ctx->pc) {
        case 0x3994dcu: goto label_3994dc;
        case 0x3994fcu: goto label_3994fc;
        case 0x399518u: goto label_399518;
        case 0x399520u: goto label_399520;
        default: break;
    }

    ctx->pc = 0x3994a0u;

    // 0x3994a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3994a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3994a4: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x3994a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x3994a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3994a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3994ac: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3994acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3994b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3994b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3994b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3994b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3994b8: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x3994b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x3994bc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3994c0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3994c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3994c4: 0x24700380  addiu       $s0, $v1, 0x380
    ctx->pc = 0x3994c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3994c8: 0x8c830788  lw          $v1, 0x788($a0)
    ctx->pc = 0x3994c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
    // 0x3994cc: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3994CCu;
    {
        const bool branch_taken_0x3994cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x3994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3994CCu;
        // 0x3994d0: 0x24910780  addiu       $s1, $a0, 0x780 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3994cc) {
            ctx->pc = 0x3994E0u;
            goto label_3994e0;
        }
    }
    ctx->pc = 0x3994D4u;
    // 0x3994d4: 0xc0f0444  jal         func_3C1110
    ctx->pc = 0x3994D4u;
    SET_GPR_U32(ctx, 31, 0x3994DCu);
    ctx->pc = 0x3994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994D4u;
    // 0x3994d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1110u, 0x3994D4u, 0x3994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994DCu;
label_3994dc:
    // 0x3994dc: 0x0  nop
    ctx->pc = 0x3994dcu;
    // NOP
label_3994e0:
    // 0x3994e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3994e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3994e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3994E4u;
    {
        const bool branch_taken_0x3994e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3994e4) {
            ctx->pc = 0x399500u;
            goto label_399500;
        }
    }
    ctx->pc = 0x3994ECu;
    // 0x3994ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3994ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3994f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3994f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3994f4: 0xc0f03fc  jal         func_3C0FF0
    ctx->pc = 0x3994F4u;
    SET_GPR_U32(ctx, 31, 0x3994FCu);
    ctx->pc = 0x3994F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3994F4u;
    // 0x3994f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0FF0u, 0x3994F4u, 0x3994FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3994FCu;
label_3994fc:
    // 0x3994fc: 0x0  nop
    ctx->pc = 0x3994fcu;
    // NOP
label_399500:
    // 0x399500: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x399500u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x399504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x399504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399508: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x399508u;
    {
        const bool branch_taken_0x399508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399508u;
        // 0x39950c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399508) {
            ctx->pc = 0x399520u;
            goto label_399520;
        }
    }
    ctx->pc = 0x399510u;
    // 0x399510: 0xc0f040c  jal         func_3C1030
    ctx->pc = 0x399510u;
    SET_GPR_U32(ctx, 31, 0x399518u);
    ctx->pc = 0x399514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399510u;
    // 0x399514: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1030u, 0x399510u, 0x399518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399518u;
label_399518:
    // 0x399518: 0xc0e64fc  jal         func_3993F0
    ctx->pc = 0x399518u;
    SET_GPR_U32(ctx, 31, 0x399520u);
    ctx->pc = 0x39951Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399518u;
    // 0x39951c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3993F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3993F0u, 0x399518u, 0x399520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399520u;
label_399520:
    // 0x399520: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x399520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399524: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x399524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399528: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x399528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39952c: 0x3e00008  jr          $ra
    ctx->pc = 0x39952Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39952Cu;
        // 0x399530: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39952Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399534u;
}
