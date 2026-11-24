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

// Function: sub_002C9CF0
// Address: 0x2c9cf0 - 0x2c9e24
void sub_002C9CF0_0x2c9cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9CF0_0x2c9cf0");
#endif

    switch (ctx->pc) {
        case 0x2c9d3cu: goto label_2c9d3c;
        case 0x2c9de4u: goto label_2c9de4;
        default: break;
    }

    ctx->pc = 0x2c9cf0u;

    // 0x2c9cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9cf4: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2c9cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2c9cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c9cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9cfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9d00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9d04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c9d04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9d0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c9d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d10: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c9d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9d18: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2c9d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c9d1c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x2c9d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2c9d20: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C9D20u;
    {
        const bool branch_taken_0x2c9d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D20u;
        // 0x2c9d24: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d20) {
            ctx->pc = 0x2C9E08u;
            goto label_2c9e08;
        }
    }
    ctx->pc = 0x2C9D28u;
    // 0x2c9d28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c9d2c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C9D2Cu;
    {
        const bool branch_taken_0x2c9d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D2Cu;
        // 0x2c9d30: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d2c) {
            ctx->pc = 0x2C9E08u;
            goto label_2c9e08;
        }
    }
    ctx->pc = 0x2C9D34u;
    // 0x2c9d34: 0xc0b20cc  jal         func_2C8330
    ctx->pc = 0x2C9D34u;
    SET_GPR_U32(ctx, 31, 0x2C9D3Cu);
    ctx->pc = 0x2C8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8330u, 0x2C9D34u, 0x2C9D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9D3Cu;
label_2c9d3c:
    // 0x2c9d3c: 0xa660003c  sh          $zero, 0x3C($s3)
    ctx->pc = 0x2c9d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9d40: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c9d44: 0x24635970  addiu       $v1, $v1, 0x5970
    ctx->pc = 0x2c9d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22896));
    // 0x2c9d48: 0xa2700031  sb          $s0, 0x31($s3)
    ctx->pc = 0x2c9d48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 49), (uint8_t)GPR_U32(ctx, 16));
    // 0x2c9d4c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c9d4cu;
    { uint32_t bits = FAST_READ32(0x4E5970u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9d50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c9d50u;
    { uint32_t bits = FAST_READ32(0x4E5974u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d54: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c9d54u;
    { uint32_t bits = FAST_READ32(0x4E5978u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9d58: 0xe6620008  swc1        $f2, 0x8($s3)
    ctx->pc = 0x2c9d58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2c9d5c: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x2c9d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x2c9d60: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x2c9d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2c9d64: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x2c9d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c9d68: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2c9d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c9d6c: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2c9d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c9d70: 0xe6620014  swc1        $f2, 0x14($s3)
    ctx->pc = 0x2c9d70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x2c9d74: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x2c9d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x2c9d78: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C9D78u;
    {
        const bool branch_taken_0x2c9d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D78u;
        // 0x2c9d7c: 0xe660001c  swc1        $f0, 0x1C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d78) {
            ctx->pc = 0x2C9D88u;
            goto label_2c9d88;
        }
    }
    ctx->pc = 0x2C9D80u;
    // 0x2c9d80: 0x92710053  lbu         $s1, 0x53($s3)
    ctx->pc = 0x2c9d80u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 83)));
    // 0x2c9d84: 0x0  nop
    ctx->pc = 0x2c9d84u;
    // NOP
label_2c9d88:
    // 0x2c9d88: 0xa2600053  sb          $zero, 0x53($s3)
    ctx->pc = 0x2c9d88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9d8c: 0x938389d0  lbu         $v1, -0x7630($gp)
    ctx->pc = 0x2c9d8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c9d90: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C9D90u;
    {
        const bool branch_taken_0x2c9d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9d90) {
            ctx->pc = 0x2C9DF0u;
            goto label_2c9df0;
        }
    }
    ctx->pc = 0x2C9D98u;
    // 0x2c9d98: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C9D98u;
    {
        const bool branch_taken_0x2c9d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9D98u;
        // 0x2c9d9c: 0xa260004f  sb          $zero, 0x4F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9d98) {
            ctx->pc = 0x2C9DD8u;
            goto label_2c9dd8;
        }
    }
    ctx->pc = 0x2C9DA0u;
    // 0x2c9da0: 0x92650037  lbu         $a1, 0x37($s3)
    ctx->pc = 0x2c9da0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
    // 0x2c9da4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x2c9da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2c9da8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c9da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c9dac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9db0: 0xa265004e  sb          $a1, 0x4E($s3)
    ctx->pc = 0x2c9db0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c9db4: 0xa2710037  sb          $s1, 0x37($s3)
    ctx->pc = 0x2c9db4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 55), (uint8_t)GPR_U32(ctx, 17));
    // 0x2c9db8: 0xa2600032  sb          $zero, 0x32($s3)
    ctx->pc = 0x2c9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9dbc: 0xa264005f  sb          $a0, 0x5F($s3)
    ctx->pc = 0x2c9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c9dc0: 0xa6600080  sh          $zero, 0x80($s3)
    ctx->pc = 0x2c9dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9dc4: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2c9dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2c9dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c9dcc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C9DCCu;
    {
        const bool branch_taken_0x2c9dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DCCu;
        // 0x2c9dd0: 0x8c630018  lw          $v1, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9dcc) {
            ctx->pc = 0x2C9E00u;
            goto label_2c9e00;
        }
    }
    ctx->pc = 0x2C9DD4u;
    // 0x2c9dd4: 0x0  nop
    ctx->pc = 0x2c9dd4u;
    // NOP
label_2c9dd8:
    // 0x2c9dd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c9dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ddc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C9DDCu;
    SET_GPR_U32(ctx, 31, 0x2C9DE4u);
    ctx->pc = 0x2C9DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DDCu;
    // 0x2c9de0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C9DDCu, 0x2C9DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DE4u;
label_2c9de4:
    // 0x2c9de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9DE4u;
    {
        const bool branch_taken_0x2c9de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9de4) {
            ctx->pc = 0x2C9DF8u;
            goto label_2c9df8;
        }
    }
    ctx->pc = 0x2C9DECu;
    // 0x2c9dec: 0x0  nop
    ctx->pc = 0x2c9decu;
    // NOP
label_2c9df0:
    // 0x2c9df0: 0xa39189d8  sb          $s1, -0x7628($gp)
    ctx->pc = 0x2c9df0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 17));
    // 0x2c9df4: 0x0  nop
    ctx->pc = 0x2c9df4u;
    // NOP
label_2c9df8:
    // 0x2c9df8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c9df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9dfc: 0x0  nop
    ctx->pc = 0x2c9dfcu;
    // NOP
label_2c9e00:
    // 0x2c9e00: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x2c9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
    // 0x2c9e04: 0x0  nop
    ctx->pc = 0x2c9e04u;
    // NOP
label_2c9e08:
    // 0x2c9e08: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c9e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9e0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9e0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E1Cu;
        // 0x2c9e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E24u;
}
