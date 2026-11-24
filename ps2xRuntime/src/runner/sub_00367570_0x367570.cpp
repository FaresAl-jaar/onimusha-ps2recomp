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

// Function: sub_00367570
// Address: 0x367570 - 0x3675b4
void sub_00367570_0x367570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367570_0x367570");
#endif

    switch (ctx->pc) {
        case 0x367584u: goto label_367584;
        case 0x36758cu: goto label_36758c;
        case 0x36759cu: goto label_36759c;
        case 0x3675a4u: goto label_3675a4;
        default: break;
    }

    ctx->pc = 0x367570u;

    // 0x367570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x367570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367578: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x367578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36757c: 0xc0d9d70  jal         func_3675C0
    ctx->pc = 0x36757Cu;
    SET_GPR_U32(ctx, 31, 0x367584u);
    ctx->pc = 0x367580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36757Cu;
    // 0x367580: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3675C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3675C0u, 0x36757Cu, 0x367584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367584u;
label_367584:
    // 0x367584: 0xc0d9e14  jal         func_367850
    ctx->pc = 0x367584u;
    SET_GPR_U32(ctx, 31, 0x36758Cu);
    ctx->pc = 0x367588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367584u;
    // 0x367588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367850u, 0x367584u, 0x36758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36758Cu;
label_36758c:
    // 0x36758c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36758cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x367590: 0x3405fff5  ori         $a1, $zero, 0xFFF5
    ctx->pc = 0x367590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x367594: 0xc0cec34  jal         func_33B0D0
    ctx->pc = 0x367594u;
    SET_GPR_U32(ctx, 31, 0x36759Cu);
    ctx->pc = 0x367598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367594u;
    // 0x367598: 0x248440c0  addiu       $a0, $a0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B0D0u, 0x367594u, 0x36759Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36759Cu;
label_36759c:
    // 0x36759c: 0xc0dc864  jal         func_372190
    ctx->pc = 0x36759Cu;
    SET_GPR_U32(ctx, 31, 0x3675A4u);
    ctx->pc = 0x3675A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36759Cu;
    // 0x3675a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372190u, 0x36759Cu, 0x3675A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675A4u;
label_3675a4:
    // 0x3675a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3675a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3675a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3675a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3675ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3675ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3675B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3675ACu;
        // 0x3675b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3675ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3675B4u;
}
