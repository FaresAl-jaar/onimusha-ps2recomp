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

// Function: sub_003955A0
// Address: 0x3955a0 - 0x395710
void sub_003955A0_0x3955a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003955A0_0x3955a0");
#endif

    switch (ctx->pc) {
        case 0x39568cu: goto label_39568c;
        case 0x39569cu: goto label_39569c;
        case 0x3956acu: goto label_3956ac;
        case 0x3956c8u: goto label_3956c8;
        case 0x3956dcu: goto label_3956dc;
        default: break;
    }

    ctx->pc = 0x3955a0u;

    // 0x3955a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3955a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3955a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3955a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3955a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3955a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3955ac: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3955acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3955b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3955b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3955b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3955b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3955b8: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3955B8u;
    {
        const bool branch_taken_0x3955b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3955b8) {
            ctx->pc = 0x3955F8u;
            goto label_3955f8;
        }
    }
    ctx->pc = 0x3955C0u;
    // 0x3955c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3955C0u;
    {
        const bool branch_taken_0x3955c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3955c0) {
            ctx->pc = 0x3955D0u;
            goto label_3955d0;
        }
    }
    ctx->pc = 0x3955C8u;
    // 0x3955c8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3955C8u;
    {
        const bool branch_taken_0x3955c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3955c8) {
            ctx->pc = 0x395700u;
            goto label_395700;
        }
    }
    ctx->pc = 0x3955D0u;
label_3955d0:
    // 0x3955d0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3955d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3955d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3955d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3955d8: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3955d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3955dc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3955dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3955e0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3955e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3955e4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3955e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3955e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3955e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3955ec: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3955ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3955f0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3955f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3955f4: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3955f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_3955f8:
    // 0x3955f8: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x3955f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x3955fc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3955fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x395600: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x395600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x395604: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x395604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x395608: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x395608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x39560c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x39560cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x395610: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x395610u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x395614: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x395614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x395618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x395618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39561c: 0x0  nop
    ctx->pc = 0x39561cu;
    // NOP
    // 0x395620: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x395620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x395624: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x395624u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x395628: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x395628u;
    {
        const bool branch_taken_0x395628 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395628u;
        // 0x39562c: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395628) {
            ctx->pc = 0x395640u;
            goto label_395640;
        }
    }
    ctx->pc = 0x395630u;
    // 0x395630: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x395634: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x395634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395638: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x395638u;
    {
        const bool branch_taken_0x395638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395638) {
            ctx->pc = 0x395658u;
            goto label_395658;
        }
    }
    ctx->pc = 0x395640u;
label_395640:
    // 0x395640: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x395640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x395644: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x395644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x395648: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x395648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x39564c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x39564cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x395650: 0x0  nop
    ctx->pc = 0x395650u;
    // NOP
    // 0x395654: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x395654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_395658:
    // 0x395658: 0x14a4001b  bne         $a1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x395658u;
    {
        const bool branch_taken_0x395658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x395658) {
            ctx->pc = 0x3956C8u;
            goto label_3956c8;
        }
    }
    ctx->pc = 0x395660u;
    // 0x395660: 0x86042b24  lh          $a0, 0x2B24($s0)
    ctx->pc = 0x395660u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x395664: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x395664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395668: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x395668u;
    {
        const bool branch_taken_0x395668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x395668) {
            ctx->pc = 0x3956C8u;
            goto label_3956c8;
        }
    }
    ctx->pc = 0x395670u;
    // 0x395670: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x395670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x395674: 0x3c060068  lui         $a2, 0x68
    ctx->pc = 0x395674u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)104 << 16));
    // 0x395678: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x395678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39567c: 0x24c622e0  addiu       $a2, $a2, 0x22E0
    ctx->pc = 0x39567cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8928));
    // 0x395680: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x395680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x395684: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x395684u;
    SET_GPR_U32(ctx, 31, 0x39568Cu);
    ctx->pc = 0x395688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395684u;
    // 0x395688: 0x24450440  addiu       $a1, $v0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x395684u, 0x39568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39568Cu;
label_39568c:
    // 0x39568c: 0x86062b24  lh          $a2, 0x2B24($s0)
    ctx->pc = 0x39568cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x395690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x395690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395694: 0xc0e5490  jal         func_395240
    ctx->pc = 0x395694u;
    SET_GPR_U32(ctx, 31, 0x39569Cu);
    ctx->pc = 0x395698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395694u;
    // 0x395698: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395240u, 0x395694u, 0x39569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39569Cu;
label_39569c:
    // 0x39569c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39569Cu;
    {
        const bool branch_taken_0x39569c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3956A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39569Cu;
        // 0x3956a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39569c) {
            ctx->pc = 0x3956C8u;
            goto label_3956c8;
        }
    }
    ctx->pc = 0x3956A4u;
    // 0x3956a4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3956A4u;
    SET_GPR_U32(ctx, 31, 0x3956ACu);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3956A4u, 0x3956ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956ACu;
label_3956ac:
    // 0x3956ac: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3956acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3956b0: 0x3c080068  lui         $t0, 0x68
    ctx->pc = 0x3956b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
    // 0x3956b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3956b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3956b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3956b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3956bc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x3956bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3956c0: 0xc0aa29c  jal         func_2A8A70
    ctx->pc = 0x3956C0u;
    SET_GPR_U32(ctx, 31, 0x3956C8u);
    ctx->pc = 0x3956C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3956C0u;
    // 0x3956c4: 0x250822e0  addiu       $t0, $t0, 0x22E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8A70u, 0x3956C0u, 0x3956C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956C8u;
label_3956c8:
    // 0x3956c8: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3956c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3956cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3956CCu;
    {
        const bool branch_taken_0x3956cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3956D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956CCu;
        // 0x3956d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956cc) {
            ctx->pc = 0x395700u;
            goto label_395700;
        }
    }
    ctx->pc = 0x3956D4u;
    // 0x3956d4: 0xc0e5404  jal         func_395010
    ctx->pc = 0x3956D4u;
    SET_GPR_U32(ctx, 31, 0x3956DCu);
    ctx->pc = 0x395010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395010u, 0x3956D4u, 0x3956DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3956DCu;
label_3956dc:
    // 0x3956dc: 0xa6022b24  sh          $v0, 0x2B24($s0)
    ctx->pc = 0x3956dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 2));
    // 0x3956e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3956e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3956e4: 0x86042b24  lh          $a0, 0x2B24($s0)
    ctx->pc = 0x3956e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3956e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3956E8u;
    {
        const bool branch_taken_0x3956e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956E8u;
        // 0x3956ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956e8) {
            ctx->pc = 0x3956F8u;
            goto label_3956f8;
        }
    }
    ctx->pc = 0x3956F0u;
    // 0x3956f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3956F0u;
    {
        const bool branch_taken_0x3956f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3956F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3956F0u;
        // 0x3956f4: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3956f0) {
            ctx->pc = 0x395700u;
            goto label_395700;
        }
    }
    ctx->pc = 0x3956F8u;
label_3956f8:
    // 0x3956f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3956f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3956fc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3956fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_395700:
    // 0x395700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x395700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x395704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395708: 0x3e00008  jr          $ra
    ctx->pc = 0x395708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395708u;
        // 0x39570c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395710u;
}
