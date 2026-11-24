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

// Function: sub_00229B80
// Address: 0x229b80 - 0x229c08
void sub_00229B80_0x229b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229B80_0x229b80");
#endif

    ctx->pc = 0x229b80u;

    // 0x229b80: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x229b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229b84: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x229b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x229b88: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x229b88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x229b8c: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229B8Cu;
    {
        const bool branch_taken_0x229b8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x229B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B8Cu;
        // 0x229b90: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b8c) {
            ctx->pc = 0x229BA8u;
            goto label_229ba8;
        }
    }
    ctx->pc = 0x229B94u;
    // 0x229b94: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x229b94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x229b98: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x229b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x229b9c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x229B9Cu;
    {
        const bool branch_taken_0x229b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x229BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229B9Cu;
        // 0x229ba0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229b9c) {
            ctx->pc = 0x229C00u;
            goto label_229c00;
        }
    }
    ctx->pc = 0x229BA4u;
    // 0x229ba4: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x229ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_229ba8:
    // 0x229ba8: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229BA8u;
    {
        const bool branch_taken_0x229ba8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x229ba8) {
            ctx->pc = 0x229BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229BA8u;
            // 0x229bac: 0x90a60010  lbu         $a2, 0x10($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229BC4u;
            goto label_229bc4;
        }
    }
    ctx->pc = 0x229BB0u;
    // 0x229bb0: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x229bb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x229bb4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x229bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x229bb8: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x229BB8u;
    {
        const bool branch_taken_0x229bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x229BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BB8u;
        // 0x229bbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bb8) {
            ctx->pc = 0x229C00u;
            goto label_229c00;
        }
    }
    ctx->pc = 0x229BC0u;
    // 0x229bc0: 0x90a60010  lbu         $a2, 0x10($a1)
    ctx->pc = 0x229bc0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_229bc4:
    // 0x229bc4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x229bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x229bc8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229BC8u;
    {
        const bool branch_taken_0x229bc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x229BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BC8u;
        // 0x229bcc: 0x24020077  addiu       $v0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bc8) {
            ctx->pc = 0x229BE4u;
            goto label_229be4;
        }
    }
    ctx->pc = 0x229BD0u;
    // 0x229bd0: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x229bd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x229bd4: 0x24030077  addiu       $v1, $zero, 0x77
    ctx->pc = 0x229bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x229bd8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x229BD8u;
    {
        const bool branch_taken_0x229bd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x229BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BD8u;
        // 0x229bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bd8) {
            ctx->pc = 0x229C00u;
            goto label_229c00;
        }
    }
    ctx->pc = 0x229BE0u;
    // 0x229be0: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x229be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_229be4:
    // 0x229be4: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229BE4u;
    {
        const bool branch_taken_0x229be4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x229BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BE4u;
        // 0x229be8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229be4) {
            ctx->pc = 0x229C00u;
            goto label_229c00;
        }
    }
    ctx->pc = 0x229BECu;
    // 0x229bec: 0x90a40011  lbu         $a0, 0x11($a1)
    ctx->pc = 0x229becu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
    // 0x229bf0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x229bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x229bf4: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x229BF4u;
    {
        const bool branch_taken_0x229bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x229BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229BF4u;
        // 0x229bf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229bf4) {
            ctx->pc = 0x229C00u;
            goto label_229c00;
        }
    }
    ctx->pc = 0x229BFCu;
    // 0x229bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x229bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229c00:
    // 0x229c00: 0x3e00008  jr          $ra
    ctx->pc = 0x229C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229C08u;
}
