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

// Function: sub_0034F150
// Address: 0x34f150 - 0x34f20c
void sub_0034F150_0x34f150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034F150_0x34f150");
#endif

    switch (ctx->pc) {
        case 0x34f174u: goto label_34f174;
        case 0x34f188u: goto label_34f188;
        case 0x34f198u: goto label_34f198;
        case 0x34f1a8u: goto label_34f1a8;
        case 0x34f1ccu: goto label_34f1cc;
        case 0x34f1ecu: goto label_34f1ec;
        default: break;
    }

    ctx->pc = 0x34f150u;

    // 0x34f150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34f154: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x34f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34f158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34f158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34f15c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34f15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34f160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34f164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34f164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34f16c: 0xc0d3860  jal         func_34E180
    ctx->pc = 0x34F16Cu;
    SET_GPR_U32(ctx, 31, 0x34F174u);
    ctx->pc = 0x34F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F16Cu;
    // 0x34f170: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E180u, 0x34F16Cu, 0x34F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F174u;
label_34f174:
    // 0x34f174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f178: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34F178u;
    {
        const bool branch_taken_0x34f178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f178) {
            ctx->pc = 0x34F1F0u;
            goto label_34f1f0;
        }
    }
    ctx->pc = 0x34F180u;
    // 0x34f180: 0xc0d436c  jal         func_350DB0
    ctx->pc = 0x34F180u;
    SET_GPR_U32(ctx, 31, 0x34F188u);
    ctx->pc = 0x350DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350DB0u, 0x34F180u, 0x34F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F188u;
label_34f188:
    // 0x34f188: 0x3c100065  lui         $s0, 0x65
    ctx->pc = 0x34f188u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)101 << 16));
    // 0x34f18c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34f18cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f190: 0x26107c40  addiu       $s0, $s0, 0x7C40
    ctx->pc = 0x34f190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31808));
    // 0x34f194: 0x0  nop
    ctx->pc = 0x34f194u;
    // NOP
label_34f198:
    // 0x34f198: 0x92110000  lbu         $s1, 0x0($s0)
    ctx->pc = 0x34f198u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34f19c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x34f19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f1a0: 0xc0d3a8c  jal         func_34EA30
    ctx->pc = 0x34F1A0u;
    SET_GPR_U32(ctx, 31, 0x34F1A8u);
    ctx->pc = 0x34F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F1A0u;
    // 0x34f1a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EA30u, 0x34F1A0u, 0x34F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1A8u;
label_34f1a8:
    // 0x34f1a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34F1A8u;
    {
        const bool branch_taken_0x34f1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f1a8) {
            ctx->pc = 0x34F1D0u;
            goto label_34f1d0;
        }
    }
    ctx->pc = 0x34F1B0u;
    // 0x34f1b0: 0x9262002d  lbu         $v0, 0x2D($s3)
    ctx->pc = 0x34f1b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 45)));
    // 0x34f1b4: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34F1B4u;
    {
        const bool branch_taken_0x34f1b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x34f1b4) {
            ctx->pc = 0x34F1D0u;
            goto label_34f1d0;
        }
    }
    ctx->pc = 0x34F1BCu;
    // 0x34f1bc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x34f1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x34f1c0: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x34f1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x34f1c4: 0xc0d3644  jal         func_34D910
    ctx->pc = 0x34F1C4u;
    SET_GPR_U32(ctx, 31, 0x34F1CCu);
    ctx->pc = 0x34F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F1C4u;
    // 0x34f1c8: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D910u, 0x34F1C4u, 0x34F1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1CCu;
label_34f1cc:
    // 0x34f1cc: 0x0  nop
    ctx->pc = 0x34f1ccu;
    // NOP
label_34f1d0:
    // 0x34f1d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34f1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34f1d4: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x34f1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x34f1d8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x34F1D8u;
    {
        const bool branch_taken_0x34f1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F1D8u;
        // 0x34f1dc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f1d8) {
            ctx->pc = 0x34F198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34f198;
        }
    }
    ctx->pc = 0x34F1E0u;
    // 0x34f1e0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x34f1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x34f1e4: 0xc0d36a4  jal         func_34DA90
    ctx->pc = 0x34F1E4u;
    SET_GPR_U32(ctx, 31, 0x34F1ECu);
    ctx->pc = 0x34F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34F1E4u;
    // 0x34f1e8: 0x3c050103  lui         $a1, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DA90u, 0x34F1E4u, 0x34F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F1ECu;
label_34f1ec:
    // 0x34f1ec: 0x0  nop
    ctx->pc = 0x34f1ecu;
    // NOP
label_34f1f0:
    // 0x34f1f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34f1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34f1f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34f1f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34f1f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34f1f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34f1fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34f1fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34f200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34f200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f204: 0x3e00008  jr          $ra
    ctx->pc = 0x34F204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F204u;
        // 0x34f208: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F20Cu;
}
