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

// Function: sub_00100D40
// Address: 0x100d40 - 0x10107c
void sub_00100D40_0x100d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100D40_0x100d40");
#endif

    switch (ctx->pc) {
        case 0x100e00u: goto label_100e00;
        case 0x100e48u: goto label_100e48;
        case 0x100ec8u: goto label_100ec8;
        case 0x100ed4u: goto label_100ed4;
        case 0x100ee4u: goto label_100ee4;
        case 0x100f08u: goto label_100f08;
        case 0x100f14u: goto label_100f14;
        case 0x100f20u: goto label_100f20;
        case 0x100f48u: goto label_100f48;
        case 0x100f84u: goto label_100f84;
        case 0x100fdcu: goto label_100fdc;
        case 0x10101cu: goto label_10101c;
        case 0x101030u: goto label_101030;
        case 0x101040u: goto label_101040;
        default: break;
    }

    ctx->pc = 0x100d40u;

    // 0x100d40: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x100d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x100d44: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x100d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x100d48: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x100d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x100d4c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x100d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x100d50: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x100d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x100d54: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x100d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x100d58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x100d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x100d5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x100d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x100d60: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x100d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x100d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x100d68: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x100d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x100d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x100d70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x100d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100d78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x100d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100d80: 0x26880020  addiu       $t0, $s4, 0x20
    ctx->pc = 0x100d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x100d84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100d88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x100d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100d8c: 0x27b000b8  addiu       $s0, $sp, 0xB8
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x100d90: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x100d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x100d94: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x100d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x100d98: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x100d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x100d9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x100da0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x100da4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x100da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x100da8: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x100da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x100dac: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x100dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x100db0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x100db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x100db4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x100db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100db8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x100db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x100dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x100dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100dc0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x100dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x100dc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x100dc8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x100dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x100dcc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x100dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x100dd0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x100dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x100dd4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x100dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x100dd8: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x100dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x100ddc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x100ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x100de0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x100de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x100de4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x100de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x100de8: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x100de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x100dec: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x100decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x100df0: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x100df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x100df4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x100df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x100df8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x100df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x100dfc: 0x0  nop
    ctx->pc = 0x100dfcu;
    // NOP
label_100e00:
    // 0x100e00: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x100e00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x100e04: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x100e08: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x100e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x100e0c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x100e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x100e10: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x100e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x100e14: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x100e14u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x100e18: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100E18u;
    {
        const bool branch_taken_0x100e18 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x100E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E18u;
        // 0x100e1c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e18) {
            ctx->pc = 0x100E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100e00;
        }
    }
    ctx->pc = 0x100E20u;
    // 0x100e20: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x100e24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100E24u;
    {
        const bool branch_taken_0x100e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e24) {
            ctx->pc = 0x100E38u;
            goto label_100e38;
        }
    }
    ctx->pc = 0x100E2Cu;
    // 0x100e2c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x100e2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x100E30u;
    {
        const bool branch_taken_0x100e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E30u;
        // 0x100e34: 0x3042001f  andi        $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e30) {
            ctx->pc = 0x100E3Cu;
            goto label_100e3c;
        }
    }
    ctx->pc = 0x100E38u;
label_100e38:
    // 0x100e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100e3c:
    // 0x100e3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x100e40: 0x27b700a4  addiu       $s7, $sp, 0xA4
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x100e44: 0x27be00a8  addiu       $fp, $sp, 0xA8
    ctx->pc = 0x100e44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_100e48:
    // 0x100e48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x100e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x100e4c: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x100e4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x100e50: 0x10200075  beqz        $at, . + 4 + (0x75 << 2)
    ctx->pc = 0x100E50u;
    {
        const bool branch_taken_0x100e50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100E50u;
        // 0x100e54: 0x3c030066  lui         $v1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e50) {
            ctx->pc = 0x101028u;
            goto label_101028;
        }
    }
    ctx->pc = 0x100E58u;
    // 0x100e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x100e5c: 0x246318b0  addiu       $v1, $v1, 0x18B0
    ctx->pc = 0x100e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6320));
    // 0x100e60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x100e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x100e64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100e68: 0x400008  jr          $v0
    ctx->pc = 0x100E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100E70u: goto label_100e70;
            case 0x100EF8u: goto label_100ef8;
            case 0x101028u: goto label_101028;
            case 0x101038u: goto label_101038;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x100E70u;
