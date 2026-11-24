#include <cstdio>
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

// Function: sub_001D0350
// Address: 0x1d0350 - 0x1d0404
void sub_001D0350_0x1d0350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0350_0x1d0350");
#endif

    switch (ctx->pc) {
        case 0x1d03a0u: goto label_1d03a0;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03c0u: goto label_1d03c0;
        case 0x1d03d0u: goto label_1d03d0;
        case 0x1d03f8u: goto label_1d03f8;
        default: break;
    }

    ctx->pc = 0x1d0350u;

    // 0x1d0350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    { static uint32_t n=0; ++n; if (n<=5||(n%300)==0) fprintf(stderr,"[mode 1d0350] n=%u a0=0x%x b3024=0x%x b3020=0x%x flag621=0x%x\n",n,GPR_U32(ctx,4),(unsigned)READ8(GPR_U32(ctx,4)+0x3024u),(unsigned)READ8(GPR_U32(ctx,4)+0x3020u),(unsigned)READ8(0x86c621u)); }
    // 0x1d0358: 0x90833024  lbu         $v1, 0x3024($a0)
    ctx->pc = 0x1d0358u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12324)));
    // 0x1d035c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D035Cu;
    {
        const bool branch_taken_0x1d035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d035c) {
            ctx->pc = 0x1D03D8u;
            goto label_1d03d8;
        }
    }
    ctx->pc = 0x1D0364u;
    // 0x1d0364: 0x90853020  lbu         $a1, 0x3020($a0)
    ctx->pc = 0x1d0364u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12320)));
    // 0x1d0368: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d0368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d036c: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D036Cu;
    {
        const bool branch_taken_0x1d036c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D036Cu;
        // 0x1d0370: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d036c) {
            ctx->pc = 0x1D03C8u;
            goto label_1d03c8;
        }
    }
    ctx->pc = 0x1D0374u;
    // 0x1d0374: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D0374u;
    {
        const bool branch_taken_0x1d0374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0374) {
            ctx->pc = 0x1D03B8u;
            goto label_1d03b8;
        }
    }
    ctx->pc = 0x1D037Cu;
    // 0x1d037c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0380: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D0380u;
    {
        const bool branch_taken_0x1d0380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D0384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0380u;
        // 0x1d0384: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0380) {
            ctx->pc = 0x1D03A8u;
            goto label_1d03a8;
        }
    }
    ctx->pc = 0x1D0388u;
    // 0x1d0388: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0388u;
    {
        const bool branch_taken_0x1d0388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d0388) {
            ctx->pc = 0x1D0398u;
            goto label_1d0398;
        }
    }
    ctx->pc = 0x1D0390u;
    // 0x1d0390: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0390u;
    {
        const bool branch_taken_0x1d0390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0390) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D0398u;
label_1d0398:
    // 0x1d0398: 0xc073e48  jal         func_1CF920
    ctx->pc = 0x1D0398u;
    SET_GPR_U32(ctx, 31, 0x1D03A0u);
    ctx->pc = 0x1CF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF920u, 0x1D0398u, 0x1D03A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03A0u;
label_1d03a0:
    // 0x1d03a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D03A0u;
    {
        const bool branch_taken_0x1d03a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03a0) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03A8u;
label_1d03a8:
    // 0x1d03a8: 0xc073d98  jal         func_1CF660
    ctx->pc = 0x1D03A8u;
    SET_GPR_U32(ctx, 31, 0x1D03B0u);
    ctx->pc = 0x1CF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF660u, 0x1D03A8u, 0x1D03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03B0u;
label_1d03b0:
    // 0x1d03b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D03B0u;
    {
        const bool branch_taken_0x1d03b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03b0) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03B8u;
label_1d03b8:
    // 0x1d03b8: 0xc073fa8  jal         func_1CFEA0
    ctx->pc = 0x1D03B8u;
    SET_GPR_U32(ctx, 31, 0x1D03C0u);
    ctx->pc = 0x1CFEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFEA0u, 0x1D03B8u, 0x1D03C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03C0u;
label_1d03c0:
    // 0x1d03c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D03C0u;
    {
        const bool branch_taken_0x1d03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03c0) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03C8u;
label_1d03c8:
    // 0x1d03c8: 0xc073e04  jal         func_1CF810
    ctx->pc = 0x1D03C8u;
    SET_GPR_U32(ctx, 31, 0x1D03D0u);
    ctx->pc = 0x1CF810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF810u, 0x1D03C8u, 0x1D03D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03D0u;
label_1d03d0:
    // 0x1d03d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D03D0u;
    {
        const bool branch_taken_0x1d03d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03d0) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03D8u;
label_1d03d8:
    // 0x1d03d8: 0x90843020  lbu         $a0, 0x3020($a0)
    ctx->pc = 0x1d03d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12320)));
    // 0x1d03dc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d03e0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D03E0u;
    {
        const bool branch_taken_0x1d03e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d03e0) {
            ctx->pc = 0x1D03F0u;
            goto label_1d03f0;
        }
    }
    ctx->pc = 0x1D03E8u;
    // 0x1d03e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D03E8u;
    {
        const bool branch_taken_0x1d03e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d03e8) {
            ctx->pc = 0x1D03F8u;
            goto label_1d03f8;
        }
    }
    ctx->pc = 0x1D03F0u;
label_1d03f0:
    // 0x1d03f0: 0xc07341c  jal         func_1CD070
    ctx->pc = 0x1D03F0u;
    SET_GPR_U32(ctx, 31, 0x1D03F8u);
    ctx->pc = 0x1CD070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD070u, 0x1D03F0u, 0x1D03F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D03F8u;
label_1d03f8:
    // 0x1d03f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d03f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d03fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D03FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D03FCu;
        // 0x1d0400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D03FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0404u;
}
