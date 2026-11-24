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

// Function: sub_002A5610
// Address: 0x2a5610 - 0x2a56a0
void sub_002A5610_0x2a5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5610_0x2a5610");
#endif

    switch (ctx->pc) {
        case 0x2a5660u: goto label_2a5660;
        case 0x2a5688u: goto label_2a5688;
        default: break;
    }

    ctx->pc = 0x2a5610u;

    // 0x2a5610: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5614: 0x3c023400  lui         $v0, 0x3400
    ctx->pc = 0x2a5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13312 << 16));
    // 0x2a5618: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a5618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a561c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a561cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5620: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a5624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a5624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5628: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a562c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2a562cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a5634: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a5634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5638: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2a5638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a563c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2a563cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2a5640: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x2a5640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x2a5644: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5648: 0x3445040f  ori         $a1, $v0, 0x40F
    ctx->pc = 0x2a5648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1039);
    // 0x2a564c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2a564cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5650: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a5650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5654: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2a5654u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5658: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x2A5658u;
    SET_GPR_U32(ctx, 31, 0x2A5660u);
    ctx->pc = 0x2A565Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5658u;
    // 0x2a565c: 0xffb10000  sd          $s1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x2A5658u, 0x2A5660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5660u;
label_2a5660:
    // 0x2a5660: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a5660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5664: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2a5664u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5668: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2a5668u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a566c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5670: 0x24055ec4  addiu       $a1, $zero, 0x5EC4
    ctx->pc = 0x2a5670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24260));
    // 0x2a5674: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x2a5674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2a5678: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2a5678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a567c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2a567cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5680: 0xc097bb8  jal         func_25EEE0
    ctx->pc = 0x2A5680u;
    SET_GPR_U32(ctx, 31, 0x2A5688u);
    ctx->pc = 0x2A5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5680u;
    // 0x2a5684: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EEE0u, 0x2A5680u, 0x2A5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5688u;
label_2a5688:
    // 0x2a5688: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a5688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a568c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a568cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5690: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a5690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5694: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a5694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5698: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5698u;
        // 0x2a569c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A56A0u;
}
