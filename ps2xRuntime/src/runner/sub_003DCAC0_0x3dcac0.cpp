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

// Function: sub_003DCAC0
// Address: 0x3dcac0 - 0x3dcc54
void sub_003DCAC0_0x3dcac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCAC0_0x3dcac0");
#endif

    switch (ctx->pc) {
        case 0x3dcaf4u: goto label_3dcaf4;
        case 0x3dcb00u: goto label_3dcb00;
        case 0x3dcc1cu: goto label_3dcc1c;
        default: break;
    }

    ctx->pc = 0x3dcac0u;

    // 0x3dcac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3dcac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3dcac4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dcac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dcac8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dcac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dcacc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dcaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dcad0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3dcad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dcad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dcad8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x3dcad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x3dcadc: 0x8e452bf0  lw          $a1, 0x2BF0($s2)
    ctx->pc = 0x3dcadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11248)));
    // 0x3dcae0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dcae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dcae4: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x3dcae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x3dcae8: 0x24844aa0  addiu       $a0, $a0, 0x4AA0
    ctx->pc = 0x3dcae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19104));
    // 0x3dcaec: 0xc0c9630  jal         func_3258C0
    ctx->pc = 0x3DCAECu;
    SET_GPR_U32(ctx, 31, 0x3DCAF4u);
    ctx->pc = 0x3DCAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCAECu;
    // 0x3dcaf0: 0x24460170  addiu       $a2, $v0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3258C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258C0u, 0x3DCAECu, 0x3DCAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCAF4u;
label_3dcaf4:
    // 0x3dcaf4: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x3dcaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3dcaf8: 0x24100440  addiu       $s0, $zero, 0x440
    ctx->pc = 0x3dcaf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x3dcafc: 0x0  nop
    ctx->pc = 0x3dcafcu;
    // NOP
label_3dcb00:
    // 0x3dcb00: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3dcb00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3dcb04: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3dcb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3dcb08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3dcb08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3dcb0c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3dcb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3dcb10: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3dcb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3dcb14: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dcb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dcb18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3dcb18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3dcb1c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3dcb1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dcb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dcb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcb24: 0x0  nop
    ctx->pc = 0x3dcb24u;
    // NOP
    // 0x3dcb28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3dcb28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3dcb2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dcb2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dcb30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DCB30u;
    {
        const bool branch_taken_0x3dcb30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB30u;
        // 0x3dcb34: 0x2625ffef  addiu       $a1, $s1, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb30) {
            ctx->pc = 0x3DCB48u;
            goto label_3dcb48;
        }
    }
    ctx->pc = 0x3DCB38u;
    // 0x3dcb38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dcb38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dcb3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dcb3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dcb40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DCB40u;
    {
        const bool branch_taken_0x3dcb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB40u;
        // 0x3dcb44: 0xa43018  mult        $a2, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb40) {
            ctx->pc = 0x3DCB64u;
            goto label_3dcb64;
        }
    }
    ctx->pc = 0x3DCB48u;
label_3dcb48:
    // 0x3dcb48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dcb48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dcb4c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dcb50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dcb50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dcb54: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dcb54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dcb58: 0x0  nop
    ctx->pc = 0x3dcb58u;
    // NOP
    // 0x3dcb5c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dcb5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dcb60: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x3dcb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3dcb64:
    // 0x3dcb64: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3dcb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3dcb68: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3dcb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3dcb6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dcb6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcb70: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x3dcb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x3dcb74: 0x96452bee  lhu         $a1, 0x2BEE($s2)
    ctx->pc = 0x3dcb74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11246)));
    // 0x3dcb78: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3dcb78u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dcb7c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3dcb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3dcb80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3dcb80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3dcb84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3dcb84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3dcb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dcb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcb8c: 0x0  nop
    ctx->pc = 0x3dcb8cu;
    // NOP
    // 0x3dcb90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dcb90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dcb94: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DCB94u;
    {
        const bool branch_taken_0x3dcb94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB94u;
        // 0x3dcb98: 0xa62823  subu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcb94) {
            ctx->pc = 0x3DCBACu;
            goto label_3dcbac;
        }
    }
    ctx->pc = 0x3DCB9Cu;
    // 0x3dcb9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dcb9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dcba0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dcba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dcba4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3DCBA4u;
    {
        const bool branch_taken_0x3dcba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCBA4u;
        // 0x3dcba8: 0xa4001b  divu        $zero, $a1, $a0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcba4) {
            ctx->pc = 0x3DCBC8u;
            goto label_3dcbc8;
        }
    }
    ctx->pc = 0x3DCBACu;
label_3dcbac:
    // 0x3dcbac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3dcbacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3dcbb0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3dcbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3dcbb4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3dcbb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3dcbb8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3dcbb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3dcbbc: 0x0  nop
    ctx->pc = 0x3dcbbcu;
    // NOP
    // 0x3dcbc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3dcbc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3dcbc4: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x3dcbc4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_3dcbc8:
    // 0x3dcbc8: 0x0  nop
    ctx->pc = 0x3dcbc8u;
    // NOP
    // 0x3dcbcc: 0x0  nop
    ctx->pc = 0x3dcbccu;
    // NOP
    // 0x3dcbd0: 0x1810  mfhi        $v1
    ctx->pc = 0x3dcbd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x3dcbd4: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3DCBD4u;
    {
        const bool branch_taken_0x3dcbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dcbd4) {
            ctx->pc = 0x3DCC20u;
            goto label_3dcc20;
        }
    }
    ctx->pc = 0x3DCBDCu;
    // 0x3dcbdc: 0x924308e8  lbu         $v1, 0x8E8($s2)
    ctx->pc = 0x3dcbdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x3dcbe0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3dcbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3dcbe4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3dcbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3dcbe8: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3dcbe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3dcbec: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3dcbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3dcbf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dcbf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3dcbf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3dcbf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcbfc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3dcbfcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcc00: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3dcc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3dcc04: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x3dcc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3dcc08: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x3dcc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3dcc0c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3dcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3dcc10: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3dcc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3dcc14: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3DCC14u;
    SET_GPR_U32(ctx, 31, 0x3DCC1Cu);
    ctx->pc = 0x3DCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCC14u;
    // 0x3dcc18: 0x24470030  addiu       $a3, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3DCC14u, 0x3DCC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCC1Cu;
label_3dcc1c:
    // 0x3dcc1c: 0x0  nop
    ctx->pc = 0x3dcc1cu;
    // NOP
label_3dcc20:
    // 0x3dcc20: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x3dcc20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x3dcc24: 0x2e23003c  sltiu       $v1, $s1, 0x3C
    ctx->pc = 0x3dcc24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x3dcc28: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x3DCC28u;
    {
        const bool branch_taken_0x3dcc28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC28u;
        // 0x3dcc2c: 0x261000c0  addiu       $s0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcc28) {
            ctx->pc = 0x3DCB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcb00;
        }
    }
    ctx->pc = 0x3DCC30u;
    // 0x3dcc30: 0x96432bee  lhu         $v1, 0x2BEE($s2)
    ctx->pc = 0x3dcc30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 11246)));
    // 0x3dcc34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dcc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dcc38: 0xa6432bee  sh          $v1, 0x2BEE($s2)
    ctx->pc = 0x3dcc38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 11246), (uint16_t)GPR_U32(ctx, 3));
    // 0x3dcc3c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dcc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dcc40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dcc40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dcc44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dcc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dcc48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dcc48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dcc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCC4Cu;
        // 0x3dcc50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCC54u;
}
