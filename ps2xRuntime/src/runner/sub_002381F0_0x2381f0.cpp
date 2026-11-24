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

// Function: sub_002381F0
// Address: 0x2381f0 - 0x238238
void sub_002381F0_0x2381f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002381F0_0x2381f0");
#endif

    switch (ctx->pc) {
        case 0x23820cu: goto label_23820c;
        case 0x238218u: goto label_238218;
        case 0x238220u: goto label_238220;
        default: break;
    }

    ctx->pc = 0x2381f0u;

    // 0x2381f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2381f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2381f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2381f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2381f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2381f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2381fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238204: 0xc08e2bc  jal         func_238AF0
    ctx->pc = 0x238204u;
    SET_GPR_U32(ctx, 31, 0x23820Cu);
    ctx->pc = 0x238208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238204u;
    // 0x238208: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AF0u, 0x238204u, 0x23820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23820Cu;
label_23820c:
    // 0x23820c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23820cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238210: 0xc08e08e  jal         func_238238
    ctx->pc = 0x238210u;
    SET_GPR_U32(ctx, 31, 0x238218u);
    ctx->pc = 0x238214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238210u;
    // 0x238214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238238u, 0x238210u, 0x238218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238218u;
label_238218:
    // 0x238218: 0xc08e2c2  jal         func_238B08
    ctx->pc = 0x238218u;
    SET_GPR_U32(ctx, 31, 0x238220u);
    ctx->pc = 0x23821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238218u;
    // 0x23821c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238B08u, 0x238218u, 0x238220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238220u;
label_238220:
    // 0x238220: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238224: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x238224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23822c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23822cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238230: 0x3e00008  jr          $ra
    ctx->pc = 0x238230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238230u;
        // 0x238234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238238u;
}
