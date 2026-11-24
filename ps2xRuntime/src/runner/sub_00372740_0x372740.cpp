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

// Function: sub_00372740
// Address: 0x372740 - 0x372948
void sub_00372740_0x372740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372740_0x372740");
#endif

    switch (ctx->pc) {
        case 0x372770u: goto label_372770;
        case 0x372798u: goto label_372798;
        case 0x3727a8u: goto label_3727a8;
        case 0x3727f4u: goto label_3727f4;
        case 0x372814u: goto label_372814;
        case 0x372850u: goto label_372850;
        case 0x372860u: goto label_372860;
        case 0x372870u: goto label_372870;
        case 0x372880u: goto label_372880;
        case 0x372890u: goto label_372890;
        case 0x3728a0u: goto label_3728a0;
        case 0x3728b0u: goto label_3728b0;
        case 0x3728c0u: goto label_3728c0;
        case 0x3728d0u: goto label_3728d0;
        case 0x3728e0u: goto label_3728e0;
        case 0x3728f0u: goto label_3728f0;
        case 0x372900u: goto label_372900;
        case 0x372910u: goto label_372910;
        case 0x37291cu: goto label_37291c;
        case 0x372928u: goto label_372928;
        default: break;
    }

    ctx->pc = 0x372740u;

    // 0x372740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x372744: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x372744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x372748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x372748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37274c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372750: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x372750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x372754: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372754u;
    {
        const bool branch_taken_0x372754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x372758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372754u;
        // 0x372758: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372754) {
            ctx->pc = 0x372770u;
            goto label_372770;
        }
    }
    ctx->pc = 0x37275Cu;
    // 0x37275c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x37275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x372760: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372760u;
    {
        const bool branch_taken_0x372760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x372760) {
            ctx->pc = 0x372770u;
            goto label_372770;
        }
    }
    ctx->pc = 0x372768u;
    // 0x372768: 0xc09c3b4  jal         func_270ED0
    ctx->pc = 0x372768u;
    SET_GPR_U32(ctx, 31, 0x372770u);
    ctx->pc = 0x270ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270ED0u, 0x372768u, 0x372770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372770u;
label_372770:
    // 0x372770: 0x9204001f  lbu         $a0, 0x1F($s0)
    ctx->pc = 0x372770u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x372774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x372774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372778: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x372778u;
    {
        const bool branch_taken_0x372778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x37277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372778u;
        // 0x37277c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372778) {
            ctx->pc = 0x3727A0u;
            goto label_3727a0;
        }
    }
    ctx->pc = 0x372780u;
    // 0x372780: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x372780u;
    {
        const bool branch_taken_0x372780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x372780) {
            ctx->pc = 0x372790u;
            goto label_372790;
        }
    }
    ctx->pc = 0x372788u;
    // 0x372788: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x372788u;
    {
        const bool branch_taken_0x372788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372788) {
            ctx->pc = 0x3727B0u;
            goto label_3727b0;
        }
    }
    ctx->pc = 0x372790u;
label_372790:
    // 0x372790: 0xc0dca80  jal         func_372A00
    ctx->pc = 0x372790u;
    SET_GPR_U32(ctx, 31, 0x372798u);
    ctx->pc = 0x372794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372790u;
    // 0x372794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372A00u, 0x372790u, 0x372798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372798u;
label_372798:
    // 0x372798: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x372798u;
    {
        const bool branch_taken_0x372798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372798) {
            ctx->pc = 0x372920u;
            goto label_372920;
        }
    }
    ctx->pc = 0x3727A0u;
label_3727a0:
    // 0x3727a0: 0xc0dcb30  jal         func_372CC0
    ctx->pc = 0x3727A0u;
    SET_GPR_U32(ctx, 31, 0x3727A8u);
    ctx->pc = 0x3727A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727A0u;
    // 0x3727a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372CC0u, 0x3727A0u, 0x3727A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727A8u;
