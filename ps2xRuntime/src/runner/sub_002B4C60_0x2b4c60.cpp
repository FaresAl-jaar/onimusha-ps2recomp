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

// Function: sub_002B4C60
// Address: 0x2b4c60 - 0x2b6430
void sub_002B4C60_0x2b4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4C60_0x2b4c60");
#endif

    switch (ctx->pc) {
        case 0x2b4c9cu: goto label_2b4c9c;
        case 0x2b4dd8u: goto label_2b4dd8;
        case 0x2b4e14u: goto label_2b4e14;
        case 0x2b4e38u: goto label_2b4e38;
        case 0x2b4e7cu: goto label_2b4e7c;
        case 0x2b4e90u: goto label_2b4e90;
        case 0x2b4ee0u: goto label_2b4ee0;
        case 0x2b4ef4u: goto label_2b4ef4;
        case 0x2b4f40u: goto label_2b4f40;
        case 0x2b4f88u: goto label_2b4f88;
        case 0x2b50f4u: goto label_2b50f4;
        case 0x2b5134u: goto label_2b5134;
        case 0x2b5144u: goto label_2b5144;
        case 0x2b51f4u: goto label_2b51f4;
        case 0x2b5238u: goto label_2b5238;
        case 0x2b5244u: goto label_2b5244;
        case 0x2b5250u: goto label_2b5250;
        case 0x2b5260u: goto label_2b5260;
        case 0x2b52a4u: goto label_2b52a4;
        case 0x2b5404u: goto label_2b5404;
        case 0x2b5410u: goto label_2b5410;
        case 0x2b54bcu: goto label_2b54bc;
        case 0x2b558cu: goto label_2b558c;
        case 0x2b5670u: goto label_2b5670;
        case 0x2b5678u: goto label_2b5678;
        case 0x2b56f8u: goto label_2b56f8;
        case 0x2b5710u: goto label_2b5710;
        case 0x2b5720u: goto label_2b5720;
        case 0x2b5738u: goto label_2b5738;
        case 0x2b575cu: goto label_2b575c;
        case 0x2b5784u: goto label_2b5784;
        case 0x2b579cu: goto label_2b579c;
        case 0x2b57d4u: goto label_2b57d4;
        case 0x2b57e8u: goto label_2b57e8;
        case 0x2b5974u: goto label_2b5974;
        case 0x2b59fcu: goto label_2b59fc;
        case 0x2b5a14u: goto label_2b5a14;
        case 0x2b5aa0u: goto label_2b5aa0;
        case 0x2b5ab0u: goto label_2b5ab0;
        case 0x2b5accu: goto label_2b5acc;
        case 0x2b5aecu: goto label_2b5aec;
        case 0x2b5b6cu: goto label_2b5b6c;
        case 0x2b5bacu: goto label_2b5bac;
        case 0x2b5bf0u: goto label_2b5bf0;
        case 0x2b5d38u: goto label_2b5d38;
        case 0x2b5d88u: goto label_2b5d88;
        case 0x2b5db0u: goto label_2b5db0;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f50u: goto label_2b5f50;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6184u: goto label_2b6184;
        case 0x2b6194u: goto label_2b6194;
        case 0x2b61a8u: goto label_2b61a8;
        case 0x2b61b8u: goto label_2b61b8;
        case 0x2b61e0u: goto label_2b61e0;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b6220u: goto label_2b6220;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b6268u: goto label_2b6268;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6380u: goto label_2b6380;
        case 0x2b63ecu: goto label_2b63ec;
        case 0x2b6404u: goto label_2b6404;
        default: break;
    }

    ctx->pc = 0x2b4c60u;

    // 0x2b4c60: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b4c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b4c64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b4c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b4c68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b4c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b4c6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2b4c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2b4c70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b4c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b4c74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4c78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4c78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b4c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b4c80: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b4c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b4c84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2b4c84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2b4c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b4c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2b4c8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b4c90: 0x8e4507c8  lw          $a1, 0x7C8($s2)
    ctx->pc = 0x2b4c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1992)));
    // 0x2b4c94: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2B4C94u;
    SET_GPR_U32(ctx, 31, 0x2B4C9Cu);
    ctx->pc = 0x2B4C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C94u;
    // 0x2b4c98: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2B4C94u, 0x2B4C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C9Cu;
label_2b4c9c:
    // 0x2b4c9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ca0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B4CA0u;
    {
        const bool branch_taken_0x2b4ca0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ca0) {
            ctx->pc = 0x2B4CD0u;
            goto label_2b4cd0;
        }
    }
    ctx->pc = 0x2B4CA8u;
    // 0x2b4ca8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b4ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4cac: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2b4cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2b4cb0: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2b4cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b4cb4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B4CB4u;
    {
        const bool branch_taken_0x2b4cb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4CB4u;
        // 0x2b4cb8: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4cb4) {
            ctx->pc = 0x2B4CC0u;
            goto label_2b4cc0;
        }
    }
    ctx->pc = 0x2B4CBCu;
    // 0x2b4cbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4cc0:
    // 0x2b4cc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4CC0u;
    {
        const bool branch_taken_0x2b4cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4cc0) {
            ctx->pc = 0x2B4CD0u;
            goto label_2b4cd0;
        }
    }
    ctx->pc = 0x2B4CC8u;
    // 0x2b4cc8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x2b4cc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b4ccc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x2b4cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_2b4cd0:
    // 0x2b4cd0: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x2b4cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b4cd4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b4cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b4cd8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2b4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b4cdc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x2b4cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x2b4ce0: 0xae450148  sw          $a1, 0x148($s2)
    ctx->pc = 0x2b4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 5));
    // 0x2b4ce4: 0x8e450148  lw          $a1, 0x148($s2)
    ctx->pc = 0x2b4ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b4ce8: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x2b4ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2b4cec: 0xae440148  sw          $a0, 0x148($s2)
    ctx->pc = 0x2b4cecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 4));
    // 0x2b4cf0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2b4cf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b4cf4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4CF4u;
    {
        const bool branch_taken_0x2b4cf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b4cf4) {
            ctx->pc = 0x2B4D10u;
            goto label_2b4d10;
        }
    }
    ctx->pc = 0x2B4CFCu;
    // 0x2b4cfc: 0x8e440148  lw          $a0, 0x148($s2)
    ctx->pc = 0x2b4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b4d00: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2b4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x2b4d04: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2b4d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b4d08: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b4d0c: 0x0  nop
    ctx->pc = 0x2b4d0cu;
    // NOP
label_2b4d10:
    // 0x2b4d10: 0x8e4506cc  lw          $a1, 0x6CC($s2)
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2b4d14: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2b4d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2b4d18: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2b4d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2b4d1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2b4d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b4d20: 0x34a50400  ori         $a1, $a1, 0x400
    ctx->pc = 0x2b4d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x2b4d24: 0xae4506cc  sw          $a1, 0x6CC($s2)
    ctx->pc = 0x2b4d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 5));
    // 0x2b4d28: 0x8e4506cc  lw          $a1, 0x6CC($s2)
    ctx->pc = 0x2b4d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2b4d2c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x2b4d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x2b4d30: 0xae4506cc  sw          $a1, 0x6CC($s2)
    ctx->pc = 0x2b4d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 5));
    // 0x2b4d34: 0x8e4629c0  lw          $a2, 0x29C0($s2)
    ctx->pc = 0x2b4d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b4d38: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x2b4d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b4d3c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2b4d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2b4d40: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2b4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
    // 0x2b4d44: 0x8e4306c8  lw          $v1, 0x6C8($s2)
    ctx->pc = 0x2b4d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1736)));
    // 0x2b4d48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b4d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b4d4c: 0xae4306c8  sw          $v1, 0x6C8($s2)
    ctx->pc = 0x2b4d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1736), GPR_U32(ctx, 3));
    // 0x2b4d50: 0x8e4306cc  lw          $v1, 0x6CC($s2)
    ctx->pc = 0x2b4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1740)));
    // 0x2b4d54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b4d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b4d58: 0xae4306cc  sw          $v1, 0x6CC($s2)
    ctx->pc = 0x2b4d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 3));
    // 0x2b4d5c: 0x92430821  lbu         $v1, 0x821($s2)
    ctx->pc = 0x2b4d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2081)));
    // 0x2b4d60: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x2b4d60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b4d64: 0x102004f2  beqz        $at, . + 4 + (0x4F2 << 2)
    ctx->pc = 0x2B4D64u;
    {
        const bool branch_taken_0x2b4d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D64u;
        // 0x2b4d68: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d64) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B4D6Cu;
    // 0x2b4d6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b4d70: 0x24847430  addiu       $a0, $a0, 0x7430
    ctx->pc = 0x2b4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29744));
    // 0x2b4d74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4d78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b4d7c: 0x600008  jr          $v1
    ctx->pc = 0x2B4D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D88u: goto label_2b4d88;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B53E8u: goto label_2b53e8;
            case 0x2B55D8u: goto label_2b55d8;
            case 0x2B5AD8u: goto label_2b5ad8;
            case 0x2B5B58u: goto label_2b5b58;
            case 0x2B5D00u: goto label_2b5d00;
            case 0x2B6120u: goto label_2b6120;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B4D84u;
    // 0x2b4d84: 0x0  nop
    ctx->pc = 0x2b4d84u;
    // NOP
label_2b4d88:
    // 0x2b4d88: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4D88u;
    {
        const bool branch_taken_0x2b4d88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D88u;
        // 0x2b4d8c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d88) {
            ctx->pc = 0x2B4D98u;
            goto label_2b4d98;
        }
    }
    ctx->pc = 0x2B4D90u;
    // 0x2b4d90: 0x100004e7  b           . + 4 + (0x4E7 << 2)
    ctx->pc = 0x2B4D90u;
    {
        const bool branch_taken_0x2b4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D90u;
        // 0x2b4d94: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d90) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B4D98u;
label_2b4d98:
    // 0x2b4d98: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2b4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2b4d9c: 0x24634fb8  addiu       $v1, $v1, 0x4FB8
    ctx->pc = 0x2b4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20408));
    // 0x2b4da0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b4da4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b4da4u;
    { uint32_t bits = FAST_READ32(0x4E4FB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b4da8: 0x24427378  addiu       $v0, $v0, 0x7378
    ctx->pc = 0x2b4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29560));
    // 0x2b4dac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b4dacu;
    { uint32_t bits = FAST_READ32(0x4E4FBCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4db0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b4db4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b4db4u;
    { uint32_t bits = FAST_READ32(0x4E4FC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4db8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2b4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b4dbc: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x2b4dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2b4dc0: 0xe64206a0  swc1        $f2, 0x6A0($s2)
    ctx->pc = 0x2b4dc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1696), bits); }
    // 0x2b4dc4: 0xe64106a4  swc1        $f1, 0x6A4($s2)
    ctx->pc = 0x2b4dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1700), bits); }
    // 0x2b4dc8: 0xe64006a8  swc1        $f0, 0x6A8($s2)
    ctx->pc = 0x2b4dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1704), bits); }
    // 0x2b4dcc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2b4dccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b4dd0: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B4DD0u;
    SET_GPR_U32(ctx, 31, 0x2B4DD8u);
    ctx->pc = 0x2B4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4DD0u;
    // 0x2b4dd4: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B4DD0u, 0x2B4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4DD8u;
label_2b4dd8:
    // 0x2b4dd8: 0xa640082a  sh          $zero, 0x82A($s2)
    ctx->pc = 0x2b4dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4de0: 0xa6400826  sh          $zero, 0x826($s2)
    ctx->pc = 0x2b4de0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4de4: 0x92432abe  lbu         $v1, 0x2ABE($s2)
    ctx->pc = 0x2b4de4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b4de8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4DE8u;
    {
        const bool branch_taken_0x2b4de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4de8) {
            ctx->pc = 0x2B4E00u;
            goto label_2b4e00;
        }
    }
    ctx->pc = 0x2B4DF0u;
    // 0x2b4df0: 0x9642082a  lhu         $v0, 0x82A($s2)
    ctx->pc = 0x2b4df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b4df4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2b4df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2b4df8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B4DF8u;
    {
        const bool branch_taken_0x2b4df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DF8u;
        // 0x2b4dfc: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4df8) {
            ctx->pc = 0x2B4E68u;
            goto label_2b4e68;
        }
    }
    ctx->pc = 0x2B4E00u;
label_2b4e00:
    // 0x2b4e00: 0x8e452ab4  lw          $a1, 0x2AB4($s2)
    ctx->pc = 0x2b4e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10932)));
    // 0x2b4e04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4E04u;
    {
        const bool branch_taken_0x2b4e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E04u;
        // 0x2b4e08: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e04) {
            ctx->pc = 0x2B4E18u;
            goto label_2b4e18;
        }
    }
    ctx->pc = 0x2B4E0Cu;
    // 0x2b4e0c: 0xc0c0cb8  jal         func_3032E0
    ctx->pc = 0x2B4E0Cu;
    SET_GPR_U32(ctx, 31, 0x2B4E14u);
    ctx->pc = 0x2B4E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E0Cu;
    // 0x2b4e10: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3032E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3032E0u, 0x2B4E0Cu, 0x2B4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E14u;
label_2b4e14:
    // 0x2b4e14: 0x0  nop
    ctx->pc = 0x2b4e14u;
    // NOP
label_2b4e18:
    // 0x2b4e18: 0xae402ab4  sw          $zero, 0x2AB4($s2)
    ctx->pc = 0x2b4e18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10932), GPR_U32(ctx, 0));
    // 0x2b4e1c: 0x938289b4  lbu         $v0, -0x764C($gp)
    ctx->pc = 0x2b4e1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x2b4e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4e24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4E24u;
    {
        const bool branch_taken_0x2b4e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E24u;
        // 0x2b4e28: 0xa38389b8  sb          $v1, -0x7648($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937016), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e24) {
            ctx->pc = 0x2B4E38u;
            goto label_2b4e38;
        }
    }
    ctx->pc = 0x2B4E2Cu;
    // 0x2b4e2c: 0xa38389b4  sb          $v1, -0x764C($gp)
    ctx->pc = 0x2b4e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937012), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b4e30: 0xc0acb04  jal         func_2B2C10
    ctx->pc = 0x2B4E30u;
    SET_GPR_U32(ctx, 31, 0x2B4E38u);
    ctx->pc = 0x2B4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E30u;
    // 0x2b4e34: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x2B4E30u, 0x2B4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E38u;
label_2b4e38:
    // 0x2b4e38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4e3c: 0xa3828954  sb          $v0, -0x76AC($gp)
    ctx->pc = 0x2b4e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936916), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4e40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4e44: 0xa3828958  sb          $v0, -0x76A8($gp)
    ctx->pc = 0x2b4e44u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4e48: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b4e4c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2b4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2b4e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b4e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b4e54: 0xaf838960  sw          $v1, -0x76A0($gp)
    ctx->pc = 0x2b4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 3));
    // 0x2b4e58: 0xa780895c  sh          $zero, -0x76A4($gp)
    ctx->pc = 0x2b4e58u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936924), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b4e5c: 0x8e4329c8  lw          $v1, 0x29C8($s2)
    ctx->pc = 0x2b4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10696)));
    // 0x2b4e60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2b4e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2b4e64: 0xae4229c8  sw          $v0, 0x29C8($s2)
    ctx->pc = 0x2b4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10696), GPR_U32(ctx, 2));
label_2b4e68:
    // 0x2b4e68: 0x92422abf  lbu         $v0, 0x2ABF($s2)
    ctx->pc = 0x2b4e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b4e6c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B4E6Cu;
    {
        const bool branch_taken_0x2b4e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E6Cu;
        // 0x2b4e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e6c) {
            ctx->pc = 0x2B4F10u;
            goto label_2b4f10;
        }
    }
    ctx->pc = 0x2B4E74u;
    // 0x2b4e74: 0xc0ad1dc  jal         func_2B4770
    ctx->pc = 0x2B4E74u;
    SET_GPR_U32(ctx, 31, 0x2B4E7Cu);
    ctx->pc = 0x2B4770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4770u, 0x2B4E74u, 0x2B4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E7Cu;
label_2b4e7c:
    // 0x2b4e7c: 0x8e442ac4  lw          $a0, 0x2AC4($s2)
    ctx->pc = 0x2b4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10948)));
    // 0x2b4e80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4E80u;
    {
        const bool branch_taken_0x2b4e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e80) {
            ctx->pc = 0x2B4E90u;
            goto label_2b4e90;
        }
    }
    ctx->pc = 0x2B4E88u;
    // 0x2b4e88: 0xc0b2d50  jal         func_2CB540
    ctx->pc = 0x2B4E88u;
    SET_GPR_U32(ctx, 31, 0x2B4E90u);
    ctx->pc = 0x2CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB540u, 0x2B4E88u, 0x2B4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E90u;
