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

// Function: sub_0037E140
// Address: 0x37e140 - 0x37e3bc
void sub_0037E140_0x37e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E140_0x37e140");
#endif

    switch (ctx->pc) {
        case 0x37e190u: goto label_37e190;
        case 0x37e1b4u: goto label_37e1b4;
        case 0x37e1ecu: goto label_37e1ec;
        case 0x37e200u: goto label_37e200;
        case 0x37e224u: goto label_37e224;
        case 0x37e25cu: goto label_37e25c;
        case 0x37e2a8u: goto label_37e2a8;
        case 0x37e2f4u: goto label_37e2f4;
        case 0x37e330u: goto label_37e330;
        case 0x37e39cu: goto label_37e39c;
        default: break;
    }

    ctx->pc = 0x37e140u;

    // 0x37e140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37e144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37e148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37e14c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x37e14cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37e150: 0x8c852b80  lw          $a1, 0x2B80($a0)
    ctx->pc = 0x37e150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x37e154: 0x90832b96  lbu         $v1, 0x2B96($a0)
    ctx->pc = 0x37e154u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11158)));
    // 0x37e158: 0xc4b40024  lwc1        $f20, 0x24($a1)
    ctx->pc = 0x37e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37e15c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x37e15cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x37e160: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
    ctx->pc = 0x37E160u;
    {
        const bool branch_taken_0x37e160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E160u;
        // 0x37e164: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e160) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E168u;
    // 0x37e168: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37e168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x37e16c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37e170: 0x24a51dc0  addiu       $a1, $a1, 0x1DC0
    ctx->pc = 0x37e170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7616));
    // 0x37e174: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37e178: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37e17c: 0x600008  jr          $v1
    ctx->pc = 0x37E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37E188u: goto label_37e188;
            case 0x37E1F8u: goto label_37e1f8;
            case 0x37E268u: goto label_37e268;
            case 0x37E2B8u: goto label_37e2b8;
            case 0x37E300u: goto label_37e300;
            case 0x37E340u: goto label_37e340;
            case 0x37E360u: goto label_37e360;
            case 0x37E3A8u: goto label_37e3a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E17Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37E184u;
    // 0x37e184: 0x0  nop
    ctx->pc = 0x37e184u;
    // NOP
label_37e188:
    // 0x37e188: 0xc0df844  jal         func_37E110
    ctx->pc = 0x37E188u;
    SET_GPR_U32(ctx, 31, 0x37E190u);
    ctx->pc = 0x37E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E110u, 0x37E188u, 0x37E190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E190u;
label_37e190:
    // 0x37e190: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x37e190u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x37e194: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e198: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37e198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e19c: 0x45000082  bc1f        . + 4 + (0x82 << 2)
    ctx->pc = 0x37E19Cu;
    {
        const bool branch_taken_0x37e19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e19c) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E1A4u;
    // 0x37e1a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37e1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1ac: 0xc0df8f0  jal         func_37E3C0
    ctx->pc = 0x37E1ACu;
    SET_GPR_U32(ctx, 31, 0x37E1B4u);
    ctx->pc = 0x37E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1ACu;
    // 0x37e1b0: 0xa2022b96  sb          $v0, 0x2B96($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E3C0u, 0x37E1ACu, 0x37E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1B4u;
label_37e1b4:
    // 0x37e1b4: 0xae022b98  sw          $v0, 0x2B98($s0)
    ctx->pc = 0x37e1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 2));
    // 0x37e1b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37e1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37e1bc: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37e1bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37e1c0: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x37e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x37e1c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37e1c8: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37e1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37e1cc: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37e1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37e1d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37e1d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37e1d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37e1d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e1dc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37e1e0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37e1e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37E1E4u;
    SET_GPR_U32(ctx, 31, 0x37E1ECu);
    ctx->pc = 0x37E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1E4u;
    // 0x37e1e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37E1E4u, 0x37E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1ECu;
label_37e1ec:
    // 0x37e1ec: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x37E1ECu;
    {
        const bool branch_taken_0x37e1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e1ec) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E1F4u;
    // 0x37e1f4: 0x0  nop
    ctx->pc = 0x37e1f4u;
    // NOP
label_37e1f8:
    // 0x37e1f8: 0xc0df844  jal         func_37E110
    ctx->pc = 0x37E1F8u;
    SET_GPR_U32(ctx, 31, 0x37E200u);
    ctx->pc = 0x37E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E110u, 0x37E1F8u, 0x37E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E200u;
