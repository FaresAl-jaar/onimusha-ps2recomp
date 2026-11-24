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

// Function: sub_0034B580
// Address: 0x34b580 - 0x34b700
void sub_0034B580_0x34b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B580_0x34b580");
#endif

    switch (ctx->pc) {
        case 0x34b580u: goto label_34b580;
        case 0x34b584u: goto label_34b584;
        case 0x34b588u: goto label_34b588;
        case 0x34b58cu: goto label_34b58c;
        case 0x34b590u: goto label_34b590;
        case 0x34b594u: goto label_34b594;
        case 0x34b598u: goto label_34b598;
        case 0x34b59cu: goto label_34b59c;
        case 0x34b5a0u: goto label_34b5a0;
        case 0x34b5a4u: goto label_34b5a4;
        case 0x34b5a8u: goto label_34b5a8;
        case 0x34b5acu: goto label_34b5ac;
        case 0x34b5b0u: goto label_34b5b0;
        case 0x34b5b4u: goto label_34b5b4;
        case 0x34b5b8u: goto label_34b5b8;
        case 0x34b5bcu: goto label_34b5bc;
        case 0x34b5c0u: goto label_34b5c0;
        case 0x34b5c4u: goto label_34b5c4;
        case 0x34b5c8u: goto label_34b5c8;
        case 0x34b5ccu: goto label_34b5cc;
        case 0x34b5d0u: goto label_34b5d0;
        case 0x34b5d4u: goto label_34b5d4;
        case 0x34b5d8u: goto label_34b5d8;
        case 0x34b5dcu: goto label_34b5dc;
        case 0x34b5e0u: goto label_34b5e0;
        case 0x34b5e4u: goto label_34b5e4;
        case 0x34b5e8u: goto label_34b5e8;
        case 0x34b5ecu: goto label_34b5ec;
        case 0x34b5f0u: goto label_34b5f0;
        case 0x34b5f4u: goto label_34b5f4;
        case 0x34b5f8u: goto label_34b5f8;
        case 0x34b5fcu: goto label_34b5fc;
        case 0x34b600u: goto label_34b600;
        case 0x34b604u: goto label_34b604;
        case 0x34b608u: goto label_34b608;
        case 0x34b60cu: goto label_34b60c;
        case 0x34b610u: goto label_34b610;
        case 0x34b614u: goto label_34b614;
        case 0x34b618u: goto label_34b618;
        case 0x34b61cu: goto label_34b61c;
        case 0x34b620u: goto label_34b620;
        case 0x34b624u: goto label_34b624;
        case 0x34b628u: goto label_34b628;
        case 0x34b62cu: goto label_34b62c;
        case 0x34b630u: goto label_34b630;
        case 0x34b634u: goto label_34b634;
        case 0x34b638u: goto label_34b638;
        case 0x34b63cu: goto label_34b63c;
        case 0x34b640u: goto label_34b640;
        case 0x34b644u: goto label_34b644;
        case 0x34b648u: goto label_34b648;
        case 0x34b64cu: goto label_34b64c;
        case 0x34b650u: goto label_34b650;
        case 0x34b654u: goto label_34b654;
        case 0x34b658u: goto label_34b658;
        case 0x34b65cu: goto label_34b65c;
        case 0x34b660u: goto label_34b660;
        case 0x34b664u: goto label_34b664;
        case 0x34b668u: goto label_34b668;
        case 0x34b66cu: goto label_34b66c;
        case 0x34b670u: goto label_34b670;
        case 0x34b674u: goto label_34b674;
        case 0x34b678u: goto label_34b678;
        case 0x34b67cu: goto label_34b67c;
        case 0x34b680u: goto label_34b680;
        case 0x34b684u: goto label_34b684;
        case 0x34b688u: goto label_34b688;
        case 0x34b68cu: goto label_34b68c;
        case 0x34b690u: goto label_34b690;
        case 0x34b694u: goto label_34b694;
        case 0x34b698u: goto label_34b698;
        case 0x34b69cu: goto label_34b69c;
        case 0x34b6a0u: goto label_34b6a0;
        case 0x34b6a4u: goto label_34b6a4;
        case 0x34b6a8u: goto label_34b6a8;
        case 0x34b6acu: goto label_34b6ac;
        case 0x34b6b0u: goto label_34b6b0;
        case 0x34b6b4u: goto label_34b6b4;
        case 0x34b6b8u: goto label_34b6b8;
        case 0x34b6bcu: goto label_34b6bc;
        case 0x34b6c0u: goto label_34b6c0;
        case 0x34b6c4u: goto label_34b6c4;
        case 0x34b6c8u: goto label_34b6c8;
        case 0x34b6ccu: goto label_34b6cc;
        case 0x34b6d0u: goto label_34b6d0;
        case 0x34b6d4u: goto label_34b6d4;
        case 0x34b6d8u: goto label_34b6d8;
        case 0x34b6dcu: goto label_34b6dc;
        case 0x34b6e0u: goto label_34b6e0;
        case 0x34b6e4u: goto label_34b6e4;
        case 0x34b6e8u: goto label_34b6e8;
        case 0x34b6ecu: goto label_34b6ec;
        case 0x34b6f0u: goto label_34b6f0;
        case 0x34b6f4u: goto label_34b6f4;
        case 0x34b6f8u: goto label_34b6f8;
        case 0x34b6fcu: goto label_34b6fc;
        default: break;
    }

    ctx->pc = 0x34b580u;

