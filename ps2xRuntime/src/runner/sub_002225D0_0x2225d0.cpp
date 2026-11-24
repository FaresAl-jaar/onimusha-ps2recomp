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

// Function: sub_002225D0
// Address: 0x2225d0 - 0x222628
void sub_002225D0_0x2225d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002225D0_0x2225d0");
#endif

    switch (ctx->pc) {
        case 0x2225fcu: goto label_2225fc;
        case 0x222608u: goto label_222608;
        default: break;
    }

    ctx->pc = 0x2225d0u;

    // 0x2225d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2225d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2225d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2225d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2225d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2225d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2225dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2225dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2225e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2225e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2225e4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2225e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2225E8u;
    {
        const bool branch_taken_0x2225e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225E8u;
        // 0x2225ec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225e8) {
            ctx->pc = 0x222614u;
            goto label_222614;
        }
    }
    ctx->pc = 0x2225F0u;
    // 0x2225f0: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x2225f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2225f4: 0xc04b098  jal         func_12C260
    ctx->pc = 0x2225F4u;
    SET_GPR_U32(ctx, 31, 0x2225FCu);
    ctx->pc = 0x2225F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2225F4u;
    // 0x2225f8: 0xde040130  ld          $a0, 0x130($s0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x2225F4u, 0x2225FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2225FCu;
label_2225fc:
    // 0x2225fc: 0xde250008  ld          $a1, 0x8($s1)
    ctx->pc = 0x2225fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x222600: 0xc04b1a2  jal         func_12C688
    ctx->pc = 0x222600u;
    SET_GPR_U32(ctx, 31, 0x222608u);
    ctx->pc = 0x222604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222600u;
    // 0x222604: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C688u, 0x222600u, 0x222608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222608u;
label_222608:
    // 0x222608: 0xde030128  ld          $v1, 0x128($s0)
    ctx->pc = 0x222608u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x22260c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x22260cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x222610: 0xfe030128  sd          $v1, 0x128($s0)
    ctx->pc = 0x222610u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 3));
label_222614:
    // 0x222614: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x222614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222618: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x222618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22261c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22261cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222620: 0x3e00008  jr          $ra
    ctx->pc = 0x222620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222620u;
        // 0x222624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222628u;
}