label_2b4e90:
    // 0x2b4e90: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b4e94: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B4E94u;
    {
        const bool branch_taken_0x2b4e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e94) {
            ctx->pc = 0x2B4EE8u;
            goto label_2b4ee8;
        }
    }
    ctx->pc = 0x2B4E9Cu;
    // 0x2b4e9c: 0x90430640  lbu         $v1, 0x640($v0)
    ctx->pc = 0x2b4e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x2b4ea0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4ea4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B4EA4u;
    {
        const bool branch_taken_0x2b4ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4ea4) {
            ctx->pc = 0x2B4EE8u;
            goto label_2b4ee8;
        }
    }
    ctx->pc = 0x2B4EACu;
    // 0x2b4eac: 0x8784822c  lh          $a0, -0x7DD4($gp)
    ctx->pc = 0x2b4eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935084)));
    // 0x2b4eb0: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x2b4eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x2b4eb4: 0x9382822e  lbu         $v0, -0x7DD2($gp)
    ctx->pc = 0x2b4eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935086)));
    // 0x2b4eb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b4ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ec0: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x2b4ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b4ec4: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x2b4ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b4ec8: 0x924208e8  lbu         $v0, 0x8E8($s2)
    ctx->pc = 0x2b4ec8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b4ecc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b4ed0: 0x904200bc  lbu         $v0, 0xBC($v0)
    ctx->pc = 0x2b4ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2b4ed4: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x2b4ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b4ed8: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B4ED8u;
    SET_GPR_U32(ctx, 31, 0x2B4EE0u);
    ctx->pc = 0x2B4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4ED8u;
    // 0x2b4edc: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B4ED8u, 0x2B4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EE0u;
label_2b4ee0:
    // 0x2b4ee0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4EE0u;
    {
        const bool branch_taken_0x2b4ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EE0u;
        // 0x2b4ee4: 0xae422ac4  sw          $v0, 0x2AC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4ee0) {
            ctx->pc = 0x2B4EF8u;
            goto label_2b4ef8;
        }
    }
    ctx->pc = 0x2B4EE8u;
label_2b4ee8:
    // 0x2b4ee8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b4eec: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B4EECu;
    SET_GPR_U32(ctx, 31, 0x2B4EF4u);
    ctx->pc = 0x2B4EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EECu;
    // 0x2b4ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B4EECu, 0x2B4EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EF4u;
label_2b4ef4:
    // 0x2b4ef4: 0xae422ac4  sw          $v0, 0x2AC4($s2)
    ctx->pc = 0x2b4ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10948), GPR_U32(ctx, 2));
label_2b4ef8:
    // 0x2b4ef8: 0x8e4229c0  lw          $v0, 0x29C0($s2)
    ctx->pc = 0x2b4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b4efc: 0x80420034  lb          $v0, 0x34($v0)
    ctx->pc = 0x2b4efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2b4f00: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b4f04: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B4F04u;
    {
        const bool branch_taken_0x2b4f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F04u;
        // 0x2b4f08: 0xa6420830  sh          $v0, 0x830($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2096), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f04) {
            ctx->pc = 0x2B4F30u;
            goto label_2b4f30;
        }
    }
    ctx->pc = 0x2B4F0Cu;
    // 0x2b4f0c: 0x0  nop
    ctx->pc = 0x2b4f0cu;
    // NOP
label_2b4f10:
    // 0x2b4f10: 0x92430640  lbu         $v1, 0x640($s2)
    ctx->pc = 0x2b4f10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2b4f14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4f18: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4F18u;
    {
        const bool branch_taken_0x2b4f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b4f18) {
            ctx->pc = 0x2B4F30u;
            goto label_2b4f30;
        }
    }
    ctx->pc = 0x2B4F20u;
    // 0x2b4f20: 0x9642082a  lhu         $v0, 0x82A($s2)
    ctx->pc = 0x2b4f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b4f24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2b4f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2b4f28: 0xa642082a  sh          $v0, 0x82A($s2)
    ctx->pc = 0x2b4f28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b4f2c: 0x0  nop
    ctx->pc = 0x2b4f2cu;
    // NOP
label_2b4f30:
    // 0x2b4f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b4f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b4f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f38: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2B4F38u;
    SET_GPR_U32(ctx, 31, 0x2B4F40u);
    ctx->pc = 0x2B4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F38u;
    // 0x2b4f3c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4830u, 0x2B4F38u, 0x2B4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F40u;
label_2b4f40:
    // 0x2b4f40: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x2b4f40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b4f44: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2b4f44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b4f48: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b4f4c: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2b4f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b4f50: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x2b4f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
    // 0x2b4f54: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b4f58: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b4f5c: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x2b4f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2b4f60: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2b4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2b4f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b4f68: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2b4f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b4f6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2b4f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2b4f70: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2b4f74: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2b4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2b4f78: 0xc4750000  lwc1        $f21, 0x0($v1)
    ctx->pc = 0x2b4f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b4f7c: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2b4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b4f80: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B4F80u;
    SET_GPR_U32(ctx, 31, 0x2B4F88u);
    ctx->pc = 0x2B4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F80u;
    // 0x2b4f84: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B4F80u, 0x2B4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F88u;
label_2b4f88:
    // 0x2b4f88: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x2b4f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x2b4f8c: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x2b4f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x2b4f90: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x2b4f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b4f94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4F94u;
    {
        const bool branch_taken_0x2b4f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F94u;
        // 0x2b4f98: 0x46140041  sub.s       $f1, $f0, $f20 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f94) {
            ctx->pc = 0x2B4FB0u;
            goto label_2b4fb0;
        }
    }
    ctx->pc = 0x2B4F9Cu;
    // 0x2b4f9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4fa0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b4fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b4fa4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x2b4fa4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2b4fa8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2B4FA8u;
    {
        const bool branch_taken_0x2b4fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FA8u;
        // 0x2b4fac: 0xa0235c70  sb          $v1, 0x5C70($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 23664), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fa8) {
            ctx->pc = 0x2B5040u;
            goto label_2b5040;
        }
    }
    ctx->pc = 0x2B4FB0u;
label_2b4fb0:
    // 0x2b4fb0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b4fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b4fb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4fb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4fb8: 0x0  nop
    ctx->pc = 0x2b4fb8u;
    // NOP
    // 0x2b4fbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4fc0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x2B4FC0u;
    {
        const bool branch_taken_0x2b4fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B4FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FC0u;
        // 0x2b4fc4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4fc0) {
            ctx->pc = 0x2B5008u;
            goto label_2b5008;
        }
    }
    ctx->pc = 0x2B4FC8u;
    // 0x2b4fc8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b4fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b4fcc: 0xa0245c70  sb          $a0, 0x5C70($at)
    ctx->pc = 0x2b4fccu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8D5C70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D5C70u, _value); } while (0);
    // 0x2b4fd0: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2b4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b4fd4: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2b4fd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b4fd8: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x2b4fd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b4fdc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b4fe0: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B4FE0u;
    {
        const bool branch_taken_0x2b4fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b4fe0) {
            ctx->pc = 0x2B5008u;
            goto label_2b5008;
        }
    }
    ctx->pc = 0x2B4FE8u;
    // 0x2b4fe8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b4fec: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2b4fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b4ff0: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x2b4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x2b4ff4: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2b4ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b4ff8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2b4ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b4ffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b5000: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x2b5000u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5004: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2b5004u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
label_2b5008:
    // 0x2b5008: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b5008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b500c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b500cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5010: 0x0  nop
    ctx->pc = 0x2b5010u;
    // NOP
    // 0x2b5014: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b5014u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5018: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5018u;
    {
        const bool branch_taken_0x2b5018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5018u;
        // 0x2b501c: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5018) {
            ctx->pc = 0x2B5040u;
            goto label_2b5040;
        }
    }
    ctx->pc = 0x2B5020u;
    // 0x2b5020: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x2b5020u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b5024: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x2b5024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x2b5028: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x2b5028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2b502c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2b502cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b5030: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b5030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b5034: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x2b5034u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5038: 0xa0860000  sb          $a2, 0x0($a0)
    ctx->pc = 0x2b5038u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b503c: 0x0  nop
    ctx->pc = 0x2b503cu;
    // NOP
label_2b5040:
    // 0x2b5040: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x2b5040u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b5044: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b5044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b5048: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B5048u;
    {
        const bool branch_taken_0x2b5048 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5048) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B5050u;
    // 0x2b5050: 0x16200025  bnez        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B5050u;
    {
        const bool branch_taken_0x2b5050 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5050) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B5058u;
    // 0x2b5058: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b5058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b505c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B505Cu;
    {
        const bool branch_taken_0x2b505c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B505Cu;
        // 0x2b5060: 0x3c034334  lui         $v1, 0x4334 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b505c) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B5064u;
    // 0x2b5064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5068: 0x0  nop
    ctx->pc = 0x2b5068u;
    // NOP
    // 0x2b506c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b506cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5070: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2B5070u;
    {
        const bool branch_taken_0x2b5070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5070u;
        // 0x2b5074: 0x30470004  andi        $a3, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5070) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B5078u;
    // 0x2b5078: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2B5078u;
    {
        const bool branch_taken_0x2b5078 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5078u;
        // 0x2b507c: 0x3c05008d  lui         $a1, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5078) {
            ctx->pc = 0x2B50B0u;
            goto label_2b50b0;
        }
    }
    ctx->pc = 0x2B5080u;
    // 0x2b5080: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2b5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b5084: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x2b5084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x2b5088: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2b5088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b508c: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2b508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5090: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2b5090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b5094: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5098: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2b5098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b509c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b50a0: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2b50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b50a4: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b50a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2b50a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b50ac: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2b50acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b50b0:
    // 0x2b50b0: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2B50B0u;
    {
        const bool branch_taken_0x2b50b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B50B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B50B0u;
        // 0x2b50b4: 0x3c05008d  lui         $a1, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b50b0) {
            ctx->pc = 0x2B50E8u;
            goto label_2b50e8;
        }
    }
    ctx->pc = 0x2B50B8u;
    // 0x2b50b8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2b50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b50bc: 0x24a55c70  addiu       $a1, $a1, 0x5C70
    ctx->pc = 0x2b50bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23664));
    // 0x2b50c0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x2b50c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2b50c4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2b50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b50c8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2b50c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b50cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b50d0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x2b50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2b50d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b50d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b50d8: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x2b50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b50dc: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x2b50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x2b50e0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2b50e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b50e4: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x2b50e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b50e8:
    // 0x2b50e8: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x2b50e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b50ec: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x2B50ECu;
    SET_GPR_U32(ctx, 31, 0x2B50F4u);
    ctx->pc = 0x2B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B50ECu;
    // 0x2b50f0: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2B50ECu, 0x2B50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B50F4u;
label_2b50f4:
    // 0x2b50f4: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2b50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2b50f8: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x2b50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
    // 0x2b50fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b5100: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2b5100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5104: 0xa2432ac0  sb          $v1, 0x2AC0($s2)
    ctx->pc = 0x2b5104u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10944), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b5108: 0x92442ac0  lbu         $a0, 0x2AC0($s2)
    ctx->pc = 0x2b5108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b510c: 0x2483fff9  addiu       $v1, $a0, -0x7
    ctx->pc = 0x2b510cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x2b5110: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2b5110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b5114: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5114u;
    {
        const bool branch_taken_0x2b5114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5114u;
        // 0x2b5118: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5114) {
            ctx->pc = 0x2B5128u;
            goto label_2b5128;
        }
    }
    ctx->pc = 0x2B511Cu;
    // 0x2b511c: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B511Cu;
    {
        const bool branch_taken_0x2b511c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b511c) {
            ctx->pc = 0x2B5180u;
            goto label_2b5180;
        }
    }
    ctx->pc = 0x2B5124u;
    // 0x2b5124: 0x0  nop
    ctx->pc = 0x2b5124u;
    // NOP
label_2b5128:
    // 0x2b5128: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b5128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b512c: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B512Cu;
    SET_GPR_U32(ctx, 31, 0x2B5134u);
    ctx->pc = 0x2B5130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B512Cu;
    // 0x2b5130: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B512Cu, 0x2B5134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5134u;
label_2b5134:
    // 0x2b5134: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x2b5134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x2b5138: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b5138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b513c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B513Cu;
    SET_GPR_U32(ctx, 31, 0x2B5144u);
    ctx->pc = 0x2B5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B513Cu;
    // 0x2b5140: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B513Cu, 0x2B5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5144u;
label_2b5144:
    // 0x2b5144: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x2b5144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x2b5148: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b5148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b514c: 0x92442ac0  lbu         $a0, 0x2AC0($s2)
    ctx->pc = 0x2b514cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b5150: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5150u;
    {
        const bool branch_taken_0x2b5150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B5154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5150u;
        // 0x2b5154: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5150) {
            ctx->pc = 0x2B5160u;
            goto label_2b5160;
        }
    }
    ctx->pc = 0x2B5158u;
    // 0x2b5158: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5158u;
    {
        const bool branch_taken_0x2b5158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5158) {
            ctx->pc = 0x2B5170u;
            goto label_2b5170;
        }
    }
    ctx->pc = 0x2B5160u;
label_2b5160:
    // 0x2b5160: 0x3c03be86  lui         $v1, 0xBE86
    ctx->pc = 0x2b5160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48774 << 16));
    // 0x2b5164: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x2b5164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2b5168: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5168u;
    {
        const bool branch_taken_0x2b5168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5168u;
        // 0x2b516c: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5168) {
            ctx->pc = 0x2B5180u;
            goto label_2b5180;
        }
    }
    ctx->pc = 0x2B5170u;
label_2b5170:
    // 0x2b5170: 0x3c033e86  lui         $v1, 0x3E86
    ctx->pc = 0x2b5170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16006 << 16));
    // 0x2b5174: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x2b5174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x2b5178: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x2b5178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x2b517c: 0x0  nop
    ctx->pc = 0x2b517cu;
    // NOP
label_2b5180:
    // 0x2b5180: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b5180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b5184: 0xa6430828  sh          $v1, 0x828($s2)
    ctx->pc = 0x2b5184u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5188: 0x240500f1  addiu       $a1, $zero, 0xF1
    ctx->pc = 0x2b5188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    // 0x2b518c: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x2b518cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5190: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b5190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b5194: 0xa640082e  sh          $zero, 0x82E($s2)
    ctx->pc = 0x2b5194u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2094), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5198: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x2b5198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x2b519c: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b519cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b51a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b51a4: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b51a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b51a8: 0xa64507f2  sh          $a1, 0x7F2($s2)
    ctx->pc = 0x2b51a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b51ac: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x2b51acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b51b0: 0xae4407ec  sw          $a0, 0x7EC($s2)
    ctx->pc = 0x2b51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
    // 0x2b51b4: 0xa2430821  sb          $v1, 0x821($s2)
    ctx->pc = 0x2b51b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
label_2b51b8:
    // 0x2b51b8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B51B8u;
    {
        const bool branch_taken_0x2b51b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B51BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51B8u;
        // 0x2b51bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51b8) {
            ctx->pc = 0x2B51C8u;
            goto label_2b51c8;
        }
    }
    ctx->pc = 0x2B51C0u;
    // 0x2b51c0: 0x100003db  b           . + 4 + (0x3DB << 2)
    ctx->pc = 0x2B51C0u;
    {
        const bool branch_taken_0x2b51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51C0u;
        // 0x2b51c4: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51c0) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B51C8u;
label_2b51c8:
    // 0x2b51c8: 0x92442ac0  lbu         $a0, 0x2AC0($s2)
    ctx->pc = 0x2b51c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b51cc: 0x2483fff9  addiu       $v1, $a0, -0x7
    ctx->pc = 0x2b51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967289));
    // 0x2b51d0: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x2b51d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b51d4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B51D4u;
    {
        const bool branch_taken_0x2b51d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B51D4u;
        // 0x2b51d8: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b51d4) {
            ctx->pc = 0x2B51E8u;
            goto label_2b51e8;
        }
    }
    ctx->pc = 0x2B51DCu;
    // 0x2b51dc: 0x14830028  bne         $a0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B51DCu;
    {
        const bool branch_taken_0x2b51dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b51dc) {
            ctx->pc = 0x2B5280u;
            goto label_2b5280;
        }
    }
    ctx->pc = 0x2B51E4u;
    // 0x2b51e4: 0x0  nop
    ctx->pc = 0x2b51e4u;
    // NOP
label_2b51e8:
    // 0x2b51e8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b51ec: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B51ECu;
    SET_GPR_U32(ctx, 31, 0x2B51F4u);
    ctx->pc = 0x2B51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B51ECu;
    // 0x2b51f0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B51ECu, 0x2B51F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B51F4u;
label_2b51f4:
    // 0x2b51f4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x2b51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x2b51f8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2b51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2b51fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2b51fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b5200: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2b5200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2b5204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b5204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5208: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b5208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b520c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b520cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b5210: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b5210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b5214: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b5214u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b5218: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b5218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b521c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2b521cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b5220: 0x0  nop
    ctx->pc = 0x2b5220u;
    // NOP
    // 0x2b5224: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b5224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b5228: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5228u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b522c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2b522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2b5230: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B5230u;
    SET_GPR_U32(ctx, 31, 0x2B5238u);
    ctx->pc = 0x2B5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5230u;
    // 0x2b5234: 0xa64200c2  sh          $v0, 0xC2($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B5230u, 0x2B5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5238u;
