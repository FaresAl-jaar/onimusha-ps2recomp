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

// Function: sub_00250B58
// Address: 0x250b58 - 0x250ba4
void sub_00250B58_0x250b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B58_0x250b58");
#endif

    switch (ctx->pc) {
        case 0x250b58u: goto label_250b58;
        case 0x250b5cu: goto label_250b5c;
        case 0x250b60u: goto label_250b60;
        case 0x250b64u: goto label_250b64;
        case 0x250b68u: goto label_250b68;
        case 0x250b6cu: goto label_250b6c;
        case 0x250b70u: goto label_250b70;
        case 0x250b74u: goto label_250b74;
        case 0x250b78u: goto label_250b78;
        case 0x250b7cu: goto label_250b7c;
        case 0x250b80u: goto label_250b80;
        case 0x250b84u: goto label_250b84;
        case 0x250b88u: goto label_250b88;
        case 0x250b8cu: goto label_250b8c;
        case 0x250b90u: goto label_250b90;
        case 0x250b94u: goto label_250b94;
        case 0x250b98u: goto label_250b98;
        case 0x250b9cu: goto label_250b9c;
        case 0x250ba0u: goto label_250ba0;
        default: break;
    }

    ctx->pc = 0x250b58u;

label_250b58:
    // 0x250b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_250b5c:
    // 0x250b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250b60:
    // 0x250b60: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_250b64:
    if (ctx->pc == 0x250B64u) {
        ctx->pc = 0x250B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B60u;
        // 0x250b64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B68u;
        goto label_250b68;
    }
    ctx->pc = 0x250B60u;
    {
        const bool branch_taken_0x250b60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x250B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B60u;
        // 0x250b64: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b60) {
            ctx->pc = 0x250B70u;
            goto label_250b70;
        }
    }
    ctx->pc = 0x250B68u;
label_250b68:
    // 0x250b68: 0x1000000b  b           . + 4 + (0xB << 2)
label_250b6c:
    if (ctx->pc == 0x250B6Cu) {
        ctx->pc = 0x250B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B68u;
        // 0x250b6c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B70u;
        goto label_250b70;
    }
    ctx->pc = 0x250B68u;
    {
        const bool branch_taken_0x250b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B68u;
        // 0x250b6c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b68) {
            ctx->pc = 0x250B98u;
            goto label_250b98;
        }
    }
    ctx->pc = 0x250B70u;
label_250b70:
    // 0x250b70: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_250b74:
    if (ctx->pc == 0x250B74u) {
        ctx->pc = 0x250B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B70u;
        // 0x250b74: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B78u;
        goto label_250b78;
    }
    ctx->pc = 0x250B70u;
    {
        const bool branch_taken_0x250b70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x250b70) {
            ctx->pc = 0x250B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250B70u;
            // 0x250b74: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250B80u;
            goto label_250b80;
        }
    }
    ctx->pc = 0x250B78u;
label_250b78:
    // 0x250b78: 0x10000007  b           . + 4 + (0x7 << 2)
label_250b7c:
    if (ctx->pc == 0x250B7Cu) {
        ctx->pc = 0x250B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B78u;
        // 0x250b7c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B80u;
        goto label_250b80;
    }
    ctx->pc = 0x250B78u;
    {
        const bool branch_taken_0x250b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B78u;
        // 0x250b7c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250b78) {
            ctx->pc = 0x250B98u;
            goto label_250b98;
        }
    }
    ctx->pc = 0x250B80u;
label_250b80:
    // 0x250b80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_250b84:
    if (ctx->pc == 0x250B84u) {
        ctx->pc = 0x250B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B80u;
        // 0x250b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B88u;
        goto label_250b88;
    }
    ctx->pc = 0x250B80u;
    {
        const bool branch_taken_0x250b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250b80) {
            ctx->pc = 0x250B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250B80u;
            // 0x250b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250B98u;
            goto label_250b98;
        }
    }
    ctx->pc = 0x250B88u;
label_250b88:
    // 0x250b88: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x250b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_250b8c:
    // 0x250b8c: 0x40f809  jalr        $v0
label_250b90:
    if (ctx->pc == 0x250B90u) {
        ctx->pc = 0x250B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B8Cu;
        // 0x250b90: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250B94u;
        goto label_250b94;
    }
    ctx->pc = 0x250B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250B94u);
        ctx->pc = 0x250B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B8Cu;
        // 0x250b90: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B8Cu, 0x250B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250B94u;
label_250b94:
    // 0x250b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x250b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250b98:
    // 0x250b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_250b9c:
    // 0x250b9c: 0x3e00008  jr          $ra
label_250ba0:
    if (ctx->pc == 0x250BA0u) {
        ctx->pc = 0x250BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B9Cu;
        // 0x250ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BA4u;
        goto label_fallthrough_0x250b9c;
    }
    ctx->pc = 0x250B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250B9Cu;
        // 0x250ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x250b9c:
    ctx->pc = 0x250BA4u;
}
