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

// Function: sub_002E1090
// Address: 0x2e1090 - 0x2e1858
void sub_002E1090_0x2e1090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1090_0x2e1090");
#endif

    switch (ctx->pc) {
        case 0x2e10c0u: goto label_2e10c0;
        case 0x2e10d4u: goto label_2e10d4;
        case 0x2e1154u: goto label_2e1154;
        case 0x2e1164u: goto label_2e1164;
        case 0x2e1190u: goto label_2e1190;
        case 0x2e11a8u: goto label_2e11a8;
        case 0x2e11d4u: goto label_2e11d4;
        case 0x2e1230u: goto label_2e1230;
        case 0x2e1258u: goto label_2e1258;
        case 0x2e12bcu: goto label_2e12bc;
        case 0x2e1330u: goto label_2e1330;
        case 0x2e1348u: goto label_2e1348;
        case 0x2e135cu: goto label_2e135c;
        case 0x2e13e0u: goto label_2e13e0;
        case 0x2e13f4u: goto label_2e13f4;
        case 0x2e1424u: goto label_2e1424;
        case 0x2e1458u: goto label_2e1458;
        case 0x2e14bcu: goto label_2e14bc;
        case 0x2e151cu: goto label_2e151c;
        case 0x2e1588u: goto label_2e1588;
        case 0x2e159cu: goto label_2e159c;
        case 0x2e160cu: goto label_2e160c;
        case 0x2e1660u: goto label_2e1660;
        case 0x2e16a0u: goto label_2e16a0;
        case 0x2e1710u: goto label_2e1710;
        case 0x2e176cu: goto label_2e176c;
        case 0x2e17b4u: goto label_2e17b4;
        default: break;
    }

    ctx->pc = 0x2e1090u;

    // 0x2e1090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e1090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e1094: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e1094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e1098: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e1098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e109c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e109cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e10a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e10a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e10a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e10a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e10a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e10a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e10acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e10b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e10b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10b4: 0xfc800620  sd          $zero, 0x620($a0)
    ctx->pc = 0x2e10b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1568), GPR_U64(ctx, 0));
    // 0x2e10b8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e10b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e10bc: 0x0  nop
    ctx->pc = 0x2e10bcu;
    // NOP
label_2e10c0:
    // 0x2e10c0: 0x8e250040  lw          $a1, 0x40($s1)
    ctx->pc = 0x2e10c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2e10c4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E10C4u;
    {
        const bool branch_taken_0x2e10c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E10C4u;
        // 0x2e10c8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e10c4) {
            ctx->pc = 0x2E1130u;
            goto label_2e1130;
        }
    }
    ctx->pc = 0x2E10CCu;
    // 0x2e10cc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E10CCu;
    SET_GPR_U32(ctx, 31, 0x2E10D4u);
    ctx->pc = 0x2E10D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E10CCu;
    // 0x2e10d0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E10CCu, 0x2E10D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E10D4u;
label_2e10d4:
    // 0x2e10d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10D4u;
    {
        const bool branch_taken_0x2e10d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e10d4) {
            ctx->pc = 0x2E10F0u;
            goto label_2e10f0;
        }
    }
    ctx->pc = 0x2E10DCu;
    // 0x2e10dc: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x2e10dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2e10e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e10e4: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E10E4u;
    {
        const bool branch_taken_0x2e10e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e10e4) {
            ctx->pc = 0x2E1130u;
            goto label_2e1130;
        }
    }
    ctx->pc = 0x2E10ECu;
    // 0x2e10ec: 0x0  nop
    ctx->pc = 0x2e10ecu;
    // NOP
label_2e10f0:
    // 0x2e10f0: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2e10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2e10f4: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x2e10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2e10f8: 0x90a300c0  lbu         $v1, 0xC0($a1)
    ctx->pc = 0x2e10f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2e10fc: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2e10fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e1100: 0x908300e0  lbu         $v1, 0xE0($a0)
    ctx->pc = 0x2e1100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2e1104: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1108: 0xa08300e0  sb          $v1, 0xE0($a0)
    ctx->pc = 0x2e1108u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e110c: 0x90a300c0  lbu         $v1, 0xC0($a1)
    ctx->pc = 0x2e110cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x2e1110: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x2e1110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e1114: 0x90830100  lbu         $v1, 0x100($a0)
    ctx->pc = 0x2e1114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x2e1118: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e111c: 0xa0830100  sb          $v1, 0x100($a0)
    ctx->pc = 0x2e111cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1120: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x2e1120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e1124: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1128: 0xa203003a  sb          $v1, 0x3A($s0)
    ctx->pc = 0x2e1128u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e112c: 0x0  nop
    ctx->pc = 0x2e112cu;
    // NOP
label_2e1130:
    // 0x2e1130: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e1130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e1134: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x2e1134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e1138: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E1138u;
    {
        const bool branch_taken_0x2e1138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1138u;
        // 0x2e113c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1138) {
            ctx->pc = 0x2E10C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e10c0;
        }
    }
    ctx->pc = 0x2E1140u;
    // 0x2e1140: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2e1140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2e1144: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1144u;
    {
        const bool branch_taken_0x2e1144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1144u;
        // 0x2e1148: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1144) {
            ctx->pc = 0x2E1170u;
            goto label_2e1170;
        }
    }
    ctx->pc = 0x2E114Cu;
    // 0x2e114c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E114Cu;
    SET_GPR_U32(ctx, 31, 0x2E1154u);
    ctx->pc = 0x2E1150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E114Cu;
    // 0x2e1150: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E114Cu, 0x2E1154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1154u;
label_2e1154:
    // 0x2e1154: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1154u;
    {
        const bool branch_taken_0x2e1154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1154u;
        // 0x2e1158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1154) {
            ctx->pc = 0x2E1170u;
            goto label_2e1170;
        }
    }
    ctx->pc = 0x2E115Cu;
    // 0x2e115c: 0xc0b83f8  jal         func_2E0FE0
    ctx->pc = 0x2E115Cu;
    SET_GPR_U32(ctx, 31, 0x2E1164u);
    ctx->pc = 0x2E0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FE0u, 0x2E115Cu, 0x2E1164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1164u;
