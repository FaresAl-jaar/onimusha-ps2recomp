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

// Function: sub_0023C6B0
// Address: 0x23c6b0 - 0x23c6fc
void sub_0023C6B0_0x23c6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C6B0_0x23c6b0");
#endif

    switch (ctx->pc) {
        case 0x23c6d4u: goto label_23c6d4;
        case 0x23c6e4u: goto label_23c6e4;
        default: break;
    }

    ctx->pc = 0x23c6b0u;

    // 0x23c6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23c6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23c6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c6b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23c6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23c6c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23c6c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23c6c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23c6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23c6cc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23C6CCu;
    SET_GPR_U32(ctx, 31, 0x23C6D4u);
    ctx->pc = 0x23C6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6CCu;
    // 0x23c6d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23C6CCu, 0x23C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6D4u;
label_23c6d4:
    // 0x23c6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23c6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23c6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c6dc: 0xc08f1c0  jal         func_23C700
    ctx->pc = 0x23C6DCu;
    SET_GPR_U32(ctx, 31, 0x23C6E4u);
    ctx->pc = 0x23C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6DCu;
    // 0x23c6e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C700u, 0x23C6DCu, 0x23C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C6E4u;
label_23c6e4:
    // 0x23c6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c6e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23c6e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c6ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23c6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23c6f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23c6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c6f4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23C6F4u;
    ctx->pc = 0x23C6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C6F4u;
    // 0x23c6f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23C6FCu;
}
