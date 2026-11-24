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

// Function: sub_00246AF0
// Address: 0x246af0 - 0x246ba8
void sub_00246AF0_0x246af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246AF0_0x246af0");
#endif

    switch (ctx->pc) {
        case 0x246b14u: goto label_246b14;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b58u: goto label_246b58;
        case 0x246b68u: goto label_246b68;
        case 0x246b84u: goto label_246b84;
        case 0x246b8cu: goto label_246b8c;
        default: break;
    }

    ctx->pc = 0x246af0u;

    // 0x246af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x246af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x246af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x246af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x246afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x246b00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x246b00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x246b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x246b08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x246b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x246b0c: 0xc091a7e  jal         func_2469F8
    ctx->pc = 0x246B0Cu;
    SET_GPR_U32(ctx, 31, 0x246B14u);
    ctx->pc = 0x246B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B0Cu;
    // 0x246b10: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2469F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2469F8u, 0x246B0Cu, 0x246B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B14u;
label_246b14:
    // 0x246b14: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x246b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x246b18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246b1c: 0x8c47e9f0  lw          $a3, -0x1610($v0)
    ctx->pc = 0x246b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4CE9F0u));
    // 0x246b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b24: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x246b24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x246b28: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x246b28u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x246b2c: 0x14e3000c  bne         $a3, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x246B2Cu;
    {
        const bool branch_taken_0x246b2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x246B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B2Cu;
        // 0x246b30: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b2c) {
            ctx->pc = 0x246B60u;
            goto label_246b60;
        }
    }
    ctx->pc = 0x246B34u;
    // 0x246b34: 0xc045674  jal         func_1159D0
    ctx->pc = 0x246B34u;
    SET_GPR_U32(ctx, 31, 0x246B3Cu);
    ctx->pc = 0x246B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B34u;
    // 0x246b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159D0u, 0x246B34u, 0x246B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B3Cu;
label_246b3c:
    // 0x246b3c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246b40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b44: 0x2484cb10  addiu       $a0, $a0, -0x34F0
    ctx->pc = 0x246b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953744));
    // 0x246b48: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x246B48u;
    {
        const bool branch_taken_0x246b48 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B48u;
        // 0x246b4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b48) {
            ctx->pc = 0x246B84u;
            goto label_246b84;
        }
    }
    ctx->pc = 0x246B50u;
    // 0x246b50: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246B50u;
    SET_GPR_U32(ctx, 31, 0x246B58u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246B50u, 0x246B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B58u;
label_246b58:
    // 0x246b58: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x246B58u;
    {
        const bool branch_taken_0x246b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b58) {
            ctx->pc = 0x246B84u;
            goto label_246b84;
        }
    }
    ctx->pc = 0x246B60u;
label_246b60:
    // 0x246b60: 0xc044ddc  jal         func_113770
    ctx->pc = 0x246B60u;
    SET_GPR_U32(ctx, 31, 0x246B68u);
    ctx->pc = 0x113770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113770u, 0x246B60u, 0x246B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B68u;
label_246b68:
    // 0x246b68: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x246b6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x246b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b70: 0x2484cb30  addiu       $a0, $a0, -0x34D0
    ctx->pc = 0x246b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    // 0x246b74: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x246B74u;
    {
        const bool branch_taken_0x246b74 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x246B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B74u;
        // 0x246b78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b74) {
            ctx->pc = 0x246B84u;
            goto label_246b84;
        }
    }
    ctx->pc = 0x246B7Cu;
    // 0x246b7c: 0xc044332  jal         func_110CC8
    ctx->pc = 0x246B7Cu;
    SET_GPR_U32(ctx, 31, 0x246B84u);
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x246B7Cu, 0x246B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B84u;
label_246b84:
    // 0x246b84: 0xc091a8c  jal         func_246A30
    ctx->pc = 0x246B84u;
    SET_GPR_U32(ctx, 31, 0x246B8Cu);
    ctx->pc = 0x246A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246A30u, 0x246B84u, 0x246B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B8Cu;
label_246b8c:
    // 0x246b8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x246b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x246b90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246b94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246b98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x246b98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x246b9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x246b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x246ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x246BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BA0u;
        // 0x246ba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246BA8u;
}
