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

// Function: sub_0024B430
// Address: 0x24b430 - 0x24b478
void sub_0024B430_0x24b430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B430_0x24b430");
#endif

    switch (ctx->pc) {
        case 0x24b44cu: goto label_24b44c;
        case 0x24b458u: goto label_24b458;
        case 0x24b460u: goto label_24b460;
        default: break;
    }

    ctx->pc = 0x24b430u;

    // 0x24b430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b43c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b444: 0xc092fee  jal         func_24BFB8
    ctx->pc = 0x24B444u;
    SET_GPR_U32(ctx, 31, 0x24B44Cu);
    ctx->pc = 0x24B448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B444u;
    // 0x24b448: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFB8u, 0x24B444u, 0x24B44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B44Cu;
label_24b44c:
    // 0x24b44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b450: 0xc092d1e  jal         func_24B478
    ctx->pc = 0x24B450u;
    SET_GPR_U32(ctx, 31, 0x24B458u);
    ctx->pc = 0x24B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B450u;
    // 0x24b454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B478u, 0x24B450u, 0x24B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B458u;
label_24b458:
    // 0x24b458: 0xc092ff0  jal         func_24BFC0
    ctx->pc = 0x24B458u;
    SET_GPR_U32(ctx, 31, 0x24B460u);
    ctx->pc = 0x24B45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B458u;
    // 0x24b45c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BFC0u, 0x24B458u, 0x24B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B460u;
label_24b460:
    // 0x24b460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24b464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b470: 0x3e00008  jr          $ra
    ctx->pc = 0x24B470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B470u;
        // 0x24b474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B478u;
}
