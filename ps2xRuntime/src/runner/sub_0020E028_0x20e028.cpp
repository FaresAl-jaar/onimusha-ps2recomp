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

// Function: sub_0020E028
// Address: 0x20e028 - 0x20e064
void sub_0020E028_0x20e028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E028_0x20e028");
#endif

    switch (ctx->pc) {
        case 0x20e048u: goto label_20e048;
        default: break;
    }

    ctx->pc = 0x20e028u;

    // 0x20e028: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x20e028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x20e02c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20e030: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20e030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e034: 0x24a5e068  addiu       $a1, $a1, -0x1F98
    ctx->pc = 0x20e034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959208));
    // 0x20e038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e03c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20e040: 0xc0883e6  jal         func_220F98
    ctx->pc = 0x20E040u;
    SET_GPR_U32(ctx, 31, 0x20E048u);
    ctx->pc = 0x20E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E040u;
    // 0x20e044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F98u, 0x20E040u, 0x20E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E048u;
label_20e048:
    // 0x20e048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e054: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x20e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20e058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x20e058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20e05c: 0x8087e5e  j           func_21F978
    ctx->pc = 0x20E05Cu;
    ctx->pc = 0x20E060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E05Cu;
    // 0x20e060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F978u;
    sub_0021F978_0x21f978(rdram, ctx, runtime); return;
    ctx->pc = 0x20E064u;
}
