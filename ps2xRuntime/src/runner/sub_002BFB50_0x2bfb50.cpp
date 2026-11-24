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

// Function: sub_002BFB50
// Address: 0x2bfb50 - 0x2c004c
void sub_002BFB50_0x2bfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFB50_0x2bfb50");
#endif

    switch (ctx->pc) {
        case 0x2bfbb4u: goto label_2bfbb4;
        case 0x2bfbf0u: goto label_2bfbf0;
        case 0x2bfca0u: goto label_2bfca0;
        case 0x2bfdb0u: goto label_2bfdb0;
        case 0x2bff78u: goto label_2bff78;
        case 0x2bffecu: goto label_2bffec;
        default: break;
    }

    ctx->pc = 0x2bfb50u;

    // 0x2bfb50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2bfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2bfb54: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2bfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2bfb58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bfb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2bfb5c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2bfb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2bfb60: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2bfb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2bfb64: 0x24425150  addiu       $v0, $v0, 0x5150
    ctx->pc = 0x2bfb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
    // 0x2bfb68: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2bfb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2bfb6c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2bfb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bfb70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2bfb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2bfb74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2bfb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2bfb78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2bfb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2bfb7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2bfb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2bfb80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bfb80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2bfb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2bfb88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2bfb88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2bfb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2bfb90: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2bfb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bfb94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bfb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bfb98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bfb98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2bfb9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2bfba0: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2bfba0u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x4E5150u));
    // 0x2bfba4: 0x8c315018  lw          $s1, 0x5018($at)
    ctx->pc = 0x2bfba4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x8D5018u));
    // 0x2bfba8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bfba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bfbac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFBACu;
    {
        const bool branch_taken_0x2bfbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBACu;
        // 0x2bfbb0: 0x7ca40000  sq          $a0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbac) {
            ctx->pc = 0x2BFBD0u;
            goto label_2bfbd0;
        }
    }
    ctx->pc = 0x2BFBB4u;
label_2bfbb4:
    // 0x2bfbb4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2bfbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfbb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bfbbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2bfbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2bfbc0: 0x0  nop
    ctx->pc = 0x2bfbc0u;
    // NOP
    // 0x2bfbc4: 0x0  nop
    ctx->pc = 0x2bfbc4u;
    // NOP
    // 0x2bfbc8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BFBC8u;
    {
        const bool branch_taken_0x2bfbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfbc8) {
            ctx->pc = 0x2BFBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfbb4;
        }
    }
    ctx->pc = 0x2BFBD0u;
label_2bfbd0:
    // 0x2bfbd0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2bfbd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bfbd4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2BFBD4u;
    {
        const bool branch_taken_0x2bfbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFBD4u;
        // 0x2bfbd8: 0x27b000c4  addiu       $s0, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfbd4) {
            ctx->pc = 0x2BFD90u;
            goto label_2bfd90;
        }
    }
    ctx->pc = 0x2BFBDCu;
    // 0x2bfbdc: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x2bfbdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2bfbe0: 0x27b500c8  addiu       $s5, $sp, 0xC8
    ctx->pc = 0x2bfbe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x2bfbe4: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x2bfbe4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2bfbe8: 0x27b600cc  addiu       $s6, $sp, 0xCC
    ctx->pc = 0x2bfbe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x2bfbec: 0x0  nop
    ctx->pc = 0x2bfbecu;
    // NOP
