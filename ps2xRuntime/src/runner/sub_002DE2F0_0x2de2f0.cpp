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

// Function: sub_002DE2F0
// Address: 0x2de2f0 - 0x2de340
void sub_002DE2F0_0x2de2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2F0_0x2de2f0");
#endif

    switch (ctx->pc) {
        case 0x2de320u: goto label_2de320;
        case 0x2de32cu: goto label_2de32c;
        default: break;
    }

    ctx->pc = 0x2de2f0u;

    // 0x2de2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2de2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2de2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2de2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2de300: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2de300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de304: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE304u;
    {
        const bool branch_taken_0x2de304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE304u;
        // 0x2de308: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de304) {
            ctx->pc = 0x2DE320u;
            goto label_2de320;
        }
    }
    ctx->pc = 0x2DE30Cu;
    // 0x2de30c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2de30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2de310: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE310u;
    {
        const bool branch_taken_0x2de310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de310) {
            ctx->pc = 0x2DE320u;
            goto label_2de320;
        }
    }
    ctx->pc = 0x2DE318u;
    // 0x2de318: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x2DE318u;
    SET_GPR_U32(ctx, 31, 0x2DE320u);
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x2DE318u, 0x2DE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE320u;
label_2de320:
    // 0x2de320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de324: 0xc0b78ec  jal         func_2DE3B0
    ctx->pc = 0x2DE324u;
    SET_GPR_U32(ctx, 31, 0x2DE32Cu);
    ctx->pc = 0x2DE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE324u;
    // 0x2de328: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE3B0u, 0x2DE324u, 0x2DE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE32Cu;
label_2de32c:
    // 0x2de32c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2de330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2de334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de338: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE338u;
        // 0x2de33c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE340u;
}
