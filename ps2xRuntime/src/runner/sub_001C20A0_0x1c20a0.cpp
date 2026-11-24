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

// Function: sub_001C20A0
// Address: 0x1c20a0 - 0x1c2100
void sub_001C20A0_0x1c20a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C20A0_0x1c20a0");
#endif

    ctx->pc = 0x1c20a0u;

    // 0x1c20a0: 0x8c897840  lw          $t1, 0x7840($a0)
    ctx->pc = 0x1c20a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c20a4: 0x11200010  beqz        $t1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C20A4u;
    {
        const bool branch_taken_0x1c20a4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c20a4) {
            ctx->pc = 0x1C20E8u;
            goto label_1c20e8;
        }
    }
    ctx->pc = 0x1C20ACu;
    // 0x1c20ac: 0x8c86783c  lw          $a2, 0x783C($a0)
    ctx->pc = 0x1c20acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c20b0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1c20b4: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1c20b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C20B8u;
    {
        const bool branch_taken_0x1c20b8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20B8u;
        // 0x1c20bc: 0x34103  sra         $t0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c20b8) {
            ctx->pc = 0x1C20C8u;
            goto label_1c20c8;
        }
    }
    ctx->pc = 0x1C20C0u;
    // 0x1c20c0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c20c4: 0x34103  sra         $t0, $v1, 4
    ctx->pc = 0x1c20c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 4));
label_1c20c8:
    // 0x1c20c8: 0x9523000e  lhu         $v1, 0xE($t1)
    ctx->pc = 0x1c20c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 14)));
    // 0x1c20cc: 0x8c877840  lw          $a3, 0x7840($a0)
    ctx->pc = 0x1c20ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c20d0: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1c20d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c20d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c20d8: 0xa526000e  sh          $a2, 0xE($t1)
    ctx->pc = 0x1c20d8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c20dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c20dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c20e0: 0xa4680010  sh          $t0, 0x10($v1)
    ctx->pc = 0x1c20e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c20e4: 0x0  nop
    ctx->pc = 0x1c20e4u;
    // NOP
label_1c20e8:
    // 0x1c20e8: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c20ec: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1c20ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1c20f0: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c20f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c20f4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c20f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20F8u;
        // 0x1c20fc: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2100u;
}