label_2bfbf0:
    // 0x2bfbf0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bfbf4: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2bfbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfbf8: 0x96440006  lhu         $a0, 0x6($s2)
    ctx->pc = 0x2bfbf8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2bfbfc: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2bfbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfc00: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2bfc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bfc04: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x2bfc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfc08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfc0c: 0x0  nop
    ctx->pc = 0x2bfc0cu;
    // NOP
    // 0x2bfc10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2bfc10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bfc14: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2bfc14u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2bfc18: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bfc18u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bfc1c: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x2bfc1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2bfc20: 0x46010504  c1          0x10504
    ctx->pc = 0x2bfc20u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[1]);
    // 0x2bfc24: 0x0  nop
    ctx->pc = 0x2bfc24u;
    // NOP
    // 0x2bfc28: 0x0  nop
    ctx->pc = 0x2bfc28u;
    // NOP
    // 0x2bfc2c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfc2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfc30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFC30u;
    {
        const bool branch_taken_0x2bfc30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfc30) {
            ctx->pc = 0x2BFC48u;
            goto label_2bfc48;
        }
    }
    ctx->pc = 0x2BFC38u;
    // 0x2bfc38: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bfc38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bfc3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bfc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bfc40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFC40u;
    {
        const bool branch_taken_0x2bfc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC40u;
        // 0x2bfc44: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfc40) {
            ctx->pc = 0x2BFC64u;
            goto label_2bfc64;
        }
    }
    ctx->pc = 0x2BFC48u;
label_2bfc48:
    // 0x2bfc48: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2bfc48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2bfc4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bfc50: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bfc50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bfc54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2bfc54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bfc58: 0x0  nop
    ctx->pc = 0x2bfc58u;
    // NOP
    // 0x2bfc5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bfc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bfc60: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2bfc60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2bfc64:
    // 0x2bfc64: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x2BFC64u;
    {
        const bool branch_taken_0x2bfc64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfc64) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFC6Cu;
    // 0x2bfc6c: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x2bfc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x2bfc70: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bfc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bfc74: 0x92650002  lbu         $a1, 0x2($s3)
    ctx->pc = 0x2bfc74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2bfc78: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x2bfc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x2bfc7c: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2bfc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2bfc80: 0x8c660094  lw          $a2, 0x94($v1)
    ctx->pc = 0x2bfc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2bfc84: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2bfc84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2bfc88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2bfc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2bfc8c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2bfc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bfc90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfc94: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2bfc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bfc98: 0xc0ae8b8  jal         func_2BA2E0
    ctx->pc = 0x2BFC98u;
    SET_GPR_U32(ctx, 31, 0x2BFCA0u);
    ctx->pc = 0x2BFC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC98u;
    // 0x2bfc9c: 0x24c50030  addiu       $a1, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA2E0u, 0x2BFC98u, 0x2BFCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFCA0u;
label_2bfca0:
    // 0x2bfca0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2BFCA0u;
    {
        const bool branch_taken_0x2bfca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfca0) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFCA8u;
    // 0x2bfca8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x2bfca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bfcac: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2bfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bfcb0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BFCB0u;
    {
        const bool branch_taken_0x2bfcb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfcb0) {
            ctx->pc = 0x2BFCF0u;
            goto label_2bfcf0;
        }
    }
    ctx->pc = 0x2BFCB8u;
    // 0x2bfcb8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2bfcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfcbc: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfcbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfcc0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFCC0u;
    {
        const bool branch_taken_0x2bfcc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfcc0) {
            ctx->pc = 0x2BFCD0u;
            goto label_2bfcd0;
        }
    }
    ctx->pc = 0x2BFCC8u;
    // 0x2bfcc8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bfcc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bfccc: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x2bfcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