label_2e1164:
    // 0x2e1164: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2E1164u;
    {
        const bool branch_taken_0x2e1164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1164) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E116Cu;
    // 0x2e116c: 0x0  nop
    ctx->pc = 0x2e116cu;
    // NOP
label_2e1170:
    // 0x2e1170: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x2e1170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x2e1174: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1174u;
    {
        const bool branch_taken_0x2e1174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1174) {
            ctx->pc = 0x2E1188u;
            goto label_2e1188;
        }
    }
    ctx->pc = 0x2E117Cu;
    // 0x2e117c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1180: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x2E1180u;
    {
        const bool branch_taken_0x2e1180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1180u;
        // 0x2e1184: 0xae0306b4  sw          $v1, 0x6B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1180) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1188u;
label_2e1188:
    // 0x2e1188: 0xc0b8940  jal         func_2E2500
    ctx->pc = 0x2E1188u;
    SET_GPR_U32(ctx, 31, 0x2E1190u);
    ctx->pc = 0x2E118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1188u;
    // 0x2e118c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2500u, 0x2E1188u, 0x2E1190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1190u;
label_2e1190:
    // 0x2e1190: 0x920306b1  lbu         $v1, 0x6B1($s0)
    ctx->pc = 0x2e1190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1713)));
    // 0x2e1194: 0x106001a8  beqz        $v1, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x2E1194u;
    {
        const bool branch_taken_0x2e1194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1194u;
        // 0x2e1198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1194) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E119Cu;
    // 0x2e119c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e119cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e11a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e11a4: 0x0  nop
    ctx->pc = 0x2e11a4u;
    // NOP
label_2e11a8:
    // 0x2e11a8: 0x92230140  lbu         $v1, 0x140($s1)
    ctx->pc = 0x2e11a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2e11ac: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2E11ACu;
    {
        const bool branch_taken_0x2e11ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11ac) {
            ctx->pc = 0x2E11E0u;
            goto label_2e11e0;
        }
    }
    ctx->pc = 0x2E11B4u;
    // 0x2e11b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e11b8: 0xa2230140  sb          $v1, 0x140($s1)
    ctx->pc = 0x2e11b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 320), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e11bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e11bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e11c0: 0x1c600007  bgtz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E11C0u;
    {
        const bool branch_taken_0x2e11c0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x2e11c0) {
            ctx->pc = 0x2E11E0u;
            goto label_2e11e0;
        }
    }
    ctx->pc = 0x2E11C8u;
    // 0x2e11c8: 0x92250141  lbu         $a1, 0x141($s1)
    ctx->pc = 0x2e11c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 321)));
    // 0x2e11cc: 0xc0b8374  jal         func_2E0DD0
    ctx->pc = 0x2E11CCu;
    SET_GPR_U32(ctx, 31, 0x2E11D4u);
    ctx->pc = 0x2E11D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E11CCu;
    // 0x2e11d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DD0u, 0x2E11CCu, 0x2E11D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11D4u;
label_2e11d4:
    // 0x2e11d4: 0xa2200140  sb          $zero, 0x140($s1)
    ctx->pc = 0x2e11d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e11d8: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2e11d8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e11dc: 0xa2200141  sb          $zero, 0x141($s1)
    ctx->pc = 0x2e11dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 321), (uint8_t)GPR_U32(ctx, 0));
label_2e11e0:
    // 0x2e11e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e11e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2e11e4: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x2e11e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2e11e8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E11E8u;
    {
        const bool branch_taken_0x2e11e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E11E8u;
        // 0x2e11ec: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e11e8) {
            ctx->pc = 0x2E11A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e11a8;
        }
    }
    ctx->pc = 0x2E11F0u;
    // 0x2e11f0: 0x92040031  lbu         $a0, 0x31($s0)
    ctx->pc = 0x2e11f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x2e11f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e11f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e11f8: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E11F8u;
    {
        const bool branch_taken_0x2e11f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e11f8) {
            ctx->pc = 0x2E1260u;
            goto label_2e1260;
        }
    }
    ctx->pc = 0x2E1200u;
    // 0x2e1200: 0x14a0018d  bnez        $a1, . + 4 + (0x18D << 2)
    ctx->pc = 0x2E1200u;
    {
        const bool branch_taken_0x2e1200 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1200) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1208u;
    // 0x2e1208: 0x96030036  lhu         $v1, 0x36($s0)
    ctx->pc = 0x2e1208u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2e120c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2E120Cu;
    {
        const bool branch_taken_0x2e120c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e120c) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E1214u;
    // 0x2e1214: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1218: 0xa6030036  sh          $v1, 0x36($s0)
    ctx->pc = 0x2e1218u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e121c: 0x96030036  lhu         $v1, 0x36($s0)
    ctx->pc = 0x2e121cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
    // 0x2e1220: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1220u;
    {
        const bool branch_taken_0x2e1220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1220u;
        // 0x2e1224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1220) {
            ctx->pc = 0x2E1238u;
            goto label_2e1238;
        }
    }
    ctx->pc = 0x2E1228u;
    // 0x2e1228: 0xc0b83f8  jal         func_2E0FE0
    ctx->pc = 0x2E1228u;
    SET_GPR_U32(ctx, 31, 0x2E1230u);
    ctx->pc = 0x2E0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FE0u, 0x2E1228u, 0x2E1230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1230u;
label_2e1230:
    // 0x2e1230: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x2E1230u;
    {
        const bool branch_taken_0x2e1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1230) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1238u;
