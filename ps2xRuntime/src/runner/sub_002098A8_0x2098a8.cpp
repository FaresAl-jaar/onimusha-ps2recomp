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

// Function: sub_002098A8
// Address: 0x2098a8 - 0x209920
void sub_002098A8_0x2098a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002098A8_0x2098a8");
#endif

    switch (ctx->pc) {
        case 0x2098d8u: goto label_2098d8;
        case 0x2098ecu: goto label_2098ec;
        case 0x209900u: goto label_209900;
        default: break;
    }

    ctx->pc = 0x2098a8u;

    // 0x2098a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2098a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2098ac: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2098acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2098b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2098b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098b4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2098b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2098b8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2098b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2098bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2098bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098c0: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2098c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2098c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2098c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098c8: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2098c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2098cc: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2098ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2098d0: 0xc0821e6  jal         func_208798
    ctx->pc = 0x2098D0u;
    SET_GPR_U32(ctx, 31, 0x2098D8u);
    ctx->pc = 0x2098D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098D0u;
    // 0x2098d4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208798u, 0x2098D0u, 0x2098D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098D8u;
label_2098d8:
    // 0x2098d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2098d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2098dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2098e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098e4: 0xc0821f0  jal         func_2087C0
    ctx->pc = 0x2098E4u;
    SET_GPR_U32(ctx, 31, 0x2098ECu);
    ctx->pc = 0x2098E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098E4u;
    // 0x2098e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2087C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2087C0u, 0x2098E4u, 0x2098ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2098ECu;
label_2098ec:
    // 0x2098ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2098ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2098f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2098f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2098f8: 0xc08994c  jal         func_226530
    ctx->pc = 0x2098F8u;
    SET_GPR_U32(ctx, 31, 0x209900u);
    ctx->pc = 0x2098FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098F8u;
    // 0x2098fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226530u, 0x2098F8u, 0x209900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209900u;
label_209900:
    // 0x209900: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x209900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x209904: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x209908: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x209908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20990c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x20990cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x209910: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x209910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x209914: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x209914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x209918: 0x3e00008  jr          $ra
    ctx->pc = 0x209918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209918u;
        // 0x20991c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209920u;
}
