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

// Function: sub_00334D30
// Address: 0x334d30 - 0x334e2c
void sub_00334D30_0x334d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334D30_0x334d30");
#endif

    switch (ctx->pc) {
        case 0x334d80u: goto label_334d80;
        case 0x334da8u: goto label_334da8;
        default: break;
    }

    ctx->pc = 0x334d30u;

    // 0x334d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x334d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x334d34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x334d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x334d38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x334d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x334d3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x334d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x334d40: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x334d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x334d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x334d48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x334d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x334d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x334d50: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x334d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x334d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x334d58: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x334d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x334d5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x334d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d64: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x334d64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x334d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x334d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x334d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d70: 0x24070740  addiu       $a3, $zero, 0x740
    ctx->pc = 0x334d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
    // 0x334d74: 0x25084cd0  addiu       $t0, $t0, 0x4CD0
    ctx->pc = 0x334d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19664));
    // 0x334d78: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x334D78u;
    SET_GPR_U32(ctx, 31, 0x334D80u);
    ctx->pc = 0x334D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334D78u;
    // 0x334d7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x334D78u, 0x334D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334D80u;
label_334d80:
    // 0x334d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x334d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d84: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x334D84u;
    {
        const bool branch_taken_0x334d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x334D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334D84u;
        // 0x334d88: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334d84) {
            ctx->pc = 0x334E00u;
            goto label_334e00;
        }
    }
    ctx->pc = 0x334D8Cu;
    // 0x334d8c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x334d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d90: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x334d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d94: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x334d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334d9c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x334d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x334da0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x334DA0u;
    SET_GPR_U32(ctx, 31, 0x334DA8u);
    ctx->pc = 0x334DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334DA0u;
    // 0x334da4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x334DA0u, 0x334DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334DA8u;
label_334da8:
    // 0x334da8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x334da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x334dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x334dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x334db0: 0xa6030526  sh          $v1, 0x526($s0)
    ctx->pc = 0x334db0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x334db4: 0xa600052a  sh          $zero, 0x52A($s0)
    ctx->pc = 0x334db4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 0));
    // 0x334db8: 0xa6000528  sh          $zero, 0x528($s0)
    ctx->pc = 0x334db8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 0));
    // 0x334dbc: 0xa2020520  sb          $v0, 0x520($s0)
    ctx->pc = 0x334dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    // 0x334dc0: 0xa2000730  sb          $zero, 0x730($s0)
    ctx->pc = 0x334dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1840), (uint8_t)GPR_U32(ctx, 0));
    // 0x334dc4: 0xa2110731  sb          $s1, 0x731($s0)
    ctx->pc = 0x334dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1841), (uint8_t)GPR_U32(ctx, 17));
    // 0x334dc8: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x334dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
    // 0x334dcc: 0xa6000594  sh          $zero, 0x594($s0)
    ctx->pc = 0x334dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1428), (uint16_t)GPR_U32(ctx, 0));
    // 0x334dd0: 0xae0005e0  sw          $zero, 0x5E0($s0)
    ctx->pc = 0x334dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1504), GPR_U32(ctx, 0));
    // 0x334dd4: 0xa60005e4  sh          $zero, 0x5E4($s0)
    ctx->pc = 0x334dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1508), (uint16_t)GPR_U32(ctx, 0));
    // 0x334dd8: 0xae000630  sw          $zero, 0x630($s0)
    ctx->pc = 0x334dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1584), GPR_U32(ctx, 0));
    // 0x334ddc: 0xa6000634  sh          $zero, 0x634($s0)
    ctx->pc = 0x334ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 0));
    // 0x334de0: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x334de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x334de4: 0xa6000684  sh          $zero, 0x684($s0)
    ctx->pc = 0x334de4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x334de8: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x334de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x334dec: 0xa60006d4  sh          $zero, 0x6D4($s0)
    ctx->pc = 0x334decu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1748), (uint16_t)GPR_U32(ctx, 0));
    // 0x334df0: 0xae000720  sw          $zero, 0x720($s0)
    ctx->pc = 0x334df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1824), GPR_U32(ctx, 0));
    // 0x334df4: 0xa6000724  sh          $zero, 0x724($s0)
    ctx->pc = 0x334df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1828), (uint16_t)GPR_U32(ctx, 0));
    // 0x334df8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x334DF8u;
    {
        const bool branch_taken_0x334df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334DF8u;
        // 0x334dfc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334df8) {
            ctx->pc = 0x334E08u;
            goto label_334e08;
        }
    }
    ctx->pc = 0x334E00u;
label_334e00:
    // 0x334e00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x334e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e04: 0x0  nop
    ctx->pc = 0x334e04u;
    // NOP
label_334e08:
    // 0x334e08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x334e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x334e0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x334e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x334e10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x334e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x334e14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x334e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334e18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x334e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334e1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x334e1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334e20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x334e20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334e24: 0x3e00008  jr          $ra
    ctx->pc = 0x334E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E24u;
        // 0x334e28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334E2Cu;
}
