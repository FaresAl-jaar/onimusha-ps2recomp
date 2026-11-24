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

// Function: sub_00397590
// Address: 0x397590 - 0x3976b4
void sub_00397590_0x397590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397590_0x397590");
#endif

    switch (ctx->pc) {
        case 0x397614u: goto label_397614;
        case 0x397640u: goto label_397640;
        case 0x39764cu: goto label_39764c;
        case 0x397678u: goto label_397678;
        case 0x39769cu: goto label_39769c;
        default: break;
    }

    ctx->pc = 0x397590u;

    // 0x397590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397594: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x397594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x397598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x397598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39759c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x39759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3975a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3975a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3975a4: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x3975a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x3975a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3975a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3975ac: 0xa082001f  sb          $v0, 0x1F($a0)
    ctx->pc = 0x3975acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 31), (uint8_t)GPR_U32(ctx, 2));
    // 0x3975b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3975b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3975b4: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x3975b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x3975b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3975bc: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x3975bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x3975c0: 0xa0800022  sb          $zero, 0x22($a0)
    ctx->pc = 0x3975c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x3975c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3975c4u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3975c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3975c8u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3975cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3975ccu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3975d0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x3975d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3975d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3975d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3975d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3975d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3975dc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3975dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3975e0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3975e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3975e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3975e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3975e8: 0xe4820090  swc1        $f2, 0x90($a0)
    ctx->pc = 0x3975e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3975ec: 0xe4810094  swc1        $f1, 0x94($a0)
    ctx->pc = 0x3975ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3975f0: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x3975f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3975f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3975f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3975f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3975f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3975fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3975fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x397600: 0xe482009c  swc1        $f2, 0x9C($a0)
    ctx->pc = 0x397600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x397604: 0xe48100a0  swc1        $f1, 0xA0($a0)
    ctx->pc = 0x397604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x397608: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x397608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x39760c: 0xc0d3518  jal         func_34D460
    ctx->pc = 0x39760Cu;
    SET_GPR_U32(ctx, 31, 0x397614u);
    ctx->pc = 0x397610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39760Cu;
    // 0x397610: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34D460u, 0x39760Cu, 0x397614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397614u;
label_397614:
    // 0x397614: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x397614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x397618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39761c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397620: 0xa60201ac  sh          $v0, 0x1AC($s0)
    ctx->pc = 0x397620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 428), (uint16_t)GPR_U32(ctx, 2));
    // 0x397624: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x397624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x397628: 0xa60201ae  sh          $v0, 0x1AE($s0)
    ctx->pc = 0x397628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 430), (uint16_t)GPR_U32(ctx, 2));
    // 0x39762c: 0xa60001b0  sh          $zero, 0x1B0($s0)
    ctx->pc = 0x39762cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 0));
    // 0x397630: 0xa60001b2  sh          $zero, 0x1B2($s0)
    ctx->pc = 0x397630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 434), (uint16_t)GPR_U32(ctx, 0));
    // 0x397634: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x397634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x397638: 0xc0e81e4  jal         func_3A0790
    ctx->pc = 0x397638u;
    SET_GPR_U32(ctx, 31, 0x397640u);
    ctx->pc = 0x39763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397638u;
    // 0x39763c: 0xae0001b8  sw          $zero, 0x1B8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0790u, 0x397638u, 0x397640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397640u;
label_397640:
    // 0x397640: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x397640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x397644: 0xc0e5dd4  jal         func_397750
    ctx->pc = 0x397644u;
    SET_GPR_U32(ctx, 31, 0x39764Cu);
    ctx->pc = 0x397648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397644u;
    // 0x397648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397750u, 0x397644u, 0x39764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39764Cu;
label_39764c:
    // 0x39764c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x39764cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x397650: 0x9023e021  lbu         $v1, -0x1FDF($at)
    ctx->pc = 0x397650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8DE021u));
    // 0x397654: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x397654u;
    {
        const bool branch_taken_0x397654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397654) {
            ctx->pc = 0x397680u;
            goto label_397680;
        }
    }
    ctx->pc = 0x39765Cu;
    // 0x39765c: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x39765cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x397660: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x397660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
    // 0x397664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397668: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x397668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39766c: 0x34450003  ori         $a1, $v0, 0x3
    ctx->pc = 0x39766cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x397670: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x397670u;
    SET_GPR_U32(ctx, 31, 0x397678u);
    ctx->pc = 0x397674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397670u;
    // 0x397674: 0xa020e021  sb          $zero, -0x1FDF($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959137), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x397670u, 0x397678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397678u;
label_397678:
    // 0x397678: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x397678u;
    {
        const bool branch_taken_0x397678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x397678) {
            ctx->pc = 0x3976A0u;
            goto label_3976a0;
        }
    }
    ctx->pc = 0x397680u;
label_397680:
    // 0x397680: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x397680u;
    {
        const bool branch_taken_0x397680 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x397680) {
            ctx->pc = 0x3976A0u;
            goto label_3976a0;
        }
    }
    ctx->pc = 0x397688u;
    // 0x397688: 0x3c020103  lui         $v0, 0x103
    ctx->pc = 0x397688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)259 << 16));
    // 0x39768c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397690: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x397690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x397694: 0xc0dcc28  jal         func_3730A0
    ctx->pc = 0x397694u;
    SET_GPR_U32(ctx, 31, 0x39769Cu);
    ctx->pc = 0x397698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397694u;
    // 0x397698: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A0u, 0x397694u, 0x39769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39769Cu;
label_39769c:
    // 0x39769c: 0x0  nop
    ctx->pc = 0x39769cu;
    // NOP
label_3976a0:
    // 0x3976a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3976a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3976a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3976a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3976a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3976a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3976ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3976ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3976B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3976ACu;
        // 0x3976b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3976ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3976B4u;
}
