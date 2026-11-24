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

// Function: sub_002247C8
// Address: 0x2247c8 - 0x224838
void sub_002247C8_0x2247c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002247C8_0x2247c8");
#endif

    switch (ctx->pc) {
        case 0x2247f4u: goto label_2247f4;
        case 0x224808u: goto label_224808;
        default: break;
    }

    ctx->pc = 0x2247c8u;

    // 0x2247c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2247cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2247ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2247d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2247d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2247d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2247d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2247d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2247dc: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2247dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2247e0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2247e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2247e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2247e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2247e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2247e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2247ec: 0xc089168  jal         func_2245A0
    ctx->pc = 0x2247ECu;
    SET_GPR_U32(ctx, 31, 0x2247F4u);
    ctx->pc = 0x2247F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2247ECu;
    // 0x2247f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2245A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2245A0u, 0x2247ECu, 0x2247F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247F4u;
label_2247f4:
    // 0x2247f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2247f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2247f8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2247F8u;
    {
        const bool branch_taken_0x2247f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2247FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2247F8u;
        // 0x2247fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2247f8) {
            ctx->pc = 0x224820u;
            goto label_224820;
        }
    }
    ctx->pc = 0x224800u;
    // 0x224800: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x224800u;
    SET_GPR_U32(ctx, 31, 0x224808u);
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x224800u, 0x224808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224808u;
label_224808:
    // 0x224808: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x22480c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22480Cu;
    {
        const bool branch_taken_0x22480c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x224810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22480Cu;
        // 0x224810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22480c) {
            ctx->pc = 0x224820u;
            goto label_224820;
        }
    }
    ctx->pc = 0x224814u;
    // 0x224814: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x224814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x224818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22481c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x22481cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_224820:
    // 0x224820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224824: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224828: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22482c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22482cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224830: 0x3e00008  jr          $ra
    ctx->pc = 0x224830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224830u;
        // 0x224834: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224838u;
}
