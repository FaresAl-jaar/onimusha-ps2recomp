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

// Function: sub_0031B5D0
// Address: 0x31b5d0 - 0x31b7c8
void sub_0031B5D0_0x31b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B5D0_0x31b5d0");
#endif

    switch (ctx->pc) {
        case 0x31b614u: goto label_31b614;
        case 0x31b6f4u: goto label_31b6f4;
        case 0x31b75cu: goto label_31b75c;
        case 0x31b790u: goto label_31b790;
        case 0x31b7a4u: goto label_31b7a4;
        case 0x31b7b4u: goto label_31b7b4;
        default: break;
    }

    ctx->pc = 0x31b5d0u;

    // 0x31b5d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31b5d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b5d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31b5dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31b5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31b5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31b5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b5e4: 0x90840002  lbu         $a0, 0x2($a0)
    ctx->pc = 0x31b5e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31b5e8: 0x1083006b  beq         $a0, $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x31B5E8u;
    {
        const bool branch_taken_0x31b5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x31B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5E8u;
        // 0x31b5ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5e8) {
            ctx->pc = 0x31B798u;
            goto label_31b798;
        }
    }
    ctx->pc = 0x31B5F0u;
    // 0x31b5f0: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x31B5F0u;
    {
        const bool branch_taken_0x31b5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31b5f0) {
            ctx->pc = 0x31B680u;
            goto label_31b680;
        }
    }
    ctx->pc = 0x31B5F8u;
    // 0x31b5f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B5F8u;
    {
        const bool branch_taken_0x31b5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b5f8) {
            ctx->pc = 0x31B608u;
            goto label_31b608;
        }
    }
    ctx->pc = 0x31B600u;
    // 0x31b600: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x31B600u;
    {
        const bool branch_taken_0x31b600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b600) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B608u;
label_31b608:
    // 0x31b608: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b60c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31B60Cu;
    SET_GPR_U32(ctx, 31, 0x31B614u);
    ctx->pc = 0x31B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B60Cu;
    // 0x31b610: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31B60Cu, 0x31B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B614u;
label_31b614:
    // 0x31b614: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x31B614u;
    {
        const bool branch_taken_0x31b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B614u;
        // 0x31b618: 0x3c034170  lui         $v1, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b614) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B61Cu;
    // 0x31b61c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x31b61cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31b620: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31b620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31b624: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31b628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b62c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x31b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x31b630: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x31b630u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b634: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b638: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x31b638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31b63c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b63cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31b640: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31B640u;
    {
        const bool branch_taken_0x31b640 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b640) {
            ctx->pc = 0x31B658u;
            goto label_31b658;
        }
    }
    ctx->pc = 0x31B648u;
    // 0x31b648: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31b64c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31b64cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31b650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31B650u;
    {
        const bool branch_taken_0x31b650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B650u;
        // 0x31b654: 0xa6040008  sh          $a0, 0x8($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b650) {
            ctx->pc = 0x31B674u;
            goto label_31b674;
        }
    }
    ctx->pc = 0x31B658u;
label_31b658:
    // 0x31b658: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x31b658u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31b65c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31b660: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31b664: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x31b664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31b668: 0x0  nop
    ctx->pc = 0x31b668u;
    // NOP
    // 0x31b66c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31b66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31b670: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x31b670u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
label_31b674:
    // 0x31b674: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x31B674u;
    {
        const bool branch_taken_0x31b674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b674) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B67Cu;
    // 0x31b67c: 0x0  nop
    ctx->pc = 0x31b67cu;
    // NOP
label_31b680:
    // 0x31b680: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x31b680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31b684: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B684u;
    {
        const bool branch_taken_0x31b684 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B684u;
        // 0x31b688: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b684) {
            ctx->pc = 0x31B698u;
            goto label_31b698;
        }
    }
    ctx->pc = 0x31B68Cu;
    // 0x31b68c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b690: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31B690u;
    {
        const bool branch_taken_0x31b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B690u;
        // 0x31b694: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b690) {
            ctx->pc = 0x31B6B0u;
            goto label_31b6b0;
        }
    }
    ctx->pc = 0x31B698u;