label_2e1238:
    // 0x2e1238: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e1238u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e123c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E123Cu;
    {
        const bool branch_taken_0x2e123c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e123c) {
            ctx->pc = 0x2E1260u;
            goto label_2e1260;
        }
    }
    ctx->pc = 0x2E1244u;
    // 0x2e1244: 0x9203003a  lbu         $v1, 0x3A($s0)
    ctx->pc = 0x2e1244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e1248: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1248u;
    {
        const bool branch_taken_0x2e1248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1248u;
        // 0x2e124c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1248) {
            ctx->pc = 0x2E1260u;
            goto label_2e1260;
        }
    }
    ctx->pc = 0x2E1250u;
    // 0x2e1250: 0xc0b83f8  jal         func_2E0FE0
    ctx->pc = 0x2E1250u;
    SET_GPR_U32(ctx, 31, 0x2E1258u);
    ctx->pc = 0x2E0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0FE0u, 0x2E1250u, 0x2E1258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1258u;
label_2e1258:
    // 0x2e1258: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x2E1258u;
    {
        const bool branch_taken_0x2e1258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1258) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1260u;
label_2e1260:
    // 0x2e1260: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1260u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1264: 0x10600174  beqz        $v1, . + 4 + (0x174 << 2)
    ctx->pc = 0x2E1264u;
    {
        const bool branch_taken_0x2e1264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1264) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E126Cu;
    // 0x2e126c: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e126cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e1270: 0x10600171  beqz        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x2E1270u;
    {
        const bool branch_taken_0x2e1270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1270) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1278u;
    // 0x2e1278: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e1278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e127c: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e127cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1280: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2e1280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1284: 0x1020016c  beqz        $at, . + 4 + (0x16C << 2)
    ctx->pc = 0x2E1284u;
    {
        const bool branch_taken_0x2e1284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1284) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E128Cu;
    // 0x2e128c: 0x96030604  lhu         $v1, 0x604($s0)
    ctx->pc = 0x2e128cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2e1290: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1290u;
    {
        const bool branch_taken_0x2e1290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1290) {
            ctx->pc = 0x2E12A8u;
            goto label_2e12a8;
        }
    }
    ctx->pc = 0x2E1298u;
    // 0x2e1298: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e129c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x2E129Cu;
    {
        const bool branch_taken_0x2e129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E129Cu;
        // 0x2e12a0: 0xa6030604  sh          $v1, 0x604($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e129c) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E12A4u;
    // 0x2e12a4: 0x0  nop
    ctx->pc = 0x2e12a4u;
    // NOP
label_2e12a8:
    // 0x2e12a8: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x2e12a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2e12ac: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E12ACu;
    {
        const bool branch_taken_0x2e12ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12ACu;
        // 0x2e12b0: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12ac) {
            ctx->pc = 0x2E12F0u;
            goto label_2e12f0;
        }
    }
    ctx->pc = 0x2E12B4u;
    // 0x2e12b4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2E12B4u;
    SET_GPR_U32(ctx, 31, 0x2E12BCu);
    ctx->pc = 0x2E12B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E12B4u;
    // 0x2e12b8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2E12B4u, 0x2E12BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E12BCu;
label_2e12bc:
    // 0x2e12bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E12BCu;
    {
        const bool branch_taken_0x2e12bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12bc) {
            ctx->pc = 0x2E12F0u;
            goto label_2e12f0;
        }
    }
    ctx->pc = 0x2E12C4u;
    // 0x2e12c4: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2e12c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2e12c8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E12C8u;
    {
        const bool branch_taken_0x2e12c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e12c8) {
            ctx->pc = 0x2E12F0u;
            goto label_2e12f0;
        }
    }
    ctx->pc = 0x2E12D0u;
    // 0x2e12d0: 0x9044065c  lbu         $a0, 0x65C($v0)
    ctx->pc = 0x2e12d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x2e12d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e12d8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E12D8u;
    {
        const bool branch_taken_0x2e12d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e12d8) {
            ctx->pc = 0x2E12F0u;
            goto label_2e12f0;
        }
    }
    ctx->pc = 0x2E12E0u;
    // 0x2e12e0: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x2e12e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x2e12e4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2e12e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2e12e8: 0x10600153  beqz        $v1, . + 4 + (0x153 << 2)
    ctx->pc = 0x2E12E8u;
    {
        const bool branch_taken_0x2e12e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e12e8) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E12F0u;
label_2e12f0:
    // 0x2e12f0: 0x92030032  lbu         $v1, 0x32($s0)
    ctx->pc = 0x2e12f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x2e12f4: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x2e12f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e12f8: 0x1020014f  beqz        $at, . + 4 + (0x14F << 2)
    ctx->pc = 0x2E12F8u;
    {
        const bool branch_taken_0x2e12f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E12F8u;
        // 0x2e12fc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12f8) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1300u;
    // 0x2e1300: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e1300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e1304: 0x24847af0  addiu       $a0, $a0, 0x7AF0
    ctx->pc = 0x2e1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31472));
    // 0x2e1308: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e130c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1310: 0x600008  jr          $v1
    ctx->pc = 0x2E1310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E1318u: goto label_2e1318;
            case 0x2E13D8u: goto label_2e13d8;
            case 0x2E1450u: goto label_2e1450;
            case 0x2E14E8u: goto label_2e14e8;
            case 0x2E15F8u: goto label_2e15f8;
            case 0x2E16F0u: goto label_2e16f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1310u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E1318u;
label_2e1318:
    // 0x2e1318: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1318u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e131c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e131cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1320: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e1320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1324: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E1324u;
    {
        const bool branch_taken_0x2e1324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1324u;
        // 0x2e1328: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1324) {
            ctx->pc = 0x2E13B0u;
            goto label_2e13b0;
        }
    }
    ctx->pc = 0x2E132Cu;
    // 0x2e132c: 0x0  nop
    ctx->pc = 0x2e132cu;
    // NOP
