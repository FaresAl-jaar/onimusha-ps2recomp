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

// Function: sub_00274CD0
// Address: 0x274cd0 - 0x274f9c
void sub_00274CD0_0x274cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274CD0_0x274cd0");
#endif

    switch (ctx->pc) {
        case 0x274d28u: goto label_274d28;
        case 0x274d40u: goto label_274d40;
        case 0x274f14u: goto label_274f14;
        default: break;
    }

    ctx->pc = 0x274cd0u;

    // 0x274cd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x274cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x274cd4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x274cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x274cd8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x274cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x274cdc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x274cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x274ce0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x274ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x274ce4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x274ce8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x274ce8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x274cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x274cf0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x274cf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x274cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x274cf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x274cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x274cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x274d00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274d04: 0x9085000c  lbu         $a1, 0xC($a0)
    ctx->pc = 0x274d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x274d08: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x274d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x274d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x274D0Cu;
    {
        const bool branch_taken_0x274d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D0Cu;
        // 0x274d10: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d0c) {
            ctx->pc = 0x274D20u;
            goto label_274d20;
        }
    }
    ctx->pc = 0x274D14u;
    // 0x274d14: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x274D14u;
    {
        const bool branch_taken_0x274d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D14u;
        // 0x274d18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d14) {
            ctx->pc = 0x274F70u;
            goto label_274f70;
        }
    }
    ctx->pc = 0x274D1Cu;
    // 0x274d1c: 0x0  nop
    ctx->pc = 0x274d1cu;
    // NOP
label_274d20:
    // 0x274d20: 0xc09d2b8  jal         func_274AE0
    ctx->pc = 0x274D20u;
    SET_GPR_U32(ctx, 31, 0x274D28u);
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x274D20u, 0x274D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274D28u;
label_274d28:
    // 0x274d28: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x274d28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d2c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x274d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x274d30: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x274d30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x274d34: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x274D34u;
    {
        const bool branch_taken_0x274d34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D34u;
        // 0x274d38: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d34) {
            ctx->pc = 0x274F68u;
            goto label_274f68;
        }
    }
    ctx->pc = 0x274D3Cu;
    // 0x274d3c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x274d3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274d40:
    // 0x274d40: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x274d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x274d44: 0xfe800008  sd          $zero, 0x8($s4)
    ctx->pc = 0x274d44u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 0));
    // 0x274d48: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x274d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x274d4c: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x274d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
    // 0x274d50: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x274d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x274d54: 0x28610040  slti        $at, $v1, 0x40
    ctx->pc = 0x274d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x274d58: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x274D58u;
    {
        const bool branch_taken_0x274d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D58u;
        // 0x274d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d58) {
            ctx->pc = 0x274D70u;
            goto label_274d70;
        }
    }
    ctx->pc = 0x274D60u;
    // 0x274d60: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x274d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x274d64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274D64u;
    {
        const bool branch_taken_0x274d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D64u;
        // 0x274d68: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d64) {
            ctx->pc = 0x274D88u;
            goto label_274d88;
        }
    }
    ctx->pc = 0x274D6Cu;
    // 0x274d6c: 0x0  nop
    ctx->pc = 0x274d6cu;
    // NOP
label_274d70:
    // 0x274d70: 0x2462ffc0  addiu       $v0, $v1, -0x40
    ctx->pc = 0x274d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x274d74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x274d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d7c: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x274d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x274d80: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x274d80u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x274d84: 0x0  nop
    ctx->pc = 0x274d84u;
    // NOP
