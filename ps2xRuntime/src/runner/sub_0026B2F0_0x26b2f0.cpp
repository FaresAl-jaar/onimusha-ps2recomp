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

// Function: sub_0026B2F0
// Address: 0x26b2f0 - 0x26b364
void sub_0026B2F0_0x26b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B2F0_0x26b2f0");
#endif

    switch (ctx->pc) {
        case 0x26b330u: goto label_26b330;
        case 0x26b340u: goto label_26b340;
        case 0x26b350u: goto label_26b350;
        default: break;
    }

    ctx->pc = 0x26b2f0u;

    // 0x26b2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26b2f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26b2f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26b2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b300: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x26b300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x26b304: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26B304u;
    {
        const bool branch_taken_0x26b304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B304u;
        // 0x26b308: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b304) {
            ctx->pc = 0x26B348u;
            goto label_26b348;
        }
    }
    ctx->pc = 0x26B30Cu;
    // 0x26b30c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b310: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26B310u;
    {
        const bool branch_taken_0x26b310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b310) {
            ctx->pc = 0x26B338u;
            goto label_26b338;
        }
    }
    ctx->pc = 0x26B318u;
    // 0x26b318: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B318u;
    {
        const bool branch_taken_0x26b318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b318) {
            ctx->pc = 0x26B328u;
            goto label_26b328;
        }
    }
    ctx->pc = 0x26B320u;
    // 0x26b320: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26B320u;
    {
        const bool branch_taken_0x26b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b320) {
            ctx->pc = 0x26B350u;
            goto label_26b350;
        }
    }
    ctx->pc = 0x26B328u;
label_26b328:
    // 0x26b328: 0xc09ace0  jal         func_26B380
    ctx->pc = 0x26B328u;
    SET_GPR_U32(ctx, 31, 0x26B330u);
    ctx->pc = 0x26B380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B380u, 0x26B328u, 0x26B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B330u;
label_26b330:
    // 0x26b330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26B330u;
    {
        const bool branch_taken_0x26b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b330) {
            ctx->pc = 0x26B350u;
            goto label_26b350;
        }
    }
    ctx->pc = 0x26B338u;
label_26b338:
    // 0x26b338: 0xc09ad6c  jal         func_26B5B0
    ctx->pc = 0x26B338u;
    SET_GPR_U32(ctx, 31, 0x26B340u);
    ctx->pc = 0x26B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B5B0u, 0x26B338u, 0x26B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B340u;
label_26b340:
    // 0x26b340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26B340u;
    {
        const bool branch_taken_0x26b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b340) {
            ctx->pc = 0x26B350u;
            goto label_26b350;
        }
    }
    ctx->pc = 0x26B348u;
label_26b348:
    // 0x26b348: 0xc09adc0  jal         func_26B700
    ctx->pc = 0x26B348u;
    SET_GPR_U32(ctx, 31, 0x26B350u);
    ctx->pc = 0x26B700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B700u, 0x26B348u, 0x26B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B350u;
label_26b350:
    // 0x26b350: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x26b350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26b354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26b354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B35Cu;
        // 0x26b360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B364u;
}
