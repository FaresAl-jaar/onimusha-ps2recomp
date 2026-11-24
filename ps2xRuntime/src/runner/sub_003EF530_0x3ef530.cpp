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

// Function: sub_003EF530
// Address: 0x3ef530 - 0x3ef678
void sub_003EF530_0x3ef530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF530_0x3ef530");
#endif

    switch (ctx->pc) {
        case 0x3ef530u: goto label_3ef530;
        case 0x3ef534u: goto label_3ef534;
        case 0x3ef538u: goto label_3ef538;
        case 0x3ef53cu: goto label_3ef53c;
        case 0x3ef540u: goto label_3ef540;
        case 0x3ef544u: goto label_3ef544;
        case 0x3ef548u: goto label_3ef548;
        case 0x3ef54cu: goto label_3ef54c;
        case 0x3ef550u: goto label_3ef550;
        case 0x3ef554u: goto label_3ef554;
        case 0x3ef558u: goto label_3ef558;
        case 0x3ef55cu: goto label_3ef55c;
        case 0x3ef560u: goto label_3ef560;
        case 0x3ef564u: goto label_3ef564;
        case 0x3ef568u: goto label_3ef568;
        case 0x3ef56cu: goto label_3ef56c;
        case 0x3ef570u: goto label_3ef570;
        case 0x3ef574u: goto label_3ef574;
        case 0x3ef578u: goto label_3ef578;
        case 0x3ef57cu: goto label_3ef57c;
        case 0x3ef580u: goto label_3ef580;
        case 0x3ef584u: goto label_3ef584;
        case 0x3ef588u: goto label_3ef588;
        case 0x3ef58cu: goto label_3ef58c;
        case 0x3ef590u: goto label_3ef590;
        case 0x3ef594u: goto label_3ef594;
        case 0x3ef598u: goto label_3ef598;
        case 0x3ef59cu: goto label_3ef59c;
        case 0x3ef5a0u: goto label_3ef5a0;
        case 0x3ef5a4u: goto label_3ef5a4;
        case 0x3ef5a8u: goto label_3ef5a8;
        case 0x3ef5acu: goto label_3ef5ac;
        case 0x3ef5b0u: goto label_3ef5b0;
        case 0x3ef5b4u: goto label_3ef5b4;
        case 0x3ef5b8u: goto label_3ef5b8;
        case 0x3ef5bcu: goto label_3ef5bc;
        case 0x3ef5c0u: goto label_3ef5c0;
        case 0x3ef5c4u: goto label_3ef5c4;
        case 0x3ef5c8u: goto label_3ef5c8;
        case 0x3ef5ccu: goto label_3ef5cc;
        case 0x3ef5d0u: goto label_3ef5d0;
        case 0x3ef5d4u: goto label_3ef5d4;
        case 0x3ef5d8u: goto label_3ef5d8;
        case 0x3ef5dcu: goto label_3ef5dc;
        case 0x3ef5e0u: goto label_3ef5e0;
        case 0x3ef5e4u: goto label_3ef5e4;
        case 0x3ef5e8u: goto label_3ef5e8;
        case 0x3ef5ecu: goto label_3ef5ec;
        case 0x3ef5f0u: goto label_3ef5f0;
        case 0x3ef5f4u: goto label_3ef5f4;
        case 0x3ef5f8u: goto label_3ef5f8;
        case 0x3ef5fcu: goto label_3ef5fc;
        case 0x3ef600u: goto label_3ef600;
        case 0x3ef604u: goto label_3ef604;
        case 0x3ef608u: goto label_3ef608;
        case 0x3ef60cu: goto label_3ef60c;
        case 0x3ef610u: goto label_3ef610;
        case 0x3ef614u: goto label_3ef614;
        case 0x3ef618u: goto label_3ef618;
        case 0x3ef61cu: goto label_3ef61c;
        case 0x3ef620u: goto label_3ef620;
        case 0x3ef624u: goto label_3ef624;
        case 0x3ef628u: goto label_3ef628;
        case 0x3ef62cu: goto label_3ef62c;
        case 0x3ef630u: goto label_3ef630;
        case 0x3ef634u: goto label_3ef634;
        case 0x3ef638u: goto label_3ef638;
        case 0x3ef63cu: goto label_3ef63c;
        case 0x3ef640u: goto label_3ef640;
        case 0x3ef644u: goto label_3ef644;
        case 0x3ef648u: goto label_3ef648;
        case 0x3ef64cu: goto label_3ef64c;
        case 0x3ef650u: goto label_3ef650;
        case 0x3ef654u: goto label_3ef654;
        case 0x3ef658u: goto label_3ef658;
        case 0x3ef65cu: goto label_3ef65c;
        case 0x3ef660u: goto label_3ef660;
        case 0x3ef664u: goto label_3ef664;
        case 0x3ef668u: goto label_3ef668;
        case 0x3ef66cu: goto label_3ef66c;
        case 0x3ef670u: goto label_3ef670;
        case 0x3ef674u: goto label_3ef674;
        default: break;
    }

    ctx->pc = 0x3ef530u;

