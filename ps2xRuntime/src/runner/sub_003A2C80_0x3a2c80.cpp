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

// Function: sub_003A2C80
// Address: 0x3a2c80 - 0x3a30b8
void sub_003A2C80_0x3a2c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2C80_0x3a2c80");
#endif

    switch (ctx->pc) {
        case 0x3a2ca0u: goto label_3a2ca0;
        case 0x3a2d18u: goto label_3a2d18;
        case 0x3a2d58u: goto label_3a2d58;
        case 0x3a2e10u: goto label_3a2e10;
        case 0x3a2f8cu: goto label_3a2f8c;
        case 0x3a3088u: goto label_3a3088;
        case 0x3a30a8u: goto label_3a30a8;
        default: break;
    }

    ctx->pc = 0x3a2c80u;

    // 0x3a2c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a2c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a2c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a2c88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a2c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a2c8c: 0x90822b20  lbu         $v0, 0x2B20($a0)
    ctx->pc = 0x3a2c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11040)));
    // 0x3a2c90: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A2C90u;
    {
        const bool branch_taken_0x3a2c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C90u;
        // 0x3a2c94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c90) {
            ctx->pc = 0x3A2D18u;
            goto label_3a2d18;
        }
    }
    ctx->pc = 0x3A2C98u;
    // 0x3a2c98: 0xc0e8b00  jal         func_3A2C00
    ctx->pc = 0x3A2C98u;
    SET_GPR_U32(ctx, 31, 0x3A2CA0u);
    ctx->pc = 0x3A2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C00u, 0x3A2C98u, 0x3A2CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2CA0u;
label_3a2ca0:
    // 0x3a2ca0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A2CA0u;
    {
        const bool branch_taken_0x3a2ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2ca0) {
            ctx->pc = 0x3A2D18u;
            goto label_3a2d18;
        }
    }
    ctx->pc = 0x3A2CA8u;
    // 0x3a2ca8: 0xa2002b20  sb          $zero, 0x2B20($s0)
    ctx->pc = 0x3a2ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2cac: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x3a2cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x3a2cb0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2cb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2cb8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2cc0: 0x0  nop
    ctx->pc = 0x3a2cc0u;
    // NOP
    // 0x3a2cc4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2cc8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2ccc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2CCCu;
    {
        const bool branch_taken_0x3a2ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2ccc) {
            ctx->pc = 0x3A2CE4u;
            goto label_3a2ce4;
        }
    }
    ctx->pc = 0x3A2CD4u;
    // 0x3a2cd4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2cd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2cd8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2cd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2cdc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2CDCu;
    {
        const bool branch_taken_0x3a2cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CDCu;
        // 0x3a2ce0: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2cdc) {
            ctx->pc = 0x3A2D00u;
            goto label_3a2d00;
        }
    }
    ctx->pc = 0x3A2CE4u;
label_3a2ce4:
    // 0x3a2ce4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2ce4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2ce8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2cec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2cecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2cf0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2cf4: 0x0  nop
    ctx->pc = 0x3a2cf4u;
    // NOP
    // 0x3a2cf8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2cfc: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3a2d00:
    // 0x3a2d00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3a2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a2d04: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3a2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3a2d08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3a2d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a2d0c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x3a2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3a2d10: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x3A2D10u;
    SET_GPR_U32(ctx, 31, 0x3A2D18u);
    ctx->pc = 0x3A2D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D10u;
    // 0x3a2d14: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x3A2D10u, 0x3A2D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D18u;
