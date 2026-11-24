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

// Function: sub_002AEDB0
// Address: 0x2aedb0 - 0x2aee1c
void sub_002AEDB0_0x2aedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEDB0_0x2aedb0");
#endif

    ctx->pc = 0x2aedb0u;

    // 0x2aedb0: 0x8f8c8984  lw          $t4, -0x767C($gp)
    ctx->pc = 0x2aedb0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936964)));
    // 0x2aedb4: 0x3c0701c0  lui         $a3, 0x1C0
    ctx->pc = 0x2aedb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)448 << 16));
    // 0x2aedb8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x2aedbc: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x2aedbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
    // 0x2aedc0: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2aedc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2aedc4: 0x34eb5510  ori         $t3, $a3, 0x5510
    ctx->pc = 0x2aedc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21776);
    // 0x2aedc8: 0x34e9aa20  ori         $t1, $a3, 0xAA20
    ctx->pc = 0x2aedc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)43552);
    // 0x2aedcc: 0x34e8ff30  ori         $t0, $a3, 0xFF30
    ctx->pc = 0x2aedccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65328);
    // 0x2aedd0: 0x34465440  ori         $a2, $v0, 0x5440
    ctx->pc = 0x2aedd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21568);
    // 0x2aedd4: 0x3445a950  ori         $a1, $v0, 0xA950
    ctx->pc = 0x2aedd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43344);
    // 0x2aedd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2aedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aeddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aeddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aede0: 0xac8c000c  sw          $t4, 0xC($a0)
    ctx->pc = 0x2aede0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 12));
    // 0x2aede4: 0x1815021  addu        $t2, $t4, $at
    ctx->pc = 0x2aede4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 1)));
    // 0x2aede8: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x2aede8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x2aedec: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x2aedecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x2aedf0: 0xac8b001c  sw          $t3, 0x1C($a0)
    ctx->pc = 0x2aedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 11));
    // 0x2aedf4: 0x1813821  addu        $a3, $t4, $at
    ctx->pc = 0x2aedf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 1)));
    // 0x2aedf8: 0xac8a0010  sw          $t2, 0x10($a0)
    ctx->pc = 0x2aedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 10));
    // 0x2aedfc: 0xac890020  sw          $t1, 0x20($a0)
    ctx->pc = 0x2aedfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 9));
    // 0x2aee00: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x2aee00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x2aee04: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x2aee04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x2aee08: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x2aee08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x2aee0c: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x2aee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x2aee10: 0xa0830048  sb          $v1, 0x48($a0)
    ctx->pc = 0x2aee10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 3));
    // 0x2aee14: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE14u;
        // 0x2aee18: 0xa0800049  sb          $zero, 0x49($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE1Cu;
}
