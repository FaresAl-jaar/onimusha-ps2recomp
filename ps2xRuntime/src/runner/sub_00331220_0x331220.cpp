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

// Function: sub_00331220
// Address: 0x331220 - 0x331254
void sub_00331220_0x331220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331220_0x331220");
#endif

    ctx->pc = 0x331220u;

    // 0x331220: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x331220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331224: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x331224u;
    {
        const bool branch_taken_0x331224 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x331228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331224u;
        // 0x331228: 0x71043  sra         $v0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331224) {
            ctx->pc = 0x331234u;
            goto label_331234;
        }
    }
    ctx->pc = 0x33122Cu;
    // 0x33122c: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x33122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x331230: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x331230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_331234:
    // 0x331234: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x331234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x331238: 0x94680004  lhu         $t0, 0x4($v1)
    ctx->pc = 0x331238u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33123c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x33123cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331240: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x331240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331244: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x331244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331248: 0x3406fff5  ori         $a2, $zero, 0xFFF5
    ctx->pc = 0x331248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65525);
    // 0x33124c: 0x80ed8f8  j           func_3B63E0
    ctx->pc = 0x33124Cu;
    ctx->pc = 0x331250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33124Cu;
    // 0x331250: 0x30490001  andi        $t1, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    sub_003B63E0_0x3b63e0(rdram, ctx, runtime); return;
    ctx->pc = 0x331254u;
}
