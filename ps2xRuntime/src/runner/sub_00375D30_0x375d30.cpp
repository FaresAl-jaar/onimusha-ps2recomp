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

// Function: sub_00375D30
// Address: 0x375d30 - 0x375f80
void sub_00375D30_0x375d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375D30_0x375d30");
#endif

    switch (ctx->pc) {
        case 0x375d80u: goto label_375d80;
        case 0x375d8cu: goto label_375d8c;
        case 0x375db8u: goto label_375db8;
        case 0x375df0u: goto label_375df0;
        case 0x375e18u: goto label_375e18;
        case 0x375e24u: goto label_375e24;
        case 0x375e84u: goto label_375e84;
        case 0x375e9cu: goto label_375e9c;
        case 0x375f10u: goto label_375f10;
        case 0x375f40u: goto label_375f40;
        case 0x375f54u: goto label_375f54;
        case 0x375f64u: goto label_375f64;
        default: break;
    }

    ctx->pc = 0x375d30u;

    // 0x375d30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x375d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x375d34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x375d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x375d38: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x375d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x375d3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x375d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x375d40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x375d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x375d44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x375d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x375d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x375d4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x375d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x375d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x375d54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x375d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d58: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x375d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375d5c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x375d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375d60: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x375d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375d64: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x375d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x375d68: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x375d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x375d6c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x375d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x375d70: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x375d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x375d74: 0xc4940024  lwc1        $f20, 0x24($a0)
    ctx->pc = 0x375d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375d78: 0xc04e718  jal         func_139C60
    ctx->pc = 0x375D78u;
    SET_GPR_U32(ctx, 31, 0x375D80u);
    ctx->pc = 0x375D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D78u;
    // 0x375d7c: 0x26440930  addiu       $a0, $s2, 0x930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C60u, 0x375D78u, 0x375D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D80u;
label_375d80:
    // 0x375d80: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x375d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x375d84: 0xc04e71c  jal         func_139C70
    ctx->pc = 0x375D84u;
    SET_GPR_U32(ctx, 31, 0x375D8Cu);
    ctx->pc = 0x375D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D84u;
    // 0x375d88: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C70u, 0x375D84u, 0x375D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D8Cu;
label_375d8c:
    // 0x375d8c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x375d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x375d90: 0x3c02c59c  lui         $v0, 0xC59C
    ctx->pc = 0x375d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50588 << 16));
    // 0x375d94: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x375d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x375d98: 0xae4318e0  sw          $v1, 0x18E0($s2)
    ctx->pc = 0x375d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6368), GPR_U32(ctx, 3));
    // 0x375d9c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x375d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x375da0: 0x26440930  addiu       $a0, $s2, 0x930
    ctx->pc = 0x375da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2352));
    // 0x375da4: 0xae4218e4  sw          $v0, 0x18E4($s2)
    ctx->pc = 0x375da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6372), GPR_U32(ctx, 2));
    // 0x375da8: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x375da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
    // 0x375dac: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x375dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x375db0: 0xc04e7fc  jal         func_139FF0
    ctx->pc = 0x375DB0u;
    SET_GPR_U32(ctx, 31, 0x375DB8u);
    ctx->pc = 0x375DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DB0u;
    // 0x375db4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x375DB0u, 0x375DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DB8u;
label_375db8:
    // 0x375db8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x375db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375dbc: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x375DBCu;
    {
        const bool branch_taken_0x375dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x375dbc) {
            ctx->pc = 0x375DC8u;
            goto label_375dc8;
        }
    }
    ctx->pc = 0x375DC4u;
    // 0x375dc4: 0xc7b4008c  lwc1        $f20, 0x8C($sp)
    ctx->pc = 0x375dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_375dc8:
    // 0x375dc8: 0x8e430144  lw          $v1, 0x144($s2)
    ctx->pc = 0x375dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375dcc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x375dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x375dd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x375dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375dd4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x375dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x375dd8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x375dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x375ddc: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x375ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x375de0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x375de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x375de4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x375de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x375de8: 0xc0d0494  jal         func_341250
    ctx->pc = 0x375DE8u;
    SET_GPR_U32(ctx, 31, 0x375DF0u);
    ctx->pc = 0x375DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DE8u;
    // 0x375dec: 0xa6512ad4  sh          $s1, 0x2AD4($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 10964), (uint16_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341250u, 0x375DE8u, 0x375DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DF0u;
label_375df0:
    // 0x375df0: 0xa2400118  sb          $zero, 0x118($s2)
    ctx->pc = 0x375df0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 280), (uint8_t)GPR_U32(ctx, 0));
    // 0x375df4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x375df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x375df8: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x375df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x375dfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x375dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x375e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375e04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x375e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x375e08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x375e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x375e0c: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x375e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375e10: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x375E10u;
    SET_GPR_U32(ctx, 31, 0x375E18u);
    ctx->pc = 0x375E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E10u;
    // 0x375e14: 0x2444001c  addiu       $a0, $v0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x375E10u, 0x375E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E18u;
label_375e18:
    // 0x375e18: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x375e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x375e1c: 0xc0c8a34  jal         func_3228D0
    ctx->pc = 0x375E1Cu;
    SET_GPR_U32(ctx, 31, 0x375E24u);
    ctx->pc = 0x375E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E1Cu;
    // 0x375e20: 0x2484ea90  addiu       $a0, $a0, -0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228D0u, 0x375E1Cu, 0x375E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E24u;