label_274d88:
    // 0x274d88: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x274d88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x274d8c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x274d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x274d90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x274d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x274d94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x274d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x274d98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x274D98u;
    {
        const bool branch_taken_0x274d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274d98) {
            ctx->pc = 0x274DB0u;
            goto label_274db0;
        }
    }
    ctx->pc = 0x274DA0u;
    // 0x274da0: 0xde630008  ld          $v1, 0x8($s3)
    ctx->pc = 0x274da0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x274da4: 0xde820008  ld          $v0, 0x8($s4)
    ctx->pc = 0x274da4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x274da8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x274da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x274dac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x274dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_274db0:
    // 0x274db0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x274db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274db4: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x274DB4u;
    {
        const bool branch_taken_0x274db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274db4) {
            ctx->pc = 0x274F50u;
            goto label_274f50;
        }
    }
    ctx->pc = 0x274DBCu;
    // 0x274dbc: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x274dbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x274dc0: 0x96a2000a  lhu         $v0, 0xA($s5)
    ctx->pc = 0x274dc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 10)));
    // 0x274dc4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274DC4u;
    {
        const bool branch_taken_0x274dc4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x274DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DC4u;
        // 0x274dc8: 0xc7838078  lwc1        $f3, -0x7F88($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dc4) {
            ctx->pc = 0x274DD8u;
            goto label_274dd8;
        }
    }
    ctx->pc = 0x274DCCu;
    // 0x274dcc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x274dccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274dd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274DD0u;
    {
        const bool branch_taken_0x274dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DD0u;
        // 0x274dd4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dd0) {
            ctx->pc = 0x274DF4u;
            goto label_274df4;
        }
    }
    ctx->pc = 0x274DD8u;
label_274dd8:
    // 0x274dd8: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x274ddc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x274ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x274de0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x274de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x274de4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274de4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274de8: 0x0  nop
    ctx->pc = 0x274de8u;
    // NOP
    // 0x274dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274df0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x274df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_274df4:
    // 0x274df4: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x274df4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x274df8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x274df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x274dfc: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x274dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x274e00: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x274e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x274e04: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x274e04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e0c: 0x0  nop
    ctx->pc = 0x274e0cu;
    // NOP
    // 0x274e10: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x274e10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x274e14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x274e14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274e18: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x274E18u;
    {
        const bool branch_taken_0x274e18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x274e18) {
            ctx->pc = 0x274E30u;
            goto label_274e30;
        }
    }
    ctx->pc = 0x274E20u;
    // 0x274e20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x274e24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x274e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x274e28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274E28u;
    {
        const bool branch_taken_0x274e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E28u;
        // 0x274e2c: 0x44082b  sltu        $at, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e28) {
            ctx->pc = 0x274E4Cu;
            goto label_274e4c;
        }
    }
    ctx->pc = 0x274E30u;
label_274e30:
    // 0x274e30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274e34: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x274e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x274e38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x274e3c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x274e3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x274e40: 0x0  nop
    ctx->pc = 0x274e40u;
    // NOP
    // 0x274e44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x274e44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x274e48: 0x44082b  sltu        $at, $v0, $a0
    ctx->pc = 0x274e48u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_274e4c:
    // 0x274e4c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x274E4Cu;
    {
        const bool branch_taken_0x274e4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x274e4c) {
            ctx->pc = 0x274E68u;
            goto label_274e68;
        }
    }
    ctx->pc = 0x274E54u;
    // 0x274e54: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x274e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x274e58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x274e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x274e5c: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x274E5Cu;
    {
        const bool branch_taken_0x274e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x274e5c) {
            ctx->pc = 0x274F50u;
            goto label_274f50;
        }
    }
    ctx->pc = 0x274E64u;
    // 0x274e64: 0x0  nop
    ctx->pc = 0x274e64u;
    // NOP
label_274e68:
    // 0x274e68: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x274e68u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x274e6c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x274E6Cu;
    {
        const bool branch_taken_0x274e6c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x274E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E6Cu;
        // 0x274e70: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e6c) {
            ctx->pc = 0x274E80u;
            goto label_274e80;
        }
    }
    ctx->pc = 0x274E74u;
    // 0x274e74: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x274e74u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274E78u;
    {
        const bool branch_taken_0x274e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E78u;
        // 0x274e7c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274e78) {
            ctx->pc = 0x274E98u;
            goto label_274e98;
        }
    }
    ctx->pc = 0x274E80u;
