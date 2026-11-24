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

// Function: sub_0037B9F0
// Address: 0x37b9f0 - 0x37bb18
void sub_0037B9F0_0x37b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B9F0_0x37b9f0");
#endif

    switch (ctx->pc) {
        case 0x37ba30u: goto label_37ba30;
        case 0x37ba40u: goto label_37ba40;
        case 0x37ba90u: goto label_37ba90;
        case 0x37bab8u: goto label_37bab8;
        case 0x37bac0u: goto label_37bac0;
        case 0x37bad0u: goto label_37bad0;
        case 0x37bae4u: goto label_37bae4;
        case 0x37bb00u: goto label_37bb00;
        default: break;
    }

    ctx->pc = 0x37b9f0u;

    // 0x37b9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b9f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37b9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37b9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37b9fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37ba00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37ba04: 0x948329de  lhu         $v1, 0x29DE($a0)
    ctx->pc = 0x37ba04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10718)));
    // 0x37ba08: 0x948229e0  lhu         $v0, 0x29E0($a0)
    ctx->pc = 0x37ba08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10720)));
    // 0x37ba0c: 0x601827  not         $v1, $v1
    ctx->pc = 0x37ba0cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x37ba10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x37ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37ba14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37ba14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ba18: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37ba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37ba1c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x37BA1Cu;
    {
        const bool branch_taken_0x37ba1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA1Cu;
        // 0x37ba20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba1c) {
            ctx->pc = 0x37BA68u;
            goto label_37ba68;
        }
    }
    ctx->pc = 0x37BA24u;
    // 0x37ba24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37ba24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba28: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x37ba28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba2c: 0x0  nop
    ctx->pc = 0x37ba2cu;
    // NOP
label_37ba30:
    // 0x37ba30: 0x8e252b20  lw          $a1, 0x2B20($s1)
    ctx->pc = 0x37ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    // 0x37ba34: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37ba34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37ba38: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37BA38u;
    SET_GPR_U32(ctx, 31, 0x37BA40u);
    ctx->pc = 0x37BA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA38u;
    // 0x37ba3c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37BA38u, 0x37BA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA40u;
label_37ba40:
    // 0x37ba40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BA40u;
    {
        const bool branch_taken_0x37ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ba40) {
            ctx->pc = 0x37BA58u;
            goto label_37ba58;
        }
    }
    ctx->pc = 0x37BA48u;
    // 0x37ba48: 0x944329de  lhu         $v1, 0x29DE($v0)
    ctx->pc = 0x37ba48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
    // 0x37ba4c: 0x3063fffb  andi        $v1, $v1, 0xFFFB
    ctx->pc = 0x37ba4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
    // 0x37ba50: 0xa44329de  sh          $v1, 0x29DE($v0)
    ctx->pc = 0x37ba50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10718), (uint16_t)GPR_U32(ctx, 3));
    // 0x37ba54: 0x0  nop
    ctx->pc = 0x37ba54u;
    // NOP
label_37ba58:
    // 0x37ba58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37ba58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37ba5c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x37ba5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x37ba60: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x37BA60u;
    {
        const bool branch_taken_0x37ba60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA60u;
        // 0x37ba64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba60) {
            ctx->pc = 0x37BA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ba30;
        }
    }
    ctx->pc = 0x37BA68u;
label_37ba68:
    // 0x37ba68: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37ba68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37ba6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37ba70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BA70u;
    {
        const bool branch_taken_0x37ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ba70) {
            ctx->pc = 0x37BA88u;
            goto label_37ba88;
        }
    }
    ctx->pc = 0x37BA78u;
    // 0x37ba78: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x37ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x37ba7c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x37ba7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x37ba80: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x37ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x37ba84: 0x0  nop
    ctx->pc = 0x37ba84u;
    // NOP
label_37ba88:
    // 0x37ba88: 0xc0a4e30  jal         func_2938C0
    ctx->pc = 0x37BA88u;
    SET_GPR_U32(ctx, 31, 0x37BA90u);
    ctx->pc = 0x37BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA88u;
    // 0x37ba8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938C0u, 0x37BA88u, 0x37BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA90u;
