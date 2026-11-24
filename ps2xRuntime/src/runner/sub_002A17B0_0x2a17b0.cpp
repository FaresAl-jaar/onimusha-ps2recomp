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

// Function: sub_002A17B0
// Address: 0x2a17b0 - 0x2a180c
void sub_002A17B0_0x2a17b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A17B0_0x2a17b0");
#endif

    switch (ctx->pc) {
        case 0x2a17d8u: goto label_2a17d8;
        case 0x2a17e8u: goto label_2a17e8;
        default: break;
    }

    ctx->pc = 0x2a17b0u;

    // 0x2a17b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a17b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a17b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a17b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a17b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a17bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a17bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a17c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a17c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a17c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a17c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a17c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17cc: 0x94820068  lhu         $v0, 0x68($a0)
    ctx->pc = 0x2a17ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2a17d0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2a17d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a17d4: 0x0  nop
    ctx->pc = 0x2a17d4u;
    // NOP
label_2a17d8:
    // 0x2a17d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a17d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a17dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a17e0: 0xc0a85cc  jal         func_2A1730
    ctx->pc = 0x2A17E0u;
    SET_GPR_U32(ctx, 31, 0x2A17E8u);
    ctx->pc = 0x2A17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A17E0u;
    // 0x2a17e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1730u, 0x2A17E0u, 0x2A17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A17E8u;
label_2a17e8:
    // 0x2a17e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2a17e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2a17ec: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2A17ECu;
    {
        const bool branch_taken_0x2a17ec = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x2a17ec) {
            ctx->pc = 0x2A17D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a17d8;
        }
    }
    ctx->pc = 0x2A17F4u;
    // 0x2a17f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a17f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a17f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a17fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a17fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1804: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1804u;
        // 0x2a1808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A180Cu;
}
