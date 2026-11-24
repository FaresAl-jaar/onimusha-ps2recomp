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

// Function: sub_00100380
// Address: 0x100380 - 0x1003ec
void sub_00100380_0x100380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100380_0x100380");
#endif

    switch (ctx->pc) {
        case 0x100380u: goto label_100380;
        case 0x100384u: goto label_100384;
        case 0x100388u: goto label_100388;
        case 0x10038cu: goto label_10038c;
        case 0x100390u: goto label_100390;
        case 0x100394u: goto label_100394;
        case 0x100398u: goto label_100398;
        case 0x10039cu: goto label_10039c;
        case 0x1003a0u: goto label_1003a0;
        case 0x1003a4u: goto label_1003a4;
        case 0x1003a8u: goto label_1003a8;
        case 0x1003acu: goto label_1003ac;
        case 0x1003b0u: goto label_1003b0;
        case 0x1003b4u: goto label_1003b4;
        case 0x1003b8u: goto label_1003b8;
        case 0x1003bcu: goto label_1003bc;
        case 0x1003c0u: goto label_1003c0;
        case 0x1003c4u: goto label_1003c4;
        case 0x1003c8u: goto label_1003c8;
        case 0x1003ccu: goto label_1003cc;
        case 0x1003d0u: goto label_1003d0;
        case 0x1003d4u: goto label_1003d4;
        case 0x1003d8u: goto label_1003d8;
        case 0x1003dcu: goto label_1003dc;
        case 0x1003e0u: goto label_1003e0;
        case 0x1003e4u: goto label_1003e4;
        case 0x1003e8u: goto label_1003e8;
        default: break;
    }

    ctx->pc = 0x100380u;

label_100380:
    // 0x100380: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_100384:
    // 0x100384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_100388:
    // 0x100388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10038c:
    // 0x10038c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_100390:
    // 0x100390: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x100390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_100394:
    // 0x100394: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100398:
    // 0x100398: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x100398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10039c:
    // 0x10039c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x10039cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1003a0:
    // 0x1003a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1003a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1003a4:
    // 0x1003a4: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x1003a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1003a8:
    // 0x1003a8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1003ac:
    if (ctx->pc == 0x1003ACu) {
        ctx->pc = 0x1003ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003A8u;
        // 0x1003ac: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1003B0u;
        goto label_1003b0;
    }
    ctx->pc = 0x1003A8u;
    {
        const bool branch_taken_0x1003a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1003ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003A8u;
        // 0x1003ac: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1003a8) {
            ctx->pc = 0x1003D0u;
            goto label_1003d0;
        }
    }
    ctx->pc = 0x1003B0u;
label_1003b0:
    // 0x1003b0: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1003b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1003b4:
    // 0x1003b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1003b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1003b8:
    // 0x1003b8: 0x260f809  jalr        $s3
label_1003bc:
    if (ctx->pc == 0x1003BCu) {
        ctx->pc = 0x1003BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003B8u;
        // 0x1003bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1003C0u;
        goto label_1003c0;
    }
    ctx->pc = 0x1003B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x1003C0u);
        ctx->pc = 0x1003BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003B8u;
        // 0x1003bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1003B8u, 0x1003C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1003C0u;
label_1003c0:
    // 0x1003c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1003c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1003c4:
    // 0x1003c4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_1003c8:
    if (ctx->pc == 0x1003C8u) {
        ctx->pc = 0x1003CCu;
        goto label_1003cc;
    }
    ctx->pc = 0x1003C4u;
    {
        const bool branch_taken_0x1003c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1003c4) {
            ctx->pc = 0x1003B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1003b0;
        }
    }
    ctx->pc = 0x1003CCu;
label_1003cc:
    // 0x1003cc: 0x0  nop
    ctx->pc = 0x1003ccu;
    // NOP
label_1003d0:
    // 0x1003d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1003d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1003d4:
    // 0x1003d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1003d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1003d8:
    // 0x1003d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1003d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1003dc:
    // 0x1003dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1003dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1003e0:
    // 0x1003e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1003e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1003e4:
    // 0x1003e4: 0x3e00008  jr          $ra
label_1003e8:
    if (ctx->pc == 0x1003E8u) {
        ctx->pc = 0x1003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003E4u;
        // 0x1003e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1003ECu;
        goto label_fallthrough_0x1003e4;
    }
    ctx->pc = 0x1003E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1003E4u;
        // 0x1003e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1003E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1003e4:
    ctx->pc = 0x1003ECu;
}
