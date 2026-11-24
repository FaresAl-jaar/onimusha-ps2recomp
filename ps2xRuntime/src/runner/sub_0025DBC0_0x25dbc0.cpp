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

// Function: sub_0025DBC0
// Address: 0x25dbc0 - 0x25dd5c
void sub_0025DBC0_0x25dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DBC0_0x25dbc0");
#endif

    switch (ctx->pc) {
        case 0x25dc24u: goto label_25dc24;
        case 0x25dc2cu: goto label_25dc2c;
        case 0x25dce0u: goto label_25dce0;
        default: break;
    }

    ctx->pc = 0x25dbc0u;

    // 0x25dbc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25dbc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25dbc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x25dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25dbcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x25dbd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25dbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25dbd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25dbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25dbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25dbe0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x25dbe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dbe4: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x25DBE4u;
    {
        const bool branch_taken_0x25dbe4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBE4u;
        // 0x25dbe8: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dbe4) {
            ctx->pc = 0x25DC10u;
            goto label_25dc10;
        }
    }
    ctx->pc = 0x25DBECu;
    // 0x25dbec: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x25dbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25dbf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25dbf4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DBF4u;
    {
        const bool branch_taken_0x25dbf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25dbf4) {
            ctx->pc = 0x25DC10u;
            goto label_25dc10;
        }
    }
    ctx->pc = 0x25DBFCu;
    // 0x25dbfc: 0x8e6206c8  lw          $v0, 0x6C8($s3)
    ctx->pc = 0x25dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1736)));
    // 0x25dc00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x25dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x25dc04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC04u;
    {
        const bool branch_taken_0x25dc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25dc04) {
            ctx->pc = 0x25DC18u;
            goto label_25dc18;
        }
    }
    ctx->pc = 0x25DC0Cu;
    // 0x25dc0c: 0x0  nop
    ctx->pc = 0x25dc0cu;
    // NOP
label_25dc10:
    // 0x25dc10: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x25DC10u;
    {
        const bool branch_taken_0x25dc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC10u;
        // 0x25dc14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc10) {
            ctx->pc = 0x25DD40u;
            goto label_25dd40;
        }
    }
    ctx->pc = 0x25DC18u;
label_25dc18:
    // 0x25dc18: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x25dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc1c: 0xc076670  jal         func_1D99C0
    ctx->pc = 0x25DC1Cu;
    SET_GPR_U32(ctx, 31, 0x25DC24u);
    ctx->pc = 0x25DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC1Cu;
    // 0x25dc20: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D99C0u, 0x25DC1Cu, 0x25DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC24u;
label_25dc24:
    // 0x25dc24: 0xc0765d8  jal         func_1D9760
    ctx->pc = 0x25DC24u;
    SET_GPR_U32(ctx, 31, 0x25DC2Cu);
    ctx->pc = 0x25DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DC24u;
    // 0x25dc28: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9760u, 0x25DC24u, 0x25DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DC2Cu;
label_25dc2c:
    // 0x25dc2c: 0xc644000c  lwc1        $f4, 0xC($s2)
    ctx->pc = 0x25dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25dc30: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x25dc30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dc34: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x25DC34u;
    {
        const bool branch_taken_0x25dc34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC34u;
        // 0x25dc38: 0xc6652904  lwc1        $f5, 0x2904($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 10500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc34) {
            ctx->pc = 0x25DD38u;
            goto label_25dd38;
        }
    }
    ctx->pc = 0x25DC3Cu;
    // 0x25dc3c: 0x92430014  lbu         $v1, 0x14($s2)
    ctx->pc = 0x25dc3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x25dc40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x25dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x25dc44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25DC44u;
    {
        const bool branch_taken_0x25dc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC44u;
        // 0x25dc48: 0xc64e0004  lwc1        $f14, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc44) {
            ctx->pc = 0x25DC90u;
            goto label_25dc90;
        }
    }
    ctx->pc = 0x25DC4Cu;
    // 0x25dc4c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x25dc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dc50: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25dc50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dc54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC54u;
    {
        const bool branch_taken_0x25dc54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC54u;
        // 0x25dc58: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc54) {
            ctx->pc = 0x25DC68u;
            goto label_25dc68;
        }
    }
    ctx->pc = 0x25DC5Cu;
    // 0x25dc5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25dc5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25dc60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x25DC60u;
    {
        const bool branch_taken_0x25dc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC60u;
        // 0x25dc64: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc60) {
            ctx->pc = 0x25DCA0u;
            goto label_25dca0;
        }
    }
    ctx->pc = 0x25DC68u;
