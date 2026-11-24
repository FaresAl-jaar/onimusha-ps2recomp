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

// Function: sub_0033DF40
// Address: 0x33df40 - 0x33e23c
void sub_0033DF40_0x33df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DF40_0x33df40");
#endif

    switch (ctx->pc) {
        case 0x33dfa4u: goto label_33dfa4;
        case 0x33dff8u: goto label_33dff8;
        case 0x33e00cu: goto label_33e00c;
        case 0x33e018u: goto label_33e018;
        case 0x33e03cu: goto label_33e03c;
        case 0x33e0ecu: goto label_33e0ec;
        case 0x33e194u: goto label_33e194;
        default: break;
    }

    ctx->pc = 0x33df40u;

    // 0x33df40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33df44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33df48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33df48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x33df4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33df4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33df50: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33df50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33df54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33df54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33df58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33df58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33df5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33df5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33df60: 0x90842af2  lbu         $a0, 0x2AF2($a0)
    ctx->pc = 0x33df60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10994)));
    // 0x33df64: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x33df64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33df68: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x33DF68u;
    {
        const bool branch_taken_0x33df68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF68u;
        // 0x33df6c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df68) {
            ctx->pc = 0x33DF88u;
            goto label_33df88;
        }
    }
    ctx->pc = 0x33DF70u;
    // 0x33df70: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x33df70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33df74: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DF74u;
    {
        const bool branch_taken_0x33df74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33df74) {
            ctx->pc = 0x33DF88u;
            goto label_33df88;
        }
    }
    ctx->pc = 0x33DF7Cu;
    // 0x33df7c: 0x9243065c  lbu         $v1, 0x65C($s2)
    ctx->pc = 0x33df7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x33df80: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x33DF80u;
    {
        const bool branch_taken_0x33df80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF80u;
        // 0x33df84: 0xa2432af1  sb          $v1, 0x2AF1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10993), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df80) {
            ctx->pc = 0x33E220u;
            goto label_33e220;
        }
    }
    ctx->pc = 0x33DF88u;
label_33df88:
    // 0x33df88: 0xa2512af2  sb          $s1, 0x2AF2($s2)
    ctx->pc = 0x33df88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10994), (uint8_t)GPR_U32(ctx, 17));
    // 0x33df8c: 0x9242065c  lbu         $v0, 0x65C($s2)
    ctx->pc = 0x33df8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1628)));
    // 0x33df90: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x33df90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x33df94: 0xa2422af1  sb          $v0, 0x2AF1($s2)
    ctx->pc = 0x33df94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10993), (uint8_t)GPR_U32(ctx, 2));
    // 0x33df98: 0x8e4507c0  lw          $a1, 0x7C0($s2)
    ctx->pc = 0x33df98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1984)));
    // 0x33df9c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x33DF9Cu;
    SET_GPR_U32(ctx, 31, 0x33DFA4u);
    ctx->pc = 0x33DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DF9Cu;
    // 0x33dfa0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x33DF9Cu, 0x33DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DFA4u;
label_33dfa4:
    // 0x33dfa4: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x33DFA4u;
    {
        const bool branch_taken_0x33dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dfa4) {
            ctx->pc = 0x33E1B8u;
            goto label_33e1b8;
        }
    }
    ctx->pc = 0x33DFACu;
    // 0x33dfac: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x33dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x33dfb0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x33dfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x33dfb4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DFB4u;
    {
        const bool branch_taken_0x33dfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33DFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFB4u;
        // 0x33dfb8: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dfb4) {
            ctx->pc = 0x33DFC8u;
            goto label_33dfc8;
        }
    }
    ctx->pc = 0x33DFBCu;
    // 0x33dfbc: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x33dfbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33dfc0: 0x1420007d  bnez        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x33DFC0u;
    {
        const bool branch_taken_0x33dfc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dfc0) {
            ctx->pc = 0x33E1B8u;
            goto label_33e1b8;
        }
    }
    ctx->pc = 0x33DFC8u;
label_33dfc8:
    // 0x33dfc8: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x33dfc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x33dfcc: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x33dfccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x33dfd0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33dfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33dfd4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x33dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33dfd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x33dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x33dfdc: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x33dfdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x33dfe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33dfe4: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x33dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x33dfe8: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x33dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x33dfec: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x33dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x33dff0: 0xc041442  jal         func_105108
    ctx->pc = 0x33DFF0u;
    SET_GPR_U32(ctx, 31, 0x33DFF8u);
    ctx->pc = 0x33DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DFF0u;
    // 0x33dff4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x33DFF0u, 0x33DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DFF8u;
label_33dff8:
    // 0x33dff8: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x33dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x33dffc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33e000: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x33e000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x33e004: 0xc0967c0  jal         func_259F00
    ctx->pc = 0x33E004u;
    SET_GPR_U32(ctx, 31, 0x33E00Cu);
    ctx->pc = 0x33E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E004u;
    // 0x33e008: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F00u, 0x33E004u, 0x33E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E00Cu;