label_3a2d18:
    // 0x3a2d18: 0x92032b20  lbu         $v1, 0x2B20($s0)
    ctx->pc = 0x3a2d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11040)));
    // 0x3a2d1c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a2d20: 0x106200b7  beq         $v1, $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x3A2D20u;
    {
        const bool branch_taken_0x3a2d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D20u;
        // 0x3a2d24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d20) {
            ctx->pc = 0x3A3000u;
            goto label_3a3000;
        }
    }
    ctx->pc = 0x3A2D28u;
    // 0x3a2d28: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A2D28u;
    {
        const bool branch_taken_0x3a2d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a2d28) {
            ctx->pc = 0x3A2F00u;
            goto label_3a2f00;
        }
    }
    ctx->pc = 0x3A2D30u;
    // 0x3a2d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2d34: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A2D34u;
    {
        const bool branch_taken_0x3a2d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a2d34) {
            ctx->pc = 0x3A2DE0u;
            goto label_3a2de0;
        }
    }
    ctx->pc = 0x3A2D3Cu;
    // 0x3a2d3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2D3Cu;
    {
        const bool branch_taken_0x3a2d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d3c) {
            ctx->pc = 0x3A2D50u;
            goto label_3a2d50;
        }
    }
    ctx->pc = 0x3A2D44u;
    // 0x3a2d44: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x3A2D44u;
    {
        const bool branch_taken_0x3a2d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d44) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2D4Cu;
    // 0x3a2d4c: 0x0  nop
    ctx->pc = 0x3a2d4cu;
    // NOP
label_3a2d50:
    // 0x3a2d50: 0xc0e8b00  jal         func_3A2C00
    ctx->pc = 0x3A2D50u;
    SET_GPR_U32(ctx, 31, 0x3A2D58u);
    ctx->pc = 0x3A2D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2D50u;
    // 0x3a2d54: 0xa20229d1  sb          $v0, 0x29D1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C00u, 0x3A2D50u, 0x3A2D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2D58u;
label_3a2d58:
    // 0x3a2d58: 0x144000d1  bnez        $v0, . + 4 + (0xD1 << 2)
    ctx->pc = 0x3A2D58u;
    {
        const bool branch_taken_0x3a2d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d58) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2D60u;
    // 0x3a2d60: 0x86022b24  lh          $v0, 0x2B24($s0)
    ctx->pc = 0x3a2d60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3a2d64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2D64u;
    {
        const bool branch_taken_0x3a2d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2d64) {
            ctx->pc = 0x3A2D78u;
            goto label_3a2d78;
        }
    }
    ctx->pc = 0x3A2D6Cu;
    // 0x3a2d6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a2d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a2d70: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3A2D70u;
    {
        const bool branch_taken_0x3a2d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D70u;
        // 0x3a2d74: 0xa6022b24  sh          $v0, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2d70) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2D78u;
label_3a2d78:
    // 0x3a2d78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a2d7c: 0xa2022b20  sb          $v0, 0x2B20($s0)
    ctx->pc = 0x3a2d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2d80: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2d84: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2d88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2d8c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2d94: 0x0  nop
    ctx->pc = 0x3a2d94u;
    // NOP
    // 0x3a2d98: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2d9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2da0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2DA0u;
    {
        const bool branch_taken_0x3a2da0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2da0) {
            ctx->pc = 0x3A2DB8u;
            goto label_3a2db8;
        }
    }
    ctx->pc = 0x3A2DA8u;
    // 0x3a2da8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2dac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2db0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2DB0u;
    {
        const bool branch_taken_0x3a2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2DB0u;
        // 0x3a2db4: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2db0) {
            ctx->pc = 0x3A2DD4u;
            goto label_3a2dd4;
        }
    }
    ctx->pc = 0x3A2DB8u;
label_3a2db8:
    // 0x3a2db8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2db8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2dbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2dc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2dc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2dc8: 0x0  nop
    ctx->pc = 0x3a2dc8u;
    // NOP
    // 0x3a2dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2dd0: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3a2dd4:
    // 0x3a2dd4: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x3A2DD4u;
    {
        const bool branch_taken_0x3a2dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2dd4) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2DDCu;
    // 0x3a2ddc: 0x0  nop
    ctx->pc = 0x3a2ddcu;
    // NOP
label_3a2de0:
    // 0x3a2de0: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3a2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a2de4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3a2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3a2de8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3a2de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3a2dec: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a2decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a2df0: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3a2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3a2df4: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x3a2df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3a2df8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3a2df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3a2dfc: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3a2dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3a2e00: 0x8e0206cc  lw          $v0, 0x6CC($s0)
    ctx->pc = 0x3a2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x3a2e04: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3a2e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3a2e08: 0xc0e8ae8  jal         func_3A2BA0
    ctx->pc = 0x3A2E08u;
    SET_GPR_U32(ctx, 31, 0x3A2E10u);
    ctx->pc = 0x3A2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2E08u;
    // 0x3a2e0c: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2BA0u, 0x3A2E08u, 0x3A2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2E10u;
