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

// Function: sub_003B0050
// Address: 0x3b0050 - 0x3b0484
void sub_003B0050_0x3b0050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0050_0x3b0050");
#endif

    switch (ctx->pc) {
        case 0x3b0124u: goto label_3b0124;
        case 0x3b0188u: goto label_3b0188;
        case 0x3b01c0u: goto label_3b01c0;
        case 0x3b01d0u: goto label_3b01d0;
        case 0x3b0200u: goto label_3b0200;
        case 0x3b0210u: goto label_3b0210;
        case 0x3b02c8u: goto label_3b02c8;
        case 0x3b02e0u: goto label_3b02e0;
        case 0x3b0318u: goto label_3b0318;
        case 0x3b0348u: goto label_3b0348;
        case 0x3b0358u: goto label_3b0358;
        case 0x3b03c4u: goto label_3b03c4;
        case 0x3b0470u: goto label_3b0470;
        default: break;
    }

    ctx->pc = 0x3b0050u;

    // 0x3b0050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b0054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b0054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b0058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b0058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b005c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b005cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b0060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0064: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3b0064u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3b0068: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x3b0068u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3b006c: 0x10200100  beqz        $at, . + 4 + (0x100 << 2)
    ctx->pc = 0x3B006Cu;
    {
        const bool branch_taken_0x3b006c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B006Cu;
        // 0x3b0070: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b006c) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B0074u;
    // 0x3b0074: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3b0074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3b0078: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3b0078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b007c: 0x24a52a70  addiu       $a1, $a1, 0x2A70
    ctx->pc = 0x3b007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
    // 0x3b0080: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b0080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b0084: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b0084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0088: 0x600008  jr          $v1
    ctx->pc = 0x3B0088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3B0090u: goto label_3b0090;
            case 0x3B00A0u: goto label_3b00a0;
            case 0x3B00C0u: goto label_3b00c0;
            case 0x3B0170u: goto label_3b0170;
            case 0x3B01F0u: goto label_3b01f0;
            case 0x3B02C0u: goto label_3b02c0;
            case 0x3B0338u: goto label_3b0338;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3B0090u;
label_3b0090:
    // 0x3b0090: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3b0090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b0094: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x3B0094u;
    {
        const bool branch_taken_0x3b0094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0094u;
        // 0x3b0098: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0094) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B009Cu;
    // 0x3b009c: 0x0  nop
    ctx->pc = 0x3b009cu;
    // NOP
label_3b00a0:
    // 0x3b00a0: 0x86230526  lh          $v1, 0x526($s1)
    ctx->pc = 0x3b00a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x3b00a4: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x3b00a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b00a8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b00a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b00ac: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b00acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b00b0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b00b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b00b4: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b00b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b00b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b00b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b00bc: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x3b00bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_3b00c0:
    // 0x3b00c0: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b00c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b00c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B00C4u;
    {
        const bool branch_taken_0x3b00c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00C4u;
        // 0x3b00c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b00c4) {
            ctx->pc = 0x3B00D8u;
            goto label_3b00d8;
        }
    }
    ctx->pc = 0x3B00CCu;
    // 0x3b00cc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B00CCu;
    {
        const bool branch_taken_0x3b00cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b00cc) {
            ctx->pc = 0x3B0158u;
            goto label_3b0158;
        }
    }
    ctx->pc = 0x3B00D4u;
    // 0x3b00d4: 0x0  nop
    ctx->pc = 0x3b00d4u;
    // NOP
label_3b00d8:
    // 0x3b00d8: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b00d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b00dc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b00e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b00e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b00e4: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b00e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b00e8: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b00e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b00ec: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B00ECu;
    {
        const bool branch_taken_0x3b00ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b00ec) {
            ctx->pc = 0x3B0128u;
            goto label_3b0128;
        }
    }
    ctx->pc = 0x3B00F4u;
    // 0x3b00f4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b00f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b00f8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b00f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b00fc: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B00FCu;
    {
        const bool branch_taken_0x3b00fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00FCu;
        // 0x3b0100: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b00fc) {
            ctx->pc = 0x3B0150u;
            goto label_3b0150;
        }
    }
    ctx->pc = 0x3B0104u;
    // 0x3b0104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0108: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0108u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b010c: 0x0  nop
    ctx->pc = 0x3b010cu;
    // NOP
    // 0x3b0110: 0x0  nop
    ctx->pc = 0x3b0110u;
    // NOP
    // 0x3b0114: 0x2010  mfhi        $a0
    ctx->pc = 0x3b0114u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0118: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0118u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b011c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B011Cu;
    {
        const bool branch_taken_0x3b011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B011Cu;
        // 0x3b0120: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b011c) {
            ctx->pc = 0x3B0150u;
            goto label_3b0150;
        }
    }
    ctx->pc = 0x3B0124u;
