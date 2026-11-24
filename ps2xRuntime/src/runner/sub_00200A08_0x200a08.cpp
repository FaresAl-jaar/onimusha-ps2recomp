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

// Function: sub_00200A08
// Address: 0x200a08 - 0x200ae0
void sub_00200A08_0x200a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200A08_0x200a08");
#endif

    switch (ctx->pc) {
        case 0x200a38u: goto label_200a38;
        case 0x200a58u: goto label_200a58;
        case 0x200a80u: goto label_200a80;
        case 0x200a88u: goto label_200a88;
        case 0x200a94u: goto label_200a94;
        case 0x200aa0u: goto label_200aa0;
        case 0x200aa8u: goto label_200aa8;
        case 0x200ab0u: goto label_200ab0;
        case 0x200ab8u: goto label_200ab8;
        case 0x200ac0u: goto label_200ac0;
        case 0x200ac8u: goto label_200ac8;
        default: break;
    }

    ctx->pc = 0x200a08u;

    // 0x200a08: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x200a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x200a0c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x200a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x200a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200a14: 0x24633f38  addiu       $v1, $v1, 0x3F38
    ctx->pc = 0x200a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16184));
    // 0x200a18: 0x24426348  addiu       $v0, $v0, 0x6348
    ctx->pc = 0x200a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25416));
    // 0x200a1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200a20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x200a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x200a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200a2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a30: 0xc0802b8  jal         func_200AE0
    ctx->pc = 0x200A30u;
    SET_GPR_U32(ctx, 31, 0x200A38u);
    ctx->pc = 0x200A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A30u;
    // 0x200a34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AE0u, 0x200A30u, 0x200A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A38u;
label_200a38:
    // 0x200a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a3c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x200A3Cu;
    {
        const bool branch_taken_0x200a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a3c) {
            ctx->pc = 0x200A78u;
            goto label_200a78;
        }
    }
    ctx->pc = 0x200A44u;
    // 0x200a44: 0x3c03ff03  lui         $v1, 0xFF03
    ctx->pc = 0x200a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65283 << 16));
    // 0x200a48: 0x3463ff05  ori         $v1, $v1, 0xFF05
    ctx->pc = 0x200a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65285);
    // 0x200a4c: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x200A4Cu;
    {
        const bool branch_taken_0x200a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x200a4c) {
            ctx->pc = 0x200A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A4Cu;
            // 0x200a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200AD0u;
            goto label_200ad0;
        }
    }
    ctx->pc = 0x200A54u;
    // 0x200a54: 0x0  nop
    ctx->pc = 0x200a54u;
    // NOP
label_200a58:
    // 0x200a58: 0x0  nop
    ctx->pc = 0x200a58u;
    // NOP
    // 0x200a5c: 0x0  nop
    ctx->pc = 0x200a5cu;
    // NOP
    // 0x200a60: 0x0  nop
    ctx->pc = 0x200a60u;
    // NOP
    // 0x200a64: 0x0  nop
    ctx->pc = 0x200a64u;
    // NOP
    // 0x200a68: 0x0  nop
    ctx->pc = 0x200a68u;
    // NOP
    // 0x200a6c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x200A6Cu;
    {
        const bool branch_taken_0x200a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a6c) {
            ctx->pc = 0x200A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_200a58;
        }
    }
    ctx->pc = 0x200A74u;
    // 0x200a74: 0x0  nop
    ctx->pc = 0x200a74u;
    // NOP
label_200a78:
    // 0x200a78: 0xc0802d6  jal         func_200B58
    ctx->pc = 0x200A78u;
    SET_GPR_U32(ctx, 31, 0x200A80u);
    ctx->pc = 0x200B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B58u, 0x200A78u, 0x200A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A80u;
label_200a80:
    // 0x200a80: 0xc0802d8  jal         func_200B60
    ctx->pc = 0x200A80u;
    SET_GPR_U32(ctx, 31, 0x200A88u);
    ctx->pc = 0x200A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A80u;
    // 0x200a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200B60u, 0x200A80u, 0x200A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A88u;
label_200a88:
    // 0x200a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x200a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200a8c: 0xc080344  jal         func_200D10
    ctx->pc = 0x200A8Cu;
    SET_GPR_U32(ctx, 31, 0x200A94u);
    ctx->pc = 0x200A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A8Cu;
    // 0x200a90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200D10u, 0x200A8Cu, 0x200A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200A94u;
label_200a94:
    // 0x200a94: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x200a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x200a98: 0xc07f9bc  jal         func_1FE6F0
    ctx->pc = 0x200A98u;
    SET_GPR_U32(ctx, 31, 0x200AA0u);
    ctx->pc = 0x200A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200A98u;
    // 0x200a9c: 0x8c503f90  lw          $s0, 0x3F90($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6F0u, 0x200A98u, 0x200AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AA0u;
label_200aa0:
    // 0x200aa0: 0xc07fb8c  jal         func_1FEE30
    ctx->pc = 0x200AA0u;
    SET_GPR_U32(ctx, 31, 0x200AA8u);
    ctx->pc = 0x1FEE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE30u, 0x200AA0u, 0x200AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AA8u;
label_200aa8:
    // 0x200aa8: 0xc0802f0  jal         func_200BC0
    ctx->pc = 0x200AA8u;
    SET_GPR_U32(ctx, 31, 0x200AB0u);
    ctx->pc = 0x200AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200AA8u;
    // 0x200aac: 0x260417e0  addiu       $a0, $s0, 0x17E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200BC0u, 0x200AA8u, 0x200AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AB0u;
label_200ab0:
    // 0x200ab0: 0xc080326  jal         func_200C98
    ctx->pc = 0x200AB0u;
    SET_GPR_U32(ctx, 31, 0x200AB8u);
    ctx->pc = 0x200C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200C98u, 0x200AB0u, 0x200AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AB8u;
label_200ab8:
    // 0x200ab8: 0xc080342  jal         func_200D08
    ctx->pc = 0x200AB8u;
    SET_GPR_U32(ctx, 31, 0x200AC0u);
    ctx->pc = 0x200D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200D08u, 0x200AB8u, 0x200AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AC0u;
label_200ac0:
    // 0x200ac0: 0xc0804a6  jal         func_201298
    ctx->pc = 0x200AC0u;
    SET_GPR_U32(ctx, 31, 0x200AC8u);
    ctx->pc = 0x201298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201298u, 0x200AC0u, 0x200AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200AC8u;
label_200ac8:
    // 0x200ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x200ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200ad0:
    // 0x200ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x200ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200ad4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x200AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD8u;
        // 0x200adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200AE0u;
}
