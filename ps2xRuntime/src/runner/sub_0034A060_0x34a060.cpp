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

// Function: sub_0034A060
// Address: 0x34a060 - 0x34a0d4
void sub_0034A060_0x34a060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A060_0x34a060");
#endif

    switch (ctx->pc) {
        case 0x34a078u: goto label_34a078;
        case 0x34a080u: goto label_34a080;
        case 0x34a08cu: goto label_34a08c;
        case 0x34a094u: goto label_34a094;
        case 0x34a0acu: goto label_34a0ac;
        default: break;
    }

    ctx->pc = 0x34a060u;

    // 0x34a060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34a060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34a064: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34a064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34a068: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34a068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34a06c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34a06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34a070: 0x8f918ba8  lw          $s1, -0x7458($gp)
    ctx->pc = 0x34a070u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x34a074: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34a074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34a078:
    // 0x34a078: 0xc0d271c  jal         func_349C70
    ctx->pc = 0x34A078u;
    SET_GPR_U32(ctx, 31, 0x34A080u);
    ctx->pc = 0x34A07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A078u;
    // 0x34a07c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349C70u, 0x34A078u, 0x34A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A080u;
label_34a080:
    // 0x34a080: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x34a080u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x34a084: 0xc0d2734  jal         func_349CD0
    ctx->pc = 0x34A084u;
    SET_GPR_U32(ctx, 31, 0x34A08Cu);
    ctx->pc = 0x34A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A084u;
    // 0x34a088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CD0u, 0x34A084u, 0x34A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A08Cu;
label_34a08c:
    // 0x34a08c: 0xc0d9044  jal         func_364110
    ctx->pc = 0x34A08Cu;
    SET_GPR_U32(ctx, 31, 0x34A094u);
    ctx->pc = 0x34A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A08Cu;
    // 0x34a090: 0xa6220006  sh          $v0, 0x6($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x34A08Cu, 0x34A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A094u;
label_34a094:
    // 0x34a094: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x34a094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a098: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a09c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A09Cu;
    {
        const bool branch_taken_0x34a09c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x34A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A09Cu;
        // 0x34a0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a09c) {
            ctx->pc = 0x34A0B0u;
            goto label_34a0b0;
        }
    }
    ctx->pc = 0x34A0A4u;
    // 0x34a0a4: 0xc0d2744  jal         func_349D10
    ctx->pc = 0x34A0A4u;
    SET_GPR_U32(ctx, 31, 0x34A0ACu);
    ctx->pc = 0x349D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349D10u, 0x34A0A4u, 0x34A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A0ACu;
label_34a0ac:
    // 0x34a0ac: 0xa622000a  sh          $v0, 0xA($s1)
    ctx->pc = 0x34a0acu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
label_34a0b0:
    // 0x34a0b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34a0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34a0b4: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x34a0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x34a0b8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x34A0B8u;
    {
        const bool branch_taken_0x34a0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0B8u;
        // 0x34a0bc: 0x26310064  addiu       $s1, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a0b8) {
            ctx->pc = 0x34A078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34a078;
        }
    }
    ctx->pc = 0x34A0C0u;
    // 0x34a0c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a0c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34a0c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a0c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34a0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x34A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A0CCu;
        // 0x34a0d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A0D4u;
}