label_3b0124:
    // 0x3b0124: 0x0  nop
    ctx->pc = 0x3b0124u;
    // NOP
label_3b0128:
    // 0x3b0128: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b012c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b012cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0130: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0130u;
    {
        const bool branch_taken_0x3b0130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0130) {
            ctx->pc = 0x3B0150u;
            goto label_3b0150;
        }
    }
    ctx->pc = 0x3B0138u;
    // 0x3b0138: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0138u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b013c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b013cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0140: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0144u;
    {
        const bool branch_taken_0x3b0144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0144u;
        // 0x3b0148: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0144) {
            ctx->pc = 0x3B0158u;
            goto label_3b0158;
        }
    }
    ctx->pc = 0x3B014Cu;
    // 0x3b014c: 0x0  nop
    ctx->pc = 0x3b014cu;
    // NOP
label_3b0150:
    // 0x3b0150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0154: 0x0  nop
    ctx->pc = 0x3b0154u;
    // NOP
label_3b0158:
    // 0x3b0158: 0x146000c5  bnez        $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3B0158u;
    {
        const bool branch_taken_0x3b0158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0158) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B0160u;
    // 0x3b0160: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b0160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b0168: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x3B0168u;
    {
        const bool branch_taken_0x3b0168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0168u;
        // 0x3b016c: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0168) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B0170u;
label_3b0170:
    // 0x3b0170: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0170u;
    {
        const bool branch_taken_0x3b0170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0170) {
            ctx->pc = 0x3B01C8u;
            goto label_3b01c8;
        }
    }
    ctx->pc = 0x3B0178u;
    // 0x3b0178: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b0178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3b017c: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b017cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0180: 0xc0aa3dc  jal         func_2A8F70
    ctx->pc = 0x3B0180u;
    SET_GPR_U32(ctx, 31, 0x3B0188u);
    ctx->pc = 0x3B0184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0180u;
    // 0x3b0184: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8F70u, 0x3B0180u, 0x3B0188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0188u;
label_3b0188:
    // 0x3b0188: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3b0188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3b018c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b018cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b0190: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b0190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b0194: 0x3c021c00  lui         $v0, 0x1C00
    ctx->pc = 0x3b0194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7168 << 16));
    // 0x3b0198: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b019c: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b019cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3b01a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b01a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01a4: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b01a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b01a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b01a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b01acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b01b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b01b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01b8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B01B8u;
    SET_GPR_U32(ctx, 31, 0x3B01C0u);
    ctx->pc = 0x3B01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01B8u;
    // 0x3b01bc: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B01B8u, 0x3B01C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B01C0u;
label_3b01c0:
    // 0x3b01c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B01C0u;
    {
        const bool branch_taken_0x3b01c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b01c0) {
            ctx->pc = 0x3B01D0u;
            goto label_3b01d0;
        }
    }
    ctx->pc = 0x3B01C8u;
label_3b01c8:
    // 0x3b01c8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B01C8u;
    SET_GPR_U32(ctx, 31, 0x3B01D0u);
    ctx->pc = 0x3B01CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01C8u;
    // 0x3b01cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B01C8u, 0x3B01D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B01D0u;
label_3b01d0:
    // 0x3b01d0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x3b01d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x3b01d4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b01d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b01d8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b01d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b01dc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b01dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b01e0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b01e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b01e4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b01e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b01e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b01ec: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b01ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b01f0:
    // 0x3b01f0: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3b01f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3b01f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b01f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b01f8: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B01F8u;
    SET_GPR_U32(ctx, 31, 0x3B0200u);
    ctx->pc = 0x3B01FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01F8u;
    // 0x3b01fc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B01F8u, 0x3B0200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0200u;
