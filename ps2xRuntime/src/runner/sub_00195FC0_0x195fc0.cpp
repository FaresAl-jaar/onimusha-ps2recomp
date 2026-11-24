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

// Function: sub_00195FC0
// Address: 0x195fc0 - 0x196714
void sub_00195FC0_0x195fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195FC0_0x195fc0");
#endif

    switch (ctx->pc) {
        case 0x196040u: goto label_196040;
        case 0x19604cu: goto label_19604c;
        case 0x196074u: goto label_196074;
        case 0x196088u: goto label_196088;
        case 0x1960c0u: goto label_1960c0;
        case 0x1960d4u: goto label_1960d4;
        case 0x1960fcu: goto label_1960fc;
        case 0x196164u: goto label_196164;
        case 0x196178u: goto label_196178;
        case 0x196194u: goto label_196194;
        case 0x1961b0u: goto label_1961b0;
        case 0x196224u: goto label_196224;
        case 0x196294u: goto label_196294;
        case 0x196304u: goto label_196304;
        case 0x196364u: goto label_196364;
        case 0x1963c8u: goto label_1963c8;
        case 0x196400u: goto label_196400;
        case 0x196434u: goto label_196434;
        case 0x196468u: goto label_196468;
        case 0x1964e8u: goto label_1964e8;
        case 0x19651cu: goto label_19651c;
        case 0x196534u: goto label_196534;
        case 0x196544u: goto label_196544;
        case 0x1965a0u: goto label_1965a0;
        case 0x1965d8u: goto label_1965d8;
        case 0x19660cu: goto label_19660c;
        case 0x196624u: goto label_196624;
        case 0x196650u: goto label_196650;
        case 0x196664u: goto label_196664;
        case 0x19668cu: goto label_19668c;
        case 0x1966b8u: goto label_1966b8;
        case 0x1966d8u: goto label_1966d8;
        case 0x1966f8u: goto label_1966f8;
        default: break;
    }

    ctx->pc = 0x195fc0u;

    // 0x195fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x195fc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x195fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x195fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x195fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x195fcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x195fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x195fd0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x195fd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x195fd4: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x195fd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x195fd8: 0x1020018f  beqz        $at, . + 4 + (0x18F << 2)
    ctx->pc = 0x195FD8u;
    {
        const bool branch_taken_0x195fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195FD8u;
        // 0x195fdc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195fd8) {
            ctx->pc = 0x196618u;
            goto label_196618;
        }
    }
    ctx->pc = 0x195FE0u;
    // 0x195fe0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x195fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195fe8: 0x24635840  addiu       $v1, $v1, 0x5840
    ctx->pc = 0x195fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22592));
    // 0x195fec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x195fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x195ff0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x195ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195ff4: 0x400008  jr          $v0
    ctx->pc = 0x195FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196000u: goto label_196000;
            case 0x1960E0u: goto label_1960e0;
            case 0x196440u: goto label_196440;
            case 0x196470u: goto label_196470;
            case 0x1964A8u: goto label_1964a8;
            case 0x196528u: goto label_196528;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195FF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x195FFCu;
    // 0x195ffc: 0x0  nop
    ctx->pc = 0x195ffcu;
    // NOP
label_196000:
    // 0x196000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x196000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196004: 0xa2260001  sb          $a2, 0x1($s1)
    ctx->pc = 0x196004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x196008: 0x3c040081  lui         $a0, 0x81
    ctx->pc = 0x196008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)129 << 16));
    // 0x19600c: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x19600cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x196010: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x196010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196014: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x196014u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x196018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x196018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19601c: 0xa22000a6  sb          $zero, 0xA6($s1)
    ctx->pc = 0x19601cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x196020: 0x24840fe0  addiu       $a0, $a0, 0xFE0
    ctx->pc = 0x196020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4064));
    // 0x196024: 0xa22600a7  sb          $a2, 0xA7($s1)
    ctx->pc = 0x196024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 167), (uint8_t)GPR_U32(ctx, 6));
    // 0x196028: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19602c: 0xa22300a8  sb          $v1, 0xA8($s1)
    ctx->pc = 0x19602cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x196030: 0xa22200a9  sb          $v0, 0xA9($s1)
    ctx->pc = 0x196030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 169), (uint8_t)GPR_U32(ctx, 2));
    // 0x196034: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x196034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x196038: 0xc056e04  jal         func_15B810
    ctx->pc = 0x196038u;
    SET_GPR_U32(ctx, 31, 0x196040u);
    ctx->pc = 0x19603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196038u;
    // 0x19603c: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B810u, 0x196038u, 0x196040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196040u;
