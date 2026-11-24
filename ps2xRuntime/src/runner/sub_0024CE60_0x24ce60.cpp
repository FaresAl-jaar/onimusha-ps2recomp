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

// Function: sub_0024CE60
// Address: 0x24ce60 - 0x24cf04
void sub_0024CE60_0x24ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CE60_0x24ce60");
#endif

    switch (ctx->pc) {
        case 0x24ced8u: goto label_24ced8;
        case 0x24cee8u: goto label_24cee8;
        default: break;
    }

    ctx->pc = 0x24ce60u;

    // 0x24ce60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ce64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24ce64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ce68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ce68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ce6c: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x24CE6Cu;
    {
        const bool branch_taken_0x24ce6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE6Cu;
        // 0x24ce70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce6c) {
            ctx->pc = 0x24CEF8u;
            goto label_24cef8;
        }
    }
    ctx->pc = 0x24CE74u;
    // 0x24ce74: 0x240200cb  addiu       $v0, $zero, 0xCB
    ctx->pc = 0x24ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
    // 0x24ce78: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24CE78u;
    {
        const bool branch_taken_0x24ce78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE78u;
        // 0x24ce7c: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce78) {
            ctx->pc = 0x24CEE0u;
            goto label_24cee0;
        }
    }
    ctx->pc = 0x24CE80u;
    // 0x24ce80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24CE80u;
    {
        const bool branch_taken_0x24ce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE80u;
        // 0x24ce84: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce80) {
            ctx->pc = 0x24CEA0u;
            goto label_24cea0;
        }
    }
    ctx->pc = 0x24CE88u;
    // 0x24ce88: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x24ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x24ce8c: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24CE8Cu;
    {
        const bool branch_taken_0x24ce8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE8Cu;
        // 0x24ce90: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce8c) {
            ctx->pc = 0x24CED0u;
            goto label_24ced0;
        }
    }
    ctx->pc = 0x24CE94u;
    // 0x24ce94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x24CE94u;
    {
        const bool branch_taken_0x24ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CE94u;
        // 0x24ce98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ce94) {
            ctx->pc = 0x24CEFCu;
            goto label_24cefc;
        }
    }
    ctx->pc = 0x24CE9Cu;
    // 0x24ce9c: 0x0  nop
    ctx->pc = 0x24ce9cu;
    // NOP
label_24cea0:
    // 0x24cea0: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24CEA0u;
    {
        const bool branch_taken_0x24cea0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEA0u;
        // 0x24cea4: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cea0) {
            ctx->pc = 0x24CEE0u;
            goto label_24cee0;
        }
    }
    ctx->pc = 0x24CEA8u;
    // 0x24cea8: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24CEA8u;
    {
        const bool branch_taken_0x24cea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEA8u;
        // 0x24ceac: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cea8) {
            ctx->pc = 0x24CEF8u;
            goto label_24cef8;
        }
    }
    ctx->pc = 0x24CEB0u;
    // 0x24ceb0: 0x2402012b  addiu       $v0, $zero, 0x12B
    ctx->pc = 0x24ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x24ceb4: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24CEB4u;
    {
        const bool branch_taken_0x24ceb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEB4u;
        // 0x24ceb8: 0x24020191  addiu       $v0, $zero, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ceb4) {
            ctx->pc = 0x24CEF4u;
            goto label_24cef4;
        }
    }
    ctx->pc = 0x24CEBCu;
    // 0x24cebc: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24CEBCu;
    {
        const bool branch_taken_0x24cebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEBCu;
        // 0x24cec0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cebc) {
            ctx->pc = 0x24CEF0u;
            goto label_24cef0;
        }
    }
    ctx->pc = 0x24CEC4u;
    // 0x24cec4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24CEC4u;
    {
        const bool branch_taken_0x24cec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEC4u;
        // 0x24cec8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cec4) {
            ctx->pc = 0x24CEFCu;
            goto label_24cefc;
        }
    }
    ctx->pc = 0x24CECCu;
    // 0x24cecc: 0x0  nop
    ctx->pc = 0x24ceccu;
    // NOP
label_24ced0:
    // 0x24ced0: 0xc093368  jal         func_24CDA0
    ctx->pc = 0x24CED0u;
    SET_GPR_U32(ctx, 31, 0x24CED8u);
    ctx->pc = 0x24CDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CDA0u, 0x24CED0u, 0x24CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CED8u;
label_24ced8:
    // 0x24ced8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24CED8u;
    {
        const bool branch_taken_0x24ced8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CED8u;
        // 0x24cedc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ced8) {
            ctx->pc = 0x24CEF4u;
            goto label_24cef4;
        }
    }
    ctx->pc = 0x24CEE0u;
label_24cee0:
    // 0x24cee0: 0xc0931fc  jal         func_24C7F0
    ctx->pc = 0x24CEE0u;
    SET_GPR_U32(ctx, 31, 0x24CEE8u);
    ctx->pc = 0x24C7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C7F0u, 0x24CEE0u, 0x24CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CEE8u;
label_24cee8:
    // 0x24cee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24CEE8u;
    {
        const bool branch_taken_0x24cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEE8u;
        // 0x24ceec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cee8) {
            ctx->pc = 0x24CEF4u;
            goto label_24cef4;
        }
    }
    ctx->pc = 0x24CEF0u;
label_24cef0:
    // 0x24cef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cef4:
    // 0x24cef4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x24cef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_24cef8:
    // 0x24cef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24cef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24cefc:
    // 0x24cefc: 0x3e00008  jr          $ra
    ctx->pc = 0x24CEFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CEFCu;
        // 0x24cf00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CEFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CF04u;
}
