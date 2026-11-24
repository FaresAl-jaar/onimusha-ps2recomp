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

// Function: sub_002CDA70
// Address: 0x2cda70 - 0x2ce100
void sub_002CDA70_0x2cda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDA70_0x2cda70");
#endif

    switch (ctx->pc) {
        case 0x2cdb00u: goto label_2cdb00;
        case 0x2cdb58u: goto label_2cdb58;
        case 0x2cdb68u: goto label_2cdb68;
        case 0x2cdb78u: goto label_2cdb78;
        case 0x2cdb84u: goto label_2cdb84;
        case 0x2cdd6cu: goto label_2cdd6c;
        case 0x2cdf00u: goto label_2cdf00;
        case 0x2cdf50u: goto label_2cdf50;
        case 0x2cdfb4u: goto label_2cdfb4;
        case 0x2ce004u: goto label_2ce004;
        case 0x2ce0bcu: goto label_2ce0bc;
        case 0x2ce0e8u: goto label_2ce0e8;
        default: break;
    }

    ctx->pc = 0x2cda70u;

    // 0x2cda70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cda74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cda74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cda78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cda78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cda7c: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x2cda7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x2cda80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cda80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cda84: 0x8c23ced4  lw          $v1, -0x312C($at)
    ctx->pc = 0x2cda84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED4u));
    // 0x2cda88: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cda88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cda8c: 0x10640198  beq         $v1, $a0, . + 4 + (0x198 << 2)
    ctx->pc = 0x2CDA8Cu;
    {
        const bool branch_taken_0x2cda8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA8Cu;
        // 0x2cda90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cda8c) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDA94u;
    // 0x2cda94: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cda94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cda98: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2cda98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cda9c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2cda9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cdaa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cdaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cdaa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cdaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cdaa8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cdaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cdaac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CDAACu;
    {
        const bool branch_taken_0x2cdaac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdaac) {
            ctx->pc = 0x2CDAF8u;
            goto label_2cdaf8;
        }
    }
    ctx->pc = 0x2CDAB4u;
    // 0x2cdab4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2cdab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2cdab8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDAB8u;
    {
        const bool branch_taken_0x2cdab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdab8) {
            ctx->pc = 0x2CDAE0u;
            goto label_2cdae0;
        }
    }
    ctx->pc = 0x2CDAC0u;
    // 0x2cdac0: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x2cdac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2cdac4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cdac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cdac8: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2cdac8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2cdacc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cdaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdad0: 0x7c236cb0  sq          $v1, 0x6CB0($at)
    ctx->pc = 0x2cdad0u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x8D6CB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x8D6CB0u, _value); } while (0);
    // 0x2cdad4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cdad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cdad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDAD8u;
    {
        const bool branch_taken_0x2cdad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDAD8u;
        // 0x2cdadc: 0xac226cbc  sw          $v0, 0x6CBC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdad8) {
            ctx->pc = 0x2CDAF8u;
            goto label_2cdaf8;
        }
    }
    ctx->pc = 0x2CDAE0u;
label_2cdae0:
    // 0x2cdae0: 0x78630020  lq          $v1, 0x20($v1)
    ctx->pc = 0x2cdae0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2cdae4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cdae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cdae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cdae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2cdaec: 0x7c236cb0  sq          $v1, 0x6CB0($at)
    ctx->pc = 0x2cdaecu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x8D6CB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x8D6CB0u, _value); } while (0);
    // 0x2cdaf0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cdaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cdaf4: 0xac226cbc  sw          $v0, 0x6CBC($at)
    ctx->pc = 0x2cdaf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D6CBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8D6CBCu, _value); } while (0);
label_2cdaf8:
    // 0x2cdaf8: 0xc0b33f8  jal         func_2CCFE0
    ctx->pc = 0x2CDAF8u;
    SET_GPR_U32(ctx, 31, 0x2CDB00u);
    ctx->pc = 0x2CCFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCFE0u, 0x2CDAF8u, 0x2CDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB00u;
