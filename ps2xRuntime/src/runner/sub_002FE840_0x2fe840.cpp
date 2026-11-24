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

// Function: sub_002FE840
// Address: 0x2fe840 - 0x2fe8a4
void sub_002FE840_0x2fe840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE840_0x2fe840");
#endif

    switch (ctx->pc) {
        case 0x2fe888u: goto label_2fe888;
        default: break;
    }

    ctx->pc = 0x2fe840u;

    // 0x2fe840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe84c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe850: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fe850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe854: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2fe854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fe858: 0x8c850108  lw          $a1, 0x108($a0)
    ctx->pc = 0x2fe858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x2fe85c: 0x38a4000f  xori        $a0, $a1, 0xF
    ctx->pc = 0x2fe85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)15);
    // 0x2fe860: 0x28a3000e  slti        $v1, $a1, 0xE
    ctx->pc = 0x2fe860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2fe864: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x2fe864u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2fe868: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2fe868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2fe86c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FE86Cu;
    {
        const bool branch_taken_0x2fe86c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe86c) {
            ctx->pc = 0x2FE890u;
            goto label_2fe890;
        }
    }
    ctx->pc = 0x2FE874u;
    // 0x2fe874: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2fe874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2fe878: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2fe878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2fe87c: 0x8c442950  lw          $a0, 0x2950($v0)
    ctx->pc = 0x2fe87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10576)));
    // 0x2fe880: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x2FE880u;
    SET_GPR_U32(ctx, 31, 0x2FE888u);
    ctx->pc = 0x2FE884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE880u;
    // 0x2fe884: 0x24512950  addiu       $s1, $v0, 0x2950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x2FE880u, 0x2FE888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE888u;
label_2fe888:
    // 0x2fe888: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2fe888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2fe88c: 0x0  nop
    ctx->pc = 0x2fe88cu;
    // NOP
label_2fe890:
    // 0x2fe890: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe894: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe894u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe898: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe89c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE89Cu;
        // 0x2fe8a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE8A4u;
}
