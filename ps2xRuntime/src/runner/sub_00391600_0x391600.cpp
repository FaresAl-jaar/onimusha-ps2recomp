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

// Function: sub_00391600
// Address: 0x391600 - 0x391790
void sub_00391600_0x391600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391600_0x391600");
#endif

    switch (ctx->pc) {
        case 0x39161cu: goto label_39161c;
        case 0x39163cu: goto label_39163c;
        case 0x391658u: goto label_391658;
        case 0x3916e0u: goto label_3916e0;
        case 0x3916ecu: goto label_3916ec;
        case 0x3916fcu: goto label_3916fc;
        case 0x391714u: goto label_391714;
        case 0x391724u: goto label_391724;
        case 0x391780u: goto label_391780;
        default: break;
    }

    ctx->pc = 0x391600u;

    // 0x391600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x391600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x391604: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x391604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x391608: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x391608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39160c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x391610: 0xa4822ad0  sh          $v0, 0x2AD0($a0)
    ctx->pc = 0x391610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10960), (uint16_t)GPR_U32(ctx, 2));
    // 0x391614: 0xc0d0494  jal         func_341250
    ctx->pc = 0x391614u;
    SET_GPR_U32(ctx, 31, 0x39161Cu);
    ctx->pc = 0x391618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391614u;
    // 0x391618: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x391614u, 0x39161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39161Cu;
label_39161c:
    // 0x39161c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x39161cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x391620: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x391620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x391624: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x391624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x391628: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39162c: 0x24c6c7a0  addiu       $a2, $a2, -0x3860
    ctx->pc = 0x39162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952864));
    // 0x391630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391634: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x391634u;
    SET_GPR_U32(ctx, 31, 0x39163Cu);
    ctx->pc = 0x391638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391634u;
    // 0x391638: 0x2508c7b0  addiu       $t0, $t0, -0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x391634u, 0x39163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39163Cu;
label_39163c:
    // 0x39163c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x39163cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x391640: 0x27848560  addiu       $a0, $gp, -0x7AA0
    ctx->pc = 0x391640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935904));
    // 0x391644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x391644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391648: 0x24c6c7a0  addiu       $a2, $a2, -0x3860
    ctx->pc = 0x391648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952864));
    // 0x39164c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39164cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391650: 0xc053ae8  jal         func_14EBA0
    ctx->pc = 0x391650u;
    SET_GPR_U32(ctx, 31, 0x391658u);
    ctx->pc = 0x391654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391650u;
    // 0x391654: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EBA0u, 0x391650u, 0x391658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391658u;
label_391658:
    // 0x391658: 0x8e0500e0  lw          $a1, 0xE0($s0)
    ctx->pc = 0x391658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x39165c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x39165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x391660: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x391660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x391664: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x391664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x391668: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x391668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x39166c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x39166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x391670: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x391670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x391674: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x391674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x391678: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x391678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x39167c: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x39167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x391680: 0x8e0300e0  lw          $v1, 0xE0($s0)
    ctx->pc = 0x391680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x391684: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x391684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x391688: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x391688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
    // 0x39168c: 0x96032acc  lhu         $v1, 0x2ACC($s0)
    ctx->pc = 0x39168cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x391690: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x391690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x391694: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x391694u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x391698: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x391698u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x39169c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39169cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3916a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3916a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3916a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3916a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3916a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3916a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3916ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3916ACu;
    {
        const bool branch_taken_0x3916ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3916ac) {
            ctx->pc = 0x3916C8u;
            goto label_3916c8;
        }
    }
    ctx->pc = 0x3916B4u;
    // 0x3916b4: 0x96032ad0  lhu         $v1, 0x2AD0($s0)
    ctx->pc = 0x3916b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10960)));
    // 0x3916b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3916b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3916bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3916bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3916c0: 0xa6022ad0  sh          $v0, 0x2AD0($s0)
    ctx->pc = 0x3916c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10960), (uint16_t)GPR_U32(ctx, 2));
    // 0x3916c4: 0x0  nop
    ctx->pc = 0x3916c4u;
    // NOP
