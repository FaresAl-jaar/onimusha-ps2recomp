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

// Function: sub_003E1C90
// Address: 0x3e1c90 - 0x3e23f0
void sub_003E1C90_0x3e1c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1C90_0x3e1c90");
#endif

    switch (ctx->pc) {
        case 0x3e1d0cu: goto label_3e1d0c;
        case 0x3e1d40u: goto label_3e1d40;
        case 0x3e1e28u: goto label_3e1e28;
        case 0x3e1e58u: goto label_3e1e58;
        case 0x3e1e80u: goto label_3e1e80;
        case 0x3e1e90u: goto label_3e1e90;
        case 0x3e1ea0u: goto label_3e1ea0;
        case 0x3e1fb4u: goto label_3e1fb4;
        case 0x3e21f4u: goto label_3e21f4;
        case 0x3e2228u: goto label_3e2228;
        case 0x3e22d8u: goto label_3e22d8;
        case 0x3e22fcu: goto label_3e22fc;
        case 0x3e2308u: goto label_3e2308;
        case 0x3e2338u: goto label_3e2338;
        case 0x3e2344u: goto label_3e2344;
        case 0x3e2368u: goto label_3e2368;
        case 0x3e2374u: goto label_3e2374;
        case 0x3e23a4u: goto label_3e23a4;
        case 0x3e23bcu: goto label_3e23bc;
        case 0x3e23d4u: goto label_3e23d4;
        default: break;
    }

    ctx->pc = 0x3e1c90u;

    // 0x3e1c90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3e1c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3e1c94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3e1c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3e1c98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e1c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3e1c9c: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3e1c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3e1ca0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e1ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e1ca4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e1ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e1ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e1cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e1cb0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x3e1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e1cb4: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x3e1cb4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3e1cb8: 0x24910224  addiu       $s1, $a0, 0x224
    ctx->pc = 0x3e1cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 548));
    // 0x3e1cbc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3e1cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e1cc0: 0x90840290  lbu         $a0, 0x290($a0)
    ctx->pc = 0x3e1cc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 656)));
    // 0x3e1cc4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3e1cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e1cc8: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x3E1CC8u;
    {
        const bool branch_taken_0x3e1cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CC8u;
        // 0x3e1ccc: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cc8) {
            ctx->pc = 0x3E1F58u;
            goto label_3e1f58;
        }
    }
    ctx->pc = 0x3E1CD0u;
    // 0x3e1cd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e1cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e1cd4: 0x108300a0  beq         $a0, $v1, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3E1CD4u;
    {
        const bool branch_taken_0x3e1cd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1CD4u;
        // 0x3e1cd8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1cd4) {
            ctx->pc = 0x3E1F58u;
            goto label_3e1f58;
        }
    }
    ctx->pc = 0x3E1CDCu;
    // 0x3e1cdc: 0x10830048  beq         $a0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3E1CDCu;
    {
        const bool branch_taken_0x3e1cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1cdc) {
            ctx->pc = 0x3E1E00u;
            goto label_3e1e00;
        }
    }
    ctx->pc = 0x3E1CE4u;
    // 0x3e1ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e1ce8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1CE8u;
    {
        const bool branch_taken_0x3e1ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e1ce8) {
            ctx->pc = 0x3E1CF8u;
            goto label_3e1cf8;
        }
    }
    ctx->pc = 0x3E1CF0u;
    // 0x3e1cf0: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x3E1CF0u;
    {
        const bool branch_taken_0x3e1cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1cf0) {
            ctx->pc = 0x3E2070u;
            goto label_3e2070;
        }
    }
    ctx->pc = 0x3E1CF8u;
label_3e1cf8:
    // 0x3e1cf8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3e1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3e1cfc: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x3e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3e1d00: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x3e1d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1d04: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x3E1D04u;
    SET_GPR_U32(ctx, 31, 0x3E1D0Cu);
    ctx->pc = 0x3E1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1D04u;
    // 0x3e1d08: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x3E1D04u, 0x3E1D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1D0Cu;
