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

// Function: sub_001979F0
// Address: 0x1979f0 - 0x197f9c
void sub_001979F0_0x1979f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001979F0_0x1979f0");
#endif

    switch (ctx->pc) {
        case 0x197aa0u: goto label_197aa0;
        case 0x197b08u: goto label_197b08;
        case 0x197b3cu: goto label_197b3c;
        case 0x197b68u: goto label_197b68;
        case 0x197bb0u: goto label_197bb0;
        case 0x197bc8u: goto label_197bc8;
        case 0x197d44u: goto label_197d44;
        case 0x197d88u: goto label_197d88;
        case 0x197da0u: goto label_197da0;
        case 0x197e1cu: goto label_197e1c;
        case 0x197e44u: goto label_197e44;
        case 0x197ebcu: goto label_197ebc;
        case 0x197f24u: goto label_197f24;
        case 0x197f6cu: goto label_197f6c;
        default: break;
    }

    ctx->pc = 0x1979f0u;

    // 0x1979f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1979f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1979f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1979f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1979f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1979fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1979fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x197a00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x197a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x197a04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x197a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x197a08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x197a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x197a0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x197a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x197a10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x197a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x197a14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x197a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x197a18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197a1c: 0xaf828764  sw          $v0, -0x789C($gp)
    ctx->pc = 0x197a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 2));
    // 0x197a20: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x197a24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x197a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x197a28: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x197A28u;
    {
        const bool branch_taken_0x197a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A28u;
        // 0x197a2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a28) {
            ctx->pc = 0x197AA0u;
            goto label_197aa0;
        }
    }
    ctx->pc = 0x197A30u;
    // 0x197a30: 0x820a004e  lb          $t2, 0x4E($s0)
    ctx->pc = 0x197a30u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 78)));
    // 0x197a34: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x197a38: 0x8206004a  lb          $a2, 0x4A($s0)
    ctx->pc = 0x197a38u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197a3c: 0x24a5dac0  addiu       $a1, $a1, -0x2540
    ctx->pc = 0x197a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957760));
    // 0x197a40: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197a44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a48: 0x860b0090  lh          $t3, 0x90($s0)
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x197a4c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x197a4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a50: 0x86070092  lh          $a3, 0x92($s0)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x197a54: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x197a58: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x197a5c: 0x25040  sll         $t2, $v0, 1
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x197a60: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x197a64: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x197a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x197a68: 0x465023  subu        $t2, $v0, $a2
    ctx->pc = 0x197a68u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x197a6c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x197a70: 0xa30c0  sll         $a2, $t2, 3
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x197a74: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a78: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x197a7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197a80: 0x1663021  addu        $a2, $t3, $a2
    ctx->pc = 0x197a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x197a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a88: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x197a88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x197a8c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x197a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x197a90: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x197a90u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x197a94: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x197a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197a98: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x197A98u;
    SET_GPR_U32(ctx, 31, 0x197AA0u);
    ctx->pc = 0x197A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A98u;
    // 0x197a9c: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x197A98u, 0x197AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197AA0u;
label_197aa0:
    // 0x197aa0: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x197aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x197aa4: 0x86130092  lh          $s3, 0x92($s0)
    ctx->pc = 0x197aa4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x197aa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x197AA8u;
    {
        const bool branch_taken_0x197aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AA8u;
        // 0x197aac: 0x86140090  lh          $s4, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197aa8) {
            ctx->pc = 0x197AD8u;
            goto label_197ad8;
        }
    }
    ctx->pc = 0x197AB0u;
    // 0x197ab0: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x197ab0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197ab4: 0x2694ffcf  addiu       $s4, $s4, -0x31
    ctx->pc = 0x197ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967247));
    // 0x197ab8: 0x8217004d  lb          $s7, 0x4D($s0)
    ctx->pc = 0x197ab8u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197abc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x197abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ac0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x197ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197ac4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x197ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x197ac8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x197ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197acc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x197ad0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x197AD0u;
    {
        const bool branch_taken_0x197ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197AD0u;
        // 0x197ad4: 0x43a823  subu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ad0) {
            ctx->pc = 0x197B00u;
            goto label_197b00;
        }
    }
    ctx->pc = 0x197AD8u;