label_100e70:
    // 0x100e70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100e74: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x100e74u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x100e78: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x100e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x100e7c: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x100e7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x100e80: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x100e80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x100e84: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x100e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x100e88: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x100e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x100e8c: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x100e8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x100e90: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x100e90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x100e94: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100e98: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x100e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100e9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100ea0: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x100ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
    // 0x100ea4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x100ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x100ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100EA8u;
    {
        const bool branch_taken_0x100ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ea8) {
            ctx->pc = 0x100EB8u;
            goto label_100eb8;
        }
    }
    ctx->pc = 0x100EB0u;
    // 0x100eb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x100EB0u;
    {
        const bool branch_taken_0x100eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100EB0u;
        // 0x100eb4: 0xafa203a0  sw          $v0, 0x3A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100eb0) {
            ctx->pc = 0x100EC0u;
            goto label_100ec0;
        }
    }
    ctx->pc = 0x100EB8u;
label_100eb8:
    // 0x100eb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ebc: 0xafa203a0  sw          $v0, 0x3A0($sp)
    ctx->pc = 0x100ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 2));
label_100ec0:
    // 0x100ec0: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100EC0u;
    SET_GPR_U32(ctx, 31, 0x100EC8u);
    ctx->pc = 0x100EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EC0u;
    // 0x100ec4: 0x27a503a4  addiu       $a1, $sp, 0x3A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 932));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100EC0u, 0x100EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EC8u;
label_100ec8:
    // 0x100ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ecc: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x100ECCu;
    SET_GPR_U32(ctx, 31, 0x100ED4u);
    ctx->pc = 0x100ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100ECCu;
    // 0x100ed0: 0x27a503a8  addiu       $a1, $sp, 0x3A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x100ECCu, 0x100ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100ED4u;
label_100ed4:
    // 0x100ed4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x100ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100ed8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x100ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x100edc: 0xc040178  jal         func_1005E0
    ctx->pc = 0x100EDCu;
    SET_GPR_U32(ctx, 31, 0x100EE4u);
    ctx->pc = 0x100EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100EDCu;
    // 0x100ee0: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E0u, 0x100EDCu, 0x100EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EE4u;
label_100ee4:
    // 0x100ee4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x100EE4u;
    {
        const bool branch_taken_0x100ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100ee4) {
            ctx->pc = 0x101048u;
            goto label_101048;
        }
    }
    ctx->pc = 0x100EECu;
    // 0x100eec: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x100EECu;
    {
        const bool branch_taken_0x100eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100eec) {
            ctx->pc = 0x101038u;
            goto label_101038;
        }
    }
    ctx->pc = 0x100EF4u;
    // 0x100ef4: 0x0  nop
    ctx->pc = 0x100ef4u;
    // NOP
label_100ef8:
    // 0x100ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100efc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x100efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x100f00: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100F00u;
    SET_GPR_U32(ctx, 31, 0x100F08u);
    ctx->pc = 0x100F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F00u;
    // 0x100f04: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100F00u, 0x100F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F08u;
label_100f08:
    // 0x100f08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f0c: 0xc04027c  jal         func_1009F0
    ctx->pc = 0x100F0Cu;
    SET_GPR_U32(ctx, 31, 0x100F14u);
    ctx->pc = 0x100F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F0Cu;
    // 0x100f10: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009F0u, 0x100F0Cu, 0x100F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F14u;
label_100f14:
    // 0x100f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f18: 0xc0402a8  jal         func_100AA0
    ctx->pc = 0x100F18u;
    SET_GPR_U32(ctx, 31, 0x100F20u);
    ctx->pc = 0x100F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F18u;
    // 0x100f1c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100AA0u, 0x100F18u, 0x100F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F20u;
label_100f20:
    // 0x100f20: 0x27a300ac  addiu       $v1, $sp, 0xAC
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x100f24: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100f28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x100f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f2c: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100f30: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100f34: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x100f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x100f38: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x100f38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100f3c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x100F3Cu;
    {
        const bool branch_taken_0x100f3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F3Cu;
        // 0x100f40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f3c) {
            ctx->pc = 0x100FB8u;
            goto label_100fb8;
        }
    }
    ctx->pc = 0x100F44u;
    // 0x100f44: 0x0  nop
    ctx->pc = 0x100f44u;
    // NOP
label_100f48:
    // 0x100f48: 0x92470001  lbu         $a3, 0x1($s2)
    ctx->pc = 0x100f48u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x100f4c: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x100f4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x100f50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x100f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f54: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x100f54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x100f58: 0x92450000  lbu         $a1, 0x0($s2)
    ctx->pc = 0x100f58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x100f5c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x100f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100f60: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x100f60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x100f64: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x100f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100f68: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x100f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x100f6c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x100f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x100f70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100f74: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x100f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x100f78: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x100f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
    // 0x100f7c: 0xc040178  jal         func_1005E0
    ctx->pc = 0x100F7Cu;
    SET_GPR_U32(ctx, 31, 0x100F84u);
    ctx->pc = 0x100F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100F7Cu;
    // 0x100f80: 0x27a60398  addiu       $a2, $sp, 0x398 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005E0u, 0x100F7Cu, 0x100F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F84u;
