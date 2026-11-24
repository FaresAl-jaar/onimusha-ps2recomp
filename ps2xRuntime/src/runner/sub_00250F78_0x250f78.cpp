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

// Function: sub_00250F78
// Address: 0x250f78 - 0x250fc4
void sub_00250F78_0x250f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250F78_0x250f78");
#endif

    switch (ctx->pc) {
        case 0x250f9cu: goto label_250f9c;
        case 0x250facu: goto label_250fac;
        default: break;
    }

    ctx->pc = 0x250f78u;

    // 0x250f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x250f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x250f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x250f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x250f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x250f88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x250f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250f8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x250f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x250f90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x250f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x250f94: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x250F94u;
    SET_GPR_U32(ctx, 31, 0x250F9Cu);
    ctx->pc = 0x250F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F94u;
    // 0x250f98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x250F94u, 0x250F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F9Cu;
label_250f9c:
    // 0x250f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x250f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250fa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x250fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250fa4: 0xc0943f2  jal         func_250FC8
    ctx->pc = 0x250FA4u;
    SET_GPR_U32(ctx, 31, 0x250FACu);
    ctx->pc = 0x250FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FA4u;
    // 0x250fa8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250FC8u, 0x250FA4u, 0x250FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250FACu;
label_250fac:
    // 0x250fac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x250facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250fb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x250fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x250fb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x250fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250fb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x250fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x250fbc: 0x8093f40  j           func_24FD00
    ctx->pc = 0x250FBCu;
    ctx->pc = 0x250FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FBCu;
    // 0x250fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    sub_0024FD00_0x24fd00(rdram, ctx, runtime); return;
    ctx->pc = 0x250FC4u;
}