label_3a2e10:
    // 0x3a2e10: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3A2E10u;
    {
        const bool branch_taken_0x3a2e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2e10) {
            ctx->pc = 0x3A2EE0u;
            goto label_3a2ee0;
        }
    }
    ctx->pc = 0x3A2E18u;
    // 0x3a2e18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3a2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3a2e1c: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3a2e1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3a2e20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2e24: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2e2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3a2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a2e30: 0xa6022b22  sh          $v0, 0x2B22($s0)
    ctx->pc = 0x3a2e30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a2e34: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2e38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2e3c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2e40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2E40u;
    {
        const bool branch_taken_0x3a2e40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E40u;
        // 0x3a2e44: 0x86042b22  lh          $a0, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e40) {
            ctx->pc = 0x3A2E58u;
            goto label_3a2e58;
        }
    }
    ctx->pc = 0x3A2E48u;
    // 0x3a2e48: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2e4c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2e50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2E50u;
    {
        const bool branch_taken_0x3a2e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2E50u;
        // 0x3a2e54: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2e50) {
            ctx->pc = 0x3A2E74u;
            goto label_3a2e74;
        }
    }
    ctx->pc = 0x3A2E58u;
label_3a2e58:
    // 0x3a2e58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2e58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2e5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2e60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2e60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2e64: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2e68: 0x0  nop
    ctx->pc = 0x3a2e68u;
    // NOP
    // 0x3a2e6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2e70: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3a2e70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3a2e74:
    // 0x3a2e74: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
    ctx->pc = 0x3A2E74u;
    {
        const bool branch_taken_0x3a2e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2e74) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2E7Cu;
    // 0x3a2e7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a2e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2e80: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2e84: 0xa2032b20  sb          $v1, 0x2B20($s0)
    ctx->pc = 0x3a2e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a2e88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2e8c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2e90: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2e98: 0x0  nop
    ctx->pc = 0x3a2e98u;
    // NOP
    // 0x3a2e9c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2e9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2ea0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2ea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2ea4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2EA4u;
    {
        const bool branch_taken_0x3a2ea4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2ea4) {
            ctx->pc = 0x3A2EBCu;
            goto label_3a2ebc;
        }
    }
    ctx->pc = 0x3A2EACu;
    // 0x3a2eac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2eacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2eb0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2EB4u;
    {
        const bool branch_taken_0x3a2eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EB4u;
        // 0x3a2eb8: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2eb4) {
            ctx->pc = 0x3A2ED8u;
            goto label_3a2ed8;
        }
    }
    ctx->pc = 0x3A2EBCu;
label_3a2ebc:
    // 0x3a2ebc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2ebcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2ec0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2ec4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2ec8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2ecc: 0x0  nop
    ctx->pc = 0x3a2eccu;
    // NOP
    // 0x3a2ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2ed4: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3a2ed8:
    // 0x3a2ed8: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3A2ED8u;
    {
        const bool branch_taken_0x3a2ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2ed8) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2EE0u;