label_3b0200:
    // 0x3b0200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0200u;
    {
        const bool branch_taken_0x3b0200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0200u;
        // 0x3b0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0200) {
            ctx->pc = 0x3B0210u;
            goto label_3b0210;
        }
    }
    ctx->pc = 0x3B0208u;
    // 0x3b0208: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0208u;
    SET_GPR_U32(ctx, 31, 0x3B0210u);
    ctx->pc = 0x3B020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0208u;
    // 0x3b020c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0208u, 0x3B0210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0210u;
label_3b0210:
    // 0x3b0210: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b0210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b0214: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0214u;
    {
        const bool branch_taken_0x3b0214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0214u;
        // 0x3b0218: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0214) {
            ctx->pc = 0x3B0228u;
            goto label_3b0228;
        }
    }
    ctx->pc = 0x3B021Cu;
    // 0x3b021c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B021Cu;
    {
        const bool branch_taken_0x3b021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b021c) {
            ctx->pc = 0x3B02A8u;
            goto label_3b02a8;
        }
    }
    ctx->pc = 0x3B0224u;
    // 0x3b0224: 0x0  nop
    ctx->pc = 0x3b0224u;
    // NOP
label_3b0228:
    // 0x3b0228: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b0228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b022c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b0230: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b0230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b0234: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0234u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0238: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b0238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b023c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B023Cu;
    {
        const bool branch_taken_0x3b023c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b023c) {
            ctx->pc = 0x3B0278u;
            goto label_3b0278;
        }
    }
    ctx->pc = 0x3B0244u;
    // 0x3b0244: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b0244u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0248: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b0248u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b024c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B024Cu;
    {
        const bool branch_taken_0x3b024c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B024Cu;
        // 0x3b0250: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b024c) {
            ctx->pc = 0x3B02A0u;
            goto label_3b02a0;
        }
    }
    ctx->pc = 0x3B0254u;
    // 0x3b0254: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0258: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0258u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b025c: 0x0  nop
    ctx->pc = 0x3b025cu;
    // NOP
    // 0x3b0260: 0x0  nop
    ctx->pc = 0x3b0260u;
    // NOP
    // 0x3b0264: 0x2010  mfhi        $a0
    ctx->pc = 0x3b0264u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0268: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0268u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b026c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B026Cu;
    {
        const bool branch_taken_0x3b026c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B026Cu;
        // 0x3b0270: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b026c) {
            ctx->pc = 0x3B02A0u;
            goto label_3b02a0;
        }
    }
    ctx->pc = 0x3B0274u;
    // 0x3b0274: 0x0  nop
    ctx->pc = 0x3b0274u;
    // NOP
label_3b0278:
    // 0x3b0278: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b027c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b027cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0280: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0280u;
    {
        const bool branch_taken_0x3b0280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0280) {
            ctx->pc = 0x3B02A0u;
            goto label_3b02a0;
        }
    }
    ctx->pc = 0x3B0288u;
    // 0x3b0288: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0288u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b028c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b028cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0290: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b0294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0294u;
    {
        const bool branch_taken_0x3b0294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0294u;
        // 0x3b0298: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0294) {
            ctx->pc = 0x3B02A8u;
            goto label_3b02a8;
        }
    }
    ctx->pc = 0x3B029Cu;
    // 0x3b029c: 0x0  nop
    ctx->pc = 0x3b029cu;
    // NOP
label_3b02a0:
    // 0x3b02a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b02a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b02a4: 0x0  nop
    ctx->pc = 0x3b02a4u;
    // NOP
label_3b02a8:
    // 0x3b02a8: 0x14600071  bnez        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x3B02A8u;
    {
        const bool branch_taken_0x3b02a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b02a8) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B02B0u;
    // 0x3b02b0: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x3b02b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b02b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b02b8: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x3B02B8u;
    {
        const bool branch_taken_0x3b02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02B8u;
        // 0x3b02bc: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02b8) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B02C0u;
label_3b02c0:
    // 0x3b02c0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3B02C0u;
    SET_GPR_U32(ctx, 31, 0x3B02C8u);
    ctx->pc = 0x3B02C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B02C0u;
    // 0x3b02c4: 0x8e240550  lw          $a0, 0x550($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3B02C0u, 0x3B02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02C8u;
label_3b02c8:
    // 0x3b02c8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B02C8u;
    {
        const bool branch_taken_0x3b02c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02C8u;
        // 0x3b02cc: 0xae200550  sw          $zero, 0x550($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02c8) {
            ctx->pc = 0x3B0318u;
            goto label_3b0318;
        }
    }
    ctx->pc = 0x3B02D0u;
    // 0x3b02d0: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x3b02d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x3b02d4: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x3b02d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b02d8: 0xc0aa3ec  jal         func_2A8FB0
    ctx->pc = 0x3B02D8u;
    SET_GPR_U32(ctx, 31, 0x3B02E0u);
    ctx->pc = 0x3B02DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B02D8u;
    // 0x3b02dc: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8FB0u, 0x3B02D8u, 0x3B02E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B02E0u;
