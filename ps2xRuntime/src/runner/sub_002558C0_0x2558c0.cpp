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

// Function: sub_002558C0
// Address: 0x2558c0 - 0x25592c
void sub_002558C0_0x2558c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002558C0_0x2558c0");
#endif

    switch (ctx->pc) {
        case 0x255900u: goto label_255900;
        case 0x255918u: goto label_255918;
        default: break;
    }

    ctx->pc = 0x2558c0u;

    // 0x2558c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2558c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2558c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2558c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2558c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2558c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2558cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2558ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2558d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2558d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2558d4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2558d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2558d8: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x2558d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x2558dc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2558DCu;
    {
        const bool branch_taken_0x2558dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558DCu;
        // 0x2558e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558dc) {
            ctx->pc = 0x2558F8u;
            goto label_2558f8;
        }
    }
    ctx->pc = 0x2558E4u;
    // 0x2558e4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2558e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2558e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2558e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2558ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2558ECu;
    {
        const bool branch_taken_0x2558ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2558F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2558ECu;
        // 0x2558f0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2558ec) {
            ctx->pc = 0x255910u;
            goto label_255910;
        }
    }
    ctx->pc = 0x2558F4u;
    // 0x2558f4: 0x0  nop
    ctx->pc = 0x2558f4u;
    // NOP
label_2558f8:
    // 0x2558f8: 0xc095f80  jal         func_257E00
    ctx->pc = 0x2558F8u;
    SET_GPR_U32(ctx, 31, 0x255900u);
    ctx->pc = 0x257E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E00u, 0x2558F8u, 0x255900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255900u;
label_255900:
    // 0x255900: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x255900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x255904: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x255904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255908: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x255908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25590c: 0x0  nop
    ctx->pc = 0x25590cu;
    // NOP
label_255910:
    // 0x255910: 0xc095618  jal         func_255860
    ctx->pc = 0x255910u;
    SET_GPR_U32(ctx, 31, 0x255918u);
    ctx->pc = 0x255914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255910u;
    // 0x255914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255860u, 0x255910u, 0x255918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255918u;
label_255918:
    // 0x255918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x255918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25591c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25591cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x255920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255924: 0x3e00008  jr          $ra
    ctx->pc = 0x255924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255924u;
        // 0x255928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25592Cu;
}