label_3e1d0c:
    // 0x3e1d0c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3e1d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1d10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e1d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1d14: 0x0  nop
    ctx->pc = 0x3e1d14u;
    // NOP
    // 0x3e1d18: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e1d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1d1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3E1D1Cu;
    {
        const bool branch_taken_0x3e1d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1D1Cu;
        // 0x3e1d20: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1d1c) {
            ctx->pc = 0x3E1D38u;
            goto label_3e1d38;
        }
    }
    ctx->pc = 0x3E1D24u;
    // 0x3e1d24: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e1d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e1d28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e1d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1d2c: 0x0  nop
    ctx->pc = 0x3e1d2cu;
    // NOP
    // 0x3e1d30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3e1d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1d34: 0x0  nop
    ctx->pc = 0x3e1d34u;
    // NOP
label_3e1d38:
    // 0x3e1d38: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1D38u;
    SET_GPR_U32(ctx, 31, 0x3E1D40u);
    ctx->pc = 0x3E1D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1D38u;
    // 0x3e1d3c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1D38u, 0x3E1D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1D40u;
label_3e1d40:
    // 0x3e1d40: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x3e1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x3e1d44: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3e1d44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3e1d48: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e1d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e1d4c: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3e1d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1d50: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x3e1d50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x3e1d54: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3e1d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3e1d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3e1d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1d5c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e1d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1d60: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e1d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e1d64: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3e1d64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e1d68: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1d6c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e1d6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1d74: 0x0  nop
    ctx->pc = 0x3e1d74u;
    // NOP
    // 0x3e1d78: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1d78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1d7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1d7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1d80: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1D80u;
    {
        const bool branch_taken_0x3e1d80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1d80) {
            ctx->pc = 0x3E1D98u;
            goto label_3e1d98;
        }
    }
    ctx->pc = 0x3E1D88u;
    // 0x3e1d88: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1d8c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e1d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e1d90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1D90u;
    {
        const bool branch_taken_0x3e1d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1d90) {
            ctx->pc = 0x3E1DB0u;
            goto label_3e1db0;
        }
    }
    ctx->pc = 0x3E1D98u;
label_3e1d98:
    // 0x3e1d98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e1d98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1d9c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e1da0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1da0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1da4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e1da4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e1da8: 0x0  nop
    ctx->pc = 0x3e1da8u;
    // NOP
    // 0x3e1dac: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e1dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e1db0:
    // 0x3e1db0: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1DB0u;
    {
        const bool branch_taken_0x3e1db0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DB0u;
        // 0x3e1db4: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1db0) {
            ctx->pc = 0x3E1DC4u;
            goto label_3e1dc4;
        }
    }
    ctx->pc = 0x3E1DB8u;
    // 0x3e1db8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e1db8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1dbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1DBCu;
    {
        const bool branch_taken_0x3e1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DBCu;
        // 0x3e1dc0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1dbc) {
            ctx->pc = 0x3E1DDCu;
            goto label_3e1ddc;
        }
    }
    ctx->pc = 0x3E1DC4u;
label_3e1dc4:
    // 0x3e1dc4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e1dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e1dc8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e1dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e1dcc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1dccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1dd0: 0x0  nop
    ctx->pc = 0x3e1dd0u;
    // NOP
    // 0x3e1dd4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e1dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e1dd8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e1dd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e1ddc:
    // 0x3e1ddc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e1de0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1de4: 0x0  nop
    ctx->pc = 0x3e1de4u;
    // NOP
    // 0x3e1de8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e1de8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e1dec: 0x0  nop
    ctx->pc = 0x3e1decu;
    // NOP
    // 0x3e1df0: 0x0  nop
    ctx->pc = 0x3e1df0u;
    // NOP
    // 0x3e1df4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3E1DF4u;
    {
        const bool branch_taken_0x3e1df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1DF4u;
        // 0x3e1df8: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1df4) {
            ctx->pc = 0x3E2118u;
            goto label_3e2118;
        }
    }
    ctx->pc = 0x3E1DFCu;
    // 0x3e1dfc: 0x0  nop
    ctx->pc = 0x3e1dfcu;
    // NOP
label_3e1e00:
    // 0x3e1e00: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e1e04: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3E1E04u;
    {
        const bool branch_taken_0x3e1e04 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3e1e04) {
            ctx->pc = 0x3E1E88u;
            goto label_3e1e88;
        }
    }
    ctx->pc = 0x3E1E0Cu;
    // 0x3e1e0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e1e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e1e10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e1e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3e1e14: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3e1e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3e1e18: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x3e1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x3e1e1c: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x3e1e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e1e20: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x3E1E20u;
    SET_GPR_U32(ctx, 31, 0x3E1E28u);
    ctx->pc = 0x3E1E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E20u;
    // 0x3e1e24: 0x24520020  addiu       $s2, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x3E1E20u, 0x3E1E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E28u;
