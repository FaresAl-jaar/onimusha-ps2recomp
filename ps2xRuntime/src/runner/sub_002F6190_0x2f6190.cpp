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

// Function: sub_002F6190
// Address: 0x2f6190 - 0x2f61fc
void sub_002F6190_0x2f6190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6190_0x2f6190");
#endif

    switch (ctx->pc) {
        case 0x2f61bcu: goto label_2f61bc;
        case 0x2f61c8u: goto label_2f61c8;
        case 0x2f61e4u: goto label_2f61e4;
        default: break;
    }

    ctx->pc = 0x2f6190u;

    // 0x2f6190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f619c: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f619cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f61a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F61A0u;
    {
        const bool branch_taken_0x2f61a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61A0u;
        // 0x2f61a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61a0) {
            ctx->pc = 0x2F61C0u;
            goto label_2f61c0;
        }
    }
    ctx->pc = 0x2F61A8u;
    // 0x2f61a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f61ac: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2f61acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2f61b0: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f61b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f61b4: 0xc0dc8f0  jal         func_3723C0
    ctx->pc = 0x2F61B4u;
    SET_GPR_U32(ctx, 31, 0x2F61BCu);
    ctx->pc = 0x2F61B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61B4u;
    // 0x2f61b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3723C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723C0u, 0x2F61B4u, 0x2F61BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61BCu;
label_2f61bc:
    // 0x2f61bc: 0x0  nop
    ctx->pc = 0x2f61bcu;
    // NOP
label_2f61c0:
    // 0x2f61c0: 0xc0dc8f8  jal         func_3723E0
    ctx->pc = 0x2F61C0u;
    SET_GPR_U32(ctx, 31, 0x2F61C8u);
    ctx->pc = 0x3723E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3723E0u, 0x2F61C0u, 0x2F61C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61C8u;
label_2f61c8:
    // 0x2f61c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f61c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f61cc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F61CCu;
    {
        const bool branch_taken_0x2f61cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61CCu;
        // 0x2f61d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f61cc) {
            ctx->pc = 0x2F61E8u;
            goto label_2f61e8;
        }
    }
    ctx->pc = 0x2F61D4u;
    // 0x2f61d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f61d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f61d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f61d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f61dc: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F61DCu;
    SET_GPR_U32(ctx, 31, 0x2F61E4u);
    ctx->pc = 0x2F61E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61DCu;
    // 0x2f61e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F61DCu, 0x2F61E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61E4u;
label_2f61e4:
    // 0x2f61e4: 0x0  nop
    ctx->pc = 0x2f61e4u;
    // NOP
label_2f61e8:
    // 0x2f61e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f61e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f61ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f61ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f61f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f61f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f61f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F61F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F61F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F61F4u;
        // 0x2f61f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F61F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F61FCu;
}
