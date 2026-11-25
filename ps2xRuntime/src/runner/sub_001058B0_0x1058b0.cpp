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

// Function: sub_001058B0
// Address: 0x1058b0 - 0x105918
void sub_001058B0_0x1058b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001058B0_0x1058b0");
#endif

    switch (ctx->pc) {
        case 0x1058dcu: goto label_1058dc;
        case 0x1058e8u: goto label_1058e8;
        case 0x1058f4u: goto label_1058f4;
        default: break;
    }

    ctx->pc = 0x1058b0u;

    // 0x1058b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1058b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1058b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1058b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1058bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1058c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1058c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1058c4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1058c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1058c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1058cc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1058ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1058d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1058d4: 0xc0414ee  jal         func_1053B8
    ctx->pc = 0x1058D4u;
    SET_GPR_U32(ctx, 31, 0x1058DCu);
    ctx->pc = 0x1058D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058D4u;
    // 0x1058d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053B8u, 0x1058D4u, 0x1058DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058DCu;
label_1058dc:
    // 0x1058dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1058dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058e0: 0xc0414ee  jal         func_1053B8
    ctx->pc = 0x1058E0u;
    SET_GPR_U32(ctx, 31, 0x1058E8u);
    ctx->pc = 0x1058E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058E0u;
    // 0x1058e4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053B8u, 0x1058E0u, 0x1058E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058E8u;
label_1058e8:
    // 0x1058e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1058e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058ec: 0xc0414ee  jal         func_1053B8
    ctx->pc = 0x1058ECu;
    SET_GPR_U32(ctx, 31, 0x1058F4u);
    ctx->pc = 0x1058F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1058ECu;
    // 0x1058f0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1053B8u, 0x1058ECu, 0x1058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058F4u;
label_1058f4:
    // 0x1058f4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1058f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1058f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1058f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1058fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1058fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105900: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105904: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105908: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10590c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10590cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105910: 0x80414ee  j           func_1053B8
    ctx->pc = 0x105910u;
    ctx->pc = 0x105914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105910u;
    // 0x105914: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1053B8u;
    sub_001053B8_0x1053b8(rdram, ctx, runtime); return;
    ctx->pc = 0x105918u;
}
