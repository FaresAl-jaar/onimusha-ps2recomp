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

// Function: sub_00341640
// Address: 0x341640 - 0x3416c8
void sub_00341640_0x341640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341640_0x341640");
#endif

    switch (ctx->pc) {
        case 0x3416bcu: goto label_3416bc;
        default: break;
    }

    ctx->pc = 0x341640u;

    // 0x341640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341644: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x341644u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34164c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x34164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x341650: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x341650u;
    {
        const bool branch_taken_0x341650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341650u;
        // 0x341654: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341650) {
            ctx->pc = 0x341668u;
            goto label_341668;
        }
    }
    ctx->pc = 0x341658u;
    // 0x341658: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x341658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x34165c: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x34165cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x341660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x341660u;
    {
        const bool branch_taken_0x341660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341660u;
        // 0x341664: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341660) {
            ctx->pc = 0x341670u;
            goto label_341670;
        }
    }
    ctx->pc = 0x341668u;
label_341668:
    // 0x341668: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x341668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x34166c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_341670:
    // 0x341670: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341674: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x341674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x341678: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x341678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34167c: 0x90cc0003  lbu         $t4, 0x3($a2)
    ctx->pc = 0x34167cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x341680: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x341680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x341684: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x341684u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x341688: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x341688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34168c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x34168cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x341690: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x341690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341694: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341694u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341698: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x341698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34169c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34169cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3416a0: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x3416a0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3416a4: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x3416a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x3416a8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3416a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3416ac: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x3416acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3416b0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3416b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3416b4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3416B4u;
    SET_GPR_U32(ctx, 31, 0x3416BCu);
    ctx->pc = 0x3416B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3416B4u;
    // 0x3416b8: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3416B4u, 0x3416BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3416BCu;
label_3416bc:
    // 0x3416bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3416bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3416c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3416C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3416C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3416C0u;
        // 0x3416c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3416C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3416C8u;
}
