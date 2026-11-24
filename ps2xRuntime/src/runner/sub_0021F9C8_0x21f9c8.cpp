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

// Function: sub_0021F9C8
// Address: 0x21f9c8 - 0x21fa14
void sub_0021F9C8_0x21f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F9C8_0x21f9c8");
#endif

    switch (ctx->pc) {
        case 0x21f9ecu: goto label_21f9ec;
        default: break;
    }

    ctx->pc = 0x21f9c8u;

    // 0x21f9c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21f9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21f9cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f9d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21f9d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21f9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21f9d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x21f9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21f9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21f9e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21f9e4: 0xc087e86  jal         func_21FA18
    ctx->pc = 0x21F9E4u;
    SET_GPR_U32(ctx, 31, 0x21F9ECu);
    ctx->pc = 0x21F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9E4u;
    // 0x21f9e8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FA18u, 0x21F9E4u, 0x21F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9ECu;
label_21f9ec:
    // 0x21f9ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F9ECu;
    {
        const bool branch_taken_0x21f9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ECu;
        // 0x21f9f0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9ec) {
            ctx->pc = 0x21F9FCu;
            goto label_21f9fc;
        }
    }
    ctx->pc = 0x21F9F4u;
    // 0x21f9f4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x21f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x21f9f8: 0xac510b9c  sw          $s1, 0xB9C($v0)
    ctx->pc = 0x21f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2972), GPR_U32(ctx, 17));
label_21f9fc:
    // 0x21f9fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f9fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fa00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fa04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fa04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fa08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21fa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FA0Cu;
        // 0x21fa10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FA14u;
}
