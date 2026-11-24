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

// Function: sub_003B6CE0
// Address: 0x3b6ce0 - 0x3b6e9c
void sub_003B6CE0_0x3b6ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6CE0_0x3b6ce0");
#endif

    switch (ctx->pc) {
        case 0x3b6d40u: goto label_3b6d40;
        case 0x3b6d68u: goto label_3b6d68;
        case 0x3b6da4u: goto label_3b6da4;
        case 0x3b6e04u: goto label_3b6e04;
        case 0x3b6e18u: goto label_3b6e18;
        case 0x3b6e28u: goto label_3b6e28;
        case 0x3b6e4cu: goto label_3b6e4c;
        default: break;
    }

    ctx->pc = 0x3b6ce0u;

    // 0x3b6ce0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b6ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3b6ce4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b6ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3b6ce8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3b6ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3b6cec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3b6cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3b6cf0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3b6cf0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6cf4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3b6cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3b6cf8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x3b6cf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6cfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b6cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3b6d00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b6d00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b6d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b6d08: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3b6d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b6d10: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x3b6d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x3b6d14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b6d18: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3b6d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3b6d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b6d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b6d24: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x3b6d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d28: 0x24040059  addiu       $a0, $zero, 0x59
    ctx->pc = 0x3b6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3b6d2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3b6d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d30: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3b6d30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3b6d34: 0x25086c70  addiu       $t0, $t0, 0x6C70
    ctx->pc = 0x3b6d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27760));
    // 0x3b6d38: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3B6D38u;
    SET_GPR_U32(ctx, 31, 0x3B6D40u);
    ctx->pc = 0x3B6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D38u;
    // 0x3b6d3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3B6D38u, 0x3B6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D40u;
label_3b6d40:
    // 0x3b6d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d44: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B6D44u;
    {
        const bool branch_taken_0x3b6d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6D44u;
        // 0x3b6d48: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6d44) {
            ctx->pc = 0x3B6E68u;
            goto label_3b6e68;
        }
    }
    ctx->pc = 0x3B6D4Cu;
    // 0x3b6d4c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3b6d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d54: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3b6d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3b6d58: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x3b6d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3b6d5c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x3b6d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d60: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x3B6D60u;
    SET_GPR_U32(ctx, 31, 0x3B6D68u);
    ctx->pc = 0x3B6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D60u;
    // 0x3b6d64: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x3B6D60u, 0x3B6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6D68u;
label_3b6d68:
    // 0x3b6d68: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x3b6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3b6d6c: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3b6d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b6d70: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x3b6d70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b6d74: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3b6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3b6d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b6d7c: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x3b6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b6d80: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3b6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3b6d84: 0x24850078  addiu       $a1, $a0, 0x78
    ctx->pc = 0x3b6d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x3b6d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b6d8c: 0xa6050528  sh          $a1, 0x528($s0)
    ctx->pc = 0x3b6d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 5));
    // 0x3b6d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6d94: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x3b6d94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x3b6d98: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x3b6d98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b6d9c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x3B6D9Cu;
    SET_GPR_U32(ctx, 31, 0x3B6DA4u);
    ctx->pc = 0x3B6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6D9Cu;
    // 0x3b6da0: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x3B6D9Cu, 0x3B6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6DA4u;
label_3b6da4:
    // 0x3b6da4: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x3b6da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x3b6da8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b6dac: 0xae030554  sw          $v1, 0x554($s0)
    ctx->pc = 0x3b6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 3));
    // 0x3b6db0: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x3b6db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x3b6db4: 0xa2160558  sb          $s6, 0x558($s0)
    ctx->pc = 0x3b6db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 22));
    // 0x3b6db8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b6db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3b6dbc: 0xae03055c  sw          $v1, 0x55C($s0)
    ctx->pc = 0x3b6dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 3));
    // 0x3b6dc0: 0xa2170560  sb          $s7, 0x560($s0)
    ctx->pc = 0x3b6dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 23));
    // 0x3b6dc4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3b6dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b6dc8: 0xa2110561  sb          $s1, 0x561($s0)
    ctx->pc = 0x3b6dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 17));
    // 0x3b6dcc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3b6dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3b6dd0: 0xae040564  sw          $a0, 0x564($s0)
    ctx->pc = 0x3b6dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 4));
    // 0x3b6dd4: 0x24422b98  addiu       $v0, $v0, 0x2B98
    ctx->pc = 0x3b6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11160));
    // 0x3b6dd8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x3b6dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b6ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b6de0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b6de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3b6de4: 0xe6000568  swc1        $f0, 0x568($s0)
    ctx->pc = 0x3b6de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1384), bits); }
    // 0x3b6de8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3b6de8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b6dec: 0x866300c2  lh          $v1, 0xC2($s3)
    ctx->pc = 0x3b6decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
    // 0x3b6df0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3b6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3b6df4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b6df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b6df8: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3b6df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b6dfc: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3B6DFCu;
    SET_GPR_U32(ctx, 31, 0x3B6E04u);
    ctx->pc = 0x3B6E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6DFCu;
    // 0x3b6e00: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3B6DFCu, 0x3B6E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E04u;
label_3b6e04:
    // 0x3b6e04: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3b6e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3b6e08: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b6e0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b6e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b6e10: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3B6E10u;
    SET_GPR_U32(ctx, 31, 0x3B6E18u);
    ctx->pc = 0x3B6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E10u;
    // 0x3b6e14: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3B6E10u, 0x3B6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E18u;
label_3b6e18:
    // 0x3b6e18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b6e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b6e1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6e20: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3B6E20u;
    SET_GPR_U32(ctx, 31, 0x3B6E28u);
    ctx->pc = 0x3B6E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E20u;
    // 0x3b6e24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3B6E20u, 0x3B6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E28u;
label_3b6e28:
    // 0x3b6e28: 0xc66d0024  lwc1        $f13, 0x24($s3)
    ctx->pc = 0x3b6e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b6e2c: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x3b6e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x3b6e30: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x3b6e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b6e34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6e38: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3b6e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3b6e3c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3b6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b6e40: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3b6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b6e44: 0xc09754c  jal         func_25D530
    ctx->pc = 0x3B6E44u;
    SET_GPR_U32(ctx, 31, 0x3B6E4Cu);
    ctx->pc = 0x3B6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6E44u;
    // 0x3b6e48: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D530u, 0x3B6E44u, 0x3B6E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6E4Cu;
label_3b6e4c:
    // 0x3b6e4c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b6e50: 0x3c02c4f5  lui         $v0, 0xC4F5
    ctx->pc = 0x3b6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50421 << 16));
    // 0x3b6e54: 0x7e030090  sq          $v1, 0x90($s0)
    ctx->pc = 0x3b6e54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 3));
    // 0x3b6e58: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x3b6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x3b6e5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B6E5Cu;
    {
        const bool branch_taken_0x3b6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E5Cu;
        // 0x3b6e60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6e5c) {
            ctx->pc = 0x3B6E70u;
            goto label_3b6e70;
        }
    }
    ctx->pc = 0x3B6E64u;
    // 0x3b6e64: 0x0  nop
    ctx->pc = 0x3b6e64u;
    // NOP
label_3b6e68:
    // 0x3b6e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b6e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6e6c: 0x0  nop
    ctx->pc = 0x3b6e6cu;
    // NOP
label_3b6e70:
    // 0x3b6e70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b6e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b6e74: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3b6e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b6e78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3b6e78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b6e7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3b6e7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b6e80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b6e80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b6e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b6e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b6e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b6e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b6e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b6e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b6e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6E94u;
        // 0x3b6e98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6E9Cu;
}
