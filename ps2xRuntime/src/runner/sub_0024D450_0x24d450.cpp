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

// Function: sub_0024D450
// Address: 0x24d450 - 0x24d4ac
void sub_0024D450_0x24d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D450_0x24d450");
#endif

    switch (ctx->pc) {
        case 0x24d47cu: goto label_24d47c;
        case 0x24d490u: goto label_24d490;
        default: break;
    }

    ctx->pc = 0x24d450u;

    // 0x24d450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d45c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d460: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24d460u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d464: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d468: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24d468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d46c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d470: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24d470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24d474: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D474u;
    SET_GPR_U32(ctx, 31, 0x24D47Cu);
    ctx->pc = 0x24D478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D474u;
    // 0x24d478: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D474u, 0x24D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D47Cu;
label_24d47c:
    // 0x24d47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24d484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d488: 0xc09352c  jal         func_24D4B0
    ctx->pc = 0x24D488u;
    SET_GPR_U32(ctx, 31, 0x24D490u);
    ctx->pc = 0x24D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D488u;
    // 0x24d48c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D4B0u, 0x24D488u, 0x24D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D490u;
label_24d490:
    // 0x24d490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d498: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d498u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d49c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d49cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d4a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d4a4: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D4A4u;
    ctx->pc = 0x24D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4A4u;
    // 0x24d4a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D4ACu;
}
