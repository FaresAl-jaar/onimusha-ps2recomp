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

// Function: sub_003039F0
// Address: 0x3039f0 - 0x303c70
void sub_003039F0_0x3039f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003039F0_0x3039f0");
#endif

    switch (ctx->pc) {
        case 0x303a04u: goto label_303a04;
        case 0x303a40u: goto label_303a40;
        case 0x303a70u: goto label_303a70;
        case 0x303bb0u: goto label_303bb0;
        case 0x303c10u: goto label_303c10;
        default: break;
    }

    ctx->pc = 0x3039f0u;

    // 0x3039f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3039f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3039f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3039f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3039f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3039f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3039fc: 0xc0c0c4c  jal         func_303130
    ctx->pc = 0x3039FCu;
    SET_GPR_U32(ctx, 31, 0x303A04u);
    ctx->pc = 0x303A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3039FCu;
    // 0x303a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303130u, 0x3039FCu, 0x303A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303A04u;
label_303a04:
    // 0x303a04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x303A04u;
    {
        const bool branch_taken_0x303a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x303a04) {
            ctx->pc = 0x303A18u;
            goto label_303a18;
        }
    }
    ctx->pc = 0x303A0Cu;
    // 0x303a0c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x303A0Cu;
    {
        const bool branch_taken_0x303a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A0Cu;
        // 0x303a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a0c) {
            ctx->pc = 0x303C60u;
            goto label_303c60;
        }
    }
    ctx->pc = 0x303A14u;
    // 0x303a14: 0x0  nop
    ctx->pc = 0x303a14u;
    // NOP
label_303a18:
    // 0x303a18: 0x8e021d04  lw          $v0, 0x1D04($s0)
    ctx->pc = 0x303a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303a1c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x303A1Cu;
    {
        const bool branch_taken_0x303a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a1c) {
            ctx->pc = 0x303B80u;
            goto label_303b80;
        }
    }
    ctx->pc = 0x303A24u;
    // 0x303a24: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x303a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x303a28: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x303a28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x303a2c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x303a2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303a30: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x303A30u;
    {
        const bool branch_taken_0x303a30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A30u;
        // 0x303a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a30) {
            ctx->pc = 0x303B80u;
            goto label_303b80;
        }
    }
    ctx->pc = 0x303A38u;
    // 0x303a38: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x303a38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303a3c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x303a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_303a40:
    // 0x303a40: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x303a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x303a44: 0x94a90008  lhu         $t1, 0x8($a1)
    ctx->pc = 0x303a44u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x303a48: 0x94a8000a  lhu         $t0, 0xA($a1)
    ctx->pc = 0x303a48u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x303a4c: 0x92203  sra         $a0, $t1, 8
    ctx->pc = 0x303a4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 9), 8));
    // 0x303a50: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x303a50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x303a54: 0xa4a80008  sh          $t0, 0x8($a1)
    ctx->pc = 0x303a54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x303a58: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x303a58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x303a5c: 0x90a90007  lbu         $t1, 0x7($a1)
    ctx->pc = 0x303a5cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x303a60: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x303a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x303a64: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
    ctx->pc = 0x303A64u;
    {
        const bool branch_taken_0x303a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A64u;
        // 0x303a68: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a64) {
            ctx->pc = 0x303B68u;
            goto label_303b68;
        }
    }
    ctx->pc = 0x303A6Cu;
    // 0x303a6c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x303a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_303a70:
    // 0x303a70: 0x8d4b000c  lw          $t3, 0xC($t2)
    ctx->pc = 0x303a70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x303a74: 0xb7602  srl         $t6, $t3, 24
    ctx->pc = 0x303a74u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 11), 24));
    // 0x303a78: 0x15c40007  bne         $t6, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x303A78u;
    {
        const bool branch_taken_0x303a78 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 4));
        if (branch_taken_0x303a78) {
            ctx->pc = 0x303A98u;
            goto label_303a98;
        }
    }
    ctx->pc = 0x303A80u;
    // 0x303a80: 0xb223c  dsll32      $a0, $t3, 8
    ctx->pc = 0x303a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << (32 + 8));
    // 0x303a84: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x303a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x303a88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x303a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x303a8c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x303A8Cu;
    {
        const bool branch_taken_0x303a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303A8Cu;
        // 0x303a90: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303a8c) {
            ctx->pc = 0x303B68u;
            goto label_303b68;
        }
    }
    ctx->pc = 0x303A94u;
    // 0x303a94: 0x0  nop
    ctx->pc = 0x303a94u;
    // NOP
