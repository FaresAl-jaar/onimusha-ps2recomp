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

// Function: sub_0023CAF0
// Address: 0x23caf0 - 0x23cb3c
void sub_0023CAF0_0x23caf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CAF0_0x23caf0");
#endif

    switch (ctx->pc) {
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb24u: goto label_23cb24;
        default: break;
    }

    ctx->pc = 0x23caf0u;

    // 0x23caf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23caf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23caf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23caf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cafc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23cb00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23cb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23cb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23cb08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23cb0c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23CB0Cu;
    SET_GPR_U32(ctx, 31, 0x23CB14u);
    ctx->pc = 0x23CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB0Cu;
    // 0x23cb10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23CB0Cu, 0x23CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB14u;
label_23cb14:
    // 0x23cb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cb1c: 0xc08f2d0  jal         func_23CB40
    ctx->pc = 0x23CB1Cu;
    SET_GPR_U32(ctx, 31, 0x23CB24u);
    ctx->pc = 0x23CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB1Cu;
    // 0x23cb20: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CB40u, 0x23CB1Cu, 0x23CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB24u;
label_23cb24:
    // 0x23cb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23cb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cb28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23cb28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23cb2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23cb2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cb30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23cb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23cb34: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23CB34u;
    ctx->pc = 0x23CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB34u;
    // 0x23cb38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23CB3Cu;
}
