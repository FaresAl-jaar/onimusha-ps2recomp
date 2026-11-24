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

// Function: sub_0023C0F8
// Address: 0x23c0f8 - 0x23c128
void sub_0023C0F8_0x23c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C0F8_0x23c0f8");
#endif

    ctx->pc = 0x23c0f8u;

    // 0x23c0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c0fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23C0FCu;
    {
        const bool branch_taken_0x23c0fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C0FCu;
        // 0x23c100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23c0fc) {
            ctx->pc = 0x23C118u;
            goto label_23c118;
        }
    }
    ctx->pc = 0x23C104u;
    // 0x23c104: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23c104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23c108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c10c: 0x2484b708  addiu       $a0, $a0, -0x48F8
    ctx->pc = 0x23c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    // 0x23c110: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23C110u;
    ctx->pc = 0x23C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C110u;
    // 0x23c114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23C118u;
label_23c118:
    // 0x23c118: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23c11c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23c11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c120: 0x808da9e  j           func_236A78
    ctx->pc = 0x23C120u;
    ctx->pc = 0x23C124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C120u;
    // 0x23c124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A78u;
    sub_00236A78_0x236a78(rdram, ctx, runtime); return;
    ctx->pc = 0x23C128u;
}
