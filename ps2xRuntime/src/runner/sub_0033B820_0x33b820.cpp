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

// Function: sub_0033B820
// Address: 0x33b820 - 0x33ba78
void sub_0033B820_0x33b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B820_0x33b820");
#endif

    switch (ctx->pc) {
        case 0x33b870u: goto label_33b870;
        case 0x33b888u: goto label_33b888;
        case 0x33b8d4u: goto label_33b8d4;
        case 0x33b8f0u: goto label_33b8f0;
        case 0x33b9d8u: goto label_33b9d8;
        case 0x33b9fcu: goto label_33b9fc;
        case 0x33ba2cu: goto label_33ba2c;
        default: break;
    }

    ctx->pc = 0x33b820u;

    // 0x33b820: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x33b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x33b824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x33b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x33b828: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x33b828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x33b82c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x33b82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x33b830: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x33b830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33b834: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33b838: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33b83c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b840: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33b840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b844: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b848: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33b848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b84c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b850: 0x3c120065  lui         $s2, 0x65
    ctx->pc = 0x33b850u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)101 << 16));
    // 0x33b854: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b858: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x33b858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b85c: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x33b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x33b860: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x33b860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b864: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x33b864u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x33b868: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x33B868u;
    SET_GPR_U32(ctx, 31, 0x33B870u);
    ctx->pc = 0x33B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B868u;
    // 0x33b86c: 0x265274c0  addiu       $s2, $s2, 0x74C0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 29888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x33B868u, 0x33B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B870u;
label_33b870:
    // 0x33b870: 0x8fa600cc  lw          $a2, 0xCC($sp)
    ctx->pc = 0x33b870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x33b874: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33b874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b878: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x33b878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x33b87c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33b87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b880: 0xc0cecf8  jal         func_33B3E0
    ctx->pc = 0x33B880u;
    SET_GPR_U32(ctx, 31, 0x33B888u);
    ctx->pc = 0x33B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B880u;
    // 0x33b884: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B3E0u, 0x33B880u, 0x33B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B888u;
label_33b888:
    // 0x33b888: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x33b888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x33b88c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x33B88Cu;
    {
        const bool branch_taken_0x33b88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b88c) {
            ctx->pc = 0x33B8E0u;
            goto label_33b8e0;
        }
    }
    ctx->pc = 0x33B894u;
    // 0x33b894: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x33b894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33b898: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b89c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x33b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x33b8a0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b8a4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x33b8a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b8a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33b8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b8ac: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x33b8acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b8b0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b8b4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33b8b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b8b8: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33b8b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33b8bc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x33b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x33b8c0: 0x344a0059  ori         $t2, $v0, 0x59
    ctx->pc = 0x33b8c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)89);
    // 0x33b8c4: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x33b8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x33b8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b8cc: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B8CCu;
    SET_GPR_U32(ctx, 31, 0x33B8D4u);
    ctx->pc = 0x33B8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B8CCu;
    // 0x33b8d0: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B8CCu, 0x33B8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B8D4u;
label_33b8d4:
    // 0x33b8d4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x33B8D4u;
    {
        const bool branch_taken_0x33b8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b8d4) {
            ctx->pc = 0x33BA48u;
            goto label_33ba48;
        }
    }
    ctx->pc = 0x33B8DCu;
    // 0x33b8dc: 0x0  nop
    ctx->pc = 0x33b8dcu;
    // NOP
label_33b8e0:
    // 0x33b8e0: 0x8fb600c8  lw          $s6, 0xC8($sp)
    ctx->pc = 0x33b8e0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33b8e4: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x33b8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x33b8e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33b8e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b8ec: 0x72a821  addu        $s5, $v1, $s2
    ctx->pc = 0x33b8ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_33b8f0:
    // 0x33b8f0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x33b8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x33b8f4: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x33b8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x33b8f8: 0x2483001c  addiu       $v1, $a0, 0x1C
    ctx->pc = 0x33b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x33b8fc: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x33b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x33b900: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x33b900u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x33b904: 0x10800050  beqz        $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x33B904u;
    {
        const bool branch_taken_0x33b904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b904) {
            ctx->pc = 0x33BA48u;
            goto label_33ba48;
        }
    }
    ctx->pc = 0x33B90Cu;
    // 0x33b90c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x33b90cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33b910: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33b910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33b914: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33B914u;
    {
        const bool branch_taken_0x33b914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b914) {
            ctx->pc = 0x33B938u;
            goto label_33b938;
        }
    }
    ctx->pc = 0x33B91Cu;
    // 0x33b91c: 0x92830009  lbu         $v1, 0x9($s4)
    ctx->pc = 0x33b91cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
    // 0x33b920: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x33b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x33b924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33b924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33b928: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x33b928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33b92c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B92Cu;
    {
        const bool branch_taken_0x33b92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b92c) {
            ctx->pc = 0x33B940u;
            goto label_33b940;
        }
    }
    ctx->pc = 0x33B934u;
    // 0x33b934: 0x0  nop
    ctx->pc = 0x33b934u;
    // NOP
label_33b938:
    // 0x33b938: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33B938u;
    {
        const bool branch_taken_0x33b938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B938u;
        // 0x33b93c: 0xa2600004  sb          $zero, 0x4($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b938) {
            ctx->pc = 0x33B948u;
            goto label_33b948;
        }
    }
    ctx->pc = 0x33B940u;
label_33b940:
    // 0x33b940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33b940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b944: 0xa2620004  sb          $v0, 0x4($s3)
    ctx->pc = 0x33b944u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 2));
