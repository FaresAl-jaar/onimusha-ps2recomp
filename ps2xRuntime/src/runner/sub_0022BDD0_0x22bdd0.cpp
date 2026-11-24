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

// Function: sub_0022BDD0
// Address: 0x22bdd0 - 0x22be14
void sub_0022BDD0_0x22bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BDD0_0x22bdd0");
#endif

    switch (ctx->pc) {
        case 0x22bde4u: goto label_22bde4;
        default: break;
    }

    ctx->pc = 0x22bdd0u;

    // 0x22bdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22bdd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22bdd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22bdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22bddc: 0xc049f18  jal         func_127C60
    ctx->pc = 0x22BDDCu;
    SET_GPR_U32(ctx, 31, 0x22BDE4u);
    ctx->pc = 0x22BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BDDCu;
    // 0x22bde0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x22BDDCu, 0x22BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BDE4u;
label_22bde4:
    // 0x22bde4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22bde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22bde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bdec: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x22bdecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x22bdf0: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x22bdf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x22bdf4: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22bdf4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22bdf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22bdf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bdfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22bdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be00: 0x24c6b2fc  addiu       $a2, $a2, -0x4D04
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947580));
    // 0x22be04: 0x24e7b2fe  addiu       $a3, $a3, -0x4D02
    ctx->pc = 0x22be04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947582));
    // 0x22be08: 0x2508b300  addiu       $t0, $t0, -0x4D00
    ctx->pc = 0x22be08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947584));
    // 0x22be0c: 0x808ac64  j           func_22B190
    ctx->pc = 0x22BE0Cu;
    ctx->pc = 0x22BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22BE0Cu;
    // 0x22be10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B190u;
    sub_0022B190_0x22b190(rdram, ctx, runtime); return;
    ctx->pc = 0x22BE14u;
}