label_3ef530:
    // 0x3ef530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ef530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ef534:
    // 0x3ef534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3ef534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ef538:
    // 0x3ef538: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ef538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ef53c:
    // 0x3ef53c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ef53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ef540:
    // 0x3ef540: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ef540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_3ef544:
    // 0x3ef544: 0x1065003a  beq         $v1, $a1, . + 4 + (0x3A << 2)
label_3ef548:
    if (ctx->pc == 0x3EF548u) {
        ctx->pc = 0x3EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF544u;
        // 0x3ef548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF54Cu;
        goto label_3ef54c;
    }
    ctx->pc = 0x3EF544u;
    {
        const bool branch_taken_0x3ef544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF544u;
        // 0x3ef548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef544) {
            ctx->pc = 0x3EF630u;
            goto label_3ef630;
        }
    }
    ctx->pc = 0x3EF54Cu;
label_3ef54c:
    // 0x3ef54c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3ef550:
    if (ctx->pc == 0x3EF550u) {
        ctx->pc = 0x3EF554u;
        goto label_3ef554;
    }
    ctx->pc = 0x3EF54Cu;
    {
        const bool branch_taken_0x3ef54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef54c) {
            ctx->pc = 0x3EF560u;
            goto label_3ef560;
        }
    }
    ctx->pc = 0x3EF554u;
label_3ef554:
    // 0x3ef554: 0x10000044  b           . + 4 + (0x44 << 2)
label_3ef558:
    if (ctx->pc == 0x3EF558u) {
        ctx->pc = 0x3EF55Cu;
        goto label_3ef55c;
    }
    ctx->pc = 0x3EF554u;
    {
        const bool branch_taken_0x3ef554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef554) {
            ctx->pc = 0x3EF668u;
            goto label_3ef668;
        }
    }
    ctx->pc = 0x3EF55Cu;
label_3ef55c:
    // 0x3ef55c: 0x0  nop
    ctx->pc = 0x3ef55cu;
    // NOP
label_3ef560:
    // 0x3ef560: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ef560u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ef564:
    // 0x3ef564: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ef564u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_3ef568:
    // 0x3ef568: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ef568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3ef56c:
    // 0x3ef56c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ef56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_3ef570:
    // 0x3ef570: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ef570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3ef574:
    // 0x3ef574: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ef574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
label_3ef578:
    // 0x3ef578: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ef578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3ef57c:
    // 0x3ef57c: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ef57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_3ef580:
    // 0x3ef580: 0xc096fb8  jal         func_25BEE0
label_3ef584:
    if (ctx->pc == 0x3EF584u) {
        ctx->pc = 0x3EF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF580u;
        // 0x3ef584: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF588u;
        goto label_3ef588;
    }
    ctx->pc = 0x3EF580u;
    SET_GPR_U32(ctx, 31, 0x3EF588u);
    ctx->pc = 0x3EF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF580u;
    // 0x3ef584: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EF580u, 0x3EF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF588u;