label_196040:
    // 0x196040: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196044: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x196044u;
    SET_GPR_U32(ctx, 31, 0x19604Cu);
    ctx->pc = 0x196048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196044u;
    // 0x196048: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x196044u, 0x19604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19604Cu;
label_19604c:
    // 0x19604c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x19604cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x196050: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x196050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x196054: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196058: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19605c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x19605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196064: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196064u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196068: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196068u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19606c: 0xc09565c  jal         func_255970
    ctx->pc = 0x19606Cu;
    SET_GPR_U32(ctx, 31, 0x196074u);
    ctx->pc = 0x196070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19606Cu;
    // 0x196070: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x19606Cu, 0x196074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196074u;
label_196074:
    // 0x196074: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19607c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x19607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196080: 0xc095130  jal         func_2544C0
    ctx->pc = 0x196080u;
    SET_GPR_U32(ctx, 31, 0x196088u);
    ctx->pc = 0x196084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196080u;
    // 0x196084: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x196080u, 0x196088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196088u;
label_196088:
    // 0x196088: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x196088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x19608c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196090: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196094: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196098: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x19609c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19609cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1960a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1960a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960a4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x1960a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x1960a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1960a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1960acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1960b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1960b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960b8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1960B8u;
    SET_GPR_U32(ctx, 31, 0x1960C0u);
    ctx->pc = 0x1960BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960B8u;
    // 0x1960bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1960B8u, 0x1960C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960C0u;
label_1960c0:
    // 0x1960c0: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x1960c4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1960c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1960c8: 0x24846ac0  addiu       $a0, $a0, 0x6AC0
    ctx->pc = 0x1960c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    // 0x1960cc: 0xc054504  jal         func_151410
    ctx->pc = 0x1960CCu;
    SET_GPR_U32(ctx, 31, 0x1960D4u);
    ctx->pc = 0x1960D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960CCu;
    // 0x1960d0: 0x24a5e400  addiu       $a1, $a1, -0x1C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151410u, 0x1960CCu, 0x1960D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960D4u;
label_1960d4:
    // 0x1960d4: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x1960D4u;
    {
        const bool branch_taken_0x1960d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960d4) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x1960DCu;
    // 0x1960dc: 0x0  nop
    ctx->pc = 0x1960dcu;
    // NOP
label_1960e0:
    // 0x1960e0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x1960e4: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1960e8: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x1960E8u;
    {
        const bool branch_taken_0x1960e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1960ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1960E8u;
        // 0x1960ec: 0x8c30ea28  lw          $s0, -0x15D8($at) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960e8) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x1960F0u;
    // 0x1960f0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1960f4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1960F4u;
    SET_GPR_U32(ctx, 31, 0x1960FCu);
    ctx->pc = 0x1960F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1960F4u;
    // 0x1960f8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x1960F4u, 0x1960FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1960FCu;
label_1960fc:
    // 0x1960fc: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1960FCu;
    {
        const bool branch_taken_0x1960fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1960fc) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x196104u;
    // 0x196104: 0x32022000  andi        $v0, $s0, 0x2000
    ctx->pc = 0x196104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x196108: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x196108u;
    {
        const bool branch_taken_0x196108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196108) {
            ctx->pc = 0x196230u;
            goto label_196230;
        }
    }
    ctx->pc = 0x196110u;
    // 0x196110: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x196114: 0x922300a7  lbu         $v1, 0xA7($s1)
    ctx->pc = 0x196114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 167)));
    // 0x196118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19611c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x19611Cu;
    {
        const bool branch_taken_0x19611c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19611c) {
            ctx->pc = 0x1961A0u;
            goto label_1961a0;
        }
    }
    ctx->pc = 0x196124u;
    // 0x196124: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x196124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x196128: 0x922300a8  lbu         $v1, 0xA8($s1)
    ctx->pc = 0x196128u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x19612c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196130: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x196130u;
    {
        const bool branch_taken_0x196130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196130) {
            ctx->pc = 0x1961A0u;
            goto label_1961a0;
        }
    }
    ctx->pc = 0x196138u;
    // 0x196138: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x19613c: 0x922300a9  lbu         $v1, 0xA9($s1)
    ctx->pc = 0x19613cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 169)));
    // 0x196140: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196144: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x196144u;
    {
        const bool branch_taken_0x196144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x196148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196144u;
        // 0x196148: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196144) {
            ctx->pc = 0x1961A0u;
            goto label_1961a0;
        }
    }
    ctx->pc = 0x19614Cu;
    // 0x19614c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x19614cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196150: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x196154: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x196154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x196158: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x19615c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x19615Cu;
    SET_GPR_U32(ctx, 31, 0x196164u);
    ctx->pc = 0x196160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19615Cu;
    // 0x196160: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x19615Cu, 0x196164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196164u;
