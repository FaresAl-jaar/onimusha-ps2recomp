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

// Function: sub_00269680
// Address: 0x269680 - 0x2698b8
void sub_00269680_0x269680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269680_0x269680");
#endif

    switch (ctx->pc) {
        case 0x269680u: goto label_269680;
        case 0x269684u: goto label_269684;
        case 0x269688u: goto label_269688;
        case 0x26968cu: goto label_26968c;
        case 0x269690u: goto label_269690;
        case 0x269694u: goto label_269694;
        case 0x269698u: goto label_269698;
        case 0x26969cu: goto label_26969c;
        case 0x2696a0u: goto label_2696a0;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696a8u: goto label_2696a8;
        case 0x2696acu: goto label_2696ac;
        case 0x2696b0u: goto label_2696b0;
        case 0x2696b4u: goto label_2696b4;
        case 0x2696b8u: goto label_2696b8;
        case 0x2696bcu: goto label_2696bc;
        case 0x2696c0u: goto label_2696c0;
        case 0x2696c4u: goto label_2696c4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696ccu: goto label_2696cc;
        case 0x2696d0u: goto label_2696d0;
        case 0x2696d4u: goto label_2696d4;
        case 0x2696d8u: goto label_2696d8;
        case 0x2696dcu: goto label_2696dc;
        case 0x2696e0u: goto label_2696e0;
        case 0x2696e4u: goto label_2696e4;
        case 0x2696e8u: goto label_2696e8;
        case 0x2696ecu: goto label_2696ec;
        case 0x2696f0u: goto label_2696f0;
        case 0x2696f4u: goto label_2696f4;
        case 0x2696f8u: goto label_2696f8;
        case 0x2696fcu: goto label_2696fc;
        case 0x269700u: goto label_269700;
        case 0x269704u: goto label_269704;
        case 0x269708u: goto label_269708;
        case 0x26970cu: goto label_26970c;
        case 0x269710u: goto label_269710;
        case 0x269714u: goto label_269714;
        case 0x269718u: goto label_269718;
        case 0x26971cu: goto label_26971c;
        case 0x269720u: goto label_269720;
        case 0x269724u: goto label_269724;
        case 0x269728u: goto label_269728;
        case 0x26972cu: goto label_26972c;
        case 0x269730u: goto label_269730;
        case 0x269734u: goto label_269734;
        case 0x269738u: goto label_269738;
        case 0x26973cu: goto label_26973c;
        case 0x269740u: goto label_269740;
        case 0x269744u: goto label_269744;
        case 0x269748u: goto label_269748;
        case 0x26974cu: goto label_26974c;
        case 0x269750u: goto label_269750;
        case 0x269754u: goto label_269754;
        case 0x269758u: goto label_269758;
        case 0x26975cu: goto label_26975c;
        case 0x269760u: goto label_269760;
        case 0x269764u: goto label_269764;
        case 0x269768u: goto label_269768;
        case 0x26976cu: goto label_26976c;
        case 0x269770u: goto label_269770;
        case 0x269774u: goto label_269774;
        case 0x269778u: goto label_269778;
        case 0x26977cu: goto label_26977c;
        case 0x269780u: goto label_269780;
        case 0x269784u: goto label_269784;
        case 0x269788u: goto label_269788;
        case 0x26978cu: goto label_26978c;
        case 0x269790u: goto label_269790;
        case 0x269794u: goto label_269794;
        case 0x269798u: goto label_269798;
        case 0x26979cu: goto label_26979c;
        case 0x2697a0u: goto label_2697a0;
        case 0x2697a4u: goto label_2697a4;
        case 0x2697a8u: goto label_2697a8;
        case 0x2697acu: goto label_2697ac;
        case 0x2697b0u: goto label_2697b0;
        case 0x2697b4u: goto label_2697b4;
        case 0x2697b8u: goto label_2697b8;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697c0u: goto label_2697c0;
        case 0x2697c4u: goto label_2697c4;
        case 0x2697c8u: goto label_2697c8;
        case 0x2697ccu: goto label_2697cc;
        case 0x2697d0u: goto label_2697d0;
        case 0x2697d4u: goto label_2697d4;
        case 0x2697d8u: goto label_2697d8;
        case 0x2697dcu: goto label_2697dc;
        case 0x2697e0u: goto label_2697e0;
        case 0x2697e4u: goto label_2697e4;
        case 0x2697e8u: goto label_2697e8;
        case 0x2697ecu: goto label_2697ec;
        case 0x2697f0u: goto label_2697f0;
        case 0x2697f4u: goto label_2697f4;
        case 0x2697f8u: goto label_2697f8;
        case 0x2697fcu: goto label_2697fc;
        case 0x269800u: goto label_269800;
        case 0x269804u: goto label_269804;
        case 0x269808u: goto label_269808;
        case 0x26980cu: goto label_26980c;
        case 0x269810u: goto label_269810;
        case 0x269814u: goto label_269814;
        case 0x269818u: goto label_269818;
        case 0x26981cu: goto label_26981c;
        case 0x269820u: goto label_269820;
        case 0x269824u: goto label_269824;
        case 0x269828u: goto label_269828;
        case 0x26982cu: goto label_26982c;
        case 0x269830u: goto label_269830;
        case 0x269834u: goto label_269834;
        case 0x269838u: goto label_269838;
        case 0x26983cu: goto label_26983c;
        case 0x269840u: goto label_269840;
        case 0x269844u: goto label_269844;
        case 0x269848u: goto label_269848;
        case 0x26984cu: goto label_26984c;
        case 0x269850u: goto label_269850;
        case 0x269854u: goto label_269854;
        case 0x269858u: goto label_269858;
        case 0x26985cu: goto label_26985c;
        case 0x269860u: goto label_269860;
        case 0x269864u: goto label_269864;
        case 0x269868u: goto label_269868;
        case 0x26986cu: goto label_26986c;
        case 0x269870u: goto label_269870;
        case 0x269874u: goto label_269874;
        case 0x269878u: goto label_269878;
        case 0x26987cu: goto label_26987c;
        case 0x269880u: goto label_269880;
        case 0x269884u: goto label_269884;
        case 0x269888u: goto label_269888;
        case 0x26988cu: goto label_26988c;
        case 0x269890u: goto label_269890;
        case 0x269894u: goto label_269894;
        case 0x269898u: goto label_269898;
        case 0x26989cu: goto label_26989c;
        case 0x2698a0u: goto label_2698a0;
        case 0x2698a4u: goto label_2698a4;
        case 0x2698a8u: goto label_2698a8;
        case 0x2698acu: goto label_2698ac;
        case 0x2698b0u: goto label_2698b0;
        case 0x2698b4u: goto label_2698b4;
        default: break;
    }

    ctx->pc = 0x269680u;