label_3ef588:
    // 0x3ef588: 0x86052b2c  lh          $a1, 0x2B2C($s0)
    ctx->pc = 0x3ef588u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
label_3ef58c:
    // 0x3ef58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ef58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ef590:
    // 0x3ef590: 0xc0aac9c  jal         func_2AB270
label_3ef594:
    if (ctx->pc == 0x3EF594u) {
        ctx->pc = 0x3EF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF590u;
        // 0x3ef594: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF598u;
        goto label_3ef598;
    }
    ctx->pc = 0x3EF590u;
    SET_GPR_U32(ctx, 31, 0x3EF598u);
    ctx->pc = 0x3EF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF590u;
    // 0x3ef594: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB270u, 0x3EF590u, 0x3EF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF598u;
label_3ef598:
    // 0x3ef598: 0x86032b2c  lh          $v1, 0x2B2C($s0)
    ctx->pc = 0x3ef598u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11052)));
label_3ef59c:
    // 0x3ef59c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3ef59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
label_3ef5a0:
    // 0x3ef5a0: 0x3c021a00  lui         $v0, 0x1A00
    ctx->pc = 0x3ef5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6656 << 16));
label_3ef5a4:
    // 0x3ef5a4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3ef5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
label_3ef5a8:
    // 0x3ef5a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ef5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5ac:
    // 0x3ef5ac: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3ef5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
label_3ef5b0:
    // 0x3ef5b0: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3ef5b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3ef5b4:
    // 0x3ef5b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ef5b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5b8:
    // 0x3ef5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3ef5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5bc:
    // 0x3ef5bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ef5bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5c0:
    // 0x3ef5c0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3ef5c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ef5c4:
    // 0x3ef5c4: 0xc05e9e8  jal         func_17A7A0
label_3ef5c8:
    if (ctx->pc == 0x3EF5C8u) {
        ctx->pc = 0x3EF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5C4u;
        // 0x3ef5c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF5CCu;
        goto label_3ef5cc;
    }
    ctx->pc = 0x3EF5C4u;
    SET_GPR_U32(ctx, 31, 0x3EF5CCu);
    ctx->pc = 0x3EF5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF5C4u;
    // 0x3ef5c8: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3EF5C4u, 0x3EF5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF5CCu;
label_3ef5cc:
    // 0x3ef5cc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ef5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ef5d0:
    // 0x3ef5d0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x3ef5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_3ef5d4:
    // 0x3ef5d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ef5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3ef5d8:
    // 0x3ef5d8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ef5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_3ef5dc:
    // 0x3ef5dc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ef5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_3ef5e0:
    // 0x3ef5e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ef5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3ef5e4:
    // 0x3ef5e4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ef5e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3ef5e8:
    // 0x3ef5e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ef5e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ef5ec:
    // 0x3ef5ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ef5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ef5f0:
    // 0x3ef5f0: 0x0  nop
    ctx->pc = 0x3ef5f0u;
    // NOP
label_3ef5f4:
    // 0x3ef5f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ef5f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ef5f8:
    // 0x3ef5f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ef5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ef5fc:
    // 0x3ef5fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3ef600:
    if (ctx->pc == 0x3EF600u) {
        ctx->pc = 0x3EF604u;
        goto label_3ef604;
    }
    ctx->pc = 0x3EF5FCu;
    {
        const bool branch_taken_0x3ef5fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ef5fc) {
            ctx->pc = 0x3EF614u;
            goto label_3ef614;
        }
    }
    ctx->pc = 0x3EF604u;