label_2b5238:
    // 0x2b5238: 0xc6410098  lwc1        $f1, 0x98($s2)
    ctx->pc = 0x2b5238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b523c: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2B523Cu;
    SET_GPR_U32(ctx, 31, 0x2B5244u);
    ctx->pc = 0x2B5240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B523Cu;
    // 0x2b5240: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2B523Cu, 0x2B5244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5244u;
label_2b5244:
    // 0x2b5244: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b5244u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5248: 0xc096784  jal         func_259E10
    ctx->pc = 0x2B5248u;
    SET_GPR_U32(ctx, 31, 0x2B5250u);
    ctx->pc = 0x2B524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5248u;
    // 0x2b524c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E10u, 0x2B5248u, 0x2B5250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5250u;
label_2b5250:
    // 0x2b5250: 0xc64c0090  lwc1        $f12, 0x90($s2)
    ctx->pc = 0x2b5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5254: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b5254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b5258: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x2B5258u;
    SET_GPR_U32(ctx, 31, 0x2B5260u);
    ctx->pc = 0x2B525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5258u;
    // 0x2b525c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x2B5258u, 0x2B5260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5260u;
label_2b5260:
    // 0x2b5260: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2b5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5264: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2b5264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b526c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2b526cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2b5270: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2b5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5274: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2b5274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5278: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b527c: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x2b527cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
label_2b5280:
    // 0x2b5280: 0x96430828  lhu         $v1, 0x828($s2)
    ctx->pc = 0x2b5280u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b5284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5284u;
    {
        const bool branch_taken_0x2b5284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5284) {
            ctx->pc = 0x2B5298u;
            goto label_2b5298;
        }
    }
    ctx->pc = 0x2B528Cu;
    // 0x2b528c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b5290: 0x100003a7  b           . + 4 + (0x3A7 << 2)
    ctx->pc = 0x2B5290u;
    {
        const bool branch_taken_0x2b5290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5290u;
        // 0x2b5294: 0xa6430828  sh          $v1, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5290) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5298u;
label_2b5298:
    // 0x2b5298: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b5298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b529c: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B529Cu;
    SET_GPR_U32(ctx, 31, 0x2B52A4u);
    ctx->pc = 0x2B52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B529Cu;
    // 0x2b52a0: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B529Cu, 0x2B52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B52A4u;
label_2b52a4:
    // 0x2b52a4: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2b52a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2b52a8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b52ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b52acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b52b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b52b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b52b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b52b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b52b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b52b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b52bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b52bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b52c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b52c0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b52c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b52c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b52c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b52c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b52cc: 0x0  nop
    ctx->pc = 0x2b52ccu;
    // NOP
    // 0x2b52d0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2b52d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2b52d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2b52d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2b52d8: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2b52d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2b52dc: 0xa64400c2  sh          $a0, 0xC2($s2)
    ctx->pc = 0x2b52dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b52e0: 0x92462ac0  lbu         $a2, 0x2AC0($s2)
    ctx->pc = 0x2b52e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b52e4: 0x2cc1000b  sltiu       $at, $a2, 0xB
    ctx->pc = 0x2b52e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2b52e8: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B52E8u;
    {
        const bool branch_taken_0x2b52e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B52E8u;
        // 0x2b52ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b52e8) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B52F0u;
    // 0x2b52f0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2b52f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2b52f4: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2b52f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2b52f8: 0x24a57400  addiu       $a1, $a1, 0x7400
    ctx->pc = 0x2b52f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29696));
    // 0x2b52fc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b52fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b5300: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2b5300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5304: 0x800008  jr          $a0
    ctx->pc = 0x2B5304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5310u: goto label_2b5310;
            case 0x2B5318u: goto label_2b5318;
            case 0x2B5320u: goto label_2b5320;
            case 0x2B5328u: goto label_2b5328;
            case 0x2B5338u: goto label_2b5338;
            case 0x2B5340u: goto label_2b5340;
            case 0x2B5350u: goto label_2b5350;
            case 0x2B5358u: goto label_2b5358;
            case 0x2B5368u: goto label_2b5368;
            case 0x2B5370u: goto label_2b5370;
            case 0x2B5378u: goto label_2b5378;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5304u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B530Cu;
    // 0x2b530c: 0x0  nop
    ctx->pc = 0x2b530cu;
    // NOP
label_2b5310:
    // 0x2b5310: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B5310u;
    {
        const bool branch_taken_0x2b5310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5310u;
        // 0x2b5314: 0x64130060  daddiu      $s3, $zero, 0x60 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5310) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5318u;
label_2b5318:
    // 0x2b5318: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2B5318u;
    {
        const bool branch_taken_0x2b5318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B531Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5318u;
        // 0x2b531c: 0x64130060  daddiu      $s3, $zero, 0x60 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5318) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5320u;
label_2b5320:
    // 0x2b5320: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B5320u;
    {
        const bool branch_taken_0x2b5320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5320u;
        // 0x2b5324: 0x64130061  daddiu      $s3, $zero, 0x61 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)97);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5320) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5328u;
label_2b5328:
    // 0x2b5328: 0x6413006f  daddiu      $s3, $zero, 0x6F
    ctx->pc = 0x2b5328u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)111);
    // 0x2b532c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B532Cu;
    {
        const bool branch_taken_0x2b532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B532Cu;
        // 0x2b5330: 0x64030080  daddiu      $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b532c) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5334u;
    // 0x2b5334: 0x0  nop
    ctx->pc = 0x2b5334u;
    // NOP
label_2b5338:
    // 0x2b5338: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2B5338u;
    {
        const bool branch_taken_0x2b5338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5338u;
        // 0x2b533c: 0x64130061  daddiu      $s3, $zero, 0x61 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)97);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5338) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5340u;
label_2b5340:
    // 0x2b5340: 0x6413006f  daddiu      $s3, $zero, 0x6F
    ctx->pc = 0x2b5340u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)111);
    // 0x2b5344: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B5344u;
    {
        const bool branch_taken_0x2b5344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5344u;
        // 0x2b5348: 0x64030080  daddiu      $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5344) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B534Cu;
    // 0x2b534c: 0x0  nop
    ctx->pc = 0x2b534cu;
    // NOP
label_2b5350:
    // 0x2b5350: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5350u;
    {
        const bool branch_taken_0x2b5350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5350u;
        // 0x2b5354: 0x64130061  daddiu      $s3, $zero, 0x61 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)97);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5350) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5358u;
label_2b5358:
    // 0x2b5358: 0x6413006f  daddiu      $s3, $zero, 0x6F
    ctx->pc = 0x2b5358u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)111);
    // 0x2b535c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B535Cu;
    {
        const bool branch_taken_0x2b535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B535Cu;
        // 0x2b5360: 0x64030080  daddiu      $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b535c) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5364u;
    // 0x2b5364: 0x0  nop
    ctx->pc = 0x2b5364u;
    // NOP
label_2b5368:
    // 0x2b5368: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5368u;
    {
        const bool branch_taken_0x2b5368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5368u;
        // 0x2b536c: 0x64130061  daddiu      $s3, $zero, 0x61 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)97);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5368) {
            ctx->pc = 0x2B5378u;
            goto label_2b5378;
        }
    }
    ctx->pc = 0x2B5370u;
label_2b5370:
    // 0x2b5370: 0x6413006f  daddiu      $s3, $zero, 0x6F
    ctx->pc = 0x2b5370u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)111);
    // 0x2b5374: 0x64030080  daddiu      $v1, $zero, 0x80
    ctx->pc = 0x2b5374u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
label_2b5378:
    // 0x2b5378: 0x92490002  lbu         $t1, 0x2($s2)
    ctx->pc = 0x2b5378u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b537c: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x2b537cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x2b5380: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2b5380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2b5384: 0x25084f40  addiu       $t0, $t0, 0x4F40
    ctx->pc = 0x2b5384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20288));
    // 0x2b5388: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x2b5388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b538c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5390: 0x3c048004  lui         $a0, 0x8004
    ctx->pc = 0x2b5390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32772 << 16));
    // 0x2b5394: 0x312a000f  andi        $t2, $t1, 0xF
    ctx->pc = 0x2b5394u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2b5398: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x2b5398u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2b539c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2b539cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b53a0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x2b53a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2b53a4: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2b53a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b53a8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2b53a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2b53ac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2b53acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b53b0: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2b53b0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b53b4: 0xa6470828  sh          $a3, 0x828($s2)
    ctx->pc = 0x2b53b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b53b8: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b53b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b53bc: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b53bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b53c0: 0xa64607f2  sh          $a2, 0x7F2($s2)
    ctx->pc = 0x2b53c0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b53c4: 0xa24507f5  sb          $a1, 0x7F5($s2)
    ctx->pc = 0x2b53c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b53c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B53C8u;
    {
        const bool branch_taken_0x2b53c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53C8u;
        // 0x2b53cc: 0xae4407ec  sw          $a0, 0x7EC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53c8) {
            ctx->pc = 0x2B53D8u;
            goto label_2b53d8;
        }
    }
    ctx->pc = 0x2B53D0u;
    // 0x2b53d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b53d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b53d4: 0xa64307f0  sh          $v1, 0x7F0($s2)
    ctx->pc = 0x2b53d4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 3));
label_2b53d8:
    // 0x2b53d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b53d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b53dc: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x2B53DCu;
    {
        const bool branch_taken_0x2b53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53DCu;
        // 0x2b53e0: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53dc) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B53E4u;
    // 0x2b53e4: 0x0  nop
    ctx->pc = 0x2b53e4u;
    // NOP
label_2b53e8:
    // 0x2b53e8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B53E8u;
    {
        const bool branch_taken_0x2b53e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B53ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53E8u;
        // 0x2b53ec: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53e8) {
            ctx->pc = 0x2B53F8u;
            goto label_2b53f8;
        }
    }
    ctx->pc = 0x2B53F0u;
    // 0x2b53f0: 0x1000034f  b           . + 4 + (0x34F << 2)
    ctx->pc = 0x2B53F0u;
    {
        const bool branch_taken_0x2b53f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B53F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B53F0u;
        // 0x2b53f4: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b53f0) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B53F8u;
label_2b53f8:
    // 0x2b53f8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b53f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b53fc: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B53FCu;
    SET_GPR_U32(ctx, 31, 0x2B5404u);
    ctx->pc = 0x2B5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B53FCu;
    // 0x2b5400: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B53FCu, 0x2B5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5404u;
label_2b5404:
    // 0x2b5404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5408: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2B5408u;
    SET_GPR_U32(ctx, 31, 0x2B5410u);
    ctx->pc = 0x2B540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5408u;
    // 0x2b540c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4830u, 0x2B5408u, 0x2B5410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5410u;
label_2b5410:
    // 0x2b5410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b5414: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2b5414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2b5418: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5418u;
    {
        const bool branch_taken_0x2b5418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5418) {
            ctx->pc = 0x2B5430u;
            goto label_2b5430;
        }
    }
    ctx->pc = 0x2B5420u;
    // 0x2b5420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5424: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B5424u;
    {
        const bool branch_taken_0x2b5424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5424u;
        // 0x2b5428: 0xa2422ac0  sb          $v0, 0x2AC0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10944), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5424) {
            ctx->pc = 0x2B54D0u;
            goto label_2b54d0;
        }
    }
    ctx->pc = 0x2B542Cu;
    // 0x2b542c: 0x0  nop
    ctx->pc = 0x2b542cu;
    // NOP
label_2b5430:
    // 0x2b5430: 0x92432ac0  lbu         $v1, 0x2AC0($s2)
    ctx->pc = 0x2b5430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b5434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5438: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5438u;
    {
        const bool branch_taken_0x2b5438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5438u;
        // 0x2b543c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5438) {
            ctx->pc = 0x2B5450u;
            goto label_2b5450;
        }
    }
    ctx->pc = 0x2B5440u;
    // 0x2b5440: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2b5440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2b5444: 0xa0225c70  sb          $v0, 0x5C70($at)
    ctx->pc = 0x2b5444u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8D5C70u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D5C70u, _value); } while (0);
    // 0x2b5448: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b5448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b544c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b544cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b5450:
    // 0x2b5450: 0x92422ac0  lbu         $v0, 0x2AC0($s2)
    ctx->pc = 0x2b5450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b5454: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5458: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5458u;
    {
        const bool branch_taken_0x2b5458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B545Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5458u;
        // 0x2b545c: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5458) {
            ctx->pc = 0x2B5478u;
            goto label_2b5478;
        }
    }
    ctx->pc = 0x2B5460u;
    // 0x2b5460: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2b5460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b5464: 0x24425c70  addiu       $v0, $v0, 0x5C70
    ctx->pc = 0x2b5464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23664));
    // 0x2b5468: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b5468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b546c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b546cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b5470: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2b5470u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5474: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b5474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b5478:
    // 0x2b5478: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2b5478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b547c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b547cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b5480: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5480u;
    {
        const bool branch_taken_0x2b5480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5480) {
            ctx->pc = 0x2B54B0u;
            goto label_2b54b0;
        }
    }
    ctx->pc = 0x2B5488u;
    // 0x2b5488: 0x92422ac0  lbu         $v0, 0x2AC0($s2)
    ctx->pc = 0x2b5488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b548c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5490: 0x10440007  beq         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5490u;
    {
        const bool branch_taken_0x2b5490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B5494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5490u;
        // 0x2b5494: 0x3c02008d  lui         $v0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5490) {
            ctx->pc = 0x2B54B0u;
            goto label_2b54b0;
        }
    }
    ctx->pc = 0x2B5498u;
    // 0x2b5498: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2b5498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b549c: 0x24425c70  addiu       $v0, $v0, 0x5C70
    ctx->pc = 0x2b549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23664));
    // 0x2b54a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b54a4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2b54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b54a8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2b54a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b54ac: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2b54acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b54b0:
    // 0x2b54b0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2b54b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2b54b4: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x2B54B4u;
    SET_GPR_U32(ctx, 31, 0x2B54BCu);
    ctx->pc = 0x2B54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54B4u;
    // 0x2b54b8: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2B54B4u, 0x2B54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54BCu;
label_2b54bc:
    // 0x2b54bc: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x2b54bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x2b54c0: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x2b54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
    // 0x2b54c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b54c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2b54c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b54cc: 0xa2422ac0  sb          $v0, 0x2AC0($s2)
    ctx->pc = 0x2b54ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10944), (uint8_t)GPR_U32(ctx, 2));
label_2b54d0:
    // 0x2b54d0: 0x92432ac0  lbu         $v1, 0x2AC0($s2)
    ctx->pc = 0x2b54d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b54d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b54d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b54d8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B54D8u;
    {
        const bool branch_taken_0x2b54d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B54DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54D8u;
        // 0x2b54dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54d8) {
            ctx->pc = 0x2B5520u;
            goto label_2b5520;
        }
    }
    ctx->pc = 0x2B54E0u;
    // 0x2b54e0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B54E0u;
    {
        const bool branch_taken_0x2b54e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b54e0) {
            ctx->pc = 0x2B5518u;
            goto label_2b5518;
        }
    }
    ctx->pc = 0x2B54E8u;
    // 0x2b54e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b54e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b54ec: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B54ECu;
    {
        const bool branch_taken_0x2b54ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B54F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B54ECu;
        // 0x2b54f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b54ec) {
            ctx->pc = 0x2B5510u;
            goto label_2b5510;
        }
    }
    ctx->pc = 0x2B54F4u;
    // 0x2b54f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B54F4u;
    {
        const bool branch_taken_0x2b54f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b54f4) {
            ctx->pc = 0x2B5508u;
            goto label_2b5508;
        }
    }
    ctx->pc = 0x2B54FCu;
    // 0x2b54fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B54FCu;
    {
        const bool branch_taken_0x2b54fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b54fc) {
            ctx->pc = 0x2B5528u;
            goto label_2b5528;
        }
    }
    ctx->pc = 0x2B5504u;
    // 0x2b5504: 0x0  nop
    ctx->pc = 0x2b5504u;
    // NOP
label_2b5508:
    // 0x2b5508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5508u;
    {
        const bool branch_taken_0x2b5508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5508u;
        // 0x2b550c: 0x64130060  daddiu      $s3, $zero, 0x60 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5508) {
            ctx->pc = 0x2B5528u;
            goto label_2b5528;
        }
    }
    ctx->pc = 0x2B5510u;
label_2b5510:
    // 0x2b5510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5510u;
    {
        const bool branch_taken_0x2b5510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5510u;
        // 0x2b5514: 0x64130060  daddiu      $s3, $zero, 0x60 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5510) {
            ctx->pc = 0x2B5528u;
            goto label_2b5528;
        }
    }
    ctx->pc = 0x2B5518u;
