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

// Function: sub_00361480
// Address: 0x361480 - 0x361520
void sub_00361480_0x361480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361480_0x361480");
#endif

    ctx->pc = 0x361480u;

    // 0x361480: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x361480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x361484: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x361484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x361488: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x361488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36148c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x36148cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x361490: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x361490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x361494: 0x8c8306cc  lw          $v1, 0x6CC($a0)
    ctx->pc = 0x361494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x361498: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x361498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x36149c: 0xac8306cc  sw          $v1, 0x6CC($a0)
    ctx->pc = 0x36149cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 3));
    // 0x3614a0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3614a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3614a4: 0x10660012  beq         $v1, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3614A4u;
    {
        const bool branch_taken_0x3614a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3614a4) {
            ctx->pc = 0x3614F0u;
            goto label_3614f0;
        }
    }
    ctx->pc = 0x3614ACu;
    // 0x3614ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3614ACu;
    {
        const bool branch_taken_0x3614ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614ac) {
            ctx->pc = 0x3614C0u;
            goto label_3614c0;
        }
    }
    ctx->pc = 0x3614B4u;
    // 0x3614b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3614B4u;
    {
        const bool branch_taken_0x3614b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614b4) {
            ctx->pc = 0x361518u;
            goto label_361518;
        }
    }
    ctx->pc = 0x3614BCu;
    // 0x3614bc: 0x0  nop
    ctx->pc = 0x3614bcu;
    // NOP
label_3614c0:
    // 0x3614c0: 0xa0802b26  sb          $zero, 0x2B26($a0)
    ctx->pc = 0x3614c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11046), (uint8_t)GPR_U32(ctx, 0));
    // 0x3614c4: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x3614c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3614c8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3614c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3614cc: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x3614ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3614d0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x3614d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3614d4: 0xa48607f2  sh          $a2, 0x7F2($a0)
    ctx->pc = 0x3614d4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3614d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3614d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3614dc: 0xa08507f5  sb          $a1, 0x7F5($a0)
    ctx->pc = 0x3614dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3614e0: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x3614e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x3614e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3614E4u;
    {
        const bool branch_taken_0x3614e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3614E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3614E4u;
        // 0x3614e8: 0xa0860821  sb          $a2, 0x821($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3614e4) {
            ctx->pc = 0x361518u;
            goto label_361518;
        }
    }
    ctx->pc = 0x3614ECu;
    // 0x3614ec: 0x0  nop
    ctx->pc = 0x3614ecu;
    // NOP
label_3614f0:
    // 0x3614f0: 0x908307f6  lbu         $v1, 0x7F6($a0)
    ctx->pc = 0x3614f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2038)));
    // 0x3614f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3614F4u;
    {
        const bool branch_taken_0x3614f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3614f4) {
            ctx->pc = 0x361518u;
            goto label_361518;
        }
    }
    ctx->pc = 0x3614FCu;
    // 0x3614fc: 0x9086083b  lbu         $a2, 0x83B($a0)
    ctx->pc = 0x3614fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2107)));
    // 0x361500: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361504: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x361504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x361508: 0xa086083c  sb          $a2, 0x83C($a0)
    ctx->pc = 0x361508u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2108), (uint8_t)GPR_U32(ctx, 6));
    // 0x36150c: 0xa085083b  sb          $a1, 0x83B($a0)
    ctx->pc = 0x36150cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2107), (uint8_t)GPR_U32(ctx, 5));
    // 0x361510: 0xa0830780  sb          $v1, 0x780($a0)
    ctx->pc = 0x361510u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x361514: 0x0  nop
    ctx->pc = 0x361514u;
    // NOP
label_361518:
    // 0x361518: 0x3e00008  jr          $ra
    ctx->pc = 0x361518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x361518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x361520u;
}
