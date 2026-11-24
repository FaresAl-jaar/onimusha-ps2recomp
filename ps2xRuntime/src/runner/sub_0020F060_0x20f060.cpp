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

// Function: sub_0020F060
// Address: 0x20f060 - 0x20f100
void sub_0020F060_0x20f060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F060_0x20f060");
#endif

    switch (ctx->pc) {
        case 0x20f0b0u: goto label_20f0b0;
        default: break;
    }

    ctx->pc = 0x20f060u;

    // 0x20f060: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x20f060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x20f064: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f068: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f06c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x20f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x20f070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20f07c: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x20f07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20f080: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20f080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20f084: 0xc39021  addu        $s2, $a2, $v1
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x20f088: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20f088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x20f08c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20f090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20f090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20f094: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20f098: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20f09c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x20f09cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20f0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20f0a8: 0xc083c76  jal         func_20F1D8
    ctx->pc = 0x20F0A8u;
    SET_GPR_U32(ctx, 31, 0x20F0B0u);
    ctx->pc = 0x20F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0A8u;
    // 0x20f0ac: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F1D8u, 0x20F0A8u, 0x20F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0B0u;
label_20f0b0:
    // 0x20f0b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20f0b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x20f0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20f0b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20f0bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x20f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x20f0c0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x20f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x20f0c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20f0c8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20f0cc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x20f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x20f0d0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20f0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20f0d4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20f0d8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x20f0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x20f0dc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20f0e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x20f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20f0e4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x20f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x20f0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f0f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20f0f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f0f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20f0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20f0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20F0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0F8u;
        // 0x20f0fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F100u;
}
