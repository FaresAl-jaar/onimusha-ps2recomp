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

// Function: sub_00225800
// Address: 0x225800 - 0x225a58
void sub_00225800_0x225800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225800_0x225800");
#endif

    switch (ctx->pc) {
        case 0x22583cu: goto label_22583c;
        case 0x225914u: goto label_225914;
        case 0x22594cu: goto label_22594c;
        case 0x225988u: goto label_225988;
        case 0x2259c4u: goto label_2259c4;
        case 0x2259d4u: goto label_2259d4;
        default: break;
    }

    ctx->pc = 0x225800u;

    // 0x225800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225808: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x225808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22580c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225810: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x225810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225814: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x225814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x225818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22581c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x225820: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x225820u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x225824: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x225824u;
    {
        const bool branch_taken_0x225824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x225828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225824u;
        // 0x225828: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225824) {
            ctx->pc = 0x225840u;
            goto label_225840;
        }
    }
    ctx->pc = 0x22582Cu;
    // 0x22582c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22582cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x225830: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x225830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225834: 0xc0897c8  jal         func_225F20
    ctx->pc = 0x225834u;
    SET_GPR_U32(ctx, 31, 0x22583Cu);
    ctx->pc = 0x225838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225834u;
    // 0x225838: 0x24a59228  addiu       $a1, $a1, -0x6DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F20u, 0x225834u, 0x22583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22583Cu;
label_22583c:
    // 0x22583c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x22583cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_225840:
    // 0x225840: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x225840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x225844: 0x1202005c  beq         $s0, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x225844u;
    {
        const bool branch_taken_0x225844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x225848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225844u;
        // 0x225848: 0x2a020062  slti        $v0, $s0, 0x62 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)98) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225844) {
            ctx->pc = 0x2259B8u;
            goto label_2259b8;
        }
    }
    ctx->pc = 0x22584Cu;
    // 0x22584c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x22584Cu;
    {
        const bool branch_taken_0x22584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22584Cu;
        // 0x225850: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22584c) {
            ctx->pc = 0x2258A0u;
            goto label_2258a0;
        }
    }
    ctx->pc = 0x225854u;
    // 0x225854: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x225854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x225858: 0x12020047  beq         $s0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x225858u;
    {
        const bool branch_taken_0x225858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225858u;
        // 0x22585c: 0x2a020032  slti        $v0, $s0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x225858) {
            ctx->pc = 0x225978u;
            goto label_225978;
        }
    }
    ctx->pc = 0x225860u;
    // 0x225860: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225860u;
    {
        const bool branch_taken_0x225860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225860u;
        // 0x225864: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225860) {
            ctx->pc = 0x225888u;
            goto label_225888;
        }
    }
    ctx->pc = 0x225868u;
    // 0x225868: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x225868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x22586c: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22586Cu;
    {
        const bool branch_taken_0x22586c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x225870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22586Cu;
        // 0x225870: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22586c) {
            ctx->pc = 0x2258D0u;
            goto label_2258d0;
        }
    }
    ctx->pc = 0x225874u;
    // 0x225874: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x225874u;
    {
        const bool branch_taken_0x225874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x225878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225874u;
        // 0x225878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225874) {
            ctx->pc = 0x225940u;
            goto label_225940;
        }
    }
    ctx->pc = 0x22587Cu;
    // 0x22587c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x22587Cu;
    {
        const bool branch_taken_0x22587c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22587Cu;
        // 0x225880: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22587c) {
            ctx->pc = 0x225A34u;
            goto label_225a34;
        }
    }
    ctx->pc = 0x225884u;
    // 0x225884: 0x0  nop
    ctx->pc = 0x225884u;
    // NOP
