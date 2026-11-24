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

// Function: sub_00239EA8
// Address: 0x239ea8 - 0x239ef4
void sub_00239EA8_0x239ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239EA8_0x239ea8");
#endif

    switch (ctx->pc) {
        case 0x239eccu: goto label_239ecc;
        case 0x239edcu: goto label_239edc;
        default: break;
    }

    ctx->pc = 0x239ea8u;

    // 0x239ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x239eac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x239eb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x239eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x239eb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ebc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x239ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x239ec0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x239ec4: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x239EC4u;
    SET_GPR_U32(ctx, 31, 0x239ECCu);
    ctx->pc = 0x239EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EC4u;
    // 0x239ec8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x239EC4u, 0x239ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239ECCu;
label_239ecc:
    // 0x239ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ed0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239ed4: 0xc08e7be  jal         func_239EF8
    ctx->pc = 0x239ED4u;
    SET_GPR_U32(ctx, 31, 0x239EDCu);
    ctx->pc = 0x239ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239ED4u;
    // 0x239ed8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239EF8u, 0x239ED4u, 0x239EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239EDCu;
label_239edc:
    // 0x239edc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239edcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239ee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239ee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239ee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239eec: 0x808b536  j           func_22D4D8
    ctx->pc = 0x239EECu;
    ctx->pc = 0x239EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239EECu;
    // 0x239ef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x239EF4u;
}
