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

// Function: sub_0024CC60
// Address: 0x24cc60 - 0x24ccac
void sub_0024CC60_0x24cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CC60_0x24cc60");
#endif

    switch (ctx->pc) {
        case 0x24cc98u: goto label_24cc98;
        default: break;
    }

    ctx->pc = 0x24cc60u;

    // 0x24cc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24cc64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24cc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24cc68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc6c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CC6Cu;
    {
        const bool branch_taken_0x24cc6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC6Cu;
        // 0x24cc70: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc6c) {
            ctx->pc = 0x24CC90u;
            goto label_24cc90;
        }
    }
    ctx->pc = 0x24CC74u;
    // 0x24cc74: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x24cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x24cc78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24cc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24cc80: 0x24a5dd38  addiu       $a1, $a1, -0x22C8
    ctx->pc = 0x24cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958392));
    // 0x24cc84: 0x8093184  j           func_24C610
    ctx->pc = 0x24CC84u;
    ctx->pc = 0x24CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC84u;
    // 0x24cc88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C610u;
    sub_0024C610_0x24c610(rdram, ctx, runtime); return;
    ctx->pc = 0x24CC8Cu;
    // 0x24cc8c: 0x0  nop
    ctx->pc = 0x24cc8cu;
    // NOP
label_24cc90:
    // 0x24cc90: 0xc093172  jal         func_24C5C8
    ctx->pc = 0x24CC90u;
    SET_GPR_U32(ctx, 31, 0x24CC98u);
    ctx->pc = 0x24C5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5C8u, 0x24CC90u, 0x24CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC98u;
label_24cc98:
    // 0x24cc98: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x24cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x24cc9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24cc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24cca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cca4: 0x8093178  j           func_24C5E0
    ctx->pc = 0x24CCA4u;
    ctx->pc = 0x24CCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CCA4u;
    // 0x24cca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C5E0u;
    sub_0024C5E0_0x24c5e0(rdram, ctx, runtime); return;
    ctx->pc = 0x24CCACu;
}