label_3727a8:
    // 0x3727a8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3727A8u;
    {
        const bool branch_taken_0x3727a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3727a8) {
            ctx->pc = 0x372920u;
            goto label_372920;
        }
    }
    ctx->pc = 0x3727B0u;
label_3727b0:
    // 0x3727b0: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x3727b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3727b4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3727b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3727b8: 0x2442ace0  addiu       $v0, $v0, -0x5320
    ctx->pc = 0x3727b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946016));
    // 0x3727bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3727bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3727c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3727c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3727c4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x3727c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x3727c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3727c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3727cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3727CCu;
    {
        const bool branch_taken_0x3727cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3727D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727CCu;
        // 0x3727d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727cc) {
            ctx->pc = 0x372800u;
            goto label_372800;
        }
    }
    ctx->pc = 0x3727D4u;
    // 0x3727d4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3727D4u;
    {
        const bool branch_taken_0x3727d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3727D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3727D4u;
        // 0x3727d8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3727d4) {
            ctx->pc = 0x372800u;
            goto label_372800;
        }
    }
    ctx->pc = 0x3727DCu;
    // 0x3727dc: 0x8c22ea24  lw          $v0, -0x15DC($at)
    ctx->pc = 0x3727dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961700)));
    // 0x3727e0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3727e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3727e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3727E4u;
    {
        const bool branch_taken_0x3727e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3727e4) {
            ctx->pc = 0x372800u;
            goto label_372800;
        }
    }
    ctx->pc = 0x3727ECu;
    // 0x3727ec: 0xc0dcb14  jal         func_372C50
    ctx->pc = 0x3727ECu;
    SET_GPR_U32(ctx, 31, 0x3727F4u);
    ctx->pc = 0x3727F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3727ECu;
    // 0x3727f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C50u, 0x3727ECu, 0x3727F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3727F4u;
label_3727f4:
    // 0x3727f4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3727F4u;
    {
        const bool branch_taken_0x3727f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3727f4) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3727FCu;
    // 0x3727fc: 0x0  nop
    ctx->pc = 0x3727fcu;
    // NOP
label_372800:
    // 0x372800: 0x9202001e  lbu         $v0, 0x1E($s0)
    ctx->pc = 0x372800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x372804: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x372804u;
    {
        const bool branch_taken_0x372804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372804) {
            ctx->pc = 0x372820u;
            goto label_372820;
        }
    }
    ctx->pc = 0x37280Cu;
    // 0x37280c: 0xc0dcc2c  jal         func_3730B0
    ctx->pc = 0x37280Cu;
    SET_GPR_U32(ctx, 31, 0x372814u);
    ctx->pc = 0x372810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37280Cu;
    // 0x372810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730B0u, 0x37280Cu, 0x372814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372814u;
label_372814:
    // 0x372814: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x372814u;
    {
        const bool branch_taken_0x372814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372814) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x37281Cu;
    // 0x37281c: 0x0  nop
    ctx->pc = 0x37281cu;
    // NOP