label_2bfcd0:
    // 0x2bfcd0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2bfcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfcd4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfcd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfcd8: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x2BFCD8u;
    {
        const bool branch_taken_0x2bfcd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfcd8) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFCE0u;
    // 0x2bfce0: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x2bfce0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bfce4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2BFCE4u;
    {
        const bool branch_taken_0x2bfce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFCE4u;
        // 0x2bfce8: 0xaef10000  sw          $s1, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfce4) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFCECu;
    // 0x2bfcec: 0x0  nop
    ctx->pc = 0x2bfcecu;
    // NOP
label_2bfcf0:
    // 0x2bfcf0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfcf4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BFCF4u;
    {
        const bool branch_taken_0x2bfcf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfcf4) {
            ctx->pc = 0x2BFD38u;
            goto label_2bfd38;
        }
    }
    ctx->pc = 0x2BFCFCu;
    // 0x2bfcfc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2bfcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd00: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfd00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfd04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFD04u;
    {
        const bool branch_taken_0x2bfd04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfd04) {
            ctx->pc = 0x2BFD18u;
            goto label_2bfd18;
        }
    }
    ctx->pc = 0x2BFD0Cu;
    // 0x2bfd0c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bfd0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bfd10: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x2bfd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x2bfd14: 0x0  nop
    ctx->pc = 0x2bfd14u;
    // NOP
label_2bfd18:
    // 0x2bfd18: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2bfd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd1c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfd1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfd20: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x2BFD20u;
    {
        const bool branch_taken_0x2bfd20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfd20) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFD28u;
    // 0x2bfd28: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x2bfd28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2bfd2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2BFD2Cu;
    {
        const bool branch_taken_0x2bfd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD2Cu;
        // 0x2bfd30: 0xafd10000  sw          $s1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd2c) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFD34u;
    // 0x2bfd34: 0x0  nop
    ctx->pc = 0x2bfd34u;
    // NOP
label_2bfd38:
    // 0x2bfd38: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2bfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2bfd3c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BFD3Cu;
    {
        const bool branch_taken_0x2bfd3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bfd3c) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFD44u;
    // 0x2bfd44: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2bfd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd48: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfd48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfd4c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFD4Cu;
    {
        const bool branch_taken_0x2bfd4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfd4c) {
            ctx->pc = 0x2BFD60u;
            goto label_2bfd60;
        }
    }
    ctx->pc = 0x2BFD54u;
    // 0x2bfd54: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2bfd54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2bfd58: 0xafb100b0  sw          $s1, 0xB0($sp)
    ctx->pc = 0x2bfd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 17));
    // 0x2bfd5c: 0x0  nop
    ctx->pc = 0x2bfd5cu;
    // NOP
label_2bfd60:
    // 0x2bfd60: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x2bfd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfd64: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2bfd64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfd68: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFD68u;
    {
        const bool branch_taken_0x2bfd68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfd68) {
            ctx->pc = 0x2BFD80u;
            goto label_2bfd80;
        }
    }
    ctx->pc = 0x2BFD70u;
    // 0x2bfd70: 0xe6d40000  swc1        $f20, 0x0($s6)
    ctx->pc = 0x2bfd70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2bfd74: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x2bfd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2bfd78: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2bfd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2bfd7c: 0x0  nop
    ctx->pc = 0x2bfd7cu;
    // NOP
label_2bfd80:
    // 0x2bfd80: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x2bfd80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2bfd84: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2bfd84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bfd88: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2BFD88u;
    {
        const bool branch_taken_0x2bfd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bfd88) {
            ctx->pc = 0x2BFBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfbf0;
        }
    }
    ctx->pc = 0x2BFD90u;
label_2bfd90:
    // 0x2bfd90: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2bfd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2bfd94: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2bfd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2bfd98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bfd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd9c: 0x24427780  addiu       $v0, $v0, 0x7780
    ctx->pc = 0x2bfd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
    // 0x2bfda0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2bfda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2bfda4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfda8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2bfda8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bfdac: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2bfdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2bfdb0:
    // 0x2bfdb0: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x2bfdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2bfdb4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2bfdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2bfdb8: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFDB8u;
    {
        const bool branch_taken_0x2bfdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2bfdb8) {
            ctx->pc = 0x2BFDE0u;
            goto label_2bfde0;
        }
    }
    ctx->pc = 0x2BFDC0u;
    // 0x2bfdc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bfdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bfdc4: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2bfdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2bfdc8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2bfdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2bfdcc: 0x8c4500b0  lw          $a1, 0xB0($v0)
    ctx->pc = 0x2bfdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2bfdd0: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x2bfdd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2bfdd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bfdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bfdd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2BFDD8u;
    {
        const bool branch_taken_0x2bfdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDD8u;
        // 0x2bfddc: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdd8) {
            ctx->pc = 0x2BFDB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bfdb0;
        }
    }
    ctx->pc = 0x2BFDE0u;
