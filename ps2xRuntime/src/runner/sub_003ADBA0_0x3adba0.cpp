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

// Function: sub_003ADBA0
// Address: 0x3adba0 - 0x3ae6c8
void sub_003ADBA0_0x3adba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADBA0_0x3adba0");
#endif

    switch (ctx->pc) {
        case 0x3adc28u: goto label_3adc28;
        case 0x3adcc0u: goto label_3adcc0;
        case 0x3ade20u: goto label_3ade20;
        case 0x3ade3cu: goto label_3ade3c;
        case 0x3ade98u: goto label_3ade98;
        case 0x3adeb8u: goto label_3adeb8;
        case 0x3aded0u: goto label_3aded0;
        case 0x3adefcu: goto label_3adefc;
        case 0x3adf0cu: goto label_3adf0c;
        case 0x3adf1cu: goto label_3adf1c;
        case 0x3adf50u: goto label_3adf50;
        case 0x3adf70u: goto label_3adf70;
        case 0x3adfc4u: goto label_3adfc4;
        case 0x3adfd0u: goto label_3adfd0;
        case 0x3adfecu: goto label_3adfec;
        case 0x3ae054u: goto label_3ae054;
        case 0x3ae06cu: goto label_3ae06c;
        case 0x3ae07cu: goto label_3ae07c;
        case 0x3ae118u: goto label_3ae118;
        case 0x3ae14cu: goto label_3ae14c;
        case 0x3ae168u: goto label_3ae168;
        case 0x3ae174u: goto label_3ae174;
        case 0x3ae180u: goto label_3ae180;
        case 0x3ae19cu: goto label_3ae19c;
        case 0x3ae1a8u: goto label_3ae1a8;
        case 0x3ae1b4u: goto label_3ae1b4;
        case 0x3ae1c4u: goto label_3ae1c4;
        case 0x3ae1d0u: goto label_3ae1d0;
        case 0x3ae1dcu: goto label_3ae1dc;
        case 0x3ae1ecu: goto label_3ae1ec;
        case 0x3ae2a0u: goto label_3ae2a0;
        case 0x3ae2b4u: goto label_3ae2b4;
        case 0x3ae380u: goto label_3ae380;
        case 0x3ae390u: goto label_3ae390;
        case 0x3ae3a8u: goto label_3ae3a8;
        case 0x3ae3b8u: goto label_3ae3b8;
        case 0x3ae444u: goto label_3ae444;
        case 0x3ae44cu: goto label_3ae44c;
        case 0x3ae454u: goto label_3ae454;
        case 0x3ae484u: goto label_3ae484;
        case 0x3ae5b0u: goto label_3ae5b0;
        case 0x3ae61cu: goto label_3ae61c;
        case 0x3ae638u: goto label_3ae638;
        case 0x3ae640u: goto label_3ae640;
        case 0x3ae64cu: goto label_3ae64c;
        case 0x3ae658u: goto label_3ae658;
        default: break;
    }

    ctx->pc = 0x3adba0u;

    // 0x3adba0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3adba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3adba4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3adba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3adba8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3adba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3adbac: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3adbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3adbb0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3adbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3adbb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3adbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3adbb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3adbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3adbbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3adbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3adbc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3adbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3adbc4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3adbc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3adbc8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3adbc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3adbcc: 0x83838c78  lb          $v1, -0x7388($gp)
    ctx->pc = 0x3adbccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937720)));
    // 0x3adbd0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3ADBD0u;
    {
        const bool branch_taken_0x3adbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBD0u;
        // 0x3adbd4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adbd0) {
            ctx->pc = 0x3ADC00u;
            goto label_3adc00;
        }
    }
    ctx->pc = 0x3ADBD8u;
    // 0x3adbd8: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3adbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3adbdc: 0x3c03c29c  lui         $v1, 0xC29C
    ctx->pc = 0x3adbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49820 << 16));
    // 0x3adbe0: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x3adbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3adbe4: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3adbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3adbe8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3adbe8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3adbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3adbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adbf0: 0xa3838c78  sb          $v1, -0x7388($gp)
    ctx->pc = 0x3adbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937720), (uint8_t)GPR_U32(ctx, 3));
    // 0x3adbf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3adbf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3adbf8: 0xe42029e8  swc1        $f0, 0x29E8($at)
    ctx->pc = 0x3adbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6829E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6829E8u, _value); } while (0); }
    // 0x3adbfc: 0x0  nop
    ctx->pc = 0x3adbfcu;
    // NOP
label_3adc00:
    // 0x3adc00: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3adc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3adc04: 0x2463dcf0  addiu       $v1, $v1, -0x2310
    ctx->pc = 0x3adc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958320));
    // 0x3adc08: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x3adc08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x3adc0c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3adc0cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65DCF0u));
    // 0x3adc10: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3adc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3adc14: 0x24e7dd00  addiu       $a3, $a3, -0x2300
    ctx->pc = 0x3adc14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958336));
    // 0x3adc18: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x3adc18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3adc1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3adc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3adc20: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x3adc20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x3adc24: 0x0  nop
    ctx->pc = 0x3adc24u;
    // NOP
label_3adc28:
    // 0x3adc28: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x3adc28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3adc2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3adc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3adc30: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x3adc30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3adc34: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x3adc34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x3adc38: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3adc38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3adc3c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x3adc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x3adc40: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3ADC40u;
    {
        const bool branch_taken_0x3adc40 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x3ADC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC40u;
        // 0x3adc44: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc40) {
            ctx->pc = 0x3ADC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3adc28;
        }
    }
    ctx->pc = 0x3ADC48u;
    // 0x3adc48: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x3adc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x3adc4c: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x3adc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x3adc50: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x3adc50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x3adc54: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3adc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3adc58: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x3adc58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x3adc5c: 0x38840649  xori        $a0, $a0, 0x649
    ctx->pc = 0x3adc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1609);
    // 0x3adc60: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x3adc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x3adc64: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3adc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3adc68: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x3adc68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x3adc6c: 0x8e830148  lw          $v1, 0x148($s4)
    ctx->pc = 0x3adc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x3adc70: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3adc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3adc74: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x3adc74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x3adc78: 0x8e8306cc  lw          $v1, 0x6CC($s4)
    ctx->pc = 0x3adc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1740)));
    // 0x3adc7c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3adc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3adc80: 0xae8306cc  sw          $v1, 0x6CC($s4)
    ctx->pc = 0x3adc80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 3));
    // 0x3adc84: 0x92830821  lbu         $v1, 0x821($s4)
    ctx->pc = 0x3adc84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x3adc88: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3adc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3adc8c: 0x1020024a  beqz        $at, . + 4 + (0x24A << 2)
    ctx->pc = 0x3ADC8Cu;
    {
        const bool branch_taken_0x3adc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADC8Cu;
        // 0x3adc90: 0x2c960001  sltiu       $s6, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adc8c) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3ADC94u;
    // 0x3adc94: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3adc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3adc98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3adc98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3adc9c: 0x24842a30  addiu       $a0, $a0, 0x2A30
    ctx->pc = 0x3adc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10800));
    // 0x3adca0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3adca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3adca4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3adca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3adca8: 0x600008  jr          $v1
    ctx->pc = 0x3ADCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3ADCB0u: goto label_3adcb0;
            case 0x3AE108u: goto label_3ae108;
            case 0x3AE290u: goto label_3ae290;
            case 0x3AE370u: goto label_3ae370;
            case 0x3AE460u: goto label_3ae460;
            case 0x3AE528u: goto label_3ae528;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADCA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3ADCB0u;
