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

// Function: sub_001C2100
// Address: 0x1c2100 - 0x1c2150
void sub_001C2100_0x1c2100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2100_0x1c2100");
#endif

    ctx->pc = 0x1c2100u;

    // 0x1c2100: 0x8c877840  lw          $a3, 0x7840($a0)
    ctx->pc = 0x1c2100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c2104: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C2104u;
    {
        const bool branch_taken_0x1c2104 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2104) {
            ctx->pc = 0x1C2148u;
            goto label_1c2148;
        }
    }
    ctx->pc = 0x1C210Cu;
    // 0x1c210c: 0x8c85783c  lw          $a1, 0x783C($a0)
    ctx->pc = 0x1c210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30780)));
    // 0x1c2110: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1c2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1c2114: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1c2114u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1c2118: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2118u;
    {
        const bool branch_taken_0x1c2118 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2118u;
        // 0x1c211c: 0x33103  sra         $a2, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2118) {
            ctx->pc = 0x1C2128u;
            goto label_1c2128;
        }
    }
    ctx->pc = 0x1C2120u;
    // 0x1c2120: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1c2120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c2124: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x1c2124u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
label_1c2128:
    // 0x1c2128: 0x8c857840  lw          $a1, 0x7840($a0)
    ctx->pc = 0x1c2128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30784)));
    // 0x1c212c: 0x94e3000e  lhu         $v1, 0xE($a3)
    ctx->pc = 0x1c212cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x1c2130: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1c2130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c2134: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1c2138: 0xa4e4000e  sh          $a0, 0xE($a3)
    ctx->pc = 0x1c2138u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c213c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1c213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c2140: 0xa4660010  sh          $a2, 0x10($v1)
    ctx->pc = 0x1c2140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 6));
    // 0x1c2144: 0x0  nop
    ctx->pc = 0x1c2144u;
    // NOP
label_1c2148:
    // 0x1c2148: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2150u;
}
