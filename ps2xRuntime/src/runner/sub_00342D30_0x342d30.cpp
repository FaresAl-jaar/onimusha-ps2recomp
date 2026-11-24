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

// Function: sub_00342D30
// Address: 0x342d30 - 0x342e3c
void sub_00342D30_0x342d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342D30_0x342d30");
#endif

    switch (ctx->pc) {
        case 0x342d80u: goto label_342d80;
        case 0x342da8u: goto label_342da8;
        case 0x342dd0u: goto label_342dd0;
        default: break;
    }

    ctx->pc = 0x342d30u;

    // 0x342d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x342d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x342d34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x342d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x342d38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x342d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x342d3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x342d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x342d40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x342d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x342d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x342d48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x342d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x342d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x342d50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x342d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x342d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x342d58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x342d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x342d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x342d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d64: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x342d64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x342d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x342d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d70: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x342d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x342d74: 0x25082cc0  addiu       $t0, $t0, 0x2CC0
    ctx->pc = 0x342d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11456));
    // 0x342d78: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x342D78u;
    SET_GPR_U32(ctx, 31, 0x342D80u);
    ctx->pc = 0x342D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342D78u;
    // 0x342d7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x342D78u, 0x342D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342D80u;
label_342d80:
    // 0x342d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x342d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d84: 0x12000022  beqz        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x342D84u;
    {
        const bool branch_taken_0x342d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x342D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D84u;
        // 0x342d88: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342d84) {
            ctx->pc = 0x342E10u;
            goto label_342e10;
        }
    }
    ctx->pc = 0x342D8Cu;
    // 0x342d8c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x342d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d90: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x342d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d94: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x342d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342d9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x342d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342da0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x342DA0u;
    SET_GPR_U32(ctx, 31, 0x342DA8u);
    ctx->pc = 0x342DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DA0u;
    // 0x342da4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x342DA0u, 0x342DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342DA8u;
label_342da8:
    // 0x342da8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x342da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x342dac: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x342dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x342db0: 0xa6040526  sh          $a0, 0x526($s0)
    ctx->pc = 0x342db0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 4));
    // 0x342db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x342db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x342db8: 0xa6040528  sh          $a0, 0x528($s0)
    ctx->pc = 0x342db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 4));
    // 0x342dbc: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x342dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x342dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x342dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342dc4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x342dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x342dc8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x342DC8u;
    SET_GPR_U32(ctx, 31, 0x342DD0u);
    ctx->pc = 0x342DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342DC8u;
    // 0x342dcc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x342DC8u, 0x342DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342DD0u;
label_342dd0:
    // 0x342dd0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x342dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x342dd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x342dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x342dd8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x342dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x342ddc: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x342ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x342de0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x342de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x342de4: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x342de4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x342de8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x342de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342dec: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x342decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x342df0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342df4: 0x2442f378  addiu       $v0, $v0, -0xC88
    ctx->pc = 0x342df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964088));
    // 0x342df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342dfc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x342dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342e00: 0xa2020558  sb          $v0, 0x558($s0)
    ctx->pc = 0x342e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 2));
    // 0x342e04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x342E04u;
    {
        const bool branch_taken_0x342e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E04u;
        // 0x342e08: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342e04) {
            ctx->pc = 0x342E18u;
            goto label_342e18;
        }
    }
    ctx->pc = 0x342E0Cu;
    // 0x342e0c: 0x0  nop
    ctx->pc = 0x342e0cu;
    // NOP
label_342e10:
    // 0x342e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x342e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342e14: 0x0  nop
    ctx->pc = 0x342e14u;
    // NOP
label_342e18:
    // 0x342e18: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x342e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x342e1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x342e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x342e20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x342e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x342e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x342e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x342e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x342e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x342e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x342e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342e34: 0x3e00008  jr          $ra
    ctx->pc = 0x342E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E34u;
        // 0x342e38: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E3Cu;
}