label_3916c8:
    // 0x3916c8: 0x96022ad0  lhu         $v0, 0x2AD0($s0)
    ctx->pc = 0x3916c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10960)));
    // 0x3916cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3916CCu;
    {
        const bool branch_taken_0x3916cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3916cc) {
            ctx->pc = 0x391708u;
            goto label_391708;
        }
    }
    ctx->pc = 0x3916D4u;
    // 0x3916d4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3916d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3916d8: 0xc0d1634  jal         func_3458D0
    ctx->pc = 0x3916D8u;
    SET_GPR_U32(ctx, 31, 0x3916E0u);
    ctx->pc = 0x3916DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3916D8u;
    // 0x3916dc: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3458D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3458D0u, 0x3916D8u, 0x3916E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3916E0u;
label_3916e0:
    // 0x3916e0: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x3916e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3916e4: 0xc0e454c  jal         func_391530
    ctx->pc = 0x3916E4u;
    SET_GPR_U32(ctx, 31, 0x3916ECu);
    ctx->pc = 0x3916E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3916E4u;
    // 0x3916e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x3916E4u, 0x3916ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3916ECu;
label_3916ec:
    // 0x3916ec: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x3916ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3916f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3916f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3916f4: 0xc0e454c  jal         func_391530
    ctx->pc = 0x3916F4u;
    SET_GPR_U32(ctx, 31, 0x3916FCu);
    ctx->pc = 0x3916F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3916F4u;
    // 0x3916f8: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x3916F4u, 0x3916FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3916FCu;
label_3916fc:
    // 0x3916fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3916FCu;
    {
        const bool branch_taken_0x3916fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3916fc) {
            ctx->pc = 0x391728u;
            goto label_391728;
        }
    }
    ctx->pc = 0x391704u;
    // 0x391704: 0x0  nop
    ctx->pc = 0x391704u;
    // NOP
label_391708:
    // 0x391708: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x391708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39170c: 0xc0e454c  jal         func_391530
    ctx->pc = 0x39170Cu;
    SET_GPR_U32(ctx, 31, 0x391714u);
    ctx->pc = 0x391710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39170Cu;
    // 0x391710: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x39170Cu, 0x391714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391714u;
label_391714:
    // 0x391714: 0x8e0200ec  lw          $v0, 0xEC($s0)
    ctx->pc = 0x391714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x391718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x391718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39171c: 0xc0e454c  jal         func_391530
    ctx->pc = 0x39171Cu;
    SET_GPR_U32(ctx, 31, 0x391724u);
    ctx->pc = 0x391720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39171Cu;
    // 0x391720: 0x244400f0  addiu       $a0, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391530u, 0x39171Cu, 0x391724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391724u;
label_391724:
    // 0x391724: 0x0  nop
    ctx->pc = 0x391724u;
    // NOP
label_391728:
    // 0x391728: 0x96032acc  lhu         $v1, 0x2ACC($s0)
    ctx->pc = 0x391728u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10956)));
    // 0x39172c: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x39172cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x391730: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x391730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x391734: 0x24420fe0  addiu       $v0, $v0, 0xFE0
    ctx->pc = 0x391734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4064));
    // 0x391738: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x391738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x39173c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x39173cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x391740: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x391740u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x391744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x391744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x391748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39174c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x391750: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x391750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x391754: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x391754u;
    {
        const bool branch_taken_0x391754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391754u;
        // 0x391758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391754) {
            ctx->pc = 0x391760u;
            goto label_391760;
        }
    }
    ctx->pc = 0x39175Cu;
    // 0x39175c: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x39175cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_391760:
    // 0x391760: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x391760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x391764: 0xa6022ad4  sh          $v0, 0x2AD4($s0)
    ctx->pc = 0x391764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10964), (uint16_t)GPR_U32(ctx, 2));
    // 0x391768: 0x26040194  addiu       $a0, $s0, 0x194
    ctx->pc = 0x391768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
    // 0x39176c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39176cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391770: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x391770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x391774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391778: 0xc09ae2c  jal         func_26B8B0
    ctx->pc = 0x391778u;
    SET_GPR_U32(ctx, 31, 0x391780u);
    ctx->pc = 0x39177Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391778u;
    // 0x39177c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B8B0u, 0x391778u, 0x391780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391780u;
label_391780:
    // 0x391780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x391780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x391784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x391788: 0x3e00008  jr          $ra
    ctx->pc = 0x391788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39178Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391788u;
        // 0x39178c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391790u;
}
