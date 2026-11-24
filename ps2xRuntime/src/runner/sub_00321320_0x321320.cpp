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

// Function: sub_00321320
// Address: 0x321320 - 0x32141c
void sub_00321320_0x321320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321320_0x321320");
#endif

    switch (ctx->pc) {
        case 0x3213a0u: goto label_3213a0;
        default: break;
    }

    ctx->pc = 0x321320u;

    // 0x321320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x321320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x321324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x321324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x321328: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x321328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32132c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x321330: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x321330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x321334: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x321334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x321338: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x321338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32133c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x32133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321340: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x321340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x321344: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x321344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32134c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x32134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x321350: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x321350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x321354: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x321354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x321358: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x321358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x32135c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x32135cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321360: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x321360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321364: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x321364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321368: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x321368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32136c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x32136cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x321370: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x321370u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321374: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x321374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321378: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x321378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x32137c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x32137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321380: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x321380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321384: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x321384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321388: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x321388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32138c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x32138cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x321390: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x321390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x321394: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x321394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x321398: 0xc0c84a8  jal         func_3212A0
    ctx->pc = 0x321398u;
    SET_GPR_U32(ctx, 31, 0x3213A0u);
    ctx->pc = 0x32139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321398u;
    // 0x32139c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3212A0u, 0x321398u, 0x3213A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3213A0u;
label_3213a0:
    // 0x3213a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3213a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3213a4: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3213a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x3213a8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3213a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x3213ac: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3213acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3213b0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x3213b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3213b4: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x3213b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x3213b8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3213b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3213bc: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x3213bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x3213c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3213c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3213c4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x3213c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x3213c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x3213c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3213cc: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3213ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3213d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3213d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3213d4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3213d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3213d8: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x3213d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3213dc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3213dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3213e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3213e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3213e4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x3213e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x3213e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3213e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3213ec: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x3213ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x3213f0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3213f4: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x3213f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x3213f8: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x3213f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3213fc: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x3213fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    // 0x321400: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x321404: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x321404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x321408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x321408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32140c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32140cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x321410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321414: 0x3e00008  jr          $ra
    ctx->pc = 0x321414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321414u;
        // 0x321418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32141Cu;
}
