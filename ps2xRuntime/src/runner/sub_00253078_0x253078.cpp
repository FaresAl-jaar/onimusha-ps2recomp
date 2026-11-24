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

// Function: sub_00253078
// Address: 0x253078 - 0x2530f0
void sub_00253078_0x253078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253078_0x253078");
#endif

    switch (ctx->pc) {
        case 0x253078u: goto label_253078;
        case 0x25307cu: goto label_25307c;
        case 0x253080u: goto label_253080;
        case 0x253084u: goto label_253084;
        case 0x253088u: goto label_253088;
        case 0x25308cu: goto label_25308c;
        case 0x253090u: goto label_253090;
        case 0x253094u: goto label_253094;
        case 0x253098u: goto label_253098;
        case 0x25309cu: goto label_25309c;
        case 0x2530a0u: goto label_2530a0;
        case 0x2530a4u: goto label_2530a4;
        case 0x2530a8u: goto label_2530a8;
        case 0x2530acu: goto label_2530ac;
        case 0x2530b0u: goto label_2530b0;
        case 0x2530b4u: goto label_2530b4;
        case 0x2530b8u: goto label_2530b8;
        case 0x2530bcu: goto label_2530bc;
        case 0x2530c0u: goto label_2530c0;
        case 0x2530c4u: goto label_2530c4;
        case 0x2530c8u: goto label_2530c8;
        case 0x2530ccu: goto label_2530cc;
        case 0x2530d0u: goto label_2530d0;
        case 0x2530d4u: goto label_2530d4;
        case 0x2530d8u: goto label_2530d8;
        case 0x2530dcu: goto label_2530dc;
        case 0x2530e0u: goto label_2530e0;
        case 0x2530e4u: goto label_2530e4;
        case 0x2530e8u: goto label_2530e8;
        case 0x2530ecu: goto label_2530ec;
        default: break;
    }

    ctx->pc = 0x253078u;

label_253078:
    // 0x253078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25307c:
    // 0x25307c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253080:
    // 0x253080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_253084:
    // 0x253084: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_253088:
    if (ctx->pc == 0x253088u) {
        ctx->pc = 0x253088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253084u;
        // 0x253088: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25308Cu;
        goto label_25308c;
    }
    ctx->pc = 0x253084u;
    {
        const bool branch_taken_0x253084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x253088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253084u;
        // 0x253088: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253084) {
            ctx->pc = 0x2530B0u;
            goto label_2530b0;
        }
    }
    ctx->pc = 0x25308Cu;
label_25308c:
    // 0x25308c: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x25308cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253090:
    // 0x253090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_253094:
    // 0x253094: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x253094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
label_253098:
    // 0x253098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x253098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25309c:
    // 0x25309c: 0x60f809  jalr        $v1
label_2530a0:
    if (ctx->pc == 0x2530A0u) {
        ctx->pc = 0x2530A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25309Cu;
        // 0x2530a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530A4u;
        goto label_2530a4;
    }
    ctx->pc = 0x25309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2530A4u);
        ctx->pc = 0x2530A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25309Cu;
        // 0x2530a0: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25309Cu, 0x2530A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2530A4u;
label_2530a4:
    // 0x2530a4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2530a8:
    if (ctx->pc == 0x2530A8u) {
        ctx->pc = 0x2530A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530A4u;
        // 0x2530a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530ACu;
        goto label_2530ac;
    }
    ctx->pc = 0x2530A4u;
    {
        const bool branch_taken_0x2530a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530A4u;
        // 0x2530a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530a4) {
            ctx->pc = 0x2530E4u;
            goto label_2530e4;
        }
    }
    ctx->pc = 0x2530ACu;
label_2530ac:
    // 0x2530ac: 0x0  nop
    ctx->pc = 0x2530acu;
    // NOP
label_2530b0:
    // 0x2530b0: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x2530b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
label_2530b4:
    // 0x2530b4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x2530b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2530b8:
    // 0x2530b8: 0x26100758  addiu       $s0, $s0, 0x758
    ctx->pc = 0x2530b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1880));
label_2530bc:
    // 0x2530bc: 0xc04a040  jal         func_128100
label_2530c0:
    if (ctx->pc == 0x2530C0u) {
        ctx->pc = 0x2530C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530BCu;
        // 0x2530c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530C4u;
        goto label_2530c4;
    }
    ctx->pc = 0x2530BCu;
    SET_GPR_U32(ctx, 31, 0x2530C4u);
    ctx->pc = 0x2530C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530BCu;
    // 0x2530c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128100u, 0x2530BCu, 0x2530C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530C4u;
label_2530c4:
    // 0x2530c4: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2530c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_2530c8:
    // 0x2530c8: 0x24428970  addiu       $v0, $v0, -0x7690
    ctx->pc = 0x2530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936944));
label_2530cc:
    // 0x2530cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2530ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2530d0:
    // 0x2530d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2530d4:
    if (ctx->pc == 0x2530D4u) {
        ctx->pc = 0x2530D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530D0u;
        // 0x2530d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530D8u;
        goto label_2530d8;
    }
    ctx->pc = 0x2530D0u;
    {
        const bool branch_taken_0x2530d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530D0u;
        // 0x2530d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530d0) {
            ctx->pc = 0x2530E0u;
            goto label_2530e0;
        }
    }
    ctx->pc = 0x2530D8u;
label_2530d8:
    // 0x2530d8: 0x60f809  jalr        $v1
label_2530dc:
    if (ctx->pc == 0x2530DCu) {
        ctx->pc = 0x2530DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530D8u;
        // 0x2530dc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530E0u;
        goto label_2530e0;
    }
    ctx->pc = 0x2530D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2530E0u);
        ctx->pc = 0x2530DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530D8u;
        // 0x2530dc: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530D8u, 0x2530E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2530E0u;
label_2530e0:
    // 0x2530e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2530e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2530e4:
    // 0x2530e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2530e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2530e8:
    // 0x2530e8: 0x3e00008  jr          $ra
label_2530ec:
    if (ctx->pc == 0x2530ECu) {
        ctx->pc = 0x2530ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E8u;
        // 0x2530ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2530F0u;
        goto label_fallthrough_0x2530e8;
    }
    ctx->pc = 0x2530E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2530ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530E8u;
        // 0x2530ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2530e8:
    ctx->pc = 0x2530F0u;
}
