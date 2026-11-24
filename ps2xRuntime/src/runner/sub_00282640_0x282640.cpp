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

// Function: sub_00282640
// Address: 0x282640 - 0x282788
void sub_00282640_0x282640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282640_0x282640");
#endif

    switch (ctx->pc) {
        case 0x282678u: goto label_282678;
        case 0x282758u: goto label_282758;
        default: break;
    }

    ctx->pc = 0x282640u;

    // 0x282640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x282640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x282644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x282648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28264c: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x28264cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x282650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282654: 0x8783818c  lh          $v1, -0x7E74($gp)
    ctx->pc = 0x282654u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934924)));
    // 0x282658: 0x9382818e  lbu         $v0, -0x7E72($gp)
    ctx->pc = 0x282658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934926)));
    // 0x28265c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x28265cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x282660: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x282660u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x282664: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x282664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x282668: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x282668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x28266c: 0x9045002c  lbu         $a1, 0x2C($v0)
    ctx->pc = 0x28266cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x282670: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x282670u;
    SET_GPR_U32(ctx, 31, 0x282678u);
    ctx->pc = 0x282674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282670u;
    // 0x282674: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x282670u, 0x282678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282678u;
label_282678:
    // 0x282678: 0x92050821  lbu         $a1, 0x821($s0)
    ctx->pc = 0x282678u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x28267c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28267cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282680: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x282680u;
    {
        const bool branch_taken_0x282680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x282684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282680u;
        // 0x282684: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282680) {
            ctx->pc = 0x282760u;
            goto label_282760;
        }
    }
    ctx->pc = 0x282688u;
    // 0x282688: 0x10a4000d  beq         $a1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x282688u;
    {
        const bool branch_taken_0x282688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x282688) {
            ctx->pc = 0x2826C0u;
            goto label_2826c0;
        }
    }
    ctx->pc = 0x282690u;
    // 0x282690: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282690u;
    {
        const bool branch_taken_0x282690 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x282690) {
            ctx->pc = 0x2826A0u;
            goto label_2826a0;
        }
    }
    ctx->pc = 0x282698u;
    // 0x282698: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x282698u;
    {
        const bool branch_taken_0x282698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282698) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x2826A0u;
label_2826a0:
    // 0x2826a0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2826a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826a4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2826a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826a8: 0x24030099  addiu       $v1, $zero, 0x99
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x2826ac: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2826acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2826b0: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2826b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2826b4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2826b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826b8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2826b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2826bc: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x2826bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
label_2826c0:
    // 0x2826c0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2826c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2826c4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2826C4u;
    {
        const bool branch_taken_0x2826c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2826c4) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x2826CCu;
    // 0x2826cc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2826ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826d0: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x2826d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x2826d4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2826d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826d8: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2826d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2826dc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x2826dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x2826e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2826e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2826e4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2826e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2826e8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2826e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2826ec: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x2826ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x2826f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2826f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2826f4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2826f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x2826f8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2826f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2826fc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2826fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x282700: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x282700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x282704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x282704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x282708: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x282708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x28270c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28270cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x282710: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x282710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x282714: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x282714u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x282718: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x282718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28271c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28271Cu;
    {
        const bool branch_taken_0x28271c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28271c) {
            ctx->pc = 0x282734u;
            goto label_282734;
        }
    }
    ctx->pc = 0x282724u;
    // 0x282724: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282728: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x28272c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28272Cu;
    {
        const bool branch_taken_0x28272c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28272Cu;
        // 0x282730: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28272c) {
            ctx->pc = 0x282750u;
            goto label_282750;
        }
    }
    ctx->pc = 0x282734u;
label_282734:
    // 0x282734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282738: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28273c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x28273cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282740: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282744: 0x0  nop
    ctx->pc = 0x282744u;
    // NOP
    // 0x282748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28274c: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x28274cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282750:
    // 0x282750: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282750u;
    SET_GPR_U32(ctx, 31, 0x282758u);
    ctx->pc = 0x282754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282750u;
    // 0x282754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282750u, 0x282758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282758u;
label_282758:
    // 0x282758: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x282758u;
    {
        const bool branch_taken_0x282758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282758) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282760u;
label_282760:
    // 0x282760: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x282760u;
    {
        const bool branch_taken_0x282760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282760) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282768u;
    // 0x282768: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x28276c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x28276Cu;
    {
        const bool branch_taken_0x28276c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28276Cu;
        // 0x282770: 0x2403009a  addiu       $v1, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28276c) {
            ctx->pc = 0x282778u;
            goto label_282778;
        }
    }
    ctx->pc = 0x282774u;
    // 0x282774: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x282774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_282778:
    // 0x282778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28277c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28277cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282780: 0x3e00008  jr          $ra
    ctx->pc = 0x282780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282780u;
        // 0x282784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282788u;
}
