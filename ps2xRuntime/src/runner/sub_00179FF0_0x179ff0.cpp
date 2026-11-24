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

// Function: sub_00179FF0
// Address: 0x179ff0 - 0x17a070
void sub_00179FF0_0x179ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179FF0_0x179ff0");
#endif

    switch (ctx->pc) {
        case 0x17a028u: goto label_17a028;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a048u: goto label_17a048;
        default: break;
    }

    ctx->pc = 0x179ff0u;

    // 0x179ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x179ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x179ff4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x179ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x179ff8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179ffc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x179ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x17a000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a010: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x17a010u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x17a014: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17a014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17a018: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x17A018u;
    {
        const bool branch_taken_0x17a018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a018) {
            ctx->pc = 0x17A058u;
            goto label_17a058;
        }
    }
    ctx->pc = 0x17A020u;
    // 0x17a020: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17a020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a024: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17a024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a028:
    // 0x17a028: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x17a028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a02c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A02Cu;
    {
        const bool branch_taken_0x17a02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A02Cu;
        // 0x17a030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a02c) {
            ctx->pc = 0x17A048u;
            goto label_17a048;
        }
    }
    ctx->pc = 0x17A034u;
    // 0x17a034: 0xc05e750  jal         func_179D40
    ctx->pc = 0x17A034u;
    SET_GPR_U32(ctx, 31, 0x17A03Cu);
    ctx->pc = 0x17A038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A034u;
    // 0x17a038: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D40u, 0x17A034u, 0x17A03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A03Cu;
label_17a03c:
    // 0x17a03c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a040: 0xc05e7c0  jal         func_179F00
    ctx->pc = 0x17A040u;
    SET_GPR_U32(ctx, 31, 0x17A048u);
    ctx->pc = 0x17A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A040u;
    // 0x17a044: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179F00u, 0x17A040u, 0x17A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A048u;
label_17a048:
    // 0x17a048: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17a048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17a04c: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x17a04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17a050: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x17A050u;
    {
        const bool branch_taken_0x17a050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A050u;
        // 0x17a054: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a050) {
            ctx->pc = 0x17A028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a028;
        }
    }
    ctx->pc = 0x17A058u;
label_17a058:
    // 0x17a058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a05c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a05cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a060: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a068: 0x3e00008  jr          $ra
    ctx->pc = 0x17A068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A068u;
        // 0x17a06c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A070u;
}
