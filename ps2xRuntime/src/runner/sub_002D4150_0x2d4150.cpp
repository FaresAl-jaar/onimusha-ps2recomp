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

// Function: sub_002D4150
// Address: 0x2d4150 - 0x2d41b0
void sub_002D4150_0x2d4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4150_0x2d4150");
#endif

    switch (ctx->pc) {
        case 0x2d4194u: goto label_2d4194;
        default: break;
    }

    ctx->pc = 0x2d4150u;

    // 0x2d4150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d4154: 0x3c020410  lui         $v0, 0x410
    ctx->pc = 0x2d4154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1040 << 16));
    // 0x2d4158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d4158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d415c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d415cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d4160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d4164: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2d4164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2d4168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d4168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d416c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4170: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2d4170u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4174: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d4174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2d4178: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2d4178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2d417c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d417cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d4180: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2d4180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2d4184: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x2d4184u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x2d4188: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x2d4188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d418c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2D418Cu;
    SET_GPR_U32(ctx, 31, 0x2D4194u);
    ctx->pc = 0x2D4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D418Cu;
    // 0x2d4190: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2D418Cu, 0x2D4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4194u;
label_2d4194:
    // 0x2d4194: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2d4194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d4198: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2d4198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2d419c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d419cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d41a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d41a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d41a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d41a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d41a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D41A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D41A8u;
        // 0x2d41ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D41A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D41B0u;
}
