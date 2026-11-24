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

// Function: sub_0021A048
// Address: 0x21a048 - 0x21a0d0
void sub_0021A048_0x21a048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A048_0x21a048");
#endif

    switch (ctx->pc) {
        case 0x21a060u: goto label_21a060;
        case 0x21a080u: goto label_21a080;
        case 0x21a0bcu: goto label_21a0bc;
        default: break;
    }

    ctx->pc = 0x21a048u;

    // 0x21a048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a04c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21a04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21a050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21a050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a054: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21a058: 0xc084990  jal         func_212640
    ctx->pc = 0x21A058u;
    SET_GPR_U32(ctx, 31, 0x21A060u);
    ctx->pc = 0x21A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A058u;
    // 0x21a05c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212640u, 0x21A058u, 0x21A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A060u;
label_21a060:
    // 0x21a060: 0x8e021fc0  lw          $v0, 0x1FC0($s0)
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8128)));
    // 0x21a064: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21a064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a068: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x21a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x21a06c: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x21A06Cu;
    {
        const bool branch_taken_0x21a06c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A06Cu;
        // 0x21a070: 0x24500180  addiu       $s0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a06c) {
            ctx->pc = 0x21A0ACu;
            goto label_21a0ac;
        }
    }
    ctx->pc = 0x21A074u;
    // 0x21a074: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A074u;
    {
        const bool branch_taken_0x21a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A074u;
        // 0x21a078: 0xde020000  ld          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a074) {
            ctx->pc = 0x21A090u;
            goto label_21a090;
        }
    }
    ctx->pc = 0x21A07Cu;
    // 0x21a07c: 0x0  nop
    ctx->pc = 0x21a07cu;
    // NOP
label_21a080:
    // 0x21a080: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x21a080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x21a084: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21A084u;
    {
        const bool branch_taken_0x21a084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A084u;
        // 0x21a088: 0x261000f0  addiu       $s0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a084) {
            ctx->pc = 0x21A0ACu;
            goto label_21a0ac;
        }
    }
    ctx->pc = 0x21A08Cu;
    // 0x21a08c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x21a08cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_21a090:
    // 0x21a090: 0x0  nop
    ctx->pc = 0x21a090u;
    // NOP
    // 0x21a094: 0x0  nop
    ctx->pc = 0x21a094u;
    // NOP
    // 0x21a098: 0x0  nop
    ctx->pc = 0x21a098u;
    // NOP
    // 0x21a09c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21A09Cu;
    {
        const bool branch_taken_0x21a09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a09c) {
            ctx->pc = 0x21A0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A09Cu;
            // 0x21a0a0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a080;
        }
    }
    ctx->pc = 0x21A0A4u;
    // 0x21a0a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21a0a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21a0ac:
    // 0x21a0ac: 0x641026  xor         $v0, $v1, $a0
    ctx->pc = 0x21a0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x21a0b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21a0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0b4: 0xc084996  jal         func_212658
    ctx->pc = 0x21A0B4u;
    SET_GPR_U32(ctx, 31, 0x21A0BCu);
    ctx->pc = 0x21A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A0B4u;
    // 0x21a0b8: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212658u, 0x21A0B4u, 0x21A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0BCu;
label_21a0bc:
    // 0x21a0bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21a0c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21a0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a0c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21a0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x21A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0C8u;
        // 0x21a0cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0D0u;
}