label_3a2ee0:
    // 0x3a2ee0: 0x86022b22  lh          $v0, 0x2B22($s0)
    ctx->pc = 0x3a2ee0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3a2ee4: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x3a2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x3a2ee8: 0xa6022b22  sh          $v0, 0x2B22($s0)
    ctx->pc = 0x3a2ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a2eec: 0x86022b22  lh          $v0, 0x2B22($s0)
    ctx->pc = 0x3a2eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3a2ef0: 0x441006b  bgez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3A2EF0u;
    {
        const bool branch_taken_0x3a2ef0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3a2ef0) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2EF8u;
    // 0x3a2ef8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x3A2EF8u;
    {
        const bool branch_taken_0x3a2ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EF8u;
        // 0x3a2efc: 0xa6002b22  sh          $zero, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ef8) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2F00u;
label_3a2f00:
    // 0x3a2f00: 0x86022b24  lh          $v0, 0x2B24($s0)
    ctx->pc = 0x3a2f00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3a2f04: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A2F04u;
    {
        const bool branch_taken_0x3a2f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F04u;
        // 0x3a2f08: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f04) {
            ctx->pc = 0x3A2F98u;
            goto label_3a2f98;
        }
    }
    ctx->pc = 0x3A2F0Cu;
    // 0x3a2f0c: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2f0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a2f10: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a2f14: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2f18: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2f18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3a2f1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2f20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2f28: 0x0  nop
    ctx->pc = 0x3a2f28u;
    // NOP
    // 0x3a2f2c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2f30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2f30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2f34: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2F34u;
    {
        const bool branch_taken_0x3a2f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F34u;
        // 0x3a2f38: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f34) {
            ctx->pc = 0x3A2F4Cu;
            goto label_3a2f4c;
        }
    }
    ctx->pc = 0x3A2F3Cu;
    // 0x3a2f3c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2f3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2f40: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2f40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2f44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2F44u;
    {
        const bool branch_taken_0x3a2f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F44u;
        // 0x3a2f48: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f44) {
            ctx->pc = 0x3A2F68u;
            goto label_3a2f68;
        }
    }
    ctx->pc = 0x3A2F4Cu;
label_3a2f4c:
    // 0x3a2f4c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2f4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2f50: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2f54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2f58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2f5c: 0x0  nop
    ctx->pc = 0x3a2f5cu;
    // NOP
    // 0x3a2f60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2f64: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3a2f64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3a2f68:
    // 0x3a2f68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3a2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a2f6c: 0x0  nop
    ctx->pc = 0x3a2f6cu;
    // NOP
    // 0x3a2f70: 0x1812  mflo        $v1
    ctx->pc = 0x3a2f70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3a2f74: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3a2f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3a2f78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a2f7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a2f80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a2f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a2f84: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x3A2F84u;
    SET_GPR_U32(ctx, 31, 0x3A2F8Cu);
    ctx->pc = 0x3A2F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F84u;
    // 0x3a2f88: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x3A2F84u, 0x3A2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F8Cu;
label_3a2f8c:
    // 0x3a2f8c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x3A2F8Cu;
    {
        const bool branch_taken_0x3a2f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f8c) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2F94u;
    // 0x3a2f94: 0x0  nop
    ctx->pc = 0x3a2f94u;
    // NOP
label_3a2f98:
    // 0x3a2f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2f9c: 0xa20229d1  sb          $v0, 0x29D1($s0)
    ctx->pc = 0x3a2f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2fa0: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a2fa4: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x3a2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
    // 0x3a2fa8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a2fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a2fac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a2facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a2fb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a2fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2fb4: 0x0  nop
    ctx->pc = 0x3a2fb4u;
    // NOP
    // 0x3a2fb8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a2fb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a2fbc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a2fbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2fc0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2FC0u;
    {
        const bool branch_taken_0x3a2fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2fc0) {
            ctx->pc = 0x3A2FD8u;
            goto label_3a2fd8;
        }
    }
    ctx->pc = 0x3A2FC8u;
    // 0x3a2fc8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2fcc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2fd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A2FD0u;
    {
        const bool branch_taken_0x3a2fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FD0u;
        // 0x3a2fd4: 0xa6032b24  sh          $v1, 0x2B24($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fd0) {
            ctx->pc = 0x3A2FF4u;
            goto label_3a2ff4;
        }
    }
    ctx->pc = 0x3A2FD8u;
label_3a2fd8:
    // 0x3a2fd8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a2fd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a2fdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a2fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a2fe0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a2fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a2fe4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a2fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a2fe8: 0x0  nop
    ctx->pc = 0x3a2fe8u;
    // NOP
    // 0x3a2fec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a2fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a2ff0: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a2ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
