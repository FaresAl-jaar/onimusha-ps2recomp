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

// Function: sub_001DD190
// Address: 0x1dd190 - 0x1dd1e4
void sub_001DD190_0x1dd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD190_0x1dd190");
#endif

    switch (ctx->pc) {
        case 0x1dd190u: goto label_1dd190;
        case 0x1dd194u: goto label_1dd194;
        case 0x1dd198u: goto label_1dd198;
        case 0x1dd19cu: goto label_1dd19c;
        case 0x1dd1a0u: goto label_1dd1a0;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1a8u: goto label_1dd1a8;
        case 0x1dd1acu: goto label_1dd1ac;
        case 0x1dd1b0u: goto label_1dd1b0;
        case 0x1dd1b4u: goto label_1dd1b4;
        case 0x1dd1b8u: goto label_1dd1b8;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1c0u: goto label_1dd1c0;
        case 0x1dd1c4u: goto label_1dd1c4;
        case 0x1dd1c8u: goto label_1dd1c8;
        case 0x1dd1ccu: goto label_1dd1cc;
        case 0x1dd1d0u: goto label_1dd1d0;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1d8u: goto label_1dd1d8;
        case 0x1dd1dcu: goto label_1dd1dc;
        case 0x1dd1e0u: goto label_1dd1e0;
        default: break;
    }

    ctx->pc = 0x1dd190u;

label_1dd190:
    // 0x1dd190: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1dd194:
    // 0x1dd194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dd194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1dd198:
    // 0x1dd198: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dd19c:
    // 0x1dd19c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1a0:
    // 0x1dd1a0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1dd1a4:
    if (ctx->pc == 0x1DD1A4u) {
        ctx->pc = 0x1DD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1A0u;
        // 0x1dd1a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1A8u;
        goto label_1dd1a8;
    }
    ctx->pc = 0x1DD1A0u;
    {
        const bool branch_taken_0x1dd1a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1A0u;
        // 0x1dd1a4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1a0) {
            ctx->pc = 0x1DD1D0u;
            goto label_1dd1d0;
        }
    }
    ctx->pc = 0x1DD1A8u;
label_1dd1a8:
    // 0x1dd1a8: 0x24426230  addiu       $v0, $v0, 0x6230
    ctx->pc = 0x1dd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25136));
label_1dd1ac:
    // 0x1dd1ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dd1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dd1b0:
    // 0x1dd1b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dd1b4:
    // 0x1dd1b4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1dd1b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1dd1b8:
    // 0x1dd1b8: 0x320f809  jalr        $t9
label_1dd1bc:
    if (ctx->pc == 0x1DD1BCu) {
        ctx->pc = 0x1DD1C0u;
        goto label_1dd1c0;
    }
    ctx->pc = 0x1DD1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DD1C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1B8u, 0x1DD1C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD1C0u;
label_1dd1c0:
    // 0x1dd1c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1dd1c4:
    if (ctx->pc == 0x1DD1C4u) {
        ctx->pc = 0x1DD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1C0u;
        // 0x1dd1c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1C8u;
        goto label_1dd1c8;
    }
    ctx->pc = 0x1DD1C0u;
    {
        const bool branch_taken_0x1dd1c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1C0u;
        // 0x1dd1c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd1c0) {
            ctx->pc = 0x1DD1D0u;
            goto label_1dd1d0;
        }
    }
    ctx->pc = 0x1DD1C8u;
label_1dd1c8:
    // 0x1dd1c8: 0x244260e0  addiu       $v0, $v0, 0x60E0
    ctx->pc = 0x1dd1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24800));
label_1dd1cc:
    // 0x1dd1cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1dd1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1dd1d0:
    // 0x1dd1d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1dd1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dd1d4:
    // 0x1dd1d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dd1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd1d8:
    // 0x1dd1d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd1dc:
    // 0x1dd1dc: 0x3e00008  jr          $ra
label_1dd1e0:
    if (ctx->pc == 0x1DD1E0u) {
        ctx->pc = 0x1DD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1DCu;
        // 0x1dd1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD1E4u;
        goto label_fallthrough_0x1dd1dc;
    }
    ctx->pc = 0x1DD1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD1DCu;
        // 0x1dd1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dd1dc:
    ctx->pc = 0x1DD1E4u;
}
