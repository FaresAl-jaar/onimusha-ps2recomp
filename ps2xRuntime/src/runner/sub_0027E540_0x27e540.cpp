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

// Function: sub_0027E540
// Address: 0x27e540 - 0x27e5a0
void sub_0027E540_0x27e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E540_0x27e540");
#endif

    switch (ctx->pc) {
        case 0x27e560u: goto label_27e560;
        default: break;
    }

    ctx->pc = 0x27e540u;

    // 0x27e540: 0x90890072  lbu         $t1, 0x72($a0)
    ctx->pc = 0x27e540u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
    // 0x27e544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e548: 0x15230003  bne         $t1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27E548u;
    {
        const bool branch_taken_0x27e548 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x27E54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E548u;
        // 0x27e54c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e548) {
            ctx->pc = 0x27E558u;
            goto label_27e558;
        }
    }
    ctx->pc = 0x27E550u;
    // 0x27e550: 0x11030011  beq         $t0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x27E550u;
    {
        const bool branch_taken_0x27e550 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x27e550) {
            ctx->pc = 0x27E598u;
            goto label_27e598;
        }
    }
    ctx->pc = 0x27E558u;
label_27e558:
    // 0x27e558: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27e558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e55c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x27e55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e560:
    // 0x27e560: 0x912300d8  lbu         $v1, 0xD8($t1)
    ctx->pc = 0x27e560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 216)));
    // 0x27e564: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x27E564u;
    {
        const bool branch_taken_0x27e564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E564u;
        // 0x27e568: 0xa1900  sll         $v1, $t2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e564) {
            ctx->pc = 0x27E588u;
            goto label_27e588;
        }
    }
    ctx->pc = 0x27E56Cu;
    // 0x27e56c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27e570: 0xfc6500d0  sd          $a1, 0xD0($v1)
    ctx->pc = 0x27e570u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 208), GPR_U64(ctx, 5));
    // 0x27e574: 0xa06700d8  sb          $a3, 0xD8($v1)
    ctx->pc = 0x27e574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 216), (uint8_t)GPR_U32(ctx, 7));
    // 0x27e578: 0xa06800d9  sb          $t0, 0xD9($v1)
    ctx->pc = 0x27e578u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 217), (uint8_t)GPR_U32(ctx, 8));
    // 0x27e57c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27E57Cu;
    {
        const bool branch_taken_0x27e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E57Cu;
        // 0x27e580: 0xac6600dc  sw          $a2, 0xDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e57c) {
            ctx->pc = 0x27E598u;
            goto label_27e598;
        }
    }
    ctx->pc = 0x27E584u;
    // 0x27e584: 0x0  nop
    ctx->pc = 0x27e584u;
    // NOP
label_27e588:
    // 0x27e588: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x27e588u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x27e58c: 0x29430020  slti        $v1, $t2, 0x20
    ctx->pc = 0x27e58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x27e590: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x27E590u;
    {
        const bool branch_taken_0x27e590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E590u;
        // 0x27e594: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e590) {
            ctx->pc = 0x27E560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27e560;
        }
    }
    ctx->pc = 0x27E598u;
label_27e598:
    // 0x27e598: 0x3e00008  jr          $ra
    ctx->pc = 0x27E598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E5A0u;
}
