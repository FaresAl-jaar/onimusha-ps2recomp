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

// Function: sub_00150770
// Address: 0x150770 - 0x150814
void sub_00150770_0x150770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150770_0x150770");
#endif

    switch (ctx->pc) {
        case 0x1507ccu: goto label_1507cc;
        case 0x1507e4u: goto label_1507e4;
        case 0x150808u: goto label_150808;
        default: break;
    }

    ctx->pc = 0x150770u;

    // 0x150770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150774: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15077c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15077cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150780: 0x90246ac0  lbu         $a0, 0x6AC0($at)
    ctx->pc = 0x150780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x7E6AC0u));
    // 0x150784: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x150784u;
    {
        const bool branch_taken_0x150784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x150788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150784u;
        // 0x150788: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150784) {
            ctx->pc = 0x150808u;
            goto label_150808;
        }
    }
    ctx->pc = 0x15078Cu;
    // 0x15078c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15078Cu;
    {
        const bool branch_taken_0x15078c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15078c) {
            ctx->pc = 0x1507D8u;
            goto label_1507d8;
        }
    }
    ctx->pc = 0x150794u;
    // 0x150794: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x150794u;
    {
        const bool branch_taken_0x150794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x150794) {
            ctx->pc = 0x1507A8u;
            goto label_1507a8;
        }
    }
    ctx->pc = 0x15079Cu;
    // 0x15079c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15079Cu;
    {
        const bool branch_taken_0x15079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15079c) {
            ctx->pc = 0x150808u;
            goto label_150808;
        }
    }
    ctx->pc = 0x1507A4u;
    // 0x1507a4: 0x0  nop
    ctx->pc = 0x1507a4u;
    // NOP
label_1507a8:
    // 0x1507a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1507a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1507ac: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1507acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1507b0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1507b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1507b4: 0xa0226ac0  sb          $v0, 0x6AC0($at)
    ctx->pc = 0x1507b4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E6AC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7E6AC0u, _value); } while (0);
    // 0x1507b8: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x1507b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x1507bc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1507c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1507c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507c4: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x1507C4u;
    SET_GPR_U32(ctx, 31, 0x1507CCu);
    ctx->pc = 0x1507C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507C4u;
    // 0x1507c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x1507C4u, 0x1507CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507CCu;
label_1507cc:
    // 0x1507cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1507CCu;
    {
        const bool branch_taken_0x1507cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507cc) {
            ctx->pc = 0x150808u;
            goto label_150808;
        }
    }
    ctx->pc = 0x1507D4u;
    // 0x1507d4: 0x0  nop
    ctx->pc = 0x1507d4u;
    // NOP
label_1507d8:
    // 0x1507d8: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x1507d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x1507dc: 0xc0bd474  jal         func_2F51D0
    ctx->pc = 0x1507DCu;
    SET_GPR_U32(ctx, 31, 0x1507E4u);
    ctx->pc = 0x1507E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1507DCu;
    // 0x1507e0: 0x2484e000  addiu       $a0, $a0, -0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F51D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F51D0u, 0x1507DCu, 0x1507E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1507E4u;
label_1507e4:
    // 0x1507e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1507E4u;
    {
        const bool branch_taken_0x1507e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1507E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1507E4u;
        // 0x1507e8: 0x3c01007e  lui         $at, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1507e4) {
            ctx->pc = 0x150808u;
            goto label_150808;
        }
    }
    ctx->pc = 0x1507ECu;
    // 0x1507ec: 0x24040e80  addiu       $a0, $zero, 0xE80
    ctx->pc = 0x1507ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3712));
    // 0x1507f0: 0x90226ac0  lbu         $v0, 0x6AC0($at)
    ctx->pc = 0x1507f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27328)));
    // 0x1507f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1507f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1507f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1507f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1507fc: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1507fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x150800: 0xc054048  jal         func_150120
    ctx->pc = 0x150800u;
    SET_GPR_U32(ctx, 31, 0x150808u);
    ctx->pc = 0x150804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150800u;
    // 0x150804: 0xa0226ac0  sb          $v0, 0x6AC0($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 27328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150120u, 0x150800u, 0x150808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150808u;
label_150808:
    // 0x150808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15080c: 0x3e00008  jr          $ra
    ctx->pc = 0x15080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15080Cu;
        // 0x150810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150814u;
}
