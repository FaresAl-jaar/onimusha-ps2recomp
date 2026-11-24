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

// Function: sub_00300C70
// Address: 0x300c70 - 0x300d5c
void sub_00300C70_0x300c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300C70_0x300c70");
#endif

    switch (ctx->pc) {
        case 0x300cc0u: goto label_300cc0;
        case 0x300ce8u: goto label_300ce8;
        case 0x300d10u: goto label_300d10;
        default: break;
    }

    ctx->pc = 0x300c70u;

    // 0x300c70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x300c74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x300c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x300c78: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x300c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x300c7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x300c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x300c80: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x300c80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x300c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x300c88: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x300c88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x300c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x300c90: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x300c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x300c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x300c98: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x300c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c9c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x300c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ca0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x300ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ca4: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x300ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x300ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x300ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x300cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cb0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x300cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x300cb4: 0x25080c00  addiu       $t0, $t0, 0xC00
    ctx->pc = 0x300cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3072));
    // 0x300cb8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x300CB8u;
    SET_GPR_U32(ctx, 31, 0x300CC0u);
    ctx->pc = 0x300CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300CB8u;
    // 0x300cbc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x300CB8u, 0x300CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CC0u;
label_300cc0:
    // 0x300cc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cc4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x300CC4u;
    {
        const bool branch_taken_0x300cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CC4u;
        // 0x300cc8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cc4) {
            ctx->pc = 0x300D30u;
            goto label_300d30;
        }
    }
    ctx->pc = 0x300CCCu;
    // 0x300ccc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x300cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cd0: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x300cd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cd4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x300cd4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cd8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x300cd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ce0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x300CE0u;
    SET_GPR_U32(ctx, 31, 0x300CE8u);
    ctx->pc = 0x300CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300CE0u;
    // 0x300ce4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x300CE0u, 0x300CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CE8u;
label_300ce8:
    // 0x300ce8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x300ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x300cec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x300cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x300cf0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x300cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x300cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300cf8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x300cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x300cfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300d00: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x300d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x300d04: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x300d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x300d08: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x300D08u;
    SET_GPR_U32(ctx, 31, 0x300D10u);
    ctx->pc = 0x300D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D08u;
    // 0x300d0c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x300D08u, 0x300D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D10u;
label_300d10:
    // 0x300d10: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x300d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x300d14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x300d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x300d18: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x300d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x300d1c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x300d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x300d20: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x300d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x300d24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x300D24u;
    {
        const bool branch_taken_0x300d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D24u;
        // 0x300d28: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d24) {
            ctx->pc = 0x300D38u;
            goto label_300d38;
        }
    }
    ctx->pc = 0x300D2Cu;
    // 0x300d2c: 0x0  nop
    ctx->pc = 0x300d2cu;
    // NOP
label_300d30:
    // 0x300d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x300d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d34: 0x0  nop
    ctx->pc = 0x300d34u;
    // NOP
label_300d38:
    // 0x300d38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x300d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300d3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x300d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300d40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300d44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x300d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300d48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x300d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x300d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x300d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300d54: 0x3e00008  jr          $ra
    ctx->pc = 0x300D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D54u;
        // 0x300d58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300D5Cu;
}
