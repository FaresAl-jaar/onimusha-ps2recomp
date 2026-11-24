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

// Function: sub_002C86A0
// Address: 0x2c86a0 - 0x2c875c
void sub_002C86A0_0x2c86a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C86A0_0x2c86a0");
#endif

    switch (ctx->pc) {
        case 0x2c8710u: goto label_2c8710;
        case 0x2c8744u: goto label_2c8744;
        default: break;
    }

    ctx->pc = 0x2c86a0u;

    // 0x2c86a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c86a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c86a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c86a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c86a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c86a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c86ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c86acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c86b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c86b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c86b4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C86B4u;
    {
        const bool branch_taken_0x2c86b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86B4u;
        // 0x2c86b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86b4) {
            ctx->pc = 0x2C8748u;
            goto label_2c8748;
        }
    }
    ctx->pc = 0x2C86BCu;
    // 0x2c86bc: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c86bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c86c0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C86C0u;
    {
        const bool branch_taken_0x2c86c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c86c0) {
            ctx->pc = 0x2C8718u;
            goto label_2c8718;
        }
    }
    ctx->pc = 0x2C86C8u;
    // 0x2c86c8: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2C86C8u;
    {
        const bool branch_taken_0x2c86c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C86CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86C8u;
        // 0x2c86cc: 0xa220004f  sb          $zero, 0x4F($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86c8) {
            ctx->pc = 0x2C8708u;
            goto label_2c8708;
        }
    }
    ctx->pc = 0x2C86D0u;
    // 0x2c86d0: 0x92240037  lbu         $a0, 0x37($s1)
    ctx->pc = 0x2c86d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 55)));
    // 0x2c86d4: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c86d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c86d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c86dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c86e0: 0xa224004e  sb          $a0, 0x4E($s1)
    ctx->pc = 0x2c86e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c86e4: 0xa2260037  sb          $a2, 0x37($s1)
    ctx->pc = 0x2c86e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c86e8: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x2c86e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c86ec: 0xa223005f  sb          $v1, 0x5F($s1)
    ctx->pc = 0x2c86ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c86f0: 0xa6200080  sh          $zero, 0x80($s1)
    ctx->pc = 0x2c86f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c86f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c86f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c86f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c86fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C86FCu;
    {
        const bool branch_taken_0x2c86fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C86FCu;
        // 0x2c8700: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c86fc) {
            ctx->pc = 0x2C8728u;
            goto label_2c8728;
        }
    }
    ctx->pc = 0x2C8704u;
    // 0x2c8704: 0x0  nop
    ctx->pc = 0x2c8704u;
    // NOP
label_2c8708:
    // 0x2c8708: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C8708u;
    SET_GPR_U32(ctx, 31, 0x2C8710u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C8708u, 0x2C8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8710u;
label_2c8710:
    // 0x2c8710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8710u;
    {
        const bool branch_taken_0x2c8710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8710) {
            ctx->pc = 0x2C8720u;
            goto label_2c8720;
        }
    }
    ctx->pc = 0x2C8718u;
label_2c8718:
    // 0x2c8718: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c8718u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c871c: 0x0  nop
    ctx->pc = 0x2c871cu;
    // NOP
label_2c8720:
    // 0x2c8720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8724: 0x0  nop
    ctx->pc = 0x2c8724u;
    // NOP
label_2c8728:
    // 0x2c8728: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2c8728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x2c872c: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x2c872cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c8730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8738: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x2c8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x2c873c: 0xc0b1a24  jal         func_2C6890
    ctx->pc = 0x2C873Cu;
    SET_GPR_U32(ctx, 31, 0x2C8744u);
    ctx->pc = 0x2C8740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C873Cu;
    // 0x2c8740: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6890u, 0x2C873Cu, 0x2C8744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8744u;
label_2c8744:
    // 0x2c8744: 0x0  nop
    ctx->pc = 0x2c8744u;
    // NOP
label_2c8748:
    // 0x2c8748: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c8748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c874c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c874cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8754: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8754u;
        // 0x2c8758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C875Cu;
}