label_269680:
    // 0x269680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_269684:
    // 0x269684: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x269684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_269688:
    // 0x269688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x269688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_26968c:
    // 0x26968c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x26968cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_269690:
    // 0x269690: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x269690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_269694:
    // 0x269694: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x269694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_269698:
    // 0x269698: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26969c:
    // 0x26969c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26969cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2696a0:
    // 0x2696a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2696a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2696a4:
    // 0x2696a4: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x2696a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
label_2696a8:
    // 0x2696a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2696a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2696ac:
    // 0x2696ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2696b0:
    if (ctx->pc == 0x2696B0u) {
        ctx->pc = 0x2696B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696ACu;
        // 0x2696b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696B4u;
        goto label_2696b4;
    }
    ctx->pc = 0x2696ACu;
    {
        const bool branch_taken_0x2696ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696ACu;
        // 0x2696b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696ac) {
            ctx->pc = 0x2696C0u;
            goto label_2696c0;
        }
    }
    ctx->pc = 0x2696B4u;
label_2696b4:
    // 0x2696b4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_2696b8:
    if (ctx->pc == 0x2696B8u) {
        ctx->pc = 0x2696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696B4u;
        // 0x2696b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696BCu;
        goto label_2696bc;
    }
    ctx->pc = 0x2696B4u;
    {
        const bool branch_taken_0x2696b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696B4u;
        // 0x2696b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696b4) {
            ctx->pc = 0x2698A0u;
            goto label_2698a0;
        }
    }
    ctx->pc = 0x2696BCu;
label_2696bc:
    // 0x2696bc: 0x0  nop
    ctx->pc = 0x2696bcu;
    // NOP
