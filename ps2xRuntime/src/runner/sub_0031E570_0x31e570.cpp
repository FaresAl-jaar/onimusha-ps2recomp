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

// Function: sub_0031E570
// Address: 0x31e570 - 0x31e718
void sub_0031E570_0x31e570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E570_0x31e570");
#endif

    switch (ctx->pc) {
        case 0x31e570u: goto label_31e570;
        case 0x31e574u: goto label_31e574;
        case 0x31e578u: goto label_31e578;
        case 0x31e57cu: goto label_31e57c;
        case 0x31e580u: goto label_31e580;
        case 0x31e584u: goto label_31e584;
        case 0x31e588u: goto label_31e588;
        case 0x31e58cu: goto label_31e58c;
        case 0x31e590u: goto label_31e590;
        case 0x31e594u: goto label_31e594;
        case 0x31e598u: goto label_31e598;
        case 0x31e59cu: goto label_31e59c;
        case 0x31e5a0u: goto label_31e5a0;
        case 0x31e5a4u: goto label_31e5a4;
        case 0x31e5a8u: goto label_31e5a8;
        case 0x31e5acu: goto label_31e5ac;
        case 0x31e5b0u: goto label_31e5b0;
        case 0x31e5b4u: goto label_31e5b4;
        case 0x31e5b8u: goto label_31e5b8;
        case 0x31e5bcu: goto label_31e5bc;
        case 0x31e5c0u: goto label_31e5c0;
        case 0x31e5c4u: goto label_31e5c4;
        case 0x31e5c8u: goto label_31e5c8;
        case 0x31e5ccu: goto label_31e5cc;
        case 0x31e5d0u: goto label_31e5d0;
        case 0x31e5d4u: goto label_31e5d4;
        case 0x31e5d8u: goto label_31e5d8;
        case 0x31e5dcu: goto label_31e5dc;
        case 0x31e5e0u: goto label_31e5e0;
        case 0x31e5e4u: goto label_31e5e4;
        case 0x31e5e8u: goto label_31e5e8;
        case 0x31e5ecu: goto label_31e5ec;
        case 0x31e5f0u: goto label_31e5f0;
        case 0x31e5f4u: goto label_31e5f4;
        case 0x31e5f8u: goto label_31e5f8;
        case 0x31e5fcu: goto label_31e5fc;
        case 0x31e600u: goto label_31e600;
        case 0x31e604u: goto label_31e604;
        case 0x31e608u: goto label_31e608;
        case 0x31e60cu: goto label_31e60c;
        case 0x31e610u: goto label_31e610;
        case 0x31e614u: goto label_31e614;
        case 0x31e618u: goto label_31e618;
        case 0x31e61cu: goto label_31e61c;
        case 0x31e620u: goto label_31e620;
        case 0x31e624u: goto label_31e624;
        case 0x31e628u: goto label_31e628;
        case 0x31e62cu: goto label_31e62c;
        case 0x31e630u: goto label_31e630;
        case 0x31e634u: goto label_31e634;
        case 0x31e638u: goto label_31e638;
        case 0x31e63cu: goto label_31e63c;
        case 0x31e640u: goto label_31e640;
        case 0x31e644u: goto label_31e644;
        case 0x31e648u: goto label_31e648;
        case 0x31e64cu: goto label_31e64c;
        case 0x31e650u: goto label_31e650;
        case 0x31e654u: goto label_31e654;
        case 0x31e658u: goto label_31e658;
        case 0x31e65cu: goto label_31e65c;
        case 0x31e660u: goto label_31e660;
        case 0x31e664u: goto label_31e664;
        case 0x31e668u: goto label_31e668;
        case 0x31e66cu: goto label_31e66c;
        case 0x31e670u: goto label_31e670;
        case 0x31e674u: goto label_31e674;
        case 0x31e678u: goto label_31e678;
        case 0x31e67cu: goto label_31e67c;
        case 0x31e680u: goto label_31e680;
        case 0x31e684u: goto label_31e684;
        case 0x31e688u: goto label_31e688;
        case 0x31e68cu: goto label_31e68c;
        case 0x31e690u: goto label_31e690;
        case 0x31e694u: goto label_31e694;
        case 0x31e698u: goto label_31e698;
        case 0x31e69cu: goto label_31e69c;
        case 0x31e6a0u: goto label_31e6a0;
        case 0x31e6a4u: goto label_31e6a4;
        case 0x31e6a8u: goto label_31e6a8;
        case 0x31e6acu: goto label_31e6ac;
        case 0x31e6b0u: goto label_31e6b0;
        case 0x31e6b4u: goto label_31e6b4;
        case 0x31e6b8u: goto label_31e6b8;
        case 0x31e6bcu: goto label_31e6bc;
        case 0x31e6c0u: goto label_31e6c0;
        case 0x31e6c4u: goto label_31e6c4;
        case 0x31e6c8u: goto label_31e6c8;
        case 0x31e6ccu: goto label_31e6cc;
        case 0x31e6d0u: goto label_31e6d0;
        case 0x31e6d4u: goto label_31e6d4;
        case 0x31e6d8u: goto label_31e6d8;
        case 0x31e6dcu: goto label_31e6dc;
        case 0x31e6e0u: goto label_31e6e0;
        case 0x31e6e4u: goto label_31e6e4;
        case 0x31e6e8u: goto label_31e6e8;
        case 0x31e6ecu: goto label_31e6ec;
        case 0x31e6f0u: goto label_31e6f0;
        case 0x31e6f4u: goto label_31e6f4;
        case 0x31e6f8u: goto label_31e6f8;
        case 0x31e6fcu: goto label_31e6fc;
        case 0x31e700u: goto label_31e700;
        case 0x31e704u: goto label_31e704;
        case 0x31e708u: goto label_31e708;
        case 0x31e70cu: goto label_31e70c;
        case 0x31e710u: goto label_31e710;
        case 0x31e714u: goto label_31e714;
        default: break;
    }

    ctx->pc = 0x31e570u;

