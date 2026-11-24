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

// Function: sub_00356D20
// Address: 0x356d20 - 0x356e5c
void sub_00356D20_0x356d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356D20_0x356d20");
#endif

    switch (ctx->pc) {
        case 0x356d80u: goto label_356d80;
        case 0x356da8u: goto label_356da8;
        case 0x356de8u: goto label_356de8;
        case 0x356e20u: goto label_356e20;
        default: break;
    }

    ctx->pc = 0x356d20u;

    // 0x356d20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x356d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x356d24: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x356d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x356d28: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x356d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x356d2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x356d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x356d30: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x356d30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x356d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x356d38: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x356d38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x356d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x356d40: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x356d40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x356d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x356d48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x356d48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x356d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x356d50: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x356d50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d54: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x356d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x356d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x356d5c: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x356d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x356d60: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x356d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x356d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d70: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x356d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x356d74: 0x25086cb0  addiu       $t0, $t0, 0x6CB0
    ctx->pc = 0x356d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27824));
    // 0x356d78: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x356D78u;
    SET_GPR_U32(ctx, 31, 0x356D80u);
    ctx->pc = 0x356D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356D78u;
    // 0x356d7c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x356D78u, 0x356D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D80u;
label_356d80:
    // 0x356d80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d84: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x356D84u;
    {
        const bool branch_taken_0x356d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D84u;
        // 0x356d88: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d84) {
            ctx->pc = 0x356E28u;
            goto label_356e28;
        }
    }
    ctx->pc = 0x356D8Cu;
    // 0x356d8c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x356d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d90: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x356d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d94: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x356d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x356d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356da0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x356DA0u;
    SET_GPR_U32(ctx, 31, 0x356DA8u);
    ctx->pc = 0x356DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356DA0u;
    // 0x356da4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x356DA0u, 0x356DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DA8u;
label_356da8:
    // 0x356da8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x356da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x356dac: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x356dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x356db0: 0x398c0  sll         $s3, $v1, 3
    ctx->pc = 0x356db0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x356db4: 0x2442f970  addiu       $v0, $v0, -0x690
    ctx->pc = 0x356db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965616));
    // 0x356db8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x356db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x356dbc: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x356dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x356dc0: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x356dc0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356dc4: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x356dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x356dc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x356dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356dcc: 0xa6060526  sh          $a2, 0x526($s0)
    ctx->pc = 0x356dccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 6));
    // 0x356dd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356dd4: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x356dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x356dd8: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x356dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x356ddc: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x356ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x356de0: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x356DE0u;
    SET_GPR_U32(ctx, 31, 0x356DE8u);
    ctx->pc = 0x356DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356DE0u;
    // 0x356de4: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x356DE0u, 0x356DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DE8u;
label_356de8:
    // 0x356de8: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x356de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x356dec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x356decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x356df0: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x356df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x356df4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x356df8: 0xa2170558  sb          $s7, 0x558($s0)
    ctx->pc = 0x356df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 23));
    // 0x356dfc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x356dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x356e00: 0xa2110559  sb          $s1, 0x559($s0)
    ctx->pc = 0x356e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 17));
    // 0x356e04: 0x2442f974  addiu       $v0, $v0, -0x68C
    ctx->pc = 0x356e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965620));
    // 0x356e08: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x356e08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x356e0c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x356e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x356e10: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x356e10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x356e14: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x356e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x356e18: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x356E18u;
    SET_GPR_U32(ctx, 31, 0x356E20u);
    ctx->pc = 0x356E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356E18u;
    // 0x356e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x356E18u, 0x356E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E20u;
label_356e20:
    // 0x356e20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x356E20u;
    {
        const bool branch_taken_0x356e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E20u;
        // 0x356e24: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e20) {
            ctx->pc = 0x356E30u;
            goto label_356e30;
        }
    }
    ctx->pc = 0x356E28u;
label_356e28:
    // 0x356e28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x356e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e2c: 0x0  nop
    ctx->pc = 0x356e2cu;
    // NOP
label_356e30:
    // 0x356e30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x356e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x356e34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x356e34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x356e38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x356e38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x356e3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x356e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x356e40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x356e40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356e44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x356e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356e48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x356e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x356e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x356e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356e54: 0x3e00008  jr          $ra
    ctx->pc = 0x356E54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E54u;
        // 0x356e58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356E5Cu;
}