label_196164:
    // 0x196164: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196168: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19616c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x19616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196170: 0xc095130  jal         func_2544C0
    ctx->pc = 0x196170u;
    SET_GPR_U32(ctx, 31, 0x196178u);
    ctx->pc = 0x196174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196170u;
    // 0x196174: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x196170u, 0x196178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196178u;
label_196178:
    // 0x196178: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x19617c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196180: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x196180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x196184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196188: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x196188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x19618c: 0xc06734c  jal         func_19CD30
    ctx->pc = 0x19618Cu;
    SET_GPR_U32(ctx, 31, 0x196194u);
    ctx->pc = 0x196190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19618Cu;
    // 0x196190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD30u, 0x19618Cu, 0x196194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196194u;
label_196194:
    // 0x196194: 0x10000140  b           . + 4 + (0x140 << 2)
    ctx->pc = 0x196194u;
    {
        const bool branch_taken_0x196194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196194) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x19619Cu;
    // 0x19619c: 0x0  nop
    ctx->pc = 0x19619cu;
    // NOP
label_1961a0:
    // 0x1961a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1961a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1961a4: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1961a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1961a8: 0xc0957bc  jal         func_255EF0
    ctx->pc = 0x1961A8u;
    SET_GPR_U32(ctx, 31, 0x1961B0u);
    ctx->pc = 0x1961ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1961A8u;
    // 0x1961ac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255EF0u, 0x1961A8u, 0x1961B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1961B0u;
label_1961b0:
    // 0x1961b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1961b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1961b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1961b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1961b8: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x1961b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x1961bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1961BCu;
    {
        const bool branch_taken_0x1961bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1961C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961BCu;
        // 0x1961c0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961bc) {
            ctx->pc = 0x1961F8u;
            goto label_1961f8;
        }
    }
    ctx->pc = 0x1961C4u;
    // 0x1961c4: 0xa3a20049  sb          $v0, 0x49($sp)
    ctx->pc = 0x1961c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x1961c8: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x1961c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966412)));
    // 0x1961cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1961ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1961d0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1961D0u;
    {
        const bool branch_taken_0x1961d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1961D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1961D0u;
        // 0x1961d4: 0xa3a00044  sb          $zero, 0x44($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1961d0) {
            ctx->pc = 0x1961F8u;
            goto label_1961f8;
        }
    }
    ctx->pc = 0x1961D8u;
    // 0x1961d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1961d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1961dc: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x1961dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1961e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1961e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1961e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1961E4u;
    {
        const bool branch_taken_0x1961e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1961e4) {
            ctx->pc = 0x1961F8u;
            goto label_1961f8;
        }
    }
    ctx->pc = 0x1961ECu;
    // 0x1961ec: 0x87a20042  lh          $v0, 0x42($sp)
    ctx->pc = 0x1961ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x1961f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1961f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1961f4: 0xa7a20042  sh          $v0, 0x42($sp)
    ctx->pc = 0x1961f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 2));
