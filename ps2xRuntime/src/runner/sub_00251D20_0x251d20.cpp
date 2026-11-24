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

// Function: sub_00251D20
// Address: 0x251d20 - 0x251d6c
void sub_00251D20_0x251d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251D20_0x251d20");
#endif

    switch (ctx->pc) {
        case 0x251d44u: goto label_251d44;
        case 0x251d54u: goto label_251d54;
        default: break;
    }

    ctx->pc = 0x251d20u;

    // 0x251d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251d30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251d38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x251d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x251d3c: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251D3Cu;
    SET_GPR_U32(ctx, 31, 0x251D44u);
    ctx->pc = 0x251D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D3Cu;
    // 0x251d40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251D3Cu, 0x251D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D44u;
label_251d44:
    // 0x251d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251d4c: 0xc09475c  jal         func_251D70
    ctx->pc = 0x251D4Cu;
    SET_GPR_U32(ctx, 31, 0x251D54u);
    ctx->pc = 0x251D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D4Cu;
    // 0x251d50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251D70u, 0x251D4Cu, 0x251D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251D54u;
label_251d54:
    // 0x251d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251d60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x251d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251d64: 0x8093f40  j           func_24FD00
    ctx->pc = 0x251D64u;
    ctx->pc = 0x251D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251D64u;
    // 0x251d68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x251D6Cu;
}
