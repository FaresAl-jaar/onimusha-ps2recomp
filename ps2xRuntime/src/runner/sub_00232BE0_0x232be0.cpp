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

// Function: sub_00232BE0
// Address: 0x232be0 - 0x232c0c
void sub_00232BE0_0x232be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232BE0_0x232be0");
#endif

    switch (ctx->pc) {
        case 0x232bf4u: goto label_232bf4;
        case 0x232bfcu: goto label_232bfc;
        default: break;
    }

    ctx->pc = 0x232be0u;

    // 0x232be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232bec: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232BECu;
    SET_GPR_U32(ctx, 31, 0x232BF4u);
    ctx->pc = 0x232BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BECu;
    // 0x232bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232BECu, 0x232BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BF4u;
label_232bf4:
    // 0x232bf4: 0xc08cb04  jal         func_232C10
    ctx->pc = 0x232BF4u;
    SET_GPR_U32(ctx, 31, 0x232BFCu);
    ctx->pc = 0x232BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BF4u;
    // 0x232bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C10u, 0x232BF4u, 0x232BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BFCu;
label_232bfc:
    // 0x232bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232c00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232c04: 0x808b536  j           func_22D4D8
    ctx->pc = 0x232C04u;
    ctx->pc = 0x232C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C04u;
    // 0x232c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232C0Cu;
}
