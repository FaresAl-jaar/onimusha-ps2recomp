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

// Function: sub_001A46F0
// Address: 0x1a46f0 - 0x1a4838
void sub_001A46F0_0x1a46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A46F0_0x1a46f0");
#endif

    switch (ctx->pc) {
        case 0x1a4750u: goto label_1a4750;
        case 0x1a4760u: goto label_1a4760;
        case 0x1a47b8u: goto label_1a47b8;
        case 0x1a480cu: goto label_1a480c;
        case 0x1a4818u: goto label_1a4818;
        case 0x1a4828u: goto label_1a4828;
        default: break;
    }

    ctx->pc = 0x1a46f0u;

    // 0x1a46f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a46f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a46f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a46f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a46fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a46fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4700: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4700u;
    {
        const bool branch_taken_0x1a4700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4700) {
            ctx->pc = 0x1A4760u;
            goto label_1a4760;
        }
    }
    ctx->pc = 0x1A4708u;
    // 0x1a4708: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1a4708u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a470c: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1a470cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1a4710: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4710u;
    {
        const bool branch_taken_0x1a4710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4710) {
            ctx->pc = 0x1A4760u;
            goto label_1a4760;
        }
    }
    ctx->pc = 0x1A4718u;
    // 0x1a4718: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x1a4718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a471c: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1a4720: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4720u;
    {
        const bool branch_taken_0x1a4720 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4720) {
            ctx->pc = 0x1A4760u;
            goto label_1a4760;
        }
    }
    ctx->pc = 0x1A4728u;
    // 0x1a4728: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x1a4728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a472c: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1a472cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1a4730: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4730u;
    {
        const bool branch_taken_0x1a4730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4730) {
            ctx->pc = 0x1A4760u;
            goto label_1a4760;
        }
    }
    ctx->pc = 0x1A4738u;
    // 0x1a4738: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x1a4738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a473c: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x1a473cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1a4740: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4740u;
    {
        const bool branch_taken_0x1a4740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A4744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4740u;
        // 0x1a4744: 0x3c04008f  lui         $a0, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4740) {
            ctx->pc = 0x1A4760u;
            goto label_1a4760;
        }
    }
    ctx->pc = 0x1A4748u;
    // 0x1a4748: 0xc0c8bb0  jal         func_322EC0
    ctx->pc = 0x1A4748u;
    SET_GPR_U32(ctx, 31, 0x1A4750u);
    ctx->pc = 0x1A474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4748u;
    // 0x1a474c: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322EC0u, 0x1A4748u, 0x1A4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4750u;
label_1a4750:
    // 0x1a4750: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x1a4750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x1a4754: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4758: 0xc0c8b84  jal         func_322E10
    ctx->pc = 0x1A4758u;
    SET_GPR_U32(ctx, 31, 0x1A4760u);
    ctx->pc = 0x1A475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4758u;
    // 0x1a475c: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E10u, 0x1A4758u, 0x1A4760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4760u;
label_1a4760:
    // 0x1a4760: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A4760u;
    {
        const bool branch_taken_0x1a4760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4760) {
            ctx->pc = 0x1A47C0u;
            goto label_1a47c0;
        }
    }
    ctx->pc = 0x1A4768u;
    // 0x1a4768: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1a4768u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a476c: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x1a476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1a4770: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A4770u;
    {
        const bool branch_taken_0x1a4770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4770) {
            ctx->pc = 0x1A47C0u;
            goto label_1a47c0;
        }
    }
    ctx->pc = 0x1A4778u;
    // 0x1a4778: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x1a4778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a477c: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1a477cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1a4780: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1A4780u;
    {
        const bool branch_taken_0x1a4780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4780) {
            ctx->pc = 0x1A47C0u;
            goto label_1a47c0;
        }
    }
    ctx->pc = 0x1A4788u;
    // 0x1a4788: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x1a4788u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a478c: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1a478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1a4790: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4790u;
    {
        const bool branch_taken_0x1a4790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4790) {
            ctx->pc = 0x1A47C0u;
            goto label_1a47c0;
        }
    }
    ctx->pc = 0x1A4798u;
    // 0x1a4798: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x1a4798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a479c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A479Cu;
    {
        const bool branch_taken_0x1a479c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A479Cu;
        // 0x1a47a0: 0x3c040092  lui         $a0, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a479c) {
            ctx->pc = 0x1A47C0u;
            goto label_1a47c0;
        }
    }
    ctx->pc = 0x1A47A4u;
    // 0x1a47a4: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x1a47a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x1a47a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a47a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a47ac: 0x248428b0  addiu       $a0, $a0, 0x28B0
    ctx->pc = 0x1a47acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    // 0x1a47b0: 0xc0e3608  jal         func_38D820
    ctx->pc = 0x1A47B0u;
    SET_GPR_U32(ctx, 31, 0x1A47B8u);
    ctx->pc = 0x1A47B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A47B0u;
    // 0x1a47b4: 0xac202cb8  sw          $zero, 0x2CB8($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 11448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D820u, 0x1A47B0u, 0x1A47B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A47B8u;
label_1a47b8:
    // 0x1a47b8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A47B8u;
    {
        const bool branch_taken_0x1a47b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47b8) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A47C0u;
label_1a47c0:
    // 0x1a47c0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A47C0u;
    {
        const bool branch_taken_0x1a47c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47c0) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A47C8u;
    // 0x1a47c8: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1a47c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a47cc: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x1a47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1a47d0: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A47D0u;
    {
        const bool branch_taken_0x1a47d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a47d0) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A47D8u;
    // 0x1a47d8: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x1a47d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a47dc: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x1a47dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1a47e0: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A47E0u;
    {
        const bool branch_taken_0x1a47e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a47e0) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A47E8u;
    // 0x1a47e8: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x1a47e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1a47ec: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1a47ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1a47f0: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A47F0u;
    {
        const bool branch_taken_0x1a47f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a47f0) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A47F8u;
    // 0x1a47f8: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x1a47f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a47fc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A47FCu;
    {
        const bool branch_taken_0x1a47fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a47fc) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A4804u;
    // 0x1a4804: 0xc09981c  jal         func_266070
    ctx->pc = 0x1A4804u;
    SET_GPR_U32(ctx, 31, 0x1A480Cu);
    ctx->pc = 0x266070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266070u, 0x1A4804u, 0x1A480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A480Cu;
label_1a480c:
    // 0x1a480c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x1a480cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x1a4810: 0xc0e35d4  jal         func_38D750
    ctx->pc = 0x1A4810u;
    SET_GPR_U32(ctx, 31, 0x1A4818u);
    ctx->pc = 0x1A4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4810u;
    // 0x1a4814: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D750u, 0x1A4810u, 0x1A4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4818u;
label_1a4818:
    // 0x1a4818: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x1a4818u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x1a481c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4820: 0xc0e35e8  jal         func_38D7A0
    ctx->pc = 0x1A4820u;
    SET_GPR_U32(ctx, 31, 0x1A4828u);
    ctx->pc = 0x1A4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4820u;
    // 0x1a4824: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D7A0u, 0x1A4820u, 0x1A4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4828u;
label_1a4828:
    // 0x1a4828: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a482c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a482cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4830: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4830u;
        // 0x1a4834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4838u;
}
