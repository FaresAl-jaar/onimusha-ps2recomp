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

// Function: sub_0020B778
// Address: 0x20b778 - 0x20b7a8
void sub_0020B778_0x20b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B778_0x20b778");
#endif

    switch (ctx->pc) {
        case 0x20b790u: goto label_20b790;
        default: break;
    }

    ctx->pc = 0x20b778u;

    // 0x20b778: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20b778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20b77c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20b77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b788: 0xc094ef8  jal         func_253BE0
    ctx->pc = 0x20B788u;
    SET_GPR_U32(ctx, 31, 0x20B790u);
    ctx->pc = 0x20B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B788u;
    // 0x20b78c: 0x2484b7d0  addiu       $a0, $a0, -0x4830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253BE0u, 0x20B788u, 0x20B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B790u;
label_20b790:
    // 0x20b790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b794: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x20b794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
    // 0x20b798: 0x2484b7e8  addiu       $a0, $a0, -0x4818
    ctx->pc = 0x20b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948840));
    // 0x20b79c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20b79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7a0: 0x8094efe  j           func_253BF8
    ctx->pc = 0x20B7A0u;
    ctx->pc = 0x20B7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B7A0u;
    // 0x20b7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253BF8u;
    sub_00253BF8_0x253bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x20B7A8u;
}