label_100f84:
    // 0x100f84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x100f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100f88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x100f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100F8Cu;
    {
        const bool branch_taken_0x100f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100f8c) {
            ctx->pc = 0x100FA0u;
            goto label_100fa0;
        }
    }
    ctx->pc = 0x100F94u;
    // 0x100f94: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x100F94u;
    {
        const bool branch_taken_0x100f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F94u;
        // 0x100f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f94) {
            ctx->pc = 0x100FC0u;
            goto label_100fc0;
        }
    }
    ctx->pc = 0x100F9Cu;
    // 0x100f9c: 0x0  nop
    ctx->pc = 0x100f9cu;
    // NOP
label_100fa0:
    // 0x100fa0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x100fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x100fa4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100fa8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x100fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100fac: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x100FACu;
    {
        const bool branch_taken_0x100fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100FACu;
        // 0x100fb0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fac) {
            ctx->pc = 0x100F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100f48;
        }
    }
    ctx->pc = 0x100FB4u;
    // 0x100fb4: 0x0  nop
    ctx->pc = 0x100fb4u;
    // NOP
label_100fb8:
    // 0x100fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fbc: 0x0  nop
    ctx->pc = 0x100fbcu;
    // NOP
label_100fc0:
    // 0x100fc0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x100FC0u;
    {
        const bool branch_taken_0x100fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100fc0) {
            ctx->pc = 0x101038u;
            goto label_101038;
        }
    }
    ctx->pc = 0x100FC8u;
    // 0x100fc8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x100fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100fcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x100fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fd4: 0xc04051c  jal         func_101470
    ctx->pc = 0x100FD4u;
    SET_GPR_U32(ctx, 31, 0x100FDCu);
    ctx->pc = 0x100FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100FD4u;
    // 0x100fd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101470u, 0x100FD4u, 0x100FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FDCu;
label_100fdc:
    // 0x100fdc: 0x8e860018  lw          $a2, 0x18($s4)
    ctx->pc = 0x100fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x100fe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fe4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x100fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x100fe8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x100fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100fec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x100fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x100ff0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x100ff4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x100ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100ff8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x100ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x100ffc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x100ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x101000: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x101000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x101004: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x101004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x101008: 0xac710014  sw          $s1, 0x14($v1)
    ctx->pc = 0x101008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
    // 0x10100c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x10100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x101010: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x101010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x101014: 0xc040878  jal         func_1021E0
    ctx->pc = 0x101014u;
    SET_GPR_U32(ctx, 31, 0x10101Cu);
    ctx->pc = 0x101018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101014u;
    // 0x101018: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1021E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1021E0u, 0x101014u, 0x10101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10101Cu;
label_10101c:
    // 0x10101c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10101Cu;
    {
        const bool branch_taken_0x10101c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10101c) {
            ctx->pc = 0x101038u;
            goto label_101038;
        }
    }
    ctx->pc = 0x101024u;
    // 0x101024: 0x0  nop
    ctx->pc = 0x101024u;
    // NOP
label_101028:
    // 0x101028: 0xc040224  jal         func_100890
    ctx->pc = 0x101028u;
    SET_GPR_U32(ctx, 31, 0x101030u);
    ctx->pc = 0x100890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100890u, 0x101028u, 0x101030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101030u;
label_101030:
    // 0x101030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x101030u;
    {
        const bool branch_taken_0x101030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101030) {
            ctx->pc = 0x101048u;
            goto label_101048;
        }
    }
    ctx->pc = 0x101038u;
label_101038:
    // 0x101038: 0xc040730  jal         func_101CC0
    ctx->pc = 0x101038u;
    SET_GPR_U32(ctx, 31, 0x101040u);
    ctx->pc = 0x10103Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101038u;
    // 0x10103c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CC0u, 0x101038u, 0x101040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101040u;
label_101040:
    // 0x101040: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x101040u;
    {
        const bool branch_taken_0x101040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101040u;
        // 0x101044: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101040) {
            ctx->pc = 0x100E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100e48;
        }
    }
    ctx->pc = 0x101048u;
label_101048:
    // 0x101048: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x101048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10104c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10104cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x101050: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x101050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101054: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x101054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101058: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x101058u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10105c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10105cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10106c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10106cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101074: 0x3e00008  jr          $ra
    ctx->pc = 0x101074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101074u;
        // 0x101078: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10107Cu;
}