label_2bfde0:
    // 0x2bfde0: 0x10a00067  beqz        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x2BFDE0u;
    {
        const bool branch_taken_0x2bfde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfde0) {
            ctx->pc = 0x2BFF80u;
            goto label_2bff80;
        }
    }
    ctx->pc = 0x2BFDE8u;
    // 0x2bfde8: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2bfde8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2bfdec: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2bfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2bfdf0: 0x7e8300b0  sq          $v1, 0xB0($s4)
    ctx->pc = 0x2bfdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 176), GPR_VEC(ctx, 3));
    // 0x2bfdf4: 0xae82009c  sw          $v0, 0x9C($s4)
    ctx->pc = 0x2bfdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 2));
    // 0x2bfdf8: 0xa280005e  sb          $zero, 0x5E($s4)
    ctx->pc = 0x2bfdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bfdfc: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x2bfdfcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2bfe00: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2BFE00u;
    {
        const bool branch_taken_0x2bfe00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE00u;
        // 0x2bfe04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe00) {
            ctx->pc = 0x2BFEA0u;
            goto label_2bfea0;
        }
    }
    ctx->pc = 0x2BFE08u;
    // 0x2bfe08: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2bfe08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2bfe0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFE0Cu;
    {
        const bool branch_taken_0x2bfe0c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BFE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE0Cu;
        // 0x2bfe10: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe0c) {
            ctx->pc = 0x2BFE20u;
            goto label_2bfe20;
        }
    }
    ctx->pc = 0x2BFE14u;
    // 0x2bfe14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfe14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BFE18u;
    {
        const bool branch_taken_0x2bfe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE18u;
        // 0x2bfe1c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe18) {
            ctx->pc = 0x2BFE38u;
            goto label_2bfe38;
        }
    }
    ctx->pc = 0x2BFE20u;
label_2bfe20:
    // 0x2bfe20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bfe20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bfe24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bfe24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bfe28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfe28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe2c: 0x0  nop
    ctx->pc = 0x2bfe2cu;
    // NOP
    // 0x2bfe30: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bfe30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bfe34: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bfe34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bfe38:
    // 0x2bfe38: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bfe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfe3c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bfe40: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bfe40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bfe44: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bfe48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bfe48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfe4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfe4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfe50: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bfe50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bfe54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bfe54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bfe58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bfe58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfe5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFE5Cu;
    {
        const bool branch_taken_0x2bfe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfe5c) {
            ctx->pc = 0x2BFE74u;
            goto label_2bfe74;
        }
    }
    ctx->pc = 0x2BFE64u;
    // 0x2bfe64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bfe64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bfe68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bfe68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bfe6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BFE6Cu;
    {
        const bool branch_taken_0x2bfe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFE6Cu;
        // 0x2bfe70: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfe6c) {
            ctx->pc = 0x2BFE90u;
            goto label_2bfe90;
        }
    }
    ctx->pc = 0x2BFE74u;
