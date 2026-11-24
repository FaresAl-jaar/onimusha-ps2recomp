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

// Function: sub_00232B18
// Address: 0x232b18 - 0x232be0
void sub_00232B18_0x232b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232B18_0x232b18");
#endif

    switch (ctx->pc) {
        case 0x232b54u: goto label_232b54;
        case 0x232b74u: goto label_232b74;
        case 0x232b90u: goto label_232b90;
        case 0x232ba8u: goto label_232ba8;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bc8u: goto label_232bc8;
        default: break;
    }

    ctx->pc = 0x232b18u;

    // 0x232b18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x232b1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x232b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b20: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x232b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x232b24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b28: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x232b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x232b2c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x232b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x232b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b38: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x232b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x232b3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232B40u;
    {
        const bool branch_taken_0x232b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B40u;
        // 0x232b44: 0x8c520094  lw          $s2, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b40) {
            ctx->pc = 0x232B60u;
            goto label_232b60;
        }
    }
    ctx->pc = 0x232B48u;
    // 0x232b48: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232b4c: 0xc08baa4  jal         func_22EA90
    ctx->pc = 0x232B4Cu;
    SET_GPR_U32(ctx, 31, 0x232B54u);
    ctx->pc = 0x232B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B4Cu;
    // 0x232b50: 0x2484abf8  addiu       $a0, $a0, -0x5408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA90u, 0x232B4Cu, 0x232B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B54u;
label_232b54:
    // 0x232b54: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x232B54u;
    {
        const bool branch_taken_0x232b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B54u;
        // 0x232b58: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b54) {
            ctx->pc = 0x232BCCu;
            goto label_232bcc;
        }
    }
    ctx->pc = 0x232B5Cu;
    // 0x232b5c: 0x0  nop
    ctx->pc = 0x232b5cu;
    // NOP
label_232b60:
    // 0x232b60: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x232b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x232b64: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x232b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x232b68: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x232b6c: 0xc08c5b2  jal         func_2316C8
    ctx->pc = 0x232B6Cu;
    SET_GPR_U32(ctx, 31, 0x232B74u);
    ctx->pc = 0x232B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232B6Cu;
    // 0x232b70: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316C8u, 0x232B6Cu, 0x232B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B74u;
label_232b74:
    // 0x232b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b7c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x232b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x232B80u;
    {
        const bool branch_taken_0x232b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B80u;
        // 0x232b84: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232b80) {
            ctx->pc = 0x232BB0u;
            goto label_232bb0;
        }
    }
    ctx->pc = 0x232B88u;
    // 0x232b88: 0xc08c63a  jal         func_2318E8
    ctx->pc = 0x232B88u;
    SET_GPR_U32(ctx, 31, 0x232B90u);
    ctx->pc = 0x2318E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2318E8u, 0x232B88u, 0x232B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B90u;
label_232b90:
    // 0x232b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b94: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232b98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x232b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232b9c: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x232b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x232ba0: 0xc092d28  jal         func_24B4A0
    ctx->pc = 0x232BA0u;
    SET_GPR_U32(ctx, 31, 0x232BA8u);
    ctx->pc = 0x232BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BA0u;
    // 0x232ba4: 0x8fa80018  lw          $t0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B4A0u, 0x232BA0u, 0x232BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BA8u;
label_232ba8:
    // 0x232ba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x232BA8u;
    {
        const bool branch_taken_0x232ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BA8u;
        // 0x232bac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ba8) {
            ctx->pc = 0x232BCCu;
            goto label_232bcc;
        }
    }
    ctx->pc = 0x232BB0u;
label_232bb0:
    // 0x232bb0: 0xc08bb2a  jal         func_22ECA8
    ctx->pc = 0x232BB0u;
    SET_GPR_U32(ctx, 31, 0x232BB8u);
    ctx->pc = 0x22ECA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22ECA8u, 0x232BB0u, 0x232BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BB8u;
label_232bb8:
    // 0x232bb8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232bbc: 0x2484ac28  addiu       $a0, $a0, -0x53D8
    ctx->pc = 0x232bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945832));
    // 0x232bc0: 0xc08bac2  jal         func_22EB08
    ctx->pc = 0x232BC0u;
    SET_GPR_U32(ctx, 31, 0x232BC8u);
    ctx->pc = 0x232BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232BC0u;
    // 0x232bc4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x232BC0u, 0x232BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BC8u;
label_232bc8:
    // 0x232bc8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x232bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_232bcc:
    // 0x232bcc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x232bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x232bd0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x232bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232bd4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x232bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x232bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x232BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232BD8u;
        // 0x232bdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232BE0u;
}
