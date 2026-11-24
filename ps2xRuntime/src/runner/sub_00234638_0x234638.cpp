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

// Function: sub_00234638
// Address: 0x234638 - 0x234704
void sub_00234638_0x234638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234638_0x234638");
#endif

    switch (ctx->pc) {
        case 0x234688u: goto label_234688;
        case 0x234698u: goto label_234698;
        case 0x2346a0u: goto label_2346a0;
        case 0x2346a8u: goto label_2346a8;
        default: break;
    }

    ctx->pc = 0x234638u;

    // 0x234638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23463c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x23463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x234640: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x234640u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
    // 0x234644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x234644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x234648: 0x26c3fce0  addiu       $v1, $s6, -0x320
    ctx->pc = 0x234648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966496));
    // 0x23464c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x234650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x234650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x234654: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x234654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x234658: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x234658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23465c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x234660: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x234660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x234664: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x234664u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4BFCE0u));
    // 0x234668: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x234668u;
    {
        const bool branch_taken_0x234668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234668u;
        // 0x23466c: 0x3c15004c  lui         $s5, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234668) {
            ctx->pc = 0x2346C0u;
            goto label_2346c0;
        }
    }
    ctx->pc = 0x234670u;
    // 0x234670: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x234670u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x234674: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x234674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234678: 0x26b2fcd8  addiu       $s2, $s5, -0x328
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966488));
    // 0x23467c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234680: 0x2690fcac  addiu       $s0, $s4, -0x354
    ctx->pc = 0x234680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966444));
    // 0x234684: 0x0  nop
    ctx->pc = 0x234684u;
    // NOP
label_234688:
    // 0x234688: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x234688u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x23468c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x234690: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x234690u;
    SET_GPR_U32(ctx, 31, 0x234698u);
    ctx->pc = 0x234694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234690u;
    // 0x234694: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x234690u, 0x234698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234698u;
label_234698:
    // 0x234698: 0xc0437c4  jal         func_10DF10
    ctx->pc = 0x234698u;
    SET_GPR_U32(ctx, 31, 0x2346A0u);
    ctx->pc = 0x23469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234698u;
    // 0x23469c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DF10u, 0x234698u, 0x2346A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346A0u;
label_2346a0:
    // 0x2346a0: 0xc08ced2  jal         func_233B48
    ctx->pc = 0x2346A0u;
    SET_GPR_U32(ctx, 31, 0x2346A8u);
    ctx->pc = 0x2346A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2346A0u;
    // 0x2346a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233B48u, 0x2346A0u, 0x2346A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2346A8u;
label_2346a8:
    // 0x2346a8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x2346a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2346ac: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2346ACu;
    {
        const bool branch_taken_0x2346ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346ACu;
        // 0x2346b0: 0x26c2fce0  addiu       $v0, $s6, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346ac) {
            ctx->pc = 0x234688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234688;
        }
    }
    ctx->pc = 0x2346B4u;
    // 0x2346b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2346B4u;
    {
        const bool branch_taken_0x2346b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346B4u;
        // 0x2346b8: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346b4) {
            ctx->pc = 0x2346CCu;
            goto label_2346cc;
        }
    }
    ctx->pc = 0x2346BCu;
    // 0x2346bc: 0x0  nop
    ctx->pc = 0x2346bcu;
    // NOP
label_2346c0:
    // 0x2346c0: 0x3c14004c  lui         $s4, 0x4C
    ctx->pc = 0x2346c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)76 << 16));
    // 0x2346c4: 0x26c2fce0  addiu       $v0, $s6, -0x320
    ctx->pc = 0x2346c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966496));
    // 0x2346c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2346c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2346cc:
    // 0x2346cc: 0x26a3fcd8  addiu       $v1, $s5, -0x328
    ctx->pc = 0x2346ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294966488));
    // 0x2346d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2346d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2346d4: 0x2684fcac  addiu       $a0, $s4, -0x354
    ctx->pc = 0x2346d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966444));
    // 0x2346d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2346d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2346dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2346dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2346e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2346e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2346e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2346e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2346e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2346e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2346ec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2346ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2346f0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2346f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2346f4: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x2346f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x2346f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2346f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2346fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2346FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346FCu;
        // 0x234700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2346FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234704u;
}