label_3adcb0:
    // 0x3adcb0: 0x8e8507c0  lw          $a1, 0x7C0($s4)
    ctx->pc = 0x3adcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1984)));
    // 0x3adcb4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3adcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3adcb8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3ADCB8u;
    SET_GPR_U32(ctx, 31, 0x3ADCC0u);
    ctx->pc = 0x3ADCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADCB8u;
    // 0x3adcbc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3ADCB8u, 0x3ADCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADCC0u;
label_3adcc0:
    // 0x3adcc0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ADCC0u;
    {
        const bool branch_taken_0x3adcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCC0u;
        // 0x3adcc4: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adcc0) {
            ctx->pc = 0x3ADCE0u;
            goto label_3adce0;
        }
    }
    ctx->pc = 0x3ADCC8u;
    // 0x3adcc8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x3adcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3adccc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x3adcccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3adcd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3adcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3adcd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3adcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3adcd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3adcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3adcdc: 0x0  nop
    ctx->pc = 0x3adcdcu;
    // NOP
label_3adce0:
    // 0x3adce0: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x3ADCE0u;
    {
        const bool branch_taken_0x3adce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3adce0) {
            ctx->pc = 0x3ADEB0u;
            goto label_3adeb0;
        }
    }
    ctx->pc = 0x3ADCE8u;
    // 0x3adce8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3adce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3adcec: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3adcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3adcf0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3adcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3adcf4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3ADCF4u;
    {
        const bool branch_taken_0x3adcf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADCF4u;
        // 0x3adcf8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adcf4) {
            ctx->pc = 0x3ADD00u;
            goto label_3add00;
        }
    }
    ctx->pc = 0x3ADCFCu;
    // 0x3adcfc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3adcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3add00:
    // 0x3add00: 0x1080006b  beqz        $a0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3ADD00u;
    {
        const bool branch_taken_0x3add00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD00u;
        // 0x3add04: 0x32c300ff  andi        $v1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add00) {
            ctx->pc = 0x3ADEB0u;
            goto label_3adeb0;
        }
    }
    ctx->pc = 0x3ADD08u;
    // 0x3add08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3add08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3add0c: 0x14640016  bne         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3ADD0Cu;
    {
        const bool branch_taken_0x3add0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3add0c) {
            ctx->pc = 0x3ADD68u;
            goto label_3add68;
        }
    }
    ctx->pc = 0x3ADD14u;
    // 0x3add14: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3add14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add18: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x3add18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x3add1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3add1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3add20: 0x0  nop
    ctx->pc = 0x3add20u;
    // NOP
    // 0x3add24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3add24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3add28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADD28u;
    {
        const bool branch_taken_0x3add28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3add28) {
            ctx->pc = 0x3ADD38u;
            goto label_3add38;
        }
    }
    ctx->pc = 0x3ADD30u;
    // 0x3add30: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3ADD30u;
    {
        const bool branch_taken_0x3add30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD30u;
        // 0x3add34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add30) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADD38u;
label_3add38:
    // 0x3add38: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x3add38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add3c: 0x3c024454  lui         $v0, 0x4454
    ctx->pc = 0x3add3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17492 << 16));
    // 0x3add40: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3add40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3add44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3add44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3add48: 0x0  nop
    ctx->pc = 0x3add48u;
    // NOP
    // 0x3add4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3add4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3add50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADD50u;
    {
        const bool branch_taken_0x3add50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3add50) {
            ctx->pc = 0x3ADD60u;
            goto label_3add60;
        }
    }
    ctx->pc = 0x3ADD58u;
    // 0x3add58: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3ADD58u;
    {
        const bool branch_taken_0x3add58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD58u;
        // 0x3add5c: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add58) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADD60u;
label_3add60:
    // 0x3add60: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3ADD60u;
    {
        const bool branch_taken_0x3add60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD60u;
        // 0x3add64: 0x64020003  daddiu      $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add60) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADD68u;
label_3add68:
    // 0x3add68: 0x3c034573  lui         $v1, 0x4573
    ctx->pc = 0x3add68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17779 << 16));
    // 0x3add6c: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3add6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add70: 0x3463c000  ori         $v1, $v1, 0xC000
    ctx->pc = 0x3add70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49152);
    // 0x3add74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3add74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3add78: 0x0  nop
    ctx->pc = 0x3add78u;
    // NOP
    // 0x3add7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3add7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3add80: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3ADD80u;
    {
        const bool branch_taken_0x3add80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3add80) {
            ctx->pc = 0x3ADDB8u;
            goto label_3addb8;
        }
    }
    ctx->pc = 0x3ADD88u;
    // 0x3add88: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x3add88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add8c: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x3add8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x3add90: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3add90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3add94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3add94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3add98: 0x0  nop
    ctx->pc = 0x3add98u;
    // NOP
    // 0x3add9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3add9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3adda0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADDA0u;
    {
        const bool branch_taken_0x3adda0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3adda0) {
            ctx->pc = 0x3ADDB0u;
            goto label_3addb0;
        }
    }
    ctx->pc = 0x3ADDA8u;
    // 0x3adda8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3ADDA8u;
    {
        const bool branch_taken_0x3adda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDA8u;
        // 0x3addac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adda8) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADDB0u;
label_3addb0:
    // 0x3addb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3ADDB0u;
    {
        const bool branch_taken_0x3addb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB0u;
        // 0x3addb4: 0x64020002  daddiu      $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addb0) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADDB8u;
label_3addb8:
    // 0x3addb8: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x3addb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3addbc: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x3addbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x3addc0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3addc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3addc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3addc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3addc8: 0x0  nop
    ctx->pc = 0x3addc8u;
    // NOP
    // 0x3addcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3addccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3addd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADDD0u;
    {
        const bool branch_taken_0x3addd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3addd0) {
            ctx->pc = 0x3ADDE0u;
            goto label_3adde0;
        }
    }
    ctx->pc = 0x3ADDD8u;
    // 0x3addd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3ADDD8u;
    {
        const bool branch_taken_0x3addd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDD8u;
        // 0x3adddc: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addd8) {
            ctx->pc = 0x3ADDE8u;
            goto label_3adde8;
        }
    }
    ctx->pc = 0x3ADDE0u;
label_3adde0:
    // 0x3adde0: 0x64020003  daddiu      $v0, $zero, 0x3
    ctx->pc = 0x3adde0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
    // 0x3adde4: 0x0  nop
    ctx->pc = 0x3adde4u;
    // NOP
label_3adde8:
    // 0x3adde8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3adde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3addec: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3addecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3addf0: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x3addf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x3addf4: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x3addf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3addf8: 0x248429f0  addiu       $a0, $a0, 0x29F0
    ctx->pc = 0x3addf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10736));
    // 0x3addfc: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x3addfcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3ade00: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ade00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade04: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3ade04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3ade08: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3ade08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ade0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3ade0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3ade10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ade10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ade14: 0x245500c0  addiu       $s5, $v0, 0xC0
    ctx->pc = 0x3ade14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3ade18: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3ade18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3ade1c: 0x27b00198  addiu       $s0, $sp, 0x198
    ctx->pc = 0x3ade1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_3ade20:
    // 0x3ade20: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3ade20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ade24: 0x92822b30  lbu         $v0, 0x2B30($s4)
    ctx->pc = 0x3ade24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11056)));
    // 0x3ade28: 0x1043000f  beq         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3ADE28u;
    {
        const bool branch_taken_0x3ade28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ADE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE28u;
        // 0x3ade2c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade28) {
            ctx->pc = 0x3ADE68u;
            goto label_3ade68;
        }
    }
    ctx->pc = 0x3ADE30u;
    // 0x3ade30: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3ade30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3ade34: 0xc096908  jal         func_25A420
    ctx->pc = 0x3ADE34u;
    SET_GPR_U32(ctx, 31, 0x3ADE3Cu);
    ctx->pc = 0x3ADE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE34u;
    // 0x3ade38: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3ADE34u, 0x3ADE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE3Cu;
