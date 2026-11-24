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

// Function: sub_00234020
// Address: 0x234020 - 0x2341b0
void sub_00234020_0x234020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234020_0x234020");
#endif

    switch (ctx->pc) {
        case 0x234068u: goto label_234068;
        case 0x234078u: goto label_234078;
        case 0x234088u: goto label_234088;
        case 0x234128u: goto label_234128;
        case 0x23413cu: goto label_23413c;
        case 0x23414cu: goto label_23414c;
        case 0x234154u: goto label_234154;
        case 0x23415cu: goto label_23415c;
        case 0x234164u: goto label_234164;
        case 0x234174u: goto label_234174;
        case 0x234188u: goto label_234188;
        default: break;
    }

    ctx->pc = 0x234020u;

    // 0x234020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234024: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x234024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x234028: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x234028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23402c: 0x3c12004c  lui         $s2, 0x4C
    ctx->pc = 0x23402cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)76 << 16));
    // 0x234030: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x234030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x234034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x234034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234038: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x234038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x23403c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234040: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x234040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x234044: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x234044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x234048: 0x8e45fc14  lw          $a1, -0x3EC($s2)
    ctx->pc = 0x234048u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BFC14u));
    // 0x23404c: 0x2463fc6c  addiu       $v1, $v1, -0x394
    ctx->pc = 0x23404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966380));
    // 0x234050: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x234050u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BFC10u));
    // 0x234054: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x234054u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFC6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC6Cu, _value); } while (0);
    // 0x234058: 0x54a0004c  bnel        $a1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x234058u;
    {
        const bool branch_taken_0x234058 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x234058) {
            ctx->pc = 0x23405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234058u;
            // 0x23405c: 0x2643fc14  addiu       $v1, $s2, -0x3EC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23418Cu;
            goto label_23418c;
        }
    }
    ctx->pc = 0x234060u;
    // 0x234060: 0xc094ea8  jal         func_253AA0
    ctx->pc = 0x234060u;
    SET_GPR_U32(ctx, 31, 0x234068u);
    ctx->pc = 0x253AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253AA0u, 0x234060u, 0x234068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234068u;
label_234068:
    // 0x234068: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x23406c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23406cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234070: 0xc094de0  jal         func_253780
    ctx->pc = 0x234070u;
    SET_GPR_U32(ctx, 31, 0x234078u);
    ctx->pc = 0x234074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234070u;
    // 0x234074: 0x24843350  addiu       $a0, $a0, 0x3350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253780u, 0x234070u, 0x234078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234078u;
label_234078:
    // 0x234078: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x234078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x23407c: 0x248433d8  addiu       $a0, $a0, 0x33D8
    ctx->pc = 0x23407cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13272));
    // 0x234080: 0xc094de6  jal         func_253798
    ctx->pc = 0x234080u;
    SET_GPR_U32(ctx, 31, 0x234088u);
    ctx->pc = 0x234084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234080u;
    // 0x234084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253798u, 0x234080u, 0x234088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234088u;
label_234088:
    // 0x234088: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x234088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x23408c: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x23408cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x234090: 0x24425ad0  addiu       $v0, $v0, 0x5AD0
    ctx->pc = 0x234090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
    // 0x234094: 0x24635ad8  addiu       $v1, $v1, 0x5AD8
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23256));
    // 0x234098: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x234098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885AD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885AD4u, _value); } while (0);
    // 0x23409c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23409cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885AD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885AD0u, _value); } while (0);
    // 0x2340a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2340a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x885ADCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885ADCu, _value); } while (0);
    // 0x2340a4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2340A4u;
    {
        const bool branch_taken_0x2340a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2340A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340A4u;
        // 0x2340a8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340a4) {
            ctx->pc = 0x2340E8u;
            goto label_2340e8;
        }
    }
    ctx->pc = 0x2340ACu;
    // 0x2340ac: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x2340acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x2340b0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2340b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2340b4: 0x2624fc20  addiu       $a0, $s1, -0x3E0
    ctx->pc = 0x2340b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966304));
    // 0x2340b8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2340b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2340bc: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2340bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC38u, _value); } while (0);
    // 0x2340c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2340c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2340c4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2340c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC34u, _value); } while (0);
    // 0x2340c8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2340c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2340cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2340ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC20u, _value); } while (0);
    // 0x2340d0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2340d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2340d4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2340d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC24u, _value); } while (0);
    // 0x2340d8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2340d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2340dc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2340dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC2Cu, _value); } while (0);
    // 0x2340e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2340E0u;
    {
        const bool branch_taken_0x2340e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2340E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2340E0u;
        // 0x2340e4: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2340e0) {
            ctx->pc = 0x234120u;
            goto label_234120;
        }
    }
    ctx->pc = 0x2340E8u;
