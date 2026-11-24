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

// Function: sub_0039A730
// Address: 0x39a730 - 0x39aa90
void sub_0039A730_0x39a730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A730_0x39a730");
#endif

    switch (ctx->pc) {
        case 0x39a798u: goto label_39a798;
        case 0x39a848u: goto label_39a848;
        case 0x39a858u: goto label_39a858;
        case 0x39a860u: goto label_39a860;
        case 0x39a8c4u: goto label_39a8c4;
        case 0x39a8ecu: goto label_39a8ec;
        case 0x39a900u: goto label_39a900;
        case 0x39a91cu: goto label_39a91c;
        case 0x39a94cu: goto label_39a94c;
        case 0x39a958u: goto label_39a958;
        case 0x39aa38u: goto label_39aa38;
        case 0x39aa64u: goto label_39aa64;
        case 0x39aa74u: goto label_39aa74;
        default: break;
    }

    ctx->pc = 0x39a730u;

    // 0x39a730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39a730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39a734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39a734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39a738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39a738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x39a73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x39a740: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39a744: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39a744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a748: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x39a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x39a74c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39a74cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a750: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a754: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x39a754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x39a758: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x39a758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x39a75c: 0x90860821  lbu         $a2, 0x821($a0)
    ctx->pc = 0x39a75cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x39a760: 0x10c500b3  beq         $a2, $a1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x39A760u;
    {
        const bool branch_taken_0x39a760 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x39A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A760u;
        // 0x39a764: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a760) {
            ctx->pc = 0x39AA30u;
            goto label_39aa30;
        }
    }
    ctx->pc = 0x39A768u;
    // 0x39a768: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39a768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39a76c: 0x10c30088  beq         $a2, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x39A76Cu;
    {
        const bool branch_taken_0x39a76c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x39A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A76Cu;
        // 0x39a770: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a76c) {
            ctx->pc = 0x39A990u;
            goto label_39a990;
        }
    }
    ctx->pc = 0x39A774u;
    // 0x39a774: 0x10c30054  beq         $a2, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x39A774u;
    {
        const bool branch_taken_0x39a774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x39a774) {
            ctx->pc = 0x39A8C8u;
            goto label_39a8c8;
        }
    }
    ctx->pc = 0x39A77Cu;
    // 0x39a77c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A77Cu;
    {
        const bool branch_taken_0x39a77c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a77c) {
            ctx->pc = 0x39A790u;
            goto label_39a790;
        }
    }
    ctx->pc = 0x39A784u;
    // 0x39a784: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x39A784u;
    {
        const bool branch_taken_0x39a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a784) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39A78Cu;
    // 0x39a78c: 0x0  nop
    ctx->pc = 0x39a78cu;
    // NOP
label_39a790:
    // 0x39a790: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39A790u;
    SET_GPR_U32(ctx, 31, 0x39A798u);
    ctx->pc = 0x39A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A790u;
    // 0x39a794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39A790u, 0x39A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A798u;
label_39a798:
    // 0x39a798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a79c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x39a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39a7a0: 0xa2420821  sb          $v0, 0x821($s2)
    ctx->pc = 0x39a7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x39a7a4: 0xa6402b4c  sh          $zero, 0x2B4C($s2)
    ctx->pc = 0x39a7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39a7a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x39a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x39a7ac: 0x92432b24  lbu         $v1, 0x2B24($s2)
    ctx->pc = 0x39a7acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11044)));
    // 0x39a7b0: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x39a7b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x39a7b4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A7B4u;
    {
        const bool branch_taken_0x39a7b4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x39A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7B4u;
        // 0x39a7b8: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7b4) {
            ctx->pc = 0x39A7C8u;
            goto label_39a7c8;
        }
    }
    ctx->pc = 0x39A7BCu;
    // 0x39a7bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39a7bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a7c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39A7C0u;
    {
        const bool branch_taken_0x39a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A7C0u;
        // 0x39a7c4: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a7c0) {
            ctx->pc = 0x39A7E0u;
            goto label_39a7e0;
        }
    }
    ctx->pc = 0x39A7C8u;