label_197ad8:
    // 0x197ad8: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x197ad8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197adc: 0x8217004c  lb          $s7, 0x4C($s0)
    ctx->pc = 0x197adcu;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197ae0: 0x2673ffc7  addiu       $s3, $s3, -0x39
    ctx->pc = 0x197ae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967239));
    // 0x197ae4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x197ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ae8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x197ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197aec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x197aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x197af0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x197af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197af4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x197af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x197af8: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x197af8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197afc: 0x0  nop
    ctx->pc = 0x197afcu;
    // NOP
label_197b00:
    // 0x197b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b04: 0x0  nop
    ctx->pc = 0x197b04u;
    // NOP
label_197b08:
    // 0x197b08: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x197b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x197b0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x197b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x197b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b14: 0x2428806  srlv        $s1, $v0, $s2
    ctx->pc = 0x197b14u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x197b18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x197b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b1c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x197b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x197b20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x197b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b24: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x197b28: 0x80630002  lb          $v1, 0x2($v1)
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x197b2c: 0x514024  and         $t0, $v0, $s1
    ctx->pc = 0x197b2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x197b30: 0x34620080  ori         $v0, $v1, 0x80
    ctx->pc = 0x197b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x197b34: 0xc065fe8  jal         func_197FA0
    ctx->pc = 0x197B34u;
    SET_GPR_U32(ctx, 31, 0x197B3Cu);
    ctx->pc = 0x197B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B34u;
    // 0x197b38: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FA0u, 0x197B34u, 0x197B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B3Cu;
label_197b3c:
    // 0x197b3c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x197b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x197b40: 0x2952821  addu        $a1, $s4, $s5
    ctx->pc = 0x197b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x197b44: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x197b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x197b48: 0x2763021  addu        $a2, $s3, $s6
    ctx->pc = 0x197b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x197b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b50: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x197b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x197b54: 0x514024  and         $t0, $v0, $s1
    ctx->pc = 0x197b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x197b58: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x197b5c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x197b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x197b60: 0xc065fe8  jal         func_197FA0
    ctx->pc = 0x197B60u;
    SET_GPR_U32(ctx, 31, 0x197B68u);
    ctx->pc = 0x197B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B60u;
    // 0x197b64: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FA0u, 0x197B60u, 0x197B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B68u;
label_197b68:
    // 0x197b68: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x197b68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x197b6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B6Cu;
    {
        const bool branch_taken_0x197b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197b6c) {
            ctx->pc = 0x197B80u;
            goto label_197b80;
        }
    }
    ctx->pc = 0x197B74u;
    // 0x197b74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x197B74u;
    {
        const bool branch_taken_0x197b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B74u;
        // 0x197b78: 0x26940031  addiu       $s4, $s4, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b74) {
            ctx->pc = 0x197B88u;
            goto label_197b88;
        }
    }
    ctx->pc = 0x197B7Cu;
    // 0x197b7c: 0x0  nop
    ctx->pc = 0x197b7cu;
    // NOP
label_197b80:
    // 0x197b80: 0x26730039  addiu       $s3, $s3, 0x39
    ctx->pc = 0x197b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 57));
    // 0x197b84: 0x0  nop
    ctx->pc = 0x197b84u;
    // NOP
label_197b88:
    // 0x197b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x197b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x197b8c: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x197b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x197b90: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x197B90u;
    {
        const bool branch_taken_0x197b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b90) {
            ctx->pc = 0x197B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197b08;
        }
    }
    ctx->pc = 0x197B98u;
    // 0x197b98: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x197b98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197b9c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x197b9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197ba0: 0x10200073  beqz        $at, . + 4 + (0x73 << 2)
    ctx->pc = 0x197BA0u;
    {
        const bool branch_taken_0x197ba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BA0u;
        // 0x197ba4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ba0) {
            ctx->pc = 0x197D70u;
            goto label_197d70;
        }
    }
    ctx->pc = 0x197BA8u;
    // 0x197ba8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x197ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bac: 0x0  nop
    ctx->pc = 0x197bacu;
    // NOP
