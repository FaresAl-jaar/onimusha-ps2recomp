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

// Function: sub_00232EA0
// Address: 0x232ea0 - 0x232eec
void sub_00232EA0_0x232ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232EA0_0x232ea0");
#endif

    switch (ctx->pc) {
        case 0x232ec4u: goto label_232ec4;
        case 0x232ed4u: goto label_232ed4;
        default: break;
    }

    ctx->pc = 0x232ea0u;

    // 0x232ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232ea8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232eac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x232eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x232eb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x232eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232eb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x232eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x232eb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232ebc: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x232EBCu;
    SET_GPR_U32(ctx, 31, 0x232EC4u);
    ctx->pc = 0x232EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EBCu;
    // 0x232ec0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x232EBCu, 0x232EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EC4u;
label_232ec4:
    // 0x232ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ec8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232ecc: 0xc08cbbc  jal         func_232EF0
    ctx->pc = 0x232ECCu;
    SET_GPR_U32(ctx, 31, 0x232ED4u);
    ctx->pc = 0x232ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232ECCu;
    // 0x232ed0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232EF0u, 0x232ECCu, 0x232ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232ED4u;
label_232ed4:
    // 0x232ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x232ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x232edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232ee0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x232ee4: 0x808b536  j           func_22D4D8
    ctx->pc = 0x232EE4u;
    ctx->pc = 0x232EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EE4u;
    // 0x232ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x232EECu;
}
