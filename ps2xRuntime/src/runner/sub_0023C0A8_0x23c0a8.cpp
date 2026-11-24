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

// Function: sub_0023C0A8
// Address: 0x23c0a8 - 0x23c0f4
void sub_0023C0A8_0x23c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C0A8_0x23c0a8");
#endif

    switch (ctx->pc) {
        case 0x23c0ccu: goto label_23c0cc;
        case 0x23c0dcu: goto label_23c0dc;
        default: break;
    }

    ctx->pc = 0x23c0a8u;

    // 0x23c0a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c0b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c0b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c0c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23c0c4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C0C4u;
    SET_GPR_U32(ctx, 31, 0x23C0CCu);
    ctx->pc = 0x23C0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0C4u;
    // 0x23c0c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C0C4u, 0x23C0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0CCu;
label_23c0cc:
    // 0x23c0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c0d4: 0xc08f03e  jal         func_23C0F8
    ctx->pc = 0x23C0D4u;
    SET_GPR_U32(ctx, 31, 0x23C0DCu);
    ctx->pc = 0x23C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0D4u;
    // 0x23c0d8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F8u, 0x23C0D4u, 0x23C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C0DCu;
label_23c0dc:
    // 0x23c0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c0e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c0e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c0e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c0ec: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23C0ECu;
    ctx->pc = 0x23C0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C0ECu;
    // 0x23c0f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C0F4u;
}