label_197bb0:
    // 0x197bb0: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x197bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197bb4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x197bb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197bb8: 0x10200067  beqz        $at, . + 4 + (0x67 << 2)
    ctx->pc = 0x197BB8u;
    {
        const bool branch_taken_0x197bb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BB8u;
        // 0x197bbc: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bb8) {
            ctx->pc = 0x197D58u;
            goto label_197d58;
        }
    }
    ctx->pc = 0x197BC0u;
    // 0x197bc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bc4: 0x0  nop
    ctx->pc = 0x197bc4u;
    // NOP
label_197bc8:
    // 0x197bc8: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x197bcc: 0x86050090  lh          $a1, 0x90($s0)
    ctx->pc = 0x197bccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x197bd0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x197bd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x197bd4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x197bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x197bd8: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x197bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x197bdc: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x197BDCu;
    {
        const bool branch_taken_0x197bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BDCu;
        // 0x197be0: 0x923021  addu        $a2, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bdc) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197BE4u;
    // 0x197be4: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x197be4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197be8: 0x16830025  bne         $s4, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x197BE8u;
    {
        const bool branch_taken_0x197be8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x197be8) {
            ctx->pc = 0x197C80u;
            goto label_197c80;
        }
    }
    ctx->pc = 0x197BF0u;
    // 0x197bf0: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197bf4: 0x16630010  bne         $s3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x197BF4u;
    {
        const bool branch_taken_0x197bf4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x197bf4) {
            ctx->pc = 0x197C38u;
            goto label_197c38;
        }
    }
    ctx->pc = 0x197BFCu;
    // 0x197bfc: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x197bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197c00: 0x3c033f44  lui         $v1, 0x3F44
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16196 << 16));
    // 0x197c04: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x197c04u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197c08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197c08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197c0c: 0x0  nop
    ctx->pc = 0x197c0cu;
    // NOP
    // 0x197c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197c14: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x197c14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197c18: 0x0  nop
    ctx->pc = 0x197c18u;
    // NOP
    // 0x197c1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x197c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x197c20: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x197c20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x197c24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x197c24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x197c28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197c28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197c2c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x197c2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x197c30: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x197C30u;
    {
        const bool branch_taken_0x197c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c30) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197C38u;
label_197c38:
    // 0x197c38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197c3c: 0x16630036  bne         $s3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x197C3Cu;
    {
        const bool branch_taken_0x197c3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x197c3c) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197C44u;
    // 0x197c44: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x197c44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197c48: 0x3c033f44  lui         $v1, 0x3F44
    ctx->pc = 0x197c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16196 << 16));
    // 0x197c4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x197c4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197c50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197c54: 0x0  nop
    ctx->pc = 0x197c54u;
    // NOP
    // 0x197c58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197c58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197c5c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x197c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197c60: 0x0  nop
    ctx->pc = 0x197c60u;
    // NOP
    // 0x197c64: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x197c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x197c68: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x197c68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x197c6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x197c6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x197c70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197c70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197c74: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x197c74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x197c78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x197C78u;
    {
        const bool branch_taken_0x197c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c78) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197C80u;
label_197c80:
    // 0x197c80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197c84: 0x16830024  bne         $s4, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x197C84u;
    {
        const bool branch_taken_0x197c84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x197c84) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197C8Cu;
    // 0x197c8c: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x197c8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197c90: 0x16630011  bne         $s3, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x197C90u;
    {
        const bool branch_taken_0x197c90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x197c90) {
            ctx->pc = 0x197CD8u;
            goto label_197cd8;
        }
    }
    ctx->pc = 0x197C98u;
    // 0x197c98: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197c9c: 0x3c033f44  lui         $v1, 0x3F44
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16196 << 16));
    // 0x197ca0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x197ca0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197ca4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197ca8: 0x0  nop
    ctx->pc = 0x197ca8u;
    // NOP
    // 0x197cac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197cb0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x197cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197cb4: 0x0  nop
    ctx->pc = 0x197cb4u;
    // NOP
    // 0x197cb8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x197cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x197cbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x197cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x197cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x197cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x197cc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197cc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197cc8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x197cc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x197ccc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x197CCCu;
    {
        const bool branch_taken_0x197ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ccc) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197CD4u;
    // 0x197cd4: 0x0  nop
    ctx->pc = 0x197cd4u;
    // NOP
