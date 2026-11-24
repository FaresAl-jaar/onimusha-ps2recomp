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

// Function: sub_00250DA8
// Address: 0x250da8 - 0x250df4
void sub_00250DA8_0x250da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250DA8_0x250da8");
#endif

    switch (ctx->pc) {
        case 0x250dccu: goto label_250dcc;
        case 0x250ddcu: goto label_250ddc;
        default: break;
    }

    ctx->pc = 0x250da8u;

    // 0x250da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250dac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250db0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250db4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250db8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250dbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250dc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x250dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x250dc4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x250DC4u;
    SET_GPR_U32(ctx, 31, 0x250DCCu);
    ctx->pc = 0x250DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DC4u;
    // 0x250dc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x250DC4u, 0x250DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DCCu;
label_250dcc:
    // 0x250dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250dd4: 0xc09437e  jal         func_250DF8
    ctx->pc = 0x250DD4u;
    SET_GPR_U32(ctx, 31, 0x250DDCu);
    ctx->pc = 0x250DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DD4u;
    // 0x250dd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250DF8u, 0x250DD4u, 0x250DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DDCu;
label_250ddc:
    // 0x250ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x250de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250de8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x250de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250dec: 0x8093f40  j           func_24FD00
    ctx->pc = 0x250DECu;
    ctx->pc = 0x250DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250DECu;
    // 0x250df0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x250DF4u;
}