label_2cdb00:
    // 0x2cdb00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdb04: 0x3c048ff8  lui         $a0, 0x8FF8
    ctx->pc = 0x2cdb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36856 << 16));
    // 0x2cdb08: 0x8c23cec4  lw          $v1, -0x313C($at)
    ctx->pc = 0x2cdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x2cdb0c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cdb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cdb10: 0x10640177  beq         $v1, $a0, . + 4 + (0x177 << 2)
    ctx->pc = 0x2CDB10u;
    {
        const bool branch_taken_0x2cdb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB10u;
        // 0x2cdb14: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb10) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB18u;
    // 0x2cdb18: 0x8c23cec8  lw          $v1, -0x3138($at)
    ctx->pc = 0x2cdb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x2cdb1c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cdb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cdb20: 0x10640173  beq         $v1, $a0, . + 4 + (0x173 << 2)
    ctx->pc = 0x2CDB20u;
    {
        const bool branch_taken_0x2cdb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2cdb20) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB28u;
    // 0x2cdb28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdb2c: 0x8c23cecc  lw          $v1, -0x3134($at)
    ctx->pc = 0x2cdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2cdb30: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cdb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cdb34: 0x1064016e  beq         $v1, $a0, . + 4 + (0x16E << 2)
    ctx->pc = 0x2CDB34u;
    {
        const bool branch_taken_0x2cdb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB34u;
        // 0x2cdb38: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb34) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB3Cu;
    // 0x2cdb3c: 0x3c048ff2  lui         $a0, 0x8FF2
    ctx->pc = 0x2cdb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36850 << 16));
    // 0x2cdb40: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2cdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x2cdb44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2cdb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2cdb48: 0x10640169  beq         $v1, $a0, . + 4 + (0x169 << 2)
    ctx->pc = 0x2CDB48u;
    {
        const bool branch_taken_0x2cdb48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CDB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB48u;
        // 0x2cdb4c: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb48) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB50u;
    // 0x2cdb50: 0xc095150  jal         func_254540
    ctx->pc = 0x2CDB50u;
    SET_GPR_U32(ctx, 31, 0x2CDB58u);
    ctx->pc = 0x2CDB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB50u;
    // 0x2cdb54: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x2CDB50u, 0x2CDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB58u;
label_2cdb58:
    // 0x2cdb58: 0x14400165  bnez        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x2CDB58u;
    {
        const bool branch_taken_0x2cdb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB58u;
        // 0x2cdb5c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb58) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB60u;
    // 0x2cdb60: 0xc0c2d7c  jal         func_30B5F0
    ctx->pc = 0x2CDB60u;
    SET_GPR_U32(ctx, 31, 0x2CDB68u);
    ctx->pc = 0x2CDB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB60u;
    // 0x2cdb64: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B5F0u, 0x2CDB60u, 0x2CDB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB68u;
label_2cdb68:
    // 0x2cdb68: 0x14400161  bnez        $v0, . + 4 + (0x161 << 2)
    ctx->pc = 0x2CDB68u;
    {
        const bool branch_taken_0x2cdb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdb68) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CDB70u;
    // 0x2cdb70: 0xc0b3a78  jal         func_2CE9E0
    ctx->pc = 0x2CDB70u;
    SET_GPR_U32(ctx, 31, 0x2CDB78u);
    ctx->pc = 0x2CE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE9E0u, 0x2CDB70u, 0x2CDB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB78u;
label_2cdb78:
    // 0x2cdb78: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2cdb7c: 0xc0b3528  jal         func_2CD4A0
    ctx->pc = 0x2CDB7Cu;
    SET_GPR_U32(ctx, 31, 0x2CDB84u);
    ctx->pc = 0x2CDB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDB7Cu;
    // 0x2cdb80: 0x24846ca0  addiu       $a0, $a0, 0x6CA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD4A0u, 0x2CDB7Cu, 0x2CDB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDB84u;
label_2cdb84:
    // 0x2cdb84: 0x8f838a04  lw          $v1, -0x75FC($gp)
    ctx->pc = 0x2cdb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
    // 0x2cdb88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CDB88u;
    {
        const bool branch_taken_0x2cdb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDB88u;
        // 0x2cdb8c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdb88) {
            ctx->pc = 0x2CDBC0u;
            goto label_2cdbc0;
        }
    }
    ctx->pc = 0x2CDB90u;
    // 0x2cdb90: 0x3c050ff0  lui         $a1, 0xFF0
    ctx->pc = 0x2cdb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4080 << 16));
    // 0x2cdb94: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2cdb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x2cdb98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cdb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdb9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdba0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2cdba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2cdba4: 0x8c23cec0  lw          $v1, -0x3140($at)
    ctx->pc = 0x2cdba4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdba8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdbac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2cdbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2cdbb0: 0xac24ced8  sw          $a0, -0x3128($at)
    ctx->pc = 0x2cdbb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdbb4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdbb8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2CDBB8u;
    {
        const bool branch_taken_0x2cdbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBB8u;
        // 0x2cdbbc: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbb8) {
            ctx->pc = 0x2CDCE0u;
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDBC0u;
label_2cdbc0:
    // 0x2cdbc0: 0x8f838a14  lw          $v1, -0x75EC($gp)
    ctx->pc = 0x2cdbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x2cdbc4: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2CDBC4u;
    {
        const bool branch_taken_0x2cdbc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDBC4u;
        // 0x2cdbc8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdbc4) {
            ctx->pc = 0x2CDCE0u;
            goto label_2cdce0;
        }
    }
    ctx->pc = 0x2CDBCCu;
    // 0x2cdbcc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2cdbccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2cdbd0: 0x8c2aced8  lw          $t2, -0x3128($at)
    ctx->pc = 0x2cdbd0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x2cdbd4: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x2cdbd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x2cdbd8: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2cdbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x2cdbdc: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2cdbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x2cdbe0: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x2cdbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x2cdbe4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2cdbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x2cdbe8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2cdbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdbec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdbf0: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2cdbf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2cdbf4: 0x8c28cec0  lw          $t0, -0x3140($at)
    ctx->pc = 0x2cdbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdbf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdbfc: 0xac29ced8  sw          $t1, -0x3128($at)
    ctx->pc = 0x2cdbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdc00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc04: 0x8c29ced8  lw          $t1, -0x3128($at)
    ctx->pc = 0x2cdc04u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdc08: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2cdc08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2cdc0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc10: 0xac28cec0  sw          $t0, -0x3140($at)
    ctx->pc = 0x2cdc10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdc14: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x2cdc14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2cdc18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc1c: 0xac27ced8  sw          $a3, -0x3128($at)
    ctx->pc = 0x2cdc1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdc20: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc24: 0x8c27cec0  lw          $a3, -0x3140($at)
    ctx->pc = 0x2cdc24u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdc28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc2c: 0x8c28ced8  lw          $t0, -0x3128($at)
    ctx->pc = 0x2cdc2cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdc30: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2cdc30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2cdc34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc38: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x2cdc38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdc3c: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x2cdc3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x2cdc40: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc44: 0xac26ced8  sw          $a2, -0x3128($at)
    ctx->pc = 0x2cdc44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdc48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc4c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x2cdc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdc50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc54: 0x8c27ced8  lw          $a3, -0x3128($at)
    ctx->pc = 0x2cdc54u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdc58: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2cdc58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2cdc5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc60: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x2cdc60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdc64: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x2cdc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x2cdc68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc6c: 0xac25ced8  sw          $a1, -0x3128($at)
    ctx->pc = 0x2cdc6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdc70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc74: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x2cdc74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdc78: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc7c: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x2cdc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdc80: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2cdc80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2cdc84: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc88: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x2cdc88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdc8c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2cdc8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2cdc90: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc94: 0xac24ced8  sw          $a0, -0x3128($at)
    ctx->pc = 0x2cdc94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdc98: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdc9c: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2cdc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdca0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdca4: 0x8c25ced8  lw          $a1, -0x3128($at)
    ctx->pc = 0x2cdca4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdca8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2cdca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2cdcac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdcb0: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x2cdcb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdcb4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2cdcb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2cdcb8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdcbc: 0xac23ced8  sw          $v1, -0x3128($at)
    ctx->pc = 0x2cdcbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdcc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdcc4: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2cdcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cdcc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdccc: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2cdcccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdcd0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2cdcd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cdcd4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdcd8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2cdcd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdcdc: 0x0  nop
    ctx->pc = 0x2cdcdcu;
    // NOP
