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

// Function: sub_001198A0
// Address: 0x1198a0 - 0x11990c
void sub_001198A0_0x1198a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001198A0_0x1198a0");
#endif

    switch (ctx->pc) {
        case 0x1198e8u: goto label_1198e8;
        default: break;
    }

    ctx->pc = 0x1198a0u;

    // 0x1198a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1198a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1198a4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x1198a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x1198a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1198a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1198ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1198acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1198b0: 0x28980  sll         $s1, $v0, 6
    ctx->pc = 0x1198b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1198b4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1198B4u;
    {
        const bool branch_taken_0x1198b4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1198B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198B4u;
        // 0x1198b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b4) {
            ctx->pc = 0x1198CCu;
            goto label_1198cc;
        }
    }
    ctx->pc = 0x1198BCu;
    // 0x1198bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1198bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1198c0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x1198c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x1198c4: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1198C4u;
    {
        const bool branch_taken_0x1198c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1198c4) {
            ctx->pc = 0x1198C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1198C4u;
            // 0x1198c8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1198D4u;
            goto label_1198d4;
        }
    }
    ctx->pc = 0x1198CCu;
label_1198cc:
    // 0x1198cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1198CCu;
    {
        const bool branch_taken_0x1198cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198CCu;
        // 0x1198d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198cc) {
            ctx->pc = 0x1198F8u;
            goto label_1198f8;
        }
    }
    ctx->pc = 0x1198D4u;
label_1198d4:
    // 0x1198d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1198d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1198d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1198D8u;
    {
        const bool branch_taken_0x1198d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1198D8u;
        // 0x1198dc: 0xde300018  ld          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198d8) {
            ctx->pc = 0x1198F4u;
            goto label_1198f4;
        }
    }
    ctx->pc = 0x1198E0u;
    // 0x1198e0: 0xc04647e  jal         func_1191F8
    ctx->pc = 0x1198E0u;
    SET_GPR_U32(ctx, 31, 0x1198E8u);
    ctx->pc = 0x1191F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1191F8u, 0x1198E0u, 0x1198E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1198E8u;
label_1198e8:
    // 0x1198e8: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x1198e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1198ec: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1198ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1198f0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_1198f4:
    // 0x1198f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1198f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1198f8:
    // 0x1198f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1198f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1198fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119904: 0x3e00008  jr          $ra
    ctx->pc = 0x119904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119904u;
        // 0x119908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11990Cu;
}
