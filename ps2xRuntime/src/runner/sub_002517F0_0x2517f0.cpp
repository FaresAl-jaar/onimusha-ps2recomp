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

// Function: sub_002517F0
// Address: 0x2517f0 - 0x25181c
void sub_002517F0_0x2517f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002517F0_0x2517f0");
#endif

    switch (ctx->pc) {
        case 0x251804u: goto label_251804;
        case 0x25180cu: goto label_25180c;
        default: break;
    }

    ctx->pc = 0x2517f0u;

    // 0x2517f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2517f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2517f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2517f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2517f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2517f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2517fc: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x2517FCu;
    SET_GPR_U32(ctx, 31, 0x251804u);
    ctx->pc = 0x251800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2517FCu;
    // 0x251800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x2517FCu, 0x251804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251804u;
label_251804:
    // 0x251804: 0xc094608  jal         func_251820
    ctx->pc = 0x251804u;
    SET_GPR_U32(ctx, 31, 0x25180Cu);
    ctx->pc = 0x251808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251804u;
    // 0x251808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251820u, 0x251804u, 0x25180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25180Cu;
label_25180c:
    // 0x25180c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25180cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x251810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251814: 0x8093f40  j           func_24FD00
    ctx->pc = 0x251814u;
    ctx->pc = 0x251818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251814u;
    // 0x251818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x25181Cu;
}