label_2cdce0:
    // 0x2cdce0: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2CDCE0u;
    {
        const bool branch_taken_0x2cdce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDCE0u;
        // 0x2cdce4: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdce0) {
            ctx->pc = 0x2CDD70u;
            goto label_2cdd70;
        }
    }
    ctx->pc = 0x2CDCE8u;
    // 0x2cdce8: 0x3c02f00f  lui         $v0, 0xF00F
    ctx->pc = 0x2cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61455 << 16));
    // 0x2cdcec: 0x8c29ced8  lw          $t1, -0x3128($at)
    ctx->pc = 0x2cdcecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x2cdcf0: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x2cdcf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cdcf4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdcf8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdcfc: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x2cdcfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x2cdd00: 0x8c27cec4  lw          $a3, -0x313C($at)
    ctx->pc = 0x2cdd00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2cdd04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd08: 0x8c22cec8  lw          $v0, -0x3138($at)
    ctx->pc = 0x2cdd08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2cdd0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd10: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x2cdd10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2cdd14: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x2cdd14u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2cdd18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd1c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2cdd1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2cdd20: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2cdd20u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2cdd24: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd28: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2cdd28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2cdd2c: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2cdd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2cdd30: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd34: 0xac28ced8  sw          $t0, -0x3128($at)
    ctx->pc = 0x2cdd34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdd38: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd3c: 0x8c22ced8  lw          $v0, -0x3128($at)
    ctx->pc = 0x2cdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdd40: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x2cdd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x2cdd44: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd48: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x2cdd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x2cdd4c: 0xac22ced8  sw          $v0, -0x3128($at)
    ctx->pc = 0x2cdd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954712), GPR_U32(ctx, 2));
    // 0x2cdd50: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd54: 0x8c22ced8  lw          $v0, -0x3128($at)
    ctx->pc = 0x2cdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdd58: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2cdd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2cdd5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdd60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2cdd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2cdd64: 0xc0b2cd8  jal         func_2CB360
    ctx->pc = 0x2CDD64u;
    SET_GPR_U32(ctx, 31, 0x2CDD6Cu);
    ctx->pc = 0x2CDD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDD64u;
    // 0x2cdd68: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB360u, 0x2CDD64u, 0x2CDD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDD6Cu;