label_33e00c:
    // 0x33e00c: 0xc6412afc  lwc1        $f1, 0x2AFC($s2)
    ctx->pc = 0x33e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 11004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33e010: 0xc09681c  jal         func_25A070
    ctx->pc = 0x33E010u;
    SET_GPR_U32(ctx, 31, 0x33E018u);
    ctx->pc = 0x33E014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E010u;
    // 0x33e014: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x33E010u, 0x33E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E018u;
label_33e018:
    // 0x33e018: 0x3c02bf5f  lui         $v0, 0xBF5F
    ctx->pc = 0x33e018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48991 << 16));
    // 0x33e01c: 0x344366f4  ori         $v1, $v0, 0x66F4
    ctx->pc = 0x33e01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26356);
    // 0x33e020: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x33e020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x33e024: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x33e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x33e028: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33e028u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x33e02c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x33e02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33e030: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33e030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33e034: 0xc096960  jal         func_25A580
    ctx->pc = 0x33E034u;
    SET_GPR_U32(ctx, 31, 0x33E03Cu);
    ctx->pc = 0x33E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E034u;
    // 0x33e038: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A580u, 0x33E034u, 0x33E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E03Cu;
label_33e03c:
    // 0x33e03c: 0xe6402af8  swc1        $f0, 0x2AF8($s2)
    ctx->pc = 0x33e03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 11000), bits); }
    // 0x33e040: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33e040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e044: 0x0  nop
    ctx->pc = 0x33e044u;
    // NOP
    // 0x33e048: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x33e048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33e04c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x33E04Cu;
    {
        const bool branch_taken_0x33e04c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E04Cu;
        // 0x33e050: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e04c) {
            ctx->pc = 0x33E0F8u;
            goto label_33e0f8;
        }
    }
    ctx->pc = 0x33E054u;
    // 0x33e054: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e058: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x33e058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x33e05c: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x33e05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x33e060: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x33e060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e064: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x33e064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33e068: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e06c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x33e06cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e070: 0x2442f0c0  addiu       $v0, $v0, -0xF40
    ctx->pc = 0x33e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x33e074: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33e074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e078: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x33e078u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e07c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33e07cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x33e080: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33e080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x33e084: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x33e084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33e088: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e08c: 0x2442f061  addiu       $v0, $v0, -0xF9F
    ctx->pc = 0x33e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963297));
    // 0x33e090: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x33e090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e094: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e098: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x33e098u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e09c: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x33e09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x33e0a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33e0a4: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x33e0a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e0a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x33e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33e0ac: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x33e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e0b0: 0x1022025  or          $a0, $t0, $v0
    ctx->pc = 0x33e0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x33e0b4: 0xa24507f4  sb          $a1, 0x7F4($s2)
    ctx->pc = 0x33e0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 5));
    // 0x33e0b8: 0x3c02bf92  lui         $v0, 0xBF92
    ctx->pc = 0x33e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49042 << 16));
    // 0x33e0bc: 0x3443ad5c  ori         $v1, $v0, 0xAD5C
    ctx->pc = 0x33e0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44380);
    // 0x33e0c0: 0x3c02bf5f  lui         $v0, 0xBF5F
    ctx->pc = 0x33e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48991 << 16));
    // 0x33e0c4: 0x344266f4  ori         $v0, $v0, 0x66F4
    ctx->pc = 0x33e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26356);
    // 0x33e0c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33e0c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e0cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33e0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33e0d0: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x33e0d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33e0d4: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x33e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x33e0d8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33e0dc: 0xa64207f2  sh          $v0, 0x7F2($s2)
    ctx->pc = 0x33e0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e0e0: 0xa24907f5  sb          $t1, 0x7F5($s2)
    ctx->pc = 0x33e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 9));
    // 0x33e0e4: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x33E0E4u;
    SET_GPR_U32(ctx, 31, 0x33E0ECu);
    ctx->pc = 0x33E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0E4u;
    // 0x33e0e8: 0xae4407ec  sw          $a0, 0x7EC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x33E0E4u, 0x33E0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0ECu;
label_33e0ec:
    // 0x33e0ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33e0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33e0f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x33E0F0u;
    {
        const bool branch_taken_0x33e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0F0u;
        // 0x33e0f4: 0xa2432af0  sb          $v1, 0x2AF0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10992), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0f0) {
            ctx->pc = 0x33E1A0u;
            goto label_33e1a0;
        }
    }
    ctx->pc = 0x33E0F8u;
