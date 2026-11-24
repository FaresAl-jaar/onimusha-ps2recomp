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

// Function: sub_003362F0
// Address: 0x3362f0 - 0x336398
void sub_003362F0_0x3362f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003362F0_0x3362f0");
#endif

    switch (ctx->pc) {
        case 0x336304u: goto label_336304;
        case 0x336348u: goto label_336348;
        case 0x336374u: goto label_336374;
        case 0x336388u: goto label_336388;
        default: break;
    }

    ctx->pc = 0x3362f0u;

    // 0x3362f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3362f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3362f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3362f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3362f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3362f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3362fc: 0xc0a6de4  jal         func_29B790
    ctx->pc = 0x3362FCu;
    SET_GPR_U32(ctx, 31, 0x336304u);
    ctx->pc = 0x336300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3362FCu;
    // 0x336300: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B790u, 0x3362FCu, 0x336304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336304u;
label_336304:
    // 0x336304: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x336308: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x336308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33630c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x33630Cu;
    {
        const bool branch_taken_0x33630c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33630c) {
            ctx->pc = 0x336388u;
            goto label_336388;
        }
    }
    ctx->pc = 0x336314u;
    // 0x336314: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x336314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x336318: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x336318u;
    {
        const bool branch_taken_0x336318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336318) {
            ctx->pc = 0x336380u;
            goto label_336380;
        }
    }
    ctx->pc = 0x336320u;
    // 0x336320: 0x92022ac0  lbu         $v0, 0x2AC0($s0)
    ctx->pc = 0x336320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x336324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x336324u;
    {
        const bool branch_taken_0x336324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336324) {
            ctx->pc = 0x336348u;
            goto label_336348;
        }
    }
    ctx->pc = 0x33632Cu;
    // 0x33632c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336330: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x336330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x336334: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33633c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x33633cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336340: 0xc09fbec  jal         func_27EFB0
    ctx->pc = 0x336340u;
    SET_GPR_U32(ctx, 31, 0x336348u);
    ctx->pc = 0x336344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336340u;
    // 0x336344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EFB0u, 0x336340u, 0x336348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336348u;
label_336348:
    // 0x336348: 0x92022ac1  lbu         $v0, 0x2AC1($s0)
    ctx->pc = 0x336348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10945)));
    // 0x33634c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33634Cu;
    {
        const bool branch_taken_0x33634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33634c) {
            ctx->pc = 0x336378u;
            goto label_336378;
        }
    }
    ctx->pc = 0x336354u;
    // 0x336354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x336354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336358: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x336358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x33635c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x33635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x336360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336364: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x336364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x336368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33636c: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x33636Cu;
    SET_GPR_U32(ctx, 31, 0x336374u);
    ctx->pc = 0x336370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33636Cu;
    // 0x336370: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x33636Cu, 0x336374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336374u;
label_336374:
    // 0x336374: 0x0  nop
    ctx->pc = 0x336374u;
    // NOP
label_336378:
    // 0x336378: 0xa2002ac0  sb          $zero, 0x2AC0($s0)
    ctx->pc = 0x336378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10944), (uint8_t)GPR_U32(ctx, 0));
    // 0x33637c: 0xa2002ac1  sb          $zero, 0x2AC1($s0)
    ctx->pc = 0x33637cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10945), (uint8_t)GPR_U32(ctx, 0));
label_336380:
    // 0x336380: 0xc09f918  jal         func_27E460
    ctx->pc = 0x336380u;
    SET_GPR_U32(ctx, 31, 0x336388u);
    ctx->pc = 0x336384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336380u;
    // 0x336384: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E460u, 0x336380u, 0x336388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336388u;
label_336388:
    // 0x336388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33638c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33638cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336390: 0x3e00008  jr          $ra
    ctx->pc = 0x336390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336390u;
        // 0x336394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336398u;
}
