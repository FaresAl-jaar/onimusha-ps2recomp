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

// Function: sub_0020F928
// Address: 0x20f928 - 0x20f998
void sub_0020F928_0x20f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F928_0x20f928");
#endif

    switch (ctx->pc) {
        case 0x20f968u: goto label_20f968;
        case 0x20f980u: goto label_20f980;
        default: break;
    }

    ctx->pc = 0x20f928u;

    // 0x20f928: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x20f928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x20f92c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f92cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f930: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20f930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f934: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20f938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f93c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20f940: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20f944: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20f948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f94c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20f94cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f950: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x20f950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f958: 0x26101338  addiu       $s0, $s0, 0x1338
    ctx->pc = 0x20f958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4920));
    // 0x20f95c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20f95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20f960: 0xc084990  jal         func_212640
    ctx->pc = 0x20F960u;
    SET_GPR_U32(ctx, 31, 0x20F968u);
    ctx->pc = 0x20F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F960u;
    // 0x20f964: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x20F960u, 0x20F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F968u;
label_20f968:
    // 0x20f968: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20f96c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f970: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x20f970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x20f974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20f978: 0xc084996  jal         func_212658
    ctx->pc = 0x20F978u;
    SET_GPR_U32(ctx, 31, 0x20F980u);
    ctx->pc = 0x20F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F978u;
    // 0x20f97c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x20F978u, 0x20F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F980u;
label_20f980:
    // 0x20f980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f984: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20f984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f988: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20f988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20f98c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20f98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20f990: 0x3e00008  jr          $ra
    ctx->pc = 0x20F990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F990u;
        // 0x20f994: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F998u;
}
