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

// Function: sub_0023F170
// Address: 0x23f170 - 0x23f228
void sub_0023F170_0x23f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F170_0x23f170");
#endif

    switch (ctx->pc) {
        case 0x23f1acu: goto label_23f1ac;
        case 0x23f1d4u: goto label_23f1d4;
        case 0x23f200u: goto label_23f200;
        default: break;
    }

    ctx->pc = 0x23f170u;

    // 0x23f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f174: 0x24060a28  addiu       $a2, $zero, 0xA28
    ctx->pc = 0x23f174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2600));
    // 0x23f178: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23f17c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23f17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f184: 0x2410fff8  addiu       $s0, $zero, -0x8
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x23f188: 0x26620007  addiu       $v0, $s3, 0x7
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x23f18c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f190: 0x509024  and         $s2, $v0, $s0
    ctx->pc = 0x23f190u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x23f194: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f19c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23f19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23f1a4: 0xc049590  jal         func_125640
    ctx->pc = 0x23F1A4u;
    SET_GPR_U32(ctx, 31, 0x23F1ACu);
    ctx->pc = 0x23F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1A4u;
    // 0x23f1a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F1A4u, 0x23F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1ACu;
label_23f1ac:
    // 0x23f1ac: 0x2405101c  addiu       $a1, $zero, 0x101C
    ctx->pc = 0x23f1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4124));
    // 0x23f1b0: 0x26440a2f  addiu       $a0, $s2, 0xA2F
    ctx->pc = 0x23f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2607));
    // 0x23f1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23f1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1b8: 0x909024  and         $s2, $a0, $s0
    ctx->pc = 0x23f1b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x23f1bc: 0x2643101c  addiu       $v1, $s2, 0x101C
    ctx->pc = 0x23f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4124));
    // 0x23f1c0: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x23f1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x23f1c4: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x23F1C4u;
    {
        const bool branch_taken_0x23f1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1C4u;
        // 0x23f1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1c4) {
            ctx->pc = 0x23F20Cu;
            goto label_23f20c;
        }
    }
    ctx->pc = 0x23F1CCu;
    // 0x23f1cc: 0xc090a90  jal         func_242A40
    ctx->pc = 0x23F1CCu;
    SET_GPR_U32(ctx, 31, 0x23F1D4u);
    ctx->pc = 0x242A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A40u, 0x23F1CCu, 0x23F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1D4u;
label_23f1d4:
    // 0x23f1d4: 0x2404ffe0  addiu       $a0, $zero, -0x20
    ctx->pc = 0x23f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x23f1d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x23f1d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1dc: 0x26630023  addiu       $v1, $s3, 0x23
    ctx->pc = 0x23f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 35));
    // 0x23f1e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23f1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23f1e4: 0x266401e4  addiu       $a0, $s3, 0x1E4
    ctx->pc = 0x23f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 484));
    // 0x23f1e8: 0xae6701b0  sw          $a3, 0x1B0($s3)
    ctx->pc = 0x23f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 432), GPR_U32(ctx, 7));
    // 0x23f1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1f0: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F1F0u;
    {
        const bool branch_taken_0x23f1f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F1F0u;
        // 0x23f1f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1f0) {
            ctx->pc = 0x23F20Cu;
            goto label_23f20c;
        }
    }
    ctx->pc = 0x23F1F8u;
    // 0x23f1f8: 0xc049590  jal         func_125640
    ctx->pc = 0x23F1F8u;
    SET_GPR_U32(ctx, 31, 0x23F200u);
    ctx->pc = 0x23F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F1F8u;
    // 0x23f1fc: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x23F1F8u, 0x23F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F200u;
label_23f200:
    // 0x23f200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f204: 0xa26301a4  sb          $v1, 0x1A4($s3)
    ctx->pc = 0x23f204u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 420), (uint8_t)GPR_U32(ctx, 3));
    // 0x23f208: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x23f208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23f20c:
    // 0x23f20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f218: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23f218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f21c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23f21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f220: 0x3e00008  jr          $ra
    ctx->pc = 0x23F220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F220u;
        // 0x23f224: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F228u;
}
