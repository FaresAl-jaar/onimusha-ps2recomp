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

// Function: sub_00139AA0
// Address: 0x139aa0 - 0x139afc
void sub_00139AA0_0x139aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139AA0_0x139aa0");
#endif

    switch (ctx->pc) {
        case 0x139ac4u: goto label_139ac4;
        case 0x139ad8u: goto label_139ad8;
        default: break;
    }

    ctx->pc = 0x139aa0u;

    // 0x139aa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x139aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x139aa4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x139aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x139aa8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139aac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139ab0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x139ab0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139ab8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x139ab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139abc: 0xc04e6e8  jal         func_139BA0
    ctx->pc = 0x139ABCu;
    SET_GPR_U32(ctx, 31, 0x139AC4u);
    ctx->pc = 0x139AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139ABCu;
    // 0x139ac0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139BA0u, 0x139ABCu, 0x139AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AC4u;
label_139ac4:
    // 0x139ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139AC4u;
    {
        const bool branch_taken_0x139ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AC4u;
        // 0x139ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ac4) {
            ctx->pc = 0x139AE0u;
            goto label_139ae0;
        }
    }
    ctx->pc = 0x139ACCu;
    // 0x139acc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ad0: 0xc04e6c0  jal         func_139B00
    ctx->pc = 0x139AD0u;
    SET_GPR_U32(ctx, 31, 0x139AD8u);
    ctx->pc = 0x139AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139AD0u;
    // 0x139ad4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139B00u, 0x139AD0u, 0x139AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AD8u;
label_139ad8:
    // 0x139ad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139AD8u;
    {
        const bool branch_taken_0x139ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AD8u;
        // 0x139adc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ad8) {
            ctx->pc = 0x139AE8u;
            goto label_139ae8;
        }
    }
    ctx->pc = 0x139AE0u;
label_139ae0:
    // 0x139ae0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ae4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_139ae8:
    // 0x139ae8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139ae8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139aec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139af0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139af0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139af4: 0x3e00008  jr          $ra
    ctx->pc = 0x139AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139AF4u;
        // 0x139af8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139AFCu;
}
