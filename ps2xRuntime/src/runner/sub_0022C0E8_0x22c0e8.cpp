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

// Function: sub_0022C0E8
// Address: 0x22c0e8 - 0x22c140
void sub_0022C0E8_0x22c0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C0E8_0x22c0e8");
#endif

    switch (ctx->pc) {
        case 0x22c12cu: goto label_22c12c;
        default: break;
    }

    ctx->pc = 0x22c0e8u;

    // 0x22c0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c0ec: 0x24830048  addiu       $v1, $a0, 0x48
    ctx->pc = 0x22c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x22c0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22c0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22c0f4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x22c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x22c0f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c0fc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x22c0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c100: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x22c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x22c104: 0x8c670014  lw          $a3, 0x14($v1)
    ctx->pc = 0x22c104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22c108: 0x8c68001c  lw          $t0, 0x1C($v1)
    ctx->pc = 0x22c108u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x22c10c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22c110: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x22c110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x22c114: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x22c114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x22c118: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22c118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c11c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x22c11cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x22c120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c124: 0xc08f932  jal         func_23E4C8
    ctx->pc = 0x22C124u;
    SET_GPR_U32(ctx, 31, 0x22C12Cu);
    ctx->pc = 0x22C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C124u;
    // 0x22c128: 0xe84021  addu        $t0, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E4C8u, 0x22C124u, 0x22C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C12Cu;
label_22c12c:
    // 0x22c12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c130: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22c130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22c134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c138: 0x808f94a  j           func_23E528
    ctx->pc = 0x22C138u;
    ctx->pc = 0x22C13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C138u;
    // 0x22c13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E528u;
    sub_0023E528_0x23e528(rdram, ctx, runtime); return;
    ctx->pc = 0x22C140u;
}
