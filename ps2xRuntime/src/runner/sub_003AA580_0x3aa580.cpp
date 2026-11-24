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

// Function: sub_003AA580
// Address: 0x3aa580 - 0x3aa710
void sub_003AA580_0x3aa580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA580_0x3aa580");
#endif

    switch (ctx->pc) {
        case 0x3aa5f0u: goto label_3aa5f0;
        case 0x3aa60cu: goto label_3aa60c;
        case 0x3aa61cu: goto label_3aa61c;
        case 0x3aa660u: goto label_3aa660;
        case 0x3aa68cu: goto label_3aa68c;
        case 0x3aa69cu: goto label_3aa69c;
        case 0x3aa6ccu: goto label_3aa6cc;
        case 0x3aa6dcu: goto label_3aa6dc;
        default: break;
    }

    ctx->pc = 0x3aa580u;

    // 0x3aa580: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3aa580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3aa584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3aa584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa588: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3aa588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3aa58c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3aa58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3aa590: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3aa590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3aa594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3aa594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3aa598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3aa59c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3aa59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa5a0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x3aa5a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x3aa5a4: 0x10620044  beq         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3AA5A4u;
    {
        const bool branch_taken_0x3aa5a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5A4u;
        // 0x3aa5a8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5a4) {
            ctx->pc = 0x3AA6B8u;
            goto label_3aa6b8;
        }
    }
    ctx->pc = 0x3AA5ACu;
    // 0x3aa5ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aa5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aa5b0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3AA5B0u;
    {
        const bool branch_taken_0x3aa5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5B0u;
        // 0x3aa5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5b0) {
            ctx->pc = 0x3AA678u;
            goto label_3aa678;
        }
    }
    ctx->pc = 0x3AA5B8u;
    // 0x3aa5b8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3AA5B8u;
    {
        const bool branch_taken_0x3aa5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aa5b8) {
            ctx->pc = 0x3AA5F8u;
            goto label_3aa5f8;
        }
    }
    ctx->pc = 0x3AA5C0u;
    // 0x3aa5c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA5C0u;
    {
        const bool branch_taken_0x3aa5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa5c0) {
            ctx->pc = 0x3AA5D0u;
            goto label_3aa5d0;
        }
    }
    ctx->pc = 0x3AA5C8u;
    // 0x3aa5c8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3AA5C8u;
    {
        const bool branch_taken_0x3aa5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa5c8) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA5D0u;
label_3aa5d0:
    // 0x3aa5d0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3aa5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa5d4: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x3aa5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa5d8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa5dc: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3aa5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3aa5e0: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa5e4: 0xa4228c12  sh          $v0, -0x73EE($at)
    ctx->pc = 0x3aa5e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B8C12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x6B8C12u, _value); } while (0);
    // 0x3aa5e8: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AA5E8u;
    SET_GPR_U32(ctx, 31, 0x3AA5F0u);
    ctx->pc = 0x3AA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA5E8u;
    // 0x3aa5ec: 0x24848c30  addiu       $a0, $a0, -0x73D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AA5E8u, 0x3AA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA5F0u;
label_3aa5f0:
    // 0x3aa5f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3AA5F0u;
    {
        const bool branch_taken_0x3aa5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa5f0) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA5F8u;
label_3aa5f8:
    // 0x3aa5f8: 0x82450007  lb          $a1, 0x7($s2)
    ctx->pc = 0x3aa5f8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3aa5fc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa604: 0xc052840  jal         func_14A100
    ctx->pc = 0x3AA604u;
    SET_GPR_U32(ctx, 31, 0x3AA60Cu);
    ctx->pc = 0x3AA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA604u;
    // 0x3aa608: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A100u, 0x3AA604u, 0x3AA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA60Cu;
label_3aa60c:
    // 0x3aa60c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3AA60Cu;
    {
        const bool branch_taken_0x3aa60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA60Cu;
        // 0x3aa610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa60c) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA614u;
    // 0x3aa614: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA614u;
    SET_GPR_U32(ctx, 31, 0x3AA61Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA614u, 0x3AA61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA61Cu;
label_3aa61c:
    // 0x3aa61c: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3AA61Cu;
    {
        const bool branch_taken_0x3aa61c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa61c) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA624u;
    // 0x3aa624: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x3aa624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3aa628: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3aa62c: 0x24428c10  addiu       $v0, $v0, -0x73F0
    ctx->pc = 0x3aa62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937616));
    // 0x3aa630: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3aa630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3aa634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aa634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3aa638: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x3aa638u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x3aa63c: 0x82450007  lb          $a1, 0x7($s2)
    ctx->pc = 0x3aa63cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3aa640: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3aa640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3aa644: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3aa644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3aa648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aa648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aa64c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3aa64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3aa650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3aa650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3aa654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3aa654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3aa658: 0xc049ed2  jal         func_127B48
    ctx->pc = 0x3AA658u;
    SET_GPR_U32(ctx, 31, 0x3AA660u);
    ctx->pc = 0x3AA65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA658u;
    // 0x3aa65c: 0x24450238  addiu       $a1, $v0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B48u, 0x3AA658u, 0x3AA660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA660u;
