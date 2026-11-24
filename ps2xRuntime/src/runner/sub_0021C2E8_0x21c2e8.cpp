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

// Function: sub_0021C2E8
// Address: 0x21c2e8 - 0x21c340
void sub_0021C2E8_0x21c2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C2E8_0x21c2e8");
#endif

    switch (ctx->pc) {
        case 0x21c308u: goto label_21c308;
        case 0x21c310u: goto label_21c310;
        case 0x21c320u: goto label_21c320;
        default: break;
    }

    ctx->pc = 0x21c2e8u;

    // 0x21c2e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21c2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21c2ec: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x21c2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21c2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21c2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21c2f8: 0x2450a1cc  addiu       $s0, $v0, -0x5E34
    ctx->pc = 0x21c2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943180));
    // 0x21c2fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21c300: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21c304: 0x0  nop
    ctx->pc = 0x21c304u;
    // NOP
label_21c308:
    // 0x21c308: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21C308u;
    SET_GPR_U32(ctx, 31, 0x21C310u);
    ctx->pc = 0x21C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C308u;
    // 0x21c30c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21C308u, 0x21C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C310u;
label_21c310:
    // 0x21c310: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C310u;
    {
        const bool branch_taken_0x21c310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c310) {
            ctx->pc = 0x21C314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C310u;
            // 0x21c314: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C324u;
            goto label_21c324;
        }
    }
    ctx->pc = 0x21C318u;
    // 0x21c318: 0xc0870d0  jal         func_21C340
    ctx->pc = 0x21C318u;
    SET_GPR_U32(ctx, 31, 0x21C320u);
    ctx->pc = 0x21C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C318u;
    // 0x21c31c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C340u, 0x21C318u, 0x21C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C320u;
label_21c320:
    // 0x21c320: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21c320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21c324:
    // 0x21c324: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21C324u;
    {
        const bool branch_taken_0x21c324 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x21C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C324u;
        // 0x21c328: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c324) {
            ctx->pc = 0x21C308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c308;
        }
    }
    ctx->pc = 0x21C32Cu;
    // 0x21c32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21c32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21c330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21c334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21c334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c338: 0x8087484  j           func_21D210
    ctx->pc = 0x21C338u;
    ctx->pc = 0x21C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C338u;
    // 0x21c33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D210u;
    sub_0021D210_0x21d210(rdram, ctx, runtime); return;
    ctx->pc = 0x21C340u;
}
