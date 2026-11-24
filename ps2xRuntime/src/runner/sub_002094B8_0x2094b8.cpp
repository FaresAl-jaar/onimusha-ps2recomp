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

// Function: sub_002094B8
// Address: 0x2094b8 - 0x209510
void sub_002094B8_0x2094b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002094B8_0x2094b8");
#endif

    switch (ctx->pc) {
        case 0x2094ecu: goto label_2094ec;
        default: break;
    }

    ctx->pc = 0x2094b8u;

    // 0x2094b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2094b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2094bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2094bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2094c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2094c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2094c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2094c8: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x2094c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x2094cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2094CCu;
    {
        const bool branch_taken_0x2094cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2094CCu;
        // 0x2094d0: 0x26030194  addiu       $v1, $s0, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094cc) {
            ctx->pc = 0x209500u;
            goto label_209500;
        }
    }
    ctx->pc = 0x2094D4u;
    // 0x2094d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2094d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2094d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2094dc: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2094DCu;
    {
        const bool branch_taken_0x2094dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2094dc) {
            ctx->pc = 0x2094E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2094DCu;
            // 0x2094e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x209504u;
            goto label_209504;
        }
    }
    ctx->pc = 0x2094E4u;
    // 0x2094e4: 0xc082556  jal         func_209558
    ctx->pc = 0x2094E4u;
    SET_GPR_U32(ctx, 31, 0x2094ECu);
    ctx->pc = 0x209558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209558u, 0x2094E4u, 0x2094ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2094ECu;
label_2094ec:
    // 0x2094ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2094ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2094f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2094f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2094f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2094f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2094f8: 0x80825c2  j           func_209708
    ctx->pc = 0x2094F8u;
    ctx->pc = 0x2094FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2094F8u;
    // 0x2094fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209708u;
    sub_00209708_0x209708(rdram, ctx, runtime); return;
    ctx->pc = 0x209500u;
label_209500:
    // 0x209500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_209504:
    // 0x209504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x209504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209508: 0x3e00008  jr          $ra
    ctx->pc = 0x209508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209508u;
        // 0x20950c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209510u;
}