label_2cdd6c:
    // 0x2cdd6c: 0x0  nop
    ctx->pc = 0x2cdd6cu;
    // NOP
label_2cdd70:
    // 0x2cdd70: 0x8f838a04  lw          $v1, -0x75FC($gp)
    ctx->pc = 0x2cdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937092)));
    // 0x2cdd74: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDD74u;
    {
        const bool branch_taken_0x2cdd74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD74u;
        // 0x2cdd78: 0x2861270f  slti        $at, $v1, 0x270F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9999) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd74) {
            ctx->pc = 0x2CDD90u;
            goto label_2cdd90;
        }
    }
    ctx->pc = 0x2CDD7Cu;
    // 0x2cdd7c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDD7Cu;
    {
        const bool branch_taken_0x2cdd7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd7c) {
            ctx->pc = 0x2CDD90u;
            goto label_2cdd90;
        }
    }
    ctx->pc = 0x2CDD84u;
    // 0x2cdd84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdd88: 0xaf838a04  sw          $v1, -0x75FC($gp)
    ctx->pc = 0x2cdd88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937092), GPR_U32(ctx, 3));
    // 0x2cdd8c: 0x0  nop
    ctx->pc = 0x2cdd8cu;
    // NOP
label_2cdd90:
    // 0x2cdd90: 0x8f838a14  lw          $v1, -0x75EC($gp)
    ctx->pc = 0x2cdd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937108)));
    // 0x2cdd94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDD94u;
    {
        const bool branch_taken_0x2cdd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDD94u;
        // 0x2cdd98: 0x2861270f  slti        $at, $v1, 0x270F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9999) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdd94) {
            ctx->pc = 0x2CDDB0u;
            goto label_2cddb0;
        }
    }
    ctx->pc = 0x2CDD9Cu;
    // 0x2cdd9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDD9Cu;
    {
        const bool branch_taken_0x2cdd9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdd9c) {
            ctx->pc = 0x2CDDB0u;
            goto label_2cddb0;
        }
    }
    ctx->pc = 0x2CDDA4u;
    // 0x2cdda4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdda8: 0xaf838a14  sw          $v1, -0x75EC($gp)
    ctx->pc = 0x2cdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937108), GPR_U32(ctx, 3));
    // 0x2cddac: 0x0  nop
    ctx->pc = 0x2cddacu;
    // NOP
label_2cddb0:
    // 0x2cddb0: 0x8f838a1c  lw          $v1, -0x75E4($gp)
    ctx->pc = 0x2cddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937116)));
    // 0x2cddb4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDDB4u;
    {
        const bool branch_taken_0x2cddb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDB4u;
        // 0x2cddb8: 0x2861270f  slti        $at, $v1, 0x270F (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9999) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddb4) {
            ctx->pc = 0x2CDDD0u;
            goto label_2cddd0;
        }
    }
    ctx->pc = 0x2CDDBCu;
    // 0x2cddbc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDDBCu;
    {
        const bool branch_taken_0x2cddbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddbc) {
            ctx->pc = 0x2CDDD0u;
            goto label_2cddd0;
        }
    }
    ctx->pc = 0x2CDDC4u;
    // 0x2cddc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cddc8: 0xaf838a1c  sw          $v1, -0x75E4($gp)
    ctx->pc = 0x2cddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937116), GPR_U32(ctx, 3));
    // 0x2cddcc: 0x0  nop
    ctx->pc = 0x2cddccu;
    // NOP