label_375e24:
    // 0x375e24: 0x8e460144  lw          $a2, 0x144($s2)
    ctx->pc = 0x375e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375e28: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x375e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x375e2c: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x375e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x375e30: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x375e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x375e34: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x375e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x375e38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x375e38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x375e3c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x375e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x375e40: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x375e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x375e44: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x375e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375e48: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x375e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375e4c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x375e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375e50: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x375e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x375e54: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x375e54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x375e58: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x375e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x375e5c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x375e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x375e60: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x375e60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x375e64: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x375e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375e68: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x375e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x375e6c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x375e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x375e70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x375e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x375e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x375e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x375e78: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x375e7c: 0xc0c83cc  jal         func_320F30
    ctx->pc = 0x375E7Cu;
    SET_GPR_U32(ctx, 31, 0x375E84u);
    ctx->pc = 0x375E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E7Cu;
    // 0x375e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F30u, 0x375E7Cu, 0x375E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E84u;
label_375e84:
    // 0x375e84: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x375e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x375e88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x375e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x375e8c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x375e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x375e90: 0x24a55cf0  addiu       $a1, $a1, 0x5CF0
    ctx->pc = 0x375e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23792));
    // 0x375e94: 0xc0d0ac4  jal         func_342B10
    ctx->pc = 0x375E94u;
    SET_GPR_U32(ctx, 31, 0x375E9Cu);
    ctx->pc = 0x375E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E94u;
    // 0x375e98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B10u, 0x375E94u, 0x375E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375E9Cu;
label_375e9c:
    // 0x375e9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x375e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x375ea0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x375ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x375ea4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x375ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x375ea8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x375ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x375eac: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x375eacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x375eb0: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x375eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x375eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x375eb8: 0x2442ea90  addiu       $v0, $v0, -0x1570
    ctx->pc = 0x375eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961808));
    // 0x375ebc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x375ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x375ec0: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x375ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
    // 0x375ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x375ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x375ec8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x375ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375ecc: 0x412021  addu        $a0, $v0, $at
    ctx->pc = 0x375eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x375ed0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x375ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x375ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x375ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375ed8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x375ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x375edc: 0xae2900d0  sw          $t1, 0xD0($s1)
    ctx->pc = 0x375edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 9));
    // 0x375ee0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x375ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x375ee4: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x375ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x375ee8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x375ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x375eec: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x375eecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
    // 0x375ef0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x375ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x375ef4: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x375ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x375ef8: 0xa2280001  sb          $t0, 0x1($s1)
    ctx->pc = 0x375ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x375efc: 0xa2270004  sb          $a3, 0x4($s1)
    ctx->pc = 0x375efcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x375f00: 0xa2260006  sb          $a2, 0x6($s1)
    ctx->pc = 0x375f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x375f04: 0xae280060  sw          $t0, 0x60($s1)
    ctx->pc = 0x375f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 8));
    // 0x375f08: 0xc0cfd08  jal         func_33F420
    ctx->pc = 0x375F08u;
    SET_GPR_U32(ctx, 31, 0x375F10u);
    ctx->pc = 0x375F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F08u;
    // 0x375f0c: 0xae260070  sw          $a2, 0x70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F420u, 0x375F08u, 0x375F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F10u;
label_375f10:
    // 0x375f10: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x375f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x375f14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x375f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x375f18: 0xc6420024  lwc1        $f2, 0x24($s2)
    ctx->pc = 0x375f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x375f1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x375f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x375f20: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x375f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375f24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375f28: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x375f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375f2c: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x375f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x375f30: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x375f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x375f34: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x375f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x375f38: 0xc0a931c  jal         func_2A4C70
    ctx->pc = 0x375F38u;
    SET_GPR_U32(ctx, 31, 0x375F40u);
    ctx->pc = 0x375F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F38u;
    // 0x375f3c: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4C70u, 0x375F38u, 0x375F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F40u;
label_375f40:
    // 0x375f40: 0x8e430144  lw          $v1, 0x144($s2)
    ctx->pc = 0x375f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375f44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x375f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x375f48: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x375f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375f4c: 0xc0d0ae4  jal         func_342B90
    ctx->pc = 0x375F4Cu;
    SET_GPR_U32(ctx, 31, 0x375F54u);
    ctx->pc = 0x375F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F4Cu;
    // 0x375f50: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B90u, 0x375F4Cu, 0x375F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F54u;
label_375f54:
    // 0x375f54: 0x8e420144  lw          $v0, 0x144($s2)
    ctx->pc = 0x375f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 324)));
    // 0x375f58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x375f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375f5c: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x375F5Cu;
    SET_GPR_U32(ctx, 31, 0x375F64u);
    ctx->pc = 0x375F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375F5Cu;
    // 0x375f60: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x375F5Cu, 0x375F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375F64u;
label_375f64:
    // 0x375f64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x375f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x375f68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x375f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x375f6c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x375f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375f70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x375f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375f74: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x375f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375f78: 0x3e00008  jr          $ra
    ctx->pc = 0x375F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375F78u;
        // 0x375f7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375F80u;
}
