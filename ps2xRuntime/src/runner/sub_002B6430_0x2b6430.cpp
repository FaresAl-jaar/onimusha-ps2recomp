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

// Function: sub_002B6430
// Address: 0x2b6430 - 0x2b6560
void sub_002B6430_0x2b6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6430_0x2b6430");
#endif

    ctx->pc = 0x2b6430u;

    // 0x2b6430: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2b6430u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2b6434: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2b6434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b6438: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B6438u;
    {
        const bool branch_taken_0x2b6438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6438) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6440u;
    // 0x2b6440: 0x9487082a  lhu         $a3, 0x82A($a0)
    ctx->pc = 0x2b6440u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2090)));
    // 0x2b6444: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x2b6444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2b6448: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6448u;
    {
        const bool branch_taken_0x2b6448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6448u;
        // 0x2b644c: 0x30e3ff3f  andi        $v1, $a3, 0xFF3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65343);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6448) {
            ctx->pc = 0x2B6458u;
            goto label_2b6458;
        }
    }
    ctx->pc = 0x2B6450u;
    // 0x2b6450: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2B6450u;
    {
        const bool branch_taken_0x2b6450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6450u;
        // 0x2b6454: 0xa483082a  sh          $v1, 0x82A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2090), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6450) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6458u;
label_2b6458:
    // 0x2b6458: 0x94830828  lhu         $v1, 0x828($a0)
    ctx->pc = 0x2b6458u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2088)));
    // 0x2b645c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B645Cu;
    {
        const bool branch_taken_0x2b645c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b645c) {
            ctx->pc = 0x2B6470u;
            goto label_2b6470;
        }
    }
    ctx->pc = 0x2B6464u;
    // 0x2b6464: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2b6464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2b6468: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2B6468u;
    {
        const bool branch_taken_0x2b6468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6468u;
        // 0x2b646c: 0xa4830828  sh          $v1, 0x828($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2088), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6468) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6470u;
label_2b6470:
    // 0x2b6470: 0x90860641  lbu         $a2, 0x641($a0)
    ctx->pc = 0x2b6470u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x2b6474: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2b6474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2b6478: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x2b6478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x2b647c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2b647cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b6480: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b6480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b6484: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b6488: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b648c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b648cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b6490: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b6490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b6494: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6498: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2b6498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2b649c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B649Cu;
    {
        const bool branch_taken_0x2b649c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B64A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B649Cu;
        // 0x2b64a0: 0x34e30040  ori         $v1, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b649c) {
            ctx->pc = 0x2B64A8u;
            goto label_2b64a8;
        }
    }
    ctx->pc = 0x2B64A4u;
    // 0x2b64a4: 0xa483082a  sh          $v1, 0x82A($a0)
    ctx->pc = 0x2b64a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2090), (uint16_t)GPR_U32(ctx, 3));
label_2b64a8:
    // 0x2b64a8: 0x8c872ab0  lw          $a3, 0x2AB0($a0)
    ctx->pc = 0x2b64a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x2b64ac: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B64ACu;
    {
        const bool branch_taken_0x2b64ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64ac) {
            ctx->pc = 0x2B64F8u;
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B64B4u;
    // 0x2b64b4: 0x90e50640  lbu         $a1, 0x640($a3)
    ctx->pc = 0x2b64b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1600)));
    // 0x2b64b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b64bc: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B64BCu;
    {
        const bool branch_taken_0x2b64bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b64bc) {
            ctx->pc = 0x2B64F8u;
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B64C4u;
    // 0x2b64c4: 0x90860641  lbu         $a2, 0x641($a0)
    ctx->pc = 0x2b64c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x2b64c8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2b64c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2b64cc: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x2b64ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x2b64d0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2b64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b64d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b64d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b64d8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b64d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b64dc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2b64dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b64e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b64e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b64e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b64e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b64e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b64e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b64ec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x2b64ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2b64f0: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B64F0u;
    {
        const bool branch_taken_0x2b64f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b64f0) {
            ctx->pc = 0x2B6548u;
            goto label_2b6548;
        }
    }
    ctx->pc = 0x2B64F8u;
label_2b64f8:
    // 0x2b64f8: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B64F8u;
    {
        const bool branch_taken_0x2b64f8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64f8) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6500u;
    // 0x2b6500: 0x90e50640  lbu         $a1, 0x640($a3)
    ctx->pc = 0x2b6500u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1600)));
    // 0x2b6504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6508: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6508u;
    {
        const bool branch_taken_0x2b6508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6508) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6510u;
    // 0x2b6510: 0x90e60641  lbu         $a2, 0x641($a3)
    ctx->pc = 0x2b6510u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1601)));
    // 0x2b6514: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2b6514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2b6518: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x2b6518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x2b651c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2b651cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2b6520: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b6524: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2b6524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2b6528: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2b6528u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2b652c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2b652cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b6530: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2b6530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2b6534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2b6534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6538: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2b6538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2b653c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B653Cu;
    {
        const bool branch_taken_0x2b653c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b653c) {
            ctx->pc = 0x2B6558u;
            goto label_2b6558;
        }
    }
    ctx->pc = 0x2B6544u;
    // 0x2b6544: 0x0  nop
    ctx->pc = 0x2b6544u;
    // NOP
label_2b6548:
    // 0x2b6548: 0x9483082a  lhu         $v1, 0x82A($a0)
    ctx->pc = 0x2b6548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2090)));
    // 0x2b654c: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2b654cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2b6550: 0xa483082a  sh          $v1, 0x82A($a0)
    ctx->pc = 0x2b6550u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x2b6554: 0x0  nop
    ctx->pc = 0x2b6554u;
    // NOP
label_2b6558:
    // 0x2b6558: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6560u;
}
