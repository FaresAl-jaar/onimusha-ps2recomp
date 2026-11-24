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

// Function: sub_00224070
// Address: 0x224070 - 0x2240bc
void sub_00224070_0x224070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224070_0x224070");
#endif

    switch (ctx->pc) {
        case 0x224094u: goto label_224094;
        default: break;
    }

    ctx->pc = 0x224070u;

    // 0x224070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22407c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22407cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x224084: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x224084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x224088: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x224088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x22408c: 0xc088e5e  jal         func_223978
    ctx->pc = 0x22408Cu;
    SET_GPR_U32(ctx, 31, 0x224094u);
    ctx->pc = 0x224090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22408Cu;
    // 0x224090: 0x24500080  addiu       $s0, $v0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223978u, 0x22408Cu, 0x224094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224094u;
label_224094:
    // 0x224094: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224094u;
    {
        const bool branch_taken_0x224094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224094) {
            ctx->pc = 0x224098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224094u;
            // 0x224098: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2240ACu;
            goto label_2240ac;
        }
    }
    ctx->pc = 0x22409Cu;
    // 0x22409c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x22409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2240a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2240a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2240a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2240a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2240a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2240a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2240ac:
    // 0x2240ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2240acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2240b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2240b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2240b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2240B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2240B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2240B4u;
        // 0x2240b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2240B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2240BCu;
}
