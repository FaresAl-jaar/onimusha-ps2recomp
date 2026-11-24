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

// Function: sub_00196940
// Address: 0x196940 - 0x196bb8
void sub_00196940_0x196940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196940_0x196940");
#endif

    switch (ctx->pc) {
        case 0x196994u: goto label_196994;
        case 0x1969a8u: goto label_1969a8;
        case 0x196a58u: goto label_196a58;
        case 0x196a6cu: goto label_196a6c;
        case 0x196ab8u: goto label_196ab8;
        case 0x196ad4u: goto label_196ad4;
        case 0x196b08u: goto label_196b08;
        case 0x196b1cu: goto label_196b1c;
        case 0x196b48u: goto label_196b48;
        case 0x196b60u: goto label_196b60;
        case 0x196b90u: goto label_196b90;
        default: break;
    }

    ctx->pc = 0x196940u;

    // 0x196940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x196944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196948: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x196948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19694c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19694cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x196950: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x196950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x196954: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196958: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x196958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x19695c: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x19695Cu;
    {
        const bool branch_taken_0x19695c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x196960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19695Cu;
        // 0x196960: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19695c) {
            ctx->pc = 0x196A60u;
            goto label_196a60;
        }
    }
    ctx->pc = 0x196964u;
    // 0x196964: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196964u;
    {
        const bool branch_taken_0x196964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196964) {
            ctx->pc = 0x196978u;
            goto label_196978;
        }
    }
    ctx->pc = 0x19696Cu;
    // 0x19696c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x19696Cu;
    {
        const bool branch_taken_0x19696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19696c) {
            ctx->pc = 0x196B10u;
            goto label_196b10;
        }
    }
    ctx->pc = 0x196974u;
    // 0x196974: 0x0  nop
    ctx->pc = 0x196974u;
    // NOP
label_196978:
    // 0x196978: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x196978u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x19697c: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x196980: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x196980u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x196984: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x196984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x196988: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19698c: 0xc056e04  jal         func_15B810
    ctx->pc = 0x19698Cu;
    SET_GPR_U32(ctx, 31, 0x196994u);
    ctx->pc = 0x196990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19698Cu;
    // 0x196990: 0xa6400012  sh          $zero, 0x12($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x19698Cu, 0x196994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196994u;
label_196994:
    // 0x196994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196998: 0x3c050081  lui         $a1, 0x81
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)129 << 16));
    // 0x19699c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1969a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1969a4: 0x24a50fe0  addiu       $a1, $a1, 0xFE0
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4064));
label_1969a8:
    // 0x1969a8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1969a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1969ac: 0x24420100  addiu       $v0, $v0, 0x100
    ctx->pc = 0x1969acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1969b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1969b4: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x1969b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1969b8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x1969bc: 0x661806  srlv        $v1, $a2, $v1
    ctx->pc = 0x1969bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x1969c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1969c4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1969c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1969c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1969cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1969ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1969d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1969D0u;
    {
        const bool branch_taken_0x1969d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969d0) {
            ctx->pc = 0x196A00u;
            goto label_196a00;
        }
    }
    ctx->pc = 0x1969D8u;
    // 0x1969d8: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x1969d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1969dc: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x1969e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1969e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1969e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1969e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1969e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1969e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1969ec: 0xa6420010  sh          $v0, 0x10($s2)
    ctx->pc = 0x1969ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1969f0: 0x86420012  lh          $v0, 0x12($s2)
    ctx->pc = 0x1969f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x1969f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1969f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1969f8: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x1969f8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x1969fc: 0x0  nop
    ctx->pc = 0x1969fcu;
    // NOP
label_196a00:
    // 0x196a00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x196a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x196a04: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x196a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x196a08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x196A08u;
    {
        const bool branch_taken_0x196a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a08) {
            ctx->pc = 0x1969A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1969a8;
        }
    }
    ctx->pc = 0x196A10u;
    // 0x196a10: 0x86430012  lh          $v1, 0x12($s2)
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x196a14: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196a18: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x196a1c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196a20: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196a24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a30: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x196a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
    // 0x196a34: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x196a34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x196a38: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x196a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
    // 0x196a3c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x196a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x196a40: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x196a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
    // 0x196a44: 0x86450012  lh          $a1, 0x12($s2)
    ctx->pc = 0x196a44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x196a48: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x196a4c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x196a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x196a50: 0xc09565c  jal         func_255970
    ctx->pc = 0x196A50u;
    SET_GPR_U32(ctx, 31, 0x196A58u);
    ctx->pc = 0x196A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A50u;
    // 0x196a54: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x196A50u, 0x196A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A58u;
label_196a58:
    // 0x196a58: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x196A58u;
    {
        const bool branch_taken_0x196a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a58) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196A60u;
label_196a60:
    // 0x196a60: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196a64: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196A64u;
    SET_GPR_U32(ctx, 31, 0x196A6Cu);
    ctx->pc = 0x196A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A64u;
    // 0x196a68: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196A64u, 0x196A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A6Cu;
