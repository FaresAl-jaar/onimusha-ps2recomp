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

// Function: sub_00145080
// Address: 0x145080 - 0x1451cc
void sub_00145080_0x145080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145080_0x145080");
#endif

    switch (ctx->pc) {
        case 0x1450a8u: goto label_1450a8;
        case 0x145128u: goto label_145128;
        case 0x145140u: goto label_145140;
        case 0x145158u: goto label_145158;
        case 0x145170u: goto label_145170;
        case 0x145188u: goto label_145188;
        case 0x1451a0u: goto label_1451a0;
        case 0x1451b8u: goto label_1451b8;
        default: break;
    }

    ctx->pc = 0x145080u;

    // 0x145080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14508c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14508cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x145090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x145094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145098: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x145098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x14509c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x14509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1450a0: 0xc07ccc8  jal         func_1F3320
    ctx->pc = 0x1450A0u;
    SET_GPR_U32(ctx, 31, 0x1450A8u);
    ctx->pc = 0x1450A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1450A0u;
    // 0x1450a4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3320u, 0x1450A0u, 0x1450A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1450A8u;
label_1450a8:
    // 0x1450a8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x1450a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1450ac: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1450acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1450b0: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1450B0u;
    {
        const bool branch_taken_0x1450b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1450B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450B0u;
        // 0x1450b4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450b0) {
            ctx->pc = 0x145190u;
            goto label_145190;
        }
    }
    ctx->pc = 0x1450B8u;
    // 0x1450b8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1450B8u;
    {
        const bool branch_taken_0x1450b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1450b8) {
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x1450C0u;
    // 0x1450c0: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1450c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1450c4: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1450C4u;
    {
        const bool branch_taken_0x1450c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1450C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450C4u;
        // 0x1450c8: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450c4) {
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x1450CCu;
    // 0x1450cc: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1450CCu;
    {
        const bool branch_taken_0x1450cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1450cc) {
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x1450D4u;
    // 0x1450d4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1450d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1450d8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1450D8u;
    {
        const bool branch_taken_0x1450d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1450DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450D8u;
        // 0x1450dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450d8) {
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x1450E0u;
    // 0x1450e0: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1450E0u;
    {
        const bool branch_taken_0x1450e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1450e0) {
            ctx->pc = 0x145178u;
            goto label_145178;
        }
    }
    ctx->pc = 0x1450E8u;
    // 0x1450e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1450e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1450ec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1450ECu;
    {
        const bool branch_taken_0x1450ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1450F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1450ECu;
        // 0x1450f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1450ec) {
            ctx->pc = 0x145160u;
            goto label_145160;
        }
    }
    ctx->pc = 0x1450F4u;
    // 0x1450f4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1450F4u;
    {
        const bool branch_taken_0x1450f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1450f4) {
            ctx->pc = 0x145148u;
            goto label_145148;
        }
    }
    ctx->pc = 0x1450FCu;
    // 0x1450fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1450fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145100: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x145100u;
    {
        const bool branch_taken_0x145100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x145104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145100u;
        // 0x145104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145100) {
            ctx->pc = 0x145130u;
            goto label_145130;
        }
    }
    ctx->pc = 0x145108u;
    // 0x145108: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145108u;
    {
        const bool branch_taken_0x145108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x145108) {
            ctx->pc = 0x145118u;
            goto label_145118;
        }
    }
    ctx->pc = 0x145110u;
    // 0x145110: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x145110u;
    {
        const bool branch_taken_0x145110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145110) {
            ctx->pc = 0x1451A8u;
            goto label_1451a8;
        }
    }
    ctx->pc = 0x145118u;
label_145118:
    // 0x145118: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x145118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14511c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145120: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145120u;
    SET_GPR_U32(ctx, 31, 0x145128u);
    ctx->pc = 0x145124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145120u;
    // 0x145124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145120u, 0x145128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145128u;
label_145128:
    // 0x145128: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x145128u;
    {
        const bool branch_taken_0x145128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145128) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x145130u;
label_145130:
    // 0x145130: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x145130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x145134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x145134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145138: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145138u;
    SET_GPR_U32(ctx, 31, 0x145140u);
    ctx->pc = 0x14513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145138u;
    // 0x14513c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145138u, 0x145140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145140u;
label_145140:
    // 0x145140: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x145140u;
    {
        const bool branch_taken_0x145140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145140) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x145148u;
label_145148:
    // 0x145148: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x145148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x14514c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14514cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145150: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145150u;
    SET_GPR_U32(ctx, 31, 0x145158u);
    ctx->pc = 0x145154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145150u;
    // 0x145154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145150u, 0x145158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145158u;
label_145158:
    // 0x145158: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x145158u;
    {
        const bool branch_taken_0x145158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145158) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x145160u;
label_145160:
    // 0x145160: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x145160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x145164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x145164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145168: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145168u;
    SET_GPR_U32(ctx, 31, 0x145170u);
    ctx->pc = 0x14516Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145168u;
    // 0x14516c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145168u, 0x145170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145170u;
label_145170:
    // 0x145170: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x145170u;
    {
        const bool branch_taken_0x145170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145170) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x145178u;
label_145178:
    // 0x145178: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x145178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x14517c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14517cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145180: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145180u;
    SET_GPR_U32(ctx, 31, 0x145188u);
    ctx->pc = 0x145184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145180u;
    // 0x145184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145180u, 0x145188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145188u;
label_145188:
    // 0x145188: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x145188u;
    {
        const bool branch_taken_0x145188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145188) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x145190u;
label_145190:
    // 0x145190: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x145190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x145194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x145194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145198: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145198u;
    SET_GPR_U32(ctx, 31, 0x1451A0u);
    ctx->pc = 0x14519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145198u;
    // 0x14519c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x145198u, 0x1451A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451A0u;
label_1451a0:
    // 0x1451a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1451A0u;
    {
        const bool branch_taken_0x1451a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1451a0) {
            ctx->pc = 0x1451B8u;
            goto label_1451b8;
        }
    }
    ctx->pc = 0x1451A8u;
label_1451a8:
    // 0x1451a8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1451a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1451ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1451acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1451b0: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x1451B0u;
    SET_GPR_U32(ctx, 31, 0x1451B8u);
    ctx->pc = 0x1451B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1451B0u;
    // 0x1451b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452F0u, 0x1451B0u, 0x1451B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451B8u;
label_1451b8:
    // 0x1451b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1451b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1451bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1451bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1451c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1451c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1451C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451C4u;
        // 0x1451c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451CCu;
}
