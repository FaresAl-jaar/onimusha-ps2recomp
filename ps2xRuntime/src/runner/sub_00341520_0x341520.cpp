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

// Function: sub_00341520
// Address: 0x341520 - 0x3415ac
void sub_00341520_0x341520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341520_0x341520");
#endif

    switch (ctx->pc) {
        case 0x3415a0u: goto label_3415a0;
        default: break;
    }

    ctx->pc = 0x341520u;

    // 0x341520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x341520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x341524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x341528: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x341528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x34152c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34152Cu;
    {
        const bool branch_taken_0x34152c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34152Cu;
        // 0x341530: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34152c) {
            ctx->pc = 0x341548u;
            goto label_341548;
        }
    }
    ctx->pc = 0x341534u;
    // 0x341534: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x341534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x341538: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x341538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x34153c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34153Cu;
    {
        const bool branch_taken_0x34153c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34153Cu;
        // 0x341540: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34153c) {
            ctx->pc = 0x341550u;
            goto label_341550;
        }
    }
    ctx->pc = 0x341544u;
    // 0x341544: 0x0  nop
    ctx->pc = 0x341544u;
    // NOP
label_341548:
    // 0x341548: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x341548u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x34154c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x34154cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_341550:
    // 0x341550: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341554: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x341554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x341558: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x341558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34155c: 0x90cc0003  lbu         $t4, 0x3($a2)
    ctx->pc = 0x34155cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x341560: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x341560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x341564: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x341564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x341568: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x341568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34156c: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x34156cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x341570: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x341570u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341574: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341574u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341578: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341578u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34157c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34157cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341580: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x341580u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341584: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x341584u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x341588: 0xac2825  or          $a1, $a1, $t4
    ctx->pc = 0x341588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 12));
    // 0x34158c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x34158cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x341590: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x341590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x341594: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x341594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x341598: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x341598u;
    SET_GPR_U32(ctx, 31, 0x3415A0u);
    ctx->pc = 0x34159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341598u;
    // 0x34159c: 0x432825  or          $a1, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x341598u, 0x3415A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3415A0u;
label_3415a0:
    // 0x3415a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3415a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3415a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3415A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3415A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415A4u;
        // 0x3415a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3415A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3415ACu;
}
