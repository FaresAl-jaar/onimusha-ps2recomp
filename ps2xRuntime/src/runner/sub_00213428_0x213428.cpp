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

// Function: sub_00213428
// Address: 0x213428 - 0x213600
void sub_00213428_0x213428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213428_0x213428");
#endif

    switch (ctx->pc) {
        case 0x213470u: goto label_213470;
        case 0x2134a0u: goto label_2134a0;
        case 0x2134bcu: goto label_2134bc;
        case 0x2134d0u: goto label_2134d0;
        case 0x213578u: goto label_213578;
        case 0x21359cu: goto label_21359c;
        case 0x2135b4u: goto label_2135b4;
        case 0x2135ccu: goto label_2135cc;
        default: break;
    }

    ctx->pc = 0x213428u;

    // 0x213428: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x213428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21342c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x213430: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x213430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213434: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x213434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x213438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x213438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21343c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x213440: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x213440u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213444: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x213444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x213448: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x213448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21344c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21344cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x213450: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x213450u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x213454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x213458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21345c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x213460: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x213460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x213464: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x213464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x213468: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x213468u;
    SET_GPR_U32(ctx, 31, 0x213470u);
    ctx->pc = 0x21346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213468u;
    // 0x21346c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x213468u, 0x213470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213470u;
label_213470:
    // 0x213470: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213470u;
    {
        const bool branch_taken_0x213470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213470u;
        // 0x213474: 0x26371f74  addiu       $s7, $s1, 0x1F74 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 8052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213470) {
            ctx->pc = 0x213480u;
            goto label_213480;
        }
    }
    ctx->pc = 0x213478u;
    // 0x213478: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x213478u;
    {
        const bool branch_taken_0x213478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213478u;
        // 0x21347c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213478) {
            ctx->pc = 0x2135D0u;
            goto label_2135d0;
        }
    }
    ctx->pc = 0x213480u;
label_213480:
    // 0x213480: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x213484: 0x8ef00008  lw          $s0, 0x8($s7)
    ctx->pc = 0x213484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x213488: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x213488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x21348c: 0x54550006  bnel        $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x21348Cu;
    {
        const bool branch_taken_0x21348c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x21348c) {
            ctx->pc = 0x213490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21348Cu;
            // 0x213490: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2134A8u;
            goto label_2134a8;
        }
    }
    ctx->pc = 0x213494u;
    // 0x213494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213498: 0xc084d80  jal         func_213600
    ctx->pc = 0x213498u;
    SET_GPR_U32(ctx, 31, 0x2134A0u);
    ctx->pc = 0x21349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213498u;
    // 0x21349c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213600u, 0x213498u, 0x2134A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134A0u;
label_2134a0:
    // 0x2134a0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x2134a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x2134a4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2134a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2134a8:
    // 0x2134a8: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2134A8u;
    {
        const bool branch_taken_0x2134a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2134a8) {
            ctx->pc = 0x2134ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2134A8u;
            // 0x2134ac: 0xae16002c  sw          $s6, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2134B0u;
            goto label_2134b0;
        }
    }
    ctx->pc = 0x2134B0u;
label_2134b0:
    // 0x2134b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2134b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134b4: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2134B4u;
    SET_GPR_U32(ctx, 31, 0x2134BCu);
    ctx->pc = 0x2134B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134B4u;
    // 0x2134b8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2134B4u, 0x2134BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134BCu;
label_2134bc:
    // 0x2134bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2134bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2134c0: 0x12550025  beq         $s2, $s5, . + 4 + (0x25 << 2)
    ctx->pc = 0x2134C0u;
    {
        const bool branch_taken_0x2134c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x2134C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134C0u;
        // 0x2134c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134c0) {
            ctx->pc = 0x213558u;
            goto label_213558;
        }
    }
    ctx->pc = 0x2134C8u;
    // 0x2134c8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x2134C8u;
    SET_GPR_U32(ctx, 31, 0x2134D0u);
    ctx->pc = 0x2134CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2134C8u;
    // 0x2134cc: 0x24050037  addiu       $a1, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x2134C8u, 0x2134D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2134D0u;
label_2134d0:
    // 0x2134d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2134D0u;
    {
        const bool branch_taken_0x2134d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2134d0) {
            ctx->pc = 0x2134D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2134D0u;
            // 0x2134d4: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2134F0u;
            goto label_2134f0;
        }
    }
    ctx->pc = 0x2134D8u;
    // 0x2134d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2134d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2134dc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2134dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2134e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2134E0u;
    {
        const bool branch_taken_0x2134e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2134E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E0u;
        // 0x2134e4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134e0) {
            ctx->pc = 0x2134F8u;
            goto label_2134f8;
        }
    }
    ctx->pc = 0x2134E8u;
    // 0x2134e8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2134E8u;
    {
        const bool branch_taken_0x2134e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E8u;
        // 0x2134ec: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134e8) {
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x2134F0u;
label_2134f0:
    // 0x2134f0: 0x16c2001a  bne         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2134F0u;
    {
        const bool branch_taken_0x2134f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2134F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134F0u;
        // 0x2134f4: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134f0) {
            ctx->pc = 0x21355Cu;
            goto label_21355c;
        }
    }
    ctx->pc = 0x2134F8u;