label_2696c0:
    // 0x2696c0: 0x92460000  lbu         $a2, 0x0($s2)
    ctx->pc = 0x2696c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2696c4:
    // 0x2696c4: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x2696c4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2696c8:
    // 0x2696c8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2696c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_2696cc:
    // 0x2696cc: 0x92480002  lbu         $t0, 0x2($s2)
    ctx->pc = 0x2696ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_2696d0:
    // 0x2696d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2696d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2696d4:
    // 0x2696d4: 0xc09a4e4  jal         func_269390
label_2696d8:
    if (ctx->pc == 0x2696D8u) {
        ctx->pc = 0x2696D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696D4u;
        // 0x2696d8: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696DCu;
        goto label_2696dc;
    }
    ctx->pc = 0x2696D4u;
    SET_GPR_U32(ctx, 31, 0x2696DCu);
    ctx->pc = 0x2696D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696D4u;
    // 0x2696d8: 0x24a55840  addiu       $a1, $a1, 0x5840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269390u, 0x2696D4u, 0x2696DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696DCu;
label_2696dc:
    // 0x2696dc: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2696dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_2696e0:
    // 0x2696e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2696e4:
    if (ctx->pc == 0x2696E4u) {
        ctx->pc = 0x2696E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E0u;
        // 0x2696e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2696E8u;
        goto label_2696e8;
    }
    ctx->pc = 0x2696E0u;
    {
        const bool branch_taken_0x2696e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696E0u;
        // 0x2696e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696e0) {
            ctx->pc = 0x2696F0u;
            goto label_2696f0;
        }
    }
    ctx->pc = 0x2696E8u;
label_2696e8:
    // 0x2696e8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_2696ec:
    if (ctx->pc == 0x2696ECu) {
        ctx->pc = 0x2696F0u;
        goto label_2696f0;
    }
    ctx->pc = 0x2696E8u;
    {
        const bool branch_taken_0x2696e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2696e8) {
            ctx->pc = 0x269750u;
            goto label_269750;
        }
    }
    ctx->pc = 0x2696F0u;
label_2696f0:
    // 0x2696f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2696f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2696f4:
    // 0x2696f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2696f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2696f8:
    // 0x2696f8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2696f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
label_2696fc:
    // 0x2696fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2696fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_269700:
    // 0x269700: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x269700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_269704:
    // 0x269704: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x269704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_269708:
    // 0x269708: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x269708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_26970c:
    // 0x26970c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26970cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_269710:
    // 0x269710: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x269710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_269714:
    // 0x269714: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x269714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_269718:
    // 0x269718: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x269718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26971c:
    // 0x26971c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_269720:
    if (ctx->pc == 0x269720u) {
        ctx->pc = 0x269724u;
        goto label_269724;
    }
    ctx->pc = 0x26971Cu;
    {
        const bool branch_taken_0x26971c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26971c) {
            ctx->pc = 0x269734u;
            goto label_269734;
        }
    }
    ctx->pc = 0x269724u;
label_269724:
    // 0x269724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x269724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_269728:
    // 0x269728: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x269728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26972c:
    // 0x26972c: 0x10000008  b           . + 4 + (0x8 << 2)
label_269730:
    if (ctx->pc == 0x269730u) {
        ctx->pc = 0x269730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26972Cu;
        // 0x269730: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x269734u;
        goto label_269734;
    }
    ctx->pc = 0x26972Cu;
    {
        const bool branch_taken_0x26972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26972Cu;
        // 0x269730: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26972c) {
            ctx->pc = 0x269750u;
            goto label_269750;
        }
    }
    ctx->pc = 0x269734u;
label_269734:
    // 0x269734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x269734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_269738:
    // 0x269738: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x269738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_26973c:
    // 0x26973c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26973cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_269740:
    // 0x269740: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x269740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_269744:
    // 0x269744: 0x0  nop
    ctx->pc = 0x269744u;
    // NOP
label_269748:
    // 0x269748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x269748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_26974c:
    // 0x26974c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x26974cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_269750:
    // 0x269750: 0x92440001  lbu         $a0, 0x1($s2)
    ctx->pc = 0x269750u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_269754:
    // 0x269754: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x269754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269758:
    // 0x269758: 0xc0b2ebc  jal         func_2CBAF0
label_26975c:
    if (ctx->pc == 0x26975Cu) {
        ctx->pc = 0x26975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269758u;
        // 0x26975c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269760u;
        goto label_269760;
    }
    ctx->pc = 0x269758u;
    SET_GPR_U32(ctx, 31, 0x269760u);
    ctx->pc = 0x26975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269758u;
    // 0x26975c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBAF0u, 0x269758u, 0x269760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269760u;