label_37e200:
    // 0x37e200: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x37e200u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x37e204: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e208: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e20c: 0x45010066  bc1t        . + 4 + (0x66 << 2)
    ctx->pc = 0x37E20Cu;
    {
        const bool branch_taken_0x37e20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e20c) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E214u;
    // 0x37e214: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37e218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e21c: 0xc0df8f0  jal         func_37E3C0
    ctx->pc = 0x37E21Cu;
    SET_GPR_U32(ctx, 31, 0x37E224u);
    ctx->pc = 0x37E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E21Cu;
    // 0x37e220: 0xa2022b96  sb          $v0, 0x2B96($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E3C0u, 0x37E21Cu, 0x37E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E224u;
label_37e224:
    // 0x37e224: 0xae022b98  sw          $v0, 0x2B98($s0)
    ctx->pc = 0x37e224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 2));
    // 0x37e228: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x37e228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x37e22c: 0x920308e8  lbu         $v1, 0x8E8($s0)
    ctx->pc = 0x37e22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x37e230: 0x3c021f00  lui         $v0, 0x1F00
    ctx->pc = 0x37e230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7936 << 16));
    // 0x37e234: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x37e234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x37e238: 0x34454902  ori         $a1, $v0, 0x4902
    ctx->pc = 0x37e238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18690);
    // 0x37e23c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x37e23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37e240: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37e240u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e244: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37e244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e248: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37e248u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e24c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x37e24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x37e250: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x37e250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37e254: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x37E254u;
    SET_GPR_U32(ctx, 31, 0x37E25Cu);
    ctx->pc = 0x37E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E254u;
    // 0x37e258: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x37E254u, 0x37E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E25Cu;
label_37e25c:
    // 0x37e25c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x37E25Cu;
    {
        const bool branch_taken_0x37e25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e25c) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E264u;
    // 0x37e264: 0x0  nop
    ctx->pc = 0x37e264u;
    // NOP
label_37e268:
    // 0x37e268: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x37e268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37e26c: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x37e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x37e270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e274: 0x0  nop
    ctx->pc = 0x37e274u;
    // NOP
    // 0x37e278: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x37e278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x37e27c: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x37e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x37e280: 0xc4610c34  lwc1        $f1, 0xC34($v1)
    ctx->pc = 0x37e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e284: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37e284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e288: 0x45000047  bc1f        . + 4 + (0x47 << 2)
    ctx->pc = 0x37E288u;
    {
        const bool branch_taken_0x37e288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E288u;
        // 0x37e28c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e288) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E290u;
    // 0x37e290: 0xa2032b96  sb          $v1, 0x2B96($s0)
    ctx->pc = 0x37e290u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e294: 0x8e042b98  lw          $a0, 0x2B98($s0)
    ctx->pc = 0x37e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11160)));
    // 0x37e298: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37E298u;
    {
        const bool branch_taken_0x37e298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e298) {
            ctx->pc = 0x37E2B0u;
            goto label_37e2b0;
        }
    }
    ctx->pc = 0x37E2A0u;
    // 0x37e2a0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x37E2A0u;
    SET_GPR_U32(ctx, 31, 0x37E2A8u);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x37E2A0u, 0x37E2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E2A8u;
label_37e2a8:
    // 0x37e2a8: 0xae002b98  sw          $zero, 0x2B98($s0)
    ctx->pc = 0x37e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 0));
    // 0x37e2ac: 0x0  nop
    ctx->pc = 0x37e2acu;
    // NOP
label_37e2b0:
    // 0x37e2b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x37E2B0u;
    {
        const bool branch_taken_0x37e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2B0u;
        // 0x37e2b4: 0xa2002b96  sb          $zero, 0x2B96($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e2b0) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E2B8u;
label_37e2b8:
    // 0x37e2b8: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x37e2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37e2bc: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x37e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x37e2c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e2c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e2c4: 0x0  nop
    ctx->pc = 0x37e2c4u;
    // NOP
    // 0x37e2c8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x37e2c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x37e2cc: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x37e2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x37e2d0: 0xc4610c34  lwc1        $f1, 0xC34($v1)
    ctx->pc = 0x37e2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e2d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37e2d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e2d8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x37E2D8u;
    {
        const bool branch_taken_0x37e2d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e2d8) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E2E0u;
    // 0x37e2e0: 0x8e042b98  lw          $a0, 0x2B98($s0)
    ctx->pc = 0x37e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11160)));
    // 0x37e2e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E2E4u;
    {
        const bool branch_taken_0x37e2e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e2e4) {
            ctx->pc = 0x37E2F8u;
            goto label_37e2f8;
        }
    }
    ctx->pc = 0x37E2ECu;
    // 0x37e2ec: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x37E2ECu;
    SET_GPR_U32(ctx, 31, 0x37E2F4u);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x37E2ECu, 0x37E2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E2F4u;
