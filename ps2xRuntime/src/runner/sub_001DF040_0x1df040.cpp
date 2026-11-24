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

// Function: sub_001DF040
// Address: 0x1df040 - 0x1df190
void sub_001DF040_0x1df040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DF040_0x1df040");
#endif

    switch (ctx->pc) {
        case 0x1df040u: goto label_1df040;
        case 0x1df044u: goto label_1df044;
        case 0x1df048u: goto label_1df048;
        case 0x1df04cu: goto label_1df04c;
        case 0x1df050u: goto label_1df050;
        case 0x1df054u: goto label_1df054;
        case 0x1df058u: goto label_1df058;
        case 0x1df05cu: goto label_1df05c;
        case 0x1df060u: goto label_1df060;
        case 0x1df064u: goto label_1df064;
        case 0x1df068u: goto label_1df068;
        case 0x1df06cu: goto label_1df06c;
        case 0x1df070u: goto label_1df070;
        case 0x1df074u: goto label_1df074;
        case 0x1df078u: goto label_1df078;
        case 0x1df07cu: goto label_1df07c;
        case 0x1df080u: goto label_1df080;
        case 0x1df084u: goto label_1df084;
        case 0x1df088u: goto label_1df088;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df090u: goto label_1df090;
        case 0x1df094u: goto label_1df094;
        case 0x1df098u: goto label_1df098;
        case 0x1df09cu: goto label_1df09c;
        case 0x1df0a0u: goto label_1df0a0;
        case 0x1df0a4u: goto label_1df0a4;
        case 0x1df0a8u: goto label_1df0a8;
        case 0x1df0acu: goto label_1df0ac;
        case 0x1df0b0u: goto label_1df0b0;
        case 0x1df0b4u: goto label_1df0b4;
        case 0x1df0b8u: goto label_1df0b8;
        case 0x1df0bcu: goto label_1df0bc;
        case 0x1df0c0u: goto label_1df0c0;
        case 0x1df0c4u: goto label_1df0c4;
        case 0x1df0c8u: goto label_1df0c8;
        case 0x1df0ccu: goto label_1df0cc;
        case 0x1df0d0u: goto label_1df0d0;
        case 0x1df0d4u: goto label_1df0d4;
        case 0x1df0d8u: goto label_1df0d8;
        case 0x1df0dcu: goto label_1df0dc;
        case 0x1df0e0u: goto label_1df0e0;
        case 0x1df0e4u: goto label_1df0e4;
        case 0x1df0e8u: goto label_1df0e8;
        case 0x1df0ecu: goto label_1df0ec;
        case 0x1df0f0u: goto label_1df0f0;
        case 0x1df0f4u: goto label_1df0f4;
        case 0x1df0f8u: goto label_1df0f8;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df100u: goto label_1df100;
        case 0x1df104u: goto label_1df104;
        case 0x1df108u: goto label_1df108;
        case 0x1df10cu: goto label_1df10c;
        case 0x1df110u: goto label_1df110;
        case 0x1df114u: goto label_1df114;
        case 0x1df118u: goto label_1df118;
        case 0x1df11cu: goto label_1df11c;
        case 0x1df120u: goto label_1df120;
        case 0x1df124u: goto label_1df124;
        case 0x1df128u: goto label_1df128;
        case 0x1df12cu: goto label_1df12c;
        case 0x1df130u: goto label_1df130;
        case 0x1df134u: goto label_1df134;
        case 0x1df138u: goto label_1df138;
        case 0x1df13cu: goto label_1df13c;
        case 0x1df140u: goto label_1df140;
        case 0x1df144u: goto label_1df144;
        case 0x1df148u: goto label_1df148;
        case 0x1df14cu: goto label_1df14c;
        case 0x1df150u: goto label_1df150;
        case 0x1df154u: goto label_1df154;
        case 0x1df158u: goto label_1df158;
        case 0x1df15cu: goto label_1df15c;
        case 0x1df160u: goto label_1df160;
        case 0x1df164u: goto label_1df164;
        case 0x1df168u: goto label_1df168;
        case 0x1df16cu: goto label_1df16c;
        case 0x1df170u: goto label_1df170;
        case 0x1df174u: goto label_1df174;
        case 0x1df178u: goto label_1df178;
        case 0x1df17cu: goto label_1df17c;
        case 0x1df180u: goto label_1df180;
        case 0x1df184u: goto label_1df184;
        case 0x1df188u: goto label_1df188;
        case 0x1df18cu: goto label_1df18c;
        default: break;
    }

    ctx->pc = 0x1df040u;

