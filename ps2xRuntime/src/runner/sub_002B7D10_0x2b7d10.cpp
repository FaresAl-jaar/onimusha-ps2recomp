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

// Function: sub_002B7D10
// Address: 0x2b7d10 - 0x2b7d60
void sub_002B7D10_0x2b7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D10_0x2b7d10");
#endif

    ctx->pc = 0x2b7d10u;

    // 0x2b7d10: 0x90850640  lbu         $a1, 0x640($a0)
    ctx->pc = 0x2b7d10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x2b7d14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b7d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7d18: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7D18u;
    {
        const bool branch_taken_0x2b7d18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D18u;
        // 0x2b7d1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7d18) {
            ctx->pc = 0x2B7D28u;
            goto label_2b7d28;
        }
    }
    ctx->pc = 0x2B7D20u;
    // 0x2b7d20: 0xa08304f4  sb          $v1, 0x4F4($a0)
    ctx->pc = 0x2b7d20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1268), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b7d24: 0x0  nop
    ctx->pc = 0x2b7d24u;
    // NOP
label_2b7d28:
    // 0x2b7d28: 0x8c8629c8  lw          $a2, 0x29C8($a0)
    ctx->pc = 0x2b7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10696)));
    // 0x2b7d2c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2b7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    // 0x2b7d30: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x2b7d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x2b7d34: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x2b7d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
    // 0x2b7d38: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x2b7d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2b7d3c: 0xac8529c8  sw          $a1, 0x29C8($a0)
    ctx->pc = 0x2b7d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10696), GPR_U32(ctx, 5));
    // 0x2b7d40: 0xac8004ac  sw          $zero, 0x4AC($a0)
    ctx->pc = 0x2b7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1196), GPR_U32(ctx, 0));
    // 0x2b7d44: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2b7d44u;
    { uint32_t bits = FAST_READ32(0x68C250u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b7d48: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2b7d48u;
    { uint32_t bits = FAST_READ32(0x68C254u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b7d4c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2b7d4cu;
    { uint32_t bits = FAST_READ32(0x68C258u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b7d50: 0xe48206a0  swc1        $f2, 0x6A0($a0)
    ctx->pc = 0x2b7d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1696), bits); }
    // 0x2b7d54: 0xe48106a4  swc1        $f1, 0x6A4($a0)
    ctx->pc = 0x2b7d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1700), bits); }
    // 0x2b7d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7D58u;
        // 0x2b7d5c: 0xe48006a8  swc1        $f0, 0x6A8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7D60u;
}
