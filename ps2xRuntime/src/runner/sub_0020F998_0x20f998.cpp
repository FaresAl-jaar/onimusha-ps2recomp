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

// Function: sub_0020F998
// Address: 0x20f998 - 0x20fa00
void sub_0020F998_0x20f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F998_0x20f998");
#endif

    switch (ctx->pc) {
        case 0x20f9d8u: goto label_20f9d8;
        case 0x20f9e8u: goto label_20f9e8;
        default: break;
    }

    ctx->pc = 0x20f998u;

    // 0x20f998: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20f998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20f99c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f99cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f9a0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f9a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20f9a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f9ac: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20f9b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f9b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f9b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f9bc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x20f9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9c0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x20f9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f9c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9c8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20f9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20f9d0: 0xc084990  jal         func_212640
    ctx->pc = 0x20F9D0u;
    SET_GPR_U32(ctx, 31, 0x20F9D8u);
    ctx->pc = 0x20F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9D0u;
    // 0x20f9d4: 0x26101338  addiu       $s0, $s0, 0x1338 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x20F9D0u, 0x20F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9D8u;
label_20f9d8:
    // 0x20f9d8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x20f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x20f9dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f9e0: 0xc084996  jal         func_212658
    ctx->pc = 0x20F9E0u;
    SET_GPR_U32(ctx, 31, 0x20F9E8u);
    ctx->pc = 0x20F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F9E0u;
    // 0x20f9e4: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x20F9E0u, 0x20F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F9E8u;
label_20f9e8:
    // 0x20f9e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f9ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f9f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f9f4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20F9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F9F8u;
        // 0x20f9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20FA00u;
}