label_269760:
    // 0x269760: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_269764:
    if (ctx->pc == 0x269764u) {
        ctx->pc = 0x269764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269760u;
        // 0x269764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269768u;
        goto label_269768;
    }
    ctx->pc = 0x269760u;
    {
        const bool branch_taken_0x269760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269760u;
        // 0x269764: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269760) {
            ctx->pc = 0x2697F8u;
            goto label_2697f8;
        }
    }
    ctx->pc = 0x269768u;
label_269768:
    // 0x269768: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x269768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26976c:
    // 0x26976c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x26976cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_269770:
    // 0x269770: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x269770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269774:
    // 0x269774: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x269774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_269778:
    // 0x269778: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x269778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26977c:
    // 0x26977c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x26977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_269780:
    // 0x269780: 0x86420014  lh          $v0, 0x14($s2)
    ctx->pc = 0x269780u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 20)));
label_269784:
    // 0x269784: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x269784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
label_269788:
    // 0x269788: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x269788u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_26978c:
    // 0x26978c: 0xa20207d8  sb          $v0, 0x7D8($s0)
    ctx->pc = 0x26978cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2008), (uint8_t)GPR_U32(ctx, 2));
label_269790:
    // 0x269790: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x269790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_269794:
    // 0x269794: 0xa20207d9  sb          $v0, 0x7D9($s0)
    ctx->pc = 0x269794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2009), (uint8_t)GPR_U32(ctx, 2));
label_269798:
    // 0x269798: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_26979c:
    // 0x26979c: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_2697a0:
    if (ctx->pc == 0x2697A0u) {
        ctx->pc = 0x2697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26979Cu;
        // 0x2697a0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697A4u;
        goto label_2697a4;
    }
    ctx->pc = 0x26979Cu;
    {
        const bool branch_taken_0x26979c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2697A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26979Cu;
        // 0x2697a0: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26979c) {
            ctx->pc = 0x2697B8u;
            goto label_2697b8;
        }
    }
    ctx->pc = 0x2697A4u;
label_2697a4:
    // 0x2697a4: 0x2442ef40  addiu       $v0, $v0, -0x10C0
    ctx->pc = 0x2697a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
label_2697a8:
    // 0x2697a8: 0xae0208d8  sw          $v0, 0x8D8($s0)
    ctx->pc = 0x2697a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2264), GPR_U32(ctx, 2));
label_2697ac:
    // 0x2697ac: 0x86420018  lh          $v0, 0x18($s2)
    ctx->pc = 0x2697acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_2697b0:
    // 0x2697b0: 0xae0208dc  sw          $v0, 0x8DC($s0)
    ctx->pc = 0x2697b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2268), GPR_U32(ctx, 2));
label_2697b4:
    // 0x2697b4: 0x0  nop
    ctx->pc = 0x2697b4u;
    // NOP
label_2697b8:
    // 0x2697b8: 0x8645001a  lh          $a1, 0x1A($s2)
    ctx->pc = 0x2697b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_2697bc:
    // 0x2697bc: 0x18a00006  blez        $a1, . + 4 + (0x6 << 2)
label_2697c0:
    if (ctx->pc == 0x2697C0u) {
        ctx->pc = 0x2697C4u;
        goto label_2697c4;
    }
    ctx->pc = 0x2697BCu;
    {
        const bool branch_taken_0x2697bc = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x2697bc) {
            ctx->pc = 0x2697D8u;
            goto label_2697d8;
        }
    }
    ctx->pc = 0x2697C4u;
label_2697c4:
    // 0x2697c4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2697c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2697c8:
    // 0x2697c8: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x2697c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
label_2697cc:
    // 0x2697cc: 0xc0e360c  jal         func_38D830
label_2697d0:
    if (ctx->pc == 0x2697D0u) {
        ctx->pc = 0x2697D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697CCu;
        // 0x2697d0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697D4u;
        goto label_2697d4;
    }
    ctx->pc = 0x2697CCu;
    SET_GPR_U32(ctx, 31, 0x2697D4u);
    ctx->pc = 0x2697D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697CCu;
    // 0x2697d0: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x2697CCu, 0x2697D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697D4u;