label_3a2ff4:
    // 0x3a2ff4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3A2FF4u;
    {
        const bool branch_taken_0x3a2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FF4u;
        // 0x3a2ff8: 0xa2002b20  sb          $zero, 0x2B20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ff4) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A2FFCu;
    // 0x3a2ffc: 0x0  nop
    ctx->pc = 0x3a2ffcu;
    // NOP
label_3a3000:
    // 0x3a3000: 0x86022b24  lh          $v0, 0x2B24($s0)
    ctx->pc = 0x3a3000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3a3004: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A3004u;
    {
        const bool branch_taken_0x3a3004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3004u;
        // 0x3a3008: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3004) {
            ctx->pc = 0x3A3090u;
            goto label_3a3090;
        }
    }
    ctx->pc = 0x3A300Cu;
    // 0x3a300c: 0xa6032b24  sh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a300cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11044), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a3010: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3a3010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3a3014: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3a3014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a3018: 0x86032b24  lh          $v1, 0x2B24($s0)
    ctx->pc = 0x3a3018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11044)));
    // 0x3a301c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3a301cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a3020: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3a3020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3a3024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3a3024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a3028: 0x0  nop
    ctx->pc = 0x3a3028u;
    // NOP
    // 0x3a302c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3a302cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3a3030: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3a3030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a3034: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3034u;
    {
        const bool branch_taken_0x3a3034 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3034u;
        // 0x3a3038: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3034) {
            ctx->pc = 0x3A304Cu;
            goto label_3a304c;
        }
    }
    ctx->pc = 0x3A303Cu;
    // 0x3a303c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a303cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a3040: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a3040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a3044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A3044u;
    {
        const bool branch_taken_0x3a3044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3044u;
        // 0x3a3048: 0x83001b  divu        $zero, $a0, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3044) {
            ctx->pc = 0x3A3068u;
            goto label_3a3068;
        }
    }
    ctx->pc = 0x3A304Cu;
label_3a304c:
    // 0x3a304c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3a304cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3a3050: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3a3050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3a3054: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a3054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a3058: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3a3058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3a305c: 0x0  nop
    ctx->pc = 0x3a305cu;
    // NOP
    // 0x3a3060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a3060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a3064: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3a3064u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3a3068:
    // 0x3a3068: 0x0  nop
    ctx->pc = 0x3a3068u;
    // NOP
    // 0x3a306c: 0x0  nop
    ctx->pc = 0x3a306cu;
    // NOP
    // 0x3a3070: 0x1012  mflo        $v0
    ctx->pc = 0x3a3070u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3a3074: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x3a3074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3a3078: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3a3078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3a307c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a307cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a3080: 0xc0a85ec  jal         func_2A17B0
    ctx->pc = 0x3A3080u;
    SET_GPR_U32(ctx, 31, 0x3A3088u);
    ctx->pc = 0x3A3084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3080u;
    // 0x3a3084: 0x34450064  ori         $a1, $v0, 0x64 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)100);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A17B0u, 0x3A3080u, 0x3A3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3088u;
label_3a3088:
    // 0x3a3088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3088u;
    {
        const bool branch_taken_0x3a3088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a3088) {
            ctx->pc = 0x3A30A0u;
            goto label_3a30a0;
        }
    }
    ctx->pc = 0x3A3090u;
label_3a3090:
    // 0x3a3090: 0xa20029d1  sb          $zero, 0x29D1($s0)
    ctx->pc = 0x3a3090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10705), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3094: 0xa6002b22  sh          $zero, 0x2B22($s0)
    ctx->pc = 0x3a3094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 0));
    // 0x3a3098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a309c: 0xa2022b20  sb          $v0, 0x2B20($s0)
    ctx->pc = 0x3a309cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11040), (uint8_t)GPR_U32(ctx, 2));
label_3a30a0:
    // 0x3a30a0: 0xc0a4d3c  jal         func_2934F0
    ctx->pc = 0x3A30A0u;
    SET_GPR_U32(ctx, 31, 0x3A30A8u);
    ctx->pc = 0x3A30A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A30A0u;
    // 0x3a30a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x3A30A0u, 0x3A30A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A30A8u;
label_3a30a8:
    // 0x3a30a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a30a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a30ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a30acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a30b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A30B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A30B0u;
        // 0x3a30b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A30B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A30B8u;
}
