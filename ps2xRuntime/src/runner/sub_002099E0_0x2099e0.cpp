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

// Function: sub_002099E0
// Address: 0x2099e0 - 0x209a2c
void sub_002099E0_0x2099e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099E0_0x2099e0");
#endif

    switch (ctx->pc) {
        case 0x209a04u: goto label_209a04;
        default: break;
    }

    ctx->pc = 0x2099e0u;

    // 0x2099e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2099e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2099e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2099e8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2099e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2099ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2099ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2099f0: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x2099f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2099f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2099f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2099f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2099f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2099fc: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2099FCu;
    SET_GPR_U32(ctx, 31, 0x209A04u);
    ctx->pc = 0x209A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2099FCu;
    // 0x209a00: 0x30f200ff  andi        $s2, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2099FCu, 0x209A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A04u;
label_209a04:
    // 0x209a04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x209a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209a08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x209a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a0c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x209a0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209a14: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a24: 0x8089960  j           func_226580
    ctx->pc = 0x209A24u;
    ctx->pc = 0x209A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A24u;
    // 0x209a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    sub_00226580_0x226580(rdram, ctx, runtime); return;
    ctx->pc = 0x209A2Cu;
}