label_39a7c8:
    // 0x39a7c8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39a7cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39a7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a7d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39a7d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a7d4: 0x0  nop
    ctx->pc = 0x39a7d4u;
    // NOP
    // 0x39a7d8: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x39a7d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39a7dc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39a7dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_39a7e0:
    // 0x39a7e0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39a7e4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39a7e8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39a7ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39a7f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39a7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39a7f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39a7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a7f8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39a7f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39a7fc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39a7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39a800: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39a800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39a804: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39A804u;
    {
        const bool branch_taken_0x39a804 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a804) {
            ctx->pc = 0x39A81Cu;
            goto label_39a81c;
        }
    }
    ctx->pc = 0x39A80Cu;
    // 0x39a80c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39a80cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39a810: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39a810u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39a814: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39A814u;
    {
        const bool branch_taken_0x39a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A814u;
        // 0x39a818: 0xa6432b4e  sh          $v1, 0x2B4E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a814) {
            ctx->pc = 0x39A838u;
            goto label_39a838;
        }
    }
    ctx->pc = 0x39A81Cu;
label_39a81c:
    // 0x39a81c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39a81cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39a820: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39a820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39a824: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39a824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39a828: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39a828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39a82c: 0x0  nop
    ctx->pc = 0x39a82cu;
    // NOP
    // 0x39a830: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39a830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a834: 0xa6432b4e  sh          $v1, 0x2B4E($s2)
    ctx->pc = 0x39a834u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39a838:
    // 0x39a838: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x39A838u;
    {
        const bool branch_taken_0x39a838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A838u;
        // 0x39a83c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a838) {
            ctx->pc = 0x39A888u;
            goto label_39a888;
        }
    }
    ctx->pc = 0x39A840u;
    // 0x39a840: 0xc0e688c  jal         func_39A230
    ctx->pc = 0x39A840u;
    SET_GPR_U32(ctx, 31, 0x39A848u);
    ctx->pc = 0x39A230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A230u, 0x39A840u, 0x39A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A848u;
label_39a848:
    // 0x39a848: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x39a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x39a84c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39a850: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x39A850u;
    SET_GPR_U32(ctx, 31, 0x39A858u);
    ctx->pc = 0x39A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A850u;
    // 0x39a854: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x39A850u, 0x39A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A858u;
label_39a858:
    // 0x39a858: 0xc096e44  jal         func_25B910
    ctx->pc = 0x39A858u;
    SET_GPR_U32(ctx, 31, 0x39A860u);
    ctx->pc = 0x39A85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A858u;
    // 0x39a85c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x39A858u, 0x39A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A860u;
label_39a860:
    // 0x39a860: 0xa6422b52  sh          $v0, 0x2B52($s2)
    ctx->pc = 0x39a860u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11090), (uint16_t)GPR_U32(ctx, 2));
    // 0x39a864: 0x86432b4e  lh          $v1, 0x2B4E($s2)
    ctx->pc = 0x39a864u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x39a868: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x39a868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x39a86c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x39a86cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39a870: 0x0  nop
    ctx->pc = 0x39a870u;
    // NOP
    // 0x39a874: 0x0  nop
    ctx->pc = 0x39a874u;
    // NOP
    // 0x39a878: 0x1012  mflo        $v0
    ctx->pc = 0x39a878u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x39a87c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39A87Cu;
    {
        const bool branch_taken_0x39a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A87Cu;
        // 0x39a880: 0xa6422b56  sh          $v0, 0x2B56($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11094), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a87c) {
            ctx->pc = 0x39A890u;
            goto label_39a890;
        }
    }
    ctx->pc = 0x39A884u;
    // 0x39a884: 0x0  nop
    ctx->pc = 0x39a884u;
    // NOP
label_39a888:
    // 0x39a888: 0x864200c2  lh          $v0, 0xC2($s2)
    ctx->pc = 0x39a888u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x39a88c: 0xa6422b52  sh          $v0, 0x2B52($s2)
    ctx->pc = 0x39a88cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11090), (uint16_t)GPR_U32(ctx, 2));
