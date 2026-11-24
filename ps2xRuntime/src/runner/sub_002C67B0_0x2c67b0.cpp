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

// Function: sub_002C67B0
// Address: 0x2c67b0 - 0x2c6810
void sub_002C67B0_0x2c67b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C67B0_0x2c67b0");
#endif

    switch (ctx->pc) {
        case 0x2c67c4u: goto label_2c67c4;
        default: break;
    }

    ctx->pc = 0x2c67b0u;

    // 0x2c67b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c67b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c67b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c67b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c67b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c67b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c67bc: 0xc0af284  jal         func_2BCA10
    ctx->pc = 0x2C67BCu;
    SET_GPR_U32(ctx, 31, 0x2C67C4u);
    ctx->pc = 0x2C67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C67BCu;
    // 0x2c67c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCA10u, 0x2C67BCu, 0x2C67C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67C4u;
label_2c67c4:
    // 0x2c67c4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2c67c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2c67c8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c67c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c67cc: 0x96040020  lhu         $a0, 0x20($s0)
    ctx->pc = 0x2c67ccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2c67d0: 0x246351f0  addiu       $v1, $v1, 0x51F0
    ctx->pc = 0x2c67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20976));
    // 0x2c67d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c67d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67d8: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x2c67d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x2c67dc: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x2c67dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c67e0: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x2c67e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c67e4: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x2c67e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c67e8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c67e8u;
    { uint32_t bits = FAST_READ32(0x4E51F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c67ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c67ecu;
    { uint32_t bits = FAST_READ32(0x4E51F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c67f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c67f0u;
    { uint32_t bits = FAST_READ32(0x4E51F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c67f4: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2c67f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c67f8: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x2c67f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c67fc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2c67fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c6800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6808: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6808u;
        // 0x2c680c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6810u;
}
