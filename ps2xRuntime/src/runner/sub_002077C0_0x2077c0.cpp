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

// Function: sub_002077C0
// Address: 0x2077c0 - 0x207818
void sub_002077C0_0x2077c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002077C0_0x2077c0");
#endif

    ctx->pc = 0x2077c0u;

    // 0x2077c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2077c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2077c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2077c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2077c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2077cc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2077CCu;
    {
        const bool branch_taken_0x2077cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2077D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077CCu;
        // 0x2077d0: 0x8c44003c  lw          $a0, 0x3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077cc) {
            ctx->pc = 0x2077E8u;
            goto label_2077e8;
        }
    }
    ctx->pc = 0x2077D4u;
    // 0x2077d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2077d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2077d8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2077d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2077dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2077dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2077e0: 0x8087e0e  j           func_21F838
    ctx->pc = 0x2077E0u;
    ctx->pc = 0x2077E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2077E0u;
    // 0x2077e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x2077E8u;
label_2077e8:
    // 0x2077e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2077e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2077ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2077ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2077f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2077F0u;
    {
        const bool branch_taken_0x2077f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2077F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2077F0u;
        // 0x2077f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077f0) {
            ctx->pc = 0x207808u;
            goto label_207808;
        }
    }
    ctx->pc = 0x2077F8u;
    // 0x2077f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2077f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2077fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2077fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207800: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207800u;
    ctx->pc = 0x207804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207800u;
    // 0x207804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207808u;
label_207808:
    // 0x207808: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x207808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20780c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20780cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207810: 0x8087e0e  j           func_21F838
    ctx->pc = 0x207810u;
    ctx->pc = 0x207814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207810u;
    // 0x207814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F838u;
    sub_0021F838_0x21f838(rdram, ctx, runtime); return;
    ctx->pc = 0x207818u;
}