label_2b5518:
    // 0x2b5518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5518u;
    {
        const bool branch_taken_0x2b5518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5518u;
        // 0x2b551c: 0x64130061  daddiu      $s3, $zero, 0x61 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)97);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5518) {
            ctx->pc = 0x2B5528u;
            goto label_2b5528;
        }
    }
    ctx->pc = 0x2B5520u;
label_2b5520:
    // 0x2b5520: 0x6413006f  daddiu      $s3, $zero, 0x6F
    ctx->pc = 0x2b5520u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)111);
    // 0x2b5524: 0x0  nop
    ctx->pc = 0x2b5524u;
    // NOP
label_2b5528:
    // 0x2b5528: 0x92490002  lbu         $t1, 0x2($s2)
    ctx->pc = 0x2b5528u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b552c: 0x3c08004e  lui         $t0, 0x4E
    ctx->pc = 0x2b552cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)78 << 16));
    // 0x2b5530: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x2b5530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b5534: 0x25084f40  addiu       $t0, $t0, 0x4F40
    ctx->pc = 0x2b5534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20288));
    // 0x2b5538: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b5538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b553c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2b553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2b5540: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x2b5540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
    // 0x2b5544: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2b5544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b5548: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2b5548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b554c: 0x312a000f  andi        $t2, $t1, 0xF
    ctx->pc = 0x2b554cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2b5550: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x2b5550u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2b5554: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2b5554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b5558: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x2b5558u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2b555c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2b555cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2b5560: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x2b5560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x2b5564: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2b5564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2b5568: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2b5568u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2b556c: 0xa6470828  sh          $a3, 0x828($s2)
    ctx->pc = 0x2b556cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 7));
    // 0x2b5570: 0xa64607f0  sh          $a2, 0x7F0($s2)
    ctx->pc = 0x2b5570u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 6));
    // 0x2b5574: 0xa24007f6  sb          $zero, 0x7F6($s2)
    ctx->pc = 0x2b5574u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5578: 0xa24007f4  sb          $zero, 0x7F4($s2)
    ctx->pc = 0x2b5578u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b557c: 0xa64307f2  sh          $v1, 0x7F2($s2)
    ctx->pc = 0x2b557cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5580: 0xa24007f5  sb          $zero, 0x7F5($s2)
    ctx->pc = 0x2b5580u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b5584: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x2B5584u;
    SET_GPR_U32(ctx, 31, 0x2B558Cu);
    ctx->pc = 0x2B5588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5584u;
    // 0x2b5588: 0xae4207ec  sw          $v0, 0x7EC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2028), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x2B5584u, 0x2B558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B558Cu;
label_2b558c:
    // 0x2b558c: 0x3c044500  lui         $a0, 0x4500
    ctx->pc = 0x2b558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17664 << 16));
    // 0x2b5590: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2b5590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2b5594: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2b5594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b5598: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2b5598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2b559c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b559cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b55a0: 0x0  nop
    ctx->pc = 0x2b55a0u;
    // NOP
    // 0x2b55a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2b55a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2b55a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b55a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b55ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2b55acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2b55b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b55b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2b55b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2b55b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2b55b8: 0x0  nop
    ctx->pc = 0x2b55b8u;
    // NOP
    // 0x2b55bc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x2b55bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2b55c0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2b55c0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2b55c4: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x2b55c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x2b55c8: 0xa64400c2  sh          $a0, 0xC2($s2)
    ctx->pc = 0x2b55c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 194), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b55cc: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x2b55ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b55d0: 0x100002d7  b           . + 4 + (0x2D7 << 2)
    ctx->pc = 0x2B55D0u;
    {
        const bool branch_taken_0x2b55d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55D0u;
        // 0x2b55d4: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55d0) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B55D8u;
label_2b55d8:
    // 0x2b55d8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B55D8u;
    {
        const bool branch_taken_0x2b55d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55D8u;
        // 0x2b55dc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55d8) {
            ctx->pc = 0x2B55E8u;
            goto label_2b55e8;
        }
    }
    ctx->pc = 0x2B55E0u;
    // 0x2b55e0: 0x100002d3  b           . + 4 + (0x2D3 << 2)
    ctx->pc = 0x2B55E0u;
    {
        const bool branch_taken_0x2b55e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55E0u;
        // 0x2b55e4: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55e0) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B55E8u;
label_2b55e8:
    // 0x2b55e8: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x2b55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b55ec: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2b55ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2b55f0: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x2b55f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x2b55f4: 0x96420828  lhu         $v0, 0x828($s2)
    ctx->pc = 0x2b55f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2088)));
    // 0x2b55f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B55F8u;
    {
        const bool branch_taken_0x2b55f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b55f8) {
            ctx->pc = 0x2B5610u;
            goto label_2b5610;
        }
    }
    ctx->pc = 0x2B5600u;
    // 0x2b5600: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b5600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b5604: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B5604u;
    {
        const bool branch_taken_0x2b5604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5604u;
        // 0x2b5608: 0xa6420828  sh          $v0, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5604) {
            ctx->pc = 0x2B5670u;
            goto label_2b5670;
        }
    }
    ctx->pc = 0x2B560Cu;
    // 0x2b560c: 0x0  nop
    ctx->pc = 0x2b560cu;
    // NOP
label_2b5610:
    // 0x2b5610: 0x92432ac0  lbu         $v1, 0x2AC0($s2)
    ctx->pc = 0x2b5610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b5614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5618: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5618u;
    {
        const bool branch_taken_0x2b5618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5618u;
        // 0x2b561c: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5618) {
            ctx->pc = 0x2B5640u;
            goto label_2b5640;
        }
    }
    ctx->pc = 0x2B5620u;
    // 0x2b5620: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5624: 0x24637368  addiu       $v1, $v1, 0x7368
    ctx->pc = 0x2b5624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29544));
    // 0x2b5628: 0x24427370  addiu       $v0, $v0, 0x7370
    ctx->pc = 0x2b5628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
    // 0x2b562c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2b562cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2b5630: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b5630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b5634: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2b5634u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5638: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5638u;
    {
        const bool branch_taken_0x2b5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5638u;
        // 0x2b563c: 0x90660000  lbu         $a2, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5638) {
            ctx->pc = 0x2B5660u;
            goto label_2b5660;
        }
    }
    ctx->pc = 0x2B5640u;
label_2b5640:
    // 0x2b5640: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5644: 0x24427380  addiu       $v0, $v0, 0x7380
    ctx->pc = 0x2b5644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29568));
    // 0x2b5648: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2b5648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b564c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b564cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5650: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x2b5650u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5654: 0x24427388  addiu       $v0, $v0, 0x7388
    ctx->pc = 0x2b5654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29576));
    // 0x2b5658: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b5658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b565c: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x2b565cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5660:
    // 0x2b5660: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x2b5660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x2b5664: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5668: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x2B5668u;
    SET_GPR_U32(ctx, 31, 0x2B5670u);
    ctx->pc = 0x2B566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5668u;
    // 0x2b566c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x2B5668u, 0x2B5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5670u;
label_2b5670:
    // 0x2b5670: 0xc09e8d0  jal         func_27A340
    ctx->pc = 0x2B5670u;
    SET_GPR_U32(ctx, 31, 0x2B5678u);
    ctx->pc = 0x2B5674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5670u;
    // 0x2b5674: 0x264401c0  addiu       $a0, $s2, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A340u, 0x2B5670u, 0x2B5678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5678u;
label_2b5678:
    // 0x2b5678: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x2B5678u;
    {
        const bool branch_taken_0x2b5678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5678) {
            ctx->pc = 0x2B5988u;
            goto label_2b5988;
        }
    }
    ctx->pc = 0x2B5680u;
    // 0x2b5680: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2b5680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b5684: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b5684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b5688: 0xa64207f0  sh          $v0, 0x7F0($s2)
    ctx->pc = 0x2b5688u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b568c: 0x24637390  addiu       $v1, $v1, 0x7390
    ctx->pc = 0x2b568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29584));
    // 0x2b5690: 0x924408e8  lbu         $a0, 0x8E8($s2)
    ctx->pc = 0x2b5690u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b5694: 0x92022ab0  lbu         $v0, 0x2AB0($s0)
    ctx->pc = 0x2b5694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x2b5698: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b569c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2b569cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b56a0: 0x601827  not         $v1, $v1
    ctx->pc = 0x2b56a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x2b56a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b56a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b56a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b56a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b56ac: 0xa2022ab0  sb          $v0, 0x2AB0($s0)
    ctx->pc = 0x2b56acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10928), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b56b0: 0x96420826  lhu         $v0, 0x826($s2)
    ctx->pc = 0x2b56b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b56b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b56b8: 0xa6420826  sh          $v0, 0x826($s2)
    ctx->pc = 0x2b56b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2086), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b56bc: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x2b56bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2b56c0: 0x7e422ae0  sq          $v0, 0x2AE0($s2)
    ctx->pc = 0x2b56c0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 10976), GPR_VEC(ctx, 2));
    // 0x2b56c4: 0x92022b08  lbu         $v0, 0x2B08($s0)
    ctx->pc = 0x2b56c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11016)));
    // 0x2b56c8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B56C8u;
    {
        const bool branch_taken_0x2b56c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56c8) {
            ctx->pc = 0x2B57E8u;
            goto label_2b57e8;
        }
    }
    ctx->pc = 0x2B56D0u;
    // 0x2b56d0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x2b56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b56d4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2b56d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b56d8: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2B56D8u;
    {
        const bool branch_taken_0x2b56d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b56d8) {
            ctx->pc = 0x2B57E8u;
            goto label_2b57e8;
        }
    }
    ctx->pc = 0x2B56E0u;
    // 0x2b56e0: 0x9642082a  lhu         $v0, 0x82A($s2)
    ctx->pc = 0x2b56e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b56e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2b56e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2b56e8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2B56E8u;
    {
        const bool branch_taken_0x2b56e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56E8u;
        // 0x2b56ec: 0xa642082a  sh          $v0, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56e8) {
            ctx->pc = 0x2B5718u;
            goto label_2b5718;
        }
    }
    ctx->pc = 0x2B56F0u;
    // 0x2b56f0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B56F0u;
    SET_GPR_U32(ctx, 31, 0x2B56F8u);
    ctx->pc = 0x2B56F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56F0u;
    // 0x2b56f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B56F0u, 0x2B56F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56F8u;
label_2b56f8:
    // 0x2b56f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56fc: 0x924508e8  lbu         $a1, 0x8E8($s2)
    ctx->pc = 0x2b56fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b5700: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b5700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b5704: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2b5704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2b5708: 0xc0a8fa0  jal         func_2A3E80
    ctx->pc = 0x2B5708u;
    SET_GPR_U32(ctx, 31, 0x2B5710u);
    ctx->pc = 0x2B570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5708u;
    // 0x2b570c: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E80u, 0x2B5708u, 0x2B5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5710u;
label_2b5710:
    // 0x2b5710: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5710u;
    {
        const bool branch_taken_0x2b5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5710) {
            ctx->pc = 0x2B5738u;
            goto label_2b5738;
        }
    }
    ctx->pc = 0x2B5718u;
label_2b5718:
    // 0x2b5718: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B5718u;
    SET_GPR_U32(ctx, 31, 0x2B5720u);
    ctx->pc = 0x2B571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5718u;
    // 0x2b571c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B5718u, 0x2B5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5720u;
label_2b5720:
    // 0x2b5720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5724: 0x924508e8  lbu         $a1, 0x8E8($s2)
    ctx->pc = 0x2b5724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b5728: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b5728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b572c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2b572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2b5730: 0xc0a8fc4  jal         func_2A3F10
    ctx->pc = 0x2B5730u;
    SET_GPR_U32(ctx, 31, 0x2B5738u);
    ctx->pc = 0x2B5734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5730u;
    // 0x2b5734: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3F10u, 0x2B5730u, 0x2B5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5738u;
label_2b5738:
    // 0x2b5738: 0x92432abe  lbu         $v1, 0x2ABE($s2)
    ctx->pc = 0x2b5738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b573c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b573cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5740: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B5740u;
    {
        const bool branch_taken_0x2b5740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5740u;
        // 0x2b5744: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5740) {
            ctx->pc = 0x2B57E8u;
            goto label_2b57e8;
        }
    }
    ctx->pc = 0x2B5748u;
    // 0x2b5748: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2b5748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2b574c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b574cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5750: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2b5750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b5754: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2B5754u;
    SET_GPR_U32(ctx, 31, 0x2B575Cu);
    ctx->pc = 0x2B5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5754u;
    // 0x2b5758: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2B5754u, 0x2B575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B575Cu;
label_2b575c:
    // 0x2b575c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2b575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2b5760: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b5760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b5764: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b5764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5768: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x2b5768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x2b576c: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2b576cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2b5770: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2b5774: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2b5774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b5778: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b5778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b577c: 0xc0c14f8  jal         func_3053E0
    ctx->pc = 0x2B577Cu;
    SET_GPR_U32(ctx, 31, 0x2B5784u);
    ctx->pc = 0x2B5780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B577Cu;
    // 0x2b5780: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053E0u, 0x2B577Cu, 0x2B5784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5784u;
label_2b5784:
    // 0x2b5784: 0x8e452ab4  lw          $a1, 0x2AB4($s2)
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10932)));
    // 0x2b5788: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5788u;
    {
        const bool branch_taken_0x2b5788 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5788u;
        // 0x2b578c: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5788) {
            ctx->pc = 0x2B57A8u;
            goto label_2b57a8;
        }
    }
    ctx->pc = 0x2B5790u;
    // 0x2b5790: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b5790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5794: 0xc0c0cfc  jal         func_3033F0
    ctx->pc = 0x2B5794u;
    SET_GPR_U32(ctx, 31, 0x2B579Cu);
    ctx->pc = 0x2B5798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5794u;
    // 0x2b5798: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3033F0u, 0x2B5794u, 0x2B579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B579Cu;
label_2b579c:
    // 0x2b579c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B579Cu;
    {
        const bool branch_taken_0x2b579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b579c) {
            ctx->pc = 0x2B57B0u;
            goto label_2b57b0;
        }
    }
    ctx->pc = 0x2B57A4u;
    // 0x2b57a4: 0x0  nop
    ctx->pc = 0x2b57a4u;
    // NOP
label_2b57a8:
    // 0x2b57a8: 0xae422ab4  sw          $v0, 0x2AB4($s2)
    ctx->pc = 0x2b57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10932), GPR_U32(ctx, 2));
    // 0x2b57ac: 0x0  nop
    ctx->pc = 0x2b57acu;
    // NOP
label_2b57b0:
    // 0x2b57b0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2b57b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2b57b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b57b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b57b8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b57b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b57bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b57bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b57c0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2b57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2b57c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b57c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b57c8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b57c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b57cc: 0xc0c14f8  jal         func_3053E0
    ctx->pc = 0x2B57CCu;
    SET_GPR_U32(ctx, 31, 0x2B57D4u);
    ctx->pc = 0x2B57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B57CCu;
    // 0x2b57d0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053E0u, 0x2B57CCu, 0x2B57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57D4u;
label_2b57d4:
    // 0x2b57d4: 0x8e452ab4  lw          $a1, 0x2AB4($s2)
    ctx->pc = 0x2b57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10932)));
    // 0x2b57d8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2b57d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2b57dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b57dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b57e0: 0xc0c0cfc  jal         func_3033F0
    ctx->pc = 0x2B57E0u;
    SET_GPR_U32(ctx, 31, 0x2B57E8u);
    ctx->pc = 0x2B57E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B57E0u;
    // 0x2b57e4: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3033F0u, 0x2B57E0u, 0x2B57E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B57E8u;
label_2b57e8:
    // 0x2b57e8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2b57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b57ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2b57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2b57f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b57f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b57f4: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x2b57f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2b57f8: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x2b57f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b57fc: 0x7e430090  sq          $v1, 0x90($s2)
    ctx->pc = 0x2b57fcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), GPR_VEC(ctx, 3));
    // 0x2b5800: 0xae42009c  sw          $v0, 0x9C($s2)
    ctx->pc = 0x2b5800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
    // 0x2b5804: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x2b5804u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b5808: 0xa2440821  sb          $a0, 0x821($s2)
    ctx->pc = 0x2b5808u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b580c: 0x92422ac0  lbu         $v0, 0x2AC0($s2)
    ctx->pc = 0x2b580cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b5810: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x2b5810u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2b5814: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B5814u;
    {
        const bool branch_taken_0x2b5814 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5814u;
        // 0x2b5818: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5814) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B581Cu;
    // 0x2b581c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b581cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b5820: 0x246373d0  addiu       $v1, $v1, 0x73D0
    ctx->pc = 0x2b5820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29648));
    // 0x2b5824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b5828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b582c: 0x400008  jr          $v0
    ctx->pc = 0x2B582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5838u: goto label_2b5838;
            case 0x2B5840u: goto label_2b5840;
            case 0x2B5850u: goto label_2b5850;
            case 0x2B5860u: goto label_2b5860;
            case 0x2B5870u: goto label_2b5870;
            case 0x2B5880u: goto label_2b5880;
            case 0x2B5890u: goto label_2b5890;
            case 0x2B58A0u: goto label_2b58a0;
            case 0x2B58B0u: goto label_2b58b0;
            case 0x2B58C0u: goto label_2b58c0;
            case 0x2B58C8u: goto label_2b58c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B582Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B5834u;
    // 0x2b5834: 0x0  nop
    ctx->pc = 0x2b5834u;
    // NOP
