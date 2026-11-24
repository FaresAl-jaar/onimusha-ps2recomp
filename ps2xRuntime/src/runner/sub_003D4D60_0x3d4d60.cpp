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

// Function: sub_003D4D60
// Address: 0x3d4d60 - 0x3d4e4c
void sub_003D4D60_0x3d4d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4D60_0x3d4d60");
#endif

    switch (ctx->pc) {
        case 0x3d4db0u: goto label_3d4db0;
        case 0x3d4dd8u: goto label_3d4dd8;
        case 0x3d4e00u: goto label_3d4e00;
        default: break;
    }

    ctx->pc = 0x3d4d60u;

    // 0x3d4d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d4d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d4d64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d4d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d4d68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d4d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d4d6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3d4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3d4d70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3d4d70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3d4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3d4d78: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3d4d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3d4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3d4d80: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3d4d80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d4d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d4d88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3d4d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d8c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3d4d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3d4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d94: 0x3c08003d  lui         $t0, 0x3D
    ctx->pc = 0x3d4d94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)61 << 16));
    // 0x3d4d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d4d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4da0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x3d4da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x3d4da4: 0x25084cf0  addiu       $t0, $t0, 0x4CF0
    ctx->pc = 0x3d4da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19696));
    // 0x3d4da8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3D4DA8u;
    SET_GPR_U32(ctx, 31, 0x3D4DB0u);
    ctx->pc = 0x3D4DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4DA8u;
    // 0x3d4dac: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3D4DA8u, 0x3D4DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4DB0u;
label_3d4db0:
    // 0x3d4db0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d4db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4db4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D4DB4u;
    {
        const bool branch_taken_0x3d4db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4DB4u;
        // 0x3d4db8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4db4) {
            ctx->pc = 0x3D4E20u;
            goto label_3d4e20;
        }
    }
    ctx->pc = 0x3D4DBCu;
    // 0x3d4dbc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3d4dbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4dc0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3d4dc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4dc4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x3d4dc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4dcc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3d4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3d4dd0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3D4DD0u;
    SET_GPR_U32(ctx, 31, 0x3D4DD8u);
    ctx->pc = 0x3D4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4DD0u;
    // 0x3d4dd4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3D4DD0u, 0x3D4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4DD8u;
label_3d4dd8:
    // 0x3d4dd8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3d4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3d4ddc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3d4ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3d4de0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3d4de0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d4de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4de8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x3d4de8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4df0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3d4df0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d4df4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3d4df4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d4df8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3D4DF8u;
    SET_GPR_U32(ctx, 31, 0x3D4E00u);
    ctx->pc = 0x3D4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4DF8u;
    // 0x3d4dfc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3D4DF8u, 0x3D4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4E00u;
label_3d4e00:
    // 0x3d4e00: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3d4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3d4e04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3d4e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3d4e08: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x3d4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x3d4e0c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x3d4e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x3d4e10: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x3d4e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d4e14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4E14u;
    {
        const bool branch_taken_0x3d4e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E14u;
        // 0x3d4e18: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e14) {
            ctx->pc = 0x3D4E28u;
            goto label_3d4e28;
        }
    }
    ctx->pc = 0x3D4E1Cu;
    // 0x3d4e1c: 0x0  nop
    ctx->pc = 0x3d4e1cu;
    // NOP
label_3d4e20:
    // 0x3d4e20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4e20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4e24: 0x0  nop
    ctx->pc = 0x3d4e24u;
    // NOP
label_3d4e28:
    // 0x3d4e28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d4e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d4e2c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d4e2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4e30: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3d4e30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3d4e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4e38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3d4e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d4e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d4e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d4e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4e44: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4E44u;
        // 0x3d4e48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4E4Cu;
}
