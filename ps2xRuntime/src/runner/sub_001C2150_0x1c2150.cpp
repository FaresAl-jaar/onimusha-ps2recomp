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

// Function: sub_001C2150
// Address: 0x1c2150 - 0x1c21b8
void sub_001C2150_0x1c2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2150_0x1c2150");
#endif

    ctx->pc = 0x1c2150u;

    // 0x1c2150: 0x8c8a7840  lw          $t2, 0x7840($a0)
    ctx->pc = 0x1c2150u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c2154: 0x11400010  beqz        $t2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2154u;
    {
        const bool branch_taken_0x1c2154 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2154) {
            ctx->pc = 0x1C2198u;
            goto label_1c2198;
        }
    }
    ctx->pc = 0x1C215Cu;
    // 0x1c215c: 0x8c87783c  lw          $a3, 0x783C($a0)
    ctx->pc = 0x1c215cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2160: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x1c2160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1c2164: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1c2164u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1c2168: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2168u;
    {
        const bool branch_taken_0x1c2168 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x34903  sra         $t1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2168) {
            ctx->pc = 0x1C2178u;
            goto label_1c2178;
        }
    }
    ctx->pc = 0x1C2170u;
    // 0x1c2170: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c2170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c2174: 0x34903  sra         $t1, $v1, 4
    ctx->pc = 0x1c2174u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 4));
label_1c2178:
    // 0x1c2178: 0x9543000e  lhu         $v1, 0xE($t2)
    ctx->pc = 0x1c2178u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 14)));
    // 0x1c217c: 0x8c887840  lw          $t0, 0x7840($a0)
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c2180: 0x24670001  addiu       $a3, $v1, 0x1
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2184: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c2184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c2188: 0xa547000e  sh          $a3, 0xE($t2)
    ctx->pc = 0x1c2188u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x1c218c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c2190: 0xa4690010  sh          $t1, 0x10($v1)
    ctx->pc = 0x1c2190u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 9));
    // 0x1c2194: 0x0  nop
    ctx->pc = 0x1c2194u;
    // NOP
label_1c2198:
    // 0x1c2198: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c219c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1c219cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1c21a0: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c21a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c21a4: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1c21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1c21a8: 0x8c83783c  lw          $v1, 0x783C($a0)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c21ac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1c21acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c21b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C21B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21B0u;
        // 0x1c21b4: 0xac83783c  sw          $v1, 0x783C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 30780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C21B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21B8u;
}
