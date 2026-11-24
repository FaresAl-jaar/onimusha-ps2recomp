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

// Function: sub_00247188
// Address: 0x247188 - 0x2471f0
void sub_00247188_0x247188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247188_0x247188");
#endif

    switch (ctx->pc) {
        case 0x2471acu: goto label_2471ac;
        case 0x2471ccu: goto label_2471cc;
        default: break;
    }

    ctx->pc = 0x247188u;

    // 0x247188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24718c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247194: 0x2450ea14  addiu       $s0, $v0, -0x15EC
    ctx->pc = 0x247194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961684));
    // 0x247198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x247198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24719c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2471a0: 0x2484ccc8  addiu       $a0, $a0, -0x3338
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    // 0x2471a4: 0xc08d47e  jal         func_2351F8
    ctx->pc = 0x2471A4u;
    SET_GPR_U32(ctx, 31, 0x2471ACu);
    ctx->pc = 0x2471A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471A4u;
    // 0x2471a8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F8u, 0x2471A4u, 0x2471ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471ACu;
label_2471ac:
    // 0x2471ac: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2471acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2471b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2471b4: 0x2484ea18  addiu       $a0, $a0, -0x15E8
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961688));
    // 0x2471b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2471b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2471BCu;
    {
        const bool branch_taken_0x2471bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2471C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2471BCu;
        // 0x2471c0: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2471bc) {
            ctx->pc = 0x2471D0u;
            goto label_2471d0;
        }
    }
    ctx->pc = 0x2471C4u;
    // 0x2471c4: 0xc049590  jal         func_125640
    ctx->pc = 0x2471C4u;
    SET_GPR_U32(ctx, 31, 0x2471CCu);
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x2471C4u, 0x2471CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471CCu;
label_2471cc:
    // 0x2471cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2471d0:
    // 0x2471d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2471d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2471d4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2471d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2471d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2471d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2471dc: 0x2484cce0  addiu       $a0, $a0, -0x3320
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954208));
    // 0x2471e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2471e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2471e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2471e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2471e8: 0x808d47e  j           func_2351F8
    ctx->pc = 0x2471E8u;
    ctx->pc = 0x2471ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2471E8u;
    // 0x2471ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2351F8u;
    sub_002351F8_0x2351f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2471F0u;
}
