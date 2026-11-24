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

// Function: sub_0022E988
// Address: 0x22e988 - 0x22e9f8
void sub_0022E988_0x22e988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E988_0x22e988");
#endif

    ctx->pc = 0x22e988u;

    // 0x22e988: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22e988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22e98c: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x22e98cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x22e990: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x22e990u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x22e994: 0x8c43c360  lw          $v1, -0x3CA0($v0)
    ctx->pc = 0x22e994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951776)));
    // 0x22e998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e99c: 0xa6403  sra         $t4, $t2, 16
    ctx->pc = 0x22e99cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 16));
    // 0x22e9a0: 0xb6c03  sra         $t5, $t3, 16
    ctx->pc = 0x22e9a0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 11), 16));
    // 0x22e9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22e9a8: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x22e9a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9ac: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x22e9acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9b0: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x22e9b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e9b4: 0x87af0038  lh          $t7, 0x38($sp)
    ctx->pc = 0x22e9b4u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22e9b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22E9B8u;
    {
        const bool branch_taken_0x22e9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E9B8u;
        // 0x22e9bc: 0x87a20040  lh          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e9b8) {
            ctx->pc = 0x22E9D8u;
            goto label_22e9d8;
        }
    }
    ctx->pc = 0x22E9C0u;
    // 0x22e9c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e9c4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22e9c8: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x22e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x22e9cc: 0x808b990  j           func_22E640
    ctx->pc = 0x22E9CCu;
    ctx->pc = 0x22E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9CCu;
    // 0x22e9d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E640u;
    sub_0022E640_0x22e640(rdram, ctx, runtime); return;
    ctx->pc = 0x22E9D4u;
    // 0x22e9d4: 0x0  nop
    ctx->pc = 0x22e9d4u;
    // NOP
label_22e9d8:
    // 0x22e9d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22e9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e9dc: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x22e9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9e0: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x22e9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e9e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x22e9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x22e9e8: 0xafae0030  sw          $t6, 0x30($sp)
    ctx->pc = 0x22e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
    // 0x22e9ec: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x22e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x22e9f0: 0x808b89e  j           func_22E278
    ctx->pc = 0x22E9F0u;
    ctx->pc = 0x22E9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E9F0u;
    // 0x22e9f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E278u;
    sub_0022E278_0x22e278(rdram, ctx, runtime); return;
    ctx->pc = 0x22E9F8u;
}