label_2134f8:
    // 0x2134f8: 0x10920018  beq         $a0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2134F8u;
    {
        const bool branch_taken_0x2134f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x2134FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134F8u;
        // 0x2134fc: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134f8) {
            ctx->pc = 0x21355Cu;
            goto label_21355c;
        }
    }
    ctx->pc = 0x213500u;
    // 0x213500: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x213500u;
    {
        const bool branch_taken_0x213500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213500) {
            ctx->pc = 0x213504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213500u;
            // 0x213504: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213508u;
    // 0x213508: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x21350c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x21350Cu;
    {
        const bool branch_taken_0x21350c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21350c) {
            ctx->pc = 0x213510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21350Cu;
            // 0x213510: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213514u;
    // 0x213514: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x213514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x213518: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x213518u;
    {
        const bool branch_taken_0x213518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213518) {
            ctx->pc = 0x21351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213518u;
            // 0x21351c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213520u;
    // 0x213520: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x213520u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x213524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213528: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x213528u;
    {
        const bool branch_taken_0x213528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213528) {
            ctx->pc = 0x21352Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213528u;
            // 0x21352c: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213530u;
    // 0x213530: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x213530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
    // 0x213534: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x213534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x213538: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213538u;
    {
        const bool branch_taken_0x213538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213538u;
        // 0x21353c: 0x240200b8  addiu       $v0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213538) {
            ctx->pc = 0x213548u;
            goto label_213548;
        }
    }
    ctx->pc = 0x213540u;
    // 0x213540: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x213540u;
    {
        const bool branch_taken_0x213540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x213540) {
            ctx->pc = 0x213544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213540u;
            // 0x213544: 0xae160024  sw          $s6, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213548u;
label_213548:
    // 0x213548: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x213548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x21354c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21354Cu;
    {
        const bool branch_taken_0x21354c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21354Cu;
        // 0x213550: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21354c) {
            ctx->pc = 0x21355Cu;
            goto label_21355c;
        }
    }
    ctx->pc = 0x213554u;
    // 0x213554: 0x0  nop
    ctx->pc = 0x213554u;
    // NOP
label_213558:
    // 0x213558: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x213558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_21355c:
    // 0x21355c: 0xae160024  sw          $s6, 0x24($s0)
    ctx->pc = 0x21355cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 22));
label_213560:
    // 0x213560: 0x1496001b  bne         $a0, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x213560u;
    {
        const bool branch_taken_0x213560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x213564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213560u;
        // 0x213564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213560) {
            ctx->pc = 0x2135D0u;
            goto label_2135d0;
        }
    }
    ctx->pc = 0x213568u;
    // 0x213568: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x213568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21356c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21356cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213570: 0xc086dda  jal         func_21B768
    ctx->pc = 0x213570u;
    SET_GPR_U32(ctx, 31, 0x213578u);
    ctx->pc = 0x213574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213570u;
    // 0x213574: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B768u, 0x213570u, 0x213578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213578u;
label_213578:
    // 0x213578: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21357c: 0x1a600014  blez        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x21357Cu;
    {
        const bool branch_taken_0x21357c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x213580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21357Cu;
        // 0x213580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21357c) {
            ctx->pc = 0x2135D0u;
            goto label_2135d0;
        }
    }
    ctx->pc = 0x213584u;
    // 0x213584: 0x8ee50014  lw          $a1, 0x14($s7)
    ctx->pc = 0x213584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x213588: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x213588u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21358c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21358cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213590: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x213590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213594: 0xc084e48  jal         func_213920
    ctx->pc = 0x213594u;
    SET_GPR_U32(ctx, 31, 0x21359Cu);
    ctx->pc = 0x213598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213594u;
    // 0x213598: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213920u, 0x213594u, 0x21359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21359Cu;
label_21359c:
    // 0x21359c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21359cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2135a4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2135A4u;
    {
        const bool branch_taken_0x2135a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2135A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135A4u;
        // 0x2135a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135a4) {
            ctx->pc = 0x2135C0u;
            goto label_2135c0;
        }
    }
    ctx->pc = 0x2135ACu;
    // 0x2135ac: 0xc086df6  jal         func_21B7D8
    ctx->pc = 0x2135ACu;
    SET_GPR_U32(ctx, 31, 0x2135B4u);
    ctx->pc = 0x2135B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135ACu;
    // 0x2135b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B7D8u, 0x2135ACu, 0x2135B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135B4u;
label_2135b4:
    // 0x2135b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2135B4u;
    {
        const bool branch_taken_0x2135b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2135B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135B4u;
        // 0x2135b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135b4) {
            ctx->pc = 0x2135D0u;
            goto label_2135d0;
        }
    }
    ctx->pc = 0x2135BCu;
    // 0x2135bc: 0x0  nop
    ctx->pc = 0x2135bcu;
    // NOP
label_2135c0:
    // 0x2135c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2135c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2135c4: 0xc086ec6  jal         func_21BB18
    ctx->pc = 0x2135C4u;
    SET_GPR_U32(ctx, 31, 0x2135CCu);
    ctx->pc = 0x2135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2135C4u;
    // 0x2135c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BB18u, 0x2135C4u, 0x2135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2135CCu;
label_2135cc:
    // 0x2135cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2135ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2135d0:
    // 0x2135d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2135d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2135d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2135d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2135d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2135d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2135dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2135dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2135e0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2135e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2135e4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2135e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2135e8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2135e8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2135ec: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2135ecu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2135f0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2135f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2135f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2135f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2135f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2135F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2135FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135F8u;
        // 0x2135fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2135F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213600u;
}
