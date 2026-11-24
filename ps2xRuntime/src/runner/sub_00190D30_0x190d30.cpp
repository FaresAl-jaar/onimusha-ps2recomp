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

// Function: sub_00190D30
// Address: 0x190d30 - 0x19113c
void sub_00190D30_0x190d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190D30_0x190d30");
#endif

    switch (ctx->pc) {
        case 0x190d98u: goto label_190d98;
        case 0x190e28u: goto label_190e28;
        case 0x190e90u: goto label_190e90;
        case 0x190efcu: goto label_190efc;
        case 0x190f5cu: goto label_190f5c;
        case 0x19106cu: goto label_19106c;
        case 0x1910d8u: goto label_1910d8;
        default: break;
    }

    ctx->pc = 0x190d30u;

    // 0x190d30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x190d34: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x190d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x190d38: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x190d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x190d3c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x190d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x190d40: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x190d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x190d44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x190d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x190d48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x190d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x190d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x190d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x190d50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190d58: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190d5c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x190D5Cu;
    {
        const bool branch_taken_0x190d5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D5Cu;
        // 0x190d60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d5c) {
            ctx->pc = 0x190D70u;
            goto label_190d70;
        }
    }
    ctx->pc = 0x190D64u;
    // 0x190d64: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x190D64u;
    {
        const bool branch_taken_0x190d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D64u;
        // 0x190d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d64) {
            ctx->pc = 0x191110u;
            goto label_191110;
        }
    }
    ctx->pc = 0x190D6Cu;
    // 0x190d6c: 0x0  nop
    ctx->pc = 0x190d6cu;
    // NOP
label_190d70:
    // 0x190d70: 0x8e160000  lw          $s6, 0x0($s0)
    ctx->pc = 0x190d70u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190d74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x190d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d78: 0x16082a  slt         $at, $zero, $s6
    ctx->pc = 0x190d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x190d7c: 0x102000e2  beqz        $at, . + 4 + (0xE2 << 2)
    ctx->pc = 0x190D7Cu;
    {
        const bool branch_taken_0x190d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D7Cu;
        // 0x190d80: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d7c) {
            ctx->pc = 0x191108u;
            goto label_191108;
        }
    }
    ctx->pc = 0x190D84u;
    // 0x190d84: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x190d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x190d88: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x190d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190d90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x190d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x190d94: 0x245700b4  addiu       $s7, $v0, 0xB4
    ctx->pc = 0x190d94u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_190d98:
    // 0x190d98: 0x92620011  lbu         $v0, 0x11($s3)
    ctx->pc = 0x190d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x190d9c: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x190D9Cu;
    {
        const bool branch_taken_0x190d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D9Cu;
        // 0x190da0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d9c) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190DA4u;
    // 0x190da4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x190da4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190da8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x190da8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x190dac: 0x102000d0  beqz        $at, . + 4 + (0xD0 << 2)
    ctx->pc = 0x190DACu;
    {
        const bool branch_taken_0x190dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DACu;
        // 0x190db0: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190dac) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x190DB4u;
    // 0x190db4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190db8: 0x24635740  addiu       $v1, $v1, 0x5740
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22336));
    // 0x190dbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190dc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x190dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190dc4: 0x400008  jr          $v0
    ctx->pc = 0x190DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190DD0u: goto label_190dd0;
            case 0x190E38u: goto label_190e38;
            case 0x190EA0u: goto label_190ea0;
            case 0x190F70u: goto label_190f70;
            case 0x191008u: goto label_191008;
            case 0x1910E8u: goto label_1910e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190DC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x190DCCu;
    // 0x190dcc: 0x0  nop
    ctx->pc = 0x190dccu;
    // NOP
label_190dd0:
    // 0x190dd0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190dd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x190dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x190dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190ddc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x190ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190de0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190de0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190de4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190DE4u;
    {
        const bool branch_taken_0x190de4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190de4) {
            ctx->pc = 0x190DFCu;
            goto label_190dfc;
        }
    }
    ctx->pc = 0x190DECu;
    // 0x190dec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190decu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190df0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190df4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190DF4u;
    {
        const bool branch_taken_0x190df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190DF4u;
        // 0x190df8: 0x90660008  lbu         $a2, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190df4) {
            ctx->pc = 0x190E18u;
            goto label_190e18;
        }
    }
    ctx->pc = 0x190DFCu;
