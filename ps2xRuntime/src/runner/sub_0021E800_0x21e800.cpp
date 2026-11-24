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

// Function: sub_0021E800
// Address: 0x21e800 - 0x21e874
void sub_0021E800_0x21e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E800_0x21e800");
#endif

    switch (ctx->pc) {
        case 0x21e864u: goto label_21e864;
        default: break;
    }

    ctx->pc = 0x21e800u;

    // 0x21e800: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x21e800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21e804: 0x24831310  addiu       $v1, $a0, 0x1310
    ctx->pc = 0x21e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x21e808: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x21e808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21e80c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e818: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21e81c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21e824: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x21e824u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x21e828: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21e828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21e82c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e830: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x21e830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x21e834: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x21e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x21e838: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21e83c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x21e83cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e840: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x21e840u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x21e844: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x21e844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e848: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E848u;
    {
        const bool branch_taken_0x21e848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E848u;
        // 0x21e84c: 0x8c670008  lw          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e848) {
            ctx->pc = 0x21E868u;
            goto label_21e868;
        }
    }
    ctx->pc = 0x21E850u;
    // 0x21e850: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x21e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21e854: 0x1282823  subu        $a1, $t1, $t0
    ctx->pc = 0x21e854u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x21e858: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x21e858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21e85c: 0xc087a1e  jal         func_21E878
    ctx->pc = 0x21E85Cu;
    SET_GPR_U32(ctx, 31, 0x21E864u);
    ctx->pc = 0x21E860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E85Cu;
    // 0x21e860: 0x122280b  movn        $a1, $t1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E878u, 0x21E85Cu, 0x21E864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E864u;
label_21e864:
    // 0x21e864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e868:
    // 0x21e868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e86c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E86Cu;
        // 0x21e870: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E874u;
}