label_3e1e28:
    // 0x3e1e28: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3e1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1e2c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e1e2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1e30: 0x0  nop
    ctx->pc = 0x3e1e30u;
    // NOP
    // 0x3e1e34: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e1e34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1e38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1E38u;
    {
        const bool branch_taken_0x3e1e38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E38u;
        // 0x3e1e3c: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e38) {
            ctx->pc = 0x3E1E50u;
            goto label_3e1e50;
        }
    }
    ctx->pc = 0x3E1E40u;
    // 0x3e1e40: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e1e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e1e44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e1e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1e48: 0x0  nop
    ctx->pc = 0x3e1e48u;
    // NOP
    // 0x3e1e4c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3e1e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3e1e50:
    // 0x3e1e50: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1E50u;
    SET_GPR_U32(ctx, 31, 0x3E1E58u);
    ctx->pc = 0x3E1E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E50u;
    // 0x3e1e54: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1E50u, 0x3E1E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E58u;
label_3e1e58:
    // 0x3e1e58: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e1e5c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E1E5Cu;
    {
        const bool branch_taken_0x3e1e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1E5Cu;
        // 0x3e1e60: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1e5c) {
            ctx->pc = 0x3E1EB0u;
            goto label_3e1eb0;
        }
    }
    ctx->pc = 0x3E1E64u;
    // 0x3e1e64: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3e1e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3e1e68: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x3e1e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x3e1e6c: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x3e1e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3e1e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e1e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1e74: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x3e1e74u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x3e1e78: 0xc0f849c  jal         func_3E1270
    ctx->pc = 0x3E1E78u;
    SET_GPR_U32(ctx, 31, 0x3E1E80u);
    ctx->pc = 0x3E1E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E78u;
    // 0x3e1e7c: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1270u, 0x3E1E78u, 0x3E1E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E80u;
label_3e1e80:
    // 0x3e1e80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3E1E80u;
    {
        const bool branch_taken_0x3e1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1e80) {
            ctx->pc = 0x3E1EB0u;
            goto label_3e1eb0;
        }
    }
    ctx->pc = 0x3E1E88u;
label_3e1e88:
    // 0x3e1e88: 0xc0f84b8  jal         func_3E12E0
    ctx->pc = 0x3E1E88u;
    SET_GPR_U32(ctx, 31, 0x3E1E90u);
    ctx->pc = 0x3E1E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E88u;
    // 0x3e1e8c: 0x26240028  addiu       $a0, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E12E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E12E0u, 0x3E1E88u, 0x3E1E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1E90u;
label_3e1e90:
    // 0x3e1e90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1E90u;
    {
        const bool branch_taken_0x3e1e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1e90) {
            ctx->pc = 0x3E1EA8u;
            goto label_3e1ea8;
        }
    }
    ctx->pc = 0x3E1E98u;
    // 0x3e1e98: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1E98u;
    SET_GPR_U32(ctx, 31, 0x3E1EA0u);
    ctx->pc = 0x3E1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E98u;
    // 0x3e1e9c: 0xc62c0038  lwc1        $f12, 0x38($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1E98u, 0x3E1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1EA0u;
label_3e1ea0:
    // 0x3e1ea0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E1EA0u;
    {
        const bool branch_taken_0x3e1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1EA0u;
        // 0x3e1ea4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ea0) {
            ctx->pc = 0x3E1EB0u;
            goto label_3e1eb0;
        }
    }
    ctx->pc = 0x3E1EA8u;
label_3e1ea8:
    // 0x3e1ea8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e1ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e1eac: 0x0  nop
    ctx->pc = 0x3e1eacu;
    // NOP