label_303a98:
    // 0x303a98: 0x8e082b  sltu        $at, $a0, $t6
    ctx->pc = 0x303a98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x303a9c: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x303A9Cu;
    {
        const bool branch_taken_0x303a9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x303a9c) {
            ctx->pc = 0x303B58u;
            goto label_303b58;
        }
    }
    ctx->pc = 0x303AA4u;
    // 0x303aa4: 0x11800026  beqz        $t4, . + 4 + (0x26 << 2)
    ctx->pc = 0x303AA4u;
    {
        const bool branch_taken_0x303aa4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x303AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303AA4u;
        // 0x303aa8: 0xc4880  sll         $t1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303aa4) {
            ctx->pc = 0x303B40u;
            goto label_303b40;
        }
    }
    ctx->pc = 0x303AACu;
    // 0x303aac: 0xb4402  srl         $t0, $t3, 16
    ctx->pc = 0x303aacu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x303ab0: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x303ab0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x303ab4: 0x310a00ff  andi        $t2, $t0, 0xFF
    ctx->pc = 0x303ab4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x303ab8: 0x8d2f0008  lw          $t7, 0x8($t1)
    ctx->pc = 0x303ab8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x303abc: 0xb4202  srl         $t0, $t3, 8
    ctx->pc = 0x303abcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 8));
    // 0x303ac0: 0xf6e02  srl         $t5, $t7, 24
    ctx->pc = 0x303ac0u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 15), 24));
    // 0x303ac4: 0x310900ff  andi        $t1, $t0, 0xFF
    ctx->pc = 0x303ac4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x303ac8: 0x8d6023  subu        $t4, $a0, $t5
    ctx->pc = 0x303ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x303acc: 0x316800ff  andi        $t0, $t3, 0xFF
    ctx->pc = 0x303accu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x303ad0: 0x1cd2023  subu        $a0, $t6, $t5
    ctx->pc = 0x303ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x303ad4: 0xc6200  sll         $t4, $t4, 8
    ctx->pc = 0x303ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x303ad8: 0x184001b  divu        $zero, $t4, $a0
    ctx->pc = 0x303ad8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x303adc: 0xf5a02  srl         $t3, $t7, 8
    ctx->pc = 0x303adcu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 15), 8));
    // 0x303ae0: 0x316d00ff  andi        $t5, $t3, 0xFF
    ctx->pc = 0x303ae0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x303ae4: 0x31eb00ff  andi        $t3, $t7, 0xFF
    ctx->pc = 0x303ae4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x303ae8: 0x12d4823  subu        $t1, $t1, $t5
    ctx->pc = 0x303ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x303aec: 0xf2402  srl         $a0, $t7, 16
    ctx->pc = 0x303aecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x303af0: 0x308c00ff  andi        $t4, $a0, 0xFF
    ctx->pc = 0x303af0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x303af4: 0x7012  mflo        $t6
    ctx->pc = 0x303af4u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x303af8: 0x14c5023  subu        $t2, $t2, $t4
    ctx->pc = 0x303af8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x303afc: 0x10b2023  subu        $a0, $t0, $t3
    ctx->pc = 0x303afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x303b00: 0x1ca5018  mult        $t2, $t6, $t2
    ctx->pc = 0x303b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x303b04: 0x71c94018  mult1       $t0, $t6, $t1
    ctx->pc = 0x303b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x303b08: 0x84202  srl         $t0, $t0, 8
    ctx->pc = 0x303b08u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x303b0c: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x303b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x303b10: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x303b10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x303b14: 0x1c42018  mult        $a0, $t6, $a0
    ctx->pc = 0x303b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x303b18: 0xa4a02  srl         $t1, $t2, 8
    ctx->pc = 0x303b18u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 8));
    // 0x303b1c: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x303b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x303b20: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x303b20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x303b24: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x303b24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x303b28: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x303b28u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x303b2c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x303b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x303b30: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x303b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x303b34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x303b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x303b38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x303B38u;
    {
        const bool branch_taken_0x303b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B38u;
        // 0x303b3c: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b38) {
            ctx->pc = 0x303B68u;
            goto label_303b68;
        }
    }
    ctx->pc = 0x303B40u;
label_303b40:
    // 0x303b40: 0xb223c  dsll32      $a0, $t3, 8
    ctx->pc = 0x303b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) << (32 + 8));
    // 0x303b44: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x303b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x303b48: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x303b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x303b4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x303B4Cu;
    {
        const bool branch_taken_0x303b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B4Cu;
        // 0x303b50: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b4c) {
            ctx->pc = 0x303B68u;
            goto label_303b68;
        }
    }
    ctx->pc = 0x303B54u;
    // 0x303b54: 0x0  nop
    ctx->pc = 0x303b54u;
    // NOP
label_303b58:
    // 0x303b58: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x303b58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x303b5c: 0x189402b  sltu        $t0, $t4, $t1
    ctx->pc = 0x303b5cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x303b60: 0x1500ffc3  bnez        $t0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x303B60u;
    {
        const bool branch_taken_0x303b60 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B60u;
        // 0x303b64: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b60) {
            ctx->pc = 0x303A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303a70;
        }
    }
    ctx->pc = 0x303B68u;
