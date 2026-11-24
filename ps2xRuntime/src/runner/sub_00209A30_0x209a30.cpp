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

// Function: sub_00209A30
// Address: 0x209a30 - 0x209a7c
void sub_00209A30_0x209a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209A30_0x209a30");
#endif

    switch (ctx->pc) {
        case 0x209a54u: goto label_209a54;
        default: break;
    }

    ctx->pc = 0x209a30u;

    // 0x209a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209a34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209a38: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x209a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x209a40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x209a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x209a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x209a48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x209a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x209a4c: 0xc0821e6  jal         func_208798
    ctx->pc = 0x209A4Cu;
    SET_GPR_U32(ctx, 31, 0x209A54u);
    ctx->pc = 0x209A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A4Cu;
    // 0x209a50: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x209A4Cu, 0x209A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A54u;
label_209a54:
    // 0x209a54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x209a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209a64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x209a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a74: 0x8089970  j           func_2265C0
    ctx->pc = 0x209A74u;
    ctx->pc = 0x209A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A74u;
    // 0x209a78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265C0u;
    sub_002265C0_0x2265c0(rdram, ctx, runtime); return;
    ctx->pc = 0x209A7Cu;
}
