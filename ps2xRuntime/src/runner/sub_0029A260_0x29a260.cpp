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

// Function: sub_0029A260
// Address: 0x29a260 - 0x29a2d8
void sub_0029A260_0x29a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A260_0x29a260");
#endif

    ctx->pc = 0x29a260u;

    // 0x29a260: 0x908607f9  lbu         $a2, 0x7F9($a0)
    ctx->pc = 0x29a260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2041)));
    // 0x29a264: 0x30c30040  andi        $v1, $a2, 0x40
    ctx->pc = 0x29a264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x29a268: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A268u;
    {
        const bool branch_taken_0x29a268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A268u;
        // 0x29a26c: 0x30c30008  andi        $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a268) {
            ctx->pc = 0x29A2B0u;
            goto label_29a2b0;
        }
    }
    ctx->pc = 0x29A270u;
    // 0x29a270: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A270u;
    {
        const bool branch_taken_0x29a270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a270) {
            ctx->pc = 0x29A280u;
            goto label_29a280;
        }
    }
    ctx->pc = 0x29A278u;
    // 0x29a278: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a27c: 0x0  nop
    ctx->pc = 0x29a27cu;
    // NOP
label_29a280:
    // 0x29a280: 0x908607f8  lbu         $a2, 0x7F8($a0)
    ctx->pc = 0x29a280u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2040)));
    // 0x29a284: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29a288: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x29a288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x29a28c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x29a28cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a290: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x29a290u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a294: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x29a294u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x29a298: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x29a298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x29a29c: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x29a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x29a2a0: 0x908307f9  lbu         $v1, 0x7F9($a0)
    ctx->pc = 0x29a2a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2041)));
    // 0x29a2a4: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x29a2a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x29a2a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29A2A8u;
    {
        const bool branch_taken_0x29a2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2A8u;
        // 0x29a2ac: 0xa08307f9  sb          $v1, 0x7F9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2041), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a2a8) {
            ctx->pc = 0x29A2D0u;
            goto label_29a2d0;
        }
    }
    ctx->pc = 0x29A2B0u;
label_29a2b0:
    // 0x29a2b0: 0x908607f7  lbu         $a2, 0x7F7($a0)
    ctx->pc = 0x29a2b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2039)));
    // 0x29a2b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29a2b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x29a2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x29a2bc: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x29a2bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a2c0: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x29a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a2c4: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x29a2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x29a2c8: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x29a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x29a2cc: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x29a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
label_29a2d0:
    // 0x29a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A2D8u;
}