label_3ade3c:
    // 0x3ade3c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x3ade3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3ade40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ade40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ade44: 0x0  nop
    ctx->pc = 0x3ade44u;
    // NOP
    // 0x3ade48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ade48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ade4c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3ADE4Cu;
    {
        const bool branch_taken_0x3ade4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ade4c) {
            ctx->pc = 0x3ADE68u;
            goto label_3ade68;
        }
    }
    ctx->pc = 0x3ADE54u;
    // 0x3ade54: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x3ade54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ade58: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x3ade58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3ade5c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x3ade5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ade60: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3ade60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ade64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ade64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3ade68:
    // 0x3ade68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ade68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3ade6c: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x3ade6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3ade70: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3ADE70u;
    {
        const bool branch_taken_0x3ade70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE70u;
        // 0x3ade74: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade70) {
            ctx->pc = 0x3ADE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ade20;
        }
    }
    ctx->pc = 0x3ADE78u;
    // 0x3ade78: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x3ade78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3ade7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADE7Cu;
    {
        const bool branch_taken_0x3ade7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ade7c) {
            ctx->pc = 0x3ADE90u;
            goto label_3ade90;
        }
    }
    ctx->pc = 0x3ADE84u;
    // 0x3ade84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ADE84u;
    {
        const bool branch_taken_0x3ade84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADE84u;
        // 0x3ade88: 0x82902b30  lb          $s0, 0x2B30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 11056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ade84) {
            ctx->pc = 0x3ADEC8u;
            goto label_3adec8;
        }
    }
    ctx->pc = 0x3ADE8Cu;
    // 0x3ade8c: 0x0  nop
    ctx->pc = 0x3ade8cu;
    // NOP
label_3ade90:
    // 0x3ade90: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3ADE90u;
    SET_GPR_U32(ctx, 31, 0x3ADE98u);
    ctx->pc = 0x3ADE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADE90u;
    // 0x3ade94: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3ADE90u, 0x3ADE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADE98u;
label_3ade98:
    // 0x3ade98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x3ade98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x3ade9c: 0x90420198  lbu         $v0, 0x198($v0)
    ctx->pc = 0x3ade9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 408)));
    // 0x3adea0: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x3adea0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3adea4: 0xa2822b30  sb          $v0, 0x2B30($s4)
    ctx->pc = 0x3adea4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11056), (uint8_t)GPR_U32(ctx, 2));
    // 0x3adea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3ADEA8u;
    {
        const bool branch_taken_0x3adea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADEA8u;
        // 0x3adeac: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adea8) {
            ctx->pc = 0x3ADEC8u;
            goto label_3adec8;
        }
    }
    ctx->pc = 0x3ADEB0u;
label_3adeb0:
    // 0x3adeb0: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x3ADEB0u;
    SET_GPR_U32(ctx, 31, 0x3ADEB8u);
    ctx->pc = 0x3ADEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEB0u;
    // 0x3adeb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x3ADEB0u, 0x3ADEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEB8u;
label_3adeb8:
    // 0x3adeb8: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x3adeb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3adebc: 0xa2822b30  sb          $v0, 0x2B30($s4)
    ctx->pc = 0x3adebcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11056), (uint8_t)GPR_U32(ctx, 2));
    // 0x3adec0: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x3adec0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x3adec4: 0x0  nop
    ctx->pc = 0x3adec4u;
    // NOP
label_3adec8:
    // 0x3adec8: 0xc04150c  jal         func_105430
    ctx->pc = 0x3ADEC8u;
    SET_GPR_U32(ctx, 31, 0x3ADED0u);
    ctx->pc = 0x3ADECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEC8u;
    // 0x3adecc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x3ADEC8u, 0x3ADED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADED0u;
label_3aded0:
    // 0x3aded0: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3aded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x3aded4: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x3aded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x3aded8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3aded8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3adedc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3adedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3adee0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3adee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3adee4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x3adee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x3adee8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3adee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3adeec: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x3adeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3adef0: 0x245000c0  addiu       $s0, $v0, 0xC0
    ctx->pc = 0x3adef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3adef4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3ADEF4u;
    SET_GPR_U32(ctx, 31, 0x3ADEFCu);
    ctx->pc = 0x3ADEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADEF4u;
    // 0x3adef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3ADEF4u, 0x3ADEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADEFCu;
label_3adefc:
    // 0x3adefc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3adefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3adf00: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3adf00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3adf04: 0xc041588  jal         func_105620
    ctx->pc = 0x3ADF04u;
    SET_GPR_U32(ctx, 31, 0x3ADF0Cu);
    ctx->pc = 0x3ADF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF04u;
    // 0x3adf08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x3ADF04u, 0x3ADF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF0Cu;
label_3adf0c:
    // 0x3adf0c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3adf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3adf10: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3adf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3adf14: 0xc041442  jal         func_105108
    ctx->pc = 0x3ADF14u;
    SET_GPR_U32(ctx, 31, 0x3ADF1Cu);
    ctx->pc = 0x3ADF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF14u;
    // 0x3adf18: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3ADF14u, 0x3ADF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF1Cu;
label_3adf1c:
    // 0x3adf1c: 0x7a870020  lq          $a3, 0x20($s4)
    ctx->pc = 0x3adf1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3adf20: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3adf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3adf24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3adf24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3adf28: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x3adf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x3adf2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3adf2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3adf30: 0x26850890  addiu       $a1, $s4, 0x890
    ctx->pc = 0x3adf30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3adf34: 0x26860870  addiu       $a2, $s4, 0x870
    ctx->pc = 0x3adf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x3adf38: 0x7e870870  sq          $a3, 0x870($s4)
    ctx->pc = 0x3adf38u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 2160), GPR_VEC(ctx, 7));
    // 0x3adf3c: 0xae83087c  sw          $v1, 0x87C($s4)
    ctx->pc = 0x3adf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2172), GPR_U32(ctx, 3));
    // 0x3adf40: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3adf40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3adf44: 0x7e820890  sq          $v0, 0x890($s4)
    ctx->pc = 0x3adf44u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 2192), GPR_VEC(ctx, 2));
    // 0x3adf48: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3ADF48u;
    SET_GPR_U32(ctx, 31, 0x3ADF50u);
    ctx->pc = 0x3ADF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF48u;
    // 0x3adf4c: 0xae83089c  sw          $v1, 0x89C($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 2204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3ADF48u, 0x3ADF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF50u;
