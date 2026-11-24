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

// Function: sub_0021C458
// Address: 0x21c458 - 0x21c480
void sub_0021C458_0x21c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C458_0x21c458");
#endif

    switch (ctx->pc) {
        case 0x21c46cu: goto label_21c46c;
        default: break;
    }

    ctx->pc = 0x21c458u;

    // 0x21c458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21c45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c460: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21c464: 0xc087120  jal         func_21C480
    ctx->pc = 0x21C464u;
    SET_GPR_U32(ctx, 31, 0x21C46Cu);
    ctx->pc = 0x21C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C464u;
    // 0x21c468: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C480u, 0x21C464u, 0x21C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C46Cu;
label_21c46c:
    // 0x21c46c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c478: 0x8087b5e  j           func_21ED78
    ctx->pc = 0x21C478u;
    ctx->pc = 0x21C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C478u;
    // 0x21c47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED78u;
    sub_0021ED78_0x21ed78(rdram, ctx, runtime); return;
    ctx->pc = 0x21C480u;
}
