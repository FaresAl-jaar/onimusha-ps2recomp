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

// Function: sub_0023A040
// Address: 0x23a040 - 0x23a08c
void sub_0023A040_0x23a040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A040_0x23a040");
#endif

    switch (ctx->pc) {
        case 0x23a064u: goto label_23a064;
        case 0x23a074u: goto label_23a074;
        default: break;
    }

    ctx->pc = 0x23a040u;

    // 0x23a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23a044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23a048: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a04c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23a050: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a054: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23a058: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23a058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23a05c: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23A05Cu;
    SET_GPR_U32(ctx, 31, 0x23A064u);
    ctx->pc = 0x23A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A05Cu;
    // 0x23a060: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23A05Cu, 0x23A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A064u;
label_23a064:
    // 0x23a064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a06c: 0xc08e824  jal         func_23A090
    ctx->pc = 0x23A06Cu;
    SET_GPR_U32(ctx, 31, 0x23A074u);
    ctx->pc = 0x23A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A06Cu;
    // 0x23a070: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A090u, 0x23A06Cu, 0x23A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A074u;
label_23a074:
    // 0x23a074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23a078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23a07c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23a080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23a084: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23A084u;
    ctx->pc = 0x23A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A084u;
    // 0x23a088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23A08Cu;
}