label_2697d4:
    // 0x2697d4: 0x0  nop
    ctx->pc = 0x2697d4u;
    // NOP
label_2697d8:
    // 0x2697d8: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x2697d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_2697dc:
    // 0x2697dc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2697dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2697e0:
    // 0x2697e0: 0x320f809  jalr        $t9
label_2697e4:
    if (ctx->pc == 0x2697E4u) {
        ctx->pc = 0x2697E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697E0u;
        // 0x2697e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697E8u;
        goto label_2697e8;
    }
    ctx->pc = 0x2697E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2697E8u);
        ctx->pc = 0x2697E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697E0u;
        // 0x2697e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2697E0u, 0x2697E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2697E8u;
label_2697e8:
    // 0x2697e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2697e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2697ec:
    // 0x2697ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_2697f0:
    if (ctx->pc == 0x2697F0u) {
        ctx->pc = 0x2697F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697ECu;
        // 0x2697f0: 0xa2050640  sb          $a1, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2697F4u;
        goto label_2697f4;
    }
    ctx->pc = 0x2697ECu;
    {
        const bool branch_taken_0x2697ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697ECu;
        // 0x2697f0: 0xa2050640  sb          $a1, 0x640($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697ec) {
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x2697F4u;
label_2697f4:
    // 0x2697f4: 0x0  nop
    ctx->pc = 0x2697f4u;
    // NOP
label_2697f8:
    // 0x2697f8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2697fc:
    if (ctx->pc == 0x2697FCu) {
        ctx->pc = 0x2697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F8u;
        // 0x2697fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269800u;
        goto label_269800;
    }
    ctx->pc = 0x2697F8u;
    {
        const bool branch_taken_0x2697f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697F8u;
        // 0x2697fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697f8) {
            ctx->pc = 0x2698A0u;
            goto label_2698a0;
        }
    }
    ctx->pc = 0x269800u;
label_269800:
    // 0x269800: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
label_269804:
    // 0x269804: 0x90222cb4  lbu         $v0, 0x2CB4($at)
    ctx->pc = 0x269804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11444)));
label_269808:
    // 0x269808: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_26980c:
    if (ctx->pc == 0x26980Cu) {
        ctx->pc = 0x269810u;
        goto label_269810;
    }
    ctx->pc = 0x269808u;
    {
        const bool branch_taken_0x269808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269808) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x269810u;
label_269810:
    // 0x269810: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_269814:
    if (ctx->pc == 0x269814u) {
        ctx->pc = 0x269818u;
        goto label_269818;
    }
    ctx->pc = 0x269810u;
    {
        const bool branch_taken_0x269810 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x269810) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x269818u;
label_269818:
    // 0x269818: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x269818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_26981c:
    // 0x26981c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x26981cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269820:
    // 0x269820: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
label_269824:
    if (ctx->pc == 0x269824u) {
        ctx->pc = 0x269828u;
        goto label_269828;
    }
    ctx->pc = 0x269820u;
    {
        const bool branch_taken_0x269820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x269820) {
            ctx->pc = 0x269870u;
            goto label_269870;
        }
    }
    ctx->pc = 0x269828u;
label_269828:
    // 0x269828: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_26982c:
    if (ctx->pc == 0x26982Cu) {
        ctx->pc = 0x26982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269828u;
        // 0x26982c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269830u;
        goto label_269830;
    }
    ctx->pc = 0x269828u;
    {
        const bool branch_taken_0x269828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269828u;
        // 0x26982c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269828) {
            ctx->pc = 0x269850u;
            goto label_269850;
        }
    }
    ctx->pc = 0x269830u;
label_269830:
    // 0x269830: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_269834:
    if (ctx->pc == 0x269834u) {
        ctx->pc = 0x269838u;
        goto label_269838;
    }
    ctx->pc = 0x269830u;
    {
        const bool branch_taken_0x269830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269830) {
            ctx->pc = 0x269850u;
            goto label_269850;
        }
    }
    ctx->pc = 0x269838u;
label_269838:
    // 0x269838: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_26983c:
    if (ctx->pc == 0x26983Cu) {
        ctx->pc = 0x26983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269838u;
        // 0x26983c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269840u;
        goto label_269840;
    }
    ctx->pc = 0x269838u;
    {
        const bool branch_taken_0x269838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269838u;
        // 0x26983c: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269838) {
            ctx->pc = 0x269850u;
            goto label_269850;
        }
    }
    ctx->pc = 0x269840u;
