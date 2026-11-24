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

// Function: sub_0024D650
// Address: 0x24d650 - 0x24d69c
void sub_0024D650_0x24d650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D650_0x24d650");
#endif

    switch (ctx->pc) {
        case 0x24d674u: goto label_24d674;
        case 0x24d684u: goto label_24d684;
        default: break;
    }

    ctx->pc = 0x24d650u;

    // 0x24d650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24d650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24d654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d658: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d65c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d660: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24d660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d664: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d668: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24d668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24d66c: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D66Cu;
    SET_GPR_U32(ctx, 31, 0x24D674u);
    ctx->pc = 0x24D670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D66Cu;
    // 0x24d670: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D66Cu, 0x24D674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D674u;
label_24d674:
    // 0x24d674: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d67c: 0xc0935a8  jal         func_24D6A0
    ctx->pc = 0x24D67Cu;
    SET_GPR_U32(ctx, 31, 0x24D684u);
    ctx->pc = 0x24D680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D67Cu;
    // 0x24d680: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D6A0u, 0x24D67Cu, 0x24D684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D684u;
label_24d684:
    // 0x24d684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d688: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d68c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d68cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d690: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24d690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d694: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D694u;
    ctx->pc = 0x24D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D694u;
    // 0x24d698: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D69Cu;
}