label_2cddd0:
    // 0x2cddd0: 0x8f858a10  lw          $a1, -0x75F0($gp)
    ctx->pc = 0x2cddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x2cddd4: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2CDDD4u;
    {
        const bool branch_taken_0x2cddd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDDD4u;
        // 0x2cddd8: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cddd4) {
            ctx->pc = 0x2CDE48u;
            goto label_2cde48;
        }
    }
    ctx->pc = 0x2CDDDCu;
    // 0x2cdddc: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2cdddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954712)));
    // 0x2cdde0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdde4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2cdde4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2cdde8: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2cdde8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cddec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cddf0: 0xac23ced8  sw          $v1, -0x3128($at)
    ctx->pc = 0x2cddf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cddf4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cddf8: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2cddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cddfc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cddfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cde00: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde04: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x2cde04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cde08: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2cde08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2cde0c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde10: 0xac23ced8  sw          $v1, -0x3128($at)
    ctx->pc = 0x2cde10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cde14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde18: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2cde18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2cde1c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde20: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2cde20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cde24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2cde24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cde28: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde2c: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2cde2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cde30: 0x28a1270f  slti        $at, $a1, 0x270F
    ctx->pc = 0x2cde30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x2cde34: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CDE34u;
    {
        const bool branch_taken_0x2cde34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE34u;
        // 0x2cde38: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde34) {
            ctx->pc = 0x2CDEE0u;
            goto label_2cdee0;
        }
    }
    ctx->pc = 0x2CDE3Cu;
    // 0x2cde3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CDE3Cu;
    {
        const bool branch_taken_0x2cde3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDE3Cu;
        // 0x2cde40: 0xaf838a10  sw          $v1, -0x75F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cde3c) {
            ctx->pc = 0x2CDEE0u;
            goto label_2cdee0;
        }
    }
    ctx->pc = 0x2CDE44u;
    // 0x2cde44: 0x0  nop
    ctx->pc = 0x2cde44u;
    // NOP
label_2cde48:
    // 0x2cde48: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde4c: 0x8c2bced8  lw          $t3, -0x3128($at)
    ctx->pc = 0x2cde4cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cde50: 0x240af7ff  addiu       $t2, $zero, -0x801
    ctx->pc = 0x2cde50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2cde54: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2cde54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2cde58: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2cde58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cde5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde60: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x2cde60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x2cde64: 0x8c29cec4  lw          $t1, -0x313C($at)
    ctx->pc = 0x2cde64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2cde68: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde6c: 0x8c26cec8  lw          $a2, -0x3138($at)
    ctx->pc = 0x2cde6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2cde70: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde74: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x2cde74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x2cde78: 0x8c28cecc  lw          $t0, -0x3134($at)
    ctx->pc = 0x2cde78u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2cde7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde80: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2cde80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2cde84: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x2cde84u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2cde88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde8c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x2cde8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x2cde90: 0x8c25cedc  lw          $a1, -0x3124($at)
    ctx->pc = 0x2cde90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2cde94: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cde98: 0xac2aced8  sw          $t2, -0x3128($at)
    ctx->pc = 0x2cde98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cde9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cde9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdea0: 0x8c26ced8  lw          $a2, -0x3128($at)
    ctx->pc = 0x2cdea0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdea4: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x2cdea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2cdea8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdeac: 0xac24ced8  sw          $a0, -0x3128($at)
    ctx->pc = 0x2cdeacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdeb0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdeb4: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2cdeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdeb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cdeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2cdebc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdec0: 0xac23ced8  sw          $v1, -0x3128($at)
    ctx->pc = 0x2cdec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED8u, _value); } while (0);
    // 0x2cdec4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cdec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cdec8: 0x8c23ced8  lw          $v1, -0x3128($at)
    ctx->pc = 0x2cdec8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2cdecc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2cdeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2cded0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cded0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cded4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2cded4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2cded8: 0xac23cec0  sw          $v1, -0x3140($at)
    ctx->pc = 0x2cded8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2cdedc: 0x0  nop
    ctx->pc = 0x2cdedcu;
    // NOP
label_2cdee0:
    // 0x2cdee0: 0x8f838a08  lw          $v1, -0x75F8($gp)
    ctx->pc = 0x2cdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x2cdee4: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2CDEE4u;
    {
        const bool branch_taken_0x2cdee4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2CDEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDEE4u;
        // 0x2cdee8: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdee4) {
            ctx->pc = 0x2CDF98u;
            goto label_2cdf98;
        }
    }
    ctx->pc = 0x2CDEECu;
    // 0x2cdeec: 0x8c30f680  lw          $s0, -0x980($at)
    ctx->pc = 0x2cdeecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964864)));
    // 0x2cdef0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cdef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cdef4: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CDEF4u;
    {
        const bool branch_taken_0x2cdef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdef4) {
            ctx->pc = 0x2CDF60u;
            goto label_2cdf60;
        }
    }
    ctx->pc = 0x2CDEFCu;
    // 0x2cdefc: 0x0  nop
    ctx->pc = 0x2cdefcu;
    // NOP
