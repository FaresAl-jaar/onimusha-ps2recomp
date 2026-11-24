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

// Function: sub_00230978
// Address: 0x230978 - 0x2309d0
void sub_00230978_0x230978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230978_0x230978");
#endif

    switch (ctx->pc) {
        case 0x23099cu: goto label_23099c;
        case 0x2309acu: goto label_2309ac;
        case 0x2309b4u: goto label_2309b4;
        default: break;
    }

    ctx->pc = 0x230978u;

    // 0x230978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23097c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230980: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230984: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23098c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23098cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230990: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230994: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230994u;
    SET_GPR_U32(ctx, 31, 0x23099Cu);
    ctx->pc = 0x230998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230994u;
    // 0x230998: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230994u, 0x23099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23099Cu;
label_23099c:
    // 0x23099c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23099cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2309a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309a4: 0xc08c274  jal         func_2309D0
    ctx->pc = 0x2309A4u;
    SET_GPR_U32(ctx, 31, 0x2309ACu);
    ctx->pc = 0x2309A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309A4u;
    // 0x2309a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2309D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2309D0u, 0x2309A4u, 0x2309ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309ACu;
label_2309ac:
    // 0x2309ac: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x2309ACu;
    SET_GPR_U32(ctx, 31, 0x2309B4u);
    ctx->pc = 0x2309B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309ACu;
    // 0x2309b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x2309ACu, 0x2309B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309B4u;
label_2309b4:
    // 0x2309b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2309b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2309b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2309b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2309bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2309c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2309c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2309c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2309c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2309C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2309CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309C8u;
        // 0x2309cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2309C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2309D0u;
}