label_37e2f4:
    // 0x37e2f4: 0xae002b98  sw          $zero, 0x2B98($s0)
    ctx->pc = 0x37e2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 0));
label_37e2f8:
    // 0x37e2f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x37E2F8u;
    {
        const bool branch_taken_0x37e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2F8u;
        // 0x37e2fc: 0xa2002b96  sb          $zero, 0x2B96($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e2f8) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E300u;
label_37e300:
    // 0x37e300: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x37e300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37e304: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x37e304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x37e308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e30c: 0x0  nop
    ctx->pc = 0x37e30cu;
    // NOP
    // 0x37e310: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x37e310u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x37e314: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x37e314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x37e318: 0xc4610c34  lwc1        $f1, 0xC34($v1)
    ctx->pc = 0x37e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e31c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37e31cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e320: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x37E320u;
    {
        const bool branch_taken_0x37e320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e320) {
            ctx->pc = 0x37E340u;
            goto label_37e340;
        }
    }
    ctx->pc = 0x37E328u;
    // 0x37e328: 0xc0df8f0  jal         func_37E3C0
    ctx->pc = 0x37E328u;
    SET_GPR_U32(ctx, 31, 0x37E330u);
    ctx->pc = 0x37E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E3C0u, 0x37E328u, 0x37E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E330u;
label_37e330:
    // 0x37e330: 0xae022b98  sw          $v0, 0x2B98($s0)
    ctx->pc = 0x37e330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 2));
    // 0x37e334: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x37e334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37e338: 0xa2032b96  sb          $v1, 0x2B96($s0)
    ctx->pc = 0x37e338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e33c: 0x0  nop
    ctx->pc = 0x37e33cu;
    // NOP
label_37e340:
    // 0x37e340: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x37e340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37e344: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x37e344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x37e348: 0xc4600c34  lwc1        $f0, 0xC34($v1)
    ctx->pc = 0x37e348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e34c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x37e34cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e350: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x37E350u;
    {
        const bool branch_taken_0x37e350 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E350u;
        // 0x37e354: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e350) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E358u;
    // 0x37e358: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37E358u;
    {
        const bool branch_taken_0x37e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E358u;
        // 0x37e35c: 0xa2032b96  sb          $v1, 0x2B96($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e358) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E360u;
label_37e360:
    // 0x37e360: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x37e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x37e364: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x37e364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x37e368: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37e368u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37e36c: 0x0  nop
    ctx->pc = 0x37e36cu;
    // NOP
    // 0x37e370: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x37e370u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x37e374: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x37e374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x37e378: 0xc4610c34  lwc1        $f1, 0xC34($v1)
    ctx->pc = 0x37e378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e37c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x37e37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e380: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x37E380u;
    {
        const bool branch_taken_0x37e380 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e380) {
            ctx->pc = 0x37E3A8u;
            goto label_37e3a8;
        }
    }
    ctx->pc = 0x37E388u;
    // 0x37e388: 0x8e042b98  lw          $a0, 0x2B98($s0)
    ctx->pc = 0x37e388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11160)));
    // 0x37e38c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37E38Cu;
    {
        const bool branch_taken_0x37e38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e38c) {
            ctx->pc = 0x37E3A0u;
            goto label_37e3a0;
        }
    }
    ctx->pc = 0x37E394u;
    // 0x37e394: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x37E394u;
    SET_GPR_U32(ctx, 31, 0x37E39Cu);
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x37E394u, 0x37E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E39Cu;
label_37e39c:
    // 0x37e39c: 0xae002b98  sw          $zero, 0x2B98($s0)
    ctx->pc = 0x37e39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11160), GPR_U32(ctx, 0));
label_37e3a0:
    // 0x37e3a0: 0xa2002b96  sb          $zero, 0x2B96($s0)
    ctx->pc = 0x37e3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11158), (uint8_t)GPR_U32(ctx, 0));
    // 0x37e3a4: 0x0  nop
    ctx->pc = 0x37e3a4u;
    // NOP
label_37e3a8:
    // 0x37e3a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37e3a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37e3ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37e3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37e3b0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x37e3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37e3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37E3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E3B4u;
        // 0x37e3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E3BCu;
}
