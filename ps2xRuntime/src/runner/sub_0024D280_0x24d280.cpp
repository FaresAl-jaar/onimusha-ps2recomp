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

// Function: sub_0024D280
// Address: 0x24d280 - 0x24d2e0
void sub_0024D280_0x24d280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D280_0x24d280");
#endif

    switch (ctx->pc) {
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2c4u: goto label_24d2c4;
        default: break;
    }

    ctx->pc = 0x24d280u;

    // 0x24d280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24d288: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x24d288u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x24d28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24d28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24d290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24d290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d294: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24d298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24d298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d29c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24d2a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x24d2a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24d2a8: 0xc0933c2  jal         func_24CF08
    ctx->pc = 0x24D2A8u;
    SET_GPR_U32(ctx, 31, 0x24D2B0u);
    ctx->pc = 0x24D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2A8u;
    // 0x24d2ac: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CF08u, 0x24D2A8u, 0x24D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2B0u;
label_24d2b0:
    // 0x24d2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24d2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d2bc: 0xc0934b8  jal         func_24D2E0
    ctx->pc = 0x24D2BCu;
    SET_GPR_U32(ctx, 31, 0x24D2C4u);
    ctx->pc = 0x24D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2BCu;
    // 0x24d2c0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D2E0u, 0x24D2BCu, 0x24D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C4u;
label_24d2c4:
    // 0x24d2c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24d2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d2c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24d2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24d2cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24d2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d2d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24d2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24d2d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d2d8: 0x80933c8  j           func_24CF20
    ctx->pc = 0x24D2D8u;
    ctx->pc = 0x24D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2D8u;
    // 0x24d2dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF20u;
    sub_0024CF20_0x24cf20(rdram, ctx, runtime); return;
    ctx->pc = 0x24D2E0u;
}