label_31b698:
    // 0x31b698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31b698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x31b69c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31b69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x31b6a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31b6a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b6a4: 0x0  nop
    ctx->pc = 0x31b6a4u;
    // NOP
    // 0x31b6a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31b6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31b6ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31b6acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31b6b0:
    // 0x31b6b0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x31b6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31b6b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31b6b8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x31b6bc: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x31b6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x31b6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31b6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31b6c4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x31b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x31b6c8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x31b6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x31b6cc: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x31b6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x31b6d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b6d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6d4: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x31b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x31b6d8: 0x2529c988  addiu       $t1, $t1, -0x3678
    ctx->pc = 0x31b6d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953352));
    // 0x31b6dc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x31b6dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31b6e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31b6e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31b6e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31b6e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31b6e8: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x31b6e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x31b6ec: 0xc095f88  jal         func_257E20
    ctx->pc = 0x31B6ECu;
    SET_GPR_U32(ctx, 31, 0x31B6F4u);
    ctx->pc = 0x31B6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B6ECu;
    // 0x31b6f0: 0x240a0017  addiu       $t2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x31B6ECu, 0x31B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B6F4u;
label_31b6f4:
    // 0x31b6f4: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x31b6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31b6f8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x31b6fc: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x31b6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x31b700: 0x346360f9  ori         $v1, $v1, 0x60F9
    ctx->pc = 0x31b700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24825);
    // 0x31b704: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x31b704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31b708: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B708u;
    {
        const bool branch_taken_0x31b708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B708u;
        // 0x31b70c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b708) {
            ctx->pc = 0x31B718u;
            goto label_31b718;
        }
    }
    ctx->pc = 0x31B710u;
    // 0x31b710: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x31b710u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x31b714: 0x0  nop
    ctx->pc = 0x31b714u;
    // NOP
label_31b718:
    // 0x31b718: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31b718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31b71c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31b71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31b720: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x31b720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x31b724: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x31b724u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31b728: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x31B728u;
    {
        const bool branch_taken_0x31b728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b728) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B730u;
    // 0x31b730: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x31b730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x31b734: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b738: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x31b738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x31b73c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x31b73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31b740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b744: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b74c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x31b74cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31b750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31b754: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x31B754u;
    SET_GPR_U32(ctx, 31, 0x31B75Cu);
    ctx->pc = 0x31B758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B754u;
    // 0x31b758: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x31B754u, 0x31B75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B75Cu;
label_31b75c:
    // 0x31b75c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x31b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b760: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b764: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x31b764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x31b768: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x31b768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x31b76c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x31b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x31b770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31b770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b774: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x31b774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x31b778: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31b778u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b77c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31b77cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b780: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31b780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b784: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31b784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b788: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x31B788u;
    SET_GPR_U32(ctx, 31, 0x31B790u);
    ctx->pc = 0x31B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B788u;
    // 0x31b78c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x31B788u, 0x31B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B790u;
label_31b790:
    // 0x31b790: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31B790u;
    {
        const bool branch_taken_0x31b790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b790) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B798u;
label_31b798:
    // 0x31b798: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x31b798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x31b79c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x31B79Cu;
    SET_GPR_U32(ctx, 31, 0x31B7A4u);
    ctx->pc = 0x31B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B79Cu;
    // 0x31b7a0: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x31B79Cu, 0x31B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7A4u;
label_31b7a4:
    // 0x31b7a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B7A4u;
    {
        const bool branch_taken_0x31b7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7A4u;
        // 0x31b7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7a4) {
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B7ACu;
    // 0x31b7ac: 0xc0c6c34  jal         func_31B0D0
    ctx->pc = 0x31B7ACu;
    SET_GPR_U32(ctx, 31, 0x31B7B4u);
    ctx->pc = 0x31B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0D0u, 0x31B7ACu, 0x31B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B7B4u;
label_31b7b4:
    // 0x31b7b4: 0x0  nop
    ctx->pc = 0x31b7b4u;
    // NOP
label_31b7b8:
    // 0x31b7b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31b7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b7bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31b7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31b7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31B7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7C0u;
        // 0x31b7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B7C8u;
}