label_34b580:
    // 0x34b580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_34b584:
    // 0x34b584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34b588:
    // 0x34b588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b58c:
    // 0x34b58c: 0x8c8229c0  lw          $v0, 0x29C0($a0)
    ctx->pc = 0x34b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
label_34b590:
    // 0x34b590: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x34b590u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_34b594:
    // 0x34b594: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_34b598:
    if (ctx->pc == 0x34B598u) {
        ctx->pc = 0x34B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B594u;
        // 0x34b598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B59Cu;
        goto label_34b59c;
    }
    ctx->pc = 0x34B594u;
    {
        const bool branch_taken_0x34b594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B594u;
        // 0x34b598: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b594) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B59Cu;
label_34b59c:
    // 0x34b59c: 0x92032b69  lbu         $v1, 0x2B69($s0)
    ctx->pc = 0x34b59cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11113)));
label_34b5a0:
    // 0x34b5a0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x34b5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_34b5a4:
    // 0x34b5a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_34b5a8:
    if (ctx->pc == 0x34B5A8u) {
        ctx->pc = 0x34B5ACu;
        goto label_34b5ac;
    }
    ctx->pc = 0x34B5A4u;
    {
        const bool branch_taken_0x34b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b5a4) {
            ctx->pc = 0x34B5C8u;
            goto label_34b5c8;
        }
    }
    ctx->pc = 0x34B5ACu;
label_34b5ac:
    // 0x34b5ac: 0xa2002b69  sb          $zero, 0x2B69($s0)
    ctx->pc = 0x34b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11113), (uint8_t)GPR_U32(ctx, 0));
label_34b5b0:
    // 0x34b5b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b5b4:
    // 0x34b5b4: 0xa2022ab6  sb          $v0, 0x2AB6($s0)
    ctx->pc = 0x34b5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10934), (uint8_t)GPR_U32(ctx, 2));
label_34b5b8:
    // 0x34b5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5bc:
    // 0x34b5bc: 0x10000034  b           . + 4 + (0x34 << 2)
label_34b5c0:
    if (ctx->pc == 0x34B5C0u) {
        ctx->pc = 0x34B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5BCu;
        // 0x34b5c0: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B5C4u;
        goto label_34b5c4;
    }
    ctx->pc = 0x34B5BCu;
    {
        const bool branch_taken_0x34b5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5BCu;
        // 0x34b5c0: 0xa6022ab4  sh          $v0, 0x2AB4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10932), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5bc) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B5C4u;
label_34b5c4:
    // 0x34b5c4: 0x0  nop
    ctx->pc = 0x34b5c4u;
    // NOP
label_34b5c8:
    // 0x34b5c8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x34b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_34b5cc:
    // 0x34b5cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_34b5d0:
    if (ctx->pc == 0x34B5D0u) {
        ctx->pc = 0x34B5D4u;
        goto label_34b5d4;
    }
    ctx->pc = 0x34B5CCu;
    {
        const bool branch_taken_0x34b5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b5cc) {
            ctx->pc = 0x34B600u;
            goto label_34b600;
        }
    }
    ctx->pc = 0x34B5D4u;