label_3e1eb0:
    // 0x3e1eb0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3e1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3e1eb4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e1eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1eb8: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3e1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1ebc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e1ebcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1ec0: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3e1ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3e1ec4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e1ec4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1ec8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1ecc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1eccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1ed0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1ed0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e1ed4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1ed4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1ed8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1edc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1EDCu;
    {
        const bool branch_taken_0x3e1edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1edc) {
            ctx->pc = 0x3E1EF4u;
            goto label_3e1ef4;
        }
    }
    ctx->pc = 0x3E1EE4u;
    // 0x3e1ee4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1ee8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e1ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e1eec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1EECu;
    {
        const bool branch_taken_0x3e1eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1eec) {
            ctx->pc = 0x3E1F0Cu;
            goto label_3e1f0c;
        }
    }
    ctx->pc = 0x3E1EF4u;
label_3e1ef4:
    // 0x3e1ef4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e1ef4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e1ef8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e1efc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e1f00: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e1f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e1f04: 0x0  nop
    ctx->pc = 0x3e1f04u;
    // NOP
    // 0x3e1f08: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e1f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e1f0c:
    // 0x3e1f0c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1F0Cu;
    {
        const bool branch_taken_0x3e1f0c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F0Cu;
        // 0x3e1f10: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f0c) {
            ctx->pc = 0x3E1F20u;
            goto label_3e1f20;
        }
    }
    ctx->pc = 0x3E1F14u;
    // 0x3e1f14: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e1f14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1f18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1F18u;
    {
        const bool branch_taken_0x3e1f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F18u;
        // 0x3e1f1c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f18) {
            ctx->pc = 0x3E1F38u;
            goto label_3e1f38;
        }
    }
    ctx->pc = 0x3E1F20u;
label_3e1f20:
    // 0x3e1f20: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e1f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e1f24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e1f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e1f28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e1f28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1f2c: 0x0  nop
    ctx->pc = 0x3e1f2cu;
    // NOP
    // 0x3e1f30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e1f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e1f34: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e1f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e1f38:
    // 0x3e1f38: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e1f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1f40: 0x0  nop
    ctx->pc = 0x3e1f40u;
    // NOP
    // 0x3e1f44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e1f44u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e1f48: 0x0  nop
    ctx->pc = 0x3e1f48u;
    // NOP
    // 0x3e1f4c: 0x0  nop
    ctx->pc = 0x3e1f4cu;
    // NOP
    // 0x3e1f50: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3E1F50u;
    {
        const bool branch_taken_0x3e1f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F50u;
        // 0x3e1f54: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f50) {
            ctx->pc = 0x3E2118u;
            goto label_3e2118;
        }
    }
    ctx->pc = 0x3E1F58u;
label_3e1f58:
    // 0x3e1f58: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e1f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e1f5c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1F5Cu;
    {
        const bool branch_taken_0x3e1f5c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3E1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F5Cu;
        // 0x3e1f60: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f5c) {
            ctx->pc = 0x3E1F70u;
            goto label_3e1f70;
        }
    }
    ctx->pc = 0x3E1F64u;
    // 0x3e1f64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e1f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e1f68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3E1F68u;
    {
        const bool branch_taken_0x3e1f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F68u;
        // 0x3e1f6c: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f68) {
            ctx->pc = 0x3E1FC8u;
            goto label_3e1fc8;
        }
    }
    ctx->pc = 0x3E1F70u;
label_3e1f70:
    // 0x3e1f70: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3e1f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3e1f74: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x3e1f74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e1f78: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E1F78u;
    {
        const bool branch_taken_0x3e1f78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F78u;
        // 0x3e1f7c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f78) {
            ctx->pc = 0x3E1FC0u;
            goto label_3e1fc0;
        }
    }
    ctx->pc = 0x3E1F80u;
    // 0x3e1f80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x3e1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x3e1f84: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3e1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3e1f88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e1f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e1f8c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3e1f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1f90: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x3e1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e1f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e1f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1f98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3e1f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3e1f9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3e1f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e1fa0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3e1fa0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3e1fa4: 0x0  nop
    ctx->pc = 0x3e1fa4u;
    // NOP
    // 0x3e1fa8: 0x0  nop
    ctx->pc = 0x3e1fa8u;
    // NOP
    // 0x3e1fac: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E1FACu;
    SET_GPR_U32(ctx, 31, 0x3E1FB4u);
    ctx->pc = 0x3E1FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1FACu;
    // 0x3e1fb0: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E1FACu, 0x3E1FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1FB4u;
