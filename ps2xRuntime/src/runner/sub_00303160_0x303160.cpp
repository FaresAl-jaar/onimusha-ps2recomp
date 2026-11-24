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

// Function: sub_00303160
// Address: 0x303160 - 0x3031a4
void sub_00303160_0x303160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303160_0x303160");
#endif

    switch (ctx->pc) {
        case 0x30317cu: goto label_30317c;
        case 0x303194u: goto label_303194;
        default: break;
    }

    ctx->pc = 0x303160u;

    // 0x303160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x303164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x303168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30316c: 0x24061c00  addiu       $a2, $zero, 0x1C00
    ctx->pc = 0x30316cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x303170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303174: 0xc049590  jal         func_125640
    ctx->pc = 0x303174u;
    SET_GPR_U32(ctx, 31, 0x30317Cu);
    ctx->pc = 0x303178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303174u;
    // 0x303178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x303174u, 0x30317Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30317Cu;
label_30317c:
    // 0x30317c: 0xae001c00  sw          $zero, 0x1C00($s0)
    ctx->pc = 0x30317cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7168), GPR_U32(ctx, 0));
    // 0x303180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x303180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303184: 0xae001d08  sw          $zero, 0x1D08($s0)
    ctx->pc = 0x303184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7432), GPR_U32(ctx, 0));
    // 0x303188: 0xae001d04  sw          $zero, 0x1D04($s0)
    ctx->pc = 0x303188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7428), GPR_U32(ctx, 0));
    // 0x30318c: 0xc0c0c48  jal         func_303120
    ctx->pc = 0x30318Cu;
    SET_GPR_U32(ctx, 31, 0x303194u);
    ctx->pc = 0x303190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30318Cu;
    // 0x303190: 0xa6001e0e  sh          $zero, 0x1E0E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 7694), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303120u, 0x30318Cu, 0x303194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303194u;
label_303194:
    // 0x303194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x303198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30319c: 0x3e00008  jr          $ra
    ctx->pc = 0x30319Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3031A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30319Cu;
        // 0x3031a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30319Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3031A4u;
}
