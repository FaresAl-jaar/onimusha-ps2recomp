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

// Function: sub_00237548
// Address: 0x237548 - 0x237588
void sub_00237548_0x237548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237548_0x237548");
#endif

    switch (ctx->pc) {
        case 0x23755cu: goto label_23755c;
        case 0x237564u: goto label_237564;
        default: break;
    }

    ctx->pc = 0x237548u;

    // 0x237548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23754c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x237554: 0xc08de12  jal         func_237848
    ctx->pc = 0x237554u;
    SET_GPR_U32(ctx, 31, 0x23755Cu);
    ctx->pc = 0x237558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237554u;
    // 0x237558: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237848u, 0x237554u, 0x23755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23755Cu;
label_23755c:
    // 0x23755c: 0xc08e2aa  jal         func_238AA8
    ctx->pc = 0x23755Cu;
    SET_GPR_U32(ctx, 31, 0x237564u);
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x23755Cu, 0x237564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237564u;
label_237564:
    // 0x237564: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x237564u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x237568: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23756c: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x23756Cu;
    {
        const bool branch_taken_0x23756c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23756c) {
            ctx->pc = 0x237570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23756Cu;
            // 0x237570: 0xa2030046  sb          $v1, 0x46($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237574u;
            goto label_237574;
        }
    }
    ctx->pc = 0x237574u;
label_237574:
    // 0x237574: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x237574u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x237578: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23757c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23757cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237580: 0x808e2b0  j           func_238AC0
    ctx->pc = 0x237580u;
    ctx->pc = 0x237584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237580u;
    // 0x237584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    sub_00238AC0_0x238ac0(rdram, ctx, runtime); return;
    ctx->pc = 0x237588u;
}
