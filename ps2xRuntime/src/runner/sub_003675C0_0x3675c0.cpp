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

// Function: sub_003675C0
// Address: 0x3675c0 - 0x367844
void sub_003675C0_0x3675c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003675C0_0x3675c0");
#endif

    switch (ctx->pc) {
        case 0x367654u: goto label_367654;
        case 0x367678u: goto label_367678;
        case 0x367690u: goto label_367690;
        case 0x3676b0u: goto label_3676b0;
        case 0x3676d8u: goto label_3676d8;
        case 0x3676e0u: goto label_3676e0;
        case 0x3676fcu: goto label_3676fc;
        case 0x367704u: goto label_367704;
        case 0x367730u: goto label_367730;
        case 0x3677dcu: goto label_3677dc;
        case 0x367824u: goto label_367824;
        default: break;
    }

    ctx->pc = 0x3675c0u;

    // 0x3675c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3675c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3675c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3675c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3675c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3675c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3675cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3675ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3675d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3675d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3675d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3675d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3675d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3675dc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3675dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3675e0: 0x8085032e  lb          $a1, 0x32E($a0)
    ctx->pc = 0x3675e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 814)));
    // 0x3675e4: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x3675e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3675e8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3675e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3675ec: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3675ECu;
    {
        const bool branch_taken_0x3675ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3675F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3675ECu;
        // 0x3675f0: 0x909101bd  lbu         $s1, 0x1BD($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 445)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3675ec) {
            ctx->pc = 0x367678u;
            goto label_367678;
        }
    }
    ctx->pc = 0x3675F4u;
    // 0x3675f4: 0x924201c2  lbu         $v0, 0x1C2($s2)
    ctx->pc = 0x3675f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 450)));
    // 0x3675f8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3675f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3675fc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3675FCu;
    {
        const bool branch_taken_0x3675fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3675FCu;
        // 0x367600: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3675fc) {
            ctx->pc = 0x367678u;
            goto label_367678;
        }
    }
    ctx->pc = 0x367604u;
    // 0x367604: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x367604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x367608: 0x8c2aceb0  lw          $t2, -0x3150($at)
    ctx->pc = 0x367608u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954672)));
    // 0x36760c: 0x34498080  ori         $t1, $v0, 0x8080
    ctx->pc = 0x36760cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x367610: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x367610u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x367614: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x367614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x367618: 0x24c6a930  addiu       $a2, $a2, -0x56D0
    ctx->pc = 0x367618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945072));
    // 0x36761c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x36761cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x367620: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x367620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x367624: 0x24846a60  addiu       $a0, $a0, 0x6A60
    ctx->pc = 0x367624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27232));
    // 0x367628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36762c: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x36762cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x367630: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x367630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x367634: 0xa1082  srl         $v0, $t2, 2
    ctx->pc = 0x367634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 2));
    // 0x367638: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x367638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x36763c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36763cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367640: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x367640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x367644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x367644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367648: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x367648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x36764c: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x36764Cu;
    SET_GPR_U32(ctx, 31, 0x367654u);
    ctx->pc = 0x367650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36764Cu;
    // 0x367650: 0x703023  subu        $a2, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x36764Cu, 0x367654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367654u;
label_367654:
    // 0x367654: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x367654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x367658: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x367658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36765c: 0x26060039  addiu       $a2, $s0, 0x39
    ctx->pc = 0x36765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 57));
    // 0x367660: 0x24846a6c  addiu       $a0, $a0, 0x6A6C
    ctx->pc = 0x367660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27244));
    // 0x367664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367668: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x367668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x36766c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x36766cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x367670: 0xc09c5fc  jal         func_2717F0
    ctx->pc = 0x367670u;
    SET_GPR_U32(ctx, 31, 0x367678u);
    ctx->pc = 0x367674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367670u;
    // 0x367674: 0x34498080  ori         $t1, $v0, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717F0u, 0x367670u, 0x367678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367678u;
label_367678:
    // 0x367678: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x367678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x36767c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36767cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367680: 0x34508080  ori         $s0, $v0, 0x8080
    ctx->pc = 0x367680u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x367684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x367684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367688: 0xc0d9f4c  jal         func_367D30
    ctx->pc = 0x367688u;
    SET_GPR_U32(ctx, 31, 0x367690u);
    ctx->pc = 0x36768Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367688u;
    // 0x36768c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367D30u, 0x367688u, 0x367690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367690u;
