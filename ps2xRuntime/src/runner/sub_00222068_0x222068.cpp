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

// Function: sub_00222068
// Address: 0x222068 - 0x222104
void sub_00222068_0x222068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222068_0x222068");
#endif

    switch (ctx->pc) {
        case 0x22208cu: goto label_22208c;
        case 0x22209cu: goto label_22209c;
        case 0x2220b8u: goto label_2220b8;
        case 0x2220c8u: goto label_2220c8;
        default: break;
    }

    ctx->pc = 0x222068u;

    // 0x222068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x222068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22206c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22206cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x222070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x222074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x222078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22207c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222084: 0xc0888a2  jal         func_222288
    ctx->pc = 0x222084u;
    SET_GPR_U32(ctx, 31, 0x22208Cu);
    ctx->pc = 0x222088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222084u;
    // 0x222088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x222084u, 0x22208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22208Cu;
label_22208c:
    // 0x22208c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22208cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222090: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x222090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x222094: 0xc088872  jal         func_2221C8
    ctx->pc = 0x222094u;
    SET_GPR_U32(ctx, 31, 0x22209Cu);
    ctx->pc = 0x222098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222094u;
    // 0x222098: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x222094u, 0x22209Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22209Cu;
label_22209c:
    // 0x22209c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2220a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2220a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2220a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2220A8u;
    {
        const bool branch_taken_0x2220a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2220ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2220A8u;
        // 0x2220ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2220a8) {
            ctx->pc = 0x2220E8u;
            goto label_2220e8;
        }
    }
    ctx->pc = 0x2220B0u;
    // 0x2220b0: 0xc0888a2  jal         func_222288
    ctx->pc = 0x2220B0u;
    SET_GPR_U32(ctx, 31, 0x2220B8u);
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2220B0u, 0x2220B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220B8u;
label_2220b8:
    // 0x2220b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2220b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2220c0: 0xc088872  jal         func_2221C8
    ctx->pc = 0x2220C0u;
    SET_GPR_U32(ctx, 31, 0x2220C8u);
    ctx->pc = 0x2220C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220C0u;
    // 0x2220c4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221C8u, 0x2220C0u, 0x2220C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220C8u;
label_2220c8:
    // 0x2220c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2220c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2220ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2220d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2220d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2220d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2220d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2220d8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2220d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2220dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2220dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220e0: 0x80888a2  j           func_222288
    ctx->pc = 0x2220E0u;
    ctx->pc = 0x2220E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220E0u;
    // 0x2220e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    sub_00222288_0x222288(rdram, ctx, runtime); return;
    ctx->pc = 0x2220E8u;
label_2220e8:
    // 0x2220e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2220e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2220ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2220ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2220f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2220f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2220f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220f8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2220f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2220fc: 0x80888a2  j           func_222288
    ctx->pc = 0x2220FCu;
    ctx->pc = 0x222100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2220FCu;
    // 0x222100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    sub_00222288_0x222288(rdram, ctx, runtime); return;
    ctx->pc = 0x222104u;
}
