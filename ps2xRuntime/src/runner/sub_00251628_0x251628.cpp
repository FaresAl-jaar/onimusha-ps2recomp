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

// Function: sub_00251628
// Address: 0x251628 - 0x2516ac
void sub_00251628_0x251628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251628_0x251628");
#endif

    switch (ctx->pc) {
        case 0x251698u: goto label_251698;
        default: break;
    }

    ctx->pc = 0x251628u;

    // 0x251628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x251628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25162c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25162cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251634: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x251634u;
    {
        const bool branch_taken_0x251634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x251638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251634u;
        // 0x251638: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251634) {
            ctx->pc = 0x251660u;
            goto label_251660;
        }
    }
    ctx->pc = 0x25163Cu;
    // 0x25163c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25163cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251640: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x251644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251648: 0x2484ec70  addiu       $a0, $a0, -0x1390
    ctx->pc = 0x251648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962288));
    // 0x25164c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251650: 0x24a5ec80  addiu       $a1, $a1, -0x1380
    ctx->pc = 0x251650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962304));
    // 0x251654: 0x80944dc  j           func_251370
    ctx->pc = 0x251654u;
    ctx->pc = 0x251658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251654u;
    // 0x251658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x25165Cu;
    // 0x25165c: 0x0  nop
    ctx->pc = 0x25165cu;
    // NOP
label_251660:
    // 0x251660: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x251660u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x251664: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x251664u;
    {
        const bool branch_taken_0x251664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251664u;
        // 0x251668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251664) {
            ctx->pc = 0x251690u;
            goto label_251690;
        }
    }
    ctx->pc = 0x25166Cu;
    // 0x25166c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x25166cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x251670: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x251670u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x251674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251678: 0x2484eca0  addiu       $a0, $a0, -0x1360
    ctx->pc = 0x251678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962336));
    // 0x25167c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251680: 0x24a5ecb0  addiu       $a1, $a1, -0x1350
    ctx->pc = 0x251680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962352));
    // 0x251684: 0x80944dc  j           func_251370
    ctx->pc = 0x251684u;
    ctx->pc = 0x251688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251684u;
    // 0x251688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251370u;
    sub_00251370_0x251370(rdram, ctx, runtime); return;
    ctx->pc = 0x25168Cu;
    // 0x25168c: 0x0  nop
    ctx->pc = 0x25168cu;
    // NOP
label_251690:
    // 0x251690: 0xc049590  jal         func_125640
    ctx->pc = 0x251690u;
    SET_GPR_U32(ctx, 31, 0x251698u);
    ctx->pc = 0x251694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251690u;
    // 0x251694: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x251690u, 0x251698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251698u;
label_251698:
    // 0x251698: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x251698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x25169c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25169cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2516a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2516a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2516a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2516A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516A4u;
        // 0x2516a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2516A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2516ACu;
}