label_2cdf00:
    // 0x2cdf00: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x2cdf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x2cdf04: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2cdf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2cdf08: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x2cdf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x2cdf0c: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x2cdf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x2cdf10: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2cdf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cdf14: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CDF14u;
    {
        const bool branch_taken_0x2cdf14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf14) {
            ctx->pc = 0x2CDF50u;
            goto label_2cdf50;
        }
    }
    ctx->pc = 0x2CDF1Cu;
    // 0x2cdf1c: 0x92032ad8  lbu         $v1, 0x2AD8($s0)
    ctx->pc = 0x2cdf1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10968)));
    // 0x2cdf20: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CDF20u;
    {
        const bool branch_taken_0x2cdf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf20) {
            ctx->pc = 0x2CDF50u;
            goto label_2cdf50;
        }
    }
    ctx->pc = 0x2CDF28u;
    // 0x2cdf28: 0x8e0506cc  lw          $a1, 0x6CC($s0)
    ctx->pc = 0x2cdf28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2cdf2c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2cdf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2cdf30: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2cdf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2cdf34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cdf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdf38: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2cdf38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cdf3c: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x2cdf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x2cdf40: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x2cdf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x2cdf44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cdf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cdf48: 0xc0ae51c  jal         func_2B9470
    ctx->pc = 0x2CDF48u;
    SET_GPR_U32(ctx, 31, 0x2CDF50u);
    ctx->pc = 0x2CDF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDF48u;
    // 0x2cdf4c: 0xae0206cc  sw          $v0, 0x6CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9470u, 0x2CDF48u, 0x2CDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDF50u;
label_2cdf50:
    // 0x2cdf50: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2cdf50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cdf54: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cdf54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cdf58: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2CDF58u;
    {
        const bool branch_taken_0x2cdf58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cdf58) {
            ctx->pc = 0x2CDF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cdf00;
        }
    }
    ctx->pc = 0x2CDF60u;
label_2cdf60:
    // 0x2cdf60: 0x8f838a08  lw          $v1, -0x75F8($gp)
    ctx->pc = 0x2cdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x2cdf64: 0x97858858  lhu         $a1, -0x77A8($gp)
    ctx->pc = 0x2cdf64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x2cdf68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cdf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cdf6c: 0xaf848a0c  sw          $a0, -0x75F4($gp)
    ctx->pc = 0x2cdf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 4));
    // 0x2cdf70: 0x2861270f  slti        $at, $v1, 0x270F
    ctx->pc = 0x2cdf70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9999) ? 1 : 0);
    // 0x2cdf74: 0x34a40002  ori         $a0, $a1, 0x2
    ctx->pc = 0x2cdf74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x2cdf78: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CDF78u;
    {
        const bool branch_taken_0x2cdf78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF78u;
        // 0x2cdf7c: 0xa7848858  sh          $a0, -0x77A8($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936664), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf78) {
            ctx->pc = 0x2CDFD0u;
            goto label_2cdfd0;
        }
    }
    ctx->pc = 0x2CDF80u;
    // 0x2cdf80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdf84: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CDF84u;
    {
        const bool branch_taken_0x2cdf84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF84u;
        // 0x2cdf88: 0xaf838a08  sw          $v1, -0x75F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf84) {
            ctx->pc = 0x2CDFD0u;
            goto label_2cdfd0;
        }
    }
    ctx->pc = 0x2CDF8Cu;
    // 0x2cdf8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cdf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cdf90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2CDF90u;
    {
        const bool branch_taken_0x2cdf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDF90u;
        // 0x2cdf94: 0xaf838a08  sw          $v1, -0x75F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdf90) {
            ctx->pc = 0x2CDFD0u;
            goto label_2cdfd0;
        }
    }
    ctx->pc = 0x2CDF98u;
label_2cdf98:
    // 0x2cdf98: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CDF98u;
    {
        const bool branch_taken_0x2cdf98 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2cdf98) {
            ctx->pc = 0x2CDFB8u;
            goto label_2cdfb8;
        }
    }
    ctx->pc = 0x2CDFA0u;
    // 0x2cdfa0: 0x8f838a0c  lw          $v1, -0x75F4($gp)
    ctx->pc = 0x2cdfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x2cdfa4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDFA4u;
    {
        const bool branch_taken_0x2cdfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdfa4) {
            ctx->pc = 0x2CDFB8u;
            goto label_2cdfb8;
        }
    }
    ctx->pc = 0x2CDFACu;
    // 0x2cdfac: 0xc0b2da4  jal         func_2CB690
    ctx->pc = 0x2CDFACu;
    SET_GPR_U32(ctx, 31, 0x2CDFB4u);
    ctx->pc = 0x2CB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB690u, 0x2CDFACu, 0x2CDFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDFB4u;