label_31e570:
    // 0x31e570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31e574:
    // 0x31e574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e578:
    // 0x31e578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e57c:
    // 0x31e57c: 0x27a2002c  addiu       $v0, $sp, 0x2C
    ctx->pc = 0x31e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_31e580:
    // 0x31e580: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31e580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_31e584:
    // 0x31e584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e588:
    // 0x31e588: 0xc78082c8  lwc1        $f0, -0x7D38($gp)
    ctx->pc = 0x31e588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e58c:
    // 0x31e58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31e58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e590:
    // 0x31e590: 0xc09ffb0  jal         func_27FEC0
label_31e594:
    if (ctx->pc == 0x31E594u) {
        ctx->pc = 0x31E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E590u;
        // 0x31e594: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E598u;
        goto label_31e598;
    }
    ctx->pc = 0x31E590u;
    SET_GPR_U32(ctx, 31, 0x31E598u);
    ctx->pc = 0x31E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E590u;
    // 0x31e594: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x31E590u, 0x31E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E598u;
label_31e598:
    // 0x31e598: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x31e598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_31e59c:
    // 0x31e59c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e5a0:
    // 0x31e5a0: 0x10830059  beq         $a0, $v1, . + 4 + (0x59 << 2)
label_31e5a4:
    if (ctx->pc == 0x31E5A4u) {
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5A8u;
        goto label_31e5a8;
    }
    ctx->pc = 0x31E5A0u;
    {
        const bool branch_taken_0x31e5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A0u;
        // 0x31e5a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a0) {
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E5A8u;
label_31e5a8:
    // 0x31e5a8: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
label_31e5ac:
    if (ctx->pc == 0x31E5ACu) {
        ctx->pc = 0x31E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A8u;
        // 0x31e5ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E5B0u;
        goto label_31e5b0;
    }
    ctx->pc = 0x31E5A8u;
    {
        const bool branch_taken_0x31e5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E5A8u;
        // 0x31e5ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e5a8) {
            ctx->pc = 0x31E698u;
            goto label_31e698;
        }
    }
    ctx->pc = 0x31E5B0u;
