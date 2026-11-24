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

// Function: sub_003C1FE0
// Address: 0x3c1fe0 - 0x3c2060
void sub_003C1FE0_0x3c1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1FE0_0x3c1fe0");
#endif

    switch (ctx->pc) {
        case 0x3c2000u: goto label_3c2000;
        default: break;
    }

    ctx->pc = 0x3c1fe0u;

    // 0x3c1fe0: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x3c1fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1fe4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c1fe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1fe8: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x3c1fe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c1fec: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C1FECu;
    {
        const bool branch_taken_0x3c1fec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FECu;
        // 0x3c1ff0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fec) {
            ctx->pc = 0x3C2050u;
            goto label_3c2050;
        }
    }
    ctx->pc = 0x3C1FF4u;
    // 0x3c1ff4: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x3c1ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c1ff8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3c1ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3c1ffc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c2000:
    // 0x3c2000: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3c2000u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c2004: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3c2004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c2008: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c2008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c200c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c200cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c2010: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3c2010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c2014: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3c2014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3c2018: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x3c2018u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3c201c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3c201cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3c2020: 0x14650007  bne         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C2020u;
    {
        const bool branch_taken_0x3c2020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3c2020) {
            ctx->pc = 0x3C2040u;
            goto label_3c2040;
        }
    }
    ctx->pc = 0x3C2028u;
    // 0x3c2028: 0x15460003  bne         $t2, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C2028u;
    {
        const bool branch_taken_0x3c2028 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        if (branch_taken_0x3c2028) {
            ctx->pc = 0x3C2038u;
            goto label_3c2038;
        }
    }
    ctx->pc = 0x3C2030u;
    // 0x3c2030: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C2030u;
    {
        const bool branch_taken_0x3c2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c2030) {
            ctx->pc = 0x3C2058u;
            goto label_3c2058;
        }
    }
    ctx->pc = 0x3C2038u;
label_3c2038:
    // 0x3c2038: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c2038u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3c203c: 0x0  nop
    ctx->pc = 0x3c203cu;
    // NOP
label_3c2040:
    // 0x3c2040: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3c2040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3c2044: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x3c2044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c2048: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C2048u;
    {
        const bool branch_taken_0x3c2048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2048u;
        // 0x3c204c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2048) {
            ctx->pc = 0x3C2000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2000;
        }
    }
    ctx->pc = 0x3C2050u;
label_3c2050:
    // 0x3c2050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c2050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2054: 0x0  nop
    ctx->pc = 0x3c2054u;
    // NOP
label_3c2058:
    // 0x3c2058: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2060u;
}
