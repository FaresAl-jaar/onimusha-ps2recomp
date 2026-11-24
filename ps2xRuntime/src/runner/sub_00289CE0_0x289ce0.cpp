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

// Function: sub_00289CE0
// Address: 0x289ce0 - 0x289fa8
void sub_00289CE0_0x289ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289CE0_0x289ce0");
#endif

    switch (ctx->pc) {
        case 0x289d24u: goto label_289d24;
        case 0x289d60u: goto label_289d60;
        case 0x289d6cu: goto label_289d6c;
        case 0x289dc8u: goto label_289dc8;
        case 0x289de0u: goto label_289de0;
        case 0x289df4u: goto label_289df4;
        case 0x289e10u: goto label_289e10;
        case 0x289e70u: goto label_289e70;
        case 0x289e7cu: goto label_289e7c;
        case 0x289eccu: goto label_289ecc;
        default: break;
    }

    ctx->pc = 0x289ce0u;

    // 0x289ce0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x289ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x289ce4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x289ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x289ce8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x289ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x289cec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x289cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x289cf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x289cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x289cf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x289cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x289cf8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x289cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x289cfc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x289cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x289d04: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x289d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x289d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x289d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x289d0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x289d0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x289d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x289d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x289d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x289d18: 0x8ea507c0  lw          $a1, 0x7C0($s5)
    ctx->pc = 0x289d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1984)));
    // 0x289d1c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x289D1Cu;
    SET_GPR_U32(ctx, 31, 0x289D24u);
    ctx->pc = 0x289D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D1Cu;
    // 0x289d20: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x289D1Cu, 0x289D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D24u;
label_289d24:
    // 0x289d24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x289d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d28: 0x12600093  beqz        $s3, . + 4 + (0x93 << 2)
    ctx->pc = 0x289D28u;
    {
        const bool branch_taken_0x289d28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d28) {
            ctx->pc = 0x289F78u;
            goto label_289f78;
        }
    }
    ctx->pc = 0x289D30u;
    // 0x289d30: 0x92620733  lbu         $v0, 0x733($s3)
    ctx->pc = 0x289d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1843)));
    // 0x289d34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x289d38: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x289d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x289d3c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x289d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x289d40: 0x90650730  lbu         $a1, 0x730($v1)
    ctx->pc = 0x289d40u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x289d44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x289d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x289d48: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x289d4c: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x289d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x289d50: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x289d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x289d54: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x289d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x289d58: 0xc041442  jal         func_105108
    ctx->pc = 0x289D58u;
    SET_GPR_U32(ctx, 31, 0x289D60u);
    ctx->pc = 0x289D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D58u;
    // 0x289d5c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x289D58u, 0x289D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D60u;
label_289d60:
    // 0x289d60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x289d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x289d64: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x289D64u;
    SET_GPR_U32(ctx, 31, 0x289D6Cu);
    ctx->pc = 0x289D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D64u;
    // 0x289d68: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x289D64u, 0x289D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289D6Cu;
label_289d6c:
    // 0x289d6c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x289d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x289d70: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x289d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x289d74: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289d74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289d78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x289d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x289d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289d80: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x289d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d84: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x289d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289d88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x289d88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d8c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x289d90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x289d90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d94: 0x54180a  movz        $v1, $v0, $s4
    ctx->pc = 0x289d94u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x289d98: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x289d98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x289d9c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x289d9cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x289da0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x289da0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289da4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289da4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289da8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x289da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x289dac: 0x0  nop
    ctx->pc = 0x289dacu;
    // NOP
    // 0x289db0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x289db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289db4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x289db4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x289db8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x289db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x289dbc: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x289dbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289dc0: 0xc0a7330  jal         func_29CCC0
    ctx->pc = 0x289DC0u;
    SET_GPR_U32(ctx, 31, 0x289DC8u);
    ctx->pc = 0x289DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DC0u;
    // 0x289dc4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CCC0u, 0x289DC0u, 0x289DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DC8u;
label_289dc8:
    // 0x289dc8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x289dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289dcc: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x289DCCu;
    {
        const bool branch_taken_0x289dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DCCu;
        // 0x289dd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dcc) {
            ctx->pc = 0x289F60u;
            goto label_289f60;
        }
    }
    ctx->pc = 0x289DD4u;
    // 0x289dd4: 0x10b43c  dsll32      $s6, $s0, 16
    ctx->pc = 0x289dd4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 16) << (32 + 16));
    // 0x289dd8: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x289dd8u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x289ddc: 0x0  nop
    ctx->pc = 0x289ddcu;
    // NOP