label_31e5b0:
    // 0x31e5b0: 0x10870027  beq         $a0, $a3, . + 4 + (0x27 << 2)
label_31e5b4:
    if (ctx->pc == 0x31E5B4u) {
        ctx->pc = 0x31E5B8u;
        goto label_31e5b8;
    }
    ctx->pc = 0x31E5B0u;
    {
        const bool branch_taken_0x31e5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x31e5b0) {
            ctx->pc = 0x31E650u;
            goto label_31e650;
        }
    }
    ctx->pc = 0x31E5B8u;
label_31e5b8:
    // 0x31e5b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_31e5bc:
    if (ctx->pc == 0x31E5BCu) {
        ctx->pc = 0x31E5C0u;
        goto label_31e5c0;
    }
    ctx->pc = 0x31E5B8u;
    {
        const bool branch_taken_0x31e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5b8) {
            ctx->pc = 0x31E5C8u;
            goto label_31e5c8;
        }
    }
    ctx->pc = 0x31E5C0u;
label_31e5c0:
    // 0x31e5c0: 0x10000051  b           . + 4 + (0x51 << 2)
label_31e5c4:
    if (ctx->pc == 0x31E5C4u) {
        ctx->pc = 0x31E5C8u;
        goto label_31e5c8;
    }
    ctx->pc = 0x31E5C0u;
    {
        const bool branch_taken_0x31e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e5c0) {
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E5C8u;
label_31e5c8:
    // 0x31e5c8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x31e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_31e5cc:
    // 0x31e5cc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x31e5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_31e5d0:
    // 0x31e5d0: 0x92060838  lbu         $a2, 0x838($s0)
    ctx->pc = 0x31e5d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2104)));
label_31e5d4:
    // 0x31e5d4: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x31e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
label_31e5d8:
    // 0x31e5d8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x31e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_31e5dc:
    // 0x31e5dc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x31e5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_31e5e0:
    // 0x31e5e0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_31e5e4:
    // 0x31e5e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e5e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e5e8:
    // 0x31e5e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31e5e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31e5ec:
    // 0x31e5ec: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x31e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_31e5f0:
    // 0x31e5f0: 0x9063002c  lbu         $v1, 0x2C($v1)
    ctx->pc = 0x31e5f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31e5f4:
    // 0x31e5f4: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x31e5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_31e5f8:
    // 0x31e5f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x31e5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_31e5fc:
    // 0x31e5fc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x31e5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
label_31e600:
    // 0x31e600: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x31e600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_31e604:
    // 0x31e604: 0xae0507ec  sw          $a1, 0x7EC($s0)
    ctx->pc = 0x31e604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 5));
label_31e608:
    // 0x31e608: 0xa2070821  sb          $a3, 0x821($s0)
    ctx->pc = 0x31e608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 7));
label_31e60c:
    // 0x31e60c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x31e60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31e610:
    // 0x31e610: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x31e610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_31e614:
    // 0x31e614: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x31e614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_31e618:
    // 0x31e618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e61c:
    // 0x31e61c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_31e620:
    if (ctx->pc == 0x31E620u) {
        ctx->pc = 0x31E624u;
        goto label_31e624;
    }
    ctx->pc = 0x31E61Cu;
    {
        const bool branch_taken_0x31e61c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e61c) {
            ctx->pc = 0x31E634u;
            goto label_31e634;
        }
    }
    ctx->pc = 0x31E624u;
label_31e624:
    // 0x31e624: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31e628:
    // 0x31e628: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31e62c:
    // 0x31e62c: 0x10000008  b           . + 4 + (0x8 << 2)