label_190dfc:
    // 0x190dfc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190dfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190e00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x190e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x190e04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190e08: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190e0c: 0x0  nop
    ctx->pc = 0x190e0cu;
    // NOP
    // 0x190e10: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190e14: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x190e14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_190e18:
    // 0x190e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e1c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x190e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190e20: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x190E20u;
    SET_GPR_U32(ctx, 31, 0x190E28u);
    ctx->pc = 0x190E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E20u;
    // 0x190e24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x190E20u, 0x190E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E28u;
label_190e28:
    // 0x190e28: 0x44000b3  bltz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x190E28u;
    {
        const bool branch_taken_0x190e28 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x190e28) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190E30u;
    // 0x190e30: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x190E30u;
    {
        const bool branch_taken_0x190e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e30) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x190E38u;
label_190e38:
    // 0x190e38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x190e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190e3c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x190e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x190e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190e44: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x190e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190e48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190e4c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190E4Cu;
    {
        const bool branch_taken_0x190e4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190e4c) {
            ctx->pc = 0x190E64u;
            goto label_190e64;
        }
    }
    ctx->pc = 0x190E54u;
    // 0x190e54: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190e58: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190e5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190E5Cu;
    {
        const bool branch_taken_0x190e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190E5Cu;
        // 0x190e60: 0x90660008  lbu         $a2, 0x8($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190e5c) {
            ctx->pc = 0x190E80u;
            goto label_190e80;
        }
    }
    ctx->pc = 0x190E64u;
label_190e64:
    // 0x190e64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190e64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190e68: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x190e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x190e6c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190e6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190e70: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190e70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190e74: 0x0  nop
    ctx->pc = 0x190e74u;
    // NOP
    // 0x190e78: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190e78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190e7c: 0x90660008  lbu         $a2, 0x8($v1)
    ctx->pc = 0x190e7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_190e80:
    // 0x190e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190e84: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x190e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190e88: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x190E88u;
    SET_GPR_U32(ctx, 31, 0x190E90u);
    ctx->pc = 0x190E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190E88u;
    // 0x190e8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x190E88u, 0x190E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E90u;
label_190e90:
    // 0x190e90: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x190E90u;
    {
        const bool branch_taken_0x190e90 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x190e90) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190E98u;
    // 0x190e98: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x190E98u;
    {
        const bool branch_taken_0x190e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e98) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x190EA0u;
label_190ea0:
    // 0x190ea0: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x190ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190ea4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x190ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x190ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190eac: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x190eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190eb0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190eb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190eb4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190EB4u;
    {
        const bool branch_taken_0x190eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190eb4) {
            ctx->pc = 0x190ECCu;
            goto label_190ecc;
        }
    }
    ctx->pc = 0x190EBCu;
    // 0x190ebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190ec0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190ec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190ec4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190EC4u;
    {
        const bool branch_taken_0x190ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190EC4u;
        // 0x190ec8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ec4) {
            ctx->pc = 0x190EE8u;
            goto label_190ee8;
        }
    }
    ctx->pc = 0x190ECCu;
label_190ecc:
    // 0x190ecc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190eccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190ed0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x190ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x190ed4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190ed8: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190ed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190edc: 0x0  nop
    ctx->pc = 0x190edcu;
    // NOP
    // 0x190ee0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190ee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190ee4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x190ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190ee8:
    // 0x190ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190eec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ef0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x190ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190ef4: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x190EF4u;
    SET_GPR_U32(ctx, 31, 0x190EFCu);
    ctx->pc = 0x190EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190EF4u;
    // 0x190ef8: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x190EF4u, 0x190EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190EFCu;
label_190efc:
    // 0x190efc: 0x440007e  bltz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x190EFCu;
    {
        const bool branch_taken_0x190efc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x190efc) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190F04u;
    // 0x190f04: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x190f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190f08: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x190f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x190f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190f10: 0x0  nop
    ctx->pc = 0x190f10u;
    // NOP
    // 0x190f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190f18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190F18u;
    {
        const bool branch_taken_0x190f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190f18) {
            ctx->pc = 0x190F30u;
            goto label_190f30;
        }
    }
    ctx->pc = 0x190F20u;
    // 0x190f20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190f24: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190f28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x190F28u;
    {
        const bool branch_taken_0x190f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F28u;
        // 0x190f2c: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f28) {
            ctx->pc = 0x190F4Cu;
            goto label_190f4c;
        }
    }
    ctx->pc = 0x190F30u;
