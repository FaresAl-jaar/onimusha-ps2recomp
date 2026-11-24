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

// Function: sub_0024B3E8
// Address: 0x24b3e8 - 0x24b424
void sub_0024B3E8_0x24b3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B3E8_0x24b3e8");
#endif

    switch (ctx->pc) {
        case 0x24b404u: goto label_24b404;
        case 0x24b410u: goto label_24b410;
        default: break;
    }

    ctx->pc = 0x24b3e8u;

    // 0x24b3e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b3ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b3f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b3fc: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B3FCu;
    SET_GPR_U32(ctx, 31, 0x24B404u);
    ctx->pc = 0x24B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B3FCu;
    // 0x24b400: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B3FCu, 0x24B404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B404u;
label_24b404:
    // 0x24b404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b408: 0xc092d0a  jal         func_24B428
    ctx->pc = 0x24B408u;
    SET_GPR_U32(ctx, 31, 0x24B410u);
    ctx->pc = 0x24B40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B408u;
    // 0x24b40c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B428u, 0x24B408u, 0x24B410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B410u;
label_24b410:
    // 0x24b410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b41c: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24B41Cu;
    ctx->pc = 0x24B420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B41Cu;
    // 0x24b420: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24B424u;
}