label_289de0:
    // 0x289de0: 0x8ea206c8  lw          $v0, 0x6C8($s5)
    ctx->pc = 0x289de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1736)));
    // 0x289de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289de8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x289de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x289dec: 0xc0a2628  jal         func_2898A0
    ctx->pc = 0x289DECu;
    SET_GPR_U32(ctx, 31, 0x289DF4u);
    ctx->pc = 0x289DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DECu;
    // 0x289df0: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2898A0u, 0x289DECu, 0x289DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DF4u;
label_289df4:
    // 0x289df4: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x289DF4u;
    {
        const bool branch_taken_0x289df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289df4) {
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289DFCu;
    // 0x289dfc: 0x92230734  lbu         $v1, 0x734($s1)
    ctx->pc = 0x289dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1844)));
    // 0x289e00: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289e04: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x289E04u;
    {
        const bool branch_taken_0x289e04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E04u;
        // 0x289e08: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e04) {
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289E0Cu;
    // 0x289e0c: 0x0  nop
    ctx->pc = 0x289e0cu;
    // NOP
label_289e10:
    // 0x289e10: 0x92240735  lbu         $a0, 0x735($s1)
    ctx->pc = 0x289e10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1845)));
    // 0x289e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x289e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x289e18: 0x2031804  sllv        $v1, $v1, $s0
    ctx->pc = 0x289e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
    // 0x289e1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x289e20: 0x14600045  bnez        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x289E20u;
    {
        const bool branch_taken_0x289e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289e20) {
            ctx->pc = 0x289F38u;
            goto label_289f38;
        }
    }
    ctx->pc = 0x289E28u;
    // 0x289e28: 0x16330005  bne         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x289E28u;
    {
        const bool branch_taken_0x289e28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x289e28) {
            ctx->pc = 0x289E40u;
            goto label_289e40;
        }
    }
    ctx->pc = 0x289E30u;
    // 0x289e30: 0x92630733  lbu         $v1, 0x733($s3)
    ctx->pc = 0x289e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1843)));
    // 0x289e34: 0x10700040  beq         $v1, $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x289E34u;
    {
        const bool branch_taken_0x289e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x289e34) {
            ctx->pc = 0x289F38u;
            goto label_289f38;
        }
    }
    ctx->pc = 0x289E3Cu;
    // 0x289e3c: 0x0  nop
    ctx->pc = 0x289e3cu;
    // NOP
label_289e40:
    // 0x289e40: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x289e40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x289e44: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x289e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x289e48: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x289e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x289e4c: 0x90430730  lbu         $v1, 0x730($v0)
    ctx->pc = 0x289e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1840)));
    // 0x289e50: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x289e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x289e54: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x289e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x289e58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x289e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x289e5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x289e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x289e60: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x289e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x289e64: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x289e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x289e68: 0xc041442  jal         func_105108
    ctx->pc = 0x289E68u;
    SET_GPR_U32(ctx, 31, 0x289E70u);
    ctx->pc = 0x289E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E68u;
    // 0x289e6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x289E68u, 0x289E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E70u;
label_289e70:
    // 0x289e70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x289e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x289e74: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x289E74u;
    SET_GPR_U32(ctx, 31, 0x289E7Cu);
    ctx->pc = 0x289E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E74u;
    // 0x289e78: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x289E74u, 0x289E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289E7Cu;
label_289e7c:
    // 0x289e7c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x289e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x289e80: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x289e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x289e84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x289e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x289e88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x289e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x289e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x289e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x289e90: 0x0  nop
    ctx->pc = 0x289e90u;
    // NOP
    // 0x289e94: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x289e94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x289e98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x289e98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x289e9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x289e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x289ea0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x289ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x289ea4: 0x0  nop
    ctx->pc = 0x289ea4u;
    // NOP
    // 0x289ea8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x289ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289eac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x289eacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x289eb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x289eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x289eb4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x289eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289eb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x289eb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x289ebc: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x289ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x289ec0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x289ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289ec4: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x289EC4u;
    SET_GPR_U32(ctx, 31, 0x289ECCu);
    ctx->pc = 0x289EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EC4u;
    // 0x289ec8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x289EC4u, 0x289ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289ECCu;