label_2cdfb4:
    // 0x2cdfb4: 0x0  nop
    ctx->pc = 0x2cdfb4u;
    // NOP
label_2cdfb8:
    // 0x2cdfb8: 0x97838858  lhu         $v1, -0x77A8($gp)
    ctx->pc = 0x2cdfb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936664)));
    // 0x2cdfbc: 0xaf808a08  sw          $zero, -0x75F8($gp)
    ctx->pc = 0x2cdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937096), GPR_U32(ctx, 0));
    // 0x2cdfc0: 0xaf808a0c  sw          $zero, -0x75F4($gp)
    ctx->pc = 0x2cdfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 0));
    // 0x2cdfc4: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2cdfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2cdfc8: 0xa7838858  sh          $v1, -0x77A8($gp)
    ctx->pc = 0x2cdfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936664), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cdfcc: 0x0  nop
    ctx->pc = 0x2cdfccu;
    // NOP
label_2cdfd0:
    // 0x2cdfd0: 0x8f838a18  lw          $v1, -0x75E8($gp)
    ctx->pc = 0x2cdfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    // 0x2cdfd4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CDFD4u;
    {
        const bool branch_taken_0x2cdfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cdfd4) {
            ctx->pc = 0x2CE020u;
            goto label_2ce020;
        }
    }
    ctx->pc = 0x2CDFDCu;
    // 0x2cdfdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cdfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cdfe0: 0xaf838a18  sw          $v1, -0x75E8($gp)
    ctx->pc = 0x2cdfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937112), GPR_U32(ctx, 3));
    // 0x2cdfe4: 0x8f838a18  lw          $v1, -0x75E8($gp)
    ctx->pc = 0x2cdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937112)));
    // 0x2cdfe8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CDFE8u;
    {
        const bool branch_taken_0x2cdfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CDFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDFE8u;
        // 0x2cdfec: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdfe8) {
            ctx->pc = 0x2CE020u;
            goto label_2ce020;
        }
    }
    ctx->pc = 0x2CDFF0u;
    // 0x2cdff0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2cdff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cdff4: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x2cdff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x2cdff8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cdff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdffc: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2CDFFCu;
    SET_GPR_U32(ctx, 31, 0x2CE004u);
    ctx->pc = 0x2CE000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDFFCu;
    // 0x2ce000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x2CDFFCu, 0x2CE004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE004u;
label_2ce004:
    // 0x2ce004: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ce008: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2ce008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2ce00c: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2ce00cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2ce010: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2ce010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2ce014: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ce018: 0xac23cebc  sw          $v1, -0x3144($at)
    ctx->pc = 0x2ce018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x2ce01c: 0x0  nop
    ctx->pc = 0x2ce01cu;
    // NOP
label_2ce020:
    // 0x2ce020: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ce020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ce024: 0x94265072  lhu         $a2, 0x5072($at)
    ctx->pc = 0x2ce024u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x8D5072u));
    // 0x2ce028: 0x93838aa0  lbu         $v1, -0x7560($gp)
    ctx->pc = 0x2ce028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937248)));
    // 0x2ce02c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ce02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ce030: 0xa78689fc  sh          $a2, -0x7604($gp)
    ctx->pc = 0x2ce030u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937084), (uint16_t)GPR_U32(ctx, 6));
    // 0x2ce034: 0x94255062  lhu         $a1, 0x5062($at)
    ctx->pc = 0x2ce034u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x8D5062u));
    // 0x2ce038: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ce038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ce03c: 0xa78589f8  sh          $a1, -0x7608($gp)
    ctx->pc = 0x2ce03cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937080), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ce040: 0x94245074  lhu         $a0, 0x5074($at)
    ctx->pc = 0x2ce040u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x8D5074u));
    // 0x2ce044: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE044u;
    {
        const bool branch_taken_0x2ce044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE044u;
        // 0x2ce048: 0xa7848a00  sh          $a0, -0x7600($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294937088), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce044) {
            ctx->pc = 0x2CE068u;
            goto label_2ce068;
        }
    }
    ctx->pc = 0x2CE04Cu;
    // 0x2ce04c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE04Cu;
    {
        const bool branch_taken_0x2ce04c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE04Cu;
        // 0x2ce050: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce04c) {
            ctx->pc = 0x2CE060u;
            goto label_2ce060;
        }
    }
    ctx->pc = 0x2CE054u;
    // 0x2ce054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE054u;
    {
        const bool branch_taken_0x2ce054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE054u;
        // 0x2ce058: 0xa3838a9c  sb          $v1, -0x7564($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937244), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce054) {
            ctx->pc = 0x2CE068u;
            goto label_2ce068;
        }
    }
    ctx->pc = 0x2CE05Cu;
    // 0x2ce05c: 0x0  nop
    ctx->pc = 0x2ce05cu;
    // NOP
