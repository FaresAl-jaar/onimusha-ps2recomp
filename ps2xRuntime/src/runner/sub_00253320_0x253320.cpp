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

// Function: sub_00253320
// Address: 0x253320 - 0x253388
void sub_00253320_0x253320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253320_0x253320");
#endif

    switch (ctx->pc) {
        case 0x25334cu: goto label_25334c;
        case 0x253360u: goto label_253360;
        case 0x253368u: goto label_253368;
        default: break;
    }

    ctx->pc = 0x253320u;

    // 0x253320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x253324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25332c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25332cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x253330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x253330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253334: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x253334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x253338: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x253338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25333c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x253340: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x253340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x253344: 0xc094ba8  jal         func_252EA0
    ctx->pc = 0x253344u;
    SET_GPR_U32(ctx, 31, 0x25334Cu);
    ctx->pc = 0x253348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253344u;
    // 0x253348: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EA0u, 0x253344u, 0x25334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25334Cu;
label_25334c:
    // 0x25334c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25334cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x253350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253354: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x253354u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253358: 0xc094ce2  jal         func_253388
    ctx->pc = 0x253358u;
    SET_GPR_U32(ctx, 31, 0x253360u);
    ctx->pc = 0x25335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253358u;
    // 0x25335c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253388u, 0x253358u, 0x253360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253360u;
label_253360:
    // 0x253360: 0xc094bae  jal         func_252EB8
    ctx->pc = 0x253360u;
    SET_GPR_U32(ctx, 31, 0x253368u);
    ctx->pc = 0x253364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253360u;
    // 0x253364: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252EB8u, 0x253360u, 0x253368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253368u;
label_253368:
    // 0x253368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x253368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25336c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25336cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253370: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x253370u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253378: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x253378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25337c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25337cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253380: 0x3e00008  jr          $ra
    ctx->pc = 0x253380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253380u;
        // 0x253384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253388u;
}
