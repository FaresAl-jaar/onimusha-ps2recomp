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

// Function: sub_00235290
// Address: 0x235290 - 0x2352cc
void sub_00235290_0x235290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235290_0x235290");
#endif

    switch (ctx->pc) {
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        default: break;
    }

    ctx->pc = 0x235290u;

label_235290:
    // 0x235290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x235290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_235294:
    // 0x235294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_235298:
    // 0x235298: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x235298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23529c:
    // 0x23529c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x23529cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2352a0:
    // 0x2352a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2352a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2352a4:
    // 0x2352a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2352a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2352a8:
    // 0x2352a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2352a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2352ac:
    // 0x2352ac: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2352acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2352b0:
    // 0x2352b0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_2352b4:
    // 0x2352b4: 0x40f809  jalr        $v0
label_2352b8:
    if (ctx->pc == 0x2352B8u) {
        ctx->pc = 0x2352B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352B4u;
        // 0x2352b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352BCu;
        goto label_2352bc;
    }
    ctx->pc = 0x2352B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2352BCu);
        ctx->pc = 0x2352B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352B4u;
        // 0x2352b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352B4u, 0x2352BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2352BCu;
label_2352bc:
    // 0x2352bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2352bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2352c0:
    // 0x2352c0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2352c4:
    // 0x2352c4: 0x3e00008  jr          $ra
label_2352c8:
    if (ctx->pc == 0x2352C8u) {
        ctx->pc = 0x2352C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C4u;
        // 0x2352c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352CCu;
        goto label_fallthrough_0x2352c4;
    }
    ctx->pc = 0x2352C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2352C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352C4u;
        // 0x2352c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2352c4:
    ctx->pc = 0x2352CCu;
}
