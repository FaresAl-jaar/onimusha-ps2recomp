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

// Function: sub_0020D070
// Address: 0x20d070 - 0x20d124
void sub_0020D070_0x20d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D070_0x20d070");
#endif

    switch (ctx->pc) {
        case 0x20d0b4u: goto label_20d0b4;
        case 0x20d0e0u: goto label_20d0e0;
        case 0x20d0f0u: goto label_20d0f0;
        default: break;
    }

    ctx->pc = 0x20d070u;

    // 0x20d070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20d074: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20d078: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20d07c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20d07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d080: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20d084: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20d084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d088: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20d08c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x20d08cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d090: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20d090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20d094: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20d094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d098: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20d09c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20d0a0: 0x8c912004  lw          $s1, 0x2004($a0)
    ctx->pc = 0x20d0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x20d0a4: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x20d0a4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x20d0a8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x20d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x20d0ac: 0xc0833ee  jal         func_20CFB8
    ctx->pc = 0x20D0ACu;
    SET_GPR_U32(ctx, 31, 0x20D0B4u);
    ctx->pc = 0x20D0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0ACu;
    // 0x20d0b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CFB8u, 0x20D0ACu, 0x20D0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0B4u;
label_20d0b4:
    // 0x20d0b4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x20d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x20d0b8: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x20d0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x20d0bc: 0x34c69000  ori         $a2, $a2, 0x9000
    ctx->pc = 0x20d0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36864);
    // 0x20d0c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x20d0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d0c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20d0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0c8: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x20d0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20d0cc: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x20d0ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
    // 0x20d0d0: 0xd0182a  slt         $v1, $a2, $s0
    ctx->pc = 0x20d0d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x20d0d4: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x20d0d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x20d0d8: 0xc07eb68  jal         func_1FADA0
    ctx->pc = 0x20D0D8u;
    SET_GPR_U32(ctx, 31, 0x20D0E0u);
    ctx->pc = 0x20D0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0D8u;
    // 0x20d0dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FADA0u, 0x20D0D8u, 0x20D0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0E0u;
label_20d0e0:
    // 0x20d0e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20d0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20d0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d0e8: 0xc0833fa  jal         func_20CFE8
    ctx->pc = 0x20D0E8u;
    SET_GPR_U32(ctx, 31, 0x20D0F0u);
    ctx->pc = 0x20D0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D0E8u;
    // 0x20d0ec: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CFE8u, 0x20D0E8u, 0x20D0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D0F0u;
label_20d0f0:
    // 0x20d0f0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x20d0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x20d0f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20d0f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d0f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x20d0fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20d0fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20d100: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x20d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x20d104: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20d104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d108: 0xaeb00000  sw          $s0, 0x0($s5)
    ctx->pc = 0x20d108u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
    // 0x20d10c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20d10cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20d110: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20d110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d114: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20d114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d118: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20d118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d11c: 0x3e00008  jr          $ra
    ctx->pc = 0x20D11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D11Cu;
        // 0x20d120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D124u;
}