label_37ba90:
    // 0x37ba90: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x37ba94: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x37ba94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ba98: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37BA98u;
    {
        const bool branch_taken_0x37ba98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ba98) {
            ctx->pc = 0x37BAF8u;
            goto label_37baf8;
        }
    }
    ctx->pc = 0x37BAA0u;
    // 0x37baa0: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37baa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37baa4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x37baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x37baa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BAA8u;
    {
        const bool branch_taken_0x37baa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAA8u;
        // 0x37baac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37baa8) {
            ctx->pc = 0x37BAB8u;
            goto label_37bab8;
        }
    }
    ctx->pc = 0x37BAB0u;
    // 0x37bab0: 0xc0e02b4  jal         func_380AD0
    ctx->pc = 0x37BAB0u;
    SET_GPR_U32(ctx, 31, 0x37BAB8u);
    ctx->pc = 0x380AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AD0u, 0x37BAB0u, 0x37BAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAB8u;
label_37bab8:
    // 0x37bab8: 0xc0e005c  jal         func_380170
    ctx->pc = 0x37BAB8u;
    SET_GPR_U32(ctx, 31, 0x37BAC0u);
    ctx->pc = 0x37BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAB8u;
    // 0x37babc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380170u, 0x37BAB8u, 0x37BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAC0u;
label_37bac0:
    // 0x37bac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BAC0u;
    {
        const bool branch_taken_0x37bac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAC0u;
        // 0x37bac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bac0) {
            ctx->pc = 0x37BAD0u;
            goto label_37bad0;
        }
    }
    ctx->pc = 0x37BAC8u;
    // 0x37bac8: 0xc0e0070  jal         func_3801C0
    ctx->pc = 0x37BAC8u;
    SET_GPR_U32(ctx, 31, 0x37BAD0u);
    ctx->pc = 0x3801C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801C0u, 0x37BAC8u, 0x37BAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAD0u;
label_37bad0:
    // 0x37bad0: 0x92022b96  lbu         $v0, 0x2B96($s0)
    ctx->pc = 0x37bad0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11158)));
    // 0x37bad4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37BAD4u;
    {
        const bool branch_taken_0x37bad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAD4u;
        // 0x37bad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bad4) {
            ctx->pc = 0x37BAE8u;
            goto label_37bae8;
        }
    }
    ctx->pc = 0x37BADCu;
    // 0x37badc: 0xc0df834  jal         func_37E0D0
    ctx->pc = 0x37BADCu;
    SET_GPR_U32(ctx, 31, 0x37BAE4u);
    ctx->pc = 0x37BAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BADCu;
    // 0x37bae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E0D0u, 0x37BADCu, 0x37BAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAE4u;
label_37bae4:
    // 0x37bae4: 0x0  nop
    ctx->pc = 0x37bae4u;
    // NOP
label_37bae8:
    // 0x37bae8: 0x92022bbd  lbu         $v0, 0x2BBD($s0)
    ctx->pc = 0x37bae8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11197)));
    // 0x37baec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37BAECu;
    {
        const bool branch_taken_0x37baec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37baec) {
            ctx->pc = 0x37BAF8u;
            goto label_37baf8;
        }
    }
    ctx->pc = 0x37BAF4u;
    // 0x37baf4: 0xa2002bbd  sb          $zero, 0x2BBD($s0)
    ctx->pc = 0x37baf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11197), (uint8_t)GPR_U32(ctx, 0));
label_37baf8:
    // 0x37baf8: 0xc0deec8  jal         func_37BB20
    ctx->pc = 0x37BAF8u;
    SET_GPR_U32(ctx, 31, 0x37BB00u);
    ctx->pc = 0x37BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAF8u;
    // 0x37bafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BB20u, 0x37BAF8u, 0x37BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB00u;
label_37bb00:
    // 0x37bb00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37bb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bb04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37bb04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bb08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bb08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bb0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37bb0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bb10: 0x3e00008  jr          $ra
    ctx->pc = 0x37BB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB10u;
        // 0x37bb14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BB18u;
}
