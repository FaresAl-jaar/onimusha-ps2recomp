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

// Function: sub_00351B40
// Address: 0x351b40 - 0x351c64
void sub_00351B40_0x351b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351B40_0x351b40");
#endif

    switch (ctx->pc) {
        case 0x351b90u: goto label_351b90;
        case 0x351bb8u: goto label_351bb8;
        case 0x351be0u: goto label_351be0;
        case 0x351c08u: goto label_351c08;
        case 0x351c30u: goto label_351c30;
        case 0x351c58u: goto label_351c58;
        default: break;
    }

    ctx->pc = 0x351b40u;

    // 0x351b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351b48: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x351b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x351b4c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x351b4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x351b50: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x351B50u;
    {
        const bool branch_taken_0x351b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x351B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351B50u;
        // 0x351b54: 0x3c050068  lui         $a1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351b50) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351B58u;
    // 0x351b58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x351b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x351b5c: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x351b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    // 0x351b60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x351b64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x351b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x351b68: 0x600008  jr          $v1
    ctx->pc = 0x351B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x351B70u: goto label_351b70;
            case 0x351B98u: goto label_351b98;
            case 0x351BC0u: goto label_351bc0;
            case 0x351BE8u: goto label_351be8;
            case 0x351C10u: goto label_351c10;
            case 0x351C38u: goto label_351c38;
            case 0x351C58u: goto label_351c58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351B68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x351B70u;
label_351b70:
    // 0x351b70: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351b70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351b74: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351B74u;
    {
        const bool branch_taken_0x351b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b74) {
            ctx->pc = 0x351B88u;
            goto label_351b88;
        }
    }
    ctx->pc = 0x351B7Cu;
    // 0x351b7c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x351B7Cu;
    {
        const bool branch_taken_0x351b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b7c) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351B84u;
    // 0x351b84: 0x0  nop
    ctx->pc = 0x351b84u;
    // NOP
label_351b88:
    // 0x351b88: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351B88u;
    SET_GPR_U32(ctx, 31, 0x351B90u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351B88u, 0x351B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351B90u;
label_351b90:
    // 0x351b90: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x351B90u;
    {
        const bool branch_taken_0x351b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b90) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351B98u;
label_351b98:
    // 0x351b98: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351b9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351B9Cu;
    {
        const bool branch_taken_0x351b9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351b9c) {
            ctx->pc = 0x351BB0u;
            goto label_351bb0;
        }
    }
    ctx->pc = 0x351BA4u;
    // 0x351ba4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x351BA4u;
    {
        const bool branch_taken_0x351ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351ba4) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351BACu;
    // 0x351bac: 0x0  nop
    ctx->pc = 0x351bacu;
    // NOP
label_351bb0:
    // 0x351bb0: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351BB0u;
    SET_GPR_U32(ctx, 31, 0x351BB8u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351BB0u, 0x351BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BB8u;
label_351bb8:
    // 0x351bb8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x351BB8u;
    {
        const bool branch_taken_0x351bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bb8) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351BC0u;
label_351bc0:
    // 0x351bc0: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351bc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351BC4u;
    {
        const bool branch_taken_0x351bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bc4) {
            ctx->pc = 0x351BD8u;
            goto label_351bd8;
        }
    }
    ctx->pc = 0x351BCCu;
    // 0x351bcc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x351BCCu;
    {
        const bool branch_taken_0x351bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bcc) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351BD4u;
    // 0x351bd4: 0x0  nop
    ctx->pc = 0x351bd4u;
    // NOP
label_351bd8:
    // 0x351bd8: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351BD8u;
    SET_GPR_U32(ctx, 31, 0x351BE0u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351BD8u, 0x351BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351BE0u;
label_351be0:
    // 0x351be0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x351BE0u;
    {
        const bool branch_taken_0x351be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351be0) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351BE8u;
label_351be8:
    // 0x351be8: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351be8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351bec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351BECu;
    {
        const bool branch_taken_0x351bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bec) {
            ctx->pc = 0x351C00u;
            goto label_351c00;
        }
    }
    ctx->pc = 0x351BF4u;
    // 0x351bf4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x351BF4u;
    {
        const bool branch_taken_0x351bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351bf4) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351BFCu;
    // 0x351bfc: 0x0  nop
    ctx->pc = 0x351bfcu;
    // NOP
label_351c00:
    // 0x351c00: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351C00u;
    SET_GPR_U32(ctx, 31, 0x351C08u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351C00u, 0x351C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C08u;
label_351c08:
    // 0x351c08: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x351C08u;
    {
        const bool branch_taken_0x351c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c08) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351C10u;
label_351c10:
    // 0x351c10: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351c14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351C14u;
    {
        const bool branch_taken_0x351c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c14) {
            ctx->pc = 0x351C28u;
            goto label_351c28;
        }
    }
    ctx->pc = 0x351C1Cu;
    // 0x351c1c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x351C1Cu;
    {
        const bool branch_taken_0x351c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c1c) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351C24u;
    // 0x351c24: 0x0  nop
    ctx->pc = 0x351c24u;
    // NOP
label_351c28:
    // 0x351c28: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351C28u;
    SET_GPR_U32(ctx, 31, 0x351C30u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351C28u, 0x351C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C30u;
label_351c30:
    // 0x351c30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x351C30u;
    {
        const bool branch_taken_0x351c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c30) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351C38u;
label_351c38:
    // 0x351c38: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x351c38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x351c3c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x351C3Cu;
    {
        const bool branch_taken_0x351c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c3c) {
            ctx->pc = 0x351C50u;
            goto label_351c50;
        }
    }
    ctx->pc = 0x351C44u;
    // 0x351c44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x351C44u;
    {
        const bool branch_taken_0x351c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351c44) {
            ctx->pc = 0x351C58u;
            goto label_351c58;
        }
    }
    ctx->pc = 0x351C4Cu;
    // 0x351c4c: 0x0  nop
    ctx->pc = 0x351c4cu;
    // NOP
label_351c50:
    // 0x351c50: 0xc0d46b0  jal         func_351AC0
    ctx->pc = 0x351C50u;
    SET_GPR_U32(ctx, 31, 0x351C58u);
    ctx->pc = 0x351AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351AC0u, 0x351C50u, 0x351C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351C58u;
label_351c58:
    // 0x351c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x351C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C5Cu;
        // 0x351c60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351C64u;
}
