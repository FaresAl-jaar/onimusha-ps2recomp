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

// Function: sub_00392B40
// Address: 0x392b40 - 0x392d10
void sub_00392B40_0x392b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00392B40_0x392b40");
#endif

    switch (ctx->pc) {
        case 0x392bfcu: goto label_392bfc;
        default: break;
    }

    ctx->pc = 0x392b40u;

    // 0x392b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x392b44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x392b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x392b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x392b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x392b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392b54: 0x90840032  lbu         $a0, 0x32($a0)
    ctx->pc = 0x392b54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x392b58: 0x10830063  beq         $a0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x392B58u;
    {
        const bool branch_taken_0x392b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x392B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392B58u;
        // 0x392b5c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392b58) {
            ctx->pc = 0x392CE8u;
            goto label_392ce8;
        }
    }
    ctx->pc = 0x392B60u;
    // 0x392b60: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x392B60u;
    {
        const bool branch_taken_0x392b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392b60) {
            ctx->pc = 0x392B88u;
            goto label_392b88;
        }
    }
    ctx->pc = 0x392B68u;
    // 0x392b68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x392B68u;
    {
        const bool branch_taken_0x392b68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b68) {
            ctx->pc = 0x392B78u;
            goto label_392b78;
        }
    }
    ctx->pc = 0x392B70u;
    // 0x392b70: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x392B70u;
    {
        const bool branch_taken_0x392b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392b70) {
            ctx->pc = 0x392D00u;
            goto label_392d00;
        }
    }
    ctx->pc = 0x392B78u;
label_392b78:
    // 0x392b78: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392b78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392b7c: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x392b7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x392b80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392b84: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x392b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_392b88:
    // 0x392b88: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392b8c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392b90: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392b90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392b94: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392b98: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392b9c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392ba0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392ba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392ba4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392ba4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392bac: 0x0  nop
    ctx->pc = 0x392bacu;
    // NOP
    // 0x392bb0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392bb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392bb8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392BB8u;
    {
        const bool branch_taken_0x392bb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x392BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BB8u;
        // 0x392bbc: 0x96050034  lhu         $a1, 0x34($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bb8) {
            ctx->pc = 0x392BD0u;
            goto label_392bd0;
        }
    }
    ctx->pc = 0x392BC0u;
    // 0x392bc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392bc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392bc4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x392BC8u;
    {
        const bool branch_taken_0x392bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392BC8u;
        // 0x392bcc: 0xa4082b  sltu        $at, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x392bc8) {
            ctx->pc = 0x392BECu;
            goto label_392bec;
        }
    }
    ctx->pc = 0x392BD0u;
label_392bd0:
    // 0x392bd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392bd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392bd4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392bd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392bdc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x392bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x392be0: 0x0  nop
    ctx->pc = 0x392be0u;
    // NOP
    // 0x392be4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392be8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x392be8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_392bec:
    // 0x392bec: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x392BECu;
    {
        const bool branch_taken_0x392bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x392bec) {
            ctx->pc = 0x392CD8u;
            goto label_392cd8;
        }
    }
    ctx->pc = 0x392BF4u;
    // 0x392bf4: 0xc0e4acc  jal         func_392B30
    ctx->pc = 0x392BF4u;
    SET_GPR_U32(ctx, 31, 0x392BFCu);
    ctx->pc = 0x392BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392BF4u;
    // 0x392bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B30u, 0x392BF4u, 0x392BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392BFCu;
label_392bfc:
    // 0x392bfc: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x392bfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x392c00: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392C00u;
    {
        const bool branch_taken_0x392c00 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x392C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C00u;
        // 0x392c04: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c00) {
            ctx->pc = 0x392C14u;
            goto label_392c14;
        }
    }
    ctx->pc = 0x392C08u;
    // 0x392c08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392c0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392C0Cu;
    {
        const bool branch_taken_0x392c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C0Cu;
        // 0x392c10: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c0c) {
            ctx->pc = 0x392C2Cu;
            goto label_392c2c;
        }
    }
    ctx->pc = 0x392C14u;