label_197cd8:
    // 0x197cd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197cdc: 0x1663000e  bne         $s3, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x197CDCu;
    {
        const bool branch_taken_0x197cdc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x197cdc) {
            ctx->pc = 0x197D18u;
            goto label_197d18;
        }
    }
    ctx->pc = 0x197CE4u;
    // 0x197ce4: 0x86040012  lh          $a0, 0x12($s0)
    ctx->pc = 0x197ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x197ce8: 0x3c033f44  lui         $v1, 0x3F44
    ctx->pc = 0x197ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16196 << 16));
    // 0x197cec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x197cecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197cf0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197cf4: 0x0  nop
    ctx->pc = 0x197cf4u;
    // NOP
    // 0x197cf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x197cf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x197cfc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x197cfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197d00: 0x0  nop
    ctx->pc = 0x197d00u;
    // NOP
    // 0x197d04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x197d04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x197d08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x197d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x197d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x197d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x197d10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197d14: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x197d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_197d18:
    // 0x197d18: 0x2143821  addu        $a3, $s0, $s4
    ctx->pc = 0x197d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x197d1c: 0x2624818  mult        $t1, $s3, $v0
    ctx->pc = 0x197d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x197d20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d28: 0xe94021  addu        $t0, $a3, $t1
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x197d2c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x197d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x197d30: 0x2893821  addu        $a3, $s4, $t1
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x197d34: 0xe31804  sllv        $v1, $v1, $a3
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x197d38: 0x9107004f  lbu         $a3, 0x4F($t0)
    ctx->pc = 0x197d38u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 79)));
    // 0x197d3c: 0xc065fe8  jal         func_197FA0
    ctx->pc = 0x197D3Cu;
    SET_GPR_U32(ctx, 31, 0x197D44u);
    ctx->pc = 0x197D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197D3Cu;
    // 0x197d40: 0x434024  and         $t0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197FA0u, 0x197D3Cu, 0x197D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197D44u;
label_197d44:
    // 0x197d44: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x197d44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197d48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x197d48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x197d4c: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x197d4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197d50: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x197D50u;
    {
        const bool branch_taken_0x197d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D50u;
        // 0x197d54: 0x26310031  addiu       $s1, $s1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d50) {
            ctx->pc = 0x197BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197bc8;
        }
    }
    ctx->pc = 0x197D58u;
label_197d58:
    // 0x197d58: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x197d58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197d5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x197d5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x197d60: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x197d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197d64: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x197D64u;
    {
        const bool branch_taken_0x197d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D64u;
        // 0x197d68: 0x26520039  addiu       $s2, $s2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d64) {
            ctx->pc = 0x197BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197bb0;
        }
    }
    ctx->pc = 0x197D6Cu;
    // 0x197d6c: 0x0  nop
    ctx->pc = 0x197d6cu;
    // NOP
label_197d70:
    // 0x197d70: 0xaf808764  sw          $zero, -0x789C($gp)
    ctx->pc = 0x197d70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936420), GPR_U32(ctx, 0));
    // 0x197d74: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197d78: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x197d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197d7c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x197D7Cu;
    {
        const bool branch_taken_0x197d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D7Cu;
        // 0x197d80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d7c) {
            ctx->pc = 0x197E70u;
            goto label_197e70;
        }
    }
    ctx->pc = 0x197D84u;
    // 0x197d84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x197d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197d88:
    // 0x197d88: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197d8c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x197d8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197d90: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x197D90u;
    {
        const bool branch_taken_0x197d90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197D90u;
        // 0x197d94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d90) {
            ctx->pc = 0x197E58u;
            goto label_197e58;
        }
    }
    ctx->pc = 0x197D98u;
    // 0x197d98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x197d98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d9c: 0x0  nop
    ctx->pc = 0x197d9cu;
    // NOP
