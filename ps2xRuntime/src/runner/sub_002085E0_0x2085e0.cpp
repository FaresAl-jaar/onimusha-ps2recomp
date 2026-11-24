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

// Function: sub_002085E0
// Address: 0x2085e0 - 0x208624
void sub_002085E0_0x2085e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002085E0_0x2085e0");
#endif

    switch (ctx->pc) {
        case 0x208604u: goto label_208604;
        default: break;
    }

    ctx->pc = 0x2085e0u;

    // 0x2085e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2085e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2085e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2085e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2085e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2085e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2085ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2085f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2085f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2085f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2085f8: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x2085f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x2085fc: 0xc087e0e  jal         func_21F838
    ctx->pc = 0x2085FCu;
    SET_GPR_U32(ctx, 31, 0x208604u);
    ctx->pc = 0x208600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085FCu;
    // 0x208600: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F838u, 0x2085FCu, 0x208604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208604u;
label_208604:
    // 0x208604: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x208604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x208608: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x208608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20860c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20860cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x208614: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x208618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x208618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20861c: 0x8087e0e  j           func_21F838
    ctx->pc = 0x20861Cu;
    ctx->pc = 0x208620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20861Cu;
    // 0x208620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x208624u;
}