label_3adf50:
    // 0x3adf50: 0xc6810884  lwc1        $f1, 0x884($s4)
    ctx->pc = 0x3adf50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adf54: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3adf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3adf58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3adf58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3adf5c: 0x26840890  addiu       $a0, $s4, 0x890
    ctx->pc = 0x3adf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3adf60: 0x26850870  addiu       $a1, $s4, 0x870
    ctx->pc = 0x3adf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x3adf64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3adf64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3adf68: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3ADF68u;
    SET_GPR_U32(ctx, 31, 0x3ADF70u);
    ctx->pc = 0x3ADF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADF68u;
    // 0x3adf6c: 0xe6800884  swc1        $f0, 0x884($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 2180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3ADF68u, 0x3ADF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADF70u;
label_3adf70:
    // 0x3adf70: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3adf70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3adf74: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3adf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3adf78: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3adf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3adf7c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3adf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3adf80: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x3adf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x3adf84: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x3adf84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3adf88: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3adf88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3adf8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3adf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adf90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3adf90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3adf94: 0x0  nop
    ctx->pc = 0x3adf94u;
    // NOP
    // 0x3adf98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3adf98u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3adf9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3adf9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3adfa0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3adfa0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3adfa4: 0x0  nop
    ctx->pc = 0x3adfa4u;
    // NOP
    // 0x3adfa8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3adfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3adfac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3adfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3adfb0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3adfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3adfb4: 0xa68208a0  sh          $v0, 0x8A0($s4)
    ctx->pc = 0x3adfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2208), (uint16_t)GPR_U32(ctx, 2));
    // 0x3adfb8: 0x7a820880  lq          $v0, 0x880($s4)
    ctx->pc = 0x3adfb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 2176)));
    // 0x3adfbc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3ADFBCu;
    SET_GPR_U32(ctx, 31, 0x3ADFC4u);
    ctx->pc = 0x3ADFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFBCu;
    // 0x3adfc0: 0x7e822b20  sq          $v0, 0x2B20($s4) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 20), 11040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3ADFBCu, 0x3ADFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFC4u;
label_3adfc4:
    // 0x3adfc4: 0x26840890  addiu       $a0, $s4, 0x890
    ctx->pc = 0x3adfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3adfc8: 0xc096908  jal         func_25A420
    ctx->pc = 0x3ADFC8u;
    SET_GPR_U32(ctx, 31, 0x3ADFD0u);
    ctx->pc = 0x3ADFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFC8u;
    // 0x3adfcc: 0x26850880  addiu       $a1, $s4, 0x880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3ADFC8u, 0x3ADFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFD0u;
label_3adfd0:
    // 0x3adfd0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3adfd0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3adfd4: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x3adfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x3adfd8: 0xc6810894  lwc1        $f1, 0x894($s4)
    ctx->pc = 0x3adfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3adfdc: 0x26850870  addiu       $a1, $s4, 0x870
    ctx->pc = 0x3adfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x3adfe0: 0xc6800884  lwc1        $f0, 0x884($s4)
    ctx->pc = 0x3adfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3adfe4: 0xc096908  jal         func_25A420
    ctx->pc = 0x3ADFE4u;
    SET_GPR_U32(ctx, 31, 0x3ADFECu);
    ctx->pc = 0x3ADFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADFE4u;
    // 0x3adfe8: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3ADFE4u, 0x3ADFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADFECu;
label_3adfec:
    // 0x3adfec: 0xc6850884  lwc1        $f5, 0x884($s4)
    ctx->pc = 0x3adfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3adff0: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3adff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3adff4: 0xc6840874  lwc1        $f4, 0x874($s4)
    ctx->pc = 0x3adff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3adff8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3adff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3adffc: 0xc42329e8  lwc1        $f3, 0x29E8($at)
    ctx->pc = 0x3adffcu;
    { uint32_t bits = FAST_READ32(0x6829E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae000: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3ae000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3ae004: 0x4615a882  mul.s       $f2, $f21, $f21
    ctx->pc = 0x3ae004u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x3ae008: 0x26850880  addiu       $a1, $s4, 0x880
    ctx->pc = 0x3ae008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x3ae00c: 0x26860870  addiu       $a2, $s4, 0x870
    ctx->pc = 0x3ae00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x3ae010: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x3ae010u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x3ae014: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x3ae014u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x3ae018: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x3ae018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x3ae01c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x3ae01cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x3ae020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ae020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae024: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae028: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ae028u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ae02c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3ae02cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3ae030: 0x46000004  c1          0x4
    ctx->pc = 0x3ae030u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3ae034: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x3ae034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3ae038: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x3ae038u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x3ae03c: 0x4601081c  madd.s      $f0, $f1, $f1
    ctx->pc = 0x3ae03cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x3ae040: 0x46000504  c1          0x504
    ctx->pc = 0x3ae040u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x3ae044: 0x0  nop
    ctx->pc = 0x3ae044u;
    // NOP
    // 0x3ae048: 0x0  nop
    ctx->pc = 0x3ae048u;
    // NOP
    // 0x3ae04c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3AE04Cu;
    SET_GPR_U32(ctx, 31, 0x3AE054u);
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3AE04Cu, 0x3AE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE054u;
label_3ae054:
    // 0x3ae054: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ae054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3ae058: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3ae058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3ae05c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae05cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae060: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3ae060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ae064: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3AE064u;
    SET_GPR_U32(ctx, 31, 0x3AE06Cu);
    ctx->pc = 0x3AE068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE064u;
    // 0x3ae068: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3AE064u, 0x3AE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE06Cu;
label_3ae06c:
    // 0x3ae06c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3ae06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3ae070: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ae070u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3ae074: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3AE074u;
    SET_GPR_U32(ctx, 31, 0x3AE07Cu);
    ctx->pc = 0x3AE078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE074u;
    // 0x3ae078: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3AE074u, 0x3AE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE07Cu;
label_3ae07c:
    // 0x3ae07c: 0xe694009c  swc1        $f20, 0x9C($s4)
    ctx->pc = 0x3ae07cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
    // 0x3ae080: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ae080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae084: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae088: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ae088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae08c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ae08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae090: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3ae090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ae094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ae094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae098: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ae098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae09c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae09cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae0a0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae0a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae0a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae0a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae0a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae0a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae0ac: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE0ACu;
    {
        const bool branch_taken_0x3ae0ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae0ac) {
            ctx->pc = 0x3AE0C4u;
            goto label_3ae0c4;
        }
    }
    ctx->pc = 0x3AE0B4u;
    // 0x3ae0b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae0b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae0b8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ae0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ae0bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE0BCu;
    {
        const bool branch_taken_0x3ae0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE0BCu;
        // 0x3ae0c0: 0xa28007f6  sb          $zero, 0x7F6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae0bc) {
            ctx->pc = 0x3AE0E0u;
            goto label_3ae0e0;
        }
    }
    ctx->pc = 0x3AE0C4u;
label_3ae0c4:
    // 0x3ae0c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae0c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae0c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae0cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae0ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae0d0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ae0d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ae0d4: 0x0  nop
    ctx->pc = 0x3ae0d4u;
    // NOP
    // 0x3ae0d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ae0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ae0dc: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ae0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ae0e0:
    // 0x3ae0e0: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x3ae0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x3ae0e4: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ae0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae0e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae0ec: 0xa68307f2  sh          $v1, 0x7F2($s4)
    ctx->pc = 0x3ae0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae0f0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x3ae0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ae0f4: 0xa28407f5  sb          $a0, 0x7F5($s4)
    ctx->pc = 0x3ae0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ae0f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae0fc: 0xae8307ec  sw          $v1, 0x7EC($s4)
    ctx->pc = 0x3ae0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 3));
    // 0x3ae100: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ae100u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ae104: 0xa6802b32  sh          $zero, 0x2B32($s4)
    ctx->pc = 0x3ae104u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11058), (uint16_t)GPR_U32(ctx, 0));