label_33e0f8:
    // 0x33e0f8: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x33e0f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33e0fc: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e100: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x33e100u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x33e104: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x33e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x33e108: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e10c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x33e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x33e110: 0x2442f0c0  addiu       $v0, $v0, -0xF40
    ctx->pc = 0x33e110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x33e114: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x33e114u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e118: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x33e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x33e11c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x33e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x33e120: 0x3204ffff  andi        $a0, $s0, 0xFFFF
    ctx->pc = 0x33e120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33e124: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x33e124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x33e128: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x33e128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x33e12c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x33e12cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e130: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x33e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x33e134: 0x2442f060  addiu       $v0, $v0, -0xFA0
    ctx->pc = 0x33e134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963296));
    // 0x33e138: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33e13c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x33e13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x33e140: 0x2463f062  addiu       $v1, $v1, -0xF9E
    ctx->pc = 0x33e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963298));
    // 0x33e144: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33e148: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x33e148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33e14c: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x33e14cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33e150: 0x3c023fcb  lui         $v0, 0x3FCB
    ctx->pc = 0x33e150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16331 << 16));
    // 0x33e154: 0x3442b7e4  ori         $v0, $v0, 0xB7E4
    ctx->pc = 0x33e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47076);
    // 0x33e158: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x33e158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x33e15c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33e15cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33e160: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x33e160u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e164: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33e168: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x33e168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x33e16c: 0x3c023f20  lui         $v0, 0x3F20
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16160 << 16));
    // 0x33e170: 0xa24407f4  sb          $a0, 0x7F4($s2)
    ctx->pc = 0x33e170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 4));
    // 0x33e174: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x33e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x33e178: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x33e178u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x33e17c: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x33e17cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x33e180: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x33e180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x33e184: 0xa24707f5  sb          $a3, 0x7F5($s2)
    ctx->pc = 0x33e184u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 7));
    // 0x33e188: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x33e188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33e18c: 0xc096964  jal         func_25A590
    ctx->pc = 0x33E18Cu;
    SET_GPR_U32(ctx, 31, 0x33E194u);
    ctx->pc = 0x33E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E18Cu;
    // 0x33e190: 0xae4307ec  sw          $v1, 0x7EC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x33E18Cu, 0x33E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E194u;
label_33e194:
    // 0x33e194: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33e198: 0xa2432af0  sb          $v1, 0x2AF0($s2)
    ctx->pc = 0x33e198u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10992), (uint8_t)GPR_U32(ctx, 3));
    // 0x33e19c: 0x0  nop
    ctx->pc = 0x33e19cu;
    // NOP
label_33e1a0:
    // 0x33e1a0: 0x8e4407ec  lw          $a0, 0x7EC($s2)
    ctx->pc = 0x33e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2028)));
    // 0x33e1a4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x33e1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x33e1a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x33e1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33e1ac: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x33e1acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
    // 0x33e1b0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33E1B0u;
    {
        const bool branch_taken_0x33e1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1B0u;
        // 0x33e1b4: 0xe65407e8  swc1        $f20, 0x7E8($s2) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2024), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1b0) {
            ctx->pc = 0x33E220u;
            goto label_33e220;
        }
    }
    ctx->pc = 0x33E1B8u;
label_33e1b8:
    // 0x33e1b8: 0xa2402af0  sb          $zero, 0x2AF0($s2)
    ctx->pc = 0x33e1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10992), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e1bc: 0xae402af8  sw          $zero, 0x2AF8($s2)
    ctx->pc = 0x33e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11000), GPR_U32(ctx, 0));
    // 0x33e1c0: 0x322a00ff  andi        $t2, $s1, 0xFF
    ctx->pc = 0x33e1c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x33e1c4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x33e1c8: 0x8e4907ec  lw          $t1, 0x7EC($s2)
    ctx->pc = 0x33e1c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2028)));
    // 0x33e1cc: 0xa2880  sll         $a1, $t2, 2
    ctx->pc = 0x33e1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x33e1d0: 0x2484f0c0  addiu       $a0, $a0, -0xF40
    ctx->pc = 0x33e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963392));
    // 0x33e1d4: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x33e1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33e1d8: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x33e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x33e1dc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x33e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x33e1e0: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x33e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x33e1e4: 0x2484f060  addiu       $a0, $a0, -0xFA0
    ctx->pc = 0x33e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963296));
    // 0x33e1e8: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x33e1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x33e1ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33e1f0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x33e1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x33e1f4: 0x1282825  or          $a1, $t1, $t0
    ctx->pc = 0x33e1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x33e1f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33e1fc: 0xae4507ec  sw          $a1, 0x7EC($s2)
    ctx->pc = 0x33e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 5));
    // 0x33e200: 0xae4707e8  sw          $a3, 0x7E8($s2)
    ctx->pc = 0x33e200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2024), GPR_U32(ctx, 7));
    // 0x33e204: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x33e204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33e208: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33e208u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33e20c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x33e20cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e210: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x33e210u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33e214: 0xa64407f2  sh          $a0, 0x7F2($s2)
    ctx->pc = 0x33e214u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x33e218: 0xa24507f5  sb          $a1, 0x7F5($s2)
    ctx->pc = 0x33e218u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x33e21c: 0xae4307ec  sw          $v1, 0x7EC($s2)
    ctx->pc = 0x33e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 3));
label_33e220:
    // 0x33e220: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33e220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33e224: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33e224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e228: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33e228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33e22c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33e22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e230: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33e230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e234: 0x3e00008  jr          $ra
    ctx->pc = 0x33E234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E234u;
        // 0x33e238: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E23Cu;
}
