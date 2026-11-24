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

// Function: sub_0030BFA0
// Address: 0x30bfa0 - 0x30c018
void sub_0030BFA0_0x30bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030BFA0_0x30bfa0");
#endif

    switch (ctx->pc) {
        case 0x30bfc0u: goto label_30bfc0;
        default: break;
    }

    ctx->pc = 0x30bfa0u;

    // 0x30bfa0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x30bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30bfa4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x30bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x30bfa8: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x30bfa8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30bfac: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x30BFACu;
    {
        const bool branch_taken_0x30bfac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFACu;
        // 0x30bfb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfac) {
            ctx->pc = 0x30BFE0u;
            goto label_30bfe0;
        }
    }
    ctx->pc = 0x30BFB4u;
    // 0x30bfb4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x30bfb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfb8: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x30bfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x30bfbc: 0x0  nop
    ctx->pc = 0x30bfbcu;
    // NOP
label_30bfc0:
    // 0x30bfc0: 0x85030038  lh          $v1, 0x38($t0)
    ctx->pc = 0x30bfc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x30bfc4: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x30BFC4u;
    {
        const bool branch_taken_0x30bfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x30BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFC4u;
        // 0x30bfc8: 0x250a0010  addiu       $t2, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfc4) {
            ctx->pc = 0x30BFE0u;
            goto label_30bfe0;
        }
    }
    ctx->pc = 0x30BFCCu;
    // 0x30bfcc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x30bfccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30bfd0: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x30bfd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x30bfd4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30BFD4u;
    {
        const bool branch_taken_0x30bfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFD4u;
        // 0x30bfd8: 0x25080044  addiu       $t0, $t0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bfd4) {
            ctx->pc = 0x30BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bfc0;
        }
    }
    ctx->pc = 0x30BFDCu;
    // 0x30bfdc: 0x0  nop
    ctx->pc = 0x30bfdcu;
    // NOP
label_30bfe0:
    // 0x30bfe0: 0x15240003  bne         $t1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30BFE0u;
    {
        const bool branch_taken_0x30bfe0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        if (branch_taken_0x30bfe0) {
            ctx->pc = 0x30BFF0u;
            goto label_30bff0;
        }
    }
    ctx->pc = 0x30BFE8u;
    // 0x30bfe8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x30bfe8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfec: 0x0  nop
    ctx->pc = 0x30bfecu;
    // NOP
label_30bff0:
    // 0x30bff0: 0x11400007  beqz        $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x30BFF0u;
    {
        const bool branch_taken_0x30bff0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BFF0u;
        // 0x30bff4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bff0) {
            ctx->pc = 0x30C010u;
            goto label_30c010;
        }
    }
    ctx->pc = 0x30BFF8u;
    // 0x30bff8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x30bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30bffc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c000: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x30c000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30c004: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x30c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x30c008: 0x84630038  lh          $v1, 0x38($v1)
    ctx->pc = 0x30c008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x30c00c: 0xa5430028  sh          $v1, 0x28($t2)
    ctx->pc = 0x30c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 40), (uint16_t)GPR_U32(ctx, 3));
label_30c010:
    // 0x30c010: 0x3e00008  jr          $ra
    ctx->pc = 0x30C010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C018u;
}
