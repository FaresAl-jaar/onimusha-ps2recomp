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

// Function: sub_0039B6F0
// Address: 0x39b6f0 - 0x39b828
void sub_0039B6F0_0x39b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B6F0_0x39b6f0");
#endif

    switch (ctx->pc) {
        case 0x39b6f0u: goto label_39b6f0;
        case 0x39b6f4u: goto label_39b6f4;
        case 0x39b6f8u: goto label_39b6f8;
        case 0x39b6fcu: goto label_39b6fc;
        case 0x39b700u: goto label_39b700;
        case 0x39b704u: goto label_39b704;
        case 0x39b708u: goto label_39b708;
        case 0x39b70cu: goto label_39b70c;
        case 0x39b710u: goto label_39b710;
        case 0x39b714u: goto label_39b714;
        case 0x39b718u: goto label_39b718;
        case 0x39b71cu: goto label_39b71c;
        case 0x39b720u: goto label_39b720;
        case 0x39b724u: goto label_39b724;
        case 0x39b728u: goto label_39b728;
        case 0x39b72cu: goto label_39b72c;
        case 0x39b730u: goto label_39b730;
        case 0x39b734u: goto label_39b734;
        case 0x39b738u: goto label_39b738;
        case 0x39b73cu: goto label_39b73c;
        case 0x39b740u: goto label_39b740;
        case 0x39b744u: goto label_39b744;
        case 0x39b748u: goto label_39b748;
        case 0x39b74cu: goto label_39b74c;
        case 0x39b750u: goto label_39b750;
        case 0x39b754u: goto label_39b754;
        case 0x39b758u: goto label_39b758;
        case 0x39b75cu: goto label_39b75c;
        case 0x39b760u: goto label_39b760;
        case 0x39b764u: goto label_39b764;
        case 0x39b768u: goto label_39b768;
        case 0x39b76cu: goto label_39b76c;
        case 0x39b770u: goto label_39b770;
        case 0x39b774u: goto label_39b774;
        case 0x39b778u: goto label_39b778;
        case 0x39b77cu: goto label_39b77c;
        case 0x39b780u: goto label_39b780;
        case 0x39b784u: goto label_39b784;
        case 0x39b788u: goto label_39b788;
        case 0x39b78cu: goto label_39b78c;
        case 0x39b790u: goto label_39b790;
        case 0x39b794u: goto label_39b794;
        case 0x39b798u: goto label_39b798;
        case 0x39b79cu: goto label_39b79c;
        case 0x39b7a0u: goto label_39b7a0;
        case 0x39b7a4u: goto label_39b7a4;
        case 0x39b7a8u: goto label_39b7a8;
        case 0x39b7acu: goto label_39b7ac;
        case 0x39b7b0u: goto label_39b7b0;
        case 0x39b7b4u: goto label_39b7b4;
        case 0x39b7b8u: goto label_39b7b8;
        case 0x39b7bcu: goto label_39b7bc;
        case 0x39b7c0u: goto label_39b7c0;
        case 0x39b7c4u: goto label_39b7c4;
        case 0x39b7c8u: goto label_39b7c8;
        case 0x39b7ccu: goto label_39b7cc;
        case 0x39b7d0u: goto label_39b7d0;
        case 0x39b7d4u: goto label_39b7d4;
        case 0x39b7d8u: goto label_39b7d8;
        case 0x39b7dcu: goto label_39b7dc;
        case 0x39b7e0u: goto label_39b7e0;
        case 0x39b7e4u: goto label_39b7e4;
        case 0x39b7e8u: goto label_39b7e8;
        case 0x39b7ecu: goto label_39b7ec;
        case 0x39b7f0u: goto label_39b7f0;
        case 0x39b7f4u: goto label_39b7f4;
        case 0x39b7f8u: goto label_39b7f8;
        case 0x39b7fcu: goto label_39b7fc;
        case 0x39b800u: goto label_39b800;
        case 0x39b804u: goto label_39b804;
        case 0x39b808u: goto label_39b808;
        case 0x39b80cu: goto label_39b80c;
        case 0x39b810u: goto label_39b810;
        case 0x39b814u: goto label_39b814;
        case 0x39b818u: goto label_39b818;
        case 0x39b81cu: goto label_39b81c;
        case 0x39b820u: goto label_39b820;
        case 0x39b824u: goto label_39b824;
        default: break;
    }

    ctx->pc = 0x39b6f0u;

