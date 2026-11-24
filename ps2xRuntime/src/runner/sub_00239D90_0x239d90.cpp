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

// Function: sub_00239D90
// Address: 0x239d90 - 0x239ddc
void sub_00239D90_0x239d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239D90_0x239d90");
#endif

    switch (ctx->pc) {
        case 0x239db4u: goto label_239db4;
        case 0x239dc4u: goto label_239dc4;
        default: break;
    }

    ctx->pc = 0x239d90u;

    // 0x239d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239da4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239da8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239dac: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239DACu;
    SET_GPR_U32(ctx, 31, 0x239DB4u);
    ctx->pc = 0x239DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DACu;
    // 0x239db0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239DACu, 0x239DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DB4u;
label_239db4:
    // 0x239db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dbc: 0xc08e778  jal         func_239DE0
    ctx->pc = 0x239DBCu;
    SET_GPR_U32(ctx, 31, 0x239DC4u);
    ctx->pc = 0x239DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DBCu;
    // 0x239dc0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239DE0u, 0x239DBCu, 0x239DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239DC4u;
label_239dc4:
    // 0x239dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239dc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239dc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239dcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239dccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239dd0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239dd4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x239DD4u;
    ctx->pc = 0x239DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239DD4u;
    // 0x239dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239DDCu;
}
