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

// Function: sub_0025B600
// Address: 0x25b600 - 0x25b678
void sub_0025B600_0x25b600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B600_0x25b600");
#endif

    switch (ctx->pc) {
        case 0x25b614u: goto label_25b614;
        case 0x25b668u: goto label_25b668;
        default: break;
    }

    ctx->pc = 0x25b600u;

    // 0x25b600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25b604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b60c: 0xc096d74  jal         func_25B5D0
    ctx->pc = 0x25B60Cu;
    SET_GPR_U32(ctx, 31, 0x25B614u);
    ctx->pc = 0x25B610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B60Cu;
    // 0x25b610: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5D0u, 0x25B60Cu, 0x25B614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B614u;
label_25b614:
    // 0x25b614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25B618u;
    {
        const bool branch_taken_0x25b618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b618) {
            ctx->pc = 0x25B628u;
            goto label_25b628;
        }
    }
    ctx->pc = 0x25B620u;
    // 0x25b620: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25B620u;
    {
        const bool branch_taken_0x25b620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B620u;
        // 0x25b624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b620) {
            ctx->pc = 0x25B668u;
            goto label_25b668;
        }
    }
    ctx->pc = 0x25B628u;
label_25b628:
    // 0x25b628: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x25b628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b62c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x25b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x25b630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25b634: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x25b634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x25b638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25b638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b63c: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x25b63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x25b640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b644: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b644u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x25b648: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25b64c: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x25b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x25b650: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x25b650u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x25b654: 0x0  nop
    ctx->pc = 0x25b654u;
    // NOP
    // 0x25b658: 0x0  nop
    ctx->pc = 0x25b658u;
    // NOP
    // 0x25b65c: 0x1010  mfhi        $v0
    ctx->pc = 0x25b65cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x25b660: 0xc096d78  jal         func_25B5E0
    ctx->pc = 0x25B660u;
    SET_GPR_U32(ctx, 31, 0x25B668u);
    ctx->pc = 0x25B664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B660u;
    // 0x25b664: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B5E0u, 0x25B660u, 0x25B668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B668u;
label_25b668:
    // 0x25b668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25b668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b66c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b66cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b670: 0x3e00008  jr          $ra
    ctx->pc = 0x25B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B670u;
        // 0x25b674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B678u;
}