label_3e1fb4:
    // 0x3e1fb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1FB4u;
    {
        const bool branch_taken_0x3e1fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FB4u;
        // 0x3e1fb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1fb4) {
            ctx->pc = 0x3E1FC8u;
            goto label_3e1fc8;
        }
    }
    ctx->pc = 0x3E1FBCu;
    // 0x3e1fbc: 0x0  nop
    ctx->pc = 0x3e1fbcu;
    // NOP
label_3e1fc0:
    // 0x3e1fc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e1fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e1fc4: 0x0  nop
    ctx->pc = 0x3e1fc4u;
    // NOP
label_3e1fc8:
    // 0x3e1fc8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x3e1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x3e1fcc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e1fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e1fd0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3e1fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3e1fd4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e1fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e1fd8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3e1fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3e1fdc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e1fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1fe0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e1fe4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e1fe4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e1fe8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e1fe8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e1fec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e1fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e1ff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e1ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1ff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E1FF4u;
    {
        const bool branch_taken_0x3e1ff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1ff4) {
            ctx->pc = 0x3E200Cu;
            goto label_3e200c;
        }
    }
    ctx->pc = 0x3E1FFCu;
    // 0x3e1ffc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e1ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2000: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e2000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e2004: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2004u;
    {
        const bool branch_taken_0x3e2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2004) {
            ctx->pc = 0x3E2024u;
            goto label_3e2024;
        }
    }
    ctx->pc = 0x3E200Cu;
label_3e200c:
    // 0x3e200c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e200cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e2010: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e2010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e2014: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e2014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e2018: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e2018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e201c: 0x0  nop
    ctx->pc = 0x3e201cu;
    // NOP
    // 0x3e2020: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e2020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e2024:
    // 0x3e2024: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2024u;
    {
        const bool branch_taken_0x3e2024 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2024u;
        // 0x3e2028: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2024) {
            ctx->pc = 0x3E2038u;
            goto label_3e2038;
        }
    }
    ctx->pc = 0x3E202Cu;
    // 0x3e202c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e202cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2030: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2030u;
    {
        const bool branch_taken_0x3e2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2030u;
        // 0x3e2034: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2030) {
            ctx->pc = 0x3E2050u;
            goto label_3e2050;
        }
    }
    ctx->pc = 0x3E2038u;
label_3e2038:
    // 0x3e2038: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e2038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e203c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e203cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e2040: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e2040u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2044: 0x0  nop
    ctx->pc = 0x3e2044u;
    // NOP
    // 0x3e2048: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e2048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e204c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e204cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e2050:
    // 0x3e2050: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e2050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e2054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2058: 0x0  nop
    ctx->pc = 0x3e2058u;
    // NOP
    // 0x3e205c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e205cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e2060: 0x0  nop
    ctx->pc = 0x3e2060u;
    // NOP
    // 0x3e2064: 0x0  nop
    ctx->pc = 0x3e2064u;
    // NOP
    // 0x3e2068: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3E2068u;
    {
        const bool branch_taken_0x3e2068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2068u;
        // 0x3e206c: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2068) {
            ctx->pc = 0x3E2118u;
            goto label_3e2118;
        }
    }
    ctx->pc = 0x3E2070u;
label_3e2070:
    // 0x3e2070: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3e2070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3e2074: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3e2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2078: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3e2078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3e207c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3e207cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e2080: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3e2080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3e2084: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3e2084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3e2088: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3e2088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3e208c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3e208cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3e2090: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3e2090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2098: 0x0  nop
    ctx->pc = 0x3e2098u;
    // NOP
    // 0x3e209c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3e209cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3e20a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e20a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e20a4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3E20A4u;
    {
        const bool branch_taken_0x3e20a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e20a4) {
            ctx->pc = 0x3E20BCu;
            goto label_3e20bc;
        }
    }
    ctx->pc = 0x3E20ACu;
    // 0x3e20ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e20acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e20b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e20b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e20b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E20B4u;
    {
        const bool branch_taken_0x3e20b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e20b4) {
            ctx->pc = 0x3E20D4u;
            goto label_3e20d4;
        }
    }
    ctx->pc = 0x3E20BCu;