label_2340e8:
    // 0x2340e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2340e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2340ec: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x2340ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x2340f0: 0x2624fc20  addiu       $a0, $s1, -0x3E0
    ctx->pc = 0x2340f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966304));
    // 0x2340f4: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2340f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC34u, _value); } while (0);
    // 0x2340f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2340f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2340fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2340fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC20u, _value); } while (0);
    // 0x234100: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234104: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x234104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC24u, _value); } while (0);
    // 0x234108: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x234108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23410c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x23410cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC2Cu, _value); } while (0);
    // 0x234110: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x234110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x234114: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x234114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BFC30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC30u, _value); } while (0);
    // 0x234118: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x234118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x23411c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x23411cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BFC38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFC38u, _value); } while (0);
label_234120:
    // 0x234120: 0xc0437b4  jal         func_10DED0
    ctx->pc = 0x234120u;
    SET_GPR_U32(ctx, 31, 0x234128u);
    ctx->pc = 0x234124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234120u;
    // 0x234124: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DED0u, 0x234120u, 0x234128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234128u;
label_234128:
    // 0x234128: 0x2610fcb8  addiu       $s0, $s0, -0x348
    ctx->pc = 0x234128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966456));
    // 0x23412c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234130: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x234130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x234134: 0xc0437b8  jal         func_10DEE0
    ctx->pc = 0x234134u;
    SET_GPR_U32(ctx, 31, 0x23413Cu);
    ctx->pc = 0x234138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234134u;
    // 0x234138: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DEE0u, 0x234134u, 0x23413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23413Cu;
label_23413c:
    // 0x23413c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x23413cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x234140: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x234140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x234144: 0xc08cf04  jal         func_233C10
    ctx->pc = 0x234144u;
    SET_GPR_U32(ctx, 31, 0x23414Cu);
    ctx->pc = 0x234148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234144u;
    // 0x234148: 0xac627548  sw          $v0, 0x7548($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 30024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C10u, 0x234144u, 0x23414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23414Cu;
label_23414c:
    // 0x23414c: 0xc08cf5c  jal         func_233D70
    ctx->pc = 0x23414Cu;
    SET_GPR_U32(ctx, 31, 0x234154u);
    ctx->pc = 0x233D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D70u, 0x23414Cu, 0x234154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234154u;
label_234154:
    // 0x234154: 0xc08cf7e  jal         func_233DF8
    ctx->pc = 0x234154u;
    SET_GPR_U32(ctx, 31, 0x23415Cu);
    ctx->pc = 0x233DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DF8u, 0x234154u, 0x23415Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23415Cu;
label_23415c:
    // 0x23415c: 0xc08cfa0  jal         func_233E80
    ctx->pc = 0x23415Cu;
    SET_GPR_U32(ctx, 31, 0x234164u);
    ctx->pc = 0x233E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233E80u, 0x23415Cu, 0x234164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234164u;
label_234164:
    // 0x234164: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x234164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x234168: 0x2622fc20  addiu       $v0, $s1, -0x3E0
    ctx->pc = 0x234168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966304));
    // 0x23416c: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x23416Cu;
    SET_GPR_U32(ctx, 31, 0x234174u);
    ctx->pc = 0x234170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23416Cu;
    // 0x234170: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x23416Cu, 0x234174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234174u;
label_234174:
    // 0x234174: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x234174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x234178: 0x24a53530  addiu       $a1, $a1, 0x3530
    ctx->pc = 0x234178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13616));
    // 0x23417c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x23417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x234180: 0xc094daa  jal         func_2536A8
    ctx->pc = 0x234180u;
    SET_GPR_U32(ctx, 31, 0x234188u);
    ctx->pc = 0x234184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234180u;
    // 0x234184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2536A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2536A8u, 0x234180u, 0x234188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234188u;
label_234188:
    // 0x234188: 0x2643fc14  addiu       $v1, $s2, -0x3EC
    ctx->pc = 0x234188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966292));
label_23418c:
    // 0x23418c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x23418cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x234190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234194: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x234194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234198: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x234198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x23419c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2341a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2341a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2341a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2341a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2341a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2341A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2341ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2341A8u;
        // 0x2341ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2341A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2341B0u;
}
