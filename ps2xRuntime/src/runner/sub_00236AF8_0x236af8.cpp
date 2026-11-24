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

// Function: sub_00236AF8
// Address: 0x236af8 - 0x236b28
void sub_00236AF8_0x236af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AF8_0x236af8");
#endif

    ctx->pc = 0x236af8u;

    // 0x236af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236afc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x236afcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x236b00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236b04: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x236b04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x236b08: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x236b0c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x236b0cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x236b10: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x236b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x236b14: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x236b14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x236b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b1c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x236b1cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x236b20: 0x808af8e  j           func_22BE38
    ctx->pc = 0x236B20u;
    ctx->pc = 0x236B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B20u;
    // 0x236b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE38u;
    sub_0022BE38_0x22be38(rdram, ctx, runtime); return;
    ctx->pc = 0x236B28u;
}
