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

// Function: sub_002E2460
// Address: 0x2e2460 - 0x2e24f8
void sub_002E2460_0x2e2460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2460_0x2e2460");
#endif

    ctx->pc = 0x2e2460u;

    // 0x2e2460: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e2464: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2E2464u;
    {
        const bool branch_taken_0x2e2464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2464) {
            ctx->pc = 0x2E24F0u;
            goto label_2e24f0;
        }
    }
    ctx->pc = 0x2E246Cu;
    // 0x2e246c: 0x906506b0  lbu         $a1, 0x6B0($v1)
    ctx->pc = 0x2e246cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1712)));
    // 0x2e2470: 0x246706b0  addiu       $a3, $v1, 0x6B0
    ctx->pc = 0x2e2470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1712));
    // 0x2e2474: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2e2474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e2478: 0x10a3001d  beq         $a1, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E2478u;
    {
        const bool branch_taken_0x2e2478 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e2478) {
            ctx->pc = 0x2E24F0u;
            goto label_2e24f0;
        }
    }
    ctx->pc = 0x2E2480u;
    // 0x2e2480: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2e2480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e2484: 0x53140  sll         $a2, $a1, 5
    ctx->pc = 0x2e2484u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e2488: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2e2488u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e248c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e248cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2490: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e2490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e2494: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2498: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2e2498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e249c: 0xe4c00630  swc1        $f0, 0x630($a2)
    ctx->pc = 0x2e249cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1584), bits); }
    // 0x2e24a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2e24a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e24a4: 0xe4c00634  swc1        $f0, 0x634($a2)
    ctx->pc = 0x2e24a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1588), bits); }
    // 0x2e24a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2e24a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e24ac: 0xe4c00638  swc1        $f0, 0x638($a2)
    ctx->pc = 0x2e24acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1592), bits); }
    // 0x2e24b0: 0xacc0063c  sw          $zero, 0x63C($a2)
    ctx->pc = 0x2e24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1596), GPR_U32(ctx, 0));
    // 0x2e24b4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2e24b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e24b8: 0xe4c00640  swc1        $f0, 0x640($a2)
    ctx->pc = 0x2e24b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1600), bits); }
    // 0x2e24bc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2e24bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e24c0: 0xe4c00644  swc1        $f0, 0x644($a2)
    ctx->pc = 0x2e24c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 1604), bits); }
    // 0x2e24c4: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x2e24c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e24c8: 0xa0c30648  sb          $v1, 0x648($a2)
    ctx->pc = 0x2e24c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1608), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e24cc: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x2e24ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
    // 0x2e24d0: 0xa0c30649  sb          $v1, 0x649($a2)
    ctx->pc = 0x2e24d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1609), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e24d4: 0xa0c5064a  sb          $a1, 0x64A($a2)
    ctx->pc = 0x2e24d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1610), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e24d8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e24dc: 0xacc3064c  sw          $v1, 0x64C($a2)
    ctx->pc = 0x2e24dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1612), GPR_U32(ctx, 3));
    // 0x2e24e0: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e24e4: 0xa06006b1  sb          $zero, 0x6B1($v1)
    ctx->pc = 0x2e24e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1713), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e24e8: 0x8f838ab0  lw          $v1, -0x7550($gp)
    ctx->pc = 0x2e24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937264)));
    // 0x2e24ec: 0xa06506b2  sb          $a1, 0x6B2($v1)
    ctx->pc = 0x2e24ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1714), (uint8_t)GPR_U32(ctx, 5));
label_2e24f0:
    // 0x2e24f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E24F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E24F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E24F8u;
}