label_3e20bc:
    // 0x3e20bc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e20bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e20c0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e20c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e20c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3e20c8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3e20c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3e20cc: 0x0  nop
    ctx->pc = 0x3e20ccu;
    // NOP
    // 0x3e20d0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e20d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_3e20d4:
    // 0x3e20d4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E20D4u;
    {
        const bool branch_taken_0x3e20d4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x3E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20D4u;
        // 0x3e20d8: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20d4) {
            ctx->pc = 0x3E20E8u;
            goto label_3e20e8;
        }
    }
    ctx->pc = 0x3E20DCu;
    // 0x3e20dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e20dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e20e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E20E0u;
    {
        const bool branch_taken_0x3e20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20E0u;
        // 0x3e20e4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20e0) {
            ctx->pc = 0x3E2100u;
            goto label_3e2100;
        }
    }
    ctx->pc = 0x3E20E8u;
label_3e20e8:
    // 0x3e20e8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3e20e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e20ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e20ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e20f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e20f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e20f4: 0x0  nop
    ctx->pc = 0x3e20f4u;
    // NOP
    // 0x3e20f8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e20f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e20fc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e20fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e2100:
    // 0x3e2100: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3e2100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3e2104: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e2104u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2108: 0x0  nop
    ctx->pc = 0x3e2108u;
    // NOP
    // 0x3e210c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3e210cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3e2110: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x3e2110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x3e2114: 0x0  nop
    ctx->pc = 0x3e2114u;
    // NOP
label_3e2118:
    // 0x3e2118: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x3e2118u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e211c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e211cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2120: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2120u;
    {
        const bool branch_taken_0x3e2120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e2120) {
            ctx->pc = 0x3E2140u;
            goto label_3e2140;
        }
    }
    ctx->pc = 0x3E2128u;
    // 0x3e2128: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E2128u;
    {
        const bool branch_taken_0x3e2128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2128) {
            ctx->pc = 0x3E2138u;
            goto label_3e2138;
        }
    }
    ctx->pc = 0x3E2130u;
    // 0x3e2130: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3E2130u;
    {
        const bool branch_taken_0x3e2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e2130) {
            ctx->pc = 0x3E23D8u;
            goto label_3e23d8;
        }
    }
    ctx->pc = 0x3E2138u;
label_3e2138:
    // 0x3e2138: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3e2138u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e213c: 0x0  nop
    ctx->pc = 0x3e213cu;
    // NOP
label_3e2140:
    // 0x3e2140: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3e2140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3e2144: 0xe62c0014  swc1        $f12, 0x14($s1)
    ctx->pc = 0x3e2144u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x3e2148: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e214c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3e214cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2154: 0x0  nop
    ctx->pc = 0x3e2154u;
    // NOP
    // 0x3e2158: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x3e2158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x3e215c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3e215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2160: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3e2160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2164: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e2164u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e2168: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e2168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e216c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3E216Cu;
    {
        const bool branch_taken_0x3e216c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E216Cu;
        // 0x3e2170: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e216c) {
            ctx->pc = 0x3E2188u;
            goto label_3e2188;
        }
    }
    ctx->pc = 0x3E2174u;
    // 0x3e2174: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e217c: 0x0  nop
    ctx->pc = 0x3e217cu;
    // NOP
    // 0x3e2180: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e2180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e2184: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x3e2184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_3e2188:
    // 0x3e2188: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x3e2188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x3e218c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3e218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2190: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2194: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3e2194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e219c: 0x0  nop
    ctx->pc = 0x3e219cu;
    // NOP
    // 0x3e21a0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e21a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e21a4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e21a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e21a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3E21A8u;
    {
        const bool branch_taken_0x3e21a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E21A8u;
        // 0x3e21ac: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e21a8) {
            ctx->pc = 0x3E21C8u;
            goto label_3e21c8;
        }
    }
    ctx->pc = 0x3E21B0u;
    // 0x3e21b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e21b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e21b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e21b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e21b8: 0x0  nop
    ctx->pc = 0x3e21b8u;
    // NOP
    // 0x3e21bc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3e21bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3e21c0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x3e21c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x3e21c4: 0x0  nop
    ctx->pc = 0x3e21c4u;
    // NOP
label_3e21c8:
    // 0x3e21c8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3e21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e21cc: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3e21ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e21d0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3e21d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e21d4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e21d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e21d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e21d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e21dc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e21dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e21e0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x3e21e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x3e21e4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3e21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3e21e8: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x3e21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e21ec: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x3E21ECu;
    SET_GPR_U32(ctx, 31, 0x3E21F4u);
    ctx->pc = 0x3E21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E21ECu;
    // 0x3e21f0: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x3E21ECu, 0x3E21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E21F4u;