label_2b5838:
    // 0x2b5838: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B5838u;
    {
        const bool branch_taken_0x2b5838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5838u;
        // 0x2b583c: 0xa2440821  sb          $a0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5838) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B5840u;
label_2b5840:
    // 0x2b5840: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5844: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B5844u;
    {
        const bool branch_taken_0x2b5844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5844u;
        // 0x2b5848: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5844) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B584Cu;
    // 0x2b584c: 0x0  nop
    ctx->pc = 0x2b584cu;
    // NOP
label_2b5850:
    // 0x2b5850: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5854: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2B5854u;
    {
        const bool branch_taken_0x2b5854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5854u;
        // 0x2b5858: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5854) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B585Cu;
    // 0x2b585c: 0x0  nop
    ctx->pc = 0x2b585cu;
    // NOP
label_2b5860:
    // 0x2b5860: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5864: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2B5864u;
    {
        const bool branch_taken_0x2b5864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5864u;
        // 0x2b5868: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5864) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B586Cu;
    // 0x2b586c: 0x0  nop
    ctx->pc = 0x2b586cu;
    // NOP
label_2b5870:
    // 0x2b5870: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5874: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5874u;
    {
        const bool branch_taken_0x2b5874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5874u;
        // 0x2b5878: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5874) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B587Cu;
    // 0x2b587c: 0x0  nop
    ctx->pc = 0x2b587cu;
    // NOP
label_2b5880:
    // 0x2b5880: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5884: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B5884u;
    {
        const bool branch_taken_0x2b5884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5884u;
        // 0x2b5888: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5884) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B588Cu;
    // 0x2b588c: 0x0  nop
    ctx->pc = 0x2b588cu;
    // NOP
label_2b5890:
    // 0x2b5890: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b5890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5894: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B5894u;
    {
        const bool branch_taken_0x2b5894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5894u;
        // 0x2b5898: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5894) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B589Cu;
    // 0x2b589c: 0x0  nop
    ctx->pc = 0x2b589cu;
    // NOP
label_2b58a0:
    // 0x2b58a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b58a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B58A4u;
    {
        const bool branch_taken_0x2b58a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58A4u;
        // 0x2b58a8: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58a4) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B58ACu;
    // 0x2b58ac: 0x0  nop
    ctx->pc = 0x2b58acu;
    // NOP
label_2b58b0:
    // 0x2b58b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b58b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B58B4u;
    {
        const bool branch_taken_0x2b58b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B58B4u;
        // 0x2b58b8: 0xa2420821  sb          $v0, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b58b4) {
            ctx->pc = 0x2B58C8u;
            goto label_2b58c8;
        }
    }
    ctx->pc = 0x2B58BCu;
    // 0x2b58bc: 0x0  nop
    ctx->pc = 0x2b58bcu;
    // NOP
label_2b58c0:
    // 0x2b58c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b58c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b58c4: 0xa2420821  sb          $v0, 0x821($s2)
    ctx->pc = 0x2b58c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 2));
label_2b58c8:
    // 0x2b58c8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2b58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2b58cc: 0xa6420828  sh          $v0, 0x828($s2)
    ctx->pc = 0x2b58ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b58d0: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2b58d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2b58d4: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2b58d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b58d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2b58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2b58dc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b58dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b58e0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x2b58e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2b58e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b58e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b58e8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x2b58e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x2b58ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b58f0: 0x92442ac0  lbu         $a0, 0x2AC0($s2)
    ctx->pc = 0x2b58f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b58f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b58f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b58f8: 0x24a54f80  addiu       $a1, $a1, 0x4F80
    ctx->pc = 0x2b58f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20352));
    // 0x2b58fc: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x2b58fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2b5900: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b5900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b5904: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5908: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b590c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5910: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2b5910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b5914: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b5918: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2b5918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b591c: 0xa642082e  sh          $v0, 0x82E($s2)
    ctx->pc = 0x2b591cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2094), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b5920: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b5920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5924: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b5924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b5928: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b5928u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b592c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b592cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5930: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5930u;
    {
        const bool branch_taken_0x2b5930 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5930) {
            ctx->pc = 0x2B5948u;
            goto label_2b5948;
        }
    }
    ctx->pc = 0x2B5938u;
    // 0x2b5938: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b5938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b593c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b593cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b5940: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5940u;
    {
        const bool branch_taken_0x2b5940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5940u;
        // 0x2b5944: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5940) {
            ctx->pc = 0x2B5964u;
            goto label_2b5964;
        }
    }
    ctx->pc = 0x2B5948u;
label_2b5948:
    // 0x2b5948: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b5948u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b594c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b5950: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b5950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b5954: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b5954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b5958: 0x0  nop
    ctx->pc = 0x2b5958u;
    // NOP
    // 0x2b595c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b595cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b5960: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2b5960u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2b5964:
    // 0x2b5964: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x2b5964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x2b5968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b5968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b596c: 0xc0538e0  jal         func_14E380
    ctx->pc = 0x2B596Cu;
    SET_GPR_U32(ctx, 31, 0x2B5974u);
    ctx->pc = 0x2B5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B596Cu;
    // 0x2b5970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E380u, 0x2B596Cu, 0x2B5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5974u;
label_2b5974:
    // 0x2b5974: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b5974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b5978: 0x3063ff3f  andi        $v1, $v1, 0xFF3F
    ctx->pc = 0x2b5978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65343);
    // 0x2b597c: 0x100001ec  b           . + 4 + (0x1EC << 2)
    ctx->pc = 0x2B597Cu;
    {
        const bool branch_taken_0x2b597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B597Cu;
        // 0x2b5980: 0xa643082a  sh          $v1, 0x82A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b597c) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5984u;
    // 0x2b5984: 0x0  nop
    ctx->pc = 0x2b5984u;
    // NOP
label_2b5988:
    // 0x2b5988: 0x9644082c  lhu         $a0, 0x82C($s2)
    ctx->pc = 0x2b5988u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b598c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2b598cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b5990: 0x28810015  slti        $at, $a0, 0x15
    ctx->pc = 0x2b5990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x2b5994: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5994u;
    {
        const bool branch_taken_0x2b5994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5994u;
        // 0x2b5998: 0xa643082c  sh          $v1, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5994) {
            ctx->pc = 0x2B59C0u;
            goto label_2b59c0;
        }
    }
    ctx->pc = 0x2B599Cu;
    // 0x2b599c: 0x9645082a  lhu         $a1, 0x82A($s2)
    ctx->pc = 0x2b599cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b59a0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2b59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b59a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b59a8: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2b59a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2b59ac: 0xa645082a  sh          $a1, 0x82A($s2)
    ctx->pc = 0x2b59acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b59b0: 0xa640082c  sh          $zero, 0x82C($s2)
    ctx->pc = 0x2b59b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b59b4: 0xa64407f0  sh          $a0, 0x7F0($s2)
    ctx->pc = 0x2b59b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2032), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b59b8: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x2B59B8u;
    {
        const bool branch_taken_0x2b59b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59B8u;
        // 0x2b59bc: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59b8) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B59C0u;
label_2b59c0:
    // 0x2b59c0: 0x92432ac0  lbu         $v1, 0x2AC0($s2)
    ctx->pc = 0x2b59c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10944)));
    // 0x2b59c4: 0x2c61000b  sltiu       $at, $v1, 0xB
    ctx->pc = 0x2b59c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x2b59c8: 0x102001d9  beqz        $at, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x2B59C8u;
    {
        const bool branch_taken_0x2b59c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B59C8u;
        // 0x2b59cc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b59c8) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B59D0u;
    // 0x2b59d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b59d4: 0x248473a0  addiu       $a0, $a0, 0x73A0
    ctx->pc = 0x2b59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29600));
    // 0x2b59d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b59dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b59dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b59e0: 0x600008  jr          $v1
    ctx->pc = 0x2B59E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B59E8u: goto label_2b59e8;
            case 0x2B5A08u: goto label_2b5a08;
            case 0x2B6130u: goto label_2b6130;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B59E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B59E8u;
label_2b59e8:
    // 0x2b59e8: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x2b59e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2b59ec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b59f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b59f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b59f4: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B59F4u;
    SET_GPR_U32(ctx, 31, 0x2B59FCu);
    ctx->pc = 0x2B59F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B59F4u;
    // 0x2b59f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B59F4u, 0x2B59FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B59FCu;
label_2b59fc:
    // 0x2b59fc: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x2B59FCu;
    {
        const bool branch_taken_0x2b59fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b59fc) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5A04u;
    // 0x2b5a04: 0x0  nop
    ctx->pc = 0x2b5a04u;
    // NOP
label_2b5a08:
    // 0x2b5a08: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b5a0c: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B5A0Cu;
    SET_GPR_U32(ctx, 31, 0x2B5A14u);
    ctx->pc = 0x2B5A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5A0Cu;
    // 0x2b5a10: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B5A0Cu, 0x2B5A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5A14u;
label_2b5a14:
    // 0x2b5a14: 0x92460002  lbu         $a2, 0x2($s2)
    ctx->pc = 0x2b5a14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b5a18: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2b5a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2b5a1c: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b5a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b5a20: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x2b5a20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b5a24: 0x24a5f38c  addiu       $a1, $a1, -0xC74
    ctx->pc = 0x2b5a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964108));
    // 0x2b5a28: 0x90227360  lbu         $v0, 0x7360($at)
    ctx->pc = 0x2b5a28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x677360u));
    // 0x2b5a2c: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2b5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b5a30: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2b5a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b5a34: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b5a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b5a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b5a3c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2b5a40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b5a44: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b5a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b5a48: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b5a4c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2b5a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b5a50: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b5a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5a54: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A54u;
    {
        const bool branch_taken_0x2b5a54 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2B5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A54u;
        // 0x2b5a58: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a54) {
            ctx->pc = 0x2B5A68u;
            goto label_2b5a68;
        }
    }
    ctx->pc = 0x2B5A5Cu;
    // 0x2b5a5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b5a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5a60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5A60u;
    {
        const bool branch_taken_0x2b5a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A60u;
        // 0x2b5a64: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a60) {
            ctx->pc = 0x2B5A84u;
            goto label_2b5a84;
        }
    }
    ctx->pc = 0x2B5A68u;
label_2b5a68:
    // 0x2b5a68: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2b5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2b5a6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b5a70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b5a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b5a74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b5a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5a78: 0x0  nop
    ctx->pc = 0x2b5a78u;
    // NOP
    // 0x2b5a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b5a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b5a80: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b5a80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b5a84:
    // 0x2b5a84: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b5a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2b5a88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b5a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5a8c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2B5A8Cu;
    {
        const bool branch_taken_0x2b5a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5A8Cu;
        // 0x2b5a90: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a8c) {
            ctx->pc = 0x2B5AB8u;
            goto label_2b5ab8;
        }
    }
    ctx->pc = 0x2B5A94u;
    // 0x2b5a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b5a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5a98: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x2B5A98u;
    SET_GPR_U32(ctx, 31, 0x2B5AA0u);
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x2B5A98u, 0x2B5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AA0u;
label_2b5aa0:
    // 0x2b5aa0: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x2b5aa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2b5aa4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b5aa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5aa8: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B5AA8u;
    SET_GPR_U32(ctx, 31, 0x2B5AB0u);
    ctx->pc = 0x2B5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AA8u;
    // 0x2b5aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B5AA8u, 0x2B5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AB0u;
label_2b5ab0:
    // 0x2b5ab0: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x2B5AB0u;
    {
        const bool branch_taken_0x2b5ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ab0) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5AB8u;
label_2b5ab8:
    // 0x2b5ab8: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x2b5ab8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2b5abc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b5ac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b5ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5ac4: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B5AC4u;
    SET_GPR_U32(ctx, 31, 0x2B5ACCu);
    ctx->pc = 0x2B5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5AC4u;
    // 0x2b5ac8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B5AC4u, 0x2B5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5ACCu;
label_2b5acc:
    // 0x2b5acc: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x2B5ACCu;
    {
        const bool branch_taken_0x2b5acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5acc) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5AD4u;
    // 0x2b5ad4: 0x0  nop
    ctx->pc = 0x2b5ad4u;
    // NOP
label_2b5ad8:
    // 0x2b5ad8: 0x9643082e  lhu         $v1, 0x82E($s2)
    ctx->pc = 0x2b5ad8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2094)));
    // 0x2b5adc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5ADCu;
    {
        const bool branch_taken_0x2b5adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ADCu;
        // 0x2b5ae0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5adc) {
            ctx->pc = 0x2B5AF0u;
            goto label_2b5af0;
        }
    }
    ctx->pc = 0x2B5AE4u;
    // 0x2b5ae4: 0xc0ad90c  jal         func_2B6430
    ctx->pc = 0x2B5AE4u;
    SET_GPR_U32(ctx, 31, 0x2B5AECu);
    ctx->pc = 0x2B6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6430u, 0x2B5AE4u, 0x2B5AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5AECu;
label_2b5aec:
    // 0x2b5aec: 0x0  nop
    ctx->pc = 0x2b5aecu;
    // NOP
label_2b5af0:
    // 0x2b5af0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5AF0u;
    {
        const bool branch_taken_0x2b5af0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AF0u;
        // 0x2b5af4: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5af0) {
            ctx->pc = 0x2B5B00u;
            goto label_2b5b00;
        }
    }
    ctx->pc = 0x2B5AF8u;
    // 0x2b5af8: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x2B5AF8u;
    {
        const bool branch_taken_0x2b5af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5AF8u;
        // 0x2b5afc: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5af8) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5B00u;
label_2b5b00:
    // 0x2b5b00: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x2b5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b5b04: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x2b5b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2b5b08: 0xae430148  sw          $v1, 0x148($s2)
    ctx->pc = 0x2b5b08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 3));
    // 0x2b5b0c: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x2b5b0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5b10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b5b14: 0xa643082c  sh          $v1, 0x82C($s2)
    ctx->pc = 0x2b5b14u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5b18: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x2b5b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5b1c: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x2b5b1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2b5b20: 0x14200183  bnez        $at, . + 4 + (0x183 << 2)
    ctx->pc = 0x2B5B20u;
    {
        const bool branch_taken_0x2b5b20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b20) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5B28u;
    // 0x2b5b28: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b5b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5b2c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B2Cu;
    {
        const bool branch_taken_0x2b5b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5b2c) {
            ctx->pc = 0x2B5B40u;
            goto label_2b5b40;
        }
    }
    ctx->pc = 0x2B5B34u;
    // 0x2b5b34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B34u;
    {
        const bool branch_taken_0x2b5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B34u;
        // 0x2b5b38: 0xa640082c  sh          $zero, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b34) {
            ctx->pc = 0x2B5B48u;
            goto label_2b5b48;
        }
    }
    ctx->pc = 0x2B5B3Cu;
    // 0x2b5b3c: 0x0  nop
    ctx->pc = 0x2b5b3cu;
    // NOP
label_2b5b40:
    // 0x2b5b40: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5b44: 0xa643082c  sh          $v1, 0x82C($s2)
    ctx->pc = 0x2b5b44u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b5b48:
    // 0x2b5b48: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b5b4c: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x2B5B4Cu;
    {
        const bool branch_taken_0x2b5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B4Cu;
        // 0x2b5b50: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b4c) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5B54u;
    // 0x2b5b54: 0x0  nop
    ctx->pc = 0x2b5b54u;
    // NOP
label_2b5b58:
    // 0x2b5b58: 0x9643082e  lhu         $v1, 0x82E($s2)
    ctx->pc = 0x2b5b58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2094)));
    // 0x2b5b5c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5B5Cu;
    {
        const bool branch_taken_0x2b5b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B5Cu;
        // 0x2b5b60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b5c) {
            ctx->pc = 0x2B5B70u;
            goto label_2b5b70;
        }
    }
    ctx->pc = 0x2B5B64u;
    // 0x2b5b64: 0xc0ad90c  jal         func_2B6430
    ctx->pc = 0x2B5B64u;
    SET_GPR_U32(ctx, 31, 0x2B5B6Cu);
    ctx->pc = 0x2B6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6430u, 0x2B5B64u, 0x2B5B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5B6Cu;
label_2b5b6c:
    // 0x2b5b6c: 0x0  nop
    ctx->pc = 0x2b5b6cu;
    // NOP
