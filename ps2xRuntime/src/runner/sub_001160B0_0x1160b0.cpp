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

// Function: sub_001160B0
// Address: 0x1160b0 - 0x116290
void sub_001160B0_0x1160b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001160B0_0x1160b0");
#endif

    switch (ctx->pc) {
        case 0x1160f8u: goto label_1160f8;
        case 0x116110u: goto label_116110;
        case 0x116140u: goto label_116140;
        case 0x1161a8u: goto label_1161a8;
        case 0x1161c8u: goto label_1161c8;
        case 0x116208u: goto label_116208;
        case 0x116218u: goto label_116218;
        case 0x116220u: goto label_116220;
        case 0x116234u: goto label_116234;
        case 0x116244u: goto label_116244;
        case 0x116254u: goto label_116254;
        case 0x11625cu: goto label_11625c;
        default: break;
    }

    ctx->pc = 0x1160b0u;

    // 0x1160b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1160b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1160b4: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1160b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1160b8: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1160b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1160bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1160bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1160c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1160c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1160c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160c8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1160c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1160cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1160ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1160d0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1160d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1160d4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1160d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1160d8: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1160d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1160dc: 0x3c1e0069  lui         $fp, 0x69
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)105 << 16));
    // 0x1160e0: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1160e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1160e4: 0x27d2ec80  addiu       $s2, $fp, -0x1380
    ctx->pc = 0x1160e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x1160e8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1160e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1160ec: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1160ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1160f0: 0xc044b50  jal         func_112D40
    ctx->pc = 0x1160F0u;
    SET_GPR_U32(ctx, 31, 0x1160F8u);
    ctx->pc = 0x1160F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1160F0u;
    // 0x1160f4: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D40u, 0x1160F0u, 0x1160F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1160F8u;
label_1160f8:
    // 0x1160f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1160f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1160fc: 0x8c622b3c  lw          $v0, 0x2B3C($v1)
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B3Cu));
    // 0x116100: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116100u;
    {
        const bool branch_taken_0x116100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116100) {
            ctx->pc = 0x116104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116100u;
            // 0x116104: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116114u;
            goto label_116114;
        }
    }
    ctx->pc = 0x116108u;
    // 0x116108: 0xc044b9a  jal         func_112E68
    ctx->pc = 0x116108u;
    SET_GPR_U32(ctx, 31, 0x116110u);
    ctx->pc = 0x112E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112E68u, 0x116108u, 0x116110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116110u;
label_116110:
    // 0x116110: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x116110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_116114:
    // 0x116114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116118: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x116118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11611c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x11611Cu;
    {
        const bool branch_taken_0x11611c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x116120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11611Cu;
        // 0x116120: 0xa2420014  sb          $v0, 0x14($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11611c) {
            ctx->pc = 0x11616Cu;
            goto label_11616c;
        }
    }
    ctx->pc = 0x116124u;
    // 0x116124: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x116124u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116128: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x116128u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x11612c: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x11612cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116130: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x116130u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x116134: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x116134u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
    // 0x116138: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x116138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11613c: 0x0  nop
    ctx->pc = 0x11613cu;
    // NOP
label_116140:
    // 0x116140: 0x28a20400  slti        $v0, $a1, 0x400
    ctx->pc = 0x116140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116144: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x116144u;
    {
        const bool branch_taken_0x116144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116144u;
        // 0x116148: 0x2251021  addu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116144) {
            ctx->pc = 0x116180u;
            goto label_116180;
        }
    }
    ctx->pc = 0x11614Cu;
    // 0x11614c: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x11614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x116150: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x116150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116154: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x116154u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x116158: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x116158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11615c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11615Cu;
    {
        const bool branch_taken_0x11615c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11615c) {
            ctx->pc = 0x116160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11615Cu;
            // 0x116160: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116140;
        }
    }
    ctx->pc = 0x116164u;
    // 0x116164: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x116164u;
    {
        const bool branch_taken_0x116164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116164u;
        // 0x116168: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116164) {
            ctx->pc = 0x116184u;
            goto label_116184;
        }
    }
    ctx->pc = 0x11616Cu;
label_11616c:
    // 0x11616c: 0x2e060400  sltiu       $a2, $s0, 0x400
    ctx->pc = 0x11616cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x116170: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x116170u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x116174: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x116174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x116178: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x116178u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
    // 0x11617c: 0x3c140069  lui         $s4, 0x69
    ctx->pc = 0x11617cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)105 << 16));
label_116180:
    // 0x116180: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x116180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_116184:
    // 0x116184: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x116184u;
    {
        const bool branch_taken_0x116184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x116184) {
            ctx->pc = 0x116188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116184u;
            // 0x116188: 0xa2400413  sb          $zero, 0x413($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 1043), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11618Cu;
            goto label_11618c;
        }
    }
    ctx->pc = 0x11618Cu;