label_1961f8:
    // 0x1961f8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1961f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1961fc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x1961fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196200: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x196200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x196204: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196208: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x196208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19620c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19620cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196210: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196214: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x196214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x196218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19621c: 0xc09565c  jal         func_255970
    ctx->pc = 0x19621Cu;
    SET_GPR_U32(ctx, 31, 0x196224u);
    ctx->pc = 0x196220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19621Cu;
    // 0x196220: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x19621Cu, 0x196224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196224u;
label_196224:
    // 0x196224: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x196224u;
    {
        const bool branch_taken_0x196224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196224) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x19622Cu;
    // 0x19622c: 0x0  nop
    ctx->pc = 0x19622cu;
    // NOP
label_196230:
    // 0x196230: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x196230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x196234: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x196234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x196238: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x196238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x19623c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x19623Cu;
    {
        const bool branch_taken_0x19623c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19623c) {
            ctx->pc = 0x1962A0u;
            goto label_1962a0;
        }
    }
    ctx->pc = 0x196244u;
    // 0x196244: 0x922300a6  lbu         $v1, 0xA6($s1)
    ctx->pc = 0x196244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x196248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19624c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19624cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196250: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x196250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x196254: 0xa22200aa  sb          $v0, 0xAA($s1)
    ctx->pc = 0x196254u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 2));
    // 0x196258: 0x922200a6  lbu         $v0, 0xA6($s1)
    ctx->pc = 0x196258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x19625c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x196260: 0x244300a7  addiu       $v1, $v0, 0xA7
    ctx->pc = 0x196260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 167));
    // 0x196264: 0x904200a7  lbu         $v0, 0xA7($v0)
    ctx->pc = 0x196264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 167)));
    // 0x196268: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x196268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x19626c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x19626Cu;
    {
        const bool branch_taken_0x19626c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19626c) {
            ctx->pc = 0x196280u;
            goto label_196280;
        }
    }
    ctx->pc = 0x196274u;
    // 0x196274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196278: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x196278u;
    {
        const bool branch_taken_0x196278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196278u;
        // 0x19627c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196278) {
            ctx->pc = 0x196288u;
            goto label_196288;
        }
    }
    ctx->pc = 0x196280u;
label_196280:
    // 0x196280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196284: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x196284u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_196288:
    // 0x196288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19628c: 0xc06734c  jal         func_19CD30
    ctx->pc = 0x19628Cu;
    SET_GPR_U32(ctx, 31, 0x196294u);
    ctx->pc = 0x196290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19628Cu;
    // 0x196290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD30u, 0x19628Cu, 0x196294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196294u;
label_196294:
    // 0x196294: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x196294u;
    {
        const bool branch_taken_0x196294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196294) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x19629Cu;
    // 0x19629c: 0x0  nop
    ctx->pc = 0x19629cu;
    // NOP
label_1962a0:
    // 0x1962a0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1962a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1962a4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1962a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1962a8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1962a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1962ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1962ACu;
    {
        const bool branch_taken_0x1962ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1962ac) {
            ctx->pc = 0x196310u;
            goto label_196310;
        }
    }
    ctx->pc = 0x1962B4u;
    // 0x1962b4: 0x922300a6  lbu         $v1, 0xA6($s1)
    ctx->pc = 0x1962b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x1962b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1962b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1962bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1962bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1962c0: 0xae23009c  sw          $v1, 0x9C($s1)
    ctx->pc = 0x1962c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
    // 0x1962c4: 0xa22200aa  sb          $v0, 0xAA($s1)
    ctx->pc = 0x1962c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 2));
    // 0x1962c8: 0x922200a6  lbu         $v0, 0xA6($s1)
    ctx->pc = 0x1962c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x1962cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1962ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1962d0: 0x244300a7  addiu       $v1, $v0, 0xA7
    ctx->pc = 0x1962d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 167));
    // 0x1962d4: 0x904200a7  lbu         $v0, 0xA7($v0)
    ctx->pc = 0x1962d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 167)));
    // 0x1962d8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1962d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1962dc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1962DCu;
    {
        const bool branch_taken_0x1962dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1962dc) {
            ctx->pc = 0x1962F0u;
            goto label_1962f0;
        }
    }
    ctx->pc = 0x1962E4u;
    // 0x1962e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1962e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1962e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1962E8u;
    {
        const bool branch_taken_0x1962e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1962E8u;
        // 0x1962ec: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962e8) {
            ctx->pc = 0x1962F8u;
            goto label_1962f8;
        }
    }
    ctx->pc = 0x1962F0u;
