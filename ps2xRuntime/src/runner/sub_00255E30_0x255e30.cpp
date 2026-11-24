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

// Function: sub_00255E30
// Address: 0x255e30 - 0x255e7c
void sub_00255E30_0x255e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255E30_0x255e30");
#endif

    ctx->pc = 0x255e30u;

    // 0x255e30: 0x8c870050  lw          $a3, 0x50($a0)
    ctx->pc = 0x255e30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255e34: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x255e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x255e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x255e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x255e3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x255e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255e40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255e44: 0x94e50000  lhu         $a1, 0x0($a3)
    ctx->pc = 0x255e44u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x255e48: 0x30a5ffef  andi        $a1, $a1, 0xFFEF
    ctx->pc = 0x255e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65519);
    // 0x255e4c: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x255e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x255e50: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x255e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255e54: 0xa4a6002c  sh          $a2, 0x2C($a1)
    ctx->pc = 0x255e54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 6));
    // 0x255e58: 0x8c860050  lw          $a2, 0x50($a0)
    ctx->pc = 0x255e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255e5c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x255e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x255e60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x255e64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255e68: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x255e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x255e6c: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x255e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
    // 0x255e70: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x255e74: 0x3e00008  jr          $ra
    ctx->pc = 0x255E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255E74u;
        // 0x255e78: 0xac65000c  sw          $a1, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255E7Cu;
}