label_3e21f4:
    // 0x3e21f4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3e21f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e21f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e21f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e21fc: 0x0  nop
    ctx->pc = 0x3e21fcu;
    // NOP
    // 0x3e2200: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3e2200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2204: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2204u;
    {
        const bool branch_taken_0x3e2204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2204u;
        // 0x3e2208: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2204) {
            ctx->pc = 0x3E2220u;
            goto label_3e2220;
        }
    }
    ctx->pc = 0x3E220Cu;
    // 0x3e220c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e220cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2210: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e2210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e2214: 0x0  nop
    ctx->pc = 0x3e2214u;
    // NOP
    // 0x3e2218: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3e2218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e221c: 0x0  nop
    ctx->pc = 0x3e221cu;
    // NOP
label_3e2220:
    // 0x3e2220: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3E2220u;
    SET_GPR_U32(ctx, 31, 0x3E2228u);
    ctx->pc = 0x3E2224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2220u;
    // 0x3e2224: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3E2220u, 0x3E2228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2228u;
label_3e2228:
    // 0x3e2228: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x3e2228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x3e222c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3e222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3e2230: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x3e2230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2234: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e223c: 0x0  nop
    ctx->pc = 0x3e223cu;
    // NOP
    // 0x3e2240: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x3e2240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3e2244: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3e2244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2248: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x3e2248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e224c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e224cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e2250: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e2250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2254: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3E2254u;
    {
        const bool branch_taken_0x3e2254 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2254u;
        // 0x3e2258: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2254) {
            ctx->pc = 0x3E2270u;
            goto label_3e2270;
        }
    }
    ctx->pc = 0x3E225Cu;
    // 0x3e225c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e2260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2264: 0x0  nop
    ctx->pc = 0x3e2264u;
    // NOP
    // 0x3e2268: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e2268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e226c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3e226cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_3e2270:
    // 0x3e2270: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x3e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x3e2274: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3e2274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e2278: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e227c: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x3e227cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e2280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e2280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e2284: 0x0  nop
    ctx->pc = 0x3e2284u;
    // NOP
    // 0x3e2288: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e2288u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e228c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e228cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e2290: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3E2290u;
    {
        const bool branch_taken_0x3e2290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E2294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2290u;
        // 0x3e2294: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2290) {
            ctx->pc = 0x3E22B0u;
            goto label_3e22b0;
        }
    }
    ctx->pc = 0x3E2298u;
    // 0x3e2298: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3e2298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3e229c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e229cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e22a0: 0x0  nop
    ctx->pc = 0x3e22a0u;
    // NOP
    // 0x3e22a4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3e22a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3e22a8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x3e22a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x3e22ac: 0x0  nop
    ctx->pc = 0x3e22acu;
    // NOP
label_3e22b0:
    // 0x3e22b0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3e22b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e22b4: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x3e22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e22b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3e22b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e22bc: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x3e22bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e22c0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3e22c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e22c4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3e22c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3e22c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e22c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e22cc: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3e22ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3e22d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E22D0u;
    {
        const bool branch_taken_0x3e22d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22D0u;
        // 0x3e22d4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e22d0) {
            ctx->pc = 0x3E22F4u;
            goto label_3e22f4;
        }
    }
    ctx->pc = 0x3E22D8u;
label_3e22d8:
    // 0x3e22d8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e22d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e22dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e22e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e22e4: 0x0  nop
    ctx->pc = 0x3e22e4u;
    // NOP
    // 0x3e22e8: 0x0  nop
    ctx->pc = 0x3e22e8u;
    // NOP
    // 0x3e22ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E22ECu;
    {
        const bool branch_taken_0x3e22ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e22ec) {
            ctx->pc = 0x3E22D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e22d8;
        }
    }
    ctx->pc = 0x3E22F4u;
label_3e22f4:
    // 0x3e22f4: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3E22F4u;
    SET_GPR_U32(ctx, 31, 0x3E22FCu);
    ctx->pc = 0x3E22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22F4u;
    // 0x3e22f8: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3E22F4u, 0x3E22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22FCu;
