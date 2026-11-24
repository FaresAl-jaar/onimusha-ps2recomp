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

// Function: sub_0022F4D0
// Address: 0x22f4d0 - 0x22f558
void sub_0022F4D0_0x22f4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F4D0_0x22f4d0");
#endif

    switch (ctx->pc) {
        case 0x22f50cu: goto label_22f50c;
        case 0x22f528u: goto label_22f528;
        case 0x22f530u: goto label_22f530;
        default: break;
    }

    ctx->pc = 0x22f4d0u;

    // 0x22f4d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22f4e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22f4e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22f4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22f4e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22f4e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x22f4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x22f4f0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22f4f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x22f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x22f4f8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x22f4f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f4fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x22f4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x22f500: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22f500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22f504: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x22F504u;
    SET_GPR_U32(ctx, 31, 0x22F50Cu);
    ctx->pc = 0x22F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F504u;
    // 0x22f508: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x22F504u, 0x22F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F50Cu;
label_22f50c:
    // 0x22f50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22f510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f514: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22f514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f518: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22f518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f51c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x22f51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f520: 0xc08bd56  jal         func_22F558
    ctx->pc = 0x22F520u;
    SET_GPR_U32(ctx, 31, 0x22F528u);
    ctx->pc = 0x22F524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F520u;
    // 0x22f524: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F558u, 0x22F520u, 0x22F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F528u;
label_22f528:
    // 0x22f528: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x22F528u;
    SET_GPR_U32(ctx, 31, 0x22F530u);
    ctx->pc = 0x22F52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F528u;
    // 0x22f52c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x22F528u, 0x22F530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F530u;
label_22f530:
    // 0x22f530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22f534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22f538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f53c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f53cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f540: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x22f540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22f544: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x22f544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f548: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22f548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22f54c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22f54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22f550: 0x3e00008  jr          $ra
    ctx->pc = 0x22F550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F550u;
        // 0x22f554: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F558u;
}
