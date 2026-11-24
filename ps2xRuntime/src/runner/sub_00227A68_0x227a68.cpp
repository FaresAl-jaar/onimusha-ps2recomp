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

// Function: sub_00227A68
// Address: 0x227a68 - 0x227ad0
void sub_00227A68_0x227a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227A68_0x227a68");
#endif

    switch (ctx->pc) {
        case 0x227a98u: goto label_227a98;
        case 0x227abcu: goto label_227abc;
        default: break;
    }

    ctx->pc = 0x227a68u;

    // 0x227a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227a6c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x227a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x227a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x227a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227a78: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227A78u;
    {
        const bool branch_taken_0x227a78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A78u;
        // 0x227a7c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a78) {
            ctx->pc = 0x227A88u;
            goto label_227a88;
        }
    }
    ctx->pc = 0x227A80u;
    // 0x227a80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227A80u;
    {
        const bool branch_taken_0x227a80 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x227a80) {
            ctx->pc = 0x227A90u;
            goto label_227a90;
        }
    }
    ctx->pc = 0x227A88u;
label_227a88:
    // 0x227a88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x227A88u;
    {
        const bool branch_taken_0x227a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227A88u;
        // 0x227a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227a88) {
            ctx->pc = 0x227AC0u;
            goto label_227ac0;
        }
    }
    ctx->pc = 0x227A90u;
label_227a90:
    // 0x227a90: 0xc089e2c  jal         func_2278B0
    ctx->pc = 0x227A90u;
    SET_GPR_U32(ctx, 31, 0x227A98u);
    ctx->pc = 0x2278B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2278B0u, 0x227A90u, 0x227A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227A98u;
label_227a98:
    // 0x227a98: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x227a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x227a9c: 0x2c430002  sltiu       $v1, $v0, 0x2
    ctx->pc = 0x227a9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x227aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x227aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227aa4: 0x26040016  addiu       $a0, $s0, 0x16
    ctx->pc = 0x227aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x227aa8: 0x24a59560  addiu       $a1, $a1, -0x6AA0
    ctx->pc = 0x227aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940000));
    // 0x227aac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227AACu;
    {
        const bool branch_taken_0x227aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x227AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AACu;
        // 0x227ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aac) {
            ctx->pc = 0x227AC0u;
            goto label_227ac0;
        }
    }
    ctx->pc = 0x227AB4u;
    // 0x227ab4: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x227AB4u;
    SET_GPR_U32(ctx, 31, 0x227ABCu);
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x227AB4u, 0x227ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227ABCu;
label_227abc:
    // 0x227abc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x227abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_227ac0:
    // 0x227ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227ac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x227AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AC8u;
        // 0x227acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227AD0u;
}