label_303b68:
    // 0x303b68: 0x94e40000  lhu         $a0, 0x0($a3)
    ctx->pc = 0x303b68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x303b6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x303b70: 0xc4202b  sltu        $a0, $a2, $a0
    ctx->pc = 0x303b70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x303b74: 0x1480ffb2  bnez        $a0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x303B74u;
    {
        const bool branch_taken_0x303b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x303B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303B74u;
        // 0x303b78: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303b74) {
            ctx->pc = 0x303A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303a40;
        }
    }
    ctx->pc = 0x303B7Cu;
    // 0x303b7c: 0x0  nop
    ctx->pc = 0x303b7cu;
    // NOP
label_303b80:
    // 0x303b80: 0x8e021d04  lw          $v0, 0x1D04($s0)
    ctx->pc = 0x303b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303b84: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x303B84u;
    {
        const bool branch_taken_0x303b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b84) {
            ctx->pc = 0x303C58u;
            goto label_303c58;
        }
    }
    ctx->pc = 0x303B8Cu;
    // 0x303b8c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x303b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x303b90: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x303b90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x303b94: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x303B94u;
    {
        const bool branch_taken_0x303b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303b94) {
            ctx->pc = 0x303C58u;
            goto label_303c58;
        }
    }
    ctx->pc = 0x303B9Cu;
    // 0x303b9c: 0x8e031c00  lw          $v1, 0x1C00($s0)
    ctx->pc = 0x303b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7168)));
    // 0x303ba0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x303ba0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303ba4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x303BA4u;
    {
        const bool branch_taken_0x303ba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BA4u;
        // 0x303ba8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303ba4) {
            ctx->pc = 0x303BF8u;
            goto label_303bf8;
        }
    }
    ctx->pc = 0x303BACu;
    // 0x303bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_303bb0:
    // 0x303bb0: 0x8c851c04  lw          $a1, 0x1C04($a0)
    ctx->pc = 0x303bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7172)));
    // 0x303bb4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x303bb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x303bb8: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x303bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x303bbc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x303BBCu;
    {
        const bool branch_taken_0x303bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303bbc) {
            ctx->pc = 0x303BE0u;
            goto label_303be0;
        }
    }
    ctx->pc = 0x303BC4u;
    // 0x303bc4: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x303bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x303bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303bcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x303bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303bd0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x303bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x303bd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x303bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303bd8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x303bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x303bdc: 0x0  nop
    ctx->pc = 0x303bdcu;
    // NOP
label_303be0:
    // 0x303be0: 0x8e031c00  lw          $v1, 0x1C00($s0)
    ctx->pc = 0x303be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7168)));
    // 0x303be4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x303be8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x303be8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303bec: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x303BECu;
    {
        const bool branch_taken_0x303bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303BECu;
        // 0x303bf0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303bec) {
            ctx->pc = 0x303BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303bb0;
        }
    }
    ctx->pc = 0x303BF4u;
    // 0x303bf4: 0x0  nop
    ctx->pc = 0x303bf4u;
    // NOP
label_303bf8:
    // 0x303bf8: 0x8e041d04  lw          $a0, 0x1D04($s0)
    ctx->pc = 0x303bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303bfc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x303bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x303c00: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x303c00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303c04: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x303C04u;
    {
        const bool branch_taken_0x303c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x303C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C04u;
        // 0x303c08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c04) {
            ctx->pc = 0x303C58u;
            goto label_303c58;
        }
    }
    ctx->pc = 0x303C0Cu;
    // 0x303c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_303c10:
    // 0x303c10: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x303c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x303c14: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x303c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x303c18: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x303c18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x303c1c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x303c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x303c20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x303C20u;
    {
        const bool branch_taken_0x303c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c20) {
            ctx->pc = 0x303C40u;
            goto label_303c40;
        }
    }
    ctx->pc = 0x303C28u;
    // 0x303c28: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x303c28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x303c2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x303c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x303c30: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x303c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303c34: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x303c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x303c38: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x303c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x303c3c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x303c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_303c40:
    // 0x303c40: 0x8e041d04  lw          $a0, 0x1D04($s0)
    ctx->pc = 0x303c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7428)));
    // 0x303c44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x303c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x303c48: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x303c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x303c4c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x303c4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303c50: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x303C50u;
    {
        const bool branch_taken_0x303c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C50u;
        // 0x303c54: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303c50) {
            ctx->pc = 0x303C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303c10;
        }
    }
    ctx->pc = 0x303C58u;
label_303c58:
    // 0x303c58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x303c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303c5c: 0x0  nop
    ctx->pc = 0x303c5cu;
    // NOP
label_303c60:
    // 0x303c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303c68: 0x3e00008  jr          $ra
    ctx->pc = 0x303C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303C68u;
        // 0x303c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x303C70u;
}