label_2e1330:
    // 0x2e1330: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2e1330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e1334: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2e1334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e1338: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E1338u;
    {
        const bool branch_taken_0x2e1338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1338u;
        // 0x2e133c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1338) {
            ctx->pc = 0x2E1398u;
            goto label_2e1398;
        }
    }
    ctx->pc = 0x2E1340u;
    // 0x2e1340: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1340u;
    SET_GPR_U32(ctx, 31, 0x2E1348u);
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1340u, 0x2E1348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1348u;
label_2e1348:
    // 0x2e1348: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1348u;
    {
        const bool branch_taken_0x2e1348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1348u;
        // 0x2e134c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1348) {
            ctx->pc = 0x2E1390u;
            goto label_2e1390;
        }
    }
    ctx->pc = 0x2E1350u;
    // 0x2e1350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e1350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1354: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E1354u;
    SET_GPR_U32(ctx, 31, 0x2E135Cu);
    ctx->pc = 0x2E1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1354u;
    // 0x2e1358: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E1354u, 0x2E135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E135Cu;
label_2e135c:
    // 0x2e135c: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e135cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e1360: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e1360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1364: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2e1364u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1368: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1368u;
    {
        const bool branch_taken_0x2e1368 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1368) {
            ctx->pc = 0x2E13B0u;
            goto label_2e13b0;
        }
    }
    ctx->pc = 0x2E1370u;
    // 0x2e1370: 0x96030604  lhu         $v1, 0x604($s0)
    ctx->pc = 0x2e1370u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2e1374: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1374u;
    {
        const bool branch_taken_0x2e1374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1374) {
            ctx->pc = 0x2E13B0u;
            goto label_2e13b0;
        }
    }
    ctx->pc = 0x2E137Cu;
    // 0x2e137c: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e137cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e1380: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1380u;
    {
        const bool branch_taken_0x2e1380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1380) {
            ctx->pc = 0x2E1398u;
            goto label_2e1398;
        }
    }
    ctx->pc = 0x2E1388u;
    // 0x2e1388: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1388u;
    {
        const bool branch_taken_0x2e1388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1388) {
            ctx->pc = 0x2E13B0u;
            goto label_2e13b0;
        }
    }
    ctx->pc = 0x2E1390u;
label_2e1390:
    // 0x2e1390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1394: 0xfe030620  sd          $v1, 0x620($s0)
    ctx->pc = 0x2e1394u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
label_2e1398:
    // 0x2e1398: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e139c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e139cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e13a0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e13a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e13a4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2E13A4u;
    {
        const bool branch_taken_0x2e13a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e13a4) {
            ctx->pc = 0x2E1330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1330;
        }
    }
    ctx->pc = 0x2E13ACu;
    // 0x2e13ac: 0x0  nop
    ctx->pc = 0x2e13acu;
    // NOP
label_2e13b0:
    // 0x2e13b0: 0x12400121  beqz        $s2, . + 4 + (0x121 << 2)
    ctx->pc = 0x2E13B0u;
    {
        const bool branch_taken_0x2e13b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13b0) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E13B8u;
    // 0x2e13b8: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e13b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e13bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E13BCu;
    {
        const bool branch_taken_0x2e13bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13bc) {
            ctx->pc = 0x2E13D0u;
            goto label_2e13d0;
        }
    }
    ctx->pc = 0x2E13C4u;
    // 0x2e13c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e13c8: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e13c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e13cc: 0x0  nop
    ctx->pc = 0x2e13ccu;
    // NOP
label_2e13d0:
    // 0x2e13d0: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x2E13D0u;
    {
        const bool branch_taken_0x2e13d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E13D0u;
        // 0x2e13d4: 0xfe000620  sd          $zero, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13d0) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E13D8u;
label_2e13d8:
    // 0x2e13d8: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E13D8u;
    SET_GPR_U32(ctx, 31, 0x2E13E0u);
    ctx->pc = 0x2E13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13D8u;
    // 0x2e13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E13D8u, 0x2E13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13E0u;
label_2e13e0:
    // 0x2e13e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E13E0u;
    {
        const bool branch_taken_0x2e13e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e13e0) {
            ctx->pc = 0x2E1440u;
            goto label_2e1440;
        }
    }
    ctx->pc = 0x2E13E8u;
    // 0x2e13e8: 0x96020606  lhu         $v0, 0x606($s0)
    ctx->pc = 0x2e13e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e13ec: 0xc0969c8  jal         func_25A720
    ctx->pc = 0x2E13ECu;
    SET_GPR_U32(ctx, 31, 0x2E13F4u);
    ctx->pc = 0x2E13F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E13ECu;
    // 0x2e13f0: 0x2444ffff  addiu       $a0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A720u, 0x2E13ECu, 0x2E13F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E13F4u;
label_2e13f4:
    // 0x2e13f4: 0x82030039  lb          $v1, 0x39($s0)
    ctx->pc = 0x2e13f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2e13f8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E13F8u;
    {
        const bool branch_taken_0x2e13f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e13f8) {
            ctx->pc = 0x2E1418u;
            goto label_2e1418;
        }
    }
    ctx->pc = 0x2E1400u;
    // 0x2e1400: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1404: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e1408: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x2e1408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e140c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E140Cu;
    {
        const bool branch_taken_0x2e140c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e140c) {
            ctx->pc = 0x2E1418u;
            goto label_2e1418;
        }
    }
    ctx->pc = 0x2E1414u;
    // 0x2e1414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1418:
    // 0x2e1418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e141c: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E141Cu;
    SET_GPR_U32(ctx, 31, 0x2E1424u);
    ctx->pc = 0x2E1420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E141Cu;
    // 0x2e1420: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E141Cu, 0x2E1424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1424u;
