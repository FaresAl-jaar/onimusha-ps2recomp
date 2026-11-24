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

// Function: sub_00208508
// Address: 0x208508 - 0x208550
void sub_00208508_0x208508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208508_0x208508");
#endif

    switch (ctx->pc) {
        case 0x208530u: goto label_208530;
        default: break;
    }

    ctx->pc = 0x208508u;

    // 0x208508: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x208508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20850c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x208510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208514: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208518: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x208518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20851c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x208520: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x208520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208524: 0x2405005d  addiu       $a1, $zero, 0x5D
    ctx->pc = 0x208524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x208528: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x208528u;
    SET_GPR_U32(ctx, 31, 0x208530u);
    ctx->pc = 0x20852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208528u;
    // 0x20852c: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x208528u, 0x208530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208530u;
label_208530:
    // 0x208530: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x208530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x208534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x208534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x208538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20853c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20853cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208540: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x208540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x208544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208548: 0x8087e0e  j           func_21F838
    ctx->pc = 0x208548u;
    ctx->pc = 0x20854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208548u;
    // 0x20854c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208550u;
}