label_2bfe74:
    // 0x2bfe74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bfe74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bfe78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bfe78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bfe7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bfe7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bfe80: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bfe80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bfe84: 0x0  nop
    ctx->pc = 0x2bfe84u;
    // NOP
    // 0x2bfe88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bfe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bfe8c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2bfe8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2bfe90:
    // 0x2bfe90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bfe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bfe94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFE94u;
    {
        const bool branch_taken_0x2bfe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bfe94) {
            ctx->pc = 0x2BFEA0u;
            goto label_2bfea0;
        }
    }
    ctx->pc = 0x2BFE9Cu;
    // 0x2bfe9c: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2bfe9cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2bfea0:
    // 0x2bfea0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFEA0u;
    {
        const bool branch_taken_0x2bfea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEA0u;
        // 0x2bfea4: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfea0) {
            ctx->pc = 0x2BFEB0u;
            goto label_2bfeb0;
        }
    }
    ctx->pc = 0x2BFEA8u;
    // 0x2bfea8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2BFEA8u;
    {
        const bool branch_taken_0x2bfea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEA8u;
        // 0x2bfeac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfea8) {
            ctx->pc = 0x2BFF30u;
            goto label_2bff30;
        }
    }
    ctx->pc = 0x2BFEB0u;
label_2bfeb0:
    // 0x2bfeb0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFEB0u;
    {
        const bool branch_taken_0x2bfeb0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2BFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEB0u;
        // 0x2bfeb4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfeb0) {
            ctx->pc = 0x2BFEC4u;
            goto label_2bfec4;
        }
    }
    ctx->pc = 0x2BFEB8u;
    // 0x2bfeb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfebc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BFEBCu;
    {
        const bool branch_taken_0x2bfebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFEBCu;
        // 0x2bfec0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfebc) {
            ctx->pc = 0x2BFEDCu;
            goto label_2bfedc;
        }
    }
    ctx->pc = 0x2BFEC4u;
label_2bfec4:
    // 0x2bfec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bfec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bfec8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bfec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2bfecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bfeccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfed0: 0x0  nop
    ctx->pc = 0x2bfed0u;
    // NOP
    // 0x2bfed4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2bfed4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2bfed8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2bfed8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2bfedc:
    // 0x2bfedc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2bfedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfee0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2bfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2bfee4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2bfee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2bfee8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2bfeec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bfeecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfef4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2bfef4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2bfef8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bfef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bfefc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2bfefcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bff00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BFF00u;
    {
        const bool branch_taken_0x2bff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bff00) {
            ctx->pc = 0x2BFF18u;
            goto label_2bff18;
        }
    }
    ctx->pc = 0x2BFF08u;
    // 0x2bff08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bff08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bff0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bff0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bff10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BFF10u;
    {
        const bool branch_taken_0x2bff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff10) {
            ctx->pc = 0x2BFF30u;
            goto label_2bff30;
        }
    }
    ctx->pc = 0x2BFF18u;