label_197da0:
    // 0x197da0: 0x86030090  lh          $v1, 0x90($s0)
    ctx->pc = 0x197da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x197da4: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x197da8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x197da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dac: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x197db0: 0x759021  addu        $s2, $v1, $s5
    ctx->pc = 0x197db0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x197db4: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x197DB4u;
    {
        const bool branch_taken_0x197db4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x197DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DB4u;
        // 0x197db8: 0x568821  addu        $s1, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197db4) {
            ctx->pc = 0x197DF8u;
            goto label_197df8;
        }
    }
    ctx->pc = 0x197DBCu;
    // 0x197dbc: 0x8202004a  lb          $v0, 0x4A($s0)
    ctx->pc = 0x197dbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x197dc0: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197DC0u;
    {
        const bool branch_taken_0x197dc0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x197dc0) {
            ctx->pc = 0x197DD8u;
            goto label_197dd8;
        }
    }
    ctx->pc = 0x197DC8u;
    // 0x197dc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197dcc: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x197DCCu;
    {
        const bool branch_taken_0x197dcc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x197dcc) {
            ctx->pc = 0x197DF8u;
            goto label_197df8;
        }
    }
    ctx->pc = 0x197DD4u;
    // 0x197dd4: 0x0  nop
    ctx->pc = 0x197dd4u;
    // NOP
label_197dd8:
    // 0x197dd8: 0x8202004b  lb          $v0, 0x4B($s0)
    ctx->pc = 0x197dd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x197ddc: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197DDCu;
    {
        const bool branch_taken_0x197ddc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x197ddc) {
            ctx->pc = 0x197DF0u;
            goto label_197df0;
        }
    }
    ctx->pc = 0x197DE4u;
    // 0x197de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x197de8: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x197DE8u;
    {
        const bool branch_taken_0x197de8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x197de8) {
            ctx->pc = 0x197DF8u;
            goto label_197df8;
        }
    }
    ctx->pc = 0x197DF0u;
label_197df0:
    // 0x197df0: 0x3082003f  andi        $v0, $a0, 0x3F
    ctx->pc = 0x197df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x197df4: 0x24490080  addiu       $t1, $v0, 0x80
    ctx->pc = 0x197df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_197df8:
    // 0x197df8: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x197df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x197dfc: 0x113c3c  dsll32      $a3, $s1, 16
    ctx->pc = 0x197dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 16));
    // 0x197e00: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x197e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x197e04: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x197e04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x197e08: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x197e08u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x197e0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e10: 0x24a5dace  addiu       $a1, $a1, -0x2532
    ctx->pc = 0x197e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957774));
    // 0x197e14: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x197E14u;
    SET_GPR_U32(ctx, 31, 0x197E1Cu);
    ctx->pc = 0x197E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E14u;
    // 0x197e18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x197E14u, 0x197E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E1Cu;
label_197e1c:
    // 0x197e1c: 0x12343c  dsll32      $a2, $s2, 16
    ctx->pc = 0x197e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 16));
    // 0x197e20: 0x113c3c  dsll32      $a3, $s1, 16
    ctx->pc = 0x197e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) << (32 + 16));
    // 0x197e24: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x197e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x197e28: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x197e28u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x197e2c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x197e2cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x197e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e34: 0x24a5dadc  addiu       $a1, $a1, -0x2524
    ctx->pc = 0x197e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957788));
    // 0x197e38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x197e38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e3c: 0xc066ec4  jal         func_19BB10
    ctx->pc = 0x197E3Cu;
    SET_GPR_U32(ctx, 31, 0x197E44u);
    ctx->pc = 0x197E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197E3Cu;
    // 0x197e40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB10u, 0x197E3Cu, 0x197E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197E44u;
label_197e44:
    // 0x197e44: 0x8202004c  lb          $v0, 0x4C($s0)
    ctx->pc = 0x197e44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x197e48: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x197e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x197e4c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x197e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197e50: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x197E50u;
    {
        const bool branch_taken_0x197e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E50u;
        // 0x197e54: 0x26b50031  addiu       $s5, $s5, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e50) {
            ctx->pc = 0x197DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197da0;
        }
    }
    ctx->pc = 0x197E58u;
label_197e58:
    // 0x197e58: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x197e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x197e5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x197e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x197e60: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x197e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x197e64: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x197E64u;
    {
        const bool branch_taken_0x197e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E64u;
        // 0x197e68: 0x26d60039  addiu       $s6, $s6, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e64) {
            ctx->pc = 0x197D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197d88;
        }
    }
    ctx->pc = 0x197E6Cu;
    // 0x197e6c: 0x0  nop
    ctx->pc = 0x197e6cu;
    // NOP
