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

// Function: sub_00247CA0
// Address: 0x247ca0 - 0x247d00
void sub_00247CA0_0x247ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247CA0_0x247ca0");
#endif

    switch (ctx->pc) {
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cdcu: goto label_247cdc;
        default: break;
    }

    ctx->pc = 0x247ca0u;

    // 0x247ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247cac: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x247cacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x247cb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247cb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x247cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x247cb8: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x247CB8u;
    SET_GPR_U32(ctx, 31, 0x247CC0u);
    ctx->pc = 0x247CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CB8u;
    // 0x247cbc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x247CB8u, 0x247CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x247cc4: 0x2450f240  addiu       $s0, $v0, -0xDC0
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_247cc8:
    // 0x247cc8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x247cc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247ccc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x247CCCu;
    {
        const bool branch_taken_0x247ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x247ccc) {
            ctx->pc = 0x247CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247CCCu;
            // 0x247cd0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247CE0u;
            goto label_247ce0;
        }
    }
    ctx->pc = 0x247CD4u;
    // 0x247cd4: 0xc091e30  jal         func_2478C0
    ctx->pc = 0x247CD4u;
    SET_GPR_U32(ctx, 31, 0x247CDCu);
    ctx->pc = 0x247CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CD4u;
    // 0x247cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478C0u, 0x247CD4u, 0x247CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CDCu;
label_247cdc:
    // 0x247cdc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x247cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_247ce0:
    // 0x247ce0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x247CE0u;
    {
        const bool branch_taken_0x247ce0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x247CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CE0u;
        // 0x247ce4: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ce0) {
            ctx->pc = 0x247CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247cc8;
        }
    }
    ctx->pc = 0x247CE8u;
    // 0x247ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247cec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247cf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247cf4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247cf8: 0x8093f40  j           func_24FD00
    ctx->pc = 0x247CF8u;
    ctx->pc = 0x247CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CF8u;
    // 0x247cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x247D00u;
}