label_34b5d4:
    // 0x34b5d4: 0xa2002b69  sb          $zero, 0x2B69($s0)
    ctx->pc = 0x34b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11113), (uint8_t)GPR_U32(ctx, 0));
label_34b5d8:
    // 0x34b5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b5dc:
    // 0x34b5dc: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x34b5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_34b5e0:
    // 0x34b5e0: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x34b5e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_34b5e4:
    // 0x34b5e4: 0x320f809  jalr        $t9
label_34b5e8:
    if (ctx->pc == 0x34B5E8u) {
        ctx->pc = 0x34B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5E4u;
        // 0x34b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B5ECu;
        goto label_34b5ec;
    }
    ctx->pc = 0x34B5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B5ECu);
        ctx->pc = 0x34B5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5E4u;
        // 0x34b5e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B5E4u, 0x34B5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B5ECu;
label_34b5ec:
    // 0x34b5ec: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x34b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_34b5f0:
    // 0x34b5f0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x34b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_34b5f4:
    // 0x34b5f4: 0x10000026  b           . + 4 + (0x26 << 2)
label_34b5f8:
    if (ctx->pc == 0x34B5F8u) {
        ctx->pc = 0x34B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5F4u;
        // 0x34b5f8: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B5FCu;
        goto label_34b5fc;
    }
    ctx->pc = 0x34B5F4u;
    {
        const bool branch_taken_0x34b5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5F4u;
        // 0x34b5f8: 0xae020148  sw          $v0, 0x148($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5f4) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B5FCu;
label_34b5fc:
    // 0x34b5fc: 0x0  nop
    ctx->pc = 0x34b5fcu;
    // NOP
label_34b600:
    // 0x34b600: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x34b600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_34b604:
    // 0x34b604: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_34b608:
    if (ctx->pc == 0x34B608u) {
        ctx->pc = 0x34B60Cu;
        goto label_34b60c;
    }
    ctx->pc = 0x34B604u;
    {
        const bool branch_taken_0x34b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b604) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B60Cu;
label_34b60c:
    // 0x34b60c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x34b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b610:
    // 0x34b610: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x34b610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_34b614:
    // 0x34b614: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34b614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_34b618:
    // 0x34b618: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x34b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_34b61c:
    // 0x34b61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34b620:
    // 0x34b620: 0x0  nop
    ctx->pc = 0x34b620u;
    // NOP
label_34b624:
    // 0x34b624: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x34b624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_34b628:
    // 0x34b628: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34b628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34b62c:
    // 0x34b62c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_34b630:
    if (ctx->pc == 0x34B630u) {
        ctx->pc = 0x34B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B62Cu;
        // 0x34b630: 0x8e042b64  lw          $a0, 0x2B64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B634u;
        goto label_34b634;
    }
    ctx->pc = 0x34B62Cu;
    {
        const bool branch_taken_0x34b62c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x34B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B62Cu;
        // 0x34b630: 0x8e042b64  lw          $a0, 0x2B64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b62c) {
            ctx->pc = 0x34B644u;
            goto label_34b644;
        }
    }
    ctx->pc = 0x34B634u;
label_34b634:
    // 0x34b634: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34b634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_34b638:
    // 0x34b638: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x34b638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_34b63c:
    // 0x34b63c: 0x10000008  b           . + 4 + (0x8 << 2)
