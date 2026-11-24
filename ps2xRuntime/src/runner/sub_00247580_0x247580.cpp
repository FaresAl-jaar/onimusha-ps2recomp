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

// Function: sub_00247580
// Address: 0x247580 - 0x2475cc
void sub_00247580_0x247580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247580_0x247580");
#endif

    switch (ctx->pc) {
        case 0x2475c0u: goto label_2475c0;
        default: break;
    }

    ctx->pc = 0x247580u;

    // 0x247580: 0x3c070088  lui         $a3, 0x88
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)136 << 16));
    // 0x247584: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247588: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x247588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x24758c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247590: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247594: 0x3c090088  lui         $t1, 0x88
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)136 << 16));
    // 0x247598: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x247598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x886280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x886280u, _value); } while (0);
    // 0x24759c: 0x2444fac0  addiu       $a0, $v0, -0x540
    ctx->pc = 0x24759cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965952));
    // 0x2475a0: 0x25296380  addiu       $t1, $t1, 0x6380
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25472));
    // 0x2475a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2475a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2475a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2475a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475ac: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2475acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2475b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2475b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2475b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2475b8: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x2475B8u;
    SET_GPR_U32(ctx, 31, 0x2475C0u);
    ctx->pc = 0x2475BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2475B8u;
    // 0x2475bc: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x2475B8u, 0x2475C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2475C0u;
label_2475c0:
    // 0x2475c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2475c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2475c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2475C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2475C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2475C4u;
        // 0x2475c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2475C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2475CCu;
}
