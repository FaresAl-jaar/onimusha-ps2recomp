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

// Function: sub_0039F660
// Address: 0x39f660 - 0x39f7ec
void sub_0039F660_0x39f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F660_0x39f660");
#endif

    switch (ctx->pc) {
        case 0x39f6bcu: goto label_39f6bc;
        case 0x39f718u: goto label_39f718;
        case 0x39f79cu: goto label_39f79c;
        default: break;
    }

    ctx->pc = 0x39f660u;

    // 0x39f660: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x39f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x39f664: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x39f668: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39f668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x39f66c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39f66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x39f670: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x39f670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f674: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39f674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x39f678: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x39f678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f67c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39f67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39f680: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39f680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f684: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39f684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39f688: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39f688u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f68c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x39f68cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f690: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39F690u;
    {
        const bool branch_taken_0x39f690 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F690u;
        // 0x39f694: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f690) {
            ctx->pc = 0x39F6A0u;
            goto label_39f6a0;
        }
    }
    ctx->pc = 0x39F698u;
    // 0x39f698: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x39F698u;
    {
        const bool branch_taken_0x39f698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F698u;
        // 0x39f69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f698) {
            ctx->pc = 0x39F7C8u;
            goto label_39f7c8;
        }
    }
    ctx->pc = 0x39F6A0u;
label_39f6a0:
    // 0x39f6a0: 0x3c08003a  lui         $t0, 0x3A
    ctx->pc = 0x39f6a0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)58 << 16));
    // 0x39f6a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39f6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39f6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39f6acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6b0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x39f6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x39f6b4: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x39F6B4u;
    SET_GPR_U32(ctx, 31, 0x39F6BCu);
    ctx->pc = 0x39F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F6B4u;
    // 0x39f6b8: 0x2508f5f0  addiu       $t0, $t0, -0xA10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x39F6B4u, 0x39F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F6BCu;
label_39f6bc:
    // 0x39f6bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39f6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6c0: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x39F6C0u;
    {
        const bool branch_taken_0x39f6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39f6c0) {
            ctx->pc = 0x39F7C0u;
            goto label_39f7c0;
        }
    }
    ctx->pc = 0x39F6C8u;
    // 0x39f6c8: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x39f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x39f6cc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x39f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x39f6d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f6d4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x39f6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6d8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39f6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6dc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x39f6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6e4: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x39f6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x39f6e8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x39f6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f6ec: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x39f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39f6f0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x39f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f6f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x39f6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x39f6f8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x39f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f6fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x39f6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x39f700: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x39f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x39f704: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x39f704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x39f708: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x39f708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39f70c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x39f70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x39f710: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x39F710u;
    SET_GPR_U32(ctx, 31, 0x39F718u);
    ctx->pc = 0x39F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F710u;
    // 0x39f714: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x39F710u, 0x39F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F718u;
label_39f718:
    // 0x39f718: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x39f718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39f71c: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x39f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x39f720: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x39f720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x39f724: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x39f724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x39f728: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x39f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39f72c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x39f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x39f730: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x39f730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x39f734: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x39f734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x39f738: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39f738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39f73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x39f73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39f740: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x39f740u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x39f744: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x39f744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x39f748: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x39f748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39f74c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39F74Cu;
    {
        const bool branch_taken_0x39f74c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39f74c) {
            ctx->pc = 0x39F764u;
            goto label_39f764;
        }
    }
    ctx->pc = 0x39F754u;
    // 0x39f754: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39f754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39f758: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39f758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39f75c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39F75Cu;
    {
        const bool branch_taken_0x39f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F75Cu;
        // 0x39f760: 0xa6030528  sh          $v1, 0x528($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f75c) {
            ctx->pc = 0x39F780u;
            goto label_39f780;
        }
    }
    ctx->pc = 0x39F764u;
label_39f764:
    // 0x39f764: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x39f764u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x39f768: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x39f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x39f76c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39f76cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39f770: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x39f770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39f774: 0x0  nop
    ctx->pc = 0x39f774u;
    // NOP
    // 0x39f778: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x39f778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x39f77c: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x39f77cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
label_39f780:
    // 0x39f780: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x39f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x39f784: 0xa602052a  sh          $v0, 0x52A($s0)
    ctx->pc = 0x39f784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 2));
    // 0x39f788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f790: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x39f790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f794: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x39F794u;
    SET_GPR_U32(ctx, 31, 0x39F79Cu);
    ctx->pc = 0x39F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F794u;
    // 0x39f798: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x39F794u, 0x39F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F79Cu;
label_39f79c:
    // 0x39f79c: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x39f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x39f7a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x39f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x39f7a4: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x39f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x39f7a8: 0xa2150558  sb          $s5, 0x558($s0)
    ctx->pc = 0x39f7a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 21));
    // 0x39f7ac: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x39f7acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x39f7b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x39f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x39f7b4: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x39f7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x39f7b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F7B8u;
    {
        const bool branch_taken_0x39f7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7B8u;
        // 0x39f7bc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7b8) {
            ctx->pc = 0x39F7C8u;
            goto label_39f7c8;
        }
    }
    ctx->pc = 0x39F7C0u;
label_39f7c0:
    // 0x39f7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39f7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f7c4: 0x0  nop
    ctx->pc = 0x39f7c4u;
    // NOP
label_39f7c8:
    // 0x39f7c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x39f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39f7cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39f7ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39f7d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39f7d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39f7d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39f7d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39f7d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39f7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f7dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39f7dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f7e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39f7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7E4u;
        // 0x39f7e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F7ECu;
}
