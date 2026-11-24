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

// Function: sub_0037E420
// Address: 0x37e420 - 0x37e478
void sub_0037E420_0x37e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E420_0x37e420");
#endif

    switch (ctx->pc) {
        case 0x37e444u: goto label_37e444;
        default: break;
    }

    ctx->pc = 0x37e420u;

    // 0x37e420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37e424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37e424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37e428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37e42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37e42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37e430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37e430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37e434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e43c: 0xc0defa0  jal         func_37BE80
    ctx->pc = 0x37E43Cu;
    SET_GPR_U32(ctx, 31, 0x37E444u);
    ctx->pc = 0x37E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E43Cu;
    // 0x37e440: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BE80u, 0x37E43Cu, 0x37E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E444u;
label_37e444:
    // 0x37e444: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x37e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x37e448: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x37e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x37e44c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x37e44cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e450: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37e450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x37e454: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x37e454u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x37e458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e45c: 0x0  nop
    ctx->pc = 0x37e45cu;
    // NOP
    // 0x37e460: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x37e460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x37e464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37e464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37e468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37e46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e470: 0x3e00008  jr          $ra
    ctx->pc = 0x37E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E470u;
        // 0x37e474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E478u;
}
