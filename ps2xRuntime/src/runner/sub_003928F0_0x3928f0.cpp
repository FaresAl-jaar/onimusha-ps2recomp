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

// Function: sub_003928F0
// Address: 0x3928f0 - 0x392964
void sub_003928F0_0x3928f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003928F0_0x3928f0");
#endif

    switch (ctx->pc) {
        case 0x39290cu: goto label_39290c;
        default: break;
    }

    ctx->pc = 0x3928f0u;

    // 0x3928f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3928f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3928f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3928f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3928f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3928f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3928fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3928fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x392900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x392900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x392904: 0xc0e4a28  jal         func_3928A0
    ctx->pc = 0x392904u;
    SET_GPR_U32(ctx, 31, 0x39290Cu);
    ctx->pc = 0x392908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392904u;
    // 0x392908: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3928A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3928A0u, 0x392904u, 0x39290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39290Cu;
label_39290c:
    // 0x39290c: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x39290cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x392910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x392910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x392914: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x392914u;
    {
        const bool branch_taken_0x392914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x392914) {
            ctx->pc = 0x392938u;
            goto label_392938;
        }
    }
    ctx->pc = 0x39291Cu;
    // 0x39291c: 0x0  nop
    ctx->pc = 0x39291cu;
    // NOP
    // 0x392920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x392920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x392924: 0xa2230030  sb          $v1, 0x30($s1)
    ctx->pc = 0x392924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x392928: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x392928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x39292c: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x39292cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x392930u;
    {
        const bool branch_taken_0x392930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x392934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392930u;
        // 0x392934: 0xae200038  sw          $zero, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x392930) {
            ctx->pc = 0x392950u;
            goto label_392950;
        }
    }
    ctx->pc = 0x392938u;
label_392938:
    // 0x392938: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x392938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39293c: 0xa2230030  sb          $v1, 0x30($s1)
    ctx->pc = 0x39293cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x392940: 0xa2200032  sb          $zero, 0x32($s1)
    ctx->pc = 0x392940u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x392944: 0xa6200034  sh          $zero, 0x34($s1)
    ctx->pc = 0x392944u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x392948: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x392948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x39294c: 0x0  nop
    ctx->pc = 0x39294cu;
    // NOP
label_392950:
    // 0x392950: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x392950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x392954: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x392954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x392958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39295c: 0x3e00008  jr          $ra
    ctx->pc = 0x39295Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39295Cu;
        // 0x392960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39295Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392964u;
}
