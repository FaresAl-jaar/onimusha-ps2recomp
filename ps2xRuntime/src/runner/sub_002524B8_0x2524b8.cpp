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

// Function: sub_002524B8
// Address: 0x2524b8 - 0x252508
void sub_002524B8_0x2524b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002524B8_0x2524b8");
#endif

    switch (ctx->pc) {
        case 0x2524f4u: goto label_2524f4;
        default: break;
    }

    ctx->pc = 0x2524b8u;

    // 0x2524b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2524bc: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2524bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x2524c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2524c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2524c4: 0x3c100089  lui         $s0, 0x89
    ctx->pc = 0x2524c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)137 << 16));
    // 0x2524c8: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x2524c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x2524cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2524ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2524d0: 0x261085c0  addiu       $s0, $s0, -0x7A40
    ctx->pc = 0x2524d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936000));
    // 0x2524d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2524d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8884C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C0u, _value); } while (0);
    // 0x2524d8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2524d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8884C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8884C4u, _value); } while (0);
    // 0x2524dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2524dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2524e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2524e4: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x2524e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2524e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2524e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2524ec: 0xc091ee6  jal         func_247B98
    ctx->pc = 0x2524ECu;
    SET_GPR_U32(ctx, 31, 0x2524F4u);
    ctx->pc = 0x2524F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2524ECu;
    // 0x2524f0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B98u, 0x2524ECu, 0x2524F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524F4u;
label_2524f4:
    // 0x2524f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2524f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2524f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2524f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2524fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2524fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252500: 0x3e00008  jr          $ra
    ctx->pc = 0x252500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252500u;
        // 0x252504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252508u;
}