label_2b5b70:
    // 0x2b5b70: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5B70u;
    {
        const bool branch_taken_0x2b5b70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B70u;
        // 0x2b5b74: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b70) {
            ctx->pc = 0x2B5B80u;
            goto label_2b5b80;
        }
    }
    ctx->pc = 0x2B5B78u;
    // 0x2b5b78: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x2B5B78u;
    {
        const bool branch_taken_0x2b5b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5B78u;
        // 0x2b5b7c: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5b78) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5B80u;
label_2b5b80:
    // 0x2b5b80: 0x8e430148  lw          $v1, 0x148($s2)
    ctx->pc = 0x2b5b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
    // 0x2b5b84: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2b5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2b5b88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b5b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b5b8c: 0x34620200  ori         $v0, $v1, 0x200
    ctx->pc = 0x2b5b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x2b5b90: 0xae420148  sw          $v0, 0x148($s2)
    ctx->pc = 0x2b5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 2));
    // 0x2b5b94: 0x9642082c  lhu         $v0, 0x82C($s2)
    ctx->pc = 0x2b5b94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5b98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b5b9c: 0xa642082c  sh          $v0, 0x82C($s2)
    ctx->pc = 0x2b5b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b5ba0: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x2b5ba0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2b5ba4: 0xc0ad2f4  jal         func_2B4BD0
    ctx->pc = 0x2B5BA4u;
    SET_GPR_U32(ctx, 31, 0x2B5BACu);
    ctx->pc = 0x2B5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BA4u;
    // 0x2b5ba8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4BD0u, 0x2B5BA4u, 0x2B5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BACu;
label_2b5bac:
    // 0x2b5bac: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x2b5bacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5bb0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x2b5bb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b5bb4: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2B5BB4u;
    {
        const bool branch_taken_0x2b5bb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bb4) {
            ctx->pc = 0x2B5CC0u;
            goto label_2b5cc0;
        }
    }
    ctx->pc = 0x2B5BBCu;
    // 0x2b5bbc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B5BBCu;
    {
        const bool branch_taken_0x2b5bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5bbc) {
            ctx->pc = 0x2B5BF8u;
            goto label_2b5bf8;
        }
    }
    ctx->pc = 0x2B5BC4u;
    // 0x2b5bc4: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x2b5bc4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b5bc8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5bcc: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2b5bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2b5bd0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2b5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b5bd4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2b5bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b5bd8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2b5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2b5bdc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2b5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2b5be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5be4: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2b5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5be8: 0xc096908  jal         func_25A420
    ctx->pc = 0x2B5BE8u;
    SET_GPR_U32(ctx, 31, 0x2B5BF0u);
    ctx->pc = 0x2B5BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5BE8u;
    // 0x2b5bec: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x2B5BE8u, 0x2B5BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5BF0u;
label_2b5bf0:
    // 0x2b5bf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5BF0u;
    {
        const bool branch_taken_0x2b5bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5BF0u;
        // 0x2b5bf4: 0x46140081  sub.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5bf0) {
            ctx->pc = 0x2B5C00u;
            goto label_2b5c00;
        }
    }
    ctx->pc = 0x2B5BF8u;
label_2b5bf8:
    // 0x2b5bf8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b5bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b5bfc: 0x0  nop
    ctx->pc = 0x2b5bfcu;
    // NOP
label_2b5c00:
    // 0x2b5c00: 0x8e4328bc  lw          $v1, 0x28BC($s2)
    ctx->pc = 0x2b5c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10428)));
    // 0x2b5c04: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B5C04u;
    {
        const bool branch_taken_0x2b5c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c04) {
            ctx->pc = 0x2B5C90u;
            goto label_2b5c90;
        }
    }
    ctx->pc = 0x2B5C0Cu;
    // 0x2b5c0c: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x2b5c0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2b5c10: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2b5c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2b5c14: 0x3c010067  lui         $at, 0x67
    ctx->pc = 0x2b5c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)103 << 16));
    // 0x2b5c18: 0x92050002  lbu         $a1, 0x2($s0)
    ctx->pc = 0x2b5c18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2b5c1c: 0x24c6f38c  addiu       $a2, $a2, -0xC74
    ctx->pc = 0x2b5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964108));
    // 0x2b5c20: 0x90237358  lbu         $v1, 0x7358($at)
    ctx->pc = 0x2b5c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x677358u));
    // 0x2b5c24: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x2b5c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2b5c28: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x2b5c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2b5c2c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x2b5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2b5c30: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b5c34: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x2b5c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2b5c38: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2b5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2b5c3c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2b5c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2b5c40: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2b5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2b5c44: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b5c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5c48: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b5c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5c4c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5C4Cu;
    {
        const bool branch_taken_0x2b5c4c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2B5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C4Cu;
        // 0x2b5c50: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c4c) {
            ctx->pc = 0x2B5C60u;
            goto label_2b5c60;
        }
    }
    ctx->pc = 0x2B5C54u;
    // 0x2b5c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5C58u;
    {
        const bool branch_taken_0x2b5c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C58u;
        // 0x2b5c5c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c58) {
            ctx->pc = 0x2B5C7Cu;
            goto label_2b5c7c;
        }
    }
    ctx->pc = 0x2B5C60u;
label_2b5c60:
    // 0x2b5c60: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2b5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2b5c64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b5c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b5c68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2b5c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2b5c6c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2b5c6cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5c70: 0x0  nop
    ctx->pc = 0x2b5c70u;
    // NOP
    // 0x2b5c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b5c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b5c78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b5c78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b5c7c:
    // 0x2b5c7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b5c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b5c80: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2b5c80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5c84: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2B5C84u;
    {
        const bool branch_taken_0x2b5c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5c84) {
            ctx->pc = 0x2B5CC0u;
            goto label_2b5cc0;
        }
    }
    ctx->pc = 0x2B5C8Cu;
    // 0x2b5c8c: 0x0  nop
    ctx->pc = 0x2b5c8cu;
    // NOP
label_2b5c90:
    // 0x2b5c90: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b5c90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5c94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5C94u;
    {
        const bool branch_taken_0x2b5c94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5c94) {
            ctx->pc = 0x2B5CA8u;
            goto label_2b5ca8;
        }
    }
    ctx->pc = 0x2B5C9Cu;
    // 0x2b5c9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5C9Cu;
    {
        const bool branch_taken_0x2b5c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5C9Cu;
        // 0x2b5ca0: 0xa640082c  sh          $zero, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5c9c) {
            ctx->pc = 0x2B5CB0u;
            goto label_2b5cb0;
        }
    }
    ctx->pc = 0x2B5CA4u;
    // 0x2b5ca4: 0x0  nop
    ctx->pc = 0x2b5ca4u;
    // NOP
label_2b5ca8:
    // 0x2b5ca8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b5ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5cac: 0xa643082c  sh          $v1, 0x82C($s2)
    ctx->pc = 0x2b5cacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b5cb0:
    // 0x2b5cb0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b5cb4: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x2B5CB4u;
    {
        const bool branch_taken_0x2b5cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CB4u;
        // 0x2b5cb8: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cb4) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5CBCu;
    // 0x2b5cbc: 0x0  nop
    ctx->pc = 0x2b5cbcu;
    // NOP
label_2b5cc0:
    // 0x2b5cc0: 0x9643082c  lhu         $v1, 0x82C($s2)
    ctx->pc = 0x2b5cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5cc4: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x2b5cc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2b5cc8: 0x14200119  bnez        $at, . + 4 + (0x119 << 2)
    ctx->pc = 0x2B5CC8u;
    {
        const bool branch_taken_0x2b5cc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cc8) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5CD0u;
    // 0x2b5cd0: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b5cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5cd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5CD4u;
    {
        const bool branch_taken_0x2b5cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5cd4) {
            ctx->pc = 0x2B5CE8u;
            goto label_2b5ce8;
        }
    }
    ctx->pc = 0x2B5CDCu;
    // 0x2b5cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5CDCu;
    {
        const bool branch_taken_0x2b5cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CDCu;
        // 0x2b5ce0: 0xa640082c  sh          $zero, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cdc) {
            ctx->pc = 0x2B5CF0u;
            goto label_2b5cf0;
        }
    }
    ctx->pc = 0x2B5CE4u;
    // 0x2b5ce4: 0x0  nop
    ctx->pc = 0x2b5ce4u;
    // NOP
label_2b5ce8:
    // 0x2b5ce8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5cec: 0xa643082c  sh          $v1, 0x82C($s2)
    ctx->pc = 0x2b5cecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
label_2b5cf0:
    // 0x2b5cf0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b5cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b5cf4: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x2B5CF4u;
    {
        const bool branch_taken_0x2b5cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5CF4u;
        // 0x2b5cf8: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5cf4) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5CFCu;
    // 0x2b5cfc: 0x0  nop
    ctx->pc = 0x2b5cfcu;
    // NOP
label_2b5d00:
    // 0x2b5d00: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b5d00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b5d04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b5d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b5d08: 0x146000f5  bnez        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2B5D08u;
    {
        const bool branch_taken_0x2b5d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d08) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5D10u;
    // 0x2b5d10: 0x9643082e  lhu         $v1, 0x82E($s2)
    ctx->pc = 0x2b5d10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2094)));
    // 0x2b5d14: 0x146000f2  bnez        $v1, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2B5D14u;
    {
        const bool branch_taken_0x2b5d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d14) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5D1Cu;
    // 0x2b5d1c: 0x9644082c  lhu         $a0, 0x82C($s2)
    ctx->pc = 0x2b5d1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2092)));
    // 0x2b5d20: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2b5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b5d24: 0x28810028  slti        $at, $a0, 0x28
    ctx->pc = 0x2b5d24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2b5d28: 0x102000e9  beqz        $at, . + 4 + (0xE9 << 2)
    ctx->pc = 0x2B5D28u;
    {
        const bool branch_taken_0x2b5d28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D28u;
        // 0x2b5d2c: 0xa643082c  sh          $v1, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d28) {
            ctx->pc = 0x2B60D0u;
            goto label_2b60d0;
        }
    }
    ctx->pc = 0x2B5D30u;
    // 0x2b5d30: 0xc0ad90c  jal         func_2B6430
    ctx->pc = 0x2B5D30u;
    SET_GPR_U32(ctx, 31, 0x2B5D38u);
    ctx->pc = 0x2B5D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D30u;
    // 0x2b5d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6430u, 0x2B5D30u, 0x2B5D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D38u;
label_2b5d38:
    // 0x2b5d38: 0x9645082a  lhu         $a1, 0x82A($s2)
    ctx->pc = 0x2b5d38u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b5d3c: 0x30a30040  andi        $v1, $a1, 0x40
    ctx->pc = 0x2b5d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x2b5d40: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2B5D40u;
    {
        const bool branch_taken_0x2b5d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d40) {
            ctx->pc = 0x2B5DE0u;
            goto label_2b5de0;
        }
    }
    ctx->pc = 0x2B5D48u;
    // 0x2b5d48: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x2b5d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2b5d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5d50: 0x14830023  bne         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2B5D50u;
    {
        const bool branch_taken_0x2b5d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5d50) {
            ctx->pc = 0x2B5DE0u;
            goto label_2b5de0;
        }
    }
    ctx->pc = 0x2B5D58u;
    // 0x2b5d58: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b5d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5d5c: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2B5D5Cu;
    {
        const bool branch_taken_0x2b5d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d5c) {
            ctx->pc = 0x2B5DE0u;
            goto label_2b5de0;
        }
    }
    ctx->pc = 0x2B5D64u;
    // 0x2b5d64: 0x96440826  lhu         $a0, 0x826($s2)
    ctx->pc = 0x2b5d64u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b5d68: 0x96430830  lhu         $v1, 0x830($s2)
    ctx->pc = 0x2b5d68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2096)));
    // 0x2b5d6c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2b5d6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b5d70: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B5D70u;
    {
        const bool branch_taken_0x2b5d70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5d70) {
            ctx->pc = 0x2B5DE0u;
            goto label_2b5de0;
        }
    }
    ctx->pc = 0x2B5D78u;
    // 0x2b5d78: 0x864500c2  lh          $a1, 0xC2($s2)
    ctx->pc = 0x2b5d78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 194)));
    // 0x2b5d7c: 0x924608e8  lbu         $a2, 0x8E8($s2)
    ctx->pc = 0x2b5d7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b5d80: 0xc0ad190  jal         func_2B4640
    ctx->pc = 0x2B5D80u;
    SET_GPR_U32(ctx, 31, 0x2B5D88u);
    ctx->pc = 0x2B5D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D80u;
    // 0x2b5d84: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4640u, 0x2B5D80u, 0x2B5D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D88u;
label_2b5d88:
    // 0x2b5d88: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x2B5D88u;
    {
        const bool branch_taken_0x2b5d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D88u;
        // 0x2b5d8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d88) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5D90u;
    // 0x2b5d90: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2b5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2b5d94: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b5d98: 0x24427378  addiu       $v0, $v0, 0x7378
    ctx->pc = 0x2b5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29560));
    // 0x2b5d9c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x2b5d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2b5da0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2b5da4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2b5da4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b5da8: 0xc0ac678  jal         func_2B19E0
    ctx->pc = 0x2B5DA8u;
    SET_GPR_U32(ctx, 31, 0x2B5DB0u);
    ctx->pc = 0x2B5DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DA8u;
    // 0x2b5dac: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B19E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B19E0u, 0x2B5DA8u, 0x2B5DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DB0u;
label_2b5db0:
    // 0x2b5db0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b5db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b5db4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5db8: 0xae4407c8  sw          $a0, 0x7C8($s2)
    ctx->pc = 0x2b5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1992), GPR_U32(ctx, 4));
    // 0x2b5dbc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5DBCu;
    {
        const bool branch_taken_0x2b5dbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DBCu;
        // 0x2b5dc0: 0xa2430821  sb          $v1, 0x821($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dbc) {
            ctx->pc = 0x2B5DD0u;
            goto label_2b5dd0;
        }
    }
    ctx->pc = 0x2B5DC4u;
    // 0x2b5dc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5dc8: 0x162300d9  bne         $s1, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2B5DC8u;
    {
        const bool branch_taken_0x2b5dc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b5dc8) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5DD0u;
label_2b5dd0:
    // 0x2b5dd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b5dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5dd4: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2B5DD4u;
    {
        const bool branch_taken_0x2b5dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD4u;
        // 0x2b5dd8: 0xa2432abe  sb          $v1, 0x2ABE($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 10942), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dd4) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B5DDCu;
    // 0x2b5ddc: 0x0  nop
    ctx->pc = 0x2b5ddcu;
    // NOP
label_2b5de0:
    // 0x2b5de0: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x2b5de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x2b5de4: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x2B5DE4u;
    {
        const bool branch_taken_0x2b5de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5de4) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5DECu;
    // 0x2b5dec: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b5decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b5df0: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x2B5DF0u;
    {
        const bool branch_taken_0x2b5df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5df0) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5DF8u;
    // 0x2b5df8: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2b5df8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5dfc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5e00: 0x14a400b7  bne         $a1, $a0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x2B5E00u;
    {
        const bool branch_taken_0x2b5e00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b5e00) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E08u;
    // 0x2b5e08: 0x8c6629c0  lw          $a2, 0x29C0($v1)
    ctx->pc = 0x2b5e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10688)));
    // 0x2b5e0c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2b5e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2b5e10: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x2b5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2b5e14: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2b5e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b5e18: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2b5e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2b5e1c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2b5e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2b5e20: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2b5e20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2b5e24: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2b5e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2b5e28: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5E28u;
    {
        const bool branch_taken_0x2b5e28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e28) {
            ctx->pc = 0x2B5E50u;
            goto label_2b5e50;
        }
    }
    ctx->pc = 0x2B5E30u;
    // 0x2b5e30: 0x92440640  lbu         $a0, 0x640($s2)
    ctx->pc = 0x2b5e30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x2b5e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b5e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5e38: 0x148500a9  bne         $a0, $a1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2B5E38u;
    {
        const bool branch_taken_0x2b5e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b5e38) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E40u;
    // 0x2b5e40: 0x90640640  lbu         $a0, 0x640($v1)
    ctx->pc = 0x2b5e40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1600)));
    // 0x2b5e44: 0x148500a6  bne         $a0, $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2B5E44u;
    {
        const bool branch_taken_0x2b5e44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2b5e44) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E4Cu;
    // 0x2b5e4c: 0x0  nop
    ctx->pc = 0x2b5e4cu;
    // NOP