label_269840:
    // 0x269840: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_269844:
    if (ctx->pc == 0x269844u) {
        ctx->pc = 0x269848u;
        goto label_269848;
    }
    ctx->pc = 0x269840u;
    {
        const bool branch_taken_0x269840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x269840) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x269848u;
label_269848:
    // 0x269848: 0x1000000d  b           . + 4 + (0xD << 2)
label_26984c:
    if (ctx->pc == 0x26984Cu) {
        ctx->pc = 0x269850u;
        goto label_269850;
    }
    ctx->pc = 0x269848u;
    {
        const bool branch_taken_0x269848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269848) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x269850u;
label_269850:
    // 0x269850: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x269850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_269854:
    // 0x269854: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_269858:
    // 0x269858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26985c:
    // 0x26985c: 0xc0b6b28  jal         func_2DACA0
label_269860:
    if (ctx->pc == 0x269860u) {
        ctx->pc = 0x269860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26985Cu;
        // 0x269860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269864u;
        goto label_269864;
    }
    ctx->pc = 0x26985Cu;
    SET_GPR_U32(ctx, 31, 0x269864u);
    ctx->pc = 0x269860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26985Cu;
    // 0x269860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x26985Cu, 0x269864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269864u;
label_269864:
    // 0x269864: 0x10000006  b           . + 4 + (0x6 << 2)
label_269868:
    if (ctx->pc == 0x269868u) {
        ctx->pc = 0x26986Cu;
        goto label_26986c;
    }
    ctx->pc = 0x269864u;
    {
        const bool branch_taken_0x269864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x269864) {
            ctx->pc = 0x269880u;
            goto label_269880;
        }
    }
    ctx->pc = 0x26986Cu;
label_26986c:
    // 0x26986c: 0x0  nop
    ctx->pc = 0x26986cu;
    // NOP
label_269870:
    // 0x269870: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_269874:
    // 0x269874: 0xc0b6b28  jal         func_2DACA0
label_269878:
    if (ctx->pc == 0x269878u) {
        ctx->pc = 0x269878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269874u;
        // 0x269878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26987Cu;
        goto label_26987c;
    }
    ctx->pc = 0x269874u;
    SET_GPR_U32(ctx, 31, 0x26987Cu);
    ctx->pc = 0x269878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269874u;
    // 0x269878: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DACA0u, 0x269874u, 0x26987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26987Cu;
label_26987c:
    // 0x26987c: 0x0  nop
    ctx->pc = 0x26987cu;
    // NOP
label_269880:
    // 0x269880: 0x92480016  lbu         $t0, 0x16($s2)
    ctx->pc = 0x269880u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_269884:
    // 0x269884: 0x92460007  lbu         $a2, 0x7($s2)
    ctx->pc = 0x269884u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_269888:
    // 0x269888: 0x26040530  addiu       $a0, $s0, 0x530
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
label_26988c:
    // 0x26988c: 0x92470017  lbu         $a3, 0x17($s2)
    ctx->pc = 0x26988cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 23)));
label_269890:
    // 0x269890: 0xc0b273c  jal         func_2C9CF0
label_269894:
    if (ctx->pc == 0x269894u) {
        ctx->pc = 0x269894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269890u;
        // 0x269894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269898u;
        goto label_269898;
    }
    ctx->pc = 0x269890u;
    SET_GPR_U32(ctx, 31, 0x269898u);
    ctx->pc = 0x269894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269890u;
    // 0x269894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CF0u, 0x269890u, 0x269898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269898u;
label_269898:
    // 0x269898: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x269898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26989c:
    // 0x26989c: 0x0  nop
    ctx->pc = 0x26989cu;
    // NOP
label_2698a0:
    // 0x2698a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2698a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2698a4:
    // 0x2698a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2698a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2698a8:
    // 0x2698a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2698a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2698ac:
    // 0x2698ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2698acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2698b0:
    // 0x2698b0: 0x3e00008  jr          $ra
label_2698b4:
    if (ctx->pc == 0x2698B4u) {
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2698B8u;
        goto label_fallthrough_0x2698b0;
    }
    ctx->pc = 0x2698B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2698B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B0u;
        // 0x2698b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2698B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2698b0:
    ctx->pc = 0x2698B8u;
}
