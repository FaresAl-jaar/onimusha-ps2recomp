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

// Function: sub_003458D0
// Address: 0x3458d0 - 0x345944
void sub_003458D0_0x3458d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003458D0_0x3458d0");
#endif

    switch (ctx->pc) {
        case 0x3458d0u: goto label_3458d0;
        case 0x3458d4u: goto label_3458d4;
        case 0x3458d8u: goto label_3458d8;
        case 0x3458dcu: goto label_3458dc;
        case 0x3458e0u: goto label_3458e0;
        case 0x3458e4u: goto label_3458e4;
        case 0x3458e8u: goto label_3458e8;
        case 0x3458ecu: goto label_3458ec;
        case 0x3458f0u: goto label_3458f0;
        case 0x3458f4u: goto label_3458f4;
        case 0x3458f8u: goto label_3458f8;
        case 0x3458fcu: goto label_3458fc;
        case 0x345900u: goto label_345900;
        case 0x345904u: goto label_345904;
        case 0x345908u: goto label_345908;
        case 0x34590cu: goto label_34590c;
        case 0x345910u: goto label_345910;
        case 0x345914u: goto label_345914;
        case 0x345918u: goto label_345918;
        case 0x34591cu: goto label_34591c;
        case 0x345920u: goto label_345920;
        case 0x345924u: goto label_345924;
        case 0x345928u: goto label_345928;
        case 0x34592cu: goto label_34592c;
        case 0x345930u: goto label_345930;
        case 0x345934u: goto label_345934;
        case 0x345938u: goto label_345938;
        case 0x34593cu: goto label_34593c;
        case 0x345940u: goto label_345940;
        default: break;
    }

    ctx->pc = 0x3458d0u;

label_3458d0:
    // 0x3458d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3458d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3458d4:
    // 0x3458d4: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x3458d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
label_3458d8:
    // 0x3458d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3458d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3458dc:
    // 0x3458dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3458dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3458e0:
    // 0x3458e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3458e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3458e4:
    // 0x3458e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3458e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3458e8:
    // 0x3458e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3458e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3458ec:
    // 0x3458ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3458ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3458f0:
    // 0x3458f0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3458f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3458f4:
    // 0x3458f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3458f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3458f8:
    // 0x3458f8: 0x320f809  jalr        $t9
label_3458fc:
    if (ctx->pc == 0x3458FCu) {
        ctx->pc = 0x3458FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458F8u;
        // 0x3458fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345900u;
        goto label_345900;
    }
    ctx->pc = 0x3458F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x345900u);
        ctx->pc = 0x3458FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458F8u;
        // 0x3458fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3458F8u, 0x345900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345900u;
label_345900:
    // 0x345900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345904:
    // 0x345904: 0xc061bb0  jal         func_186EC0
label_345908:
    if (ctx->pc == 0x345908u) {
        ctx->pc = 0x345908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345904u;
        // 0x345908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34590Cu;
        goto label_34590c;
    }
    ctx->pc = 0x345904u;
    SET_GPR_U32(ctx, 31, 0x34590Cu);
    ctx->pc = 0x345908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345904u;
    // 0x345908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186EC0u, 0x345904u, 0x34590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34590Cu;
label_34590c:
    // 0x34590c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x34590cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_345910:
    // 0x345910: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_345914:
    // 0x345914: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x345914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_345918:
    // 0x345918: 0x8e250030  lw          $a1, 0x30($s1)
    ctx->pc = 0x345918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_34591c:
    // 0x34591c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34591cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345920:
    // 0x345920: 0x2023025  or          $a2, $s0, $v0
    ctx->pc = 0x345920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_345924:
    // 0x345924: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x345924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_345928:
    // 0x345928: 0x320f809  jalr        $t9
label_34592c:
    if (ctx->pc == 0x34592Cu) {
        ctx->pc = 0x34592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345928u;
        // 0x34592c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345930u;
        goto label_345930;
    }
    ctx->pc = 0x345928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x345930u);
        ctx->pc = 0x34592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345928u;
        // 0x34592c: 0x3c070004  lui         $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345928u, 0x345930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x345930u;
label_345930:
    // 0x345930: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_345934:
    // 0x345934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_345938:
    // 0x345938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x345938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34593c:
    // 0x34593c: 0x3e00008  jr          $ra
label_345940:
    if (ctx->pc == 0x345940u) {
        ctx->pc = 0x345940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34593Cu;
        // 0x345940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x345944u;
        goto label_fallthrough_0x34593c;
    }
    ctx->pc = 0x34593Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34593Cu;
        // 0x345940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34593Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34593c:
    ctx->pc = 0x345944u;
}