label_39a890:
    // 0x39a890: 0x92432b25  lbu         $v1, 0x2B25($s2)
    ctx->pc = 0x39a890u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11045)));
    // 0x39a894: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x39a894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x39a898: 0x3c022200  lui         $v0, 0x2200
    ctx->pc = 0x39a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8704 << 16));
    // 0x39a89c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x39a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x39a8a0: 0x34455502  ori         $a1, $v0, 0x5502
    ctx->pc = 0x39a8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21762);
    // 0x39a8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39a8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8a8: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x39a8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x39a8ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39a8acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x39a8b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39a8b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8b8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39a8b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a8bc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x39A8BCu;
    SET_GPR_U32(ctx, 31, 0x39A8C4u);
    ctx->pc = 0x39A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8BCu;
    // 0x39a8c0: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x39A8BCu, 0x39A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8C4u;
label_39a8c4:
    // 0x39a8c4: 0x0  nop
    ctx->pc = 0x39a8c4u;
    // NOP
label_39a8c8:
    // 0x39a8c8: 0x86462b4e  lh          $a2, 0x2B4E($s2)
    ctx->pc = 0x39a8c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x39a8cc: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A8CCu;
    {
        const bool branch_taken_0x39a8cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8CCu;
        // 0x39a8d0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a8cc) {
            ctx->pc = 0x39A8E0u;
            goto label_39a8e0;
        }
    }
    ctx->pc = 0x39A8D4u;
    // 0x39a8d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a8d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39A8D8u;
    {
        const bool branch_taken_0x39a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A8D8u;
        // 0x39a8dc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a8d8) {
            ctx->pc = 0x39A8F0u;
            goto label_39a8f0;
        }
    }
    ctx->pc = 0x39A8E0u;
label_39a8e0:
    // 0x39a8e0: 0x86442b4c  lh          $a0, 0x2B4C($s2)
    ctx->pc = 0x39a8e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11084)));
    // 0x39a8e4: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x39A8E4u;
    SET_GPR_U32(ctx, 31, 0x39A8ECu);
    ctx->pc = 0x39A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8E4u;
    // 0x39a8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x39A8E4u, 0x39A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A8ECu;
label_39a8ec:
    // 0x39a8ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_39a8f0:
    // 0x39a8f0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x39a8f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39a8f4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39a8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39a8f8: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x39A8F8u;
    SET_GPR_U32(ctx, 31, 0x39A900u);
    ctx->pc = 0x39A8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A8F8u;
    // 0x39a8fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x39A8F8u, 0x39A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A900u;
label_39a900:
    // 0x39a900: 0x3c02457f  lui         $v0, 0x457F
    ctx->pc = 0x39a900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17791 << 16));
    // 0x39a904: 0x3c034540  lui         $v1, 0x4540
    ctx->pc = 0x39a904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17728 << 16));
    // 0x39a908: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x39a908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x39a90c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x39a90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39a910: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x39a910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39a914: 0xc0767dc  jal         func_1D9F70
    ctx->pc = 0x39A914u;
    SET_GPR_U32(ctx, 31, 0x39A91Cu);
    ctx->pc = 0x39A918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A914u;
    // 0x39a918: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F70u, 0x39A914u, 0x39A91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A91Cu;
label_39a91c:
    // 0x39a91c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39a91cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39a920: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39a920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39a924: 0x0  nop
    ctx->pc = 0x39a924u;
    // NOP
    // 0x39a928: 0xa64200c0  sh          $v0, 0xC0($s2)
    ctx->pc = 0x39a928u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x39a92c: 0x864200c0  lh          $v0, 0xC0($s2)
    ctx->pc = 0x39a92cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 192)));
    // 0x39a930: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x39a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x39a934: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A934u;
    {
        const bool branch_taken_0x39a934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A934u;
        // 0x39a938: 0xa64200c0  sh          $v0, 0xC0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 192), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a934) {
            ctx->pc = 0x39A950u;
            goto label_39a950;
        }
    }
    ctx->pc = 0x39A93Cu;
    // 0x39a93c: 0x86452b52  lh          $a1, 0x2B52($s2)
    ctx->pc = 0x39a93cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11090)));
    // 0x39a940: 0x86462b56  lh          $a2, 0x2B56($s2)
    ctx->pc = 0x39a940u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11094)));
    // 0x39a944: 0xc097498  jal         func_25D260
    ctx->pc = 0x39A944u;
    SET_GPR_U32(ctx, 31, 0x39A94Cu);
    ctx->pc = 0x39A948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A944u;
    // 0x39a948: 0x864400c2  lh          $a0, 0xC2($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D260u, 0x39A944u, 0x39A94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A94Cu;
