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

// Function: sub_00384530
// Address: 0x384530 - 0x3845a0
void sub_00384530_0x384530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384530_0x384530");
#endif

    ctx->pc = 0x384530u;

    // 0x384530: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x384530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384534: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x384534u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x384538: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x384538u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x38453c: 0x24c6c668  addiu       $a2, $a2, -0x3998
    ctx->pc = 0x38453cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952552));
    // 0x384540: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x384540u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x384544: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x384544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x384548: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x384548u;
    { uint32_t bits = FAST_READ32(0x65C668u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x38454c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x38454cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x384550: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x384550u;
    { uint32_t bits = FAST_READ32(0x65C66Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384554: 0x2463c600  addiu       $v1, $v1, -0x3A00
    ctx->pc = 0x384554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952448));
    // 0x384558: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x384558u;
    { uint32_t bits = FAST_READ32(0x65C670u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38455c: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x38455cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x384560: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x384560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x384564: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x384564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x384568: 0xa4850028  sh          $a1, 0x28($a0)
    ctx->pc = 0x384568u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 5));
    // 0x38456c: 0xa485002c  sh          $a1, 0x2C($a0)
    ctx->pc = 0x38456cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 5));
    // 0x384570: 0xa080002e  sb          $zero, 0x2E($a0)
    ctx->pc = 0x384570u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x384574: 0x8086002a  lb          $a2, 0x2A($a0)
    ctx->pc = 0x384574u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x384578: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x384578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x38457c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x38457cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x384580: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x384580u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x384584: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x384584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x384588: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x384588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38458c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38458Cu;
    {
        const bool branch_taken_0x38458c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38458c) {
            ctx->pc = 0x384598u;
            goto label_384598;
        }
    }
    ctx->pc = 0x384594u;
    // 0x384594: 0xa080002a  sb          $zero, 0x2A($a0)
    ctx->pc = 0x384594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 42), (uint8_t)GPR_U32(ctx, 0));
label_384598:
    // 0x384598: 0x3e00008  jr          $ra
    ctx->pc = 0x384598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3845A0u;
}