label_25dc68:
    // 0x25dc68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25dc6c: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x25dc6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25dc70: 0x46022001  sub.s       $f0, $f4, $f2
    ctx->pc = 0x25dc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x25dc74: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x25dc74u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25dc78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25dc78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25dc7c: 0x0  nop
    ctx->pc = 0x25dc7cu;
    // NOP
    // 0x25dc80: 0x0  nop
    ctx->pc = 0x25dc80u;
    // NOP
    // 0x25dc84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25DC84u;
    {
        const bool branch_taken_0x25dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC84u;
        // 0x25dc88: 0x46001841  sub.s       $f1, $f3, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc84) {
            ctx->pc = 0x25DCA0u;
            goto label_25dca0;
        }
    }
    ctx->pc = 0x25DC8Cu;
    // 0x25dc8c: 0x0  nop
    ctx->pc = 0x25dc8cu;
    // NOP
label_25dc90:
    // 0x25dc90: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25dc94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25dc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25dc98: 0x0  nop
    ctx->pc = 0x25dc98u;
    // NOP
    // 0x25dc9c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x25dc9cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_25dca0:
    // 0x25dca0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x25dca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25dca4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25DCA4u;
    {
        const bool branch_taken_0x25dca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCA4u;
        // 0x25dca8: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dca4) {
            ctx->pc = 0x25DCC8u;
            goto label_25dcc8;
        }
    }
    ctx->pc = 0x25DCACu;
    // 0x25dcac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dcacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dcb0: 0x0  nop
    ctx->pc = 0x25dcb0u;
    // NOP
    // 0x25dcb4: 0x46002943  div.s       $f5, $f5, $f0
    ctx->pc = 0x25dcb4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x25dcb8: 0x0  nop
    ctx->pc = 0x25dcb8u;
    // NOP
    // 0x25dcbc: 0x0  nop
    ctx->pc = 0x25dcbcu;
    // NOP
    // 0x25dcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25DCC0u;
    {
        const bool branch_taken_0x25dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25dcc0) {
            ctx->pc = 0x25DCD0u;
            goto label_25dcd0;
        }
    }
    ctx->pc = 0x25DCC8u;
label_25dcc8:
    // 0x25dcc8: 0x46001946  mov.s       $f5, $f3
    ctx->pc = 0x25dcc8u;
    ctx->f[5] = FPU_MOV_S(ctx->f[3]);
    // 0x25dccc: 0x0  nop
    ctx->pc = 0x25dcccu;
    // NOP
label_25dcd0:
    // 0x25dcd0: 0x46017002  mul.s       $f0, $f14, $f1
    ctx->pc = 0x25dcd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x25dcd4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x25dcd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x25dcd8: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x25DCD8u;
    SET_GPR_U32(ctx, 31, 0x25DCE0u);
    ctx->pc = 0x25DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DCD8u;
    // 0x25dcdc: 0x46002b02  mul.s       $f12, $f5, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x25DCD8u, 0x25DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DCE0u;
label_25dce0:
    // 0x25dce0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x25dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dce4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25dce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25dce8: 0x0  nop
    ctx->pc = 0x25dce8u;
    // NOP
    // 0x25dcec: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x25dcecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25dcf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25dcf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dcf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25DCF4u;
    {
        const bool branch_taken_0x25dcf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCF4u;
        // 0x25dcf8: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcf4) {
            ctx->pc = 0x25DD00u;
            goto label_25dd00;
        }
    }
    ctx->pc = 0x25DCFCu;
    // 0x25dcfc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x25dcfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_25dd00:
    // 0x25dd00: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x25dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd04: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x25dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25dd08: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x25dd08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dd0c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25DD0Cu;
    {
        const bool branch_taken_0x25dd0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dd0c) {
            ctx->pc = 0x25DD38u;
            goto label_25dd38;
        }
    }
    ctx->pc = 0x25DD14u;
    // 0x25dd14: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x25dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dd18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25dd1c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x25dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25dd20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25dd20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25dd24: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25dd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25dd28: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x25dd28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x25dd2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25DD2Cu;
    {
        const bool branch_taken_0x25dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD2Cu;
        // 0x25dd30: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd2c) {
            ctx->pc = 0x25DD40u;
            goto label_25dd40;
        }
    }
    ctx->pc = 0x25DD34u;
    // 0x25dd34: 0x0  nop
    ctx->pc = 0x25dd34u;
    // NOP
label_25dd38:
    // 0x25dd38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25dd38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd3c: 0x0  nop
    ctx->pc = 0x25dd3cu;
    // NOP
label_25dd40:
    // 0x25dd40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25dd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25dd44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25dd44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25dd48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25dd48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25dd4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25dd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25dd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dd54: 0x3e00008  jr          $ra
    ctx->pc = 0x25DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD54u;
        // 0x25dd58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DD5Cu;
}