label_2b5e50:
    // 0x2b5e50: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x2b5e50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b5e54: 0x108000a2  beqz        $a0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x2B5E54u;
    {
        const bool branch_taken_0x2b5e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e54) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E5Cu;
    // 0x2b5e5c: 0x8c6406ac  lw          $a0, 0x6AC($v1)
    ctx->pc = 0x2b5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
    // 0x2b5e60: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x2b5e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2b5e64: 0x1480009e  bnez        $a0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2B5E64u;
    {
        const bool branch_taken_0x2b5e64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e64) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E6Cu;
    // 0x2b5e6c: 0x8c6406c8  lw          $a0, 0x6C8($v1)
    ctx->pc = 0x2b5e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1736)));
    // 0x2b5e70: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2b5e70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2b5e74: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2b5e74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b5e78: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5E78u;
    {
        const bool branch_taken_0x2b5e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e78) {
            ctx->pc = 0x2B5E8Cu;
            goto label_2b5e8c;
        }
    }
    ctx->pc = 0x2B5E80u;
    // 0x2b5e80: 0x9064065c  lbu         $a0, 0x65C($v1)
    ctx->pc = 0x2b5e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1628)));
    // 0x2b5e84: 0x388400fb  xori        $a0, $a0, 0xFB
    ctx->pc = 0x2b5e84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)251);
    // 0x2b5e88: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2b5e88u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2b5e8c:
    // 0x2b5e8c: 0x14800094  bnez        $a0, . + 4 + (0x94 << 2)
    ctx->pc = 0x2B5E8Cu;
    {
        const bool branch_taken_0x2b5e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5e8c) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5E94u;
    // 0x2b5e94: 0x96460830  lhu         $a2, 0x830($s2)
    ctx->pc = 0x2b5e94u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2096)));
    // 0x2b5e98: 0x96440826  lhu         $a0, 0x826($s2)
    ctx->pc = 0x2b5e98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b5e9c: 0x86082a  slt         $at, $a0, $a2
    ctx->pc = 0x2b5e9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b5ea0: 0x1020008f  beqz        $at, . + 4 + (0x8F << 2)
    ctx->pc = 0x2B5EA0u;
    {
        const bool branch_taken_0x2b5ea0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ea0) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5EA8u;
    // 0x2b5ea8: 0x9065065c  lbu         $a1, 0x65C($v1)
    ctx->pc = 0x2b5ea8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1628)));
    // 0x2b5eac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b5eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b5eb0: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5EB0u;
    {
        const bool branch_taken_0x2b5eb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b5eb0) {
            ctx->pc = 0x2B5EC8u;
            goto label_2b5ec8;
        }
    }
    ctx->pc = 0x2B5EB8u;
    // 0x2b5eb8: 0x90640821  lbu         $a0, 0x821($v1)
    ctx->pc = 0x2b5eb8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2081)));
    // 0x2b5ebc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x2b5ebcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b5ec0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5EC0u;
    {
        const bool branch_taken_0x2b5ec0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ec0) {
            ctx->pc = 0x2B5ED8u;
            goto label_2b5ed8;
        }
    }
    ctx->pc = 0x2B5EC8u;
label_2b5ec8:
    // 0x2b5ec8: 0x906307d4  lbu         $v1, 0x7D4($v1)
    ctx->pc = 0x2b5ec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2004)));
    // 0x2b5ecc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2b5eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2b5ed0: 0x10600083  beqz        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x2B5ED0u;
    {
        const bool branch_taken_0x2b5ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ed0) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5ED8u;
label_2b5ed8:
    // 0x2b5ed8: 0x92442abf  lbu         $a0, 0x2ABF($s2)
    ctx->pc = 0x2b5ed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5edc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2b5edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b5ee0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b5ee4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2b5ee4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b5ee8: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
    ctx->pc = 0x2B5EE8u;
    {
        const bool branch_taken_0x2b5ee8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ee8) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5EF0u;
    // 0x2b5ef0: 0x8e4507c8  lw          $a1, 0x7C8($s2)
    ctx->pc = 0x2b5ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1992)));
    // 0x2b5ef4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2b5ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2b5ef8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2B5EF8u;
    SET_GPR_U32(ctx, 31, 0x2B5F00u);
    ctx->pc = 0x2B5EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5EF8u;
    // 0x2b5efc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2B5EF8u, 0x2B5F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F00u;
label_2b5f00:
    // 0x2b5f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f04: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2B5F04u;
    {
        const bool branch_taken_0x2b5f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f04) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5F0Cu;
    // 0x2b5f0c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5F0Cu;
    {
        const bool branch_taken_0x2b5f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f0c) {
            ctx->pc = 0x2B5F38u;
            goto label_2b5f38;
        }
    }
    ctx->pc = 0x2B5F14u;
    // 0x2b5f14: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2b5f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b5f18: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2b5f1c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2b5f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b5f20: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5F20u;
    {
        const bool branch_taken_0x2b5f20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F20u;
        // 0x2b5f24: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f20) {
            ctx->pc = 0x2B5F30u;
            goto label_2b5f30;
        }
    }
    ctx->pc = 0x2B5F28u;
    // 0x2b5f28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b5f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5f2c: 0x0  nop
    ctx->pc = 0x2b5f2cu;
    // NOP
label_2b5f30:
    // 0x2b5f30: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B5F30u;
    {
        const bool branch_taken_0x2b5f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f30) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5F38u;
label_2b5f38:
    // 0x2b5f38: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B5F38u;
    {
        const bool branch_taken_0x2b5f38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f38) {
            ctx->pc = 0x2B5F68u;
            goto label_2b5f68;
        }
    }
    ctx->pc = 0x2B5F40u;
    // 0x2b5f40: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b5f44: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2b5f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b5f48: 0xc096988  jal         func_25A620
    ctx->pc = 0x2B5F48u;
    SET_GPR_U32(ctx, 31, 0x2B5F50u);
    ctx->pc = 0x2B5F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F48u;
    // 0x2b5f4c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x2B5F48u, 0x2B5F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F50u;
label_2b5f50:
    // 0x2b5f50: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2b5f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2b5f54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b5f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5f58: 0x0  nop
    ctx->pc = 0x2b5f58u;
    // NOP
    // 0x2b5f5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b5f5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5f60: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2B5F60u;
    {
        const bool branch_taken_0x2b5f60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5f60) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5F68u;
label_2b5f68:
    // 0x2b5f68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5F68u;
    {
        const bool branch_taken_0x2b5f68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f68) {
            ctx->pc = 0x2B5F80u;
            goto label_2b5f80;
        }
    }
    ctx->pc = 0x2B5F70u;
    // 0x2b5f70: 0x8e0329c0  lw          $v1, 0x29C0($s0)
    ctx->pc = 0x2b5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x2b5f74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2b5f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b5f78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B5F78u;
    {
        const bool branch_taken_0x2b5f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f78) {
            ctx->pc = 0x2B5FB0u;
            goto label_2b5fb0;
        }
    }
    ctx->pc = 0x2B5F80u;
label_2b5f80:
    // 0x2b5f80: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B5F80u;
    {
        const bool branch_taken_0x2b5f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f80) {
            ctx->pc = 0x2B5FC8u;
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B5F88u;
    // 0x2b5f88: 0x8e452ab0  lw          $a1, 0x2AB0($s2)
    ctx->pc = 0x2b5f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b5f8c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2b5f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2b5f90: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x2b5f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    // 0x2b5f94: 0x92032ab0  lbu         $v1, 0x2AB0($s0)
    ctx->pc = 0x2b5f94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10928)));
    // 0x2b5f98: 0x90a508e8  lbu         $a1, 0x8E8($a1)
    ctx->pc = 0x2b5f98u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2280)));
    // 0x2b5f9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b5fa0: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2b5fa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5fa4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b5fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b5fa8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5FA8u;
    {
        const bool branch_taken_0x2b5fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5fa8) {
            ctx->pc = 0x2B5FC8u;
            goto label_2b5fc8;
        }
    }
    ctx->pc = 0x2B5FB0u;
label_2b5fb0:
    // 0x2b5fb0: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b5fb4: 0x844500c2  lh          $a1, 0xC2($v0)
    ctx->pc = 0x2b5fb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
    // 0x2b5fb8: 0x904608e8  lbu         $a2, 0x8E8($v0)
    ctx->pc = 0x2b5fb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2280)));
    // 0x2b5fbc: 0xc0ad190  jal         func_2B4640
    ctx->pc = 0x2B5FBCu;
    SET_GPR_U32(ctx, 31, 0x2B5FC4u);
    ctx->pc = 0x2B5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FBCu;
    // 0x2b5fc0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4640u, 0x2B5FBCu, 0x2B5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FC4u;
label_2b5fc4:
    // 0x2b5fc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b5fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fc8:
    // 0x2b5fc8: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B5FC8u;
    {
        const bool branch_taken_0x2b5fc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5fc8) {
            ctx->pc = 0x2B60E0u;
            goto label_2b60e0;
        }
    }
    ctx->pc = 0x2B5FD0u;
    // 0x2b5fd0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b5fd4: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b5fd8: 0xac6407c8  sw          $a0, 0x7C8($v1)
    ctx->pc = 0x2b5fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1992), GPR_U32(ctx, 4));
    // 0x2b5fdc: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b5fdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b5fe0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b5fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b5fe4: 0xa643082a  sh          $v1, 0x82A($s2)
    ctx->pc = 0x2b5fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5fe8: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b5fe8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b5fec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2b5fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2b5ff0: 0xa643082a  sh          $v1, 0x82A($s2)
    ctx->pc = 0x2b5ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b5ff4: 0x92452abf  lbu         $a1, 0x2ABF($s2)
    ctx->pc = 0x2b5ff4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b5ff8: 0x96440826  lhu         $a0, 0x826($s2)
    ctx->pc = 0x2b5ff8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2086)));
    // 0x2b5ffc: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6000: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2b6000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2b6004: 0xa0642abf  sb          $a0, 0x2ABF($v1)
    ctx->pc = 0x2b6004u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10943), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6008: 0x92432abe  lbu         $v1, 0x2ABE($s2)
    ctx->pc = 0x2b6008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b600c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B600Cu;
    {
        const bool branch_taken_0x2b600c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b600c) {
            ctx->pc = 0x2B6020u;
            goto label_2b6020;
        }
    }
    ctx->pc = 0x2B6014u;
    // 0x2b6014: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b6014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6018: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6018u;
    {
        const bool branch_taken_0x2b6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B601Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6018u;
        // 0x2b601c: 0xa0602abe  sb          $zero, 0x2ABE($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 10942), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6018) {
            ctx->pc = 0x2B6030u;
            goto label_2b6030;
        }
    }
    ctx->pc = 0x2B6020u;
label_2b6020:
    // 0x2b6020: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b6020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6024: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b6024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6028: 0xa0642abe  sb          $a0, 0x2ABE($v1)
    ctx->pc = 0x2b6028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10942), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b602c: 0x0  nop
    ctx->pc = 0x2b602cu;
    // NOP
label_2b6030:
    // 0x2b6030: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b6030u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b6034: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B6034u;
    {
        const bool branch_taken_0x2b6034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6034) {
            ctx->pc = 0x2B60A0u;
            goto label_2b60a0;
        }
    }
    ctx->pc = 0x2B603Cu;
    // 0x2b603c: 0xc0b2d50  jal         func_2CB540
    ctx->pc = 0x2B603Cu;
    SET_GPR_U32(ctx, 31, 0x2B6044u);
    ctx->pc = 0x2B6040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B603Cu;
    // 0x2b6040: 0x8e442ac4  lw          $a0, 0x2AC4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB540u, 0x2B603Cu, 0x2B6044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6044u;
label_2b6044:
    // 0x2b6044: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b6044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6048: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B6048u;
    SET_GPR_U32(ctx, 31, 0x2B6050u);
    ctx->pc = 0x2B604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6048u;
    // 0x2b604c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B6048u, 0x2B6050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6050u;
label_2b6050:
    // 0x2b6050: 0xae422ac4  sw          $v0, 0x2AC4($s2)
    ctx->pc = 0x2b6050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10948), GPR_U32(ctx, 2));
    // 0x2b6054: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2b6054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x2b6058: 0x8e462ab0  lw          $a2, 0x2AB0($s2)
    ctx->pc = 0x2b6058u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b605c: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x2b605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2b6060: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6064: 0x8cc529c8  lw          $a1, 0x29C8($a2)
    ctx->pc = 0x2b6064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10696)));
    // 0x2b6068: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x2b6068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2b606c: 0xacc429c8  sw          $a0, 0x29C8($a2)
    ctx->pc = 0x2b606cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 10696), GPR_U32(ctx, 4));
    // 0x2b6070: 0x8e452ab0  lw          $a1, 0x2AB0($s2)
    ctx->pc = 0x2b6070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6074: 0x90a40640  lbu         $a0, 0x640($a1)
    ctx->pc = 0x2b6074u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1600)));
    // 0x2b6078: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6078u;
    {
        const bool branch_taken_0x2b6078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6078) {
            ctx->pc = 0x2B6088u;
            goto label_2b6088;
        }
    }
    ctx->pc = 0x2B6080u;
    // 0x2b6080: 0xa0a004f4  sb          $zero, 0x4F4($a1)
    ctx->pc = 0x2b6080u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1268), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6084: 0x0  nop
    ctx->pc = 0x2b6084u;
    // NOP
label_2b6088:
    // 0x2b6088: 0x8e4429c0  lw          $a0, 0x29C0($s2)
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10688)));
    // 0x2b608c: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b608cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6090: 0x80840034  lb          $a0, 0x34($a0)
    ctx->pc = 0x2b6090u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2b6094: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2b6094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x2b6098: 0xa4640830  sh          $a0, 0x830($v1)
    ctx->pc = 0x2b6098u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2096), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b609c: 0xa6440830  sh          $a0, 0x830($s2)
    ctx->pc = 0x2b609cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2096), (uint16_t)GPR_U32(ctx, 4));
label_2b60a0:
    // 0x2b60a0: 0x8e472ab0  lw          $a3, 0x2AB0($s2)
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b60a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2b60a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2b60a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b60a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b60ac: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x2b60acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2b60b0: 0x8ce60148  lw          $a2, 0x148($a3)
    ctx->pc = 0x2b60b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 328)));
    // 0x2b60b4: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2b60b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2b60b8: 0xace40148  sw          $a0, 0x148($a3)
    ctx->pc = 0x2b60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 4));
    // 0x2b60bc: 0x8e442ab0  lw          $a0, 0x2AB0($s2)
    ctx->pc = 0x2b60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b60c0: 0xa0850780  sb          $a1, 0x780($a0)
    ctx->pc = 0x2b60c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 5));
    // 0x2b60c4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B60C4u;
    {
        const bool branch_taken_0x2b60c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60C4u;
        // 0x2b60c8: 0xa643082c  sh          $v1, 0x82C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2092), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b60c4) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B60CCu;
    // 0x2b60cc: 0x0  nop
    ctx->pc = 0x2b60ccu;
    // NOP
label_2b60d0:
    // 0x2b60d0: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b60d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b60d4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b60d8: 0xa643082a  sh          $v1, 0x82A($s2)
    ctx->pc = 0x2b60d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b60dc: 0x0  nop
    ctx->pc = 0x2b60dcu;
    // NOP
label_2b60e0:
    // 0x2b60e0: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b60e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b60e4: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2b60e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2b60e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B60E8u;
    {
        const bool branch_taken_0x2b60e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b60e8) {
            ctx->pc = 0x2B6108u;
            goto label_2b6108;
        }
    }
    ctx->pc = 0x2B60F0u;
    // 0x2b60f0: 0x8e442ab0  lw          $a0, 0x2AB0($s2)
    ctx->pc = 0x2b60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b60f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b60f8: 0x9084065c  lbu         $a0, 0x65C($a0)
    ctx->pc = 0x2b60f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x2b60fc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2B60FCu;
    {
        const bool branch_taken_0x2b60fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b60fc) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B6104u;
    // 0x2b6104: 0x0  nop
    ctx->pc = 0x2b6104u;
    // NOP
label_2b6108:
    // 0x2b6108: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x2b6108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x2b610c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B610Cu;
    {
        const bool branch_taken_0x2b610c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B610Cu;
        // 0x2b6110: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b610c) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B6114u;
    // 0x2b6114: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6114u;
    {
        const bool branch_taken_0x2b6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6114u;
        // 0x2b6118: 0xa2430780  sb          $v1, 0x780($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6114) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B611Cu;
    // 0x2b611c: 0x0  nop
    ctx->pc = 0x2b611cu;
    // NOP
label_2b6120:
    // 0x2b6120: 0x924307f6  lbu         $v1, 0x7F6($s2)
    ctx->pc = 0x2b6120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2038)));
    // 0x2b6124: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6124u;
    {
        const bool branch_taken_0x2b6124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6124u;
        // 0x2b6128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6124) {
            ctx->pc = 0x2B6130u;
            goto label_2b6130;
        }
    }
    ctx->pc = 0x2B612Cu;
    // 0x2b612c: 0xa2430780  sb          $v1, 0x780($s2)
    ctx->pc = 0x2b612cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1920), (uint8_t)GPR_U32(ctx, 3));
