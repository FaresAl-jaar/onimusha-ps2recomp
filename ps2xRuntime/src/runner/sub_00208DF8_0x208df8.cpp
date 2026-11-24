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

// Function: sub_00208DF8
// Address: 0x208df8 - 0x208ea8
void sub_00208DF8_0x208df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208DF8_0x208df8");
#endif

    switch (ctx->pc) {
        case 0x208e20u: goto label_208e20;
        case 0x208e38u: goto label_208e38;
        case 0x208e54u: goto label_208e54;
        case 0x208e68u: goto label_208e68;
        case 0x208e7cu: goto label_208e7c;
        case 0x208e8cu: goto label_208e8c;
        default: break;
    }

    ctx->pc = 0x208df8u;

    // 0x208df8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x208df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x208dfc: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x208dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x208e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x208e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e04: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x208e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x208e08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x208e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e0c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x208e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x208e10: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x208e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x208e14: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x208e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x208e18: 0xc081d84  jal         func_207610
    ctx->pc = 0x208E18u;
    SET_GPR_U32(ctx, 31, 0x208E20u);
    ctx->pc = 0x208E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E18u;
    // 0x208e1c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x208E18u, 0x208E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E20u;
label_208e20:
    // 0x208e20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208e24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208e28: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208E28u;
    {
        const bool branch_taken_0x208e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x208E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E28u;
        // 0x208e2c: 0x24847cf8  addiu       $a0, $a0, 0x7CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e28) {
            ctx->pc = 0x208E40u;
            goto label_208e40;
        }
    }
    ctx->pc = 0x208E30u;
    // 0x208e30: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208E30u;
    SET_GPR_U32(ctx, 31, 0x208E38u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208E30u, 0x208E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E38u;
label_208e38:
    // 0x208e38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x208E38u;
    {
        const bool branch_taken_0x208e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E38u;
        // 0x208e3c: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e38) {
            ctx->pc = 0x208E90u;
            goto label_208e90;
        }
    }
    ctx->pc = 0x208E40u;
label_208e40:
    // 0x208e40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x208e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x208e44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208E44u;
    {
        const bool branch_taken_0x208e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E44u;
        // 0x208e48: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e44) {
            ctx->pc = 0x208E60u;
            goto label_208e60;
        }
    }
    ctx->pc = 0x208E4Cu;
    // 0x208e4c: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208E4Cu;
    SET_GPR_U32(ctx, 31, 0x208E54u);
    ctx->pc = 0x208E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E4Cu;
    // 0x208e50: 0x24847d28  addiu       $a0, $a0, 0x7D28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208E4Cu, 0x208E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E54u;
label_208e54:
    // 0x208e54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x208E54u;
    {
        const bool branch_taken_0x208e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208E54u;
        // 0x208e58: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208e54) {
            ctx->pc = 0x208E90u;
            goto label_208e90;
        }
    }
    ctx->pc = 0x208E5Cu;
    // 0x208e5c: 0x0  nop
    ctx->pc = 0x208e5cu;
    // NOP
label_208e60:
    // 0x208e60: 0xc0821e6  jal         func_208798
    ctx->pc = 0x208E60u;
    SET_GPR_U32(ctx, 31, 0x208E68u);
    ctx->pc = 0x208E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E60u;
    // 0x208e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x208E60u, 0x208E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E68u;
label_208e68:
    // 0x208e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x208e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e70: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x208e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e74: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x208E74u;
    SET_GPR_U32(ctx, 31, 0x208E7Cu);
    ctx->pc = 0x208E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E74u;
    // 0x208e78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x208E74u, 0x208E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E7Cu;
label_208e7c:
    // 0x208e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x208e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x208e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208e84: 0xc089c96  jal         func_227258
    ctx->pc = 0x208E84u;
    SET_GPR_U32(ctx, 31, 0x208E8Cu);
    ctx->pc = 0x208E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208E84u;
    // 0x208e88: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227258u, 0x208E84u, 0x208E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208E8Cu;
label_208e8c:
    // 0x208e8c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x208e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_208e90:
    // 0x208e90: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x208e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x208e94: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x208e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x208e98: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x208e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x208e9c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x208e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x208ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x208EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208EA0u;
        // 0x208ea4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208EA8u;
}