label_2e1424:
    // 0x2e1424: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e1424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e1428: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1428u;
    {
        const bool branch_taken_0x2e1428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1428) {
            ctx->pc = 0x2E1438u;
            goto label_2e1438;
        }
    }
    ctx->pc = 0x2E1430u;
    // 0x2e1430: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1434: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e1434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_2e1438:
    // 0x2e1438: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x2E1438u;
    {
        const bool branch_taken_0x2e1438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1438u;
        // 0x2e143c: 0xfe000620  sd          $zero, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1438) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1440u;
label_2e1440:
    // 0x2e1440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1444: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x2E1444u;
    {
        const bool branch_taken_0x2e1444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1444u;
        // 0x2e1448: 0xfe030620  sd          $v1, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1444) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E144Cu;
    // 0x2e144c: 0x0  nop
    ctx->pc = 0x2e144cu;
    // NOP
label_2e1450:
    // 0x2e1450: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1450u;
    SET_GPR_U32(ctx, 31, 0x2E1458u);
    ctx->pc = 0x2E1454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1450u;
    // 0x2e1454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1450u, 0x2E1458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1458u;
label_2e1458:
    // 0x2e1458: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2E1458u;
    {
        const bool branch_taken_0x2e1458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1458) {
            ctx->pc = 0x2E14D8u;
            goto label_2e14d8;
        }
    }
    ctx->pc = 0x2E1460u;
    // 0x2e1460: 0x96030608  lhu         $v1, 0x608($s0)
    ctx->pc = 0x2e1460u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x2e1464: 0x96020606  lhu         $v0, 0x606($s0)
    ctx->pc = 0x2e1464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1468: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e1468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e146c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E146Cu;
    {
        const bool branch_taken_0x2e146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e146c) {
            ctx->pc = 0x2E1478u;
            goto label_2e1478;
        }
    }
    ctx->pc = 0x2E1474u;
    // 0x2e1474: 0xa6000608  sh          $zero, 0x608($s0)
    ctx->pc = 0x2e1474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1544), (uint16_t)GPR_U32(ctx, 0));
label_2e1478:
    // 0x2e1478: 0x96030608  lhu         $v1, 0x608($s0)
    ctx->pc = 0x2e1478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x2e147c: 0x82020039  lb          $v0, 0x39($s0)
    ctx->pc = 0x2e147cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2e1480: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1480u;
    {
        const bool branch_taken_0x2e1480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1480u;
        // 0x2e1484: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1480) {
            ctx->pc = 0x2E1490u;
            goto label_2e1490;
        }
    }
    ctx->pc = 0x2E1488u;
    // 0x2e1488: 0xa6020608  sh          $v0, 0x608($s0)
    ctx->pc = 0x2e1488u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1544), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e148c: 0x0  nop
    ctx->pc = 0x2e148cu;
    // NOP
label_2e1490:
    // 0x2e1490: 0x96030608  lhu         $v1, 0x608($s0)
    ctx->pc = 0x2e1490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x2e1494: 0x96020606  lhu         $v0, 0x606($s0)
    ctx->pc = 0x2e1494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1498: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2e1498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e149c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E149Cu;
    {
        const bool branch_taken_0x2e149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e149c) {
            ctx->pc = 0x2E14A8u;
            goto label_2e14a8;
        }
    }
    ctx->pc = 0x2E14A4u;
    // 0x2e14a4: 0xa6000608  sh          $zero, 0x608($s0)
    ctx->pc = 0x2e14a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1544), (uint16_t)GPR_U32(ctx, 0));
label_2e14a8:
    // 0x2e14a8: 0x96050608  lhu         $a1, 0x608($s0)
    ctx->pc = 0x2e14a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1544)));
    // 0x2e14ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e14acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14b0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e14b4: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E14B4u;
    SET_GPR_U32(ctx, 31, 0x2E14BCu);
    ctx->pc = 0x2E14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E14B4u;
    // 0x2e14b8: 0xa6020608  sh          $v0, 0x608($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1544), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E14B4u, 0x2E14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E14BCu;
label_2e14bc:
    // 0x2e14bc: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e14bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e14c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E14C0u;
    {
        const bool branch_taken_0x2e14c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14c0) {
            ctx->pc = 0x2E14D0u;
            goto label_2e14d0;
        }
    }
    ctx->pc = 0x2E14C8u;
    // 0x2e14c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e14c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e14cc: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e14ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
label_2e14d0:
    // 0x2e14d0: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x2E14D0u;
    {
        const bool branch_taken_0x2e14d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14D0u;
        // 0x2e14d4: 0xfe000620  sd          $zero, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14d0) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E14D8u;
label_2e14d8:
    // 0x2e14d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e14dc: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x2E14DCu;
    {
        const bool branch_taken_0x2e14dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14DCu;
        // 0x2e14e0: 0xfe030620  sd          $v1, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14dc) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E14E4u;
    // 0x2e14e4: 0x0  nop
    ctx->pc = 0x2e14e4u;
    // NOP
label_2e14e8:
    // 0x2e14e8: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e14e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e14ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E14ECu;
    {
        const bool branch_taken_0x2e14ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e14ec) {
            ctx->pc = 0x2E1508u;
            goto label_2e1508;
        }
    }
    ctx->pc = 0x2E14F4u;
    // 0x2e14f4: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2e14f8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E14F8u;
    {
        const bool branch_taken_0x2e14f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E14F8u;
        // 0x2e14fc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e14f8) {
            ctx->pc = 0x2E1568u;
            goto label_2e1568;
        }
    }
    ctx->pc = 0x2E1500u;
    // 0x2e1500: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E1500u;
    {
        const bool branch_taken_0x2e1500 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1500) {
            ctx->pc = 0x2E1568u;
            goto label_2e1568;
        }
    }
    ctx->pc = 0x2E1508u;
label_2e1508:
    // 0x2e1508: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e1508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e150c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E150Cu;
    {
        const bool branch_taken_0x2e150c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E150Cu;
        // 0x2e1510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e150c) {
            ctx->pc = 0x2E1568u;
            goto label_2e1568;
        }
    }
    ctx->pc = 0x2E1514u;
    // 0x2e1514: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1514u;
    SET_GPR_U32(ctx, 31, 0x2E151Cu);
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1514u, 0x2E151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E151Cu;
label_2e151c:
    // 0x2e151c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E151Cu;
    {
        const bool branch_taken_0x2e151c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e151c) {
            ctx->pc = 0x2E1560u;
            goto label_2e1560;
        }
    }
    ctx->pc = 0x2E1524u;
    // 0x2e1524: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2e1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2e1528: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1528u;
    {
        const bool branch_taken_0x2e1528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1528) {
            ctx->pc = 0x2E1540u;
            goto label_2e1540;
        }
    }
    ctx->pc = 0x2E1530u;
    // 0x2e1530: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1534: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1538u;
    {
        const bool branch_taken_0x2e1538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1538u;
        // 0x2e153c: 0xa203003b  sb          $v1, 0x3B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1538) {
            ctx->pc = 0x2E1548u;
            goto label_2e1548;
        }
    }
    ctx->pc = 0x2E1540u;