label_1df040:
    // 0x1df040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1df044:
    // 0x1df044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1df048:
    // 0x1df048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df04c:
    // 0x1df04c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1df04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1df050:
    // 0x1df050: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1df054:
    if (ctx->pc == 0x1DF054u) {
        ctx->pc = 0x1DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF050u;
        // 0x1df054: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF058u;
        goto label_1df058;
    }
    ctx->pc = 0x1DF050u;
    {
        const bool branch_taken_0x1df050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF050u;
        // 0x1df054: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df050) {
            ctx->pc = 0x1DF060u;
            goto label_1df060;
        }
    }
    ctx->pc = 0x1DF058u;
label_1df058:
    // 0x1df058: 0x10000049  b           . + 4 + (0x49 << 2)
label_1df05c:
    if (ctx->pc == 0x1DF05Cu) {
        ctx->pc = 0x1DF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF058u;
        // 0x1df05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF060u;
        goto label_1df060;
    }
    ctx->pc = 0x1DF058u;
    {
        const bool branch_taken_0x1df058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF058u;
        // 0x1df05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df058) {
            ctx->pc = 0x1DF180u;
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF060u;
label_1df060:
    // 0x1df060: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1df060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1df064:
    // 0x1df064: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1df064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1df068:
    // 0x1df068: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1df068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1df06c:
    // 0x1df06c: 0x320f809  jalr        $t9
label_1df070:
    if (ctx->pc == 0x1DF070u) {
        ctx->pc = 0x1DF074u;
        goto label_1df074;
    }
    ctx->pc = 0x1DF06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF06Cu, 0x1DF074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF074u;
label_1df074:
    // 0x1df074: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1df078:
    if (ctx->pc == 0x1DF078u) {
        ctx->pc = 0x1DF07Cu;
        goto label_1df07c;
    }
    ctx->pc = 0x1DF074u;
    {
        const bool branch_taken_0x1df074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df074) {
            ctx->pc = 0x1DF098u;
            goto label_1df098;
        }
    }
    ctx->pc = 0x1DF07Cu;
label_1df07c:
    // 0x1df07c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df080:
    // 0x1df080: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1df080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1df084:
    // 0x1df084: 0x320f809  jalr        $t9
label_1df088:
    if (ctx->pc == 0x1DF088u) {
        ctx->pc = 0x1DF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF084u;
        // 0x1df088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF08Cu;
        goto label_1df08c;
    }
    ctx->pc = 0x1DF084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF08Cu);
        ctx->pc = 0x1DF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF084u;
        // 0x1df088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF084u, 0x1DF08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DF08Cu;
label_1df08c:
    // 0x1df08c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1df090:
    if (ctx->pc == 0x1DF090u) {
        ctx->pc = 0x1DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF08Cu;
        // 0x1df090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF094u;
        goto label_1df094;
    }
    ctx->pc = 0x1DF08Cu;
    {
        const bool branch_taken_0x1df08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF08Cu;
        // 0x1df090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df08c) {
            ctx->pc = 0x1DF180u;
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF094u;
label_1df094:
    // 0x1df094: 0x0  nop
    ctx->pc = 0x1df094u;
    // NOP
label_1df098:
    // 0x1df098: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1df098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1df09c:
    // 0x1df09c: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x1df09cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1df0a0:
    // 0x1df0a0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x1df0a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1df0a4:
    // 0x1df0a4: 0x85070006  lh          $a3, 0x6($t0)
    ctx->pc = 0x1df0a4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
label_1df0a8:
    // 0x1df0a8: 0x85030004  lh          $v1, 0x4($t0)
    ctx->pc = 0x1df0a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
label_1df0ac:
    // 0x1df0ac: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1df0acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1df0b0:
    // 0x1df0b0: 0xe6282a  slt         $a1, $a3, $a2
    ctx->pc = 0x1df0b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1df0b4:
    // 0x1df0b4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x1df0b4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1df0b8:
    // 0x1df0b8: 0x38e37ffd  xori        $v1, $a3, 0x7FFD
    ctx->pc = 0x1df0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)32765);
