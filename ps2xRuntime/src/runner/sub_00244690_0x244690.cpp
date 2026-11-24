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

// Function: sub_00244690
// Address: 0x244690 - 0x2446d8
void sub_00244690_0x244690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244690_0x244690");
#endif

    switch (ctx->pc) {
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        default: break;
    }

    ctx->pc = 0x244690u;

label_244690:
    // 0x244690: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244694:
    // 0x244694: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x244694u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244698:
    // 0x244698: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_24469c:
    if (ctx->pc == 0x24469Cu) {
        ctx->pc = 0x24469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244698u;
        // 0x24469c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446A0u;
        goto label_2446a0;
    }
    ctx->pc = 0x244698u;
    {
        const bool branch_taken_0x244698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244698u;
        // 0x24469c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244698) {
            ctx->pc = 0x2446CCu;
            goto label_2446cc;
        }
    }
    ctx->pc = 0x2446A0u;
label_2446a0:
    // 0x2446a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2446a4:
    // 0x2446a4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2446a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2446a8:
    // 0x2446a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2446ac:
    if (ctx->pc == 0x2446ACu) {
        ctx->pc = 0x2446ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A8u;
        // 0x2446ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446B0u;
        goto label_2446b0;
    }
    ctx->pc = 0x2446A8u;
    {
        const bool branch_taken_0x2446a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A8u;
        // 0x2446ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446a8) {
            ctx->pc = 0x2446C8u;
            goto label_2446c8;
        }
    }
    ctx->pc = 0x2446B0u;
label_2446b0:
    // 0x2446b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2446b4:
    // 0x2446b4: 0x24050192  addiu       $a1, $zero, 0x192
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
label_2446b8:
    // 0x2446b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2446b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2446bc:
    // 0x2446bc: 0x40f809  jalr        $v0
label_2446c0:
    if (ctx->pc == 0x2446C0u) {
        ctx->pc = 0x2446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446BCu;
        // 0x2446c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446C4u;
        goto label_2446c4;
    }
    ctx->pc = 0x2446BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2446C4u);
        ctx->pc = 0x2446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446BCu;
        // 0x2446c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446BCu, 0x2446C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2446C4u;
label_2446c4:
    // 0x2446c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2446c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2446c8:
    // 0x2446c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2446c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2446cc:
    // 0x2446cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2446ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2446d0:
    // 0x2446d0: 0x3e00008  jr          $ra
label_2446d4:
    if (ctx->pc == 0x2446D4u) {
        ctx->pc = 0x2446D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D0u;
        // 0x2446d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446D8u;
        goto label_fallthrough_0x2446d0;
    }
    ctx->pc = 0x2446D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2446D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D0u;
        // 0x2446d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2446D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2446d0:
    ctx->pc = 0x2446D8u;
}
