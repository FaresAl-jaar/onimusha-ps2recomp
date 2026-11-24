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

// Function: sub_0021D640
// Address: 0x21d640 - 0x21d6a4
void sub_0021D640_0x21d640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D640_0x21d640");
#endif

    switch (ctx->pc) {
        case 0x21d65cu: goto label_21d65c;
        default: break;
    }

    ctx->pc = 0x21d640u;

    // 0x21d640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21d640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21d644: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21d644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d648: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x21d648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x21d64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21d650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21d654: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x21D654u;
    SET_GPR_U32(ctx, 31, 0x21D65Cu);
    ctx->pc = 0x21D658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D654u;
    // 0x21d658: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x21D654u, 0x21D65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D65Cu;
label_21d65c:
    // 0x21d65c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d660: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d664: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x21d664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x21d668: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x21d668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x21d66c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21d66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21d670: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21d670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21d674: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x21d674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21d678: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x21d678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21d67c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x21d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21d680: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x21d680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x21d684: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x21d684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x21d688: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x21d688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x21d68c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x21d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x21d690: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x21d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x21d694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21d694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d69c: 0x3e00008  jr          $ra
    ctx->pc = 0x21D69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D69Cu;
        // 0x21d6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D6A4u;
}
