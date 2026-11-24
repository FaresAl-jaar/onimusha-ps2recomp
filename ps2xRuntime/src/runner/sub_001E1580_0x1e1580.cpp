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

// Function: sub_001E1580
// Address: 0x1e1580 - 0x1e15d4
void sub_001E1580_0x1e1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1580_0x1e1580");
#endif

    switch (ctx->pc) {
        case 0x1e1580u: goto label_1e1580;
        case 0x1e1584u: goto label_1e1584;
        case 0x1e1588u: goto label_1e1588;
        case 0x1e158cu: goto label_1e158c;
        case 0x1e1590u: goto label_1e1590;
        case 0x1e1594u: goto label_1e1594;
        case 0x1e1598u: goto label_1e1598;
        case 0x1e159cu: goto label_1e159c;
        case 0x1e15a0u: goto label_1e15a0;
        case 0x1e15a4u: goto label_1e15a4;
        case 0x1e15a8u: goto label_1e15a8;
        case 0x1e15acu: goto label_1e15ac;
        case 0x1e15b0u: goto label_1e15b0;
        case 0x1e15b4u: goto label_1e15b4;
        case 0x1e15b8u: goto label_1e15b8;
        case 0x1e15bcu: goto label_1e15bc;
        case 0x1e15c0u: goto label_1e15c0;
        case 0x1e15c4u: goto label_1e15c4;
        case 0x1e15c8u: goto label_1e15c8;
        case 0x1e15ccu: goto label_1e15cc;
        case 0x1e15d0u: goto label_1e15d0;
        default: break;
    }

    ctx->pc = 0x1e1580u;

label_1e1580:
    // 0x1e1580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1584:
    // 0x1e1584: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e1584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e1588:
    // 0x1e1588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e158c:
    // 0x1e158c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e158cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1590:
    // 0x1e1590: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1e1594:
    if (ctx->pc == 0x1E1594u) {
        ctx->pc = 0x1E1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1590u;
        // 0x1e1594: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1598u;
        goto label_1e1598;
    }
    ctx->pc = 0x1E1590u;
    {
        const bool branch_taken_0x1e1590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1590u;
        // 0x1e1594: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1590) {
            ctx->pc = 0x1E15C0u;
            goto label_1e15c0;
        }
    }
    ctx->pc = 0x1E1598u;
label_1e1598:
    // 0x1e1598: 0x24426770  addiu       $v0, $v0, 0x6770
    ctx->pc = 0x1e1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26480));
label_1e159c:
    // 0x1e159c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e159cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e15a0:
    // 0x1e15a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e15a4:
    // 0x1e15a4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e15a8:
    // 0x1e15a8: 0x320f809  jalr        $t9
label_1e15ac:
    if (ctx->pc == 0x1E15ACu) {
        ctx->pc = 0x1E15B0u;
        goto label_1e15b0;
    }
    ctx->pc = 0x1E15A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E15B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E15A8u, 0x1E15B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E15B0u;
label_1e15b0:
    // 0x1e15b0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1e15b4:
    if (ctx->pc == 0x1E15B4u) {
        ctx->pc = 0x1E15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B0u;
        // 0x1e15b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15B8u;
        goto label_1e15b8;
    }
    ctx->pc = 0x1E15B0u;
    {
        const bool branch_taken_0x1e15b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E15B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15B0u;
        // 0x1e15b4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e15b0) {
            ctx->pc = 0x1E15C0u;
            goto label_1e15c0;
        }
    }
    ctx->pc = 0x1E15B8u;
label_1e15b8:
    // 0x1e15b8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1e15bc:
    // 0x1e15bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e15c0:
    // 0x1e15c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e15c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e15c4:
    // 0x1e15c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e15c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e15c8:
    // 0x1e15c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e15c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e15cc:
    // 0x1e15cc: 0x3e00008  jr          $ra
label_1e15d0:
    if (ctx->pc == 0x1E15D0u) {
        ctx->pc = 0x1E15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15CCu;
        // 0x1e15d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E15D4u;
        goto label_fallthrough_0x1e15cc;
    }
    ctx->pc = 0x1E15CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E15CCu;
        // 0x1e15d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E15CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e15cc:
    ctx->pc = 0x1E15D4u;
}