label_39b6f0:
    // 0x39b6f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39b6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39b6f4:
    // 0x39b6f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b6f8:
    // 0x39b6f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39b6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39b6fc:
    // 0x39b6fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39b6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39b700:
    // 0x39b700: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39b700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_39b704:
    // 0x39b704: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x39b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_39b708:
    // 0x39b708: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39b708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
label_39b70c:
    // 0x39b70c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x39b70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_39b710:
    // 0x39b710: 0x10650023  beq         $v1, $a1, . + 4 + (0x23 << 2)
label_39b714:
    if (ctx->pc == 0x39B714u) {
        ctx->pc = 0x39B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B710u;
        // 0x39b714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B718u;
        goto label_39b718;
    }
    ctx->pc = 0x39B710u;
    {
        const bool branch_taken_0x39b710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x39B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B710u;
        // 0x39b714: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b710) {
            ctx->pc = 0x39B7A0u;
            goto label_39b7a0;
        }
    }
    ctx->pc = 0x39B718u;
label_39b718:
    // 0x39b718: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_39b71c:
    if (ctx->pc == 0x39B71Cu) {
        ctx->pc = 0x39B720u;
        goto label_39b720;
    }
    ctx->pc = 0x39B718u;
    {
        const bool branch_taken_0x39b718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b718) {
            ctx->pc = 0x39B728u;
            goto label_39b728;
        }
    }
    ctx->pc = 0x39B720u;
label_39b720:
    // 0x39b720: 0x1000003d  b           . + 4 + (0x3D << 2)
label_39b724:
    if (ctx->pc == 0x39B724u) {
        ctx->pc = 0x39B728u;
        goto label_39b728;
    }
    ctx->pc = 0x39B720u;
    {
        const bool branch_taken_0x39b720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b720) {
            ctx->pc = 0x39B818u;
            goto label_39b818;
        }
    }
    ctx->pc = 0x39B728u;
label_39b728:
    // 0x39b728: 0xc0e68fc  jal         func_39A3F0
label_39b72c:
    if (ctx->pc == 0x39B72Cu) {
        ctx->pc = 0x39B730u;
        goto label_39b730;
    }
    ctx->pc = 0x39B728u;
    SET_GPR_U32(ctx, 31, 0x39B730u);
    ctx->pc = 0x39A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A3F0u, 0x39B728u, 0x39B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B730u;
label_39b730:
    // 0x39b730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b734:
    // 0x39b734: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x39b734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_39b738:
    // 0x39b738: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39b738u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39b73c:
    // 0x39b73c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39b73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_39b740:
    // 0x39b740: 0xa6002b4c  sh          $zero, 0x2B4C($s0)
    ctx->pc = 0x39b740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 0));
label_39b744:
    // 0x39b744: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_39b748:
    // 0x39b748: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_39b74c:
    // 0x39b74c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x39b74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_39b750:
    // 0x39b750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x39b750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39b754:
    // 0x39b754: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39b754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_39b758:
    // 0x39b758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39b758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39b75c:
    // 0x39b75c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39b75cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_39b760:
    // 0x39b760: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39b760u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_39b764:
    // 0x39b764: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39b764u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39b768:
    // 0x39b768: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_39b76c:
    if (ctx->pc == 0x39B76Cu) {
        ctx->pc = 0x39B770u;
        goto label_39b770;
    }
    ctx->pc = 0x39B768u;
    {
        const bool branch_taken_0x39b768 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39b768) {
            ctx->pc = 0x39B780u;
            goto label_39b780;
        }
    }
    ctx->pc = 0x39B770u;
label_39b770:
    // 0x39b770: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_39b774:
    // 0x39b774: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b778:
    // 0x39b778: 0x10000008  b           . + 4 + (0x8 << 2)
label_39b77c:
    if (ctx->pc == 0x39B77Cu) {
        ctx->pc = 0x39B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B778u;
        // 0x39b77c: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B780u;
        goto label_39b780;
    }
    ctx->pc = 0x39B778u;
    {
        const bool branch_taken_0x39b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B778u;
        // 0x39b77c: 0xa6032b4e  sh          $v1, 0x2B4E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b778) {
            ctx->pc = 0x39B79Cu;
            goto label_39b79c;
        }
    }
    ctx->pc = 0x39B780u;
label_39b780:
    // 0x39b780: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39b780u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_39b784:
    // 0x39b784: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_39b788:
    // 0x39b788: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39b788u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_39b78c:
    // 0x39b78c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39b78cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_39b790:
    // 0x39b790: 0x0  nop
    ctx->pc = 0x39b790u;
    // NOP
