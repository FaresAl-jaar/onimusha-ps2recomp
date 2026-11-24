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

// Function: sub_00238830
// Address: 0x238830 - 0x23886c
void sub_00238830_0x238830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238830_0x238830");
#endif

    switch (ctx->pc) {
        case 0x23884cu: goto label_23884c;
        case 0x238858u: goto label_238858;
        default: break;
    }

    ctx->pc = 0x238830u;

    // 0x238830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x238834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23883c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238844: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238844u;
    SET_GPR_U32(ctx, 31, 0x23884Cu);
    ctx->pc = 0x238848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238844u;
    // 0x238848: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238844u, 0x23884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23884Cu;
label_23884c:
    // 0x23884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238850: 0xc08e21c  jal         func_238870
    ctx->pc = 0x238850u;
    SET_GPR_U32(ctx, 31, 0x238858u);
    ctx->pc = 0x238854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238850u;
    // 0x238854: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238870u, 0x238850u, 0x238858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238858u;
label_238858:
    // 0x238858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23885c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23885cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238864: 0x808e2c2  j           func_238B08
    ctx->pc = 0x238864u;
    ctx->pc = 0x238868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238864u;
    // 0x238868: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x23886Cu;
}