label_2e1540:
    // 0x2e1540: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1540u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1544: 0xa203003b  sb          $v1, 0x3B($s0)
    ctx->pc = 0x2e1544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
label_2e1548:
    // 0x2e1548: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e1548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e154c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1550: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e1550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1554u;
    {
        const bool branch_taken_0x2e1554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1554u;
        // 0x2e1558: 0xfe000620  sd          $zero, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1554) {
            ctx->pc = 0x2E1568u;
            goto label_2e1568;
        }
    }
    ctx->pc = 0x2E155Cu;
    // 0x2e155c: 0x0  nop
    ctx->pc = 0x2e155cu;
    // NOP
label_2e1560:
    // 0x2e1560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1564: 0xfe030620  sd          $v1, 0x620($s0)
    ctx->pc = 0x2e1564u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
label_2e1568:
    // 0x2e1568: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e1568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e156c: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x2E156Cu;
    {
        const bool branch_taken_0x2e156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e156c) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1574u;
    // 0x2e1574: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1574u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1578: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e1578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e157c: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
    ctx->pc = 0x2E157Cu;
    {
        const bool branch_taken_0x2e157c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E157Cu;
        // 0x2e1580: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e157c) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1584u;
    // 0x2e1584: 0x0  nop
    ctx->pc = 0x2e1584u;
    // NOP
label_2e1588:
    // 0x2e1588: 0x82030039  lb          $v1, 0x39($s0)
    ctx->pc = 0x2e1588u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2e158c: 0x12230012  beq         $s1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E158Cu;
    {
        const bool branch_taken_0x2e158c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E1590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E158Cu;
        // 0x2e1590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e158c) {
            ctx->pc = 0x2E15D8u;
            goto label_2e15d8;
        }
    }
    ctx->pc = 0x2E1594u;
    // 0x2e1594: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E1594u;
    SET_GPR_U32(ctx, 31, 0x2E159Cu);
    ctx->pc = 0x2E1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1594u;
    // 0x2e1598: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E1594u, 0x2E159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E159Cu;
label_2e159c:
    // 0x2e159c: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e159cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e15a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e15a4: 0xa203003b  sb          $v1, 0x3B($s0)
    ctx->pc = 0x2e15a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e15a8: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e15a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e15ac: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e15acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e15b0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2e15b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e15b4: 0x102000a0  beqz        $at, . + 4 + (0xA0 << 2)
    ctx->pc = 0x2E15B4u;
    {
        const bool branch_taken_0x2e15b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15b4) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E15BCu;
    // 0x2e15bc: 0x96030604  lhu         $v1, 0x604($s0)
    ctx->pc = 0x2e15bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2e15c0: 0x1460009d  bnez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x2E15C0u;
    {
        const bool branch_taken_0x2e15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e15c0) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E15C8u;
    // 0x2e15c8: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e15c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e15cc: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2E15CCu;
    {
        const bool branch_taken_0x2e15cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15cc) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E15D4u;
    // 0x2e15d4: 0x0  nop
    ctx->pc = 0x2e15d4u;
    // NOP
label_2e15d8:
    // 0x2e15d8: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e15d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e15dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e15dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2e15e0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2e15e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e15e4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2E15E4u;
    {
        const bool branch_taken_0x2e15e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e15e4) {
            ctx->pc = 0x2E1588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1588;
        }
    }
    ctx->pc = 0x2E15ECu;
    // 0x2e15ec: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2E15ECu;
    {
        const bool branch_taken_0x2e15ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e15ec) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E15F4u;
    // 0x2e15f4: 0x0  nop
    ctx->pc = 0x2e15f4u;
    // NOP
label_2e15f8:
    // 0x2e15f8: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e15f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e15fc: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E15FCu;
    {
        const bool branch_taken_0x2e15fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E15FCu;
        // 0x2e1600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15fc) {
            ctx->pc = 0x2E16D8u;
            goto label_2e16d8;
        }
    }
    ctx->pc = 0x2E1604u;
    // 0x2e1604: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1604u;
    SET_GPR_U32(ctx, 31, 0x2E160Cu);
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1604u, 0x2E160Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E160Cu;
label_2e160c:
    // 0x2e160c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E160Cu;
    {
        const bool branch_taken_0x2e160c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e160c) {
            ctx->pc = 0x2E1650u;
            goto label_2e1650;
        }
    }
    ctx->pc = 0x2E1614u;
    // 0x2e1614: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x2e1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2e1618: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1618u;
    {
        const bool branch_taken_0x2e1618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1618) {
            ctx->pc = 0x2E1630u;
            goto label_2e1630;
        }
    }
    ctx->pc = 0x2E1620u;
    // 0x2e1620: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e1620u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1624: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1628: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1628u;
    {
        const bool branch_taken_0x2e1628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1628u;
        // 0x2e162c: 0xa203003b  sb          $v1, 0x3B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1628) {
            ctx->pc = 0x2E1638u;
            goto label_2e1638;
        }
    }
    ctx->pc = 0x2E1630u;
label_2e1630:
    // 0x2e1630: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e1630u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e1634: 0xa203003b  sb          $v1, 0x3B($s0)
    ctx->pc = 0x2e1634u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