label_367690:
    // 0x367690: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x367690u;
    {
        const bool branch_taken_0x367690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367690) {
            ctx->pc = 0x3676A8u;
            goto label_3676a8;
        }
    }
    ctx->pc = 0x367698u;
    // 0x367698: 0x3c028040  lui         $v0, 0x8040
    ctx->pc = 0x367698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32832 << 16));
    // 0x36769c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x36769cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3676a0: 0x34504040  ori         $s0, $v0, 0x4040
    ctx->pc = 0x3676a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16448);
    // 0x3676a4: 0x0  nop
    ctx->pc = 0x3676a4u;
    // NOP
label_3676a8:
    // 0x3676a8: 0xc0d8fb4  jal         func_363ED0
    ctx->pc = 0x3676A8u;
    SET_GPR_U32(ctx, 31, 0x3676B0u);
    ctx->pc = 0x3676ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676A8u;
    // 0x3676ac: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363ED0u, 0x3676A8u, 0x3676B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676B0u;
label_3676b0:
    // 0x3676b0: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3676b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3676b4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3676b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3676b8: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x3676b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3676bc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3676bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676c0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3676c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3676c4: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x3676c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x3676c8: 0x2406005d  addiu       $a2, $zero, 0x5D
    ctx->pc = 0x3676c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3676cc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3676ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3676d0: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3676D0u;
    SET_GPR_U32(ctx, 31, 0x3676D8u);
    ctx->pc = 0x3676D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676D0u;
    // 0x3676d4: 0x25291860  addiu       $t1, $t1, 0x1860 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3676D0u, 0x3676D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676D8u;
label_3676d8:
    // 0x3676d8: 0xc0ed944  jal         func_3B6510
    ctx->pc = 0x3676D8u;
    SET_GPR_U32(ctx, 31, 0x3676E0u);
    ctx->pc = 0x3676DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676D8u;
    // 0x3676dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B6510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B6510u, 0x3676D8u, 0x3676E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676E0u;
label_3676e0:
    // 0x3676e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3676e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676e4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3676e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3676e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3676ec: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x3676ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3676f0: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x3676f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3676f4: 0xc09c5f0  jal         func_2717C0
    ctx->pc = 0x3676F4u;
    SET_GPR_U32(ctx, 31, 0x3676FCu);
    ctx->pc = 0x3676F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676F4u;
    // 0x3676f8: 0x3408fff5  ori         $t0, $zero, 0xFFF5 (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717C0u, 0x3676F4u, 0x3676FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676FCu;
label_3676fc:
    // 0x3676fc: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x3676FCu;
    SET_GPR_U32(ctx, 31, 0x367704u);
    ctx->pc = 0x367700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3676FCu;
    // 0x367700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x3676FCu, 0x367704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367704u;
label_367704:
    // 0x367704: 0x8c4a0010  lw          $t2, 0x10($v0)
    ctx->pc = 0x367704u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x367708: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x367708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x36770c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x36770cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x367710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367714: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x367714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x367718: 0x2405016a  addiu       $a1, $zero, 0x16A
    ctx->pc = 0x367718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 362));
    // 0x36771c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x36771cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x367720: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367720u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367724: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x367724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x367728: 0xc095f88  jal         func_257E20
    ctx->pc = 0x367728u;
    SET_GPR_U32(ctx, 31, 0x367730u);
    ctx->pc = 0x36772Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367728u;
    // 0x36772c: 0x25291868  addiu       $t1, $t1, 0x1868 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x367728u, 0x367730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367730u;