label_39a94c:
    // 0x39a94c: 0xa64200c2  sh          $v0, 0xC2($s2)
    ctx->pc = 0x39a94cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
label_39a950:
    // 0x39a950: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39A950u;
    SET_GPR_U32(ctx, 31, 0x39A958u);
    ctx->pc = 0x39A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A950u;
    // 0x39a954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39A950u, 0x39A958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A958u;
label_39a958:
    // 0x39a958: 0x86432b4c  lh          $v1, 0x2B4C($s2)
    ctx->pc = 0x39a958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11084)));
    // 0x39a95c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39a960: 0xa6432b4c  sh          $v1, 0x2B4C($s2)
    ctx->pc = 0x39a960u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11084), (uint16_t)GPR_U32(ctx, 3));
    // 0x39a964: 0x86442b4c  lh          $a0, 0x2B4C($s2)
    ctx->pc = 0x39a964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11084)));
    // 0x39a968: 0x86432b4e  lh          $v1, 0x2B4E($s2)
    ctx->pc = 0x39a968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x39a96c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x39a96cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39a970: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x39A970u;
    {
        const bool branch_taken_0x39a970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a970) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39A978u;
    // 0x39a978: 0x864400c2  lh          $a0, 0xC2($s2)
    ctx->pc = 0x39a978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x39a97c: 0x86432b52  lh          $v1, 0x2B52($s2)
    ctx->pc = 0x39a97cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11090)));
    // 0x39a980: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x39A980u;
    {
        const bool branch_taken_0x39a980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A980u;
        // 0x39a984: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a980) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39A988u;
    // 0x39a988: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x39A988u;
    {
        const bool branch_taken_0x39a988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A988u;
        // 0x39a98c: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a988) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39A990u;
label_39a990:
    // 0x39a990: 0xa2450821  sb          $a1, 0x821($s2)
    ctx->pc = 0x39a990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x39a994: 0xa6402b4c  sh          $zero, 0x2B4C($s2)
    ctx->pc = 0x39a994u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11084), (uint16_t)GPR_U32(ctx, 0));
    // 0x39a998: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x39a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x39a99c: 0x92432b24  lbu         $v1, 0x2B24($s2)
    ctx->pc = 0x39a99cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11044)));
    // 0x39a9a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39a9a4: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x39a9a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x39a9a8: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A9A8u;
    {
        const bool branch_taken_0x39a9a8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x39A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9A8u;
        // 0x39a9ac: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9a8) {
            ctx->pc = 0x39A9BCu;
            goto label_39a9bc;
        }
    }
    ctx->pc = 0x39A9B0u;
    // 0x39a9b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x39a9b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a9b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39A9B4u;
    {
        const bool branch_taken_0x39a9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A9B4u;
        // 0x39a9b8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a9b4) {
            ctx->pc = 0x39A9D4u;
            goto label_39a9d4;
        }
    }
    ctx->pc = 0x39A9BCu;