label_3aa660:
    // 0x3aa660: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa664: 0xac318c28  sw          $s1, -0x73D8($at)
    ctx->pc = 0x3aa664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x6B8C28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B8C28u, _value); } while (0);
    // 0x3aa668: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3aa668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3aa66c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3AA66Cu;
    {
        const bool branch_taken_0x3aa66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA66Cu;
        // 0x3aa670: 0xac308c2c  sw          $s0, -0x73D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937644), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa66c) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA674u;
    // 0x3aa674: 0x0  nop
    ctx->pc = 0x3aa674u;
    // NOP
label_3aa678:
    // 0x3aa678: 0x82450007  lb          $a1, 0x7($s2)
    ctx->pc = 0x3aa678u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3aa67c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa684: 0xc0529d4  jal         func_14A750
    ctx->pc = 0x3AA684u;
    SET_GPR_U32(ctx, 31, 0x3AA68Cu);
    ctx->pc = 0x3AA688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA684u;
    // 0x3aa688: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A750u, 0x3AA684u, 0x3AA68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA68Cu;
label_3aa68c:
    // 0x3aa68c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3AA68Cu;
    {
        const bool branch_taken_0x3aa68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA68Cu;
        // 0x3aa690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa68c) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA694u;
    // 0x3aa694: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA694u;
    SET_GPR_U32(ctx, 31, 0x3AA69Cu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA694u, 0x3AA69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA69Cu;
label_3aa69c:
    // 0x3aa69c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3AA69Cu;
    {
        const bool branch_taken_0x3aa69c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa69c) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA6A4u;
    // 0x3aa6a4: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x3aa6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x3aa6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3aa6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3aa6ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3AA6ACu;
    {
        const bool branch_taken_0x3aa6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6ACu;
        // 0x3aa6b0: 0xa2420003  sb          $v0, 0x3($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6ac) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA6B4u;
    // 0x3aa6b4: 0x0  nop
    ctx->pc = 0x3aa6b4u;
    // NOP
label_3aa6b8:
    // 0x3aa6b8: 0x82450007  lb          $a1, 0x7($s2)
    ctx->pc = 0x3aa6b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x3aa6bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3aa6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3aa6c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3aa6c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa6c4: 0xc0528b4  jal         func_14A2D0
    ctx->pc = 0x3AA6C4u;
    SET_GPR_U32(ctx, 31, 0x3AA6CCu);
    ctx->pc = 0x3AA6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA6C4u;
    // 0x3aa6c8: 0x24848c10  addiu       $a0, $a0, -0x73F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2D0u, 0x3AA6C4u, 0x3AA6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA6CCu;
label_3aa6cc:
    // 0x3aa6cc: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA6CCu;
    {
        const bool branch_taken_0x3aa6cc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3AA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6CCu;
        // 0x3aa6d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6cc) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA6D4u;
    // 0x3aa6d4: 0xc0ea8f0  jal         func_3AA3C0
    ctx->pc = 0x3AA6D4u;
    SET_GPR_U32(ctx, 31, 0x3AA6DCu);
    ctx->pc = 0x3AA3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA3C0u, 0x3AA6D4u, 0x3AA6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA6DCu;
label_3aa6dc:
    // 0x3aa6dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA6DCu;
    {
        const bool branch_taken_0x3aa6dc = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3aa6dc) {
            ctx->pc = 0x3AA6F0u;
            goto label_3aa6f0;
        }
    }
    ctx->pc = 0x3AA6E4u;
    // 0x3aa6e4: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3aa6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa6e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA6E8u;
    {
        const bool branch_taken_0x3aa6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA6E8u;
        // 0x3aa6ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa6e8) {
            ctx->pc = 0x3AA6F8u;
            goto label_3aa6f8;
        }
    }
    ctx->pc = 0x3AA6F0u;
label_3aa6f0:
    // 0x3aa6f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa6f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa6f4: 0x0  nop
    ctx->pc = 0x3aa6f4u;
    // NOP
label_3aa6f8:
    // 0x3aa6f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3aa6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3aa6fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3aa6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3aa700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3aa704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa708: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA708u;
        // 0x3aa70c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA710u;
}
