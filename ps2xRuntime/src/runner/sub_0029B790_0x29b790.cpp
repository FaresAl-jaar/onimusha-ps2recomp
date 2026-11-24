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

// Function: sub_0029B790
// Address: 0x29b790 - 0x29b870
void sub_0029B790_0x29b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B790_0x29b790");
#endif

    switch (ctx->pc) {
        case 0x29b7b0u: goto label_29b7b0;
        case 0x29b7c8u: goto label_29b7c8;
        case 0x29b7d0u: goto label_29b7d0;
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b810u: goto label_29b810;
        case 0x29b834u: goto label_29b834;
        case 0x29b85cu: goto label_29b85c;
        default: break;
    }

    ctx->pc = 0x29b790u;

    // 0x29b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29b794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29b798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29b79c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x29b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x29b7a0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x29B7A0u;
    {
        const bool branch_taken_0x29b7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7A0u;
        // 0x29b7a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b7a0) {
            ctx->pc = 0x29B860u;
            goto label_29b860;
        }
    }
    ctx->pc = 0x29B7A8u;
    // 0x29b7a8: 0xc068ff4  jal         func_1A3FD0
    ctx->pc = 0x29B7A8u;
    SET_GPR_U32(ctx, 31, 0x29B7B0u);
    ctx->pc = 0x29B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7A8u;
    // 0x29b7ac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3FD0u, 0x29B7A8u, 0x29B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7B0u;
label_29b7b0:
    // 0x29b7b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B7B0u;
    {
        const bool branch_taken_0x29b7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7b0) {
            ctx->pc = 0x29B7D0u;
            goto label_29b7d0;
        }
    }
    ctx->pc = 0x29B7B8u;
    // 0x29b7b8: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b7bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b7c0: 0xc06907c  jal         func_1A41F0
    ctx->pc = 0x29B7C0u;
    SET_GPR_U32(ctx, 31, 0x29B7C8u);
    ctx->pc = 0x29B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7C0u;
    // 0x29b7c4: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41F0u, 0x29B7C0u, 0x29B7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7C8u;
label_29b7c8:
    // 0x29b7c8: 0xc0690f8  jal         func_1A43E0
    ctx->pc = 0x29B7C8u;
    SET_GPR_U32(ctx, 31, 0x29B7D0u);
    ctx->pc = 0x1A43E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A43E0u, 0x29B7C8u, 0x29B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7D0u;
label_29b7d0:
    // 0x29b7d0: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x29b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x29b7d4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B7D4u;
    {
        const bool branch_taken_0x29b7d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7d4) {
            ctx->pc = 0x29B7F8u;
            goto label_29b7f8;
        }
    }
    ctx->pc = 0x29B7DCu;
    // 0x29b7dc: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29b7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7e4: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x29b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x29b7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29b7ec: 0xc0b8b28  jal         func_2E2CA0
    ctx->pc = 0x29B7ECu;
    SET_GPR_U32(ctx, 31, 0x29B7F4u);
    ctx->pc = 0x29B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7ECu;
    // 0x29b7f0: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2CA0u, 0x29B7ECu, 0x29B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7F4u;
label_29b7f4:
    // 0x29b7f4: 0x0  nop
    ctx->pc = 0x29b7f4u;
    // NOP
label_29b7f8:
    // 0x29b7f8: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x29b7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x29b7fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B7FCu;
    {
        const bool branch_taken_0x29b7fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7fc) {
            ctx->pc = 0x29B810u;
            goto label_29b810;
        }
    }
    ctx->pc = 0x29B804u;
    // 0x29b804: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x29b804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b808: 0xc0674ec  jal         func_19D3B0
    ctx->pc = 0x29B808u;
    SET_GPR_U32(ctx, 31, 0x29B810u);
    ctx->pc = 0x29B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B808u;
    // 0x29b80c: 0x30450001  andi        $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D3B0u, 0x29B808u, 0x29B810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B810u;
label_29b810:
    // 0x29b810: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x29b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x29b814: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x29b818: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B818u;
    {
        const bool branch_taken_0x29b818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b818) {
            ctx->pc = 0x29B860u;
            goto label_29b860;
        }
    }
    ctx->pc = 0x29B820u;
    // 0x29b820: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x29b820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x29b824: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B824u;
    {
        const bool branch_taken_0x29b824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B824u;
        // 0x29b828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b824) {
            ctx->pc = 0x29B838u;
            goto label_29b838;
        }
    }
    ctx->pc = 0x29B82Cu;
    // 0x29b82c: 0xc071084  jal         func_1C4210
    ctx->pc = 0x29B82Cu;
    SET_GPR_U32(ctx, 31, 0x29B834u);
    ctx->pc = 0x1C4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4210u, 0x29B82Cu, 0x29B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B834u;
label_29b834:
    // 0x29b834: 0x0  nop
    ctx->pc = 0x29b834u;
    // NOP
label_29b838:
    // 0x29b838: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x29b838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x29b83c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29B83Cu;
    {
        const bool branch_taken_0x29b83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b83c) {
            ctx->pc = 0x29B860u;
            goto label_29b860;
        }
    }
    ctx->pc = 0x29B844u;
    // 0x29b844: 0x96030030  lhu         $v1, 0x30($s0)
    ctx->pc = 0x29b844u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x29b848: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x29b848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x29b84c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B84Cu;
    {
        const bool branch_taken_0x29b84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b84c) {
            ctx->pc = 0x29B860u;
            goto label_29b860;
        }
    }
    ctx->pc = 0x29B854u;
    // 0x29b854: 0xc067f28  jal         func_19FCA0
    ctx->pc = 0x29B854u;
    SET_GPR_U32(ctx, 31, 0x29B85Cu);
    ctx->pc = 0x19FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FCA0u, 0x29B854u, 0x29B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B85Cu;
label_29b85c:
    // 0x29b85c: 0x0  nop
    ctx->pc = 0x29b85cu;
    // NOP
label_29b860:
    // 0x29b860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29b860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b868: 0x3e00008  jr          $ra
    ctx->pc = 0x29B868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B868u;
        // 0x29b86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B870u;
}
