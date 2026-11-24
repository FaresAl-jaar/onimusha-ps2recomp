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

// Function: sub_0023BE00
// Address: 0x23be00 - 0x23be3c
void sub_0023BE00_0x23be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE00_0x23be00");
#endif

    switch (ctx->pc) {
        case 0x23be1cu: goto label_23be1c;
        case 0x23be28u: goto label_23be28;
        default: break;
    }

    ctx->pc = 0x23be00u;

    // 0x23be00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23be04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23be08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23be08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23be10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23be14: 0xc08b534  jal         func_22D4D0
    ctx->pc = 0x23BE14u;
    SET_GPR_U32(ctx, 31, 0x23BE1Cu);
    ctx->pc = 0x23BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE14u;
    // 0x23be18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4D0u, 0x23BE14u, 0x23BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE1Cu;
label_23be1c:
    // 0x23be1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23be1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be20: 0xc08ef90  jal         func_23BE40
    ctx->pc = 0x23BE20u;
    SET_GPR_U32(ctx, 31, 0x23BE28u);
    ctx->pc = 0x23BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE20u;
    // 0x23be24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE40u, 0x23BE20u, 0x23BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE28u;
label_23be28:
    // 0x23be28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23be28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23be2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23be2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23be30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23be30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23be34: 0x808b536  j           func_22D4D8
    ctx->pc = 0x23BE34u;
    ctx->pc = 0x23BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE34u;
    // 0x23be38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4D8u;
    sub_0022D4D8_0x22d4d8(rdram, ctx, runtime); return;
    ctx->pc = 0x23BE3Cu;
}