label_2ce060:
    // 0x2ce060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce064: 0xa3838a9c  sb          $v1, -0x7564($gp)
    ctx->pc = 0x2ce064u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937244), (uint8_t)GPR_U32(ctx, 3));
label_2ce068:
    // 0x2ce068: 0x93858a9c  lbu         $a1, -0x7564($gp)
    ctx->pc = 0x2ce068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937244)));
    // 0x2ce06c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE06Cu;
    {
        const bool branch_taken_0x2ce06c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce06c) {
            ctx->pc = 0x2CE090u;
            goto label_2ce090;
        }
    }
    ctx->pc = 0x2CE074u;
    // 0x2ce074: 0x93848a94  lbu         $a0, -0x756C($gp)
    ctx->pc = 0x2ce074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937236)));
    // 0x2ce078: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2ce078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ce07c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE07Cu;
    {
        const bool branch_taken_0x2ce07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ce07c) {
            ctx->pc = 0x2CE090u;
            goto label_2ce090;
        }
    }
    ctx->pc = 0x2CE084u;
    // 0x2ce084: 0xa3848a98  sb          $a0, -0x7568($gp)
    ctx->pc = 0x2ce084u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937240), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ce088: 0xa3858a94  sb          $a1, -0x756C($gp)
    ctx->pc = 0x2ce088u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937236), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ce08c: 0xa3808a9c  sb          $zero, -0x7564($gp)
    ctx->pc = 0x2ce08cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937244), (uint8_t)GPR_U32(ctx, 0));
label_2ce090:
    // 0x2ce090: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ce090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ce094: 0x8c24cebc  lw          $a0, -0x3144($at)
    ctx->pc = 0x2ce094u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2ce098: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ce098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ce09c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2ce09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2ce0a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE0A0u;
    {
        const bool branch_taken_0x2ce0a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce0a0) {
            ctx->pc = 0x2CE0D0u;
            goto label_2ce0d0;
        }
    }
    ctx->pc = 0x2CE0A8u;
    // 0x2ce0a8: 0x93838aac  lbu         $v1, -0x7554($gp)
    ctx->pc = 0x2ce0a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937260)));
    // 0x2ce0ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE0ACu;
    {
        const bool branch_taken_0x2ce0ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce0ac) {
            ctx->pc = 0x2CE0C0u;
            goto label_2ce0c0;
        }
    }
    ctx->pc = 0x2CE0B4u;
    // 0x2ce0b4: 0xc0f82e0  jal         func_3E0B80
    ctx->pc = 0x2CE0B4u;
    SET_GPR_U32(ctx, 31, 0x2CE0BCu);
    ctx->pc = 0x3E0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0B80u, 0x2CE0B4u, 0x2CE0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0BCu;
label_2ce0bc:
    // 0x2ce0bc: 0x0  nop
    ctx->pc = 0x2ce0bcu;
    // NOP
label_2ce0c0:
    // 0x2ce0c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce0c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CE0C4u;
    {
        const bool branch_taken_0x2ce0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0C4u;
        // 0x2ce0c8: 0xa3838aac  sb          $v1, -0x7554($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937260), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce0c4) {
            ctx->pc = 0x2CE0F0u;
            goto label_2ce0f0;
        }
    }
    ctx->pc = 0x2CE0CCu;
    // 0x2ce0cc: 0x0  nop
    ctx->pc = 0x2ce0ccu;
    // NOP
label_2ce0d0:
    // 0x2ce0d0: 0x93848aac  lbu         $a0, -0x7554($gp)
    ctx->pc = 0x2ce0d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937260)));
    // 0x2ce0d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ce0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce0d8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE0D8u;
    {
        const bool branch_taken_0x2ce0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ce0d8) {
            ctx->pc = 0x2CE0E8u;
            goto label_2ce0e8;
        }
    }
    ctx->pc = 0x2CE0E0u;
    // 0x2ce0e0: 0xc0f82bc  jal         func_3E0AF0
    ctx->pc = 0x2CE0E0u;
    SET_GPR_U32(ctx, 31, 0x2CE0E8u);
    ctx->pc = 0x3E0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0AF0u, 0x2CE0E0u, 0x2CE0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0E8u;
label_2ce0e8:
    // 0x2ce0e8: 0xa3808aac  sb          $zero, -0x7554($gp)
    ctx->pc = 0x2ce0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937260), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce0ec: 0x0  nop
    ctx->pc = 0x2ce0ecu;
    // NOP
label_2ce0f0:
    // 0x2ce0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce0f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce0f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE0F8u;
        // 0x2ce0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE100u;
}
