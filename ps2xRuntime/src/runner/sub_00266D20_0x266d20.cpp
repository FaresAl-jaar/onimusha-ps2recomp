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

// Function: sub_00266D20
// Address: 0x266d20 - 0x266d94
void sub_00266D20_0x266d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266D20_0x266d20");
#endif

    switch (ctx->pc) {
        case 0x266d50u: goto label_266d50;
        case 0x266d80u: goto label_266d80;
        default: break;
    }

    ctx->pc = 0x266d20u;

    // 0x266d20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x266d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x266d24: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x266d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x266d28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x266d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x266d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x266d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x266d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x266d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d38: 0x12230011  beq         $s1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x266D38u;
    {
        const bool branch_taken_0x266d38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x266D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D38u;
        // 0x266d3c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d38) {
            ctx->pc = 0x266D80u;
            goto label_266d80;
        }
    }
    ctx->pc = 0x266D40u;
    // 0x266d40: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x266d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x266d44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d48: 0xc049590  jal         func_125640
    ctx->pc = 0x266D48u;
    SET_GPR_U32(ctx, 31, 0x266D50u);
    ctx->pc = 0x266D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D48u;
    // 0x266d4c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x266D48u, 0x266D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D50u;
label_266d50:
    // 0x266d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266d54: 0xafb10030  sw          $s1, 0x30($sp)
    ctx->pc = 0x266d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
    // 0x266d58: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266D58u;
    {
        const bool branch_taken_0x266d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D58u;
        // 0x266d5c: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d58) {
            ctx->pc = 0x266D68u;
            goto label_266d68;
        }
    }
    ctx->pc = 0x266D60u;
    // 0x266d60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266D60u;
    {
        const bool branch_taken_0x266d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D60u;
        // 0x266d64: 0xa7a2003e  sh          $v0, 0x3E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d60) {
            ctx->pc = 0x266D70u;
            goto label_266d70;
        }
    }
    ctx->pc = 0x266D68u;
label_266d68:
    // 0x266d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x266d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x266d6c: 0xa7a2003e  sh          $v0, 0x3E($sp)
    ctx->pc = 0x266d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 62), (uint16_t)GPR_U32(ctx, 2));
label_266d70:
    // 0x266d70: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x266d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x266d74: 0x24846710  addiu       $a0, $a0, 0x6710
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26384));
    // 0x266d78: 0xc04f7dc  jal         func_13DF70
    ctx->pc = 0x266D78u;
    SET_GPR_U32(ctx, 31, 0x266D80u);
    ctx->pc = 0x266D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266D78u;
    // 0x266d7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF70u, 0x266D78u, 0x266D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D80u;
label_266d80:
    // 0x266d80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x266d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x266d84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266d84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x266D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D8Cu;
        // 0x266d90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D94u;
}
