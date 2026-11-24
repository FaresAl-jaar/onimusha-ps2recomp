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

// Function: sub_0020A230
// Address: 0x20a230 - 0x20a298
void sub_0020A230_0x20a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A230_0x20a230");
#endif

    switch (ctx->pc) {
        case 0x20a244u: goto label_20a244;
        case 0x20a278u: goto label_20a278;
        case 0x20a280u: goto label_20a280;
        default: break;
    }

    ctx->pc = 0x20a230u;

    // 0x20a230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a23c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20A23Cu;
    SET_GPR_U32(ctx, 31, 0x20A244u);
    ctx->pc = 0x20A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A23Cu;
    // 0x20a240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20A23Cu, 0x20A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A244u;
label_20a244:
    // 0x20a244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a24c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20A24Cu;
    {
        const bool branch_taken_0x20a24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A24Cu;
        // 0x20a250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a24c) {
            ctx->pc = 0x20A270u;
            goto label_20a270;
        }
    }
    ctx->pc = 0x20A254u;
    // 0x20a254: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20a254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20a258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a25c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a260: 0x24848328  addiu       $a0, $a0, -0x7CD8
    ctx->pc = 0x20a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935336));
    // 0x20a264: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20A264u;
    ctx->pc = 0x20A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A264u;
    // 0x20a268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20A26Cu;
    // 0x20a26c: 0x0  nop
    ctx->pc = 0x20a26cu;
    // NOP
label_20a270:
    // 0x20a270: 0xc08283e  jal         func_20A0F8
    ctx->pc = 0x20A270u;
    SET_GPR_U32(ctx, 31, 0x20A278u);
    ctx->pc = 0x20A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A0F8u, 0x20A270u, 0x20A278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A278u;
label_20a278:
    // 0x20a278: 0xc0828a6  jal         func_20A298
    ctx->pc = 0x20A278u;
    SET_GPR_U32(ctx, 31, 0x20A280u);
    ctx->pc = 0x20A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A278u;
    // 0x20a27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A298u, 0x20A278u, 0x20A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A280u;
label_20a280:
    // 0x20a280: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20a280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a284: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x20a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
    // 0x20a288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a290: 0x3e00008  jr          $ra
    ctx->pc = 0x20A290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A290u;
        // 0x20a294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A298u;
}