label_190f30:
    // 0x190f30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190f34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x190f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x190f38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x190f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x190f3c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x190f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x190f40: 0x0  nop
    ctx->pc = 0x190f40u;
    // NOP
    // 0x190f44: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x190f44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x190f48: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_190f4c:
    // 0x190f4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f54: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x190F54u;
    SET_GPR_U32(ctx, 31, 0x190F5Cu);
    ctx->pc = 0x190F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F54u;
    // 0x190f58: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x190F54u, 0x190F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190F5Cu;
label_190f5c:
    // 0x190f5c: 0x4400066  bltz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x190F5Cu;
    {
        const bool branch_taken_0x190f5c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x190f5c) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190F64u;
    // 0x190f64: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x190F64u;
    {
        const bool branch_taken_0x190f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F64u;
        // 0x190f68: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f64) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x190F6Cu;
    // 0x190f6c: 0x0  nop
    ctx->pc = 0x190f6cu;
    // NOP
label_190f70:
    // 0x190f70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x190f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x190f74: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x190f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190f78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190f7c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x190f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x190f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190f84: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x190F84u;
    {
        const bool branch_taken_0x190f84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190f84) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190F8Cu;
    // 0x190f8c: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x190f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x190f90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190f94: 0x45010058  bc1t        . + 4 + (0x58 << 2)
    ctx->pc = 0x190F94u;
    {
        const bool branch_taken_0x190f94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190f94) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x190F9Cu;
    // 0x190f9c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x190f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190fa0: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x190fa0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x190fa4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x190fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x190fa8: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x190fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x190fac: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x190facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x190fb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x190fb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190fb4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x190fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x190fb8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x190fb8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x190fbc: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x190fbcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x190fc0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x190fc0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x190fc4: 0x4604209c  madd.s      $f2, $f4, $f4
    ctx->pc = 0x190fc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x190fc8: 0x46020084  c1          0x20084
    ctx->pc = 0x190fc8u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x190fcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190fd4: 0x0  nop
    ctx->pc = 0x190fd4u;
    // NOP
    // 0x190fd8: 0x0  nop
    ctx->pc = 0x190fd8u;
    // NOP
    // 0x190fdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190fe0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x190FE0u;
    {
        const bool branch_taken_0x190fe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190fe0) {
            ctx->pc = 0x190FF0u;
            goto label_190ff0;
        }
    }
    ctx->pc = 0x190FE8u;
    // 0x190fe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190FE8u;
    {
        const bool branch_taken_0x190fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190fe8) {
            ctx->pc = 0x190FF4u;
            goto label_190ff4;
        }
    }
    ctx->pc = 0x190FF0u;
label_190ff0:
    // 0x190ff0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x190ff0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_190ff4:
    // 0x190ff4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x190ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190ff8: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x190FF8u;
    {
        const bool branch_taken_0x190ff8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x190ff8) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x191000u;
    // 0x191000: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x191000u;
    {
        const bool branch_taken_0x191000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191000u;
        // 0x191004: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191000) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x191008u;
label_191008:
    // 0x191008: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x191008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x19100c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19100Cu;
    {
        const bool branch_taken_0x19100c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19100Cu;
        // 0x191010: 0x8c920004  lw          $s2, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19100c) {
            ctx->pc = 0x191078u;
            goto label_191078;
        }
    }
    ctx->pc = 0x191014u;
    // 0x191014: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x191014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191018: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19101c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19101cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191020: 0x0  nop
    ctx->pc = 0x191020u;
    // NOP
    // 0x191024: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191028: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x191028u;
    {
        const bool branch_taken_0x191028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x191028) {
            ctx->pc = 0x191040u;
            goto label_191040;
        }
    }
    ctx->pc = 0x191030u;
    // 0x191030: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191030u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191034: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x191038u;
    {
        const bool branch_taken_0x191038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191038u;
        // 0x19103c: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191038) {
            ctx->pc = 0x19105Cu;
            goto label_19105c;
        }
    }
    ctx->pc = 0x191040u;
