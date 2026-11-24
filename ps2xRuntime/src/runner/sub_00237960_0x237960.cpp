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

// Function: sub_00237960
// Address: 0x237960 - 0x2379ac
void sub_00237960_0x237960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237960_0x237960");
#endif

    switch (ctx->pc) {
        case 0x237984u: goto label_237984;
        case 0x237994u: goto label_237994;
        default: break;
    }

    ctx->pc = 0x237960u;

    // 0x237960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x237960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x237964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x237968: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x237968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23796c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x237970: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x237970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x237974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x237978: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x237978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23797c: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x23797Cu;
    SET_GPR_U32(ctx, 31, 0x237984u);
    ctx->pc = 0x237980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23797Cu;
    // 0x237980: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x23797Cu, 0x237984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237984u;
label_237984:
    // 0x237984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23798c: 0xc08de6c  jal         func_2379B0
    ctx->pc = 0x23798Cu;
    SET_GPR_U32(ctx, 31, 0x237994u);
    ctx->pc = 0x237990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23798Cu;
    // 0x237990: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2379B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2379B0u, 0x23798Cu, 0x237994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237994u;
label_237994:
    // 0x237994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x237998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x237998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23799c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23799cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2379a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2379a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2379a4: 0x808e2c2  j           func_238B08
    ctx->pc = 0x2379A4u;
    ctx->pc = 0x2379A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379A4u;
    // 0x2379a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    sub_00238B08_0x238b08(rdram, ctx, runtime); return;
    ctx->pc = 0x2379ACu;
}
