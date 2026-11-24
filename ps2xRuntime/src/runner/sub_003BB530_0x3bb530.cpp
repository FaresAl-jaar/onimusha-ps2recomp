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

// Function: sub_003BB530
// Address: 0x3bb530 - 0x3bb670
void sub_003BB530_0x3bb530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB530_0x3bb530");
#endif

    switch (ctx->pc) {
        case 0x3bb580u: goto label_3bb580;
        case 0x3bb628u: goto label_3bb628;
        default: break;
    }

    ctx->pc = 0x3bb530u;

    // 0x3bb530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb534: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bb534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bb540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb544: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x3bb544u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb548: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3BB548u;
    {
        const bool branch_taken_0x3bb548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3BB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB548u;
        // 0x3bb54c: 0x8c840860  lw          $a0, 0x860($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb548) {
            ctx->pc = 0x3BB5E8u;
            goto label_3bb5e8;
        }
    }
    ctx->pc = 0x3BB550u;
    // 0x3bb550: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB550u;
    {
        const bool branch_taken_0x3bb550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb550) {
            ctx->pc = 0x3BB560u;
            goto label_3bb560;
        }
    }
    ctx->pc = 0x3BB558u;
    // 0x3bb558: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3BB558u;
    {
        const bool branch_taken_0x3bb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb558) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB560u;
label_3bb560:
    // 0x3bb560: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB560u;
    {
        const bool branch_taken_0x3bb560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb560) {
            ctx->pc = 0x3BB580u;
            goto label_3bb580;
        }
    }
    ctx->pc = 0x3BB568u;
    // 0x3bb568: 0x90830506  lbu         $v1, 0x506($a0)
    ctx->pc = 0x3bb568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1286)));
    // 0x3bb56c: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x3bb56cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3bb570: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB570u;
    {
        const bool branch_taken_0x3bb570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bb570) {
            ctx->pc = 0x3BB580u;
            goto label_3bb580;
        }
    }
    ctx->pc = 0x3BB578u;
    // 0x3bb578: 0xc0f1604  jal         func_3C5810
    ctx->pc = 0x3BB578u;
    SET_GPR_U32(ctx, 31, 0x3BB580u);
    ctx->pc = 0x3C5810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5810u, 0x3BB578u, 0x3BB580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB580u;
label_3bb580:
    // 0x3bb580: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3bb580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb584: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3bb584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb588: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3bb588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3bb58c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3bb58cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bb590: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3bb590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3bb594: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x3bb594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x3bb598: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb59c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3bb59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3bb5a0: 0x92042b4b  lbu         $a0, 0x2B4B($s0)
    ctx->pc = 0x3bb5a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11083)));
    // 0x3bb5a4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3bb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3bb5a8: 0x2463e0e0  addiu       $v1, $v1, -0x1F20
    ctx->pc = 0x3bb5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959328));
    // 0x3bb5ac: 0x308400bf  andi        $a0, $a0, 0xBF
    ctx->pc = 0x3bb5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)191);
    // 0x3bb5b0: 0xa2042b4b  sb          $a0, 0x2B4B($s0)
    ctx->pc = 0x3bb5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11083), (uint8_t)GPR_U32(ctx, 4));
    // 0x3bb5b4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3bb5b4u;
    { uint32_t bits = FAST_READ32(0x65E0E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb5b8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3bb5b8u;
    { uint32_t bits = FAST_READ32(0x65E0E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb5bc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3bb5bcu;
    { uint32_t bits = FAST_READ32(0x65E0E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb5c0: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3bb5c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3bb5c4: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3bb5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3bb5c8: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3bb5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3bb5cc: 0x92032ab0  lbu         $v1, 0x2AB0($s0)
    ctx->pc = 0x3bb5ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x3bb5d0: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb5d4: 0xa2032ab0  sb          $v1, 0x2AB0($s0)
    ctx->pc = 0x3bb5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb5d8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x3bb5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb5dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3bb5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3bb5e0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3BB5E0u;
    {
        const bool branch_taken_0x3bb5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5E0u;
        // 0x3bb5e4: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5e0) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB5E8u;
label_3bb5e8:
    // 0x3bb5e8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3bb5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3bb5ec: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3BB5ECu;
    {
        const bool branch_taken_0x3bb5ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb5ec) {
            ctx->pc = 0x3BB620u;
            goto label_3bb620;
        }
    }
    ctx->pc = 0x3BB5F4u;
    // 0x3bb5f4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3bb5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3bb5f8: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3bb5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3bb5fc: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x3bb5fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x3bb600: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3BB600u;
    {
        const bool branch_taken_0x3bb600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb600) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB608u;
    // 0x3bb608: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BB608u;
    {
        const bool branch_taken_0x3bb608 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x3bb608) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB610u;
    // 0x3bb610: 0x92032ab0  lbu         $v1, 0x2AB0($s0)
    ctx->pc = 0x3bb610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x3bb614: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3bb614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3bb618: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3BB618u;
    {
        const bool branch_taken_0x3bb618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB618u;
        // 0x3bb61c: 0xa2032ab0  sb          $v1, 0x2AB0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb618) {
            ctx->pc = 0x3BB660u;
            goto label_3bb660;
        }
    }
    ctx->pc = 0x3BB620u;
label_3bb620:
    // 0x3bb620: 0xc0eed9c  jal         func_3BB670
    ctx->pc = 0x3BB620u;
    SET_GPR_U32(ctx, 31, 0x3BB628u);
    ctx->pc = 0x3BB624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB620u;
    // 0x3bb624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB670u, 0x3BB620u, 0x3BB628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB628u;
label_3bb628:
    // 0x3bb628: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3bb628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3bb62c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bb62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb630: 0x2484c250  addiu       $a0, $a0, -0x3DB0
    ctx->pc = 0x3bb630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951504));
    // 0x3bb634: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x3bb634u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3bb638: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3bb638u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb63c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3bb63cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb640: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3bb640u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3bb644: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3bb644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3bb648: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3bb648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3bb64c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x3bb64cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3bb650: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3bb650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3bb654: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3bb654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3bb658: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3bb658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3bb65c: 0x0  nop
    ctx->pc = 0x3bb65cu;
    // NOP
label_3bb660:
    // 0x3bb660: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb664: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb664u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb668: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB668u;
        // 0x3bb66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB670u;
}
