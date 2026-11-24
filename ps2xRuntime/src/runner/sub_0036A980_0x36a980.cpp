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

// Function: sub_0036A980
// Address: 0x36a980 - 0x36aa14
void sub_0036A980_0x36a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A980_0x36a980");
#endif

    switch (ctx->pc) {
        case 0x36a9c0u: goto label_36a9c0;
        case 0x36a9d4u: goto label_36a9d4;
        default: break;
    }

    ctx->pc = 0x36a980u;

    // 0x36a980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36a984: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36a988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36a988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36a98c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x36a98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36a990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a994: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x36a994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x36a998: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x36a998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x36a99c: 0xac8201a4  sw          $v0, 0x1A4($a0)
    ctx->pc = 0x36a99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 2));
    // 0x36a9a0: 0xa48601a0  sh          $a2, 0x1A0($a0)
    ctx->pc = 0x36a9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 416), (uint16_t)GPR_U32(ctx, 6));
    // 0x36a9a4: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x36a9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x36a9a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x36A9A8u;
    {
        const bool branch_taken_0x36a9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9A8u;
        // 0x36a9ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9a8) {
            ctx->pc = 0x36A9C8u;
            goto label_36a9c8;
        }
    }
    ctx->pc = 0x36A9B0u;
    // 0x36a9b0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36a9b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x36a9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36a9b8: 0xc0cbe14  jal         func_32F850
    ctx->pc = 0x36A9B8u;
    SET_GPR_U32(ctx, 31, 0x36A9C0u);
    ctx->pc = 0x36A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A9B8u;
    // 0x36a9bc: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F850u, 0x36A9B8u, 0x36A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9C0u;
label_36a9c0:
    // 0x36a9c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x36A9C0u;
    {
        const bool branch_taken_0x36a9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a9c0) {
            ctx->pc = 0x36A9D8u;
            goto label_36a9d8;
        }
    }
    ctx->pc = 0x36A9C8u;
label_36a9c8:
    // 0x36a9c8: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x36a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x36a9cc: 0xc0cbee4  jal         func_32FB90
    ctx->pc = 0x36A9CCu;
    SET_GPR_U32(ctx, 31, 0x36A9D4u);
    ctx->pc = 0x36A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A9CCu;
    // 0x36a9d0: 0x24841270  addiu       $a0, $a0, 0x1270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FB90u, 0x36A9CCu, 0x36A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9D4u;
label_36a9d4:
    // 0x36a9d4: 0x0  nop
    ctx->pc = 0x36a9d4u;
    // NOP
label_36a9d8:
    // 0x36a9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a9dc: 0xa2030020  sb          $v1, 0x20($s0)
    ctx->pc = 0x36a9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x36a9e0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x36a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x36a9e4: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x36a9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x36a9e8: 0x2463ab00  addiu       $v1, $v1, -0x5500
    ctx->pc = 0x36a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945536));
    // 0x36a9ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x36a9ecu;
    { uint32_t bits = FAST_READ32(0x65AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a9f0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x36a9f0u;
    { uint32_t bits = FAST_READ32(0x65AB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a9f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x36a9f4u;
    { uint32_t bits = FAST_READ32(0x65AB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a9f8: 0xe6020090  swc1        $f2, 0x90($s0)
    ctx->pc = 0x36a9f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x36a9fc: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x36a9fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x36aa00: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x36aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x36aa04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36aa08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36aa08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AA0Cu;
        // 0x36aa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AA14u;
}