label_274e80:
    // 0x274e80: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x274e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x274e84: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x274e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x274e88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x274e88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274e8c: 0x0  nop
    ctx->pc = 0x274e8cu;
    // NOP
    // 0x274e90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274e94: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x274e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_274e98:
    // 0x274e98: 0x46030082  mul.s       $f2, $f0, $f3
    ctx->pc = 0x274e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x274e9c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x274e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x274ea0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x274ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x274ea4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x274ea8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x274ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274eb0: 0x0  nop
    ctx->pc = 0x274eb0u;
    // NOP
    // 0x274eb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x274eb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x274eb8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x274eb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274ebc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x274EBCu;
    {
        const bool branch_taken_0x274ebc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x274ebc) {
            ctx->pc = 0x274ED4u;
            goto label_274ed4;
        }
    }
    ctx->pc = 0x274EC4u;
    // 0x274ec4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x274ec8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x274ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x274ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x274ECCu;
    {
        const bool branch_taken_0x274ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ECCu;
        // 0x274ed0: 0x82082b  sltu        $at, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ecc) {
            ctx->pc = 0x274EF0u;
            goto label_274ef0;
        }
    }
    ctx->pc = 0x274ED4u;
label_274ed4:
    // 0x274ed4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274ed4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274ed8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x274ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x274edc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274edcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x274ee0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x274ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x274ee4: 0x0  nop
    ctx->pc = 0x274ee4u;
    // NOP
    // 0x274ee8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x274ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x274eec: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x274eecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_274ef0:
    // 0x274ef0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x274EF0u;
    {
        const bool branch_taken_0x274ef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274EF0u;
        // 0x274ef4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274ef0) {
            ctx->pc = 0x274F08u;
            goto label_274f08;
        }
    }
    ctx->pc = 0x274EF8u;
    // 0x274ef8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x274ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x274efc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x274EFCu;
    {
        const bool branch_taken_0x274efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x274efc) {
            ctx->pc = 0x274F50u;
            goto label_274f50;
        }
    }
    ctx->pc = 0x274F04u;
    // 0x274f04: 0x0  nop
    ctx->pc = 0x274f04u;
    // NOP
label_274f08:
    // 0x274f08: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x274f08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x274f0c: 0xc09d2b8  jal         func_274AE0
    ctx->pc = 0x274F0Cu;
    SET_GPR_U32(ctx, 31, 0x274F14u);
    ctx->pc = 0x274F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274F0Cu;
    // 0x274f10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274AE0u, 0x274F0Cu, 0x274F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F14u;
label_274f14:
    // 0x274f14: 0x90430006  lbu         $v1, 0x6($v0)
    ctx->pc = 0x274f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x274f18: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x274f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x274f1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274F1Cu;
    {
        const bool branch_taken_0x274f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x274f1c) {
            ctx->pc = 0x274F38u;
            goto label_274f38;
        }
    }
    ctx->pc = 0x274F24u;
    // 0x274f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274f28: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x274f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x274f2c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x274f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x274f30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274F30u;
    {
        const bool branch_taken_0x274f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274f30) {
            ctx->pc = 0x274F50u;
            goto label_274f50;
        }
    }
    ctx->pc = 0x274F38u;
label_274f38:
    // 0x274f38: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x274f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x274f3c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x274f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x274f40: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x274f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x274f44: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x274f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x274f48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x274F48u;
    {
        const bool branch_taken_0x274f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F48u;
        // 0x274f4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f48) {
            ctx->pc = 0x274F70u;
            goto label_274f70;
        }
    }
    ctx->pc = 0x274F50u;
label_274f50:
    // 0x274f50: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x274f50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x274f54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x274f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x274f58: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x274f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x274f5c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x274F5Cu;
    {
        const bool branch_taken_0x274f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F5Cu;
        // 0x274f60: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274f5c) {
            ctx->pc = 0x274D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274d40;
        }
    }
    ctx->pc = 0x274F64u;
    // 0x274f64: 0x0  nop
    ctx->pc = 0x274f64u;
    // NOP
label_274f68:
    // 0x274f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f6c: 0x0  nop
    ctx->pc = 0x274f6cu;
    // NOP
label_274f70:
    // 0x274f70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x274f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x274f74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x274f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x274f78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x274f78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x274f7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x274f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x274f80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x274f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x274f84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x274f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274f88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x274f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x274f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274f94: 0x3e00008  jr          $ra
    ctx->pc = 0x274F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274F94u;
        // 0x274f98: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274F9Cu;
}
