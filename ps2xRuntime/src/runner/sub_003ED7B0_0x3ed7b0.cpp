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

// Function: sub_003ED7B0
// Address: 0x3ed7b0 - 0x3ed810
void sub_003ED7B0_0x3ed7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED7B0_0x3ed7b0");
#endif

    switch (ctx->pc) {
        case 0x3ed7c4u: goto label_3ed7c4;
        case 0x3ed7dcu: goto label_3ed7dc;
        case 0x3ed7fcu: goto label_3ed7fc;
        default: break;
    }

    ctx->pc = 0x3ed7b0u;

    // 0x3ed7b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed7b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ed7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ed7bc: 0xc0fb43c  jal         func_3ED0F0
    ctx->pc = 0x3ED7BCu;
    SET_GPR_U32(ctx, 31, 0x3ED7C4u);
    ctx->pc = 0x3ED7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED7BCu;
    // 0x3ed7c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ED0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ED0F0u, 0x3ED7BCu, 0x3ED7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED7C4u;
label_3ed7c4:
    // 0x3ed7c4: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x3ed7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x3ed7c8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3ed7c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3ed7cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ED7CCu;
    {
        const bool branch_taken_0x3ed7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED7CCu;
        // 0x3ed7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed7cc) {
            ctx->pc = 0x3ED7E8u;
            goto label_3ed7e8;
        }
    }
    ctx->pc = 0x3ED7D4u;
    // 0x3ed7d4: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x3ED7D4u;
    SET_GPR_U32(ctx, 31, 0x3ED7DCu);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x3ED7D4u, 0x3ED7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED7DCu;
label_3ed7dc:
    // 0x3ed7dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3ED7DCu;
    {
        const bool branch_taken_0x3ed7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed7dc) {
            ctx->pc = 0x3ED800u;
            goto label_3ed800;
        }
    }
    ctx->pc = 0x3ED7E4u;
    // 0x3ed7e4: 0x0  nop
    ctx->pc = 0x3ed7e4u;
    // NOP
label_3ed7e8:
    // 0x3ed7e8: 0x9602078c  lhu         $v0, 0x78C($s0)
    ctx->pc = 0x3ed7e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1932)));
    // 0x3ed7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed7f0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3ed7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3ed7f4: 0xc0fb290  jal         func_3ECA40
    ctx->pc = 0x3ED7F4u;
    SET_GPR_U32(ctx, 31, 0x3ED7FCu);
    ctx->pc = 0x3ED7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED7F4u;
    // 0x3ed7f8: 0xa602078c  sh          $v0, 0x78C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1932), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECA40u, 0x3ED7F4u, 0x3ED7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED7FCu;
label_3ed7fc:
    // 0x3ed7fc: 0x0  nop
    ctx->pc = 0x3ed7fcu;
    // NOP
label_3ed800:
    // 0x3ed800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed808: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED808u;
        // 0x3ed80c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED810u;
}
