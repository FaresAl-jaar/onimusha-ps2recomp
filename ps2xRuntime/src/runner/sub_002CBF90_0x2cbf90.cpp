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

// Function: sub_002CBF90
// Address: 0x2cbf90 - 0x2cc024
void sub_002CBF90_0x2cbf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBF90_0x2cbf90");
#endif

    switch (ctx->pc) {
        case 0x2cc010u: goto label_2cc010;
        default: break;
    }

    ctx->pc = 0x2cbf90u;

    // 0x2cbf90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cbf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cbf94: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cbf94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cbf98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbf9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbfa0: 0xa3a20014  sb          $v0, 0x14($sp)
    ctx->pc = 0x2cbfa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cbfa4: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2cbfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2cbfa8: 0x240204f0  addiu       $v0, $zero, 0x4F0
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1264));
    // 0x2cbfac: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x2cbfacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cbfb0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2cbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2cbfb4: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cbfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cbfb8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cbfbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cbfbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfc0: 0xaf828a2c  sw          $v0, -0x75D4($gp)
    ctx->pc = 0x2cbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    // 0x2cbfc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cbfc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfc8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2cbfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2cbfcc: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cbfccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cbfd0: 0x24426b00  addiu       $v0, $v0, 0x6B00
    ctx->pc = 0x2cbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27392));
    // 0x2cbfd4: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cbfd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cbfd8: 0xaf828a34  sw          $v0, -0x75CC($gp)
    ctx->pc = 0x2cbfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 2));
    // 0x2cbfdc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cbfdcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfe0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2cbfe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfe4: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x2cbfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbfe8: 0xa3a00012  sb          $zero, 0x12($sp)
    ctx->pc = 0x2cbfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbfec: 0xa3a00013  sb          $zero, 0x13($sp)
    ctx->pc = 0x2cbfecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbff0: 0xa3a00015  sb          $zero, 0x15($sp)
    ctx->pc = 0x2cbff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbff4: 0xa3a00016  sb          $zero, 0x16($sp)
    ctx->pc = 0x2cbff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbff8: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x2cbff8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cbffc: 0xa3a00018  sb          $zero, 0x18($sp)
    ctx->pc = 0x2cbffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc000: 0xa3a00019  sb          $zero, 0x19($sp)
    ctx->pc = 0x2cc000u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 25), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cc004: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2cc004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x2cc008: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CC008u;
    SET_GPR_U32(ctx, 31, 0x2CC010u);
    ctx->pc = 0x2CC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC008u;
    // 0x2cc00c: 0xaf808a30  sw          $zero, -0x75D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CC008u, 0x2CC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC010u;
label_2cc010:
    // 0x2cc010: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cc010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cc014: 0xaf808a34  sw          $zero, -0x75CC($gp)
    ctx->pc = 0x2cc014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
    // 0x2cc018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc01c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC01Cu;
        // 0x2cc020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC024u;
}
