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

// Function: sub_003E3140
// Address: 0x3e3140 - 0x3e31b4
void sub_003E3140_0x3e3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3140_0x3e3140");
#endif

    switch (ctx->pc) {
        case 0x3e3164u: goto label_3e3164;
        case 0x3e318cu: goto label_3e318c;
        default: break;
    }

    ctx->pc = 0x3e3140u;

    // 0x3e3140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e3144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e3148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e314c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e314cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e3150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e3150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3154: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e3154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3158: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x3e3158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x3e315c: 0xc0fdac8  jal         func_3F6B20
    ctx->pc = 0x3E315Cu;
    SET_GPR_U32(ctx, 31, 0x3E3164u);
    ctx->pc = 0x3E3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E315Cu;
    // 0x3e3160: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F6B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F6B20u, 0x3E315Cu, 0x3E3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3164u;
label_3e3164:
    // 0x3e3164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3164u;
    {
        const bool branch_taken_0x3e3164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3164) {
            ctx->pc = 0x3E3178u;
            goto label_3e3178;
        }
    }
    ctx->pc = 0x3E316Cu;
    // 0x3e316c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3E316Cu;
    {
        const bool branch_taken_0x3e316c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E316Cu;
        // 0x3e3170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e316c) {
            ctx->pc = 0x3E31A0u;
            goto label_3e31a0;
        }
    }
    ctx->pc = 0x3E3174u;
    // 0x3e3174: 0x0  nop
    ctx->pc = 0x3e3174u;
    // NOP
label_3e3178:
    // 0x3e3178: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x3e3178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3e317c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e317cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e3180: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e3184: 0xc0f8c40  jal         func_3E3100
    ctx->pc = 0x3E3184u;
    SET_GPR_U32(ctx, 31, 0x3E318Cu);
    ctx->pc = 0x3E3188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3184u;
    // 0x3e3188: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3100u, 0x3E3184u, 0x3E318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E318Cu;
label_3e318c:
    // 0x3e318c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3e318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3e3190: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x3e3190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x3e3194: 0x31b3e  dsrl32      $v1, $v1, 12
    ctx->pc = 0x3e3194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 12));
    // 0x3e3198: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x3e3198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x3e319c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e319cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3e31a0:
    // 0x3e31a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e31a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e31a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e31a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e31a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e31a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e31ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3E31ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E31B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E31ACu;
        // 0x3e31b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E31ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E31B4u;
}