label_31e630:
    if (ctx->pc == 0x31E630u) {
        ctx->pc = 0x31E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E62Cu;
        // 0x31e630: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E634u;
        goto label_31e634;
    }
    ctx->pc = 0x31E62Cu;
    {
        const bool branch_taken_0x31e62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E62Cu;
        // 0x31e630: 0xa6040828  sh          $a0, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e62c) {
            ctx->pc = 0x31E650u;
            goto label_31e650;
        }
    }
    ctx->pc = 0x31E634u;
label_31e634:
    // 0x31e634: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31e634u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31e638:
    // 0x31e638: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_31e63c:
    // 0x31e63c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e63cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_31e640:
    // 0x31e640: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31e640u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_31e644:
    // 0x31e644: 0x0  nop
    ctx->pc = 0x31e644u;
    // NOP
label_31e648:
    // 0x31e648: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31e648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_31e64c:
    // 0x31e64c: 0xa6040828  sh          $a0, 0x828($s0)
    ctx->pc = 0x31e64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 4));
label_31e650:
    // 0x31e650: 0xc60107a4  lwc1        $f1, 0x7A4($s0)
    ctx->pc = 0x31e650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31e654:
    // 0x31e654: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31e654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e658:
    // 0x31e658: 0x0  nop
    ctx->pc = 0x31e658u;
    // NOP
label_31e65c:
    // 0x31e65c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31e65cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e660:
    // 0x31e660: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_31e664:
    if (ctx->pc == 0x31E664u) {
        ctx->pc = 0x31E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E660u;
        // 0x31e664: 0x3c033f66  lui         $v1, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E668u;
        goto label_31e668;
    }
    ctx->pc = 0x31E660u;
    {
        const bool branch_taken_0x31e660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E660u;
        // 0x31e664: 0x3c033f66  lui         $v1, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e660) {
            ctx->pc = 0x31E680u;
            goto label_31e680;
        }
    }
    ctx->pc = 0x31E668u;
label_31e668:
    // 0x31e668: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x31e668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_31e66c:
    // 0x31e66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e670:
    // 0x31e670: 0x0  nop
    ctx->pc = 0x31e670u;
    // NOP
label_31e674:
    // 0x31e674: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31e674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31e678:
    // 0x31e678: 0xe60007a4  swc1        $f0, 0x7A4($s0)
    ctx->pc = 0x31e678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1956), bits); }
label_31e67c:
    // 0x31e67c: 0x0  nop
    ctx->pc = 0x31e67cu;
    // NOP
label_31e680:
    // 0x31e680: 0x96040828  lhu         $a0, 0x828($s0)
    ctx->pc = 0x31e680u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2088)));
label_31e684:
    // 0x31e684: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x31e684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_31e688:
    // 0x31e688: 0x1480001f  bnez        $a0, . + 4 + (0x1F << 2)
label_31e68c:
    if (ctx->pc == 0x31E68Cu) {
        ctx->pc = 0x31E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E688u;
        // 0x31e68c: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E690u;
        goto label_31e690;
    }
    ctx->pc = 0x31E688u;
    {
        const bool branch_taken_0x31e688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E688u;
        // 0x31e68c: 0xa6030828  sh          $v1, 0x828($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e688) {
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E690u;
label_31e690:
    // 0x31e690: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e694:
    // 0x31e694: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x31e694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_31e698:
    // 0x31e698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31e69c:
    if (ctx->pc == 0x31E69Cu) {
        ctx->pc = 0x31E6A0u;
        goto label_31e6a0;
    }
    ctx->pc = 0x31E698u;
    {
        const bool branch_taken_0x31e698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e698) {
            ctx->pc = 0x31E6B0u;
            goto label_31e6b0;
        }
    }
    ctx->pc = 0x31E6A0u;
