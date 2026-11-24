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

// Function: sub_003324A0
// Address: 0x3324a0 - 0x332568
void sub_003324A0_0x3324a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003324A0_0x3324a0");
#endif

    switch (ctx->pc) {
        case 0x3324c8u: goto label_3324c8;
        case 0x3324f4u: goto label_3324f4;
        case 0x332508u: goto label_332508;
        case 0x332520u: goto label_332520;
        case 0x332540u: goto label_332540;
        default: break;
    }

    ctx->pc = 0x3324a0u;

    // 0x3324a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3324a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3324a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3324a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3324a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3324a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3324ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3324acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3324b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3324b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3324b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3324b8: 0x3c11004f  lui         $s1, 0x4F
    ctx->pc = 0x3324b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)79 << 16));
    // 0x3324bc: 0x2631a1e0  addiu       $s1, $s1, -0x5E20
    ctx->pc = 0x3324bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294943200));
    // 0x3324c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3324c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324c4: 0x0  nop
    ctx->pc = 0x3324c4u;
    // NOP
label_3324c8:
    // 0x3324c8: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x3324c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3324cc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3324ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3324d0: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3324D0u;
    {
        const bool branch_taken_0x3324d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3324D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324D0u;
        // 0x3324d4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324d0) {
            ctx->pc = 0x332540u;
            goto label_332540;
        }
    }
    ctx->pc = 0x3324D8u;
    // 0x3324d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3324d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3324dc: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x3324dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x3324e0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3324E0u;
    {
        const bool branch_taken_0x3324e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3324E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3324E0u;
        // 0x3324e4: 0x26020500  addiu       $v0, $s0, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3324e0) {
            ctx->pc = 0x332500u;
            goto label_332500;
        }
    }
    ctx->pc = 0x3324E8u;
    // 0x3324e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3324e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3324ec: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x3324ECu;
    SET_GPR_U32(ctx, 31, 0x3324F4u);
    ctx->pc = 0x3324F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3324ECu;
    // 0x3324f0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x3324ECu, 0x3324F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3324F4u;
label_3324f4:
    // 0x3324f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3324F4u;
    {
        const bool branch_taken_0x3324f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3324f4) {
            ctx->pc = 0x332540u;
            goto label_332540;
        }
    }
    ctx->pc = 0x3324FCu;
    // 0x3324fc: 0x0  nop
    ctx->pc = 0x3324fcu;
    // NOP
label_332500:
    // 0x332500: 0xc0f8cb8  jal         func_3E32E0
    ctx->pc = 0x332500u;
    SET_GPR_U32(ctx, 31, 0x332508u);
    ctx->pc = 0x332504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332500u;
    // 0x332504: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E32E0u, 0x332500u, 0x332508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332508u;
label_332508:
    // 0x332508: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x332508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33250c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33250Cu;
    {
        const bool branch_taken_0x33250c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33250c) {
            ctx->pc = 0x332540u;
            goto label_332540;
        }
    }
    ctx->pc = 0x332514u;
    // 0x332514: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x332514u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x332518: 0xc0bd294  jal         func_2F4A50
    ctx->pc = 0x332518u;
    SET_GPR_U32(ctx, 31, 0x332520u);
    ctx->pc = 0x33251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332518u;
    // 0x33251c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4A50u, 0x332518u, 0x332520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332520u;
label_332520:
    // 0x332520: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x332520u;
    {
        const bool branch_taken_0x332520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x332520) {
            ctx->pc = 0x332540u;
            goto label_332540;
        }
    }
    ctx->pc = 0x332528u;
    // 0x332528: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x332528u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33252c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33252cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x332530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x332534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332538: 0xc0bce7c  jal         func_2F39F0
    ctx->pc = 0x332538u;
    SET_GPR_U32(ctx, 31, 0x332540u);
    ctx->pc = 0x33253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332538u;
    // 0x33253c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F39F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F39F0u, 0x332538u, 0x332540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332540u;
label_332540:
    // 0x332540: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x332540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x332544: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x332544u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x332548: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x332548u;
    {
        const bool branch_taken_0x332548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332548u;
        // 0x33254c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332548) {
            ctx->pc = 0x3324C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3324c8;
        }
    }
    ctx->pc = 0x332550u;
    // 0x332550: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x332550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x332554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332558: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x332558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33255c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33255cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332560: 0x3e00008  jr          $ra
    ctx->pc = 0x332560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332560u;
        // 0x332564: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332568u;
}