label_197e70:
    // 0x197e70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x197e74: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x197e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x197e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197e7c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x197E7Cu;
    {
        const bool branch_taken_0x197e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197E7Cu;
        // 0x197e80: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e7c) {
            ctx->pc = 0x197EC8u;
            goto label_197ec8;
        }
    }
    ctx->pc = 0x197E84u;
    // 0x197e84: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x197e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x197e88: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x197e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
    // 0x197e8c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x197e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x197e90: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x197e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x197e94: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x197e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x197e98: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x197e98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x197e9c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x197e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x197ea0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ea4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x197ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x197ea8: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x197eac: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x197eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197eb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x197eb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eb4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x197EB4u;
    SET_GPR_U32(ctx, 31, 0x197EBCu);
    ctx->pc = 0x197EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197EB4u;
    // 0x197eb8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x197EB4u, 0x197EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197EBCu;
label_197ebc:
    // 0x197ebc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x197EBCu;
    {
        const bool branch_taken_0x197ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ebc) {
            ctx->pc = 0x197F70u;
            goto label_197f70;
        }
    }
    ctx->pc = 0x197EC4u;
    // 0x197ec4: 0x0  nop
    ctx->pc = 0x197ec4u;
    // NOP
label_197ec8:
    // 0x197ec8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x197ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x197ecc: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x197eccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x197ed0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x197ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x197ed4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x197ED4u;
    {
        const bool branch_taken_0x197ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197ED4u;
        // 0x197ed8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ed4) {
            ctx->pc = 0x197F30u;
            goto label_197f30;
        }
    }
    ctx->pc = 0x197EDCu;
    // 0x197edc: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x197ee0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x197ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x197ee4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x197EE4u;
    {
        const bool branch_taken_0x197ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EE4u;
        // 0x197ee8: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ee4) {
            ctx->pc = 0x197F30u;
            goto label_197f30;
        }
    }
    ctx->pc = 0x197EECu;
    // 0x197eec: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x197ef0: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
    // 0x197ef4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x197ef8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x197ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x197efc: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x197efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x197f00: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x197f04: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x197f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f0c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x197f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x197f10: 0x24090017  addiu       $t1, $zero, 0x17
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x197f14: 0x240a001f  addiu       $t2, $zero, 0x1F
    ctx->pc = 0x197f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x197f18: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x197f18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f1c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x197F1Cu;
    SET_GPR_U32(ctx, 31, 0x197F24u);
    ctx->pc = 0x197F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F1Cu;
    // 0x197f20: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x197F1Cu, 0x197F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F24u;
label_197f24:
    // 0x197f24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x197F24u;
    {
        const bool branch_taken_0x197f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f24) {
            ctx->pc = 0x197F70u;
            goto label_197f70;
        }
    }
    ctx->pc = 0x197F2Cu;
    // 0x197f2c: 0x0  nop
    ctx->pc = 0x197f2cu;
    // NOP
label_197f30:
    // 0x197f30: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x197f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x197f34: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
    // 0x197f38: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x197f3c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x197f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x197f40: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x197f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x197f44: 0x82020048  lb          $v0, 0x48($s0)
    ctx->pc = 0x197f44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x197f48: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x197f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x197f4c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x197f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x197f50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x197f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f54: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x197f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x197f58: 0x24090017  addiu       $t1, $zero, 0x17
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x197f5c: 0x240a001b  addiu       $t2, $zero, 0x1B
    ctx->pc = 0x197f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x197f60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x197f60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f64: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x197F64u;
    SET_GPR_U32(ctx, 31, 0x197F6Cu);
    ctx->pc = 0x197F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F64u;
    // 0x197f68: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x197F64u, 0x197F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F6Cu;
label_197f6c:
    // 0x197f6c: 0x0  nop
    ctx->pc = 0x197f6cu;
    // NOP
label_197f70:
    // 0x197f70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x197f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x197f74: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x197f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x197f78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x197f78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x197f7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x197f7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x197f80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x197f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197f84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x197f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197f88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x197f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197f8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x197f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197f90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x197f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197f94: 0x3e00008  jr          $ra
    ctx->pc = 0x197F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F94u;
        // 0x197f98: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197F9Cu;
}