label_289ecc:
    // 0x289ecc: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x289eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x289ed0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x289ed0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x289ed4: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x289ED4u;
    {
        const bool branch_taken_0x289ed4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x289ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289ED4u;
        // 0x289ed8: 0x24a31000  addiu       $v1, $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ed4) {
            ctx->pc = 0x289EE8u;
            goto label_289ee8;
        }
    }
    ctx->pc = 0x289EDCu;
    // 0x289edc: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x289edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x289ee0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x289ee0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x289ee4: 0x0  nop
    ctx->pc = 0x289ee4u;
    // NOP
label_289ee8:
    // 0x289ee8: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x289EE8u;
    {
        const bool branch_taken_0x289ee8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x289EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EE8u;
        // 0x289eec: 0x12243c  dsll32      $a0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ee8) {
            ctx->pc = 0x289F08u;
            goto label_289f08;
        }
    }
    ctx->pc = 0x289EF0u;
    // 0x289ef0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x289ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x289ef4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x289ef4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x289ef8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x289ef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x289efc: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x289efcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x289f00: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x289F00u;
    {
        const bool branch_taken_0x289f00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f00) {
            ctx->pc = 0x289F28u;
            goto label_289f28;
        }
    }
    ctx->pc = 0x289F08u;
label_289f08:
    // 0x289f08: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x289F08u;
    {
        const bool branch_taken_0x289f08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F08u;
        // 0x289f0c: 0x12243c  dsll32      $a0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f08) {
            ctx->pc = 0x289F38u;
            goto label_289f38;
        }
    }
    ctx->pc = 0x289F10u;
    // 0x289f10: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x289f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x289f14: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x289f14u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x289f18: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x289f18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x289f1c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x289f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289f20: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x289F20u;
    {
        const bool branch_taken_0x289f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f20) {
            ctx->pc = 0x289F38u;
            goto label_289f38;
        }
    }
    ctx->pc = 0x289F28u;
label_289f28:
    // 0x289f28: 0x5943c  dsll32      $s2, $a1, 16
    ctx->pc = 0x289f28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 16));
    // 0x289f2c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x289f2cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x289f30: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x289f30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f34: 0x321e00ff  andi        $fp, $s0, 0xFF
    ctx->pc = 0x289f34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_289f38:
    // 0x289f38: 0x92230734  lbu         $v1, 0x734($s1)
    ctx->pc = 0x289f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1844)));
    // 0x289f3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x289f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x289f40: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x289f40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x289f44: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
    ctx->pc = 0x289F44u;
    {
        const bool branch_taken_0x289f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f44) {
            ctx->pc = 0x289E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289e10;
        }
    }
    ctx->pc = 0x289F4Cu;
    // 0x289f4c: 0x0  nop
    ctx->pc = 0x289f4cu;
    // NOP
label_289f50:
    // 0x289f50: 0x8e310018  lw          $s1, 0x18($s1)
    ctx->pc = 0x289f50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x289f54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x289f54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289f58: 0x1460ffa1  bnez        $v1, . + 4 + (-0x5F << 2)
    ctx->pc = 0x289F58u;
    {
        const bool branch_taken_0x289f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f58) {
            ctx->pc = 0x289DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289de0;
        }
    }
    ctx->pc = 0x289F60u;
label_289f60:
    // 0x289f60: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x289F60u;
    {
        const bool branch_taken_0x289f60 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x289f60) {
            ctx->pc = 0x289F78u;
            goto label_289f78;
        }
    }
    ctx->pc = 0x289F68u;
    // 0x289f68: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x289f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x289f6c: 0xaea307c0  sw          $v1, 0x7C0($s5)
    ctx->pc = 0x289f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1984), GPR_U32(ctx, 3));
    // 0x289f70: 0xa2fe0733  sb          $fp, 0x733($s7)
    ctx->pc = 0x289f70u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 1843), (uint8_t)GPR_U32(ctx, 30));
    // 0x289f74: 0x0  nop
    ctx->pc = 0x289f74u;
    // NOP
label_289f78:
    // 0x289f78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x289f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289f7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x289f7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x289f80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x289f80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x289f84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x289f84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x289f88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x289f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x289f8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x289f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x289f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x289f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x289f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x289f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x289f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x289FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FA0u;
        // 0x289fa4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289FA8u;
}