label_191040:
    // 0x191040: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x191040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x191044: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x191044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x191048: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19104c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x19104cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x191050: 0x0  nop
    ctx->pc = 0x191050u;
    // NOP
    // 0x191054: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x191054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x191058: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x191058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19105c:
    // 0x19105c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191060: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191064: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x191064u;
    SET_GPR_U32(ctx, 31, 0x19106Cu);
    ctx->pc = 0x191068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191064u;
    // 0x191068: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x191064u, 0x19106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19106Cu;
label_19106c:
    // 0x19106c: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x19106Cu;
    {
        const bool branch_taken_0x19106c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x19106c) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x191074u;
    // 0x191074: 0x0  nop
    ctx->pc = 0x191074u;
    // NOP
label_191078:
    // 0x191078: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x191078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x19107c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x19107cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x191080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191084: 0x0  nop
    ctx->pc = 0x191084u;
    // NOP
    // 0x191088: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x191088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19108c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x19108Cu;
    {
        const bool branch_taken_0x19108c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19108c) {
            ctx->pc = 0x1910A4u;
            goto label_1910a4;
        }
    }
    ctx->pc = 0x191094u;
    // 0x191094: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x191094u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x191098: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x191098u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x19109c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19109Cu;
    {
        const bool branch_taken_0x19109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19109Cu;
        // 0x1910a0: 0x92430008  lbu         $v1, 0x8($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19109c) {
            ctx->pc = 0x1910C0u;
            goto label_1910c0;
        }
    }
    ctx->pc = 0x1910A4u;
label_1910a4:
    // 0x1910a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1910a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1910a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1910a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1910ac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1910acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1910b0: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x1910b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1910b4: 0x0  nop
    ctx->pc = 0x1910b4u;
    // NOP
    // 0x1910b8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1910b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1910bc: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x1910bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_1910c0:
    // 0x1910c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1910c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910c4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1910c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1910c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1910c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910cc: 0x2466fffe  addiu       $a2, $v1, -0x2
    ctx->pc = 0x1910ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x1910d0: 0xc064de8  jal         func_1937A0
    ctx->pc = 0x1910D0u;
    SET_GPR_U32(ctx, 31, 0x1910D8u);
    ctx->pc = 0x1910D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910D0u;
    // 0x1910d4: 0x24470080  addiu       $a3, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1937A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937A0u, 0x1910D0u, 0x1910D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1910D8u;
label_1910d8:
    // 0x1910d8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1910D8u;
    {
        const bool branch_taken_0x1910d8 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x1910d8) {
            ctx->pc = 0x1910F8u;
            goto label_1910f8;
        }
    }
    ctx->pc = 0x1910E0u;
    // 0x1910e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1910E0u;
    {
        const bool branch_taken_0x1910e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E0u;
        // 0x1910e4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e0) {
            ctx->pc = 0x1910F0u;
            goto label_1910f0;
        }
    }
    ctx->pc = 0x1910E8u;
label_1910e8:
    // 0x1910e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1910E8u;
    {
        const bool branch_taken_0x1910e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910E8u;
        // 0x1910ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910e8) {
            ctx->pc = 0x191110u;
            goto label_191110;
        }
    }
    ctx->pc = 0x1910F0u;
label_1910f0:
    // 0x1910f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1910f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1910f4: 0x0  nop
    ctx->pc = 0x1910f4u;
    // NOP
label_1910f8:
    // 0x1910f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1910fc: 0x2b6102a  slt         $v0, $s5, $s6
    ctx->pc = 0x1910fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x191100: 0x1440ff25  bnez        $v0, . + 4 + (-0xDB << 2)
    ctx->pc = 0x191100u;
    {
        const bool branch_taken_0x191100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191100u;
        // 0x191104: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191100) {
            ctx->pc = 0x190D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d98;
        }
    }
    ctx->pc = 0x191108u;
label_191108:
    // 0x191108: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x191108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19110c: 0x0  nop
    ctx->pc = 0x19110cu;
    // NOP
label_191110:
    // 0x191110: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x191110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191114: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x191114u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191118: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x191118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19111c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19111cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191120: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x191120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x191124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19112c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191134: 0x3e00008  jr          $ra
    ctx->pc = 0x191134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191134u;
        // 0x191138: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19113Cu;
}
