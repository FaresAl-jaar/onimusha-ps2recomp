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

// Function: sub_0032C5D0
// Address: 0x32c5d0 - 0x32c628
void sub_0032C5D0_0x32c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C5D0_0x32c5d0");
#endif

    switch (ctx->pc) {
        case 0x32c5ecu: goto label_32c5ec;
        case 0x32c600u: goto label_32c600;
        case 0x32c618u: goto label_32c618;
        default: break;
    }

    ctx->pc = 0x32c5d0u;

    // 0x32c5d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32c5d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c5d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32c5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32c5dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c5e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32c5e4: 0xc063d48  jal         func_18F520
    ctx->pc = 0x32C5E4u;
    SET_GPR_U32(ctx, 31, 0x32C5ECu);
    ctx->pc = 0x32C5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5E4u;
    // 0x32c5e8: 0x2484cbe0  addiu       $a0, $a0, -0x3420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F520u, 0x32C5E4u, 0x32C5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5ECu;
label_32c5ec:
    // 0x32c5ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32C5ECu;
    {
        const bool branch_taken_0x32c5ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5ECu;
        // 0x32c5f0: 0x3c040089  lui         $a0, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c5ec) {
            ctx->pc = 0x32C618u;
            goto label_32c618;
        }
    }
    ctx->pc = 0x32C5F4u;
    // 0x32c5f4: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x32c5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x32c5f8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x32C5F8u;
    SET_GPR_U32(ctx, 31, 0x32C600u);
    ctx->pc = 0x32C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5F8u;
    // 0x32c5fc: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x32C5F8u, 0x32C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C600u;
label_32c600:
    // 0x32c600: 0x92030005  lbu         $v1, 0x5($s0)
    ctx->pc = 0x32c600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x32c604: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x32c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32c608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c60c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x32c60cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x32c610: 0xc0cb18c  jal         func_32C630
    ctx->pc = 0x32C610u;
    SET_GPR_U32(ctx, 31, 0x32C618u);
    ctx->pc = 0x32C614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C610u;
    // 0x32c614: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C630u, 0x32C610u, 0x32C618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C618u;
label_32c618:
    // 0x32c618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c61c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32c61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c620: 0x3e00008  jr          $ra
    ctx->pc = 0x32C620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C620u;
        // 0x32c624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C628u;
}
