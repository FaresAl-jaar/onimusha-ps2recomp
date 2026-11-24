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

// Function: sub_0024BDC0
// Address: 0x24bdc0 - 0x24bdfc
void sub_0024BDC0_0x24bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BDC0_0x24bdc0");
#endif

    switch (ctx->pc) {
        case 0x24bddcu: goto label_24bddc;
        case 0x24bde8u: goto label_24bde8;
        default: break;
    }

    ctx->pc = 0x24bdc0u;

    // 0x24bdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24bdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bdc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bdc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bdcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24bdccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24bdd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24bdd4: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24BDD4u;
    SET_GPR_U32(ctx, 31, 0x24BDDCu);
    ctx->pc = 0x24BDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDD4u;
    // 0x24bdd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24BDD4u, 0x24BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDDCu;
label_24bddc:
    // 0x24bddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bde0: 0xc092f80  jal         func_24BE00
    ctx->pc = 0x24BDE0u;
    SET_GPR_U32(ctx, 31, 0x24BDE8u);
    ctx->pc = 0x24BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDE0u;
    // 0x24bde4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BE00u, 0x24BDE0u, 0x24BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BDE8u;
label_24bde8:
    // 0x24bde8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bde8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bdec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24bdecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bdf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24bdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24bdf4: 0x8092ff0  j           func_24BFC0
    ctx->pc = 0x24BDF4u;
    ctx->pc = 0x24BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BDF4u;
    // 0x24bdf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    sub_0024BFC0_0x24bfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x24BDFCu;
}
