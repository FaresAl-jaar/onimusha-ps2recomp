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

// Function: sub_002397C0
// Address: 0x2397c0 - 0x239820
void sub_002397C0_0x2397c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002397C0_0x2397c0");
#endif

    switch (ctx->pc) {
        case 0x2397e8u: goto label_2397e8;
        case 0x2397fcu: goto label_2397fc;
        default: break;
    }

    ctx->pc = 0x2397c0u;

    // 0x2397c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2397c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2397c4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2397c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2397c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2397c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2397cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2397ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2397d0: 0x2450ef88  addiu       $s0, $v0, -0x1078
    ctx->pc = 0x2397d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963080));
    // 0x2397d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2397d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2397d8: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2397dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2397dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2397e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2397e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2397e4: 0x0  nop
    ctx->pc = 0x2397e4u;
    // NOP
label_2397e8:
    // 0x2397e8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2397e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2397ec: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2397ECu;
    {
        const bool branch_taken_0x2397ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2397ec) {
            ctx->pc = 0x2397F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2397ECu;
            // 0x2397f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239800u;
            goto label_239800;
        }
    }
    ctx->pc = 0x2397F4u;
    // 0x2397f4: 0xc08e570  jal         func_2395C0
    ctx->pc = 0x2397F4u;
    SET_GPR_U32(ctx, 31, 0x2397FCu);
    ctx->pc = 0x2397F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397F4u;
    // 0x2397f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2395C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395C0u, 0x2397F4u, 0x2397FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2397FCu;
label_2397fc:
    // 0x2397fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2397fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_239800:
    // 0x239800: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x239800u;
    {
        const bool branch_taken_0x239800 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x239804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239800u;
        // 0x239804: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239800) {
            ctx->pc = 0x2397E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2397e8;
        }
    }
    ctx->pc = 0x239808u;
    // 0x239808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23980c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23980cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x239810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239814: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x239818: 0x3e00008  jr          $ra
    ctx->pc = 0x239818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239818u;
        // 0x23981c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239820u;
}
