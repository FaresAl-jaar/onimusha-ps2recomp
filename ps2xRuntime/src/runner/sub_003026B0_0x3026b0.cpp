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

// Function: sub_003026B0
// Address: 0x3026b0 - 0x30273c
void sub_003026B0_0x3026b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003026B0_0x3026b0");
#endif

    ctx->pc = 0x3026b0u;

    // 0x3026b0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3026b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3026b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x3026b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x3026b8: 0x78265c20  lq          $a2, 0x5C20($at)
    ctx->pc = 0x3026b8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C20u));
    // 0x3026bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3026bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3026c0: 0x7c860550  sq          $a2, 0x550($a0)
    ctx->pc = 0x3026c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1360), GPR_VEC(ctx, 6));
    // 0x3026c4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3026c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3026c8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3026c8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3026cc: 0x7c860560  sq          $a2, 0x560($a0)
    ctx->pc = 0x3026ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1376), GPR_VEC(ctx, 6));
    // 0x3026d0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3026d4: 0x78265c40  lq          $a2, 0x5C40($at)
    ctx->pc = 0x3026d4u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C40u));
    // 0x3026d8: 0x7c860570  sq          $a2, 0x570($a0)
    ctx->pc = 0x3026d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1392), GPR_VEC(ctx, 6));
    // 0x3026dc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3026dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3026e0: 0x78265c50  lq          $a2, 0x5C50($at)
    ctx->pc = 0x3026e0u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C50u));
    // 0x3026e4: 0x7c860580  sq          $a2, 0x580($a0)
    ctx->pc = 0x3026e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1408), GPR_VEC(ctx, 6));
    // 0x3026e8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3026e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3026ec: 0xac8005b0  sw          $zero, 0x5B0($a0)
    ctx->pc = 0x3026ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1456), GPR_U32(ctx, 0));
    // 0x3026f0: 0xac8005b4  sw          $zero, 0x5B4($a0)
    ctx->pc = 0x3026f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
    // 0x3026f4: 0xac8005b8  sw          $zero, 0x5B8($a0)
    ctx->pc = 0x3026f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1464), GPR_U32(ctx, 0));
    // 0x3026f8: 0xac8005bc  sw          $zero, 0x5BC($a0)
    ctx->pc = 0x3026f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1468), GPR_U32(ctx, 0));
    // 0x3026fc: 0xac8005c0  sw          $zero, 0x5C0($a0)
    ctx->pc = 0x3026fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1472), GPR_U32(ctx, 0));
    // 0x302700: 0xac8005c4  sw          $zero, 0x5C4($a0)
    ctx->pc = 0x302700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1476), GPR_U32(ctx, 0));
    // 0x302704: 0xa08005d2  sb          $zero, 0x5D2($a0)
    ctx->pc = 0x302704u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1490), (uint8_t)GPR_U32(ctx, 0));
    // 0x302708: 0xa08005d3  sb          $zero, 0x5D3($a0)
    ctx->pc = 0x302708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1491), (uint8_t)GPR_U32(ctx, 0));
    // 0x30270c: 0x78265c10  lq          $a2, 0x5C10($at)
    ctx->pc = 0x30270cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C10u));
    // 0x302710: 0x7c860590  sq          $a2, 0x590($a0)
    ctx->pc = 0x302710u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1424), GPR_VEC(ctx, 6));
    // 0x302714: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x302718: 0x78265c10  lq          $a2, 0x5C10($at)
    ctx->pc = 0x302718u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C10u));
    // 0x30271c: 0x7c8605a0  sq          $a2, 0x5A0($a0)
    ctx->pc = 0x30271cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1440), GPR_VEC(ctx, 6));
    // 0x302720: 0xac8005cc  sw          $zero, 0x5CC($a0)
    ctx->pc = 0x302720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1484), GPR_U32(ctx, 0));
    // 0x302724: 0xa48005d0  sh          $zero, 0x5D0($a0)
    ctx->pc = 0x302724u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1488), (uint16_t)GPR_U32(ctx, 0));
    // 0x302728: 0xa08005d4  sb          $zero, 0x5D4($a0)
    ctx->pc = 0x302728u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1492), (uint8_t)GPR_U32(ctx, 0));
    // 0x30272c: 0xac8505c8  sw          $a1, 0x5C8($a0)
    ctx->pc = 0x30272cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1480), GPR_U32(ctx, 5));
    // 0x302730: 0xa08005d5  sb          $zero, 0x5D5($a0)
    ctx->pc = 0x302730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1493), (uint8_t)GPR_U32(ctx, 0));
    // 0x302734: 0x3e00008  jr          $ra
    ctx->pc = 0x302734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302734u;
        // 0x302738: 0xa08305d6  sb          $v1, 0x5D6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1494), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30273Cu;
}
