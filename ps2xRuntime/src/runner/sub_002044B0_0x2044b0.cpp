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

// Function: sub_002044B0
// Address: 0x2044b0 - 0x204500
void sub_002044B0_0x2044b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002044B0_0x2044b0");
#endif

    switch (ctx->pc) {
        case 0x2044e4u: goto label_2044e4;
        default: break;
    }

    ctx->pc = 0x2044b0u;

    // 0x2044b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2044b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2044b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2044b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2044b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2044b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2044bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2044c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2044c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2044c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2044c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2044c8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2044c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2044cc: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x2044ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x2044d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2044d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2044d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2044D4u;
    {
        const bool branch_taken_0x2044d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2044d4) {
            ctx->pc = 0x2044D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2044D4u;
            // 0x2044d8: 0xae030190  sw          $v1, 0x190($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2044ECu;
            goto label_2044ec;
        }
    }
    ctx->pc = 0x2044DCu;
    // 0x2044dc: 0xc082544  jal         func_209510
    ctx->pc = 0x2044DCu;
    SET_GPR_U32(ctx, 31, 0x2044E4u);
    ctx->pc = 0x209510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209510u, 0x2044DCu, 0x2044E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2044E4u;
label_2044e4:
    // 0x2044e4: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2044e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2044e8: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x2044e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
label_2044ec:
    // 0x2044ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2044ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2044f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2044f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2044f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2044f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2044f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2044F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2044FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2044F8u;
        // 0x2044fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2044F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204500u;
}