label_3ae108:
    // 0x3ae108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae10c: 0x26850890  addiu       $a1, $s4, 0x890
    ctx->pc = 0x3ae10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3ae110: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x3AE110u;
    SET_GPR_U32(ctx, 31, 0x3AE118u);
    ctx->pc = 0x3AE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE110u;
    // 0x3ae114: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x3AE110u, 0x3AE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE118u;
label_3ae118:
    // 0x3ae118: 0x86842b32  lh          $a0, 0x2B32($s4)
    ctx->pc = 0x3ae118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11058)));
    // 0x3ae11c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3ae11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3ae120: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ae120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ae124: 0xa6842b32  sh          $a0, 0x2B32($s4)
    ctx->pc = 0x3ae124u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 11058), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ae128: 0x86842b32  lh          $a0, 0x2B32($s4)
    ctx->pc = 0x3ae128u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11058)));
    // 0x3ae12c: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3AE12Cu;
    {
        const bool branch_taken_0x3ae12c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ae12c) {
            ctx->pc = 0x3AE1F0u;
            goto label_3ae1f0;
        }
    }
    ctx->pc = 0x3AE134u;
    // 0x3ae134: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x3ae134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3ae138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae13c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ae140: 0x78420530  lq          $v0, 0x530($v0)
    ctx->pc = 0x3ae140u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 1328)));
    // 0x3ae144: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3AE144u;
    SET_GPR_U32(ctx, 31, 0x3AE14Cu);
    ctx->pc = 0x3AE148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE144u;
    // 0x3ae148: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3AE144u, 0x3AE14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE14Cu;
label_3ae14c:
    // 0x3ae14c: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ae14cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ae150: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x3ae150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3ae154: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ae154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae158: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3ae158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3ae15c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3ae15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae160: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x3AE160u;
    SET_GPR_U32(ctx, 31, 0x3AE168u);
    ctx->pc = 0x3AE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE160u;
    // 0x3ae164: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3AE160u, 0x3AE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE168u;
label_3ae168:
    // 0x3ae168: 0x8e842950  lw          $a0, 0x2950($s4)
    ctx->pc = 0x3ae168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    // 0x3ae16c: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3AE16Cu;
    SET_GPR_U32(ctx, 31, 0x3AE174u);
    ctx->pc = 0x3AE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE16Cu;
    // 0x3ae170: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3AE16Cu, 0x3AE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE174u;
label_3ae174:
    // 0x3ae174: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae178: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3AE178u;
    SET_GPR_U32(ctx, 31, 0x3AE180u);
    ctx->pc = 0x3AE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE178u;
    // 0x3ae17c: 0xae902950  sw          $s0, 0x2950($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 10576), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3AE178u, 0x3AE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE180u;
label_3ae180:
    // 0x3ae180: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ae180u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ae184: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x3ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3ae188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ae188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae18c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x3ae18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3ae190: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae194: 0xc0a9d0c  jal         func_2A7430
    ctx->pc = 0x3AE194u;
    SET_GPR_U32(ctx, 31, 0x3AE19Cu);
    ctx->pc = 0x3AE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE194u;
    // 0x3ae198: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7430u, 0x3AE194u, 0x3AE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE19Cu;
label_3ae19c:
    // 0x3ae19c: 0x8e842954  lw          $a0, 0x2954($s4)
    ctx->pc = 0x3ae19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    // 0x3ae1a0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3AE1A0u;
    SET_GPR_U32(ctx, 31, 0x3AE1A8u);
    ctx->pc = 0x3AE1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1A0u;
    // 0x3ae1a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3AE1A0u, 0x3AE1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1A8u;
label_3ae1a8:
    // 0x3ae1a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1ac: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3AE1ACu;
    SET_GPR_U32(ctx, 31, 0x3AE1B4u);
    ctx->pc = 0x3AE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1ACu;
    // 0x3ae1b0: 0xae902954  sw          $s0, 0x2954($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 10580), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3AE1ACu, 0x3AE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1B4u;
label_3ae1b4:
    // 0x3ae1b4: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ae1b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ae1b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ae1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1bc: 0xc0a9908  jal         func_2A6420
    ctx->pc = 0x3AE1BCu;
    SET_GPR_U32(ctx, 31, 0x3AE1C4u);
    ctx->pc = 0x3AE1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1BCu;
    // 0x3ae1c0: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6420u, 0x3AE1BCu, 0x3AE1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1C4u;
label_3ae1c4:
    // 0x3ae1c4: 0x8e842958  lw          $a0, 0x2958($s4)
    ctx->pc = 0x3ae1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10584)));
    // 0x3ae1c8: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3AE1C8u;
    SET_GPR_U32(ctx, 31, 0x3AE1D0u);
    ctx->pc = 0x3AE1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1C8u;
    // 0x3ae1cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3AE1C8u, 0x3AE1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1D0u;
label_3ae1d0:
    // 0x3ae1d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1d4: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3AE1D4u;
    SET_GPR_U32(ctx, 31, 0x3AE1DCu);
    ctx->pc = 0x3AE1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1D4u;
    // 0x3ae1d8: 0xae902958  sw          $s0, 0x2958($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 10584), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3AE1D4u, 0x3AE1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1DCu;
label_3ae1dc:
    // 0x3ae1dc: 0x928508e8  lbu         $a1, 0x8E8($s4)
    ctx->pc = 0x3ae1dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x3ae1e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ae1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1e4: 0xc0a9918  jal         func_2A6460
    ctx->pc = 0x3AE1E4u;
    SET_GPR_U32(ctx, 31, 0x3AE1ECu);
    ctx->pc = 0x3AE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1E4u;
    // 0x3ae1e8: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6460u, 0x3AE1E4u, 0x3AE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1ECu;
label_3ae1ec:
    // 0x3ae1ec: 0x0  nop
    ctx->pc = 0x3ae1ecu;
    // NOP
label_3ae1f0:
    // 0x3ae1f0: 0x86832b32  lh          $v1, 0x2B32($s4)
    ctx->pc = 0x3ae1f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11058)));
    // 0x3ae1f4: 0x2861001d  slti        $at, $v1, 0x1D
    ctx->pc = 0x3ae1f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x3ae1f8: 0x142000ef  bnez        $at, . + 4 + (0xEF << 2)
    ctx->pc = 0x3AE1F8u;
    {
        const bool branch_taken_0x3ae1f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae1f8) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE200u;
    // 0x3ae200: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae204: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3ae204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae208: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ae208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae20c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ae20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae210: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ae210u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ae214: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ae214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae218: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae21c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ae21cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae224: 0x0  nop
    ctx->pc = 0x3ae224u;
    // NOP
    // 0x3ae228: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae22c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae22cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae230: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE230u;
    {
        const bool branch_taken_0x3ae230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae230) {
            ctx->pc = 0x3AE248u;
            goto label_3ae248;
        }
    }
    ctx->pc = 0x3AE238u;
    // 0x3ae238: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae23c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3ae23cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ae240: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE240u;
    {
        const bool branch_taken_0x3ae240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE240u;
        // 0x3ae244: 0xa28007f6  sb          $zero, 0x7F6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae240) {
            ctx->pc = 0x3AE264u;
            goto label_3ae264;
        }
    }
    ctx->pc = 0x3AE248u;