label_3b02e0:
    // 0x3b02e0: 0xae220550  sw          $v0, 0x550($s1)
    ctx->pc = 0x3b02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1360), GPR_U32(ctx, 2));
    // 0x3b02e4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b02e8: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x3b02e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x3b02ec: 0x3c021d00  lui         $v0, 0x1D00
    ctx->pc = 0x3b02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7424 << 16));
    // 0x3b02f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b02f4: 0x34455702  ori         $a1, $v0, 0x5702
    ctx->pc = 0x3b02f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22274);
    // 0x3b02f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b02f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b02fc: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x3b02fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b0300: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b0300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0304: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b0304u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0308: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b0308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b030c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3b030cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0310: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B0310u;
    SET_GPR_U32(ctx, 31, 0x3B0318u);
    ctx->pc = 0x3B0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0310u;
    // 0x3b0314: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B0310u, 0x3B0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0318u;
label_3b0318:
    // 0x3b0318: 0x8622052a  lh          $v0, 0x52A($s1)
    ctx->pc = 0x3b0318u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1322)));
    // 0x3b031c: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x3b031cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b0320: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x3b0320u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3b0324: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x3b0324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b0328: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x3b0328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b032c: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x3b032cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x3b0330: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b0334: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x3b0334u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3b0338:
    // 0x3b0338: 0x8e260550  lw          $a2, 0x550($s1)
    ctx->pc = 0x3b0338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x3b033c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b033cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0340: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3B0340u;
    SET_GPR_U32(ctx, 31, 0x3B0348u);
    ctx->pc = 0x3B0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0340u;
    // 0x3b0344: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3B0340u, 0x3B0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0348u;
label_3b0348:
    // 0x3b0348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0348u;
    {
        const bool branch_taken_0x3b0348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0348u;
        // 0x3b034c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0348) {
            ctx->pc = 0x3B0358u;
            goto label_3b0358;
        }
    }
    ctx->pc = 0x3B0350u;
    // 0x3b0350: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0350u;
    SET_GPR_U32(ctx, 31, 0x3B0358u);
    ctx->pc = 0x3B0354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0350u;
    // 0x3b0354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0350u, 0x3B0358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0358u;
label_3b0358:
    // 0x3b0358: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b035c: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3B035Cu;
    {
        const bool branch_taken_0x3b035c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x3B0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B035Cu;
        // 0x3b0360: 0x28610056  slti        $at, $v1, 0x56 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)86) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b035c) {
            ctx->pc = 0x3B03C8u;
            goto label_3b03c8;
        }
    }
    ctx->pc = 0x3B0364u;
    // 0x3b0364: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B0364u;
    {
        const bool branch_taken_0x3b0364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0364) {
            ctx->pc = 0x3B03C8u;
            goto label_3b03c8;
        }
    }
    ctx->pc = 0x3B036Cu;
    // 0x3b036c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b036cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0370: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x3b0370u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b0374: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3b0374u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3b0378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b037c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3b037cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3b0380: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b0380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0384: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0388: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x3b0388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x3b038c: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3b038cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3b0390: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b0390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b0394: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x3b0394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x3b0398: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3b0398u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3b039c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3b039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3b03a0: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3b03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x3b03a4: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3b03a4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3b03a8: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b03a8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b03ac: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3b03acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b03b0: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3b03b0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3b03b4: 0x92260558  lbu         $a2, 0x558($s1)
    ctx->pc = 0x3b03b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1368)));
    // 0x3b03b8: 0xc62c0554  lwc1        $f12, 0x554($s1)
    ctx->pc = 0x3b03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b03bc: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3B03BCu;
    SET_GPR_U32(ctx, 31, 0x3B03C4u);
    ctx->pc = 0x3B03C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03BCu;
    // 0x3b03c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3B03BCu, 0x3B03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03C4u;