label_34b640:
    if (ctx->pc == 0x34B640u) {
        ctx->pc = 0x34B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B63Cu;
        // 0x34b640: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B644u;
        goto label_34b644;
    }
    ctx->pc = 0x34B63Cu;
    {
        const bool branch_taken_0x34b63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B63Cu;
        // 0x34b640: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b63c) {
            ctx->pc = 0x34B660u;
            goto label_34b660;
        }
    }
    ctx->pc = 0x34B644u;
label_34b644:
    // 0x34b644: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x34b644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_34b648:
    // 0x34b648: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x34b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_34b64c:
    // 0x34b64c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34b64cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_34b650:
    // 0x34b650: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x34b650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_34b654:
    // 0x34b654: 0x0  nop
    ctx->pc = 0x34b654u;
    // NOP
label_34b658:
    // 0x34b658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34b658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34b65c:
    // 0x34b65c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x34b65cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34b660:
    // 0x34b660: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_34b664:
    if (ctx->pc == 0x34B664u) {
        ctx->pc = 0x34B668u;
        goto label_34b668;
    }
    ctx->pc = 0x34B660u;
    {
        const bool branch_taken_0x34b660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b660) {
            ctx->pc = 0x34B690u;
            goto label_34b690;
        }
    }
    ctx->pc = 0x34B668u;
label_34b668:
    // 0x34b668: 0xa2002b69  sb          $zero, 0x2B69($s0)
    ctx->pc = 0x34b668u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11113), (uint8_t)GPR_U32(ctx, 0));
label_34b66c:
    // 0x34b66c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b66cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b670:
    // 0x34b670: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x34b670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34b674:
    // 0x34b674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34b678:
    // 0x34b678: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x34b678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_34b67c:
    // 0x34b67c: 0x320f809  jalr        $t9
label_34b680:
    if (ctx->pc == 0x34B680u) {
        ctx->pc = 0x34B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B67Cu;
        // 0x34b680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B684u;
        goto label_34b684;
    }
    ctx->pc = 0x34B67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B684u);
        ctx->pc = 0x34B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B67Cu;
        // 0x34b680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B67Cu, 0x34B684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B684u;
label_34b684:
    // 0x34b684: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x34b684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_34b688:
    // 0x34b688: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x34b688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_34b68c:
    // 0x34b68c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x34b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
label_34b690:
    // 0x34b690: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x34b690u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
label_34b694:
    // 0x34b694: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x34b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_34b698:
    // 0x34b698: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_34b69c:
    if (ctx->pc == 0x34B69Cu) {
        ctx->pc = 0x34B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B698u;
        // 0x34b69c: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6A0u;
        goto label_34b6a0;
    }
    ctx->pc = 0x34B698u;
    {
        const bool branch_taken_0x34b698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B698u;
        // 0x34b69c: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b698) {
            ctx->pc = 0x34B6E0u;
            goto label_34b6e0;
        }
    }
    ctx->pc = 0x34B6A0u;
label_34b6a0:
    // 0x34b6a0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_34b6a4:
    if (ctx->pc == 0x34B6A4u) {
        ctx->pc = 0x34B6A8u;
        goto label_34b6a8;
    }
    ctx->pc = 0x34B6A0u;
    {
        const bool branch_taken_0x34b6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b6a0) {
            ctx->pc = 0x34B6D0u;
            goto label_34b6d0;
        }
    }
    ctx->pc = 0x34B6A8u;
label_34b6a8:
    // 0x34b6a8: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x34b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_34b6ac:
    // 0x34b6ac: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_34b6b0:
    if (ctx->pc == 0x34B6B0u) {
        ctx->pc = 0x34B6B4u;
        goto label_34b6b4;
    }
    ctx->pc = 0x34B6ACu;
    {
        const bool branch_taken_0x34b6ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34b6ac) {
            ctx->pc = 0x34B6C0u;
            goto label_34b6c0;
        }
    }
    ctx->pc = 0x34B6B4u;
label_34b6b4:
    // 0x34b6b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_34b6b8:
    if (ctx->pc == 0x34B6B8u) {
        ctx->pc = 0x34B6BCu;
        goto label_34b6bc;
    }
    ctx->pc = 0x34B6B4u;
    {
        const bool branch_taken_0x34b6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b6b4) {
            ctx->pc = 0x34B6E8u;
            goto label_34b6e8;
        }
    }
    ctx->pc = 0x34B6BCu;