label_1962f0:
    // 0x1962f0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1962f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1962f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1962f8:
    // 0x1962f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1962f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962fc: 0xc06734c  jal         func_19CD30
    ctx->pc = 0x1962FCu;
    SET_GPR_U32(ctx, 31, 0x196304u);
    ctx->pc = 0x196300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962FCu;
    // 0x196300: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD30u, 0x1962FCu, 0x196304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196304u;
label_196304:
    // 0x196304: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x196304u;
    {
        const bool branch_taken_0x196304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196304) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x19630Cu;
    // 0x19630c: 0x0  nop
    ctx->pc = 0x19630cu;
    // NOP
label_196310:
    // 0x196310: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x196310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x196314: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x196314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x196318: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x196318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x19631c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x19631Cu;
    {
        const bool branch_taken_0x19631c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19631c) {
            ctx->pc = 0x196370u;
            goto label_196370;
        }
    }
    ctx->pc = 0x196324u;
    // 0x196324: 0x922200a6  lbu         $v0, 0xA6($s1)
    ctx->pc = 0x196324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x196328: 0x18400027  blez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x196328u;
    {
        const bool branch_taken_0x196328 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x19632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196328u;
        // 0x19632c: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196328) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x196330u;
    // 0x196330: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196338: 0xa22300a6  sb          $v1, 0xA6($s1)
    ctx->pc = 0x196338u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 166), (uint8_t)GPR_U32(ctx, 3));
    // 0x19633c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196340: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x196344: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x196344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x196348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19634c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19634cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196350: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196350u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196354: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196358: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196358u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19635c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19635Cu;
    SET_GPR_U32(ctx, 31, 0x196364u);
    ctx->pc = 0x196360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19635Cu;
    // 0x196360: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19635Cu, 0x196364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196364u;
label_196364:
    // 0x196364: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x196364u;
    {
        const bool branch_taken_0x196364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196364) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x19636Cu;
    // 0x19636c: 0x0  nop
    ctx->pc = 0x19636cu;
    // NOP
label_196370:
    // 0x196370: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x196374: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x196374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x196378: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x196378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x19637c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19637Cu;
    {
        const bool branch_taken_0x19637c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19637c) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x196384u;
    // 0x196384: 0x922200a6  lbu         $v0, 0xA6($s1)
    ctx->pc = 0x196384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 166)));
    // 0x196388: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x196388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19638c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x19638Cu;
    {
        const bool branch_taken_0x19638c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19638Cu;
        // 0x196390: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19638c) {
            ctx->pc = 0x1963C8u;
            goto label_1963c8;
        }
    }
    ctx->pc = 0x196394u;
    // 0x196394: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19639c: 0xa22300a6  sb          $v1, 0xA6($s1)
    ctx->pc = 0x19639cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 166), (uint8_t)GPR_U32(ctx, 3));
    // 0x1963a0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1963a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1963a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1963a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1963a8: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x1963a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x1963ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1963acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1963b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1963b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1963b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1963bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x1963C0u;
    SET_GPR_U32(ctx, 31, 0x1963C8u);
    ctx->pc = 0x1963C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963C0u;
    // 0x1963c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x1963C0u, 0x1963C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1963C8u;