label_2e1638:
    // 0x2e1638: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e1638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e163c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1640: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e1640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1644: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2E1644u;
    {
        const bool branch_taken_0x2e1644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1644u;
        // 0x2e1648: 0xfe000620  sd          $zero, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1644) {
            ctx->pc = 0x2E16D8u;
            goto label_2e16d8;
        }
    }
    ctx->pc = 0x2E164Cu;
    // 0x2e164c: 0x0  nop
    ctx->pc = 0x2e164cu;
    // NOP
label_2e1650:
    // 0x2e1650: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1654: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E1654u;
    {
        const bool branch_taken_0x2e1654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1654u;
        // 0x2e1658: 0xfe030620  sd          $v1, 0x620($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1654) {
            ctx->pc = 0x2E16D8u;
            goto label_2e16d8;
        }
    }
    ctx->pc = 0x2E165Cu;
    // 0x2e165c: 0x0  nop
    ctx->pc = 0x2e165cu;
    // NOP
label_2e1660:
    // 0x2e1660: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x2e1660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1664: 0x96030606  lhu         $v1, 0x606($s0)
    ctx->pc = 0x2e1664u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e1668: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e1668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e166c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E166Cu;
    {
        const bool branch_taken_0x2e166c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e166c) {
            ctx->pc = 0x2E1678u;
            goto label_2e1678;
        }
    }
    ctx->pc = 0x2E1674u;
    // 0x2e1674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1678:
    // 0x2e1678: 0x82020039  lb          $v0, 0x39($s0)
    ctx->pc = 0x2e1678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 57)));
    // 0x2e167c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E167Cu;
    {
        const bool branch_taken_0x2e167c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e167c) {
            ctx->pc = 0x2E1688u;
            goto label_2e1688;
        }
    }
    ctx->pc = 0x2E1684u;
    // 0x2e1684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e1688:
    // 0x2e1688: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2e1688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e168c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E168Cu;
    {
        const bool branch_taken_0x2e168c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e168c) {
            ctx->pc = 0x2E1698u;
            goto label_2e1698;
        }
    }
    ctx->pc = 0x2E1694u;
    // 0x2e1694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e1694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1698:
    // 0x2e1698: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E1698u;
    SET_GPR_U32(ctx, 31, 0x2E16A0u);
    ctx->pc = 0x2E169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1698u;
    // 0x2e169c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E1698u, 0x2E16A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16A0u;
label_2e16a0:
    // 0x2e16a0: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e16a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e16a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e16a8: 0xa203003b  sb          $v1, 0x3B($s0)
    ctx->pc = 0x2e16a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 59), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e16ac: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e16acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e16b0: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e16b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e16b4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2e16b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e16b8: 0x1020005f  beqz        $at, . + 4 + (0x5F << 2)
    ctx->pc = 0x2E16B8u;
    {
        const bool branch_taken_0x2e16b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16b8) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E16C0u;
    // 0x2e16c0: 0x96030604  lhu         $v1, 0x604($s0)
    ctx->pc = 0x2e16c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2e16c4: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2E16C4u;
    {
        const bool branch_taken_0x2e16c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e16c4) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E16CCu;
    // 0x2e16cc: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e16ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e16d0: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x2E16D0u;
    {
        const bool branch_taken_0x2e16d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16d0) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E16D8u;
label_2e16d8:
    // 0x2e16d8: 0x9203003b  lbu         $v1, 0x3B($s0)
    ctx->pc = 0x2e16d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 59)));
    // 0x2e16dc: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2E16DCu;
    {
        const bool branch_taken_0x2e16dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e16dc) {
            ctx->pc = 0x2E1660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1660;
        }
    }
    ctx->pc = 0x2E16E4u;
    // 0x2e16e4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2E16E4u;
    {
        const bool branch_taken_0x2e16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e16e4) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E16ECu;
    // 0x2e16ec: 0x0  nop
    ctx->pc = 0x2e16ecu;
    // NOP
label_2e16f0:
    // 0x2e16f0: 0x96040606  lhu         $a0, 0x606($s0)
    ctx->pc = 0x2e16f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e16f4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2e16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e16f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e16f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e16fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e16fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1700: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2e1700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1704: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x2E1704u;
    {
        const bool branch_taken_0x2e1704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1704u;
        // 0x2e1708: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1704) {
            ctx->pc = 0x2E1810u;
            goto label_2e1810;
        }
    }
    ctx->pc = 0x2E170Cu;
    // 0x2e170c: 0x0  nop
    ctx->pc = 0x2e170cu;
    // NOP