label_2b6130:
    // 0x2b6130: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b6130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b6134: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2b6134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2b6138: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x2B6138u;
    {
        const bool branch_taken_0x2b6138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6138) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B6140u;
    // 0x2b6140: 0x9643082e  lhu         $v1, 0x82E($s2)
    ctx->pc = 0x2b6140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2094)));
    // 0x2b6144: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x2B6144u;
    {
        const bool branch_taken_0x2b6144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6144u;
        // 0x2b6148: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6144) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B614Cu;
    // 0x2b614c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6150: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B6150u;
    {
        const bool branch_taken_0x2b6150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6150) {
            ctx->pc = 0x2B6268u;
            goto label_2b6268;
        }
    }
    ctx->pc = 0x2B6158u;
    // 0x2b6158: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6158u;
    {
        const bool branch_taken_0x2b6158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6158) {
            ctx->pc = 0x2B6170u;
            goto label_2b6170;
        }
    }
    ctx->pc = 0x2B6160u;
    // 0x2b6160: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2b6164: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2b6164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2b6168: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x2b6168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2b616c: 0x7e420090  sq          $v0, 0x90($s2)
    ctx->pc = 0x2b616cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), GPR_VEC(ctx, 2));
label_2b6170:
    // 0x2b6170: 0x92422abe  lbu         $v0, 0x2ABE($s2)
    ctx->pc = 0x2b6170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b6174: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6174u;
    {
        const bool branch_taken_0x2b6174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6174u;
        // 0x2b6178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6174) {
            ctx->pc = 0x2B61A0u;
            goto label_2b61a0;
        }
    }
    ctx->pc = 0x2B617Cu;
    // 0x2b617c: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B617Cu;
    SET_GPR_U32(ctx, 31, 0x2B6184u);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B617Cu, 0x2B6184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6184u;
label_2b6184:
    // 0x2b6184: 0x924508e8  lbu         $a1, 0x8E8($s2)
    ctx->pc = 0x2b6184u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b6188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b6188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b618c: 0xc0a8fa0  jal         func_2A3E80
    ctx->pc = 0x2B618Cu;
    SET_GPR_U32(ctx, 31, 0x2B6194u);
    ctx->pc = 0x2B6190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B618Cu;
    // 0x2b6190: 0x26460090  addiu       $a2, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E80u, 0x2B618Cu, 0x2B6194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6194u;
label_2b6194:
    // 0x2b6194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6194u;
    {
        const bool branch_taken_0x2b6194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6194) {
            ctx->pc = 0x2B61B8u;
            goto label_2b61b8;
        }
    }
    ctx->pc = 0x2B619Cu;
    // 0x2b619c: 0x0  nop
    ctx->pc = 0x2b619cu;
    // NOP
label_2b61a0:
    // 0x2b61a0: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x2B61A0u;
    SET_GPR_U32(ctx, 31, 0x2B61A8u);
    ctx->pc = 0x2B61A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61A0u;
    // 0x2b61a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2B61A0u, 0x2B61A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61A8u;
label_2b61a8:
    // 0x2b61a8: 0x924508e8  lbu         $a1, 0x8E8($s2)
    ctx->pc = 0x2b61a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b61ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b61acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61b0: 0xc0a8fc4  jal         func_2A3F10
    ctx->pc = 0x2B61B0u;
    SET_GPR_U32(ctx, 31, 0x2B61B8u);
    ctx->pc = 0x2B61B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61B0u;
    // 0x2b61b4: 0x26460090  addiu       $a2, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3F10u, 0x2B61B0u, 0x2B61B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61B8u;
label_2b61b8:
    // 0x2b61b8: 0x92442abe  lbu         $a0, 0x2ABE($s2)
    ctx->pc = 0x2b61b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b61bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b61bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b61c0: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2B61C0u;
    {
        const bool branch_taken_0x2b61c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2b61c0) {
            ctx->pc = 0x2B6268u;
            goto label_2b6268;
        }
    }
    ctx->pc = 0x2B61C8u;
    // 0x2b61c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2b61cc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b61d0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b61d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b61d4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2b61d8: 0xc0414c0  jal         func_105300
    ctx->pc = 0x2B61D8u;
    SET_GPR_U32(ctx, 31, 0x2B61E0u);
    ctx->pc = 0x2B61DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61D8u;
    // 0x2b61dc: 0x26460090  addiu       $a2, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x2B61D8u, 0x2B61E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61E0u;
label_2b61e0:
    // 0x2b61e0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2b61e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2b61e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b61e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b61e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b61e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b61ec: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x2b61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x2b61f0: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x2b61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x2b61f4: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x2b61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x2b61f8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2b61f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b61fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b61fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b6200: 0xc0c14f8  jal         func_3053E0
    ctx->pc = 0x2B6200u;
    SET_GPR_U32(ctx, 31, 0x2B6208u);
    ctx->pc = 0x2B6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6200u;
    // 0x2b6204: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053E0u, 0x2B6200u, 0x2B6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6208u;
label_2b6208:
    // 0x2b6208: 0x8e452ab4  lw          $a1, 0x2AB4($s2)
    ctx->pc = 0x2b6208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10932)));
    // 0x2b620c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B620Cu;
    {
        const bool branch_taken_0x2b620c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B620Cu;
        // 0x2b6210: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b620c) {
            ctx->pc = 0x2B6228u;
            goto label_2b6228;
        }
    }
    ctx->pc = 0x2B6214u;
    // 0x2b6214: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b6214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6218: 0xc0c0cfc  jal         func_3033F0
    ctx->pc = 0x2B6218u;
    SET_GPR_U32(ctx, 31, 0x2B6220u);
    ctx->pc = 0x2B621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6218u;
    // 0x2b621c: 0x2484e080  addiu       $a0, $a0, -0x1F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3033F0u, 0x2B6218u, 0x2B6220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6220u;
label_2b6220:
    // 0x2b6220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6220u;
    {
        const bool branch_taken_0x2b6220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6220) {
            ctx->pc = 0x2B6230u;
            goto label_2b6230;
        }
    }
    ctx->pc = 0x2B6228u;
label_2b6228:
    // 0x2b6228: 0xae422ab4  sw          $v0, 0x2AB4($s2)
    ctx->pc = 0x2b6228u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10932), GPR_U32(ctx, 2));
    // 0x2b622c: 0x0  nop
    ctx->pc = 0x2b622cu;
    // NOP
label_2b6230:
    // 0x2b6230: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2b6230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x2b6234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2b6234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6238: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2b6238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2b623c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2b623cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2b6240: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2b6240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2b6244: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2b6244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2b6248: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2b6248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b624c: 0xc0c14f8  jal         func_3053E0
    ctx->pc = 0x2B624Cu;
    SET_GPR_U32(ctx, 31, 0x2B6254u);
    ctx->pc = 0x2B6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B624Cu;
    // 0x2b6250: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053E0u, 0x2B624Cu, 0x2B6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6254u;
label_2b6254:
    // 0x2b6254: 0x8e452ab4  lw          $a1, 0x2AB4($s2)
    ctx->pc = 0x2b6254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10932)));
    // 0x2b6258: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2b6258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x2b625c: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x2b625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
    // 0x2b6260: 0xc0c0cfc  jal         func_3033F0
    ctx->pc = 0x2B6260u;
    SET_GPR_U32(ctx, 31, 0x2B6268u);
    ctx->pc = 0x2B6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6260u;
    // 0x2b6264: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3033F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3033F0u, 0x2B6260u, 0x2B6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6268u;
label_2b6268:
    // 0x2b6268: 0x9643082e  lhu         $v1, 0x82E($s2)
    ctx->pc = 0x2b6268u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2094)));
    // 0x2b626c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b6270: 0xa643082e  sh          $v1, 0x82E($s2)
    ctx->pc = 0x2b6270u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2094), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6274: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2b6274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b6278: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B6278u;
    {
        const bool branch_taken_0x2b6278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6278) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B6280u;
    // 0x2b6280: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b6280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b6284: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6284u;
    {
        const bool branch_taken_0x2b6284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6284u;
        // 0x2b6288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6284) {
            ctx->pc = 0x2B6298u;
            goto label_2b6298;
        }
    }
    ctx->pc = 0x2B628Cu;
    // 0x2b628c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B628Cu;
    {
        const bool branch_taken_0x2b628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b628c) {
            ctx->pc = 0x2B62B8u;
            goto label_2b62b8;
        }
    }
    ctx->pc = 0x2B6294u;
    // 0x2b6294: 0x0  nop
    ctx->pc = 0x2b6294u;
    // NOP
label_2b6298:
    // 0x2b6298: 0x92442abe  lbu         $a0, 0x2ABE($s2)
    ctx->pc = 0x2b6298u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10942)));
    // 0x2b629c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2b629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b62a0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B62A0u;
    {
        const bool branch_taken_0x2b62a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62A0u;
        // 0x2b62a4: 0x64040014  daddiu      $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62a0) {
            ctx->pc = 0x2B62B0u;
            goto label_2b62b0;
        }
    }
    ctx->pc = 0x2B62A8u;
    // 0x2b62a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B62A8u;
    {
        const bool branch_taken_0x2b62a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b62a8) {
            ctx->pc = 0x2B62B8u;
            goto label_2b62b8;
        }
    }
    ctx->pc = 0x2B62B0u;
label_2b62b0:
    // 0x2b62b0: 0x64040008  daddiu      $a0, $zero, 0x8
    ctx->pc = 0x2b62b0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x2b62b4: 0x0  nop
    ctx->pc = 0x2b62b4u;
    // NOP
label_2b62b8:
    // 0x2b62b8: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B62B8u;
    {
        const bool branch_taken_0x2b62b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b62b8) {
            ctx->pc = 0x2B6338u;
            goto label_2b6338;
        }
    }
    ctx->pc = 0x2B62C0u;
    // 0x2b62c0: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2b62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b62c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b62c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b62c8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b62c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b62cc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2b62d0: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2b62d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2b62d4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2b62d8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2b62d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2b62dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b62dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b62e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b62e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b62e4: 0x0  nop
    ctx->pc = 0x2b62e4u;
    // NOP
    // 0x2b62e8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b62e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b62ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2b62ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b62f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2B62F0u;
    {
        const bool branch_taken_0x2b62f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b62f0) {
            ctx->pc = 0x2B6308u;
            goto label_2b6308;
        }
    }
    ctx->pc = 0x2B62F8u;
    // 0x2b62f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b62f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b62fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b62fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6300u;
    {
        const bool branch_taken_0x2b6300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6300u;
        // 0x2b6304: 0xa6430828  sh          $v1, 0x828($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6300) {
            ctx->pc = 0x2B6324u;
            goto label_2b6324;
        }
    }
    ctx->pc = 0x2B6308u;
label_2b6308:
    // 0x2b6308: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2b6308u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2b630c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2b630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2b6310: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6310u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6314: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2b6314u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2b6318: 0x0  nop
    ctx->pc = 0x2b6318u;
    // NOP
    // 0x2b631c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b631cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b6320: 0xa6430828  sh          $v1, 0x828($s2)
    ctx->pc = 0x2b6320u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 3));
label_2b6324:
    // 0x2b6324: 0xc0b2d94  jal         func_2CB650
    ctx->pc = 0x2B6324u;
    SET_GPR_U32(ctx, 31, 0x2B632Cu);
    ctx->pc = 0x2B6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6324u;
    // 0x2b6328: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB650u, 0x2B6324u, 0x2B632Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B632Cu;
label_2b632c:
    // 0x2b632c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B632Cu;
    {
        const bool branch_taken_0x2b632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b632c) {
            ctx->pc = 0x2B6340u;
            goto label_2b6340;
        }
    }
    ctx->pc = 0x2B6334u;
    // 0x2b6334: 0x0  nop
    ctx->pc = 0x2b6334u;
    // NOP
label_2b6338:
    // 0x2b6338: 0xa6400828  sh          $zero, 0x828($s2)
    ctx->pc = 0x2b6338u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2088), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b633c: 0x0  nop
    ctx->pc = 0x2b633cu;
    // NOP
label_2b6340:
    // 0x2b6340: 0x9643082a  lhu         $v1, 0x82A($s2)
    ctx->pc = 0x2b6340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b6344: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2b6344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2b6348: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6348u;
    {
        const bool branch_taken_0x2b6348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6348) {
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B6350u;
    // 0x2b6350: 0x8e432ab0  lw          $v1, 0x2AB0($s2)
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b6354: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B6354u;
    {
        const bool branch_taken_0x2b6354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6354) {
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B635Cu;
    // 0x2b635c: 0x90642abf  lbu         $a0, 0x2ABF($v1)
    ctx->pc = 0x2b635cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10943)));
    // 0x2b6360: 0x92432abf  lbu         $v1, 0x2ABF($s2)
    ctx->pc = 0x2b6360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 10943)));
    // 0x2b6364: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2b6364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2b6368: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6368u;
    {
        const bool branch_taken_0x2b6368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6368) {
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B6370u;
    // 0x2b6370: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6370u;
    {
        const bool branch_taken_0x2b6370 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6370u;
        // 0x2b6374: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6370) {
            ctx->pc = 0x2B6380u;
            goto label_2b6380;
        }
    }
    ctx->pc = 0x2B6378u;
    // 0x2b6378: 0xc0640c4  jal         func_190310
    ctx->pc = 0x2B6378u;
    SET_GPR_U32(ctx, 31, 0x2B6380u);
    ctx->pc = 0x2B637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6378u;
    // 0x2b637c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190310u, 0x2B6378u, 0x2B6380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6380u;
label_2b6380:
    // 0x2b6380: 0x9644082a  lhu         $a0, 0x82A($s2)
    ctx->pc = 0x2b6380u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2090)));
    // 0x2b6384: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x2b6384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2b6388: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2B6388u;
    {
        const bool branch_taken_0x2b6388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6388) {
            ctx->pc = 0x2B6408u;
            goto label_2b6408;
        }
    }
    ctx->pc = 0x2B6390u;
    // 0x2b6390: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2b6390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2b6394: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B6394u;
    {
        const bool branch_taken_0x2b6394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6394) {
            ctx->pc = 0x2B63F8u;
            goto label_2b63f8;
        }
    }
    ctx->pc = 0x2B639Cu;
    // 0x2b639c: 0x8e422ab0  lw          $v0, 0x2AB0($s2)
    ctx->pc = 0x2b639cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10928)));
    // 0x2b63a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B63A0u;
    {
        const bool branch_taken_0x2b63a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63a0) {
            ctx->pc = 0x2B63F8u;
            goto label_2b63f8;
        }
    }
    ctx->pc = 0x2B63A8u;
    // 0x2b63a8: 0x90430640  lbu         $v1, 0x640($v0)
    ctx->pc = 0x2b63a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1600)));
    // 0x2b63ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b63b0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B63B0u;
    {
        const bool branch_taken_0x2b63b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b63b0) {
            ctx->pc = 0x2B63F8u;
            goto label_2b63f8;
        }
    }
    ctx->pc = 0x2B63B8u;
    // 0x2b63b8: 0x8784822c  lh          $a0, -0x7DD4($gp)
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935084)));
    // 0x2b63bc: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x2b63bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2b63c0: 0x9382822e  lbu         $v0, -0x7DD2($gp)
    ctx->pc = 0x2b63c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935086)));
    // 0x2b63c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2b63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2b63c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b63cc: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x2b63ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2b63d0: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x2b63d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b63d4: 0x924208e8  lbu         $v0, 0x8E8($s2)
    ctx->pc = 0x2b63d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2280)));
    // 0x2b63d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2b63dc: 0x904200b8  lbu         $v0, 0xB8($v0)
    ctx->pc = 0x2b63dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2b63e0: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x2b63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2b63e4: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B63E4u;
    SET_GPR_U32(ctx, 31, 0x2B63ECu);
    ctx->pc = 0x2B63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63E4u;
    // 0x2b63e8: 0x432025  or          $a0, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B63E4u, 0x2B63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63ECu;
label_2b63ec:
    // 0x2b63ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B63ECu;
    {
        const bool branch_taken_0x2b63ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b63ec) {
            ctx->pc = 0x2B6408u;
            goto label_2b6408;
        }
    }
    ctx->pc = 0x2B63F4u;
    // 0x2b63f4: 0x0  nop
    ctx->pc = 0x2b63f4u;
    // NOP
label_2b63f8:
    // 0x2b63f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2b63f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2b63fc: 0xc0b2d24  jal         func_2CB490
    ctx->pc = 0x2B63FCu;
    SET_GPR_U32(ctx, 31, 0x2B6404u);
    ctx->pc = 0x2B6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63FCu;
    // 0x2b6400: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2B63FCu, 0x2B6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6404u;
label_2b6404:
    // 0x2b6404: 0x0  nop
    ctx->pc = 0x2b6404u;
    // NOP
label_2b6408:
    // 0x2b6408: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b6408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b640c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b640cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b6410: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2b6410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b6414: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2b6414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b6418: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2b6418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b641c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b641cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b6420: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b6420u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6424: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6428: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6428u;
        // 0x2b642c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6430u;
}