label_1963c8:
    // 0x1963c8: 0x32024000  andi        $v0, $s0, 0x4000
    ctx->pc = 0x1963c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
    // 0x1963cc: 0x104000b2  beqz        $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1963CCu;
    {
        const bool branch_taken_0x1963cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1963D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1963CCu;
        // 0x1963d0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963cc) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x1963D4u;
    // 0x1963d4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1963d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1963d8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1963d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1963dc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1963dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1963e0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x1963e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x1963e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1963e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1963e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1963e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1963ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1963f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963f4: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1963f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1963f8: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x1963F8u;
    SET_GPR_U32(ctx, 31, 0x196400u);
    ctx->pc = 0x1963FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1963F8u;
    // 0x1963fc: 0xa22000aa  sb          $zero, 0xAA($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1963F8u, 0x196400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196400u;
label_196400:
    // 0x196400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x196400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x196404: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x196408: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x196408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x19640c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x19640cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x196410: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x196410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x196414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196418: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x19641c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19641cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196420: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196420u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19642c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x19642Cu;
    SET_GPR_U32(ctx, 31, 0x196434u);
    ctx->pc = 0x196430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19642Cu;
    // 0x196430: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x19642Cu, 0x196434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196434u;
label_196434:
    // 0x196434: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x196434u;
    {
        const bool branch_taken_0x196434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196434) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x19643Cu;
    // 0x19643c: 0x0  nop
    ctx->pc = 0x19643cu;
    // NOP
label_196440:
    // 0x196440: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x196440u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x196444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x196444u;
    {
        const bool branch_taken_0x196444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196444) {
            ctx->pc = 0x196458u;
            goto label_196458;
        }
    }
    ctx->pc = 0x19644Cu;
    // 0x19644c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x196450: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x196450u;
    {
        const bool branch_taken_0x196450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196450u;
        // 0x196454: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196450) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196458u;
label_196458:
    // 0x196458: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x196458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19645c: 0xa2250001  sb          $a1, 0x1($s1)
    ctx->pc = 0x19645cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x196460: 0xc06734c  jal         func_19CD30
    ctx->pc = 0x196460u;
    SET_GPR_U32(ctx, 31, 0x196468u);
    ctx->pc = 0x196464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196460u;
    // 0x196464: 0xa620000e  sh          $zero, 0xE($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD30u, 0x196460u, 0x196468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196468u;
label_196468:
    // 0x196468: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x196468u;
    {
        const bool branch_taken_0x196468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196468) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196470u;
label_196470:
    // 0x196470: 0x8623000e  lh          $v1, 0xE($s1)
    ctx->pc = 0x196470u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x196474: 0x2862004c  slti        $v0, $v1, 0x4C
    ctx->pc = 0x196474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)76) ? 1 : 0);
    // 0x196478: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x196478u;
    {
        const bool branch_taken_0x196478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196478u;
        // 0x19647c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196478) {
            ctx->pc = 0x196498u;
            goto label_196498;
        }
    }
    ctx->pc = 0x196480u;
    // 0x196480: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x196480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x196484: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x196484u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x196488: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x196488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x19648c: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x19648cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x196490: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x196490u;
    {
        const bool branch_taken_0x196490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196490u;
        // 0x196494: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196490) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196498u;
label_196498:
    // 0x196498: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x196498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x19649c: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x19649Cu;
    {
        const bool branch_taken_0x19649c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19649Cu;
        // 0x1964a0: 0xa622000e  sh          $v0, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19649c) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x1964A4u;
    // 0x1964a4: 0x0  nop
    ctx->pc = 0x1964a4u;
    // NOP
label_1964a8:
    // 0x1964a8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x1964a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1964ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1964ACu;
    {
        const bool branch_taken_0x1964ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1964ac) {
            ctx->pc = 0x1964C0u;
            goto label_1964c0;
        }
    }
    ctx->pc = 0x1964B4u;
    // 0x1964b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1964b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1964b8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1964B8u;
    {
        const bool branch_taken_0x1964b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1964BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1964B8u;
        // 0x1964bc: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1964b8) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x1964C0u;
label_1964c0:
    // 0x1964c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1964c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1964c4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1964c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1964c8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1964c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1964cc: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1964ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1964d0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1964d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1964d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1964d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1964d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1964dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1964e0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x1964E0u;
    SET_GPR_U32(ctx, 31, 0x1964E8u);
    ctx->pc = 0x1964E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1964E0u;
    // 0x1964e4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1964E0u, 0x1964E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1964E8u;
label_1964e8:
    // 0x1964e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1964e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1964ec: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1964ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1964f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1964f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1964f4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1964f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1964f8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1964f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1964fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1964fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196500: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x196500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x196504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196508: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19650c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19650cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196514: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196514u;
    SET_GPR_U32(ctx, 31, 0x19651Cu);
    ctx->pc = 0x196518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196514u;
    // 0x196518: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196514u, 0x19651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19651Cu;
label_19651c:
    // 0x19651c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x19651Cu;
    {
        const bool branch_taken_0x19651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19651c) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196524u;
    // 0x196524: 0x0  nop
    ctx->pc = 0x196524u;
    // NOP
label_196528:
    // 0x196528: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x19652c: 0xc095150  jal         func_254540
    ctx->pc = 0x19652Cu;
    SET_GPR_U32(ctx, 31, 0x196534u);
    ctx->pc = 0x196530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19652Cu;
    // 0x196530: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x19652Cu, 0x196534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196534u;
label_196534:
    // 0x196534: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x196534u;
    {
        const bool branch_taken_0x196534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196534u;
        // 0x196538: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196534) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x19653Cu;
    // 0x19653c: 0xc095154  jal         func_254550
    ctx->pc = 0x19653Cu;
    SET_GPR_U32(ctx, 31, 0x196544u);
    ctx->pc = 0x196540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19653Cu;
    // 0x196540: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254550u, 0x19653Cu, 0x196544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196544u;
label_196544:
    // 0x196544: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x196544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x196548: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x196548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19654c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19654cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x196550: 0x10660015  beq         $v1, $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x196550u;
    {
        const bool branch_taken_0x196550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x196550) {
            ctx->pc = 0x1965A8u;
            goto label_1965a8;
        }
    }
    ctx->pc = 0x196558u;
    // 0x196558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x196558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19655c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x19655Cu;
    {
        const bool branch_taken_0x19655c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19655c) {
            ctx->pc = 0x1965A8u;
            goto label_1965a8;
        }
    }
    ctx->pc = 0x196564u;
    // 0x196564: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196564u;
    {
        const bool branch_taken_0x196564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196564) {
            ctx->pc = 0x196578u;
            goto label_196578;
        }
    }
    ctx->pc = 0x19656Cu;
    // 0x19656c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x19656Cu;
    {
        const bool branch_taken_0x19656c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19656c) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196574u;
    // 0x196574: 0x0  nop
    ctx->pc = 0x196574u;
    // NOP