label_225888:
    // 0x225888: 0x1202004b  beq         $s0, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x225888u;
    {
        const bool branch_taken_0x225888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225888u;
        // 0x22588c: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225888) {
            ctx->pc = 0x2259B8u;
            goto label_2259b8;
        }
    }
    ctx->pc = 0x225890u;
    // 0x225890: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x225890u;
    {
        const bool branch_taken_0x225890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x225894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225890u;
        // 0x225894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225890) {
            ctx->pc = 0x2259B8u;
            goto label_2259b8;
        }
    }
    ctx->pc = 0x225898u;
    // 0x225898: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x225898u;
    {
        const bool branch_taken_0x225898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225898u;
        // 0x22589c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225898) {
            ctx->pc = 0x225A34u;
            goto label_225a34;
        }
    }
    ctx->pc = 0x2258A0u;
label_2258a0:
    // 0x2258a0: 0x12020057  beq         $s0, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2258A0u;
    {
        const bool branch_taken_0x2258a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2258A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258A0u;
        // 0x2258a4: 0x2a020102  slti        $v0, $s0, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258a0) {
            ctx->pc = 0x225A00u;
            goto label_225a00;
        }
    }
    ctx->pc = 0x2258A8u;
    // 0x2258a8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2258A8u;
    {
        const bool branch_taken_0x2258a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2258ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258A8u;
        // 0x2258ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258a8) {
            ctx->pc = 0x225A30u;
            goto label_225a30;
        }
    }
    ctx->pc = 0x2258B0u;
    // 0x2258b0: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x2258b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x2258b4: 0x1202005e  beq         $s0, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2258B4u;
    {
        const bool branch_taken_0x2258b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2258B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B4u;
        // 0x2258b8: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258b4) {
            ctx->pc = 0x225A30u;
            goto label_225a30;
        }
    }
    ctx->pc = 0x2258BCu;
    // 0x2258bc: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2258BCu;
    {
        const bool branch_taken_0x2258bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2258C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258BCu;
        // 0x2258c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258bc) {
            ctx->pc = 0x22590Cu;
            goto label_22590c;
        }
    }
    ctx->pc = 0x2258C4u;
    // 0x2258c4: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2258C4u;
    {
        const bool branch_taken_0x2258c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258C4u;
        // 0x2258c8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258c4) {
            ctx->pc = 0x225A38u;
            goto label_225a38;
        }
    }
    ctx->pc = 0x2258CCu;
    // 0x2258cc: 0x0  nop
    ctx->pc = 0x2258ccu;
    // NOP
label_2258d0:
    // 0x2258d0: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x2258d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x2258d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2258d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2258d8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2258D8u;
    {
        const bool branch_taken_0x2258d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2258DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258D8u;
        // 0x2258dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258d8) {
            ctx->pc = 0x225908u;
            goto label_225908;
        }
    }
    ctx->pc = 0x2258E0u;
    // 0x2258e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2258e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2258e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2258e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2258e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2258ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2258f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2258f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2258f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2258f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2258fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2258fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225900: 0x8089696  j           func_225A58
    ctx->pc = 0x225900u;
    ctx->pc = 0x225904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225900u;
    // 0x225904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    sub_00225A58_0x225a58(rdram, ctx, runtime); return;
    ctx->pc = 0x225908u;
label_225908:
    // 0x225908: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22590c:
    // 0x22590c: 0xc0894d0  jal         func_225340
    ctx->pc = 0x22590Cu;
    SET_GPR_U32(ctx, 31, 0x225914u);
    ctx->pc = 0x225910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22590Cu;
    // 0x225910: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x22590Cu, 0x225914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225914u;
label_225914:
    // 0x225914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22591c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22591cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225920: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x225920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22592c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22592cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225934: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225938: 0x8089696  j           func_225A58
    ctx->pc = 0x225938u;
    ctx->pc = 0x22593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225938u;
    // 0x22593c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    sub_00225A58_0x225a58(rdram, ctx, runtime); return;
    ctx->pc = 0x225940u;
