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

// Function: sub_0039E690
// Address: 0x39e690 - 0x39e728
void sub_0039E690_0x39e690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E690_0x39e690");
#endif

    switch (ctx->pc) {
        case 0x39e6a4u: goto label_39e6a4;
        case 0x39e6d8u: goto label_39e6d8;
        case 0x39e6e8u: goto label_39e6e8;
        case 0x39e708u: goto label_39e708;
        case 0x39e718u: goto label_39e718;
        default: break;
    }

    ctx->pc = 0x39e690u;

    // 0x39e690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39e698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39e698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39e69c: 0xc0e78c0  jal         func_39E300
    ctx->pc = 0x39E69Cu;
    SET_GPR_U32(ctx, 31, 0x39E6A4u);
    ctx->pc = 0x39E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E69Cu;
    // 0x39e6a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E300u, 0x39E69Cu, 0x39E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6A4u;
label_39e6a4:
    // 0x39e6a4: 0x9202065c  lbu         $v0, 0x65C($s0)
    ctx->pc = 0x39e6a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x39e6a8: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x39e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x39e6ac: 0x2c410015  sltiu       $at, $v0, 0x15
    ctx->pc = 0x39e6acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x39e6b0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x39E6B0u;
    {
        const bool branch_taken_0x39e6b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6B0u;
        // 0x39e6b4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6b0) {
            ctx->pc = 0x39E6F0u;
            goto label_39e6f0;
        }
    }
    ctx->pc = 0x39E6B8u;
    // 0x39e6b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39e6bc: 0x246325e0  addiu       $v1, $v1, 0x25E0
    ctx->pc = 0x39e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9696));
    // 0x39e6c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e6c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e6c8: 0x400008  jr          $v0
    ctx->pc = 0x39E6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39E6D0u: goto label_39e6d0;
            case 0x39E6E0u: goto label_39e6e0;
            case 0x39E6F0u: goto label_39e6f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E6C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39E6D0u;
label_39e6d0:
    // 0x39e6d0: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x39E6D0u;
    SET_GPR_U32(ctx, 31, 0x39E6D8u);
    ctx->pc = 0x39E6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6D0u;
    // 0x39e6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x39E6D0u, 0x39E6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6D8u;
label_39e6d8:
    // 0x39e6d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39E6D8u;
    {
        const bool branch_taken_0x39e6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e6d8) {
            ctx->pc = 0x39E718u;
            goto label_39e718;
        }
    }
    ctx->pc = 0x39E6E0u;
label_39e6e0:
    // 0x39e6e0: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x39E6E0u;
    SET_GPR_U32(ctx, 31, 0x39E6E8u);
    ctx->pc = 0x39E6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6E0u;
    // 0x39e6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x39E6E0u, 0x39E6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6E8u;
label_39e6e8:
    // 0x39e6e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39E6E8u;
    {
        const bool branch_taken_0x39e6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e6e8) {
            ctx->pc = 0x39E718u;
            goto label_39e718;
        }
    }
    ctx->pc = 0x39E6F0u;
label_39e6f0:
    // 0x39e6f0: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x39e6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x39e6f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x39e6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x39e6f8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E6F8u;
    {
        const bool branch_taken_0x39e6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6F8u;
        // 0x39e6fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e6f8) {
            ctx->pc = 0x39E710u;
            goto label_39e710;
        }
    }
    ctx->pc = 0x39E700u;
    // 0x39e700: 0xc0a0ab0  jal         func_282AC0
    ctx->pc = 0x39E700u;
    SET_GPR_U32(ctx, 31, 0x39E708u);
    ctx->pc = 0x282AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282AC0u, 0x39E700u, 0x39E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E708u;
label_39e708:
    // 0x39e708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39E708u;
    {
        const bool branch_taken_0x39e708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e708) {
            ctx->pc = 0x39E718u;
            goto label_39e718;
        }
    }
    ctx->pc = 0x39E710u;
label_39e710:
    // 0x39e710: 0xc0a5f30  jal         func_297CC0
    ctx->pc = 0x39E710u;
    SET_GPR_U32(ctx, 31, 0x39E718u);
    ctx->pc = 0x39E714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E710u;
    // 0x39e714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297CC0u, 0x39E710u, 0x39E718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E718u;
label_39e718:
    // 0x39e718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39e718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39e71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e720: 0x3e00008  jr          $ra
    ctx->pc = 0x39E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E720u;
        // 0x39e724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E728u;
}
