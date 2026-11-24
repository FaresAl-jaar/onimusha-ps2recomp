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

// Function: sub_0021A228
// Address: 0x21a228 - 0x21a288
void sub_0021A228_0x21a228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A228_0x21a228");
#endif

    switch (ctx->pc) {
        case 0x21a244u: goto label_21a244;
        default: break;
    }

    ctx->pc = 0x21a228u;

    // 0x21a228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21a22c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21a22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21a230: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21a230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21a238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21a23c: 0xc08690e  jal         func_21A438
    ctx->pc = 0x21A23Cu;
    SET_GPR_U32(ctx, 31, 0x21A244u);
    ctx->pc = 0x21A240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A23Cu;
    // 0x21a240: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A438u, 0x21A23Cu, 0x21A244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A244u;
label_21a244:
    // 0x21a244: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A244u;
    {
        const bool branch_taken_0x21a244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a244) {
            ctx->pc = 0x21A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A244u;
            // 0x21a248: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A25Cu;
            goto label_21a25c;
        }
    }
    ctx->pc = 0x21A24Cu;
    // 0x21a24c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x21a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x21a250: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21A250u;
    {
        const bool branch_taken_0x21a250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a250) {
            ctx->pc = 0x21A254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A250u;
            // 0x21a254: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A268u;
            goto label_21a268;
        }
    }
    ctx->pc = 0x21A258u;
    // 0x21a258: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21a258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_21a25c:
    // 0x21a25c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21A25Cu;
    {
        const bool branch_taken_0x21a25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A25Cu;
        // 0x21a260: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a25c) {
            ctx->pc = 0x21A274u;
            goto label_21a274;
        }
    }
    ctx->pc = 0x21A264u;
    // 0x21a264: 0x0  nop
    ctx->pc = 0x21a264u;
    // NOP
label_21a268:
    // 0x21a268: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a26c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x21a270: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x21a270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_21a274:
    // 0x21a274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a278: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21a27c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a280: 0x3e00008  jr          $ra
    ctx->pc = 0x21A280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A288u;
}
