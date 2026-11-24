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

// Function: sub_003200A0
// Address: 0x3200a0 - 0x320158
void sub_003200A0_0x3200a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003200A0_0x3200a0");
#endif

    switch (ctx->pc) {
        case 0x32014cu: goto label_32014c;
        default: break;
    }

    ctx->pc = 0x3200a0u;

    // 0x3200a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3200a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3200a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3200a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3200a8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x3200a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3200ac: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3200acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3200b0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3200b4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3200b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3200b8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3200b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3200bc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3200bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200c0: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x3200c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3200c4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3200c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3200c8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3200c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3200cc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3200ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3200d0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3200d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3200d4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x3200d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3200d8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3200d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3200dc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3200dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3200e0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3200e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200e4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x3200e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3200e8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3200e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3200ec: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x3200ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3200f0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x3200f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3200f4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x3200f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x3200f8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3200f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3200fc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3200fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x320100: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x320100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320104: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x320104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x320108: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x320108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x32010c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x32010cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x320110: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x320110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x320114: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x320114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x320118: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x320118u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x32011c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x32011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x320120: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x320120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x320124: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x320124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x320128: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x320128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x32012c: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x32012cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x320130: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x320130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x320134: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x320134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x320138: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x320138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32013c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x32013cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x320140: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x320140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x320144: 0xc0c8250  jal         func_320940
    ctx->pc = 0x320144u;
    SET_GPR_U32(ctx, 31, 0x32014Cu);
    ctx->pc = 0x320148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320144u;
    // 0x320148: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x320940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320940u, 0x320144u, 0x32014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32014Cu;
label_32014c:
    // 0x32014c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32014cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320150: 0x3e00008  jr          $ra
    ctx->pc = 0x320150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320150u;
        // 0x320154: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320158u;
}