label_3ae248:
    // 0x3ae248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae24c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ae24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae250: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae250u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae254: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3ae254u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ae258: 0x0  nop
    ctx->pc = 0x3ae258u;
    // NOP
    // 0x3ae25c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3ae25cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3ae260: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ae260u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ae264:
    // 0x3ae264: 0x240300e1  addiu       $v1, $zero, 0xE1
    ctx->pc = 0x3ae264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x3ae268: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ae268u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae26c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3ae26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae270: 0xa68307f2  sh          $v1, 0x7F2($s4)
    ctx->pc = 0x3ae270u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae274: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ae274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae278: 0xa28607f5  sb          $a2, 0x7F5($s4)
    ctx->pc = 0x3ae278u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3ae27c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3ae27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3ae280: 0xae8507ec  sw          $a1, 0x7EC($s4)
    ctx->pc = 0x3ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 5));
    // 0x3ae284: 0xa2840821  sb          $a0, 0x821($s4)
    ctx->pc = 0x3ae284u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ae288: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x3AE288u;
    {
        const bool branch_taken_0x3ae288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE288u;
        // 0x3ae28c: 0xa6832b32  sh          $v1, 0x2B32($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae288) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE290u;
label_3ae290:
    // 0x3ae290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae294: 0x26850890  addiu       $a1, $s4, 0x890
    ctx->pc = 0x3ae294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3ae298: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x3AE298u;
    SET_GPR_U32(ctx, 31, 0x3AE2A0u);
    ctx->pc = 0x3AE29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE298u;
    // 0x3ae29c: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x3AE298u, 0x3AE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2A0u;
label_3ae2a0:
    // 0x3ae2a0: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x3ae2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x3ae2a4: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x3AE2A4u;
    {
        const bool branch_taken_0x3ae2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2A4u;
        // 0x3ae2a8: 0x26840890  addiu       $a0, $s4, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae2a4) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE2ACu;
    // 0x3ae2ac: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3AE2ACu;
    SET_GPR_U32(ctx, 31, 0x3AE2B4u);
    ctx->pc = 0x3AE2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2ACu;
    // 0x3ae2b0: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3AE2ACu, 0x3AE2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2B4u;
label_3ae2b4:
    // 0x3ae2b4: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x3ae2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x3ae2b8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3ae2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3ae2bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3ae2bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae2c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3ae2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3ae2c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ae2c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae2c8: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x3ae2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae2cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3ae2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ae2d0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ae2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae2d4: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ae2d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ae2d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ae2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae2dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ae2dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ae2e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae2e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ae2e4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3ae2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3ae2e8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x3ae2e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae2ec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ae2ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae2f0: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x3ae2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3ae2f4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x3ae2f4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x3ae2f8: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x3ae2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x3ae2fc: 0xa68500c2  sh          $a1, 0xC2($s4)
    ctx->pc = 0x3ae2fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 194), (uint16_t)GPR_U32(ctx, 5));
    // 0x3ae300: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae304: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae308: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae30c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae30cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae310: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae310u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae314: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE314u;
    {
        const bool branch_taken_0x3ae314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae314) {
            ctx->pc = 0x3AE32Cu;
            goto label_3ae32c;
        }
    }
    ctx->pc = 0x3AE31Cu;
    // 0x3ae31c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae320: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ae320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ae324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE324u;
    {
        const bool branch_taken_0x3ae324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE324u;
        // 0x3ae328: 0xa28007f6  sb          $zero, 0x7F6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae324) {
            ctx->pc = 0x3AE348u;
            goto label_3ae348;
        }
    }
    ctx->pc = 0x3AE32Cu;
label_3ae32c:
    // 0x3ae32c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae32cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae330: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ae330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae334: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae338: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ae338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ae33c: 0x0  nop
    ctx->pc = 0x3ae33cu;
    // NOP
    // 0x3ae340: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3ae340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3ae344: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ae344u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ae348:
    // 0x3ae348: 0x240300e2  addiu       $v1, $zero, 0xE2
    ctx->pc = 0x3ae348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x3ae34c: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ae34cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae350: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3ae350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae354: 0xa68307f2  sh          $v1, 0x7F2($s4)
    ctx->pc = 0x3ae354u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ae358: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x3ae358u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ae35c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ae35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3ae360: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x3ae360u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x3ae364: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x3AE364u;
    {
        const bool branch_taken_0x3ae364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE364u;
        // 0x3ae368: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae364) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE36Cu;
    // 0x3ae36c: 0x0  nop
    ctx->pc = 0x3ae36cu;
    // NOP
label_3ae370:
    // 0x3ae370: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3ae370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3ae374: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ae374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae378: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x3AE378u;
    SET_GPR_U32(ctx, 31, 0x3AE380u);
    ctx->pc = 0x3AE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE378u;
    // 0x3ae37c: 0x26860090  addiu       $a2, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x3AE378u, 0x3AE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE380u;
label_3ae380:
    // 0x3ae380: 0x26840880  addiu       $a0, $s4, 0x880
    ctx->pc = 0x3ae380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2176));
    // 0x3ae384: 0x26850870  addiu       $a1, $s4, 0x870
    ctx->pc = 0x3ae384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2160));
    // 0x3ae388: 0xc0eb6c8  jal         func_3ADB20
    ctx->pc = 0x3AE388u;
    SET_GPR_U32(ctx, 31, 0x3AE390u);
    ctx->pc = 0x3AE38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE388u;
    // 0x3ae38c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADB20u, 0x3AE388u, 0x3AE390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE390u;
label_3ae390:
    // 0x3ae390: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x3AE390u;
    {
        const bool branch_taken_0x3ae390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae390) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE398u;
    // 0x3ae398: 0xc68c009c  lwc1        $f12, 0x9C($s4)
    ctx->pc = 0x3ae398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ae39c: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3ae39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3ae3a0: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3AE3A0u;
    SET_GPR_U32(ctx, 31, 0x3AE3A8u);
    ctx->pc = 0x3AE3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3A0u;
    // 0x3ae3a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3AE3A0u, 0x3AE3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3A8u;
label_3ae3a8:
    // 0x3ae3a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ae3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae3ac: 0x26850890  addiu       $a1, $s4, 0x890
    ctx->pc = 0x3ae3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
    // 0x3ae3b0: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x3AE3B0u;
    SET_GPR_U32(ctx, 31, 0x3AE3B8u);
    ctx->pc = 0x3AE3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE3B0u;
    // 0x3ae3b4: 0x24060155  addiu       $a2, $zero, 0x155 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x3AE3B0u, 0x3AE3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE3B8u;
label_3ae3b8:
    // 0x3ae3b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae3bc: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ae3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae3c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ae3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae3c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ae3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae3c8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ae3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ae3cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ae3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae3d0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae3d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae3d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ae3d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae3dc: 0x0  nop
    ctx->pc = 0x3ae3dcu;
    // NOP
    // 0x3ae3e0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae3e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae3e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae3e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae3e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE3E8u;
    {
        const bool branch_taken_0x3ae3e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae3e8) {
            ctx->pc = 0x3AE400u;
            goto label_3ae400;
        }
    }
    ctx->pc = 0x3AE3F0u;
    // 0x3ae3f0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae3f4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ae3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ae3f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE3F8u;
    {
        const bool branch_taken_0x3ae3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE3F8u;
        // 0x3ae3fc: 0xa28007f6  sb          $zero, 0x7F6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae3f8) {
            ctx->pc = 0x3AE41Cu;
            goto label_3ae41c;
        }
    }
    ctx->pc = 0x3AE400u;