label_372820:
    // 0x372820: 0x2482fffd  addiu       $v0, $a0, -0x3
    ctx->pc = 0x372820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x372824: 0x2c41000d  sltiu       $at, $v0, 0xD
    ctx->pc = 0x372824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x372828: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x372828u;
    {
        const bool branch_taken_0x372828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372828u;
        // 0x37282c: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372828) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372830u;
    // 0x372830: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x372830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x372834: 0x24631980  addiu       $v1, $v1, 0x1980
    ctx->pc = 0x372834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x372838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37283c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x37283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x372840: 0x400008  jr          $v0
    ctx->pc = 0x372840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x372848u: goto label_372848;
            case 0x372858u: goto label_372858;
            case 0x372868u: goto label_372868;
            case 0x372878u: goto label_372878;
            case 0x372888u: goto label_372888;
            case 0x372898u: goto label_372898;
            case 0x3728A8u: goto label_3728a8;
            case 0x3728B8u: goto label_3728b8;
            case 0x3728C8u: goto label_3728c8;
            case 0x3728D8u: goto label_3728d8;
            case 0x3728E8u: goto label_3728e8;
            case 0x3728F8u: goto label_3728f8;
            case 0x372908u: goto label_372908;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372840u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x372848u;
label_372848:
    // 0x372848: 0xc0dcc24  jal         func_373090
    ctx->pc = 0x372848u;
    SET_GPR_U32(ctx, 31, 0x372850u);
    ctx->pc = 0x37284Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372848u;
    // 0x37284c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373090u, 0x372848u, 0x372850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372850u;
label_372850:
    // 0x372850: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x372850u;
    {
        const bool branch_taken_0x372850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372850) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372858u;
label_372858:
    // 0x372858: 0xc0dbac8  jal         func_36EB20
    ctx->pc = 0x372858u;
    SET_GPR_U32(ctx, 31, 0x372860u);
    ctx->pc = 0x37285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372858u;
    // 0x37285c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EB20u, 0x372858u, 0x372860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372860u;
label_372860:
    // 0x372860: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x372860u;
    {
        const bool branch_taken_0x372860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372860) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372868u;
label_372868:
    // 0x372868: 0xc0f337c  jal         func_3CCDF0
    ctx->pc = 0x372868u;
    SET_GPR_U32(ctx, 31, 0x372870u);
    ctx->pc = 0x37286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372868u;
    // 0x37286c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CCDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CCDF0u, 0x372868u, 0x372870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372870u;
label_372870:
    // 0x372870: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x372870u;
    {
        const bool branch_taken_0x372870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372870) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372878u;
label_372878:
    // 0x372878: 0xc0dbc3c  jal         func_36F0F0
    ctx->pc = 0x372878u;
    SET_GPR_U32(ctx, 31, 0x372880u);
    ctx->pc = 0x37287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372878u;
    // 0x37287c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F0F0u, 0x372878u, 0x372880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372880u;
label_372880:
    // 0x372880: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x372880u;
    {
        const bool branch_taken_0x372880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372880) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372888u;
label_372888:
    // 0x372888: 0xc0dc050  jal         func_370140
    ctx->pc = 0x372888u;
    SET_GPR_U32(ctx, 31, 0x372890u);
    ctx->pc = 0x37288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372888u;
    // 0x37288c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370140u, 0x372888u, 0x372890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372890u;
label_372890:
    // 0x372890: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x372890u;
    {
        const bool branch_taken_0x372890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372890) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372898u;
label_372898:
    // 0x372898: 0xc0dbd80  jal         func_36F600
    ctx->pc = 0x372898u;
    SET_GPR_U32(ctx, 31, 0x3728A0u);
    ctx->pc = 0x37289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372898u;
    // 0x37289c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F600u, 0x372898u, 0x3728A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728A0u;
label_3728a0:
    // 0x3728a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3728A0u;
    {
        const bool branch_taken_0x3728a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728a0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728A8u;
label_3728a8:
    // 0x3728a8: 0xc0fd900  jal         func_3F6400
    ctx->pc = 0x3728A8u;
    SET_GPR_U32(ctx, 31, 0x3728B0u);
    ctx->pc = 0x3728ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728A8u;
    // 0x3728ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6400u, 0x3728A8u, 0x3728B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728B0u;
label_3728b0:
    // 0x3728b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3728B0u;
    {
        const bool branch_taken_0x3728b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728b0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728B8u;
label_3728b8:
    // 0x3728b8: 0xc0dc1c4  jal         func_370710
    ctx->pc = 0x3728B8u;
    SET_GPR_U32(ctx, 31, 0x3728C0u);
    ctx->pc = 0x3728BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728B8u;
    // 0x3728bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370710u, 0x3728B8u, 0x3728C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728C0u;
label_3728c0:
    // 0x3728c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3728C0u;
    {
        const bool branch_taken_0x3728c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728c0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728C8u;
label_3728c8:
    // 0x3728c8: 0xc0e4670  jal         func_3919C0
    ctx->pc = 0x3728C8u;
    SET_GPR_U32(ctx, 31, 0x3728D0u);
    ctx->pc = 0x3728CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728C8u;
    // 0x3728cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3919C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3919C0u, 0x3728C8u, 0x3728D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728D0u;
label_3728d0:
    // 0x3728d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3728D0u;
    {
        const bool branch_taken_0x3728d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728d0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728D8u;
label_3728d8:
    // 0x3728d8: 0xc0d9ff0  jal         func_367FC0
    ctx->pc = 0x3728D8u;
    SET_GPR_U32(ctx, 31, 0x3728E0u);
    ctx->pc = 0x3728DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728D8u;
    // 0x3728dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367FC0u, 0x3728D8u, 0x3728E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728E0u;
label_3728e0:
    // 0x3728e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3728E0u;
    {
        const bool branch_taken_0x3728e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728e0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728E8u;
label_3728e8:
    // 0x3728e8: 0xc0d999c  jal         func_366670
    ctx->pc = 0x3728E8u;
    SET_GPR_U32(ctx, 31, 0x3728F0u);
    ctx->pc = 0x3728ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728E8u;
    // 0x3728ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366670u, 0x3728E8u, 0x3728F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728F0u;
label_3728f0:
    // 0x3728f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3728F0u;
    {
        const bool branch_taken_0x3728f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3728f0) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x3728F8u;
label_3728f8:
    // 0x3728f8: 0xc0daa4c  jal         func_36A930
    ctx->pc = 0x3728F8u;
    SET_GPR_U32(ctx, 31, 0x372900u);
    ctx->pc = 0x3728FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728F8u;
    // 0x3728fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A930u, 0x3728F8u, 0x372900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372900u;
label_372900:
    // 0x372900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x372900u;
    {
        const bool branch_taken_0x372900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x372900) {
            ctx->pc = 0x372910u;
            goto label_372910;
        }
    }
    ctx->pc = 0x372908u;
label_372908:
    // 0x372908: 0xc0e5db0  jal         func_3976C0
    ctx->pc = 0x372908u;
    SET_GPR_U32(ctx, 31, 0x372910u);
    ctx->pc = 0x37290Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372908u;
    // 0x37290c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3976C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3976C0u, 0x372908u, 0x372910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372910u;
label_372910:
    // 0x372910: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x372910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x372914: 0xc0cebf4  jal         func_33AFD0
    ctx->pc = 0x372914u;
    SET_GPR_U32(ctx, 31, 0x37291Cu);
    ctx->pc = 0x372918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372914u;
    // 0x372918: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFD0u, 0x372914u, 0x37291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37291Cu;
label_37291c:
    // 0x37291c: 0x0  nop
    ctx->pc = 0x37291cu;
    // NOP
label_372920:
    // 0x372920: 0xc0dc314  jal         func_370C50
    ctx->pc = 0x372920u;
    SET_GPR_U32(ctx, 31, 0x372928u);
    ctx->pc = 0x372924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372920u;
    // 0x372924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370C50u, 0x372920u, 0x372928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372928u;
label_372928:
    // 0x372928: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x372928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x37292c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37292Cu;
    {
        const bool branch_taken_0x37292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x372930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37292Cu;
        // 0x372930: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37292c) {
            ctx->pc = 0x372938u;
            goto label_372938;
        }
    }
    ctx->pc = 0x372934u;
    // 0x372934: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x372934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
label_372938:
    // 0x372938: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37293c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37293cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372940: 0x3e00008  jr          $ra
    ctx->pc = 0x372940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372940u;
        // 0x372944: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372948u;
}