label_2e1710:
    // 0x2e1710: 0x32830001  andi        $v1, $s4, 0x1
    ctx->pc = 0x2e1710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x2e1714: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1714u;
    {
        const bool branch_taken_0x2e1714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1714u;
        // 0x2e1718: 0x26930001  addiu       $s3, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1714) {
            ctx->pc = 0x2E1720u;
            goto label_2e1720;
        }
    }
    ctx->pc = 0x2E171Cu;
    // 0x2e171c: 0x2693ffff  addiu       $s3, $s4, -0x1
    ctx->pc = 0x2e171cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2e1720:
    // 0x2e1720: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x2e1720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x2e1724: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2e1724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e1728: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2E1728u;
    {
        const bool branch_taken_0x2e1728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1728u;
        // 0x2e172c: 0x2131821  addu        $v1, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1728) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E1730u;
    // 0x2e1730: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2e1730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2e1734: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E1734u;
    {
        const bool branch_taken_0x2e1734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1734) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E173Cu;
    // 0x2e173c: 0xde030618  ld          $v1, 0x618($s0)
    ctx->pc = 0x2e173cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1560)));
    // 0x2e1740: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1744: 0x2849014  dsllv       $s2, $a0, $s4
    ctx->pc = 0x2e1744u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x2e1748: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2e1748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2e174c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E174Cu;
    {
        const bool branch_taken_0x2e174c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e174c) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E1754u;
    // 0x2e1754: 0xde030610  ld          $v1, 0x610($s0)
    ctx->pc = 0x2e1754u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x2e1758: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2e1758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x2e175c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E175Cu;
    {
        const bool branch_taken_0x2e175c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E175Cu;
        // 0x2e1760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e175c) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E1764u;
    // 0x2e1764: 0xc0b8418  jal         func_2E1060
    ctx->pc = 0x2E1764u;
    SET_GPR_U32(ctx, 31, 0x2E176Cu);
    ctx->pc = 0x2E1060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1060u, 0x2E1764u, 0x2E176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E176Cu;
label_2e176c:
    // 0x2e176c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E176Cu;
    {
        const bool branch_taken_0x2e176c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e176c) {
            ctx->pc = 0x2E17E8u;
            goto label_2e17e8;
        }
    }
    ctx->pc = 0x2E1774u;
    // 0x2e1774: 0xde070610  ld          $a3, 0x610($s0)
    ctx->pc = 0x2e1774u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x2e1778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e177c: 0x2621814  dsllv       $v1, $v0, $s3
    ctx->pc = 0x2e177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
    // 0x2e1780: 0x2403027  not         $a2, $s2
    ctx->pc = 0x2e1780u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 18) | GPR_U64(ctx, 0)));
    // 0x2e1784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1788: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e1788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e178c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2e178cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2e1790: 0xf21025  or          $v0, $a3, $s2
    ctx->pc = 0x2e1790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x2e1794: 0xfe020610  sd          $v0, 0x610($s0)
    ctx->pc = 0x2e1794u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1552), GPR_U64(ctx, 2));
    // 0x2e1798: 0xde020618  ld          $v0, 0x618($s0)
    ctx->pc = 0x2e1798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1560)));
    // 0x2e179c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2e17a0: 0xfe020618  sd          $v0, 0x618($s0)
    ctx->pc = 0x2e17a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1560), GPR_U64(ctx, 2));
    // 0x2e17a4: 0xde020618  ld          $v0, 0x618($s0)
    ctx->pc = 0x2e17a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1560)));
    // 0x2e17a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e17ac: 0xc0b8314  jal         func_2E0C50
    ctx->pc = 0x2E17ACu;
    SET_GPR_U32(ctx, 31, 0x2E17B4u);
    ctx->pc = 0x2E17B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E17ACu;
    // 0x2e17b0: 0xfe020618  sd          $v0, 0x618($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 1560), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0C50u, 0x2E17ACu, 0x2E17B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E17B4u;
label_2e17b4:
    // 0x2e17b4: 0x9204003a  lbu         $a0, 0x3A($s0)
    ctx->pc = 0x2e17b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x2e17b8: 0x92030038  lbu         $v1, 0x38($s0)
    ctx->pc = 0x2e17b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2e17bc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2e17bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e17c0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2E17C0u;
    {
        const bool branch_taken_0x2e17c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e17c0) {
            ctx->pc = 0x2E1810u;
            goto label_2e1810;
        }
    }
    ctx->pc = 0x2E17C8u;
    // 0x2e17c8: 0x96030604  lhu         $v1, 0x604($s0)
    ctx->pc = 0x2e17c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
    // 0x2e17cc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E17CCu;
    {
        const bool branch_taken_0x2e17cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e17cc) {
            ctx->pc = 0x2E1810u;
            goto label_2e1810;
        }
    }
    ctx->pc = 0x2E17D4u;
    // 0x2e17d4: 0x96030034  lhu         $v1, 0x34($s0)
    ctx->pc = 0x2e17d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2e17d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E17D8u;
    {
        const bool branch_taken_0x2e17d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e17d8) {
            ctx->pc = 0x2E17F0u;
            goto label_2e17f0;
        }
    }
    ctx->pc = 0x2E17E0u;
    // 0x2e17e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E17E0u;
    {
        const bool branch_taken_0x2e17e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e17e0) {
            ctx->pc = 0x2E1810u;
            goto label_2e1810;
        }
    }
    ctx->pc = 0x2E17E8u;
label_2e17e8:
    // 0x2e17e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e17e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e17ec: 0xfe030620  sd          $v1, 0x620($s0)
    ctx->pc = 0x2e17ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 3));
label_2e17f0:
    // 0x2e17f0: 0x96040606  lhu         $a0, 0x606($s0)
    ctx->pc = 0x2e17f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1542)));
    // 0x2e17f4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2e17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2e17f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2e17f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2e17fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2e17fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e1800: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2e1800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1804: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2E1804u;
    {
        const bool branch_taken_0x2e1804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1804) {
            ctx->pc = 0x2E1710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1710;
        }
    }
    ctx->pc = 0x2E180Cu;
    // 0x2e180c: 0x0  nop
    ctx->pc = 0x2e180cu;
    // NOP
label_2e1810:
    // 0x2e1810: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1810u;
    {
        const bool branch_taken_0x2e1810 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1810) {
            ctx->pc = 0x2E1838u;
            goto label_2e1838;
        }
    }
    ctx->pc = 0x2E1818u;
    // 0x2e1818: 0x92030600  lbu         $v1, 0x600($s0)
    ctx->pc = 0x2e1818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x2e181c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E181Cu;
    {
        const bool branch_taken_0x2e181c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e181c) {
            ctx->pc = 0x2E1830u;
            goto label_2e1830;
        }
    }
    ctx->pc = 0x2E1824u;
    // 0x2e1824: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1828: 0xa2030600  sb          $v1, 0x600($s0)
    ctx->pc = 0x2e1828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1536), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e182c: 0x0  nop
    ctx->pc = 0x2e182cu;
    // NOP
label_2e1830:
    // 0x2e1830: 0xfe000620  sd          $zero, 0x620($s0)
    ctx->pc = 0x2e1830u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1568), GPR_U64(ctx, 0));
    // 0x2e1834: 0x0  nop
    ctx->pc = 0x2e1834u;
    // NOP
label_2e1838:
    // 0x2e1838: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e1838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e183c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e183cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1840: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e1840u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e1844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e1848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e184c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e184cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1850: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1850u;
        // 0x2e1854: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1858u;
}
