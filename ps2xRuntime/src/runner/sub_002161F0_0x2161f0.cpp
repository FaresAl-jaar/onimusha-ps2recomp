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

// Function: sub_002161F0
// Address: 0x2161f0 - 0x21623c
void sub_002161F0_0x2161f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002161F0_0x2161f0");
#endif

    switch (ctx->pc) {
        case 0x21620cu: goto label_21620c;
        case 0x216224u: goto label_216224;
        default: break;
    }

    ctx->pc = 0x2161f0u;

    // 0x2161f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2161f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2161f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2161f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2161f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2161f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2161fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2161fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x216200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x216204: 0xc085890  jal         func_216240
    ctx->pc = 0x216204u;
    SET_GPR_U32(ctx, 31, 0x21620Cu);
    ctx->pc = 0x216208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216204u;
    // 0x216208: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216240u, 0x216204u, 0x21620Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21620Cu;
label_21620c:
    // 0x21620c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21620cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216214: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x216214u;
    {
        const bool branch_taken_0x216214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x216218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216214u;
        // 0x216218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216214) {
            ctx->pc = 0x216228u;
            goto label_216228;
        }
    }
    ctx->pc = 0x21621Cu;
    // 0x21621c: 0xc085906  jal         func_216418
    ctx->pc = 0x21621Cu;
    SET_GPR_U32(ctx, 31, 0x216224u);
    ctx->pc = 0x216418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216418u, 0x21621Cu, 0x216224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216224u;
label_216224:
    // 0x216224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216228:
    // 0x216228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x216228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21622c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21622cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x216230: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x216230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216234: 0x3e00008  jr          $ra
    ctx->pc = 0x216234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216234u;
        // 0x216238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21623Cu;
}
