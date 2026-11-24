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

// Function: sub_00232D90
// Address: 0x232d90 - 0x232dec
void sub_00232D90_0x232d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D90_0x232d90");
#endif

    switch (ctx->pc) {
        case 0x232dbcu: goto label_232dbc;
        case 0x232dd0u: goto label_232dd0;
        default: break;
    }

    ctx->pc = 0x232d90u;

    // 0x232d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232da4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232da8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x232da8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x232dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x232db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x232db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x232db4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232DB4u;
    SET_GPR_U32(ctx, 31, 0x232DBCu);
    ctx->pc = 0x232DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DB4u;
    // 0x232db8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232DB4u, 0x232DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DBCu;
label_232dbc:
    // 0x232dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x232dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dc8: 0xc08cb7c  jal         func_232DF0
    ctx->pc = 0x232DC8u;
    SET_GPR_U32(ctx, 31, 0x232DD0u);
    ctx->pc = 0x232DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DC8u;
    // 0x232dcc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232DF0u, 0x232DC8u, 0x232DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DD0u;
label_232dd0:
    // 0x232dd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232dd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232dd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232ddc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x232ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x232de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232de4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x232DE4u;
    ctx->pc = 0x232DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DE4u;
    // 0x232de8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232DECu;
}