label_3b03c4:
    // 0x3b03c4: 0x0  nop
    ctx->pc = 0x3b03c4u;
    // NOP
label_3b03c8:
    // 0x3b03c8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x3b03c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x3b03cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B03CCu;
    {
        const bool branch_taken_0x3b03cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B03D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03CCu;
        // 0x3b03d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03cc) {
            ctx->pc = 0x3B03E0u;
            goto label_3b03e0;
        }
    }
    ctx->pc = 0x3B03D4u;
    // 0x3b03d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3B03D4u;
    {
        const bool branch_taken_0x3b03d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b03d4) {
            ctx->pc = 0x3B0460u;
            goto label_3b0460;
        }
    }
    ctx->pc = 0x3B03DCu;
    // 0x3b03dc: 0x0  nop
    ctx->pc = 0x3b03dcu;
    // NOP
label_3b03e0:
    // 0x3b03e0: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x3b03e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b03e4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3b03e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3b03e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b03ec: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b03ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b03f0: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x3b03f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x3b03f4: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3B03F4u;
    {
        const bool branch_taken_0x3b03f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b03f4) {
            ctx->pc = 0x3B0430u;
            goto label_3b0430;
        }
    }
    ctx->pc = 0x3B03FCu;
    // 0x3b03fc: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x3b03fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0400: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3b0400u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3b0404: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B0404u;
    {
        const bool branch_taken_0x3b0404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0404u;
        // 0x3b0408: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0404) {
            ctx->pc = 0x3B0458u;
            goto label_3b0458;
        }
    }
    ctx->pc = 0x3B040Cu;
    // 0x3b040c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0410: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3b0410u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3b0414: 0x0  nop
    ctx->pc = 0x3b0414u;
    // NOP
    // 0x3b0418: 0x0  nop
    ctx->pc = 0x3b0418u;
    // NOP
    // 0x3b041c: 0x2010  mfhi        $a0
    ctx->pc = 0x3b041cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3b0420: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0420u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0424: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B0424u;
    {
        const bool branch_taken_0x3b0424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0424u;
        // 0x3b0428: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0424) {
            ctx->pc = 0x3B0458u;
            goto label_3b0458;
        }
    }
    ctx->pc = 0x3B042Cu;
    // 0x3b042c: 0x0  nop
    ctx->pc = 0x3b042cu;
    // NOP
label_3b0430:
    // 0x3b0430: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x3b0430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x3b0434: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3b0434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3b0438: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B0438u;
    {
        const bool branch_taken_0x3b0438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0438) {
            ctx->pc = 0x3B0458u;
            goto label_3b0458;
        }
    }
    ctx->pc = 0x3B0440u;
    // 0x3b0440: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x3b0440u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3b0444: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0448: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x3b0448u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b044c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B044Cu;
    {
        const bool branch_taken_0x3b044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B044Cu;
        // 0x3b0450: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b044c) {
            ctx->pc = 0x3B0460u;
            goto label_3b0460;
        }
    }
    ctx->pc = 0x3B0454u;
    // 0x3b0454: 0x0  nop
    ctx->pc = 0x3b0454u;
    // NOP
label_3b0458:
    // 0x3b0458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b045c: 0x0  nop
    ctx->pc = 0x3b045cu;
    // NOP
label_3b0460:
    // 0x3b0460: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0460u;
    {
        const bool branch_taken_0x3b0460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0460u;
        // 0x3b0464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0460) {
            ctx->pc = 0x3B0470u;
            goto label_3b0470;
        }
    }
    ctx->pc = 0x3B0468u;
    // 0x3b0468: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3B0468u;
    SET_GPR_U32(ctx, 31, 0x3B0470u);
    ctx->pc = 0x3B046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0468u;
    // 0x3b046c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3B0468u, 0x3B0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0470u;
label_3b0470:
    // 0x3b0470: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b0470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b0474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b0478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b047c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B047Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B047Cu;
        // 0x3b0480: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B047Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0484u;
}