label_196a6c:
    // 0x196a6c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x196A6Cu;
    {
        const bool branch_taken_0x196a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196a6c) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196A74u;
    // 0x196a74: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x196a78: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196A78u;
    {
        const bool branch_taken_0x196a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a78) {
            ctx->pc = 0x196AB8u;
            goto label_196ab8;
        }
    }
    ctx->pc = 0x196A80u;
    // 0x196a80: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x196a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x196a84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196a88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196a8c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196a90: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x196a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x196a94: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x196a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196a9c: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x196aa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196aac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ab0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196AB0u;
    SET_GPR_U32(ctx, 31, 0x196AB8u);
    ctx->pc = 0x196AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AB0u;
    // 0x196ab4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196AB0u, 0x196AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AB8u;
label_196ab8:
    // 0x196ab8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x196ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x196abc: 0x8c22ea28  lw          $v0, -0x15D8($at)
    ctx->pc = 0x196abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x196ac0: 0x30426000  andi        $v0, $v0, 0x6000
    ctx->pc = 0x196ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
    // 0x196ac4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196AC4u;
    {
        const bool branch_taken_0x196ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AC4u;
        // 0x196ac8: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ac4) {
            ctx->pc = 0x196AE0u;
            goto label_196ae0;
        }
    }
    ctx->pc = 0x196ACCu;
    // 0x196acc: 0xc095150  jal         func_254540
    ctx->pc = 0x196ACCu;
    SET_GPR_U32(ctx, 31, 0x196AD4u);
    ctx->pc = 0x196AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ACCu;
    // 0x196ad0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x196ACCu, 0x196AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AD4u;
label_196ad4:
    // 0x196ad4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x196AD4u;
    {
        const bool branch_taken_0x196ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ad4) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196ADCu;
    // 0x196adc: 0x0  nop
    ctx->pc = 0x196adcu;
    // NOP
label_196ae0:
    // 0x196ae0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x196ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x196ae4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196ae8: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x196ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196aec: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x196af0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x196af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196af8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b00: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x196B00u;
    SET_GPR_U32(ctx, 31, 0x196B08u);
    ctx->pc = 0x196B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B00u;
    // 0x196b04: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x196B00u, 0x196B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B08u;
label_196b08:
    // 0x196b08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x196B08u;
    {
        const bool branch_taken_0x196b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b08) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196B10u;
label_196b10:
    // 0x196b10: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196b14: 0xc063d48  jal         func_18F520
    ctx->pc = 0x196B14u;
    SET_GPR_U32(ctx, 31, 0x196B1Cu);
    ctx->pc = 0x196B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B14u;
    // 0x196b18: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x196B14u, 0x196B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B1Cu;
label_196b1c:
    // 0x196b1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x196B1Cu;
    {
        const bool branch_taken_0x196b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B1Cu;
        // 0x196b20: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b1c) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196B24u;
    // 0x196b24: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x196b28: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x196b2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196b30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196b34: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196b38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x196b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x196b3c: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x196b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x196b40: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x196B40u;
    SET_GPR_U32(ctx, 31, 0x196B48u);
    ctx->pc = 0x196B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B40u;
    // 0x196b44: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x196B40u, 0x196B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B48u;
label_196b48:
    // 0x196b48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x196B48u;
    {
        const bool branch_taken_0x196b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B48u;
        // 0x196b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b48) {
            ctx->pc = 0x196BA0u;
            goto label_196ba0;
        }
    }
    ctx->pc = 0x196B50u;
label_196b50:
    // 0x196b50: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x196b54: 0x2631da30  addiu       $s1, $s1, -0x25D0
    ctx->pc = 0x196b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294957616));
    // 0x196b58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x196b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b5c: 0x0  nop
    ctx->pc = 0x196b5cu;
    // NOP
label_196b60:
    // 0x196b60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196b64: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x196b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x196b68: 0x86420010  lh          $v0, 0x10($s2)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x196b6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x196b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x196b70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x196B70u;
    {
        const bool branch_taken_0x196b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B70u;
        // 0x196b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b70) {
            ctx->pc = 0x196B90u;
            goto label_196b90;
        }
    }
    ctx->pc = 0x196B78u;
    // 0x196b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x196b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x196b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b88: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x196B88u;
    SET_GPR_U32(ctx, 31, 0x196B90u);
    ctx->pc = 0x196B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B88u;
    // 0x196b8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x196B88u, 0x196B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x196b94: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x196b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x196b98: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x196B98u;
    {
        const bool branch_taken_0x196b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B98u;
        // 0x196b9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b98) {
            ctx->pc = 0x196B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196b60;
        }
    }
    ctx->pc = 0x196BA0u;
label_196ba0:
    // 0x196ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x196ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196ba4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x196ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196ba8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x196BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BB0u;
        // 0x196bb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196BB8u;
}
