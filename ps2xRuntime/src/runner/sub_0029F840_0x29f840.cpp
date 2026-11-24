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

// Function: sub_0029F840
// Address: 0x29f840 - 0x29f8a0
void sub_0029F840_0x29f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F840_0x29f840");
#endif

    switch (ctx->pc) {
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        default: break;
    }

    ctx->pc = 0x29f840u;

label_29f840:
    // 0x29f840: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29f844:
    // 0x29f844: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29f844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29f848:
    // 0x29f848: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29f848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29f84c:
    // 0x29f84c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29f84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29f850:
    // 0x29f850: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f854:
    // 0x29f854: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29f858:
    // 0x29f858: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29f858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f85c:
    // 0x29f85c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29f85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29f860:
    // 0x29f860: 0x8c91007c  lw          $s1, 0x7C($a0)
    ctx->pc = 0x29f860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_29f864:
    // 0x29f864: 0x94900068  lhu         $s0, 0x68($a0)
    ctx->pc = 0x29f864u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
label_29f868:
    // 0x29f868: 0x96620068  lhu         $v0, 0x68($s3)
    ctx->pc = 0x29f868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 104)));
label_29f86c:
    // 0x29f86c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f870:
    // 0x29f870: 0x240f809  jalr        $s2
label_29f874:
    if (ctx->pc == 0x29F874u) {
        ctx->pc = 0x29F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F870u;
        // 0x29f874: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F878u;
        goto label_29f878;
    }
    ctx->pc = 0x29F870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x29F878u);
        ctx->pc = 0x29F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F870u;
        // 0x29f874: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F870u, 0x29F878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F878u;
label_29f878:
    // 0x29f878: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29f878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29f87c:
    // 0x29f87c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_29f880:
    if (ctx->pc == 0x29F880u) {
        ctx->pc = 0x29F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F87Cu;
        // 0x29f880: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F884u;
        goto label_29f884;
    }
    ctx->pc = 0x29F87Cu;
    {
        const bool branch_taken_0x29f87c = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x29F880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F87Cu;
        // 0x29f880: 0x263101f0  addiu       $s1, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f87c) {
            ctx->pc = 0x29F868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29f868;
        }
    }
    ctx->pc = 0x29F884u;
label_29f884:
    // 0x29f884: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29f884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29f888:
    // 0x29f888: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29f888u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29f88c:
    // 0x29f88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29f88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29f890:
    // 0x29f890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29f890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29f894:
    // 0x29f894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29f894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29f898:
    // 0x29f898: 0x3e00008  jr          $ra
label_29f89c:
    if (ctx->pc == 0x29F89Cu) {
        ctx->pc = 0x29F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F898u;
        // 0x29f89c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F8A0u;
        goto label_fallthrough_0x29f898;
    }
    ctx->pc = 0x29F898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F898u;
        // 0x29f89c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f898:
    ctx->pc = 0x29F8A0u;
}
