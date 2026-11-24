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

// Function: sub_00254100
// Address: 0x254100 - 0x25417c
void sub_00254100_0x254100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254100_0x254100");
#endif

    switch (ctx->pc) {
        case 0x25411cu: goto label_25411c;
        case 0x25412cu: goto label_25412c;
        case 0x254138u: goto label_254138;
        case 0x254154u: goto label_254154;
        case 0x254168u: goto label_254168;
        default: break;
    }

    ctx->pc = 0x254100u;

    // 0x254100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254104: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x254104u;
    {
        const bool branch_taken_0x254104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x254108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254104u;
        // 0x254108: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254104) {
            ctx->pc = 0x254160u;
            goto label_254160;
        }
    }
    ctx->pc = 0x25410Cu;
    // 0x25410c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x25410cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x254110: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x254110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x254114: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x254114u;
    SET_GPR_U32(ctx, 31, 0x25411Cu);
    ctx->pc = 0x254118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254114u;
    // 0x254118: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x254114u, 0x25411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25411Cu;
label_25411c:
    // 0x25411c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x25411cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x254120: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x254120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x254124: 0xc04ca14  jal         func_132850
    ctx->pc = 0x254124u;
    SET_GPR_U32(ctx, 31, 0x25412Cu);
    ctx->pc = 0x254128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254124u;
    // 0x254128: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x254124u, 0x25412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25412Cu;
label_25412c:
    // 0x25412c: 0x24040ec4  addiu       $a0, $zero, 0xEC4
    ctx->pc = 0x25412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3780));
    // 0x254130: 0xc0c70c8  jal         func_31C320
    ctx->pc = 0x254130u;
    SET_GPR_U32(ctx, 31, 0x254138u);
    ctx->pc = 0x254134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254130u;
    // 0x254134: 0xaf80883c  sw          $zero, -0x77C4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936636), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C320u, 0x254130u, 0x254138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254138u;
label_254138:
    // 0x254138: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x254138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
    // 0x25413c: 0x3c070025  lui         $a3, 0x25
    ctx->pc = 0x25413cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)37 << 16));
    // 0x254140: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x254140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254144: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x254144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x254148: 0x24c64180  addiu       $a2, $a2, 0x4180
    ctx->pc = 0x254148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16768));
    // 0x25414c: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x25414Cu;
    SET_GPR_U32(ctx, 31, 0x254154u);
    ctx->pc = 0x254150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25414Cu;
    // 0x254150: 0x24e741c0  addiu       $a3, $a3, 0x41C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x25414Cu, 0x254154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254154u;
label_254154:
    // 0x254154: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254154u;
    {
        const bool branch_taken_0x254154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254154u;
        // 0x254158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254154) {
            ctx->pc = 0x254170u;
            goto label_254170;
        }
    }
    ctx->pc = 0x25415Cu;
    // 0x25415c: 0x0  nop
    ctx->pc = 0x25415cu;
    // NOP
label_254160:
    // 0x254160: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x254160u;
    SET_GPR_U32(ctx, 31, 0x254168u);
    ctx->pc = 0x254164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254160u;
    // 0x254164: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x254160u, 0x254168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254168u;
label_254168:
    // 0x254168: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x254168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25416c: 0x0  nop
    ctx->pc = 0x25416cu;
    // NOP
label_254170:
    // 0x254170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254174: 0x3e00008  jr          $ra
    ctx->pc = 0x254174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254174u;
        // 0x254178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25417Cu;
}