label_1df0bc:
    // 0x1df0bc: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1df0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1df0c0:
    // 0x1df0c0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1df0c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1df0c4:
    // 0x1df0c4: 0x402026  xor         $a0, $v0, $zero
    ctx->pc = 0x1df0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1df0c8:
    // 0x1df0c8: 0x28420001  slti        $v0, $v0, 0x1
    ctx->pc = 0x1df0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_1df0cc:
    // 0x1df0cc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x1df0ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1df0d0:
    // 0x1df0d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1df0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1df0d4:
    // 0x1df0d4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1df0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_1df0d8:
    // 0x1df0d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1df0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1df0dc:
    // 0x1df0dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1df0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1df0e0:
    // 0x1df0e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1df0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_1df0e4:
    // 0x1df0e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1df0e8:
    if (ctx->pc == 0x1DF0E8u) {
        ctx->pc = 0x1DF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0E4u;
        // 0x1df0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF0ECu;
        goto label_1df0ec;
    }
    ctx->pc = 0x1DF0E4u;
    {
        const bool branch_taken_0x1df0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0E4u;
        // 0x1df0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0e4) {
            ctx->pc = 0x1DF0F8u;
            goto label_1df0f8;
        }
    }
    ctx->pc = 0x1DF0ECu;
label_1df0ec:
    // 0x1df0ec: 0x10000024  b           . + 4 + (0x24 << 2)
label_1df0f0:
    if (ctx->pc == 0x1DF0F0u) {
        ctx->pc = 0x1DF0F4u;
        goto label_1df0f4;
    }
    ctx->pc = 0x1DF0ECu;
    {
        const bool branch_taken_0x1df0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df0ec) {
            ctx->pc = 0x1DF180u;
            goto label_1df180;
        }
    }
    ctx->pc = 0x1DF0F4u;
label_1df0f4:
    // 0x1df0f4: 0x0  nop
    ctx->pc = 0x1df0f4u;
    // NOP
label_1df0f8:
    // 0x1df0f8: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1df0fc:
    // 0x1df0fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1df0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1df100:
    // 0x1df100: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x1df100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
label_1df104:
    // 0x1df104: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1df104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df108:
    // 0x1df108: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x1df108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1df10c:
    // 0x1df10c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1df10cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1df110:
    // 0x1df110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1df114:
    // 0x1df114: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x1df114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
label_1df118:
    // 0x1df118: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x1df118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
label_1df11c:
    // 0x1df11c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1df11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_1df120:
    // 0x1df120: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1df124:
    if (ctx->pc == 0x1DF124u) {
        ctx->pc = 0x1DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF120u;
        // 0x1df124: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF128u;
        goto label_1df128;
    }
    ctx->pc = 0x1DF120u;
    {
        const bool branch_taken_0x1df120 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1DF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF120u;
        // 0x1df124: 0x46030081  sub.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df120) {
            ctx->pc = 0x1DF134u;
            goto label_1df134;
        }
    }
    ctx->pc = 0x1DF128u;
label_1df128:
    // 0x1df128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df12c:
    // 0x1df12c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1df130:
    if (ctx->pc == 0x1DF130u) {
        ctx->pc = 0x1DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF12Cu;
        // 0x1df130: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF134u;
        goto label_1df134;
    }
    ctx->pc = 0x1DF12Cu;
    {
        const bool branch_taken_0x1df12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF12Cu;
        // 0x1df130: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df12c) {
            ctx->pc = 0x1DF150u;
            goto label_1df150;
        }
    }
    ctx->pc = 0x1DF134u;
label_1df134:
    // 0x1df134: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1df134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_1df138:
    // 0x1df138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1df13c:
    // 0x1df13c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1df13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1df140:
    // 0x1df140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df144:
    // 0x1df144: 0x0  nop
    ctx->pc = 0x1df144u;
    // NOP
label_1df148:
    // 0x1df148: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1df148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1df14c:
    // 0x1df14c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1df14cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1df150:
    // 0x1df150: 0x3c023580  lui         $v0, 0x3580
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13696 << 16));
label_1df154:
    // 0x1df154: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1df158:
    // 0x1df158: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x1df158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1df15c:
    // 0x1df15c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1df15cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df160:
    // 0x1df160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df164:
    // 0x1df164: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1df164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1df168:
    // 0x1df168: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1df168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1df16c:
    // 0x1df16c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1df16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df170:
    // 0x1df170: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1df170u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1df174:
    // 0x1df174: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1df178:
    // 0x1df178: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1df178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1df17c:
    // 0x1df17c: 0x0  nop
    ctx->pc = 0x1df17cu;
    // NOP
label_1df180:
    // 0x1df180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1df184:
    // 0x1df184: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1df184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1df188:
    // 0x1df188: 0x3e00008  jr          $ra
label_1df18c:
    if (ctx->pc == 0x1DF18Cu) {
        ctx->pc = 0x1DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF188u;
        // 0x1df18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DF190u;
        goto label_fallthrough_0x1df188;
    }
    ctx->pc = 0x1DF188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF188u;
        // 0x1df18c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1df188:
    ctx->pc = 0x1DF190u;
}