label_3e22fc:
    // 0x3e22fc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3e22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3e2300: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3E2300u;
    SET_GPR_U32(ctx, 31, 0x3E2308u);
    ctx->pc = 0x3E2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2300u;
    // 0x3e2304: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3E2300u, 0x3E2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2308u;
label_3e2308:
    // 0x3e2308: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e230c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x3e230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3e2310: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x3e2310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3e2314: 0x2442e710  addiu       $v0, $v0, -0x18F0
    ctx->pc = 0x3e2314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
    // 0x3e2318: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e2318u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E710u));
    // 0x3e231c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x3e231cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3e2320: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e2320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2324: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2324u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3e2328: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e2328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e232c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e232cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e2330: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3E2330u;
    SET_GPR_U32(ctx, 31, 0x3E2338u);
    ctx->pc = 0x3E2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2330u;
    // 0x3e2334: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3E2330u, 0x3E2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2338u;
label_3e2338:
    // 0x3e2338: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x3e2338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e233c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E233Cu;
    {
        const bool branch_taken_0x3e233c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E233Cu;
        // 0x3e2340: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e233c) {
            ctx->pc = 0x3E2360u;
            goto label_3e2360;
        }
    }
    ctx->pc = 0x3E2344u;
label_3e2344:
    // 0x3e2344: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3e2344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e2348: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e2348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e234c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e2350: 0x0  nop
    ctx->pc = 0x3e2350u;
    // NOP
    // 0x3e2354: 0x0  nop
    ctx->pc = 0x3e2354u;
    // NOP
    // 0x3e2358: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3E2358u;
    {
        const bool branch_taken_0x3e2358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e2358) {
            ctx->pc = 0x3E2344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e2344;
        }
    }
    ctx->pc = 0x3E2360u;
label_3e2360:
    // 0x3e2360: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x3E2360u;
    SET_GPR_U32(ctx, 31, 0x3E2368u);
    ctx->pc = 0x3E2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2360u;
    // 0x3e2364: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x3E2360u, 0x3E2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2368u;
label_3e2368:
    // 0x3e2368: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3e2368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3e236c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3E236Cu;
    SET_GPR_U32(ctx, 31, 0x3E2374u);
    ctx->pc = 0x3E2370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E236Cu;
    // 0x3e2370: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3E236Cu, 0x3E2374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2374u;
label_3e2374:
    // 0x3e2374: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e2374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e2378: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3e2378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3e237c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3e237cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3e2380: 0x2442e720  addiu       $v0, $v0, -0x18E0
    ctx->pc = 0x3e2380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960928));
    // 0x3e2384: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3e2384u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E720u));
    // 0x3e2388: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x3e2388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3e238c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3e238cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e2390: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3e2390u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3e2394: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e2394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e2398: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e2398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e239c: 0xc0d6bf0  jal         func_35AFC0
    ctx->pc = 0x3E239Cu;
    SET_GPR_U32(ctx, 31, 0x3E23A4u);
    ctx->pc = 0x3E23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E239Cu;
    // 0x3e23a0: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AFC0u, 0x3E239Cu, 0x3E23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23A4u;
label_3e23a4:
    // 0x3e23a4: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e23a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e23a8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3e23a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e23ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e23acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e23b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e23b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e23b4: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E23B4u;
    SET_GPR_U32(ctx, 31, 0x3E23BCu);
    ctx->pc = 0x3E23B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23B4u;
    // 0x3e23b8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E23B4u, 0x3E23BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23BCu;
label_3e23bc:
    // 0x3e23bc: 0x8f828cf8  lw          $v0, -0x7308($gp)
    ctx->pc = 0x3e23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x3e23c0: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3e23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e23c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e23c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e23c8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3e23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3e23cc: 0xc0d6bb4  jal         func_35AED0
    ctx->pc = 0x3E23CCu;
    SET_GPR_U32(ctx, 31, 0x3E23D4u);
    ctx->pc = 0x3E23D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E23CCu;
    // 0x3e23d0: 0x244500f0  addiu       $a1, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AED0u, 0x3E23CCu, 0x3E23D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E23D4u;
label_3e23d4:
    // 0x3e23d4: 0x0  nop
    ctx->pc = 0x3e23d4u;
    // NOP
label_3e23d8:
    // 0x3e23d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e23d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e23dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e23dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e23e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e23e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e23e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e23e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e23e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E23E8u;
        // 0x3e23ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E23E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E23F0u;
}