label_2bff18:
    // 0x2bff18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2bff18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2bff1c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2bff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2bff20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bff20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bff24: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2bff24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2bff28: 0x0  nop
    ctx->pc = 0x2bff28u;
    // NOP
    // 0x2bff2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2bff2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2bff30:
    // 0x2bff30: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x2bff30u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bff34: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2bff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2bff38: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2bff38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2bff3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2bff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff40: 0x24635160  addiu       $v1, $v1, 0x5160
    ctx->pc = 0x2bff40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20832));
    // 0x2bff44: 0x26990008  addiu       $t9, $s4, 0x8
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x2bff48: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2bff48u;
    { uint32_t bits = FAST_READ32(0x4E5160u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bff4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bff4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2bff50u;
    { uint32_t bits = FAST_READ32(0x4E5164u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bff54: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2bff54u;
    { uint32_t bits = FAST_READ32(0x4E5168u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bff58: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2bff58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2bff5c: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2bff5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2bff60: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2bff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2bff64: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x2bff64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x2bff68: 0xa6800058  sh          $zero, 0x58($s4)
    ctx->pc = 0x2bff68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bff6c: 0xa6800056  sh          $zero, 0x56($s4)
    ctx->pc = 0x2bff6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 86), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bff70: 0xc040250  jal         func_100940
    ctx->pc = 0x2BFF70u;
    SET_GPR_U32(ctx, 31, 0x2BFF78u);
    ctx->pc = 0x2BFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF70u;
    // 0x2bff74: 0xa2800107  sb          $zero, 0x107($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 263), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x2BFF70u, 0x2BFF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF78u;
label_2bff78:
    // 0x2bff78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2BFF78u;
    {
        const bool branch_taken_0x2bff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF78u;
        // 0x2bff7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff78) {
            ctx->pc = 0x2C0018u;
            goto label_2c0018;
        }
    }
    ctx->pc = 0x2BFF80u;
label_2bff80:
    // 0x2bff80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bff84: 0xa38289d4  sb          $v0, -0x762C($gp)
    ctx->pc = 0x2bff84u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bff88: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x2bff88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2bff8c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2BFF8Cu;
    {
        const bool branch_taken_0x2bff8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF8Cu;
        // 0x2bff90: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff8c) {
            ctx->pc = 0x2C0010u;
            goto label_2c0010;
        }
    }
    ctx->pc = 0x2BFF94u;
    // 0x2bff94: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2bff94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2bff98: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2BFF98u;
    {
        const bool branch_taken_0x2bff98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bff98) {
            ctx->pc = 0x2BFFF8u;
            goto label_2bfff8;
        }
    }
    ctx->pc = 0x2BFFA0u;
    // 0x2bffa0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2BFFA0u;
    {
        const bool branch_taken_0x2bffa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFA0u;
        // 0x2bffa4: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffa0) {
            ctx->pc = 0x2BFFE0u;
            goto label_2bffe0;
        }
    }
    ctx->pc = 0x2BFFA8u;
    // 0x2bffa8: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2bffa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2bffac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2bffacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2bffb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bffb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bffb8: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2bffb8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bffbc: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2bffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bffc0: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2bffc0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bffc4: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2bffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bffc8: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2bffc8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2bffcc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2bffccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bffd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bffd4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BFFD4u;
    {
        const bool branch_taken_0x2bffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFD4u;
        // 0x2bffd8: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bffd4) {
            ctx->pc = 0x2C0008u;
            goto label_2c0008;
        }
    }
    ctx->pc = 0x2BFFDCu;
    // 0x2bffdc: 0x0  nop
    ctx->pc = 0x2bffdcu;
    // NOP
label_2bffe0:
    // 0x2bffe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffe4: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2BFFE4u;
    SET_GPR_U32(ctx, 31, 0x2BFFECu);
    ctx->pc = 0x2BFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFE4u;
    // 0x2bffe8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2BFFE4u, 0x2BFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFECu;
label_2bffec:
    // 0x2bffec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFFECu;
    {
        const bool branch_taken_0x2bffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bffec) {
            ctx->pc = 0x2C0000u;
            goto label_2c0000;
        }
    }
    ctx->pc = 0x2BFFF4u;
    // 0x2bfff4: 0x0  nop
    ctx->pc = 0x2bfff4u;
    // NOP
label_2bfff8:
    // 0x2bfff8: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2bfff8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2bfffc: 0x0  nop
    ctx->pc = 0x2bfffcu;
    // NOP
label_2c0000:
    // 0x2c0000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c0000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0004: 0x0  nop
    ctx->pc = 0x2c0004u;
    // NOP
label_2c0008:
    // 0x2c0008: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0008u;
    {
        const bool branch_taken_0x2c0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0008) {
            ctx->pc = 0x2C0018u;
            goto label_2c0018;
        }
    }
    ctx->pc = 0x2C0010u;
label_2c0010:
    // 0x2c0010: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2c0010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c0014: 0x0  nop
    ctx->pc = 0x2c0014u;
    // NOP
label_2c0018:
    // 0x2c0018: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c0018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c001c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c001cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c0020: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c0024: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c0024u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c0028: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c0028u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c002c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c002cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c0030: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c0030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c0034: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c0034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c0038: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c0038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c003c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c003cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c0040: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c0040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0044: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0044u;
        // 0x2c0048: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C004Cu;
}