label_39a9bc:
    // 0x39a9bc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x39a9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x39a9c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39a9c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39a9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a9c8: 0x0  nop
    ctx->pc = 0x39a9c8u;
    // NOP
    // 0x39a9cc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x39a9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x39a9d0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x39a9d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_39a9d4:
    // 0x39a9d4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39a9d8: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39a9dc: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39a9e0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39a9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39a9e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39a9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39a9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39a9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39a9ec: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39a9ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39a9f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39a9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39a9f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39a9f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39a9f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39A9F8u;
    {
        const bool branch_taken_0x39a9f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39a9f8) {
            ctx->pc = 0x39AA10u;
            goto label_39aa10;
        }
    }
    ctx->pc = 0x39AA00u;
    // 0x39aa00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39aa00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39aa04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39aa04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39aa08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39AA08u;
    {
        const bool branch_taken_0x39aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA08u;
        // 0x39aa0c: 0xa6432b4e  sh          $v1, 0x2B4E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa08) {
            ctx->pc = 0x39AA2Cu;
            goto label_39aa2c;
        }
    }
    ctx->pc = 0x39AA10u;
label_39aa10:
    // 0x39aa10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39aa10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39aa14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39aa18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39aa18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39aa1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39aa1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39aa20: 0x0  nop
    ctx->pc = 0x39aa20u;
    // NOP
    // 0x39aa24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39aa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39aa28: 0xa6432b4e  sh          $v1, 0x2B4E($s2)
    ctx->pc = 0x39aa28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11086), (uint16_t)GPR_U32(ctx, 3));
label_39aa2c:
    // 0x39aa2c: 0x0  nop
    ctx->pc = 0x39aa2cu;
    // NOP
label_39aa30:
    // 0x39aa30: 0xc0e68b8  jal         func_39A2E0
    ctx->pc = 0x39AA30u;
    SET_GPR_U32(ctx, 31, 0x39AA38u);
    ctx->pc = 0x39AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA30u;
    // 0x39aa34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A2E0u, 0x39AA30u, 0x39AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA38u;
label_39aa38:
    // 0x39aa38: 0x86442b4c  lh          $a0, 0x2B4C($s2)
    ctx->pc = 0x39aa38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11084)));
    // 0x39aa3c: 0x86432b4e  lh          $v1, 0x2B4E($s2)
    ctx->pc = 0x39aa3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 11086)));
    // 0x39aa40: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x39aa40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39aa44: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AA44u;
    {
        const bool branch_taken_0x39aa44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA44u;
        // 0x39aa48: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa44) {
            ctx->pc = 0x39AA58u;
            goto label_39aa58;
        }
    }
    ctx->pc = 0x39AA4Cu;
    // 0x39aa4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39AA4Cu;
    {
        const bool branch_taken_0x39aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA4Cu;
        // 0x39aa50: 0xa6432b4c  sh          $v1, 0x2B4C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 11084), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa4c) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39AA54u;
    // 0x39aa54: 0x0  nop
    ctx->pc = 0x39aa54u;
    // NOP
label_39aa58:
    // 0x39aa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39aa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39aa5c: 0xc0e6924  jal         func_39A490
    ctx->pc = 0x39AA5Cu;
    SET_GPR_U32(ctx, 31, 0x39AA64u);
    ctx->pc = 0x39AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA5Cu;
    // 0x39aa60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A490u, 0x39AA5Cu, 0x39AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA64u;
label_39aa64:
    // 0x39aa64: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39AA64u;
    {
        const bool branch_taken_0x39aa64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA64u;
        // 0x39aa68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39aa64) {
            ctx->pc = 0x39AA78u;
            goto label_39aa78;
        }
    }
    ctx->pc = 0x39AA6Cu;
    // 0x39aa6c: 0xc0e68e0  jal         func_39A380
    ctx->pc = 0x39AA6Cu;
    SET_GPR_U32(ctx, 31, 0x39AA74u);
    ctx->pc = 0x39AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AA6Cu;
    // 0x39aa70: 0x24050045  addiu       $a1, $zero, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A380u, 0x39AA6Cu, 0x39AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AA74u;
label_39aa74:
    // 0x39aa74: 0x0  nop
    ctx->pc = 0x39aa74u;
    // NOP
label_39aa78:
    // 0x39aa78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39aa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39aa7c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39aa7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39aa80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39aa80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39aa84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39aa84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39aa88: 0x3e00008  jr          $ra
    ctx->pc = 0x39AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AA88u;
        // 0x39aa8c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AA90u;
}
