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

// Function: sub_002389F0
// Address: 0x2389f0 - 0x238a1c
void sub_002389F0_0x2389f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002389F0_0x2389f0");
#endif

    switch (ctx->pc) {
        case 0x238a04u: goto label_238a04;
        case 0x238a0cu: goto label_238a0c;
        default: break;
    }

    ctx->pc = 0x2389f0u;

    // 0x2389f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2389f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2389f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2389f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2389f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2389f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2389fc: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x2389FCu;
    SET_GPR_U32(ctx, 31, 0x238A04u);
    ctx->pc = 0x238A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389FCu;
    // 0x238a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x2389FCu, 0x238A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A04u;
label_238a04:
    // 0x238a04: 0xc08e288  jal         func_238A20
    ctx->pc = 0x238A04u;
    SET_GPR_U32(ctx, 31, 0x238A0Cu);
    ctx->pc = 0x238A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A04u;
    // 0x238a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A20u, 0x238A04u, 0x238A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A0Cu;
label_238a0c:
    // 0x238a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238a10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x238a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238a14: 0x808e2c2  j           func_238B08
    ctx->pc = 0x238A14u;
    ctx->pc = 0x238A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A14u;
    // 0x238a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x238A1Cu;
}
