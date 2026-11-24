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

// Function: sub_00135650
// Address: 0x135650 - 0x1356d0
void sub_00135650_0x135650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135650_0x135650");
#endif

    ctx->pc = 0x135650u;

    // 0x135650: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x135650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x135654: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x135654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x135658: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x135658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13565c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x13565cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x135660: 0x24630400  addiu       $v1, $v1, 0x400
    ctx->pc = 0x135660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x135664: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x135664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x135668: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x135668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13566c: 0x24a56540  addiu       $a1, $a1, 0x6540
    ctx->pc = 0x13566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25920));
    // 0x135670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135674: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x135674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x135678: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x135678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13567c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x13567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135680: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x135680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x135684: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x135684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135688: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x135688u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x13568c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x13568cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x135690: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x135690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x135694: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x135694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x135698: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x135698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13569c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x13569cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1356a0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1356a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x1356a4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1356a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1356a8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1356a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1356ac: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1356acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1356b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1356b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1356b4: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x1356b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1356b8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1356b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1356bc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1356bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1356c0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1356c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1356c4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1356c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1356c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1356C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1356CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356C8u;
        // 0x1356cc: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1356C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1356D0u;
}