label_39b794:
    // 0x39b794: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39b794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_39b798:
    // 0x39b798: 0xa6032b4e  sh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39b798u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39b79c:
    // 0x39b79c: 0x0  nop
    ctx->pc = 0x39b79cu;
    // NOP
label_39b7a0:
    // 0x39b7a0: 0x86072b4c  lh          $a3, 0x2B4C($s0)
    ctx->pc = 0x39b7a0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
label_39b7a4:
    // 0x39b7a4: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39b7a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
label_39b7a8:
    // 0x39b7a8: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x39b7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_39b7ac:
    // 0x39b7ac: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x39b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_39b7b0:
    // 0x39b7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b7b4:
    // 0x39b7b4: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x39b7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_39b7b8:
    // 0x39b7b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x39b7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_39b7bc:
    // 0x39b7bc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x39b7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_39b7c0:
    // 0x39b7c0: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x39b7c0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_39b7c4:
    // 0x39b7c4: 0x0  nop
    ctx->pc = 0x39b7c4u;
    // NOP
label_39b7c8:
    // 0x39b7c8: 0x0  nop
    ctx->pc = 0x39b7c8u;
    // NOP
label_39b7cc:
    // 0x39b7cc: 0x1812  mflo        $v1
    ctx->pc = 0x39b7ccu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_39b7d0:
    // 0x39b7d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39b7d4:
    // 0x39b7d4: 0xc0973ec  jal         func_25CFB0
label_39b7d8:
    if (ctx->pc == 0x39B7D8u) {
        ctx->pc = 0x39B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B7D4u;
        // 0x39b7d8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B7DCu;
        goto label_39b7dc;
    }
    ctx->pc = 0x39B7D4u;
    SET_GPR_U32(ctx, 31, 0x39B7DCu);
    ctx->pc = 0x39B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B7D4u;
    // 0x39b7d8: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CFB0u, 0x39B7D4u, 0x39B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B7DCu;
label_39b7dc:
    // 0x39b7dc: 0x86032b4c  lh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39b7dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
label_39b7e0:
    // 0x39b7e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39b7e4:
    // 0x39b7e4: 0xa6032b4c  sh          $v1, 0x2B4C($s0)
    ctx->pc = 0x39b7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11084), (uint16_t)GPR_U32(ctx, 3));
label_39b7e8:
    // 0x39b7e8: 0x86042b4c  lh          $a0, 0x2B4C($s0)
    ctx->pc = 0x39b7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11084)));
label_39b7ec:
    // 0x39b7ec: 0x86032b4e  lh          $v1, 0x2B4E($s0)
    ctx->pc = 0x39b7ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11086)));
label_39b7f0:
    // 0x39b7f0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39b7f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39b7f4:
    // 0x39b7f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_39b7f8:
    if (ctx->pc == 0x39B7F8u) {
        ctx->pc = 0x39B7FCu;
        goto label_39b7fc;
    }
    ctx->pc = 0x39B7F4u;
    {
        const bool branch_taken_0x39b7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39b7f4) {
            ctx->pc = 0x39B818u;
            goto label_39b818;
        }
    }
    ctx->pc = 0x39B7FCu;
label_39b7fc:
    // 0x39b7fc: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x39b7fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_39b800:
    // 0x39b800: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x39b800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_39b804:
    // 0x39b804: 0x320f809  jalr        $t9
label_39b808:
    if (ctx->pc == 0x39B808u) {
        ctx->pc = 0x39B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B804u;
        // 0x39b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B80Cu;
        goto label_39b80c;
    }
    ctx->pc = 0x39B804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39B80Cu);
        ctx->pc = 0x39B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B804u;
        // 0x39b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B804u, 0x39B80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B80Cu;
label_39b80c:
    // 0x39b80c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x39b80cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_39b810:
    // 0x39b810: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39b810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39b814:
    // 0x39b814: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x39b814u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_39b818:
    // 0x39b818: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39b818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b81c:
    // 0x39b81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39b81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39b820:
    // 0x39b820: 0x3e00008  jr          $ra
label_39b824:
    if (ctx->pc == 0x39B824u) {
        ctx->pc = 0x39B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B820u;
        // 0x39b824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B828u;
        goto label_fallthrough_0x39b820;
    }
    ctx->pc = 0x39B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B820u;
        // 0x39b824: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b820:
    ctx->pc = 0x39B828u;
}
