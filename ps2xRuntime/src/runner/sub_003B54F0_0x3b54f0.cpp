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

// Function: sub_003B54F0
// Address: 0x3b54f0 - 0x3b5590
void sub_003B54F0_0x3b54f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B54F0_0x3b54f0");
#endif

    switch (ctx->pc) {
        case 0x3b5540u: goto label_3b5540;
        case 0x3b554cu: goto label_3b554c;
        case 0x3b5574u: goto label_3b5574;
        default: break;
    }

    ctx->pc = 0x3b54f0u;

    // 0x3b54f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3b54f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3b54f4: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x3b54f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b54f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b54f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3b54fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b54fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5500: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b5500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b5504: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b5504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3b5508: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b5508u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b550c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b5510: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3b5510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3b5514: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b5514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b5518: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b5518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b551c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3b551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5520: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3b5520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5524: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5528: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3b5528u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3b552c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x3b552cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3b5530: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5534: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3b5534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3b5538: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3B5538u;
    SET_GPR_U32(ctx, 31, 0x3B5540u);
    ctx->pc = 0x3B553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5538u;
    // 0x3b553c: 0x25292b10  addiu       $t1, $t1, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3B5538u, 0x3B5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5540u;
label_3b5540:
    // 0x3b5540: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b5540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5544: 0xc0ed934  jal         func_3B64D0
    ctx->pc = 0x3B5544u;
    SET_GPR_U32(ctx, 31, 0x3B554Cu);
    ctx->pc = 0x3B5548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5544u;
    // 0x3b5548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B64D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B64D0u, 0x3B5544u, 0x3B554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B554Cu;
label_3b554c:
    // 0x3b554c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b554cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5550: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3b5550u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3b5554: 0x3265ffff  andi        $a1, $s3, 0xFFFF
    ctx->pc = 0x3b5554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3b5558: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x3b5558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3b555c: 0x322affff  andi        $t2, $s1, 0xFFFF
    ctx->pc = 0x3b555cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x3b5560: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x3b5560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b5564: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3b5564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3b5568: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3b5568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3b556c: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3B556Cu;
    SET_GPR_U32(ctx, 31, 0x3B5574u);
    ctx->pc = 0x3B5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B556Cu;
    // 0x3b5570: 0x25292b18  addiu       $t1, $t1, 0x2B18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3B556Cu, 0x3B5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5574u;
label_3b5574:
    // 0x3b5574: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b5574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b5578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b5578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b557c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b557cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b5584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5588: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5588u;
        // 0x3b558c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5590u;
}
