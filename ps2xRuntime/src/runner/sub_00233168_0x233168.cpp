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

// Function: sub_00233168
// Address: 0x233168 - 0x233200
void sub_00233168_0x233168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233168_0x233168");
#endif

    switch (ctx->pc) {
        case 0x233180u: goto label_233180;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331f0u: goto label_2331f0;
        default: break;
    }

    ctx->pc = 0x233168u;

    // 0x233168: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23316c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23316cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233170: 0x8c44fc08  lw          $a0, -0x3F8($v0)
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BFC08u));
    // 0x233174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x233174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x233178: 0xc08ccc6  jal         func_233318
    ctx->pc = 0x233178u;
    SET_GPR_U32(ctx, 31, 0x233180u);
    ctx->pc = 0x233318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233318u, 0x233178u, 0x233180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233180u;
label_233180:
    // 0x233180: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x233180u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233188: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x233188u;
    {
        const bool branch_taken_0x233188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233188u;
        // 0x23318c: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233188) {
            ctx->pc = 0x2331F0u;
            goto label_2331f0;
        }
    }
    ctx->pc = 0x233190u;
    // 0x233190: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x233190u;
    {
        const bool branch_taken_0x233190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x233194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233190u;
        // 0x233194: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233190) {
            ctx->pc = 0x2331F4u;
            goto label_2331f4;
        }
    }
    ctx->pc = 0x233198u;
    // 0x233198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23319c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23319Cu;
    {
        const bool branch_taken_0x23319c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2331A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23319Cu;
        // 0x2331a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23319c) {
            ctx->pc = 0x2331B8u;
            goto label_2331b8;
        }
    }
    ctx->pc = 0x2331A4u;
    // 0x2331a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2331A4u;
    {
        const bool branch_taken_0x2331a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2331A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331A4u;
        // 0x2331a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331a4) {
            ctx->pc = 0x2331C8u;
            goto label_2331c8;
        }
    }
    ctx->pc = 0x2331ACu;
    // 0x2331ac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2331ACu;
    {
        const bool branch_taken_0x2331ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331ac) {
            ctx->pc = 0x2331F8u;
            goto label_2331f8;
        }
    }
    ctx->pc = 0x2331B4u;
    // 0x2331b4: 0x0  nop
    ctx->pc = 0x2331b4u;
    // NOP
label_2331b8:
    // 0x2331b8: 0xc094e44  jal         func_253910
    ctx->pc = 0x2331B8u;
    SET_GPR_U32(ctx, 31, 0x2331C0u);
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x2331B8u, 0x2331C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331C0u;
label_2331c0:
    // 0x2331c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2331C0u;
    {
        const bool branch_taken_0x2331c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331C0u;
        // 0x2331c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331c0) {
            ctx->pc = 0x2331F4u;
            goto label_2331f4;
        }
    }
    ctx->pc = 0x2331C8u;
label_2331c8:
    // 0x2331c8: 0xc094e44  jal         func_253910
    ctx->pc = 0x2331C8u;
    SET_GPR_U32(ctx, 31, 0x2331D0u);
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x2331C8u, 0x2331D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331D0u;
label_2331d0:
    // 0x2331d0: 0xc094e4a  jal         func_253928
    ctx->pc = 0x2331D0u;
    SET_GPR_U32(ctx, 31, 0x2331D8u);
    ctx->pc = 0x253928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253928u, 0x2331D0u, 0x2331D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331D8u;
label_2331d8:
    // 0x2331d8: 0xc094e50  jal         func_253940
    ctx->pc = 0x2331D8u;
    SET_GPR_U32(ctx, 31, 0x2331E0u);
    ctx->pc = 0x253940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253940u, 0x2331D8u, 0x2331E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331E0u;
label_2331e0:
    // 0x2331e0: 0xc094e56  jal         func_253958
    ctx->pc = 0x2331E0u;
    SET_GPR_U32(ctx, 31, 0x2331E8u);
    ctx->pc = 0x253958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253958u, 0x2331E0u, 0x2331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331E8u;
label_2331e8:
    // 0x2331e8: 0xc094e62  jal         func_253988
    ctx->pc = 0x2331E8u;
    SET_GPR_U32(ctx, 31, 0x2331F0u);
    ctx->pc = 0x253988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253988u, 0x2331E8u, 0x2331F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331F0u;
label_2331f0:
    // 0x2331f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2331f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2331f4:
    // 0x2331f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2331f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2331f8:
    // 0x2331f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2331F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2331FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331F8u;
        // 0x2331fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2331F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233200u;
}