label_33b948:
    // 0x33b948: 0x96a50000  lhu         $a1, 0x0($s5)
    ctx->pc = 0x33b948u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x33b94c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x33b94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x33b950: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x33b950u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33b954: 0x9026fc8d  lbu         $a2, -0x373($at)
    ctx->pc = 0x33b954u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x33b958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b95c: 0x24a2003c  addiu       $v0, $a1, 0x3C
    ctx->pc = 0x33b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
    // 0x33b960: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x33b960u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b964: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x33b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x33b968: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33b968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b96c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x33b96cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33b970: 0x26e20014  addiu       $v0, $s7, 0x14
    ctx->pc = 0x33b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x33b974: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B974u;
    {
        const bool branch_taken_0x33b974 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x33B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B974u;
        // 0x33b978: 0xa7a200b0  sh          $v0, 0xB0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b974) {
            ctx->pc = 0x33B984u;
            goto label_33b984;
        }
    }
    ctx->pc = 0x33B97Cu;
    // 0x33b97c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33B97Cu;
    {
        const bool branch_taken_0x33b97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B97Cu;
        // 0x33b980: 0x8f9e8318  lw          $fp, -0x7CE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b97c) {
            ctx->pc = 0x33B988u;
            goto label_33b988;
        }
    }
    ctx->pc = 0x33B984u;
label_33b984:
    // 0x33b984: 0x8f9e831c  lw          $fp, -0x7CE4($gp)
    ctx->pc = 0x33b984u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935324)));
label_33b988:
    // 0x33b988: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x33b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33b98c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33B98Cu;
    {
        const bool branch_taken_0x33b98c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B98Cu;
        // 0x33b990: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b98c) {
            ctx->pc = 0x33B9A8u;
            goto label_33b9a8;
        }
    }
    ctx->pc = 0x33B994u;
    // 0x33b994: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B994u;
    {
        const bool branch_taken_0x33b994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x33b994) {
            ctx->pc = 0x33B9A8u;
            goto label_33b9a8;
        }
    }
    ctx->pc = 0x33B99Cu;
    // 0x33b99c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33B99Cu;
    {
        const bool branch_taken_0x33b99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b99c) {
            ctx->pc = 0x33B9B0u;
            goto label_33b9b0;
        }
    }
    ctx->pc = 0x33B9A4u;
    // 0x33b9a4: 0x0  nop
    ctx->pc = 0x33b9a4u;
    // NOP
label_33b9a8:
    // 0x33b9a8: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x33b9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x33b9ac: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x33b9acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_33b9b0:
    // 0x33b9b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33b9b4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x33b9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x33b9b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33b9bc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33b9c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33b9c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9c8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33b9cc: 0x2529ef60  addiu       $t1, $t1, -0x10A0
    ctx->pc = 0x33b9ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294963040));
    // 0x33b9d0: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33B9D0u;
    SET_GPR_U32(ctx, 31, 0x33B9D8u);
    ctx->pc = 0x33B9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9D0u;
    // 0x33b9d4: 0x344a0030  ori         $t2, $v0, 0x30 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33B9D0u, 0x33B9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9D8u;
label_33b9d8:
    // 0x33b9d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x33b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33b9dc: 0x32e4ffff  andi        $a0, $s7, 0xFFFF
    ctx->pc = 0x33b9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x33b9e0: 0x96890002  lhu         $t1, 0x2($s4)
    ctx->pc = 0x33b9e0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x33b9e4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x33b9e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x33b9e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x33b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9ec: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33b9f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x33b9f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33b9f4: 0xc0ed74c  jal         func_3B5D30
    ctx->pc = 0x33B9F4u;
    SET_GPR_U32(ctx, 31, 0x33B9FCu);
    ctx->pc = 0x33B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9F4u;
    // 0x33b9f8: 0x2448ffff  addiu       $t0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5D30u, 0x33B9F4u, 0x33B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9FCu;
label_33b9fc:
    // 0x33b9fc: 0x96c30016  lhu         $v1, 0x16($s6)
    ctx->pc = 0x33b9fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 22)));
    // 0x33ba00: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x33ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x33ba04: 0x97a500b0  lhu         $a1, 0xB0($sp)
    ctx->pc = 0x33ba04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33ba08: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x33ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x33ba0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33ba0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba10: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x33ba10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba14: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x33ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x33ba18: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33ba18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba1c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33ba1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33ba20: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ba20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ba24: 0xc095fdc  jal         func_257F70
    ctx->pc = 0x33BA24u;
    SET_GPR_U32(ctx, 31, 0x33BA2Cu);
    ctx->pc = 0x33BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA24u;
    // 0x33ba28: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F70u, 0x33BA24u, 0x33BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA2Cu;
label_33ba2c:
    // 0x33ba2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33ba2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33ba30: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x33ba30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x33ba34: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x33ba34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x33ba38: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x33ba38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x33ba3c: 0x1460ffac  bnez        $v1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x33BA3Cu;
    {
        const bool branch_taken_0x33ba3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA3Cu;
        // 0x33ba40: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba3c) {
            ctx->pc = 0x33B8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b8f0;
        }
    }
    ctx->pc = 0x33BA44u;
    // 0x33ba44: 0x0  nop
    ctx->pc = 0x33ba44u;
    // NOP
label_33ba48:
    // 0x33ba48: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x33ba48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33ba4c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x33ba4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33ba50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x33ba50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33ba54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33ba54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33ba58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x33ba58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33ba5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33ba5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ba60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33ba60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ba64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33ba64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ba68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33ba68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ba6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33ba6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ba70: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA70u;
        // 0x33ba74: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA78u;
}