label_196578:
    // 0x196578: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x196578u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x19657c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x19657cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x196580: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x196580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x196584: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196588: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19658c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x19658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x196590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196594: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196594u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196598: 0xc09565c  jal         func_255970
    ctx->pc = 0x196598u;
    SET_GPR_U32(ctx, 31, 0x1965A0u);
    ctx->pc = 0x19659Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196598u;
    // 0x19659c: 0x622825  or          $a1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255970u, 0x196598u, 0x1965A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965A0u;
label_1965a0:
    // 0x1965a0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1965A0u;
    {
        const bool branch_taken_0x1965a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1965a0) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x1965A8u;
label_1965a8:
    // 0x1965a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1965a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1965ac: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1965acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1965b0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1965b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1965b4: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x1965b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x1965b8: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x1965b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x1965bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1965bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1965c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1965c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1965c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1965c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965cc: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1965ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1965d0: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x1965D0u;
    SET_GPR_U32(ctx, 31, 0x1965D8u);
    ctx->pc = 0x1965D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1965D0u;
    // 0x1965d4: 0xa22000aa  sb          $zero, 0xAA($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x1965D0u, 0x1965D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1965D8u;
label_1965d8:
    // 0x1965d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1965d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1965dc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x1965dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x1965e0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1965e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1965e4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x1965e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x1965e8: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x1965e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x1965ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1965ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965f0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x1965f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x1965f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1965f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1965f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1965fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1965fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196600: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x196600u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196604: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x196604u;
    SET_GPR_U32(ctx, 31, 0x19660Cu);
    ctx->pc = 0x196608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196604u;
    // 0x196608: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x196604u, 0x19660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19660Cu;
label_19660c:
    // 0x19660c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19660Cu;
    {
        const bool branch_taken_0x19660c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19660c) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x196614u;
    // 0x196614: 0x0  nop
    ctx->pc = 0x196614u;
    // NOP
label_196618:
    // 0x196618: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x196618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x19661c: 0xc063d48  jal         func_18F520
    ctx->pc = 0x19661Cu;
    SET_GPR_U32(ctx, 31, 0x196624u);
    ctx->pc = 0x196620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19661Cu;
    // 0x196620: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x19661Cu, 0x196624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196624u;
