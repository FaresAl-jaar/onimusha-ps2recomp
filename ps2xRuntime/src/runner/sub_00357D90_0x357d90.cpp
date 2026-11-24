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

// Function: sub_00357D90
// Address: 0x357d90 - 0x357f98
void sub_00357D90_0x357d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D90_0x357d90");
#endif

    switch (ctx->pc) {
        case 0x357df8u: goto label_357df8;
        case 0x357e14u: goto label_357e14;
        case 0x357e24u: goto label_357e24;
        case 0x357e44u: goto label_357e44;
        case 0x357eccu: goto label_357ecc;
        case 0x357ef8u: goto label_357ef8;
        default: break;
    }

    ctx->pc = 0x357d90u;

    // 0x357d90: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x357d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x357d94: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x357d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x357d98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x357d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x357d9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x357d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x357da0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x357da0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357da4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x357da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x357da8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x357da8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x357dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x357db0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x357db0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357db4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x357db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x357db8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x357db8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x357dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x357dc0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x357dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x357dc8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x357dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x357dd0: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x357dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x357dd4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x357dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dd8: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x357dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x357de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357de8: 0x240705b0  addiu       $a3, $zero, 0x5B0
    ctx->pc = 0x357de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1456));
    // 0x357dec: 0x25087d20  addiu       $t0, $t0, 0x7D20
    ctx->pc = 0x357decu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32032));
    // 0x357df0: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x357DF0u;
    SET_GPR_U32(ctx, 31, 0x357DF8u);
    ctx->pc = 0x357DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357DF0u;
    // 0x357df4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x357DF0u, 0x357DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357DF8u;
label_357df8:
    // 0x357df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357dfc: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x357DFCu;
    {
        const bool branch_taken_0x357dfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357DFCu;
        // 0x357e00: 0x326700ff  andi        $a3, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x357dfc) {
            ctx->pc = 0x357F50u;
            goto label_357f50;
        }
    }
    ctx->pc = 0x357E04u;
    // 0x357e04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x357e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357e08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x357e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e0c: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x357E0Cu;
    SET_GPR_U32(ctx, 31, 0x357E14u);
    ctx->pc = 0x357E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E0Cu;
    // 0x357e10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x357E0Cu, 0x357E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E14u;
label_357e14:
    // 0x357e14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x357e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x357e18: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x357e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x357e1c: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x357E1Cu;
    SET_GPR_U32(ctx, 31, 0x357E24u);
    ctx->pc = 0x357E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E1Cu;
    // 0x357e20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x357E1Cu, 0x357E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E24u;
label_357e24:
    // 0x357e24: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x357e24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e28: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x357e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e2c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x357e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357e34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x357e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x357e38: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x357e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x357e3c: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x357E3Cu;
    SET_GPR_U32(ctx, 31, 0x357E44u);
    ctx->pc = 0x357E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357E3Cu;
    // 0x357e40: 0x27aa00e0  addiu       $t2, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x357E3Cu, 0x357E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357E44u;
label_357e44:
    // 0x357e44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x357e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x357e48: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x357e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x357e4c: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x357e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x357e50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x357e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x357e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x357e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x357e58: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x357e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x357e5c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x357e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x357e60: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x357e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x357e64: 0x2463f988  addiu       $v1, $v1, -0x678
    ctx->pc = 0x357e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965640));
    // 0x357e68: 0x2442f984  addiu       $v0, $v0, -0x67C
    ctx->pc = 0x357e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965636));
    // 0x357e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x357e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x357e70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x357e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357e74: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x357e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x357e78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x357e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x357e7c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x357e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x357e80: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x357e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x357e84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x357e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x357e88: 0x0  nop
    ctx->pc = 0x357e88u;
    // NOP
    // 0x357e8c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x357e8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x357e90: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x357e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x357e94: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x357e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x357e98: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x357e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x357e9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x357e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ea4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x357ea4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x357ea8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x357ea8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x357eac: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x357eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x357eb0: 0x0  nop
    ctx->pc = 0x357eb0u;
    // NOP
    // 0x357eb4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x357eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x357eb8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x357eb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x357ebc: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x357ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x357ec0: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x357ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x357ec4: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x357EC4u;
    SET_GPR_U32(ctx, 31, 0x357ECCu);
    ctx->pc = 0x357EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357EC4u;
    // 0x357ec8: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x357EC4u, 0x357ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357ECCu;
