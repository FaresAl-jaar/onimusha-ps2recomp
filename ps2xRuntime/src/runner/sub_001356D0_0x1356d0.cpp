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

// Function: sub_001356D0
// Address: 0x1356d0 - 0x135750
void sub_001356D0_0x1356d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001356D0_0x1356d0");
#endif

    ctx->pc = 0x1356d0u;

    // 0x1356d0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1356d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1356d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1356d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1356d8: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x1356d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1356dc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x1356dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1356e0: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x1356e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1356e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1356e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1356e8: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1356e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1356ec: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x1356ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x1356f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1356f4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1356f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1356f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1356f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1356fc: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1356fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135700: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135704: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x135704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135708: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x135708u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x13570c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x13570cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x135710: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x135710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x135714: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x135714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x135718: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x135718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13571c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13571cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x135720: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x135720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x135724: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x135724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x135728: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x135728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13572c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x13572cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x135730: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x135730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x135734: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x135734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x135738: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x135738u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13573c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x13573cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x135740: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x135740u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x135744: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x135744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x135748: 0x3e00008  jr          $ra
    ctx->pc = 0x135748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135748u;
        // 0x13574c: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135750u;
}