label_3ae400:
    // 0x3ae400: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae400u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae404: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae408: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae408u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae40c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ae40cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ae410: 0x0  nop
    ctx->pc = 0x3ae410u;
    // NOP
    // 0x3ae414: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3ae414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3ae418: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ae418u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ae41c:
    // 0x3ae41c: 0x240200e3  addiu       $v0, $zero, 0xE3
    ctx->pc = 0x3ae41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 227));
    // 0x3ae420: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ae420u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae424: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x3ae424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x3ae428: 0xa68207f2  sh          $v0, 0x7F2($s4)
    ctx->pc = 0x3ae428u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae42c: 0xa28407f5  sb          $a0, 0x7F5($s4)
    ctx->pc = 0x3ae42cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ae430: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ae430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ae434: 0xae8307ec  sw          $v1, 0x7EC($s4)
    ctx->pc = 0x3ae434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 3));
    // 0x3ae438: 0xa2820821  sb          $v0, 0x821($s4)
    ctx->pc = 0x3ae438u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ae43c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3AE43Cu;
    SET_GPR_U32(ctx, 31, 0x3AE444u);
    ctx->pc = 0x3AE440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE43Cu;
    // 0x3ae440: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3AE43Cu, 0x3AE444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE444u;
label_3ae444:
    // 0x3ae444: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3AE444u;
    SET_GPR_U32(ctx, 31, 0x3AE44Cu);
    ctx->pc = 0x3AE448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE444u;
    // 0x3ae448: 0x8e842954  lw          $a0, 0x2954($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3AE444u, 0x3AE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE44Cu;
label_3ae44c:
    // 0x3ae44c: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3AE44Cu;
    SET_GPR_U32(ctx, 31, 0x3AE454u);
    ctx->pc = 0x3AE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE44Cu;
    // 0x3ae450: 0x8e842958  lw          $a0, 0x2958($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3AE44Cu, 0x3AE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE454u;
label_3ae454:
    // 0x3ae454: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3AE454u;
    {
        const bool branch_taken_0x3ae454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae454) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE45Cu;
    // 0x3ae45c: 0x0  nop
    ctx->pc = 0x3ae45cu;
    // NOP
label_3ae460:
    // 0x3ae460: 0x3c010068  lui         $at, 0x68
    ctx->pc = 0x3ae460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)104 << 16));
    // 0x3ae464: 0xc6810094  lwc1        $f1, 0x94($s4)
    ctx->pc = 0x3ae464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae468: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x3ae468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x3ae46c: 0xc42029e8  lwc1        $f0, 0x29E8($at)
    ctx->pc = 0x3ae46cu;
    { uint32_t bits = FAST_READ32(0x6829E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae470: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ae470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae474: 0x26860090  addiu       $a2, $s4, 0x90
    ctx->pc = 0x3ae474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x3ae478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3ae478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3ae47c: 0xc096978  jal         func_25A5E0
    ctx->pc = 0x3AE47Cu;
    SET_GPR_U32(ctx, 31, 0x3AE484u);
    ctx->pc = 0x3AE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE47Cu;
    // 0x3ae480: 0xe6800094  swc1        $f0, 0x94($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5E0u, 0x3AE47Cu, 0x3AE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE484u;
label_3ae484:
    // 0x3ae484: 0xc6810024  lwc1        $f1, 0x24($s4)
    ctx->pc = 0x3ae484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae488: 0xc6800894  lwc1        $f0, 0x894($s4)
    ctx->pc = 0x3ae488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae48c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ae48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae490: 0x45000049  bc1f        . + 4 + (0x49 << 2)
    ctx->pc = 0x3AE490u;
    {
        const bool branch_taken_0x3ae490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae490) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE498u;
    // 0x3ae498: 0x7a850890  lq          $a1, 0x890($s4)
    ctx->pc = 0x3ae498u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 20), 2192)));
    // 0x3ae49c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3ae49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae4a0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ae4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae4a4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ae4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae4a8: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ae4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ae4ac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ae4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae4b0: 0x7e850020  sq          $a1, 0x20($s4)
    ctx->pc = 0x3ae4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 5));
    // 0x3ae4b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ae4b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae4b8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae4bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae4bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae4c0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae4c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae4c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae4c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae4c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae4c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae4cc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE4CCu;
    {
        const bool branch_taken_0x3ae4cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae4cc) {
            ctx->pc = 0x3AE4E4u;
            goto label_3ae4e4;
        }
    }
    ctx->pc = 0x3AE4D4u;
    // 0x3ae4d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae4d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae4d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ae4d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ae4dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE4DCu;
    {
        const bool branch_taken_0x3ae4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE4DCu;
        // 0x3ae4e0: 0xa28007f6  sb          $zero, 0x7F6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae4dc) {
            ctx->pc = 0x3AE500u;
            goto label_3ae500;
        }
    }
    ctx->pc = 0x3AE4E4u;
label_3ae4e4:
    // 0x3ae4e4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae4e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae4e8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ae4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae4ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae4ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae4f0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3ae4f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3ae4f4: 0x0  nop
    ctx->pc = 0x3ae4f4u;
    // NOP
    // 0x3ae4f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3ae4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3ae4fc: 0xa28007f6  sb          $zero, 0x7F6($s4)
    ctx->pc = 0x3ae4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2038), (uint8_t)GPR_U32(ctx, 0));
label_3ae500:
    // 0x3ae500: 0x240400e4  addiu       $a0, $zero, 0xE4
    ctx->pc = 0x3ae500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x3ae504: 0xa28007f4  sb          $zero, 0x7F4($s4)
    ctx->pc = 0x3ae504u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ae508: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ae508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae50c: 0xa68407f2  sh          $a0, 0x7F2($s4)
    ctx->pc = 0x3ae50cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x3ae510: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3ae510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3ae514: 0xa28507f5  sb          $a1, 0x7F5($s4)
    ctx->pc = 0x3ae514u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3ae518: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3ae518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3ae51c: 0xae8407ec  sw          $a0, 0x7EC($s4)
    ctx->pc = 0x3ae51cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2028), GPR_U32(ctx, 4));
    // 0x3ae520: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3AE520u;
    {
        const bool branch_taken_0x3ae520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE520u;
        // 0x3ae524: 0xa2830821  sb          $v1, 0x821($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae520) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE528u;
label_3ae528:
    // 0x3ae528: 0x8e840148  lw          $a0, 0x148($s4)
    ctx->pc = 0x3ae528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 328)));
    // 0x3ae52c: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x3ae52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x3ae530: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ae530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3ae534: 0xae830148  sw          $v1, 0x148($s4)
    ctx->pc = 0x3ae534u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 328), GPR_U32(ctx, 3));
    // 0x3ae538: 0x928307f6  lbu         $v1, 0x7F6($s4)
    ctx->pc = 0x3ae538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2038)));
    // 0x3ae53c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3AE53Cu;
    {
        const bool branch_taken_0x3ae53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae53c) {
            ctx->pc = 0x3AE5B8u;
            goto label_3ae5b8;
        }
    }
    ctx->pc = 0x3AE544u;
    // 0x3ae544: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ae544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae548: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3ae548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3ae54c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3ae54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ae550: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3ae550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3ae554: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3ae554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3ae558: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3ae558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3ae55c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ae55cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ae560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3ae560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ae564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae568: 0x0  nop
    ctx->pc = 0x3ae568u;
    // NOP
    // 0x3ae56c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae56cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae570: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ae570u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae574: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE574u;
    {
        const bool branch_taken_0x3ae574 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ae574) {
            ctx->pc = 0x3AE58Cu;
            goto label_3ae58c;
        }
    }
    ctx->pc = 0x3AE57Cu;
    // 0x3ae57c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae57cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae580: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ae580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE584u;
    {
        const bool branch_taken_0x3ae584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE584u;
        // 0x3ae588: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae584) {
            ctx->pc = 0x3AE5A8u;
            goto label_3ae5a8;
        }
    }
    ctx->pc = 0x3AE58Cu;