label_3ef604:
    // 0x3ef604: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef604u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3ef608:
    // 0x3ef608: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef608u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ef60c:
    // 0x3ef60c: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ef610:
    if (ctx->pc == 0x3EF610u) {
        ctx->pc = 0x3EF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF60Cu;
        // 0x3ef610: 0xa6042b30  sh          $a0, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF614u;
        goto label_3ef614;
    }
    ctx->pc = 0x3EF60Cu;
    {
        const bool branch_taken_0x3ef60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF60Cu;
        // 0x3ef610: 0xa6042b30  sh          $a0, 0x2B30($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef60c) {
            ctx->pc = 0x3EF630u;
            goto label_3ef630;
        }
    }
    ctx->pc = 0x3EF614u;
label_3ef614:
    // 0x3ef614: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ef614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ef618:
    // 0x3ef618: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ef618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3ef61c:
    // 0x3ef61c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ef61cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3ef620:
    // 0x3ef620: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ef620u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ef624:
    // 0x3ef624: 0x0  nop
    ctx->pc = 0x3ef624u;
    // NOP
label_3ef628:
    // 0x3ef628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ef628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ef62c:
    // 0x3ef62c: 0xa6042b30  sh          $a0, 0x2B30($s0)
    ctx->pc = 0x3ef62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 4));
label_3ef630:
    // 0x3ef630: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
label_3ef634:
    // 0x3ef634: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3ef638:
    if (ctx->pc == 0x3EF638u) {
        ctx->pc = 0x3EF63Cu;
        goto label_3ef63c;
    }
    ctx->pc = 0x3EF634u;
    {
        const bool branch_taken_0x3ef634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef634) {
            ctx->pc = 0x3EF648u;
            goto label_3ef648;
        }
    }
    ctx->pc = 0x3EF63Cu;
label_3ef63c:
    // 0x3ef63c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ef63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ef640:
    // 0x3ef640: 0xa6032b30  sh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11056), (uint16_t)GPR_U32(ctx, 3));
label_3ef644:
    // 0x3ef644: 0x0  nop
    ctx->pc = 0x3ef644u;
    // NOP
label_3ef648:
    // 0x3ef648: 0x86032b30  lh          $v1, 0x2B30($s0)
    ctx->pc = 0x3ef648u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11056)));
label_3ef64c:
    // 0x3ef64c: 0x1c600006  bgtz        $v1, . + 4 + (0x6 << 2)
label_3ef650:
    if (ctx->pc == 0x3EF650u) {
        ctx->pc = 0x3EF654u;
        goto label_3ef654;
    }
    ctx->pc = 0x3EF64Cu;
    {
        const bool branch_taken_0x3ef64c = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3ef64c) {
            ctx->pc = 0x3EF668u;
            goto label_3ef668;
        }
    }
    ctx->pc = 0x3EF654u;
label_3ef654:
    // 0x3ef654: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x3ef654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_3ef658:
    // 0x3ef658: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3ef658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3ef65c:
    // 0x3ef65c: 0x320f809  jalr        $t9
label_3ef660:
    if (ctx->pc == 0x3EF660u) {
        ctx->pc = 0x3EF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF65Cu;
        // 0x3ef660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF664u;
        goto label_3ef664;
    }
    ctx->pc = 0x3EF65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3EF664u);
        ctx->pc = 0x3EF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF65Cu;
        // 0x3ef660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF65Cu, 0x3EF664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EF664u;
label_3ef664:
    // 0x3ef664: 0x0  nop
    ctx->pc = 0x3ef664u;
    // NOP
label_3ef668:
    // 0x3ef668: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ef668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ef66c:
    // 0x3ef66c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ef66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ef670:
    // 0x3ef670: 0x3e00008  jr          $ra
label_3ef674:
    if (ctx->pc == 0x3EF674u) {
        ctx->pc = 0x3EF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF670u;
        // 0x3ef674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EF678u;
        goto label_fallthrough_0x3ef670;
    }
    ctx->pc = 0x3EF670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF670u;
        // 0x3ef674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ef670:
    ctx->pc = 0x3EF678u;
}