label_11618c:
    // 0x11618c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x11618cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x116190: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x116190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116194: 0x46800a  movz        $s0, $v0, $a2
    ctx->pc = 0x116194u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x116198: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x116198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x11619c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11619cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161a0: 0xc04453c  jal         func_1114F0
    ctx->pc = 0x1161A0u;
    SET_GPR_U32(ctx, 31, 0x1161A8u);
    ctx->pc = 0x1161A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161A0u;
    // 0x1161a4: 0xae50000c  sw          $s0, 0xC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1114F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1114F0u, 0x1161A0u, 0x1161A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161A8u;
label_1161a8:
    // 0x1161a8: 0x2690f8c0  addiu       $s0, $s4, -0x740
    ctx->pc = 0x1161a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965440));
    // 0x1161ac: 0x26c32918  addiu       $v1, $s6, 0x2918
    ctx->pc = 0x1161acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 10520));
    // 0x1161b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1161b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1161b4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1161b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1161b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1161b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1161bc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1161bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1161c0: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x1161C0u;
    SET_GPR_U32(ctx, 31, 0x1161C8u);
    ctx->pc = 0x1161C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1161C0u;
    // 0x1161c4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x1161C0u, 0x1161C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1161C8u;
label_1161c8:
    // 0x1161c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1161c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161cc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x1161ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x1161d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1161d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1161d4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1161d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1161d8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1161d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1161dc: 0x26e40380  addiu       $a0, $s7, 0x380
    ctx->pc = 0x1161dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 896));
    // 0x1161e0: 0x27c7ec80  addiu       $a3, $fp, -0x1380
    ctx->pc = 0x1161e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962304));
    // 0x1161e4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1161e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1161e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1161e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1161ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1161ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1161f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1161f4: 0x2408080c  addiu       $t0, $zero, 0x80C
    ctx->pc = 0x1161f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x1161f8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1161f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1161fc: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1161fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116200: 0xc0449f4  jal         func_1127D0
    ctx->pc = 0x116200u;
    SET_GPR_U32(ctx, 31, 0x116208u);
    ctx->pc = 0x116204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116200u;
    // 0x116204: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127D0u, 0x116200u, 0x116208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116208u;
label_116208:
    // 0x116208: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x116208u;
    {
        const bool branch_taken_0x116208 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116208u;
        // 0x11620c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116208) {
            ctx->pc = 0x116228u;
            goto label_116228;
        }
    }
    ctx->pc = 0x116210u;
    // 0x116210: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x116210u;
    SET_GPR_U32(ctx, 31, 0x116218u);
    ctx->pc = 0x116214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116210u;
    // 0x116214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x116210u, 0x116218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116218u;
label_116218:
    // 0x116218: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x116218u;
    SET_GPR_U32(ctx, 31, 0x116220u);
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x116218u, 0x116220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116220u;
label_116220:
    // 0x116220: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x116220u;
    {
        const bool branch_taken_0x116220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116220u;
        // 0x116224: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116220) {
            ctx->pc = 0x116260u;
            goto label_116260;
        }
    }
    ctx->pc = 0x116228u;
label_116228:
    // 0x116228: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x116228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x11622c: 0xc044b5c  jal         func_112D70
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x116230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11622Cu;
    // 0x116230: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112D70u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116234u;
    {
        const bool branch_taken_0x116234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x116234) {
            ctx->pc = 0x11624Cu;
            goto label_11624c;
        }
    }
    ctx->pc = 0x11623Cu;
    // 0x11623c: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x11623Cu;
    SET_GPR_U32(ctx, 31, 0x116244u);
    ctx->pc = 0x116240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11623Cu;
    // 0x116240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x11623Cu, 0x116244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116244u;
label_116244:
    // 0x116244: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116244u;
    {
        const bool branch_taken_0x116244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116244u;
        // 0x116248: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116244) {
            ctx->pc = 0x116260u;
            goto label_116260;
        }
    }
    ctx->pc = 0x11624Cu;
label_11624c:
    // 0x11624c: 0xc043808  jal         func_10E020
    ctx->pc = 0x11624Cu;
    SET_GPR_U32(ctx, 31, 0x116254u);
    ctx->pc = 0x116250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11624Cu;
    // 0x116250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E020u, 0x11624Cu, 0x116254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116254u;
label_116254:
    // 0x116254: 0xc0437fc  jal         func_10DFF0
    ctx->pc = 0x116254u;
    SET_GPR_U32(ctx, 31, 0x11625Cu);
    ctx->pc = 0x116258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116254u;
    // 0x116258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFF0u, 0x116254u, 0x11625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11625Cu;
label_11625c:
    // 0x11625c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x11625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_116260:
    // 0x116260: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x116260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x116264: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x116264u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x116268: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x116268u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11626c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11626cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x116270: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x116274: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x116274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116278: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x116278u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11627c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11627cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116280: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x116280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116284: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x116284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116288: 0x3e00008  jr          $ra
    ctx->pc = 0x116288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116288u;
        // 0x11628c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116290u;
}