label_3ae58c:
    // 0x3ae58c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ae58cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ae590: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ae590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ae594: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ae594u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ae598: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3ae598u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3ae59c: 0x0  nop
    ctx->pc = 0x3ae59cu;
    // NOP
    // 0x3ae5a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3ae5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3ae5a4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3ae5a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3ae5a8:
    // 0x3ae5a8: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x3AE5A8u;
    SET_GPR_U32(ctx, 31, 0x3AE5B0u);
    ctx->pc = 0x3AE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5A8u;
    // 0x3ae5ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x3AE5A8u, 0x3AE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5B0u;
label_3ae5b0:
    // 0x3ae5b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae5b4: 0xa2830780  sb          $v1, 0x780($s4)
    ctx->pc = 0x3ae5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ae5b8:
    // 0x3ae5b8: 0x92830821  lbu         $v1, 0x821($s4)
    ctx->pc = 0x3ae5b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2081)));
    // 0x3ae5bc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3ae5bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3ae5c0: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x3AE5C0u;
    {
        const bool branch_taken_0x3ae5c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae5c0) {
            ctx->pc = 0x3AE698u;
            goto label_3ae698;
        }
    }
    ctx->pc = 0x3AE5C8u;
    // 0x3ae5c8: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x3ae5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x3ae5cc: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x3ae5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3ae5d0: 0x78630530  lq          $v1, 0x530($v1)
    ctx->pc = 0x3ae5d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 1328)));
    // 0x3ae5d4: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x3ae5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x3ae5d8: 0x86842b32  lh          $a0, 0x2B32($s4)
    ctx->pc = 0x3ae5d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 11058)));
    // 0x3ae5dc: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x3ae5dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3ae5e0: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3AE5E0u;
    {
        const bool branch_taken_0x3ae5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae5e0) {
            ctx->pc = 0x3AE698u;
            goto label_3ae698;
        }
    }
    ctx->pc = 0x3AE5E8u;
    // 0x3ae5e8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x3ae5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x3ae5ec: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x3ae5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x3ae5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3ae5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ae5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ae5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae5f8: 0x0  nop
    ctx->pc = 0x3ae5f8u;
    // NOP
    // 0x3ae5fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ae5fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3ae600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae604: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3ae604u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3ae608: 0x0  nop
    ctx->pc = 0x3ae608u;
    // NOP
    // 0x3ae60c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3ae60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3ae610: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3ae610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3ae614: 0xc0765dc  jal         func_1D9770
    ctx->pc = 0x3AE614u;
    SET_GPR_U32(ctx, 31, 0x3AE61Cu);
    ctx->pc = 0x1D9770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9770u, 0x3AE614u, 0x3AE61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE61Cu;
label_3ae61c:
    // 0x3ae61c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x3ae61cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3ae620: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ae620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3ae624: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3ae624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3ae628: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3ae628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3ae62c: 0x26862b20  addiu       $a2, $s4, 0x2B20
    ctx->pc = 0x3ae62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 11040));
    // 0x3ae630: 0xc0767e8  jal         func_1D9FA0
    ctx->pc = 0x3AE630u;
    SET_GPR_U32(ctx, 31, 0x3AE638u);
    ctx->pc = 0x3AE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE630u;
    // 0x3ae634: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FA0u, 0x3AE630u, 0x3AE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE638u;
label_3ae638:
    // 0x3ae638: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3AE638u;
    SET_GPR_U32(ctx, 31, 0x3AE640u);
    ctx->pc = 0x3AE63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE638u;
    // 0x3ae63c: 0x8e842950  lw          $a0, 0x2950($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10576)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3AE638u, 0x3AE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE640u;
label_3ae640:
    // 0x3ae640: 0x8e842954  lw          $a0, 0x2954($s4)
    ctx->pc = 0x3ae640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10580)));
    // 0x3ae644: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3AE644u;
    SET_GPR_U32(ctx, 31, 0x3AE64Cu);
    ctx->pc = 0x3AE648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE644u;
    // 0x3ae648: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3AE644u, 0x3AE64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE64Cu;
label_3ae64c:
    // 0x3ae64c: 0x8e842958  lw          $a0, 0x2958($s4)
    ctx->pc = 0x3ae64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10584)));
    // 0x3ae650: 0xc096c80  jal         func_25B200
    ctx->pc = 0x3AE650u;
    SET_GPR_U32(ctx, 31, 0x3AE658u);
    ctx->pc = 0x3AE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE650u;
    // 0x3ae654: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x3AE650u, 0x3AE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE658u;
label_3ae658:
    // 0x3ae658: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE658u;
    {
        const bool branch_taken_0x3ae658 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae658) {
            ctx->pc = 0x3AE670u;
            goto label_3ae670;
        }
    }
    ctx->pc = 0x3AE660u;
    // 0x3ae660: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3ae660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ae664: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x3ae664u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x3ae668: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ae668u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ae66c: 0x7e230070  sq          $v1, 0x70($s1)
    ctx->pc = 0x3ae66cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 3));
label_3ae670:
    // 0x3ae670: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AE670u;
    {
        const bool branch_taken_0x3ae670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae670) {
            ctx->pc = 0x3AE688u;
            goto label_3ae688;
        }
    }
    ctx->pc = 0x3AE678u;
    // 0x3ae678: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3ae678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3ae67c: 0x7e030040  sq          $v1, 0x40($s0)
    ctx->pc = 0x3ae67cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
    // 0x3ae680: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ae680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ae684: 0x7e030070  sq          $v1, 0x70($s0)
    ctx->pc = 0x3ae684u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 3));
label_3ae688:
    // 0x3ae688: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE688u;
    {
        const bool branch_taken_0x3ae688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ae688) {
            ctx->pc = 0x3AE698u;
            goto label_3ae698;
        }
    }
    ctx->pc = 0x3AE690u;
    // 0x3ae690: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x3ae690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ae694: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x3ae694u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
label_3ae698:
    // 0x3ae698: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3ae698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ae69c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3ae69cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ae6a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ae6a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3ae6a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ae6a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ae6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ae6ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3ae6acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae6b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ae6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae6b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ae6b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae6b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ae6b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae6bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ae6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6C0u;
        // 0x3ae6c4: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE6C8u;
}
