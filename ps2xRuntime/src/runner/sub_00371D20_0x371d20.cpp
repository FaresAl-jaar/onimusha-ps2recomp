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

// Function: sub_00371D20
// Address: 0x371d20 - 0x371e18
void sub_00371D20_0x371d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371D20_0x371d20");
#endif

    switch (ctx->pc) {
        case 0x371d54u: goto label_371d54;
        case 0x371d84u: goto label_371d84;
        case 0x371da0u: goto label_371da0;
        case 0x371dd0u: goto label_371dd0;
        case 0x371ddcu: goto label_371ddc;
        case 0x371df8u: goto label_371df8;
        default: break;
    }

    ctx->pc = 0x371d20u;

    // 0x371d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x371d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x371d24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x371d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x371d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x371d2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x371d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x371d30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x371d34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x371d34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371d3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x371d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371d44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x371d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d48: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x371d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d4c: 0xc0d263c  jal         func_3498F0
    ctx->pc = 0x371D4Cu;
    SET_GPR_U32(ctx, 31, 0x371D54u);
    ctx->pc = 0x371D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D4Cu;
    // 0x371d50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3498F0u, 0x371D4Cu, 0x371D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D54u;
label_371d54:
    // 0x371d54: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x371d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x371d58: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371d5c: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x371d60: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x371d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x371d64: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x371d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x371d68: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371d6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d70: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x371d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371d74: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x371d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x371d78: 0x3c020104  lui         $v0, 0x104
    ctx->pc = 0x371d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)260 << 16));
    // 0x371d7c: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371D7Cu;
    SET_GPR_U32(ctx, 31, 0x371D84u);
    ctx->pc = 0x371D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D7Cu;
    // 0x371d80: 0x344a0055  ori         $t2, $v0, 0x55 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)85);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371D7Cu, 0x371D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371D84u;
label_371d84:
    // 0x371d84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x371d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371d90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371d94: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x371d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x371d98: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x371D98u;
    SET_GPR_U32(ctx, 31, 0x371DA0u);
    ctx->pc = 0x371D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371D98u;
    // 0x371d9c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x371D98u, 0x371DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DA0u;
label_371da0:
    // 0x371da0: 0x2519021  addu        $s2, $s2, $s1
    ctx->pc = 0x371da0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x371da4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371da8: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371da8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x371dac: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x371dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x371db0: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x371db0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x371db4: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x371db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x371db8: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371dc0: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x371dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371dc4: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x371dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x371dc8: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371DC8u;
    SET_GPR_U32(ctx, 31, 0x371DD0u);
    ctx->pc = 0x371DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DC8u;
    // 0x371dcc: 0x344a0037  ori         $t2, $v0, 0x37 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371DC8u, 0x371DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DD0u;
label_371dd0:
    // 0x371dd0: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x371dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x371dd4: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x371DD4u;
    SET_GPR_U32(ctx, 31, 0x371DDCu);
    ctx->pc = 0x371DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DD4u;
    // 0x371dd8: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x371DD4u, 0x371DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DDCu;
label_371ddc:
    // 0x371ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x371ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371de0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x371de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371de8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x371de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371dec: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x371decu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371df0: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x371DF0u;
    SET_GPR_U32(ctx, 31, 0x371DF8u);
    ctx->pc = 0x371DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371DF0u;
    // 0x371df4: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x371DF0u, 0x371DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371DF8u;
label_371df8:
    // 0x371df8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x371df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371dfc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371dfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371e00: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371e00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371e04: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371e04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371e0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371e0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e10: 0x3e00008  jr          $ra
    ctx->pc = 0x371E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E10u;
        // 0x371e14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371E18u;
}
