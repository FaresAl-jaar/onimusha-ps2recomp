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

// Function: sub_00232D00
// Address: 0x232d00 - 0x232d30
void sub_00232D00_0x232d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232D00_0x232d00");
#endif

    ctx->pc = 0x232d00u;

    // 0x232d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x232d04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x232D04u;
    {
        const bool branch_taken_0x232d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D04u;
        // 0x232d08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d04) {
            ctx->pc = 0x232D20u;
            goto label_232d20;
        }
    }
    ctx->pc = 0x232D0Cu;
    // 0x232d0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x232d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x232d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d14: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    // 0x232d18: 0x808baa4  j           func_22EA90
    ctx->pc = 0x232D18u;
    ctx->pc = 0x232D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D18u;
    // 0x232d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x232D20u;
label_232d20:
    // 0x232d20: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x232d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x232d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232d28: 0x8092fd2  j           func_24BF48
    ctx->pc = 0x232D28u;
    ctx->pc = 0x232D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D28u;
    // 0x232d2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BF48u;
    sub_0024BF48_0x24bf48(rdram, ctx, runtime); return;
    ctx->pc = 0x232D30u;
}