label_367730:
    // 0x367730: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x367730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x367734: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x367734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x367738: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x367738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x36773c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x36773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x367740: 0x440019  multu       $v0, $a0
    ctx->pc = 0x367740u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x367744: 0x0  nop
    ctx->pc = 0x367744u;
    // NOP
    // 0x367748: 0x0  nop
    ctx->pc = 0x367748u;
    // NOP
    // 0x36774c: 0x1010  mfhi        $v0
    ctx->pc = 0x36774cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x367750: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x367750u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x367754: 0x25182  srl         $t2, $v0, 6
    ctx->pc = 0x367754u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x367758: 0x2d4103e7  sltiu       $at, $t2, 0x3E7
    ctx->pc = 0x367758u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)999) ? 1 : 0);
    // 0x36775c: 0x1010  mfhi        $v0
    ctx->pc = 0x36775cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x367760: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x367760u;
    {
        const bool branch_taken_0x367760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x367760) {
            ctx->pc = 0x367770u;
            goto label_367770;
        }
    }
    ctx->pc = 0x367768u;
    // 0x367768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x367768u;
    {
        const bool branch_taken_0x367768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367768) {
            ctx->pc = 0x367774u;
            goto label_367774;
        }
    }
    ctx->pc = 0x367770u;
label_367770:
    // 0x367770: 0x240a03e7  addiu       $t2, $zero, 0x3E7
    ctx->pc = 0x367770u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_367774:
    // 0x367774: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x367774u;
    {
        const bool branch_taken_0x367774 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x367778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367774u;
        // 0x367778: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367774) {
            ctx->pc = 0x367788u;
            goto label_367788;
        }
    }
    ctx->pc = 0x36777Cu;
    // 0x36777c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36777cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367780: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x367780u;
    {
        const bool branch_taken_0x367780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367780u;
        // 0x367784: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x367780) {
            ctx->pc = 0x3677A0u;
            goto label_3677a0;
        }
    }
    ctx->pc = 0x367788u;
label_367788:
    // 0x367788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x367788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36778c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x36778cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x367790: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x367790u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367794: 0x0  nop
    ctx->pc = 0x367794u;
    // NOP
    // 0x367798: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x367798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x36779c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x36779cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3677a0:
    // 0x3677a0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3677a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x3677a4: 0x3c024381  lui         $v0, 0x4381
    ctx->pc = 0x3677a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17281 << 16));
    // 0x3677a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3677a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3677ac: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3677acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3677b0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3677b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3677b4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3677b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3677b8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3677b8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3677bc: 0x240501dd  addiu       $a1, $zero, 0x1DD
    ctx->pc = 0x3677bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 477));
    // 0x3677c0: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x3677c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3677c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3677c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3677c8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3677c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3677cc: 0x25291868  addiu       $t1, $t1, 0x1868
    ctx->pc = 0x3677ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6248));
    // 0x3677d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3677d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3677d4: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3677D4u;
    SET_GPR_U32(ctx, 31, 0x3677DCu);
    ctx->pc = 0x3677D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3677D4u;
    // 0x3677d8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3677D4u, 0x3677DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3677DCu;
label_3677dc:
    // 0x3677dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3677dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3677e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3677e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3677e4: 0x0  nop
    ctx->pc = 0x3677e4u;
    // NOP
    // 0x3677e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3677e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3677ec: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3677ECu;
    {
        const bool branch_taken_0x3677ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3677F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3677ECu;
        // 0x3677f0: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3677ec) {
            ctx->pc = 0x367828u;
            goto label_367828;
        }
    }
    ctx->pc = 0x3677F4u;
    // 0x3677f4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x3677f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x3677f8: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3677f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x3677fc: 0x24846bb0  addiu       $a0, $a0, 0x6BB0
    ctx->pc = 0x3677fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27568));
    // 0x367800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367804: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x367804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x367808: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x367808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x36780c: 0x3408fff5  ori         $t0, $zero, 0xFFF5
    ctx->pc = 0x36780cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x367810: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x367810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367814: 0x344b8080  ori         $t3, $v0, 0x8080
    ctx->pc = 0x367814u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x367818: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x367818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x36781c: 0xc09c540  jal         func_271500
    ctx->pc = 0x36781Cu;
    SET_GPR_U32(ctx, 31, 0x367824u);
    ctx->pc = 0x367820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36781Cu;
    // 0x367820: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271500u, 0x36781Cu, 0x367824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367824u;
label_367824:
    // 0x367824: 0x0  nop
    ctx->pc = 0x367824u;
    // NOP
label_367828:
    // 0x367828: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x367828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36782c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36782cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367830: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x367830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367834: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x367834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367838: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x367838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36783c: 0x3e00008  jr          $ra
    ctx->pc = 0x36783Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36783Cu;
        // 0x367840: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36783Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367844u;
}