label_357ecc:
    // 0x357ecc: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x357eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x357ed0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x357ed4: 0xae0205a4  sw          $v0, 0x5A4($s0)
    ctx->pc = 0x357ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1444), GPR_U32(ctx, 2));
    // 0x357ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357edc: 0xa21e05aa  sb          $fp, 0x5AA($s0)
    ctx->pc = 0x357edcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1450), (uint8_t)GPR_U32(ctx, 30));
    // 0x357ee0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x357ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ee4: 0xa21105ab  sb          $s1, 0x5AB($s0)
    ctx->pc = 0x357ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1451), (uint8_t)GPR_U32(ctx, 17));
    // 0x357ee8: 0xa20005ae  sb          $zero, 0x5AE($s0)
    ctx->pc = 0x357ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1454), (uint8_t)GPR_U32(ctx, 0));
    // 0x357eec: 0xa20005ad  sb          $zero, 0x5AD($s0)
    ctx->pc = 0x357eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1453), (uint8_t)GPR_U32(ctx, 0));
    // 0x357ef0: 0xa60005a8  sh          $zero, 0x5A8($s0)
    ctx->pc = 0x357ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1448), (uint16_t)GPR_U32(ctx, 0));
    // 0x357ef4: 0x0  nop
    ctx->pc = 0x357ef4u;
    // NOP
label_357ef8:
    // 0x357ef8: 0xac600560  sw          $zero, 0x560($v1)
    ctx->pc = 0x357ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1376), GPR_U32(ctx, 0));
    // 0x357efc: 0xac600564  sw          $zero, 0x564($v1)
    ctx->pc = 0x357efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1380), GPR_U32(ctx, 0));
    // 0x357f00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x357f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x357f04: 0xac600568  sw          $zero, 0x568($v1)
    ctx->pc = 0x357f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1384), GPR_U32(ctx, 0));
    // 0x357f08: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x357f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x357f0c: 0xac60056c  sw          $zero, 0x56C($v1)
    ctx->pc = 0x357f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1388), GPR_U32(ctx, 0));
    // 0x357f10: 0xac600570  sw          $zero, 0x570($v1)
    ctx->pc = 0x357f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 0));
    // 0x357f14: 0xac600574  sw          $zero, 0x574($v1)
    ctx->pc = 0x357f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 0));
    // 0x357f18: 0xac600578  sw          $zero, 0x578($v1)
    ctx->pc = 0x357f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 0));
    // 0x357f1c: 0xac60057c  sw          $zero, 0x57C($v1)
    ctx->pc = 0x357f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1404), GPR_U32(ctx, 0));
    // 0x357f20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x357F20u;
    {
        const bool branch_taken_0x357f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F20u;
        // 0x357f24: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f20) {
            ctx->pc = 0x357EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357ef8;
        }
    }
    ctx->pc = 0x357F28u;
    // 0x357f28: 0xa21305ac  sb          $s3, 0x5AC($s0)
    ctx->pc = 0x357f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1452), (uint8_t)GPR_U32(ctx, 19));
    // 0x357f2c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x357f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x357f30: 0x7e020550  sq          $v0, 0x550($s0)
    ctx->pc = 0x357f30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), GPR_VEC(ctx, 2));
    // 0x357f34: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x357F34u;
    {
        const bool branch_taken_0x357f34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x357F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F34u;
        // 0x357f38: 0xae000518  sw          $zero, 0x518($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f34) {
            ctx->pc = 0x357F48u;
            goto label_357f48;
        }
    }
    ctx->pc = 0x357F3Cu;
    // 0x357f3c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x357f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x357f40: 0xae020518  sw          $v0, 0x518($s0)
    ctx->pc = 0x357f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 2));
    // 0x357f44: 0x0  nop
    ctx->pc = 0x357f44u;
    // NOP
label_357f48:
    // 0x357f48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x357F48u;
    {
        const bool branch_taken_0x357f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F48u;
        // 0x357f4c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f48) {
            ctx->pc = 0x357F68u;
            goto label_357f68;
        }
    }
    ctx->pc = 0x357F50u;
label_357f50:
    // 0x357f50: 0xdea40520  ld          $a0, 0x520($s5)
    ctx->pc = 0x357f50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 1312)));
    // 0x357f54: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x357f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x357f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x357f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357f5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x357f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x357f60: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x357f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x357f64: 0xfea30520  sd          $v1, 0x520($s5)
    ctx->pc = 0x357f64u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 1312), GPR_U64(ctx, 3));
label_357f68:
    // 0x357f68: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x357f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x357f6c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x357f6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x357f70: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x357f70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x357f74: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x357f74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x357f78: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x357f78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x357f7c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x357f7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x357f80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x357f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357f84: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x357f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357f90: 0x3e00008  jr          $ra
    ctx->pc = 0x357F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357F90u;
        // 0x357f94: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357F98u;
}