label_392c14:
    // 0x392c14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x392c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x392c18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392c1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x392c1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392c20: 0x0  nop
    ctx->pc = 0x392c20u;
    // NOP
    // 0x392c24: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x392c24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x392c28: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x392c28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_392c2c:
    // 0x392c2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x392c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x392c30: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x392c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x392c34: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x392c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x392c38: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x392c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x392c3c: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x392c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x392c40: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x392c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x392c44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x392c44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x392c48: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x392c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x392c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x392c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392c50: 0x0  nop
    ctx->pc = 0x392c50u;
    // NOP
    // 0x392c54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x392c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x392c58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x392c58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x392c5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x392C5Cu;
    {
        const bool branch_taken_0x392c5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x392c5c) {
            ctx->pc = 0x392C74u;
            goto label_392c74;
        }
    }
    ctx->pc = 0x392C64u;
    // 0x392c64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392c64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392c68: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392c68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392c6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392C6Cu;
    {
        const bool branch_taken_0x392c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x392c6c) {
            ctx->pc = 0x392C8Cu;
            goto label_392c8c;
        }
    }
    ctx->pc = 0x392C74u;
label_392c74:
    // 0x392c74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x392c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x392c78: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x392c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x392c7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x392c7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x392c80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x392c80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x392c84: 0x0  nop
    ctx->pc = 0x392c84u;
    // NOP
    // 0x392c88: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x392c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_392c8c:
    // 0x392c8c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x392C8Cu;
    {
        const bool branch_taken_0x392c8c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x392C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C8Cu;
        // 0x392c90: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c8c) {
            ctx->pc = 0x392CA0u;
            goto label_392ca0;
        }
    }
    ctx->pc = 0x392C94u;
    // 0x392c94: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x392c94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392c98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392C98u;
    {
        const bool branch_taken_0x392c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392C98u;
        // 0x392c9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392c98) {
            ctx->pc = 0x392CB8u;
            goto label_392cb8;
        }
    }
    ctx->pc = 0x392CA0u;
label_392ca0:
    // 0x392ca0: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x392ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x392ca4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x392ca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x392ca8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x392ca8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x392cac: 0x0  nop
    ctx->pc = 0x392cacu;
    // NOP
    // 0x392cb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x392cb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x392cb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x392cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_392cb8:
    // 0x392cb8: 0x0  nop
    ctx->pc = 0x392cb8u;
    // NOP
    // 0x392cbc: 0x0  nop
    ctx->pc = 0x392cbcu;
    // NOP
    // 0x392cc0: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x392cc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x392cc4: 0x0  nop
    ctx->pc = 0x392cc4u;
    // NOP
    // 0x392cc8: 0x0  nop
    ctx->pc = 0x392cc8u;
    // NOP
    // 0x392ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x392CCCu;
    {
        const bool branch_taken_0x392ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392CCCu;
        // 0x392cd0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x392ccc) {
            ctx->pc = 0x392D00u;
            goto label_392d00;
        }
    }
    ctx->pc = 0x392CD4u;
    // 0x392cd4: 0x0  nop
    ctx->pc = 0x392cd4u;
    // NOP
label_392cd8:
    // 0x392cd8: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392cdc: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x392cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x392ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x392ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x392ce4: 0xa2030032  sb          $v1, 0x32($s0)
    ctx->pc = 0x392ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 3));
label_392ce8:
    // 0x392ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x392cec: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x392cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x392cf0: 0xa2000032  sb          $zero, 0x32($s0)
    ctx->pc = 0x392cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x392cf4: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x392cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392cf8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x392cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x392cfc: 0x0  nop
    ctx->pc = 0x392cfcu;
    // NOP
label_392d00:
    // 0x392d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392d08: 0x3e00008  jr          $ra
    ctx->pc = 0x392D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392D08u;
        // 0x392d0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392D10u;
}
