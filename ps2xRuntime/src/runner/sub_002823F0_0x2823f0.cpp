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

// Function: sub_002823F0
// Address: 0x2823f0 - 0x282560
void sub_002823F0_0x2823f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002823F0_0x2823f0");
#endif

    switch (ctx->pc) {
        case 0x282440u: goto label_282440;
        case 0x282530u: goto label_282530;
        default: break;
    }

    ctx->pc = 0x2823f0u;

    // 0x2823f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2823f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2823f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2823f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2823f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2823f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2823fc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x2823fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x282400: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282404: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x282408: 0x87828180  lh          $v0, -0x7E80($gp)
    ctx->pc = 0x282408u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x28240c: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x28240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x282410: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x282410u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x282414: 0x87828184  lh          $v0, -0x7E7C($gp)
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x282418: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x282418u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x28241c: 0x87838188  lh          $v1, -0x7E78($gp)
    ctx->pc = 0x28241cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934920)));
    // 0x282420: 0x9382818a  lbu         $v0, -0x7E76($gp)
    ctx->pc = 0x282420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934922)));
    // 0x282424: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x282424u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x282428: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x282428u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x28242c: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x28242cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x282430: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x282430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x282434: 0x90450024  lbu         $a1, 0x24($v0)
    ctx->pc = 0x282434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x282438: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x282438u;
    SET_GPR_U32(ctx, 31, 0x282440u);
    ctx->pc = 0x28243Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282438u;
    // 0x28243c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x282438u, 0x282440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282440u;
label_282440:
    // 0x282440: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x282440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x282444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x282444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282448: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x282448u;
    {
        const bool branch_taken_0x282448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x28244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282448u;
        // 0x28244c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282448) {
            ctx->pc = 0x282538u;
            goto label_282538;
        }
    }
    ctx->pc = 0x282450u;
    // 0x282450: 0x1085000f  beq         $a0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x282450u;
    {
        const bool branch_taken_0x282450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x282450) {
            ctx->pc = 0x282490u;
            goto label_282490;
        }
    }
    ctx->pc = 0x282458u;
    // 0x282458: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x282458u;
    {
        const bool branch_taken_0x282458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x282458) {
            ctx->pc = 0x282468u;
            goto label_282468;
        }
    }
    ctx->pc = 0x282460u;
    // 0x282460: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x282460u;
    {
        const bool branch_taken_0x282460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282460) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x282468u;
label_282468:
    // 0x282468: 0x9204083a  lbu         $a0, 0x83A($s0)
    ctx->pc = 0x282468u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2106)));
    // 0x28246c: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x28246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x282470: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x282470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x282474: 0x9084002c  lbu         $a0, 0x2C($a0)
    ctx->pc = 0x282474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x282478: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x282478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x28247c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x28247cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282480: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x282480u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x282484: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x282484u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x282488: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x282488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x28248c: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x28248cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
label_282490:
    // 0x282490: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x282490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x282494: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x282494u;
    {
        const bool branch_taken_0x282494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x282494) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x28249Cu;
    // 0x28249c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x28249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2824a0: 0x9206083a  lbu         $a2, 0x83A($s0)
    ctx->pc = 0x2824a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2106)));
    // 0x2824a4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2824a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2824a8: 0x3c058004  lui         $a1, 0x8004
    ctx->pc = 0x2824a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32772 << 16));
    // 0x2824ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2824acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2824b0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2824b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2824b4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2824b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2824b8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2824b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2824bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2824bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2824c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2824c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2824c4: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x2824c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2824c8: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x2824c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2824cc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2824ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2824d0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2824d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2824d4: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2824d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2824d8: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2824d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2824dc: 0xae0507ec  sw          $a1, 0x7EC($s0)
    ctx->pc = 0x2824dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 5));
    // 0x2824e0: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2824e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2824e4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2824e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2824e8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2824e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2824ec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2824ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2824f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2824f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2824f4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2824F4u;
    {
        const bool branch_taken_0x2824f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2824f4) {
            ctx->pc = 0x28250Cu;
            goto label_28250c;
        }
    }
    ctx->pc = 0x2824FCu;
    // 0x2824fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2824fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282500: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282504: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282504u;
    {
        const bool branch_taken_0x282504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282504u;
        // 0x282508: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282504) {
            ctx->pc = 0x282528u;
            goto label_282528;
        }
    }
    ctx->pc = 0x28250Cu;
label_28250c:
    // 0x28250c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x28250cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282510: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282514: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282518: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28251c: 0x0  nop
    ctx->pc = 0x28251cu;
    // NOP
    // 0x282520: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282524: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282528:
    // 0x282528: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282528u;
    SET_GPR_U32(ctx, 31, 0x282530u);
    ctx->pc = 0x28252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282528u;
    // 0x28252c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282528u, 0x282530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282530u;
label_282530:
    // 0x282530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x282530u;
    {
        const bool branch_taken_0x282530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282530) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x282538u;
label_282538:
    // 0x282538: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282538u;
    {
        const bool branch_taken_0x282538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282538) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x282540u;
    // 0x282540: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x282544: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x282544u;
    {
        const bool branch_taken_0x282544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282544u;
        // 0x282548: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282544) {
            ctx->pc = 0x282550u;
            goto label_282550;
        }
    }
    ctx->pc = 0x28254Cu;
    // 0x28254c: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x28254cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_282550:
    // 0x282550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282558: 0x3e00008  jr          $ra
    ctx->pc = 0x282558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282558u;
        // 0x28255c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282560u;
}
