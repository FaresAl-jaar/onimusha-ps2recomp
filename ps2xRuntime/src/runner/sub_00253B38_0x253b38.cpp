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

// Function: sub_00253B38
// Address: 0x253b38 - 0x253b9c
void sub_00253B38_0x253b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253B38_0x253b38");
#endif

    switch (ctx->pc) {
        case 0x253b38u: goto label_253b38;
        case 0x253b3cu: goto label_253b3c;
        case 0x253b40u: goto label_253b40;
        case 0x253b44u: goto label_253b44;
        case 0x253b48u: goto label_253b48;
        case 0x253b4cu: goto label_253b4c;
        case 0x253b50u: goto label_253b50;
        case 0x253b54u: goto label_253b54;
        case 0x253b58u: goto label_253b58;
        case 0x253b5cu: goto label_253b5c;
        case 0x253b60u: goto label_253b60;
        case 0x253b64u: goto label_253b64;
        case 0x253b68u: goto label_253b68;
        case 0x253b6cu: goto label_253b6c;
        case 0x253b70u: goto label_253b70;
        case 0x253b74u: goto label_253b74;
        case 0x253b78u: goto label_253b78;
        case 0x253b7cu: goto label_253b7c;
        case 0x253b80u: goto label_253b80;
        case 0x253b84u: goto label_253b84;
        case 0x253b88u: goto label_253b88;
        case 0x253b8cu: goto label_253b8c;
        case 0x253b90u: goto label_253b90;
        case 0x253b94u: goto label_253b94;
        case 0x253b98u: goto label_253b98;
        default: break;
    }

    ctx->pc = 0x253b38u;

label_253b38:
    // 0x253b38: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x253b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
label_253b3c:
    // 0x253b3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_253b40:
    // 0x253b40: 0x8c428978  lw          $v0, -0x7688($v0)
    ctx->pc = 0x253b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936952)));
label_253b44:
    // 0x253b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_253b48:
    // 0x253b48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253b4c:
    // 0x253b4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_253b50:
    if (ctx->pc == 0x253B50u) {
        ctx->pc = 0x253B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B4Cu;
        // 0x253b50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B54u;
        goto label_253b54;
    }
    ctx->pc = 0x253B4Cu;
    {
        const bool branch_taken_0x253b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B4Cu;
        // 0x253b50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b4c) {
            ctx->pc = 0x253B68u;
            goto label_253b68;
        }
    }
    ctx->pc = 0x253B54u;
label_253b54:
    // 0x253b54: 0x40f809  jalr        $v0
label_253b58:
    if (ctx->pc == 0x253B58u) {
        ctx->pc = 0x253B5Cu;
        goto label_253b5c;
    }
    ctx->pc = 0x253B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x253B5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B54u, 0x253B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x253B5Cu;
label_253b5c:
    // 0x253b5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_253b60:
    if (ctx->pc == 0x253B60u) {
        ctx->pc = 0x253B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B5Cu;
        // 0x253b60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B64u;
        goto label_253b64;
    }
    ctx->pc = 0x253B5Cu;
    {
        const bool branch_taken_0x253b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B5Cu;
        // 0x253b60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253b5c) {
            ctx->pc = 0x253B88u;
            goto label_253b88;
        }
    }
    ctx->pc = 0x253B64u;
label_253b64:
    // 0x253b64: 0x0  nop
    ctx->pc = 0x253b64u;
    // NOP
label_253b68:
    // 0x253b68: 0xc094ba8  jal         func_252EA0
label_253b6c:
    if (ctx->pc == 0x253B6Cu) {
        ctx->pc = 0x253B70u;
        goto label_253b70;
    }
    ctx->pc = 0x253B68u;
    SET_GPR_U32(ctx, 31, 0x253B70u);
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x253B68u, 0x253B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B70u;
label_253b70:
    // 0x253b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x253b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253b74:
    // 0x253b74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253b78:
    // 0x253b78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x253b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_253b7c:
    // 0x253b7c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x253b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_253b80:
    // 0x253b80: 0xc094bae  jal         func_252EB8
label_253b84:
    if (ctx->pc == 0x253B84u) {
        ctx->pc = 0x253B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B80u;
        // 0x253b84: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B88u;
        goto label_253b88;
    }
    ctx->pc = 0x253B80u;
    SET_GPR_U32(ctx, 31, 0x253B88u);
    ctx->pc = 0x253B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B80u;
    // 0x253b84: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x253B80u, 0x253B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B88u;
label_253b88:
    // 0x253b88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x253b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_253b8c:
    // 0x253b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_253b90:
    // 0x253b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_253b94:
    // 0x253b94: 0x3e00008  jr          $ra
label_253b98:
    if (ctx->pc == 0x253B98u) {
        ctx->pc = 0x253B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B94u;
        // 0x253b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253B9Cu;
        goto label_fallthrough_0x253b94;
    }
    ctx->pc = 0x253B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253B94u;
        // 0x253b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x253b94:
    ctx->pc = 0x253B9Cu;
}
