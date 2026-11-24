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

// Function: sub_0020C670
// Address: 0x20c670 - 0x20c6c0
void sub_0020C670_0x20c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C670_0x20c670");
#endif

    switch (ctx->pc) {
        case 0x20c684u: goto label_20c684;
        case 0x20c690u: goto label_20c690;
        case 0x20c698u: goto label_20c698;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6acu: goto label_20c6ac;
        default: break;
    }

    ctx->pc = 0x20c670u;

    // 0x20c670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20c674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20c678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20c67c: 0xc081be0  jal         func_206F80
    ctx->pc = 0x20C67Cu;
    SET_GPR_U32(ctx, 31, 0x20C684u);
    ctx->pc = 0x20C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C67Cu;
    // 0x20c680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206F80u, 0x20C67Cu, 0x20C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C684u;
label_20c684:
    // 0x20c684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c688: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x20C688u;
    SET_GPR_U32(ctx, 31, 0x20C690u);
    ctx->pc = 0x20C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C688u;
    // 0x20c68c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x20C688u, 0x20C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C690u;
label_20c690:
    // 0x20c690: 0xc082e64  jal         func_20B990
    ctx->pc = 0x20C690u;
    SET_GPR_U32(ctx, 31, 0x20C698u);
    ctx->pc = 0x20B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B990u, 0x20C690u, 0x20C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C698u;
label_20c698:
    // 0x20c698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c69c: 0xc083178  jal         func_20C5E0
    ctx->pc = 0x20C69Cu;
    SET_GPR_U32(ctx, 31, 0x20C6A4u);
    ctx->pc = 0x20C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C69Cu;
    // 0x20c6a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C5E0u, 0x20C69Cu, 0x20C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6A4u;
label_20c6a4:
    // 0x20c6a4: 0xc081be6  jal         func_206F98
    ctx->pc = 0x20C6A4u;
    SET_GPR_U32(ctx, 31, 0x20C6ACu);
    ctx->pc = 0x206F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206F98u, 0x20C6A4u, 0x20C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6ACu;
label_20c6ac:
    // 0x20c6ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20c6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20c6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20c6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c6b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20c6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c6b8: 0x8082e80  j           func_20BA00
    ctx->pc = 0x20C6B8u;
    ctx->pc = 0x20C6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6B8u;
    // 0x20c6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BA00u;
    sub_0020BA00_0x20ba00(rdram, ctx, runtime); return;
    ctx->pc = 0x20C6C0u;
}
