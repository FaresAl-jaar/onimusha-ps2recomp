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

// Function: sub_002352D0
// Address: 0x2352d0 - 0x23530c
void sub_002352D0_0x2352d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002352D0_0x2352d0");
#endif

    switch (ctx->pc) {
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        default: break;
    }

    ctx->pc = 0x2352d0u;

label_2352d0:
    // 0x2352d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2352d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2352d4:
    // 0x2352d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2352d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2352d8:
    // 0x2352d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2352dc:
    // 0x2352dc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2352dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2352e0:
    // 0x2352e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2352e4:
    // 0x2352e4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2352e8:
    // 0x2352e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2352e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2352ec:
    // 0x2352ec: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2352ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2352f0:
    // 0x2352f0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x2352f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_2352f4:
    // 0x2352f4: 0x40f809  jalr        $v0
label_2352f8:
    if (ctx->pc == 0x2352F8u) {
        ctx->pc = 0x2352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352F4u;
        // 0x2352f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352FCu;
        goto label_2352fc;
    }
    ctx->pc = 0x2352F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2352FCu);
        ctx->pc = 0x2352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352F4u;
        // 0x2352f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352F4u, 0x2352FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2352FCu;
label_2352fc:
    // 0x2352fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2352fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_235300:
    // 0x235300: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x235300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_235304:
    // 0x235304: 0x3e00008  jr          $ra
label_235308:
    if (ctx->pc == 0x235308u) {
        ctx->pc = 0x235308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235304u;
        // 0x235308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23530Cu;
        goto label_fallthrough_0x235304;
    }
    ctx->pc = 0x235304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235304u;
        // 0x235308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x235304:
    ctx->pc = 0x23530Cu;
}
