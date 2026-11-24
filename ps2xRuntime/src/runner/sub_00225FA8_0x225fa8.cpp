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

// Function: sub_00225FA8
// Address: 0x225fa8 - 0x225fec
void sub_00225FA8_0x225fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225FA8_0x225fa8");
#endif

    switch (ctx->pc) {
        case 0x225fccu: goto label_225fcc;
        case 0x225fdcu: goto label_225fdc;
        default: break;
    }

    ctx->pc = 0x225fa8u;

    // 0x225fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x225facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225fb4: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x225fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x225fb8: 0x2610a378  addiu       $s0, $s0, -0x5C88
    ctx->pc = 0x225fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943608));
    // 0x225fbc: 0x240604c8  addiu       $a2, $zero, 0x4C8
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1224));
    // 0x225fc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x225fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x225fc4: 0xc049590  jal         func_125640
    ctx->pc = 0x225FC4u;
    SET_GPR_U32(ctx, 31, 0x225FCCu);
    ctx->pc = 0x225FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FC4u;
    // 0x225fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x225FC4u, 0x225FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FCCu;
label_225fcc:
    // 0x225fcc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x225fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x225fd0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x225fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x225fd4: 0xc0898c2  jal         func_226308
    ctx->pc = 0x225FD4u;
    SET_GPR_U32(ctx, 31, 0x225FDCu);
    ctx->pc = 0x225FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FD4u;
    // 0x225fd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226308u, 0x225FD4u, 0x225FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225FDCu;
label_225fdc:
    // 0x225fdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225fdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fe0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225fe4: 0x807cdca  j           func_1F3728
    ctx->pc = 0x225FE4u;
    ctx->pc = 0x225FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FE4u;
    // 0x225fe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3728u;
    sub_001F3728_0x1f3728(rdram, ctx, runtime); return;
    ctx->pc = 0x225FECu;
}