label_225940:
    // 0x225940: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225944: 0xc0894d0  jal         func_225340
    ctx->pc = 0x225944u;
    SET_GPR_U32(ctx, 31, 0x22594Cu);
    ctx->pc = 0x225948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225944u;
    // 0x225948: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x225944u, 0x22594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22594Cu;
label_22594c:
    // 0x22594c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22594cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225950: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225958: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x225958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22595c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22595cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225968: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22596c: 0x8089714  j           func_225C50
    ctx->pc = 0x22596Cu;
    ctx->pc = 0x225970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22596Cu;
    // 0x225970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C50u;
    sub_00225C50_0x225c50(rdram, ctx, runtime); return;
    ctx->pc = 0x225974u;
    // 0x225974: 0x0  nop
    ctx->pc = 0x225974u;
    // NOP
label_225978:
    // 0x225978: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22597c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22597cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225980: 0xc0894d0  jal         func_225340
    ctx->pc = 0x225980u;
    SET_GPR_U32(ctx, 31, 0x225988u);
    ctx->pc = 0x225984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225980u;
    // 0x225984: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x225980u, 0x225988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225988u;
label_225988:
    // 0x225988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22598c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225994: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x225994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225998: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22599c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22599cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2259a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2259a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2259a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2259a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2259ac: 0x8089696  j           func_225A58
    ctx->pc = 0x2259ACu;
    ctx->pc = 0x2259B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259ACu;
    // 0x2259b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    sub_00225A58_0x225a58(rdram, ctx, runtime); return;
    ctx->pc = 0x2259B4u;
    // 0x2259b4: 0x0  nop
    ctx->pc = 0x2259b4u;
    // NOP
label_2259b8:
    // 0x2259b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2259b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259bc: 0xc0894c2  jal         func_225308
    ctx->pc = 0x2259BCu;
    SET_GPR_U32(ctx, 31, 0x2259C4u);
    ctx->pc = 0x2259C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259BCu;
    // 0x2259c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225308u, 0x2259BCu, 0x2259C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259C4u;
label_2259c4:
    // 0x2259c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2259c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259cc: 0xc0894d0  jal         func_225340
    ctx->pc = 0x2259CCu;
    SET_GPR_U32(ctx, 31, 0x2259D4u);
    ctx->pc = 0x2259D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259CCu;
    // 0x2259d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225340u, 0x2259CCu, 0x2259D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2259D4u;
label_2259d4:
    // 0x2259d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2259d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2259d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2259dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2259e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2259e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2259e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2259e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2259e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2259ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2259f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2259f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2259f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2259f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2259f8: 0x8089696  j           func_225A58
    ctx->pc = 0x2259F8u;
    ctx->pc = 0x2259FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2259F8u;
    // 0x2259fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    sub_00225A58_0x225a58(rdram, ctx, runtime); return;
    ctx->pc = 0x225A00u;
label_225a00:
    // 0x225a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x225a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225a08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a10: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x225a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225a14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x225a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a24: 0x8089696  j           func_225A58
    ctx->pc = 0x225A24u;
    ctx->pc = 0x225A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A24u;
    // 0x225a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225A58u;
    sub_00225A58_0x225a58(rdram, ctx, runtime); return;
    ctx->pc = 0x225A2Cu;
    // 0x225a2c: 0x0  nop
    ctx->pc = 0x225a2cu;
    // NOP
label_225a30:
    // 0x225a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_225a34:
    // 0x225a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x225a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225a38:
    // 0x225a38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225a3c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x225a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x225a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x225a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225a48: 0x24c69230  addiu       $a2, $a2, -0x6DD0
    ctx->pc = 0x225a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939184));
    // 0x225a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225a50: 0x80898b2  j           func_2262C8
    ctx->pc = 0x225A50u;
    ctx->pc = 0x225A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225A50u;
    // 0x225a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2262C8u;
    sub_002262C8_0x2262c8(rdram, ctx, runtime); return;
    ctx->pc = 0x225A58u;
}
