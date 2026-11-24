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

// Function: sub_002ED490
// Address: 0x2ed490 - 0x2ed4e4
void sub_002ED490_0x2ed490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED490_0x2ed490");
#endif

    switch (ctx->pc) {
        case 0x2ed4acu: goto label_2ed4ac;
        case 0x2ed4d8u: goto label_2ed4d8;
        default: break;
    }

    ctx->pc = 0x2ed490u;

    // 0x2ed490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed498: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2ed498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ed49c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED49Cu;
    {
        const bool branch_taken_0x2ed49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed49c) {
            ctx->pc = 0x2ED4B8u;
            goto label_2ed4b8;
        }
    }
    ctx->pc = 0x2ED4A4u;
    // 0x2ed4a4: 0xc0a6130  jal         func_2984C0
    ctx->pc = 0x2ED4A4u;
    SET_GPR_U32(ctx, 31, 0x2ED4ACu);
    ctx->pc = 0x2ED4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED4A4u;
    // 0x2ed4a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2984C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2984C0u, 0x2ED4A4u, 0x2ED4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4ACu;
label_2ed4ac:
    // 0x2ed4ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2ED4ACu;
    {
        const bool branch_taken_0x2ed4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4ac) {
            ctx->pc = 0x2ED4D8u;
            goto label_2ed4d8;
        }
    }
    ctx->pc = 0x2ED4B4u;
    // 0x2ed4b4: 0x0  nop
    ctx->pc = 0x2ed4b4u;
    // NOP
label_2ed4b8:
    // 0x2ed4b8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ed4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ed4bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ed4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ed4c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ed4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ed4c4: 0x8c640858  lw          $a0, 0x858($v1)
    ctx->pc = 0x2ed4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x2ed4c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED4C8u;
    {
        const bool branch_taken_0x2ed4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4c8) {
            ctx->pc = 0x2ED4D8u;
            goto label_2ed4d8;
        }
    }
    ctx->pc = 0x2ED4D0u;
    // 0x2ed4d0: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x2ED4D0u;
    SET_GPR_U32(ctx, 31, 0x2ED4D8u);
    ctx->pc = 0x29C6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C6C0u, 0x2ED4D0u, 0x2ED4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4D8u;
label_2ed4d8:
    // 0x2ed4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4DCu;
        // 0x2ed4e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED4E4u;
}