label_31e6a0:
    // 0x31e6a0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x31e6a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_31e6a4:
    // 0x31e6a4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_31e6a8:
    if (ctx->pc == 0x31E6A8u) {
        ctx->pc = 0x31E6ACu;
        goto label_31e6ac;
    }
    ctx->pc = 0x31E6A4u;
    {
        const bool branch_taken_0x31e6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e6a4) {
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E6ACu;
label_31e6ac:
    // 0x31e6ac: 0x0  nop
    ctx->pc = 0x31e6acu;
    // NOP
label_31e6b0:
    // 0x31e6b0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x31e6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
label_31e6b4:
    // 0x31e6b4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x31e6b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_31e6b8:
    // 0x31e6b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_31e6bc:
    if (ctx->pc == 0x31E6BCu) {
        ctx->pc = 0x31E6C0u;
        goto label_31e6c0;
    }
    ctx->pc = 0x31E6B8u;
    {
        const bool branch_taken_0x31e6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e6b8) {
            ctx->pc = 0x31E6D0u;
            goto label_31e6d0;
        }
    }
    ctx->pc = 0x31E6C0u;
label_31e6c0:
    // 0x31e6c0: 0x960229de  lhu         $v0, 0x29DE($s0)
    ctx->pc = 0x31e6c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10718)));
label_31e6c4:
    // 0x31e6c4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x31e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_31e6c8:
    // 0x31e6c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31e6cc:
    if (ctx->pc == 0x31E6CCu) {
        ctx->pc = 0x31E6D0u;
        goto label_31e6d0;
    }
    ctx->pc = 0x31E6C8u;
    {
        const bool branch_taken_0x31e6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e6c8) {
            ctx->pc = 0x31E6E0u;
            goto label_31e6e0;
        }
    }
    ctx->pc = 0x31E6D0u;
label_31e6d0:
    // 0x31e6d0: 0xc0a012c  jal         func_2804B0
label_31e6d4:
    if (ctx->pc == 0x31E6D4u) {
        ctx->pc = 0x31E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6D0u;
        // 0x31e6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6D8u;
        goto label_31e6d8;
    }
    ctx->pc = 0x31E6D0u;
    SET_GPR_U32(ctx, 31, 0x31E6D8u);
    ctx->pc = 0x31E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E6D0u;
    // 0x31e6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x31E6D0u, 0x31E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E6D8u;
label_31e6d8:
    // 0x31e6d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_31e6dc:
    if (ctx->pc == 0x31E6DCu) {
        ctx->pc = 0x31E6E0u;
        goto label_31e6e0;
    }
    ctx->pc = 0x31E6D8u;
    {
        const bool branch_taken_0x31e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e6d8) {
            ctx->pc = 0x31E708u;
            goto label_31e708;
        }
    }
    ctx->pc = 0x31E6E0u;
label_31e6e0:
    // 0x31e6e0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x31e6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_31e6e4:
    // 0x31e6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e6e8:
    // 0x31e6e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31e6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e6ec:
    // 0x31e6ec: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x31e6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_31e6f0:
    // 0x31e6f0: 0x320f809  jalr        $t9
label_31e6f4:
    if (ctx->pc == 0x31E6F4u) {
        ctx->pc = 0x31E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F0u;
        // 0x31e6f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E6F8u;
        goto label_31e6f8;
    }
    ctx->pc = 0x31E6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31E6F8u);
        ctx->pc = 0x31E6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E6F0u;
        // 0x31e6f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E6F0u, 0x31E6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E6F8u;
label_31e6f8:
    // 0x31e6f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31e6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31e6fc:
    // 0x31e6fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31e6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31e700:
    // 0x31e700: 0xa6040786  sh          $a0, 0x786($s0)
    ctx->pc = 0x31e700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1926), (uint16_t)GPR_U32(ctx, 4));
label_31e704:
    // 0x31e704: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x31e704u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_31e708:
    // 0x31e708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e70c:
    // 0x31e70c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31e70cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31e710:
    // 0x31e710: 0x3e00008  jr          $ra
label_31e714:
    if (ctx->pc == 0x31E714u) {
        ctx->pc = 0x31E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E710u;
        // 0x31e714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E718u;
        goto label_fallthrough_0x31e710;
    }
    ctx->pc = 0x31E710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E710u;
        // 0x31e714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31e710:
    ctx->pc = 0x31E718u;
}
