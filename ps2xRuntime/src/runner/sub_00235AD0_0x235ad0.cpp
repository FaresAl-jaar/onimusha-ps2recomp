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

// Function: sub_00235AD0
// Address: 0x235ad0 - 0x235b10
void sub_00235AD0_0x235ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235AD0_0x235ad0");
#endif

    switch (ctx->pc) {
        case 0x235af4u: goto label_235af4;
        default: break;
    }

    ctx->pc = 0x235ad0u;

    // 0x235ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x235ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x235ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x235ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x235ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x235adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x235ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x235ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x235ae8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x235ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x235aec: 0xc08a702  jal         func_229C08
    ctx->pc = 0x235AECu;
    SET_GPR_U32(ctx, 31, 0x235AF4u);
    ctx->pc = 0x235AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AECu;
    // 0x235af0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C08u, 0x235AECu, 0x235AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235AF4u;
label_235af4:
    // 0x235af4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x235af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x235af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x235afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x235b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x235b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235b08: 0x808a688  j           func_229A20
    ctx->pc = 0x235B08u;
    ctx->pc = 0x235B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235B08u;
    // 0x235b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A20u;
    sub_00229A20_0x229a20(rdram, ctx, runtime); return;
    ctx->pc = 0x235B10u;
}