label_196624:
    // 0x196624: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x196624u;
    {
        const bool branch_taken_0x196624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196624u;
        // 0x196628: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196624) {
            ctx->pc = 0x196698u;
            goto label_196698;
        }
    }
    ctx->pc = 0x19662Cu;
    // 0x19662c: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x19662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x196630: 0x8c230fe0  lw          $v1, 0xFE0($at)
    ctx->pc = 0x196630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x196634: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x196638: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x19663c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x196640: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x196640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x196644: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x196644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x196648: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x196648u;
    SET_GPR_U32(ctx, 31, 0x196650u);
    ctx->pc = 0x19664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196648u;
    // 0x19664c: 0xac220fe0  sw          $v0, 0xFE0($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x196648u, 0x196650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196650u;
label_196650:
    // 0x196650: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x196654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196658: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x196658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x19665c: 0xc095130  jal         func_2544C0
    ctx->pc = 0x19665Cu;
    SET_GPR_U32(ctx, 31, 0x196664u);
    ctx->pc = 0x196660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19665Cu;
    // 0x196660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544C0u, 0x19665Cu, 0x196664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196664u;
label_196664:
    // 0x196664: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x196664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x196668: 0x27848548  addiu       $a0, $gp, -0x7AB8
    ctx->pc = 0x196668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935880));
    // 0x19666c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x19666cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x196670: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x196670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x196674: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196678: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x196678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19667c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19667cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196680: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x196680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196684: 0xc050f30  jal         func_143CC0
    ctx->pc = 0x196684u;
    SET_GPR_U32(ctx, 31, 0x19668Cu);
    ctx->pc = 0x196688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196684u;
    // 0x196688: 0xa22000aa  sb          $zero, 0xAA($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 170), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CC0u, 0x196684u, 0x19668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19668Cu;
label_19668c:
    // 0x19668c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19668Cu;
    {
        const bool branch_taken_0x19668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19668Cu;
        // 0x196690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19668c) {
            ctx->pc = 0x196700u;
            goto label_196700;
        }
    }
    ctx->pc = 0x196694u;
    // 0x196694: 0x0  nop
    ctx->pc = 0x196694u;
    // NOP
label_196698:
    // 0x196698: 0x8628000e  lh          $t0, 0xE($s1)
    ctx->pc = 0x196698u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x19669c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x19669cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1966a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966a4: 0x24a5d9b0  addiu       $a1, $a1, -0x2650
    ctx->pc = 0x1966a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957488));
    // 0x1966a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1966a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1966acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966b0: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x1966B0u;
    SET_GPR_U32(ctx, 31, 0x1966B8u);
    ctx->pc = 0x1966B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966B0u;
    // 0x1966b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x1966B0u, 0x1966B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966B8u;
label_1966b8:
    // 0x1966b8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1966b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1966bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1966bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966c0: 0x24a5d9b0  addiu       $a1, $a1, -0x2650
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957488));
    // 0x1966c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1966c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1966c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1966ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966d0: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x1966D0u;
    SET_GPR_U32(ctx, 31, 0x1966D8u);
    ctx->pc = 0x1966D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966D0u;
    // 0x1966d4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x1966D0u, 0x1966D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966D8u;
label_1966d8:
    // 0x1966d8: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1966d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1966dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1966dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966e0: 0x24a5d9b0  addiu       $a1, $a1, -0x2650
    ctx->pc = 0x1966e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957488));
    // 0x1966e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1966e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1966e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1966e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1966ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966f0: 0xc066fc0  jal         func_19BF00
    ctx->pc = 0x1966F0u;
    SET_GPR_U32(ctx, 31, 0x1966F8u);
    ctx->pc = 0x1966F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1966F0u;
    // 0x1966f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BF00u, 0x1966F0u, 0x1966F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1966F8u;
label_1966f8:
    // 0x1966f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1966f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1966fc: 0x0  nop
    ctx->pc = 0x1966fcu;
    // NOP
label_196700:
    // 0x196700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x196700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196704: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x196704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196708: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19670c: 0x3e00008  jr          $ra
    ctx->pc = 0x19670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19670Cu;
        // 0x196710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196714u;
}
