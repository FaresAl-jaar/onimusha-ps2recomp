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

// Function: sub_00251E90
// Address: 0x251e90 - 0x251ef8
void sub_00251E90_0x251e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251E90_0x251e90");
#endif

    switch (ctx->pc) {
        case 0x251ebcu: goto label_251ebc;
        case 0x251ed0u: goto label_251ed0;
        case 0x251ed8u: goto label_251ed8;
        default: break;
    }

    ctx->pc = 0x251e90u;

    // 0x251e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x251e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x251e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x251e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x251ea0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x251ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ea4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x251ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x251ea8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x251ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251eac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x251eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x251eb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x251eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x251eb4: 0xc093f3a  jal         func_24FCE8
    ctx->pc = 0x251EB4u;
    SET_GPR_U32(ctx, 31, 0x251EBCu);
    ctx->pc = 0x251EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EB4u;
    // 0x251eb8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FCE8u, 0x251EB4u, 0x251EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251EBCu;
label_251ebc:
    // 0x251ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x251ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ec4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x251ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ec8: 0xc0947be  jal         func_251EF8
    ctx->pc = 0x251EC8u;
    SET_GPR_U32(ctx, 31, 0x251ED0u);
    ctx->pc = 0x251ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EC8u;
    // 0x251ecc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251EF8u, 0x251EC8u, 0x251ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251ED0u;
label_251ed0:
    // 0x251ed0: 0xc093f40  jal         func_24FD00
    ctx->pc = 0x251ED0u;
    SET_GPR_U32(ctx, 31, 0x251ED8u);
    ctx->pc = 0x251ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251ED0u;
    // 0x251ed4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FD00u, 0x251ED0u, 0x251ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251ED8u;
label_251ed8:
    // 0x251ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x251ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x251edc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x251edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x251ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251ee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x251ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251ee8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x251ee8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x251eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x251eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x251EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EF0u;
        // 0x251ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251EF8u;
}
