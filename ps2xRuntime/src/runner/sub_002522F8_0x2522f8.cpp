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

// Function: sub_002522F8
// Address: 0x2522f8 - 0x252354
void sub_002522F8_0x2522f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002522F8_0x2522f8");
#endif

    switch (ctx->pc) {
        case 0x252320u: goto label_252320;
        case 0x252330u: goto label_252330;
        default: break;
    }

    ctx->pc = 0x2522f8u;

    // 0x2522f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2522f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2522fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2522fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x252300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x252304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x252308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x252308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25230c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252314: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252318: 0xc049590  jal         func_125640
    ctx->pc = 0x252318u;
    SET_GPR_U32(ctx, 31, 0x252320u);
    ctx->pc = 0x25231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252318u;
    // 0x25231c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x252318u, 0x252320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252320u;
label_252320:
    // 0x252320: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x252324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252328: 0xc04a040  jal         func_128100
    ctx->pc = 0x252328u;
    SET_GPR_U32(ctx, 31, 0x252330u);
    ctx->pc = 0x25232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252328u;
    // 0x25232c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x252328u, 0x252330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252330u;
label_252330:
    // 0x252330: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x252330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252334: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x252334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252338: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x252338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25233c: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x25233cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x252340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252344: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x252344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x252348: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25234c: 0x809486c  j           func_2521B0
    ctx->pc = 0x25234Cu;
    ctx->pc = 0x252350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25234Cu;
    // 0x252350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2521B0u;
    sub_002521B0_0x2521b0(rdram, ctx, runtime); return;
    ctx->pc = 0x252354u;
}
