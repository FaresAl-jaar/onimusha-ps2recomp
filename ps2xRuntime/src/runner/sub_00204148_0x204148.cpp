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

// Function: sub_00204148
// Address: 0x204148 - 0x2041a0
void sub_00204148_0x204148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204148_0x204148");
#endif

    switch (ctx->pc) {
        case 0x204164u: goto label_204164;
        default: break;
    }

    ctx->pc = 0x204148u;

    // 0x204148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20414c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20414cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x204150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x204150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x204154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x204158: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x204158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20415c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20415Cu;
    SET_GPR_U32(ctx, 31, 0x204164u);
    ctx->pc = 0x204160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20415Cu;
    // 0x204160: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20415Cu, 0x204164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204164u;
label_204164:
    // 0x204164: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x204164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x204168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20416c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20416Cu;
    {
        const bool branch_taken_0x20416c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x204170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20416Cu;
        // 0x204170: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20416c) {
            ctx->pc = 0x204188u;
            goto label_204188;
        }
    }
    ctx->pc = 0x204174u;
    // 0x204174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204178: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20417c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204180: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x204180u;
    ctx->pc = 0x204184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204180u;
    // 0x204184: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x204188u;
label_204188:
    // 0x204188: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x204188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x20418c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20418cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x204190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204194: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x204194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x204198: 0x3e00008  jr          $ra
    ctx->pc = 0x204198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204198u;
        // 0x20419c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2041A0u;
}