label_34b6bc:
    // 0x34b6bc: 0x0  nop
    ctx->pc = 0x34b6bcu;
    // NOP
label_34b6c0:
    // 0x34b6c0: 0xc0d2dd4  jal         func_34B750
label_34b6c4:
    if (ctx->pc == 0x34B6C4u) {
        ctx->pc = 0x34B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6C0u;
        // 0x34b6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6C8u;
        goto label_34b6c8;
    }
    ctx->pc = 0x34B6C0u;
    SET_GPR_U32(ctx, 31, 0x34B6C8u);
    ctx->pc = 0x34B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6C0u;
    // 0x34b6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B750u, 0x34B6C0u, 0x34B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6C8u;
label_34b6c8:
    // 0x34b6c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_34b6cc:
    if (ctx->pc == 0x34B6CCu) {
        ctx->pc = 0x34B6D0u;
        goto label_34b6d0;
    }
    ctx->pc = 0x34B6C8u;
    {
        const bool branch_taken_0x34b6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b6c8) {
            ctx->pc = 0x34B6E8u;
            goto label_34b6e8;
        }
    }
    ctx->pc = 0x34B6D0u;
label_34b6d0:
    // 0x34b6d0: 0xc0d2e68  jal         func_34B9A0
label_34b6d4:
    if (ctx->pc == 0x34B6D4u) {
        ctx->pc = 0x34B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6D0u;
        // 0x34b6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6D8u;
        goto label_34b6d8;
    }
    ctx->pc = 0x34B6D0u;
    SET_GPR_U32(ctx, 31, 0x34B6D8u);
    ctx->pc = 0x34B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6D0u;
    // 0x34b6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B9A0u, 0x34B6D0u, 0x34B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6D8u;
label_34b6d8:
    // 0x34b6d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_34b6dc:
    if (ctx->pc == 0x34B6DCu) {
        ctx->pc = 0x34B6E0u;
        goto label_34b6e0;
    }
    ctx->pc = 0x34B6D8u;
    {
        const bool branch_taken_0x34b6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b6d8) {
            ctx->pc = 0x34B6E8u;
            goto label_34b6e8;
        }
    }
    ctx->pc = 0x34B6E0u;
label_34b6e0:
    // 0x34b6e0: 0xc0d2e94  jal         func_34BA50
label_34b6e4:
    if (ctx->pc == 0x34B6E4u) {
        ctx->pc = 0x34B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6E0u;
        // 0x34b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6E8u;
        goto label_34b6e8;
    }
    ctx->pc = 0x34B6E0u;
    SET_GPR_U32(ctx, 31, 0x34B6E8u);
    ctx->pc = 0x34B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6E0u;
    // 0x34b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BA50u, 0x34B6E0u, 0x34B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6E8u;
label_34b6e8:
    // 0x34b6e8: 0xc0a4d3c  jal         func_2934F0
label_34b6ec:
    if (ctx->pc == 0x34B6ECu) {
        ctx->pc = 0x34B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6E8u;
        // 0x34b6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B6F0u;
        goto label_34b6f0;
    }
    ctx->pc = 0x34B6E8u;
    SET_GPR_U32(ctx, 31, 0x34B6F0u);
    ctx->pc = 0x34B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6E8u;
    // 0x34b6ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x34B6E8u, 0x34B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6F0u;
label_34b6f0:
    // 0x34b6f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b6f4:
    // 0x34b6f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b6f8:
    // 0x34b6f8: 0x3e00008  jr          $ra
label_34b6fc:
    if (ctx->pc == 0x34B6FCu) {
        ctx->pc = 0x34B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6F8u;
        // 0x34b6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B700u;
        goto label_fallthrough_0x34b6f8;
    }
    ctx->pc = 0x34B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6F8u;
        // 0x34b6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34b6f8:
    ctx->pc = 0x34B700u;
}
