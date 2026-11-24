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

// Function: sub_001D0EC0
// Address: 0x1d0ec0 - 0x1d0f00
void sub_001D0EC0_0x1d0ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0EC0_0x1d0ec0");
#endif

    switch (ctx->pc) {
        case 0x1d0ed4u: goto label_1d0ed4;
        default: break;
    }

    ctx->pc = 0x1d0ec0u;

    // 0x1d0ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0ec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0ec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0ecc: 0xc074364  jal         func_1D0D90
    ctx->pc = 0x1D0ECCu;
    SET_GPR_U32(ctx, 31, 0x1D0ED4u);
    ctx->pc = 0x1D0ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0ECCu;
    // 0x1d0ed0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D0ECCu, 0x1D0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0ED4u;
label_1d0ed4:
    // 0x1d0ed4: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x1d0ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d0ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0edc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x1d0edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d0ee0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1d0ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d0ee4: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x1d0ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1d0ee8: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x1d0ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x1d0eec: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1d0eecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1d0ef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d0ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF8u;
        // 0x1d0efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0F00u;
}
