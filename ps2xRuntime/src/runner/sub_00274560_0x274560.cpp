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

// Function: sub_00274560
// Address: 0x274560 - 0x27466c
void sub_00274560_0x274560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274560_0x274560");
#endif

    switch (ctx->pc) {
        case 0x2745b4u: goto label_2745b4;
        case 0x2745e4u: goto label_2745e4;
        default: break;
    }

    ctx->pc = 0x274560u;

    // 0x274560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274564: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x274564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x274568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x274568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27456c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x274574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274578: 0x90860002  lbu         $a2, 0x2($a0)
    ctx->pc = 0x274578u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x27457c: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x27457Cu;
    {
        const bool branch_taken_0x27457c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x274580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27457Cu;
        // 0x274580: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27457c) {
            ctx->pc = 0x2745C0u;
            goto label_2745c0;
        }
    }
    ctx->pc = 0x274584u;
    // 0x274584: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x274584u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x274588: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27458c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27458Cu;
    {
        const bool branch_taken_0x27458c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27458c) {
            ctx->pc = 0x2745C0u;
            goto label_2745c0;
        }
    }
    ctx->pc = 0x274594u;
    // 0x274594: 0x922b0005  lbu         $t3, 0x5($s1)
    ctx->pc = 0x274594u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x274598: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x274598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x27459c: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x27459cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2745a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2745a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2745a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745a8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2745a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2745ac: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2745ACu;
    SET_GPR_U32(ctx, 31, 0x2745B4u);
    ctx->pc = 0x2745B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745ACu;
    // 0x2745b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2745ACu, 0x2745B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745B4u;
label_2745b4:
    // 0x2745b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2745B4u;
    {
        const bool branch_taken_0x2745b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745b4) {
            ctx->pc = 0x2745E8u;
            goto label_2745e8;
        }
    }
    ctx->pc = 0x2745BCu;
    // 0x2745bc: 0x0  nop
    ctx->pc = 0x2745bcu;
    // NOP
label_2745c0:
    // 0x2745c0: 0x92250001  lbu         $a1, 0x1($s1)
    ctx->pc = 0x2745c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2745c4: 0x92270003  lbu         $a3, 0x3($s1)
    ctx->pc = 0x2745c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2745c8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2745c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2745cc: 0x922b0005  lbu         $t3, 0x5($s1)
    ctx->pc = 0x2745ccu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2745d0: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2745d4: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2745d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2745d8: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2745d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2745dc: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2745DCu;
    SET_GPR_U32(ctx, 31, 0x2745E4u);
    ctx->pc = 0x2745E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2745DCu;
    // 0x2745e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2745DCu, 0x2745E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2745E4u;
label_2745e4:
    // 0x2745e4: 0x0  nop
    ctx->pc = 0x2745e4u;
    // NOP
label_2745e8:
    // 0x2745e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2745E8u;
    {
        const bool branch_taken_0x2745e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2745e8) {
            ctx->pc = 0x274658u;
            goto label_274658;
        }
    }
    ctx->pc = 0x2745F0u;
    // 0x2745f0: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x2745f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2745f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2745f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2745f8: 0xa0440032  sb          $a0, 0x32($v0)
    ctx->pc = 0x2745f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 50), (uint8_t)GPR_U32(ctx, 4));
    // 0x2745fc: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2745fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274600: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x274600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x274604: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x274604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274608: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x274608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x27460c: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x27460cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274610: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x274610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x274614: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x274614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x274618: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x274618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x27461c: 0xa44300c2  sh          $v1, 0xC2($v0)
    ctx->pc = 0x27461cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x274620: 0x96230006  lhu         $v1, 0x6($s1)
    ctx->pc = 0x274620u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x274624: 0xa4432acc  sh          $v1, 0x2ACC($v0)
    ctx->pc = 0x274624u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10956), (uint16_t)GPR_U32(ctx, 3));
    // 0x274628: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x274628u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27462c: 0xa4432ace  sh          $v1, 0x2ACE($v0)
    ctx->pc = 0x27462cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10958), (uint16_t)GPR_U32(ctx, 3));
    // 0x274630: 0x9623000a  lhu         $v1, 0xA($s1)
    ctx->pc = 0x274630u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x274634: 0xa4432ad0  sh          $v1, 0x2AD0($v0)
    ctx->pc = 0x274634u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10960), (uint16_t)GPR_U32(ctx, 3));
    // 0x274638: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x274638u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27463c: 0xa4432ad2  sh          $v1, 0x2AD2($v0)
    ctx->pc = 0x27463cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10962), (uint16_t)GPR_U32(ctx, 3));
    // 0x274640: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x274640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x274644: 0xa4432ad4  sh          $v1, 0x2AD4($v0)
    ctx->pc = 0x274644u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10964), (uint16_t)GPR_U32(ctx, 3));
    // 0x274648: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x274648u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x27464c: 0xa4432ad6  sh          $v1, 0x2AD6($v0)
    ctx->pc = 0x27464cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10966), (uint16_t)GPR_U32(ctx, 3));
    // 0x274650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274654: 0xa4432ac4  sh          $v1, 0x2AC4($v0)
    ctx->pc = 0x274654u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10948), (uint16_t)GPR_U32(ctx, 3));
label_274658:
    // 0x274658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x274658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27465c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27465cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274664: 0x3e00008  jr          $ra
    ctx->pc = 0x274664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274664u;
        // 0x274668: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27466Cu;
}
