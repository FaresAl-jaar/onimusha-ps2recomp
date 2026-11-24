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

// Function: sub_002B03C0
// Address: 0x2b03c0 - 0x2b0440
void sub_002B03C0_0x2b03c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B03C0_0x2b03c0");
#endif

    switch (ctx->pc) {
        case 0x2b03f4u: goto label_2b03f4;
        default: break;
    }

    ctx->pc = 0x2b03c0u;

    // 0x2b03c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2b03c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2b03c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b03c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b03c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b03c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b03cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b03ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b03d0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b03d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b03d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b03d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b03d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03dc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b03e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B03E0u;
    {
        const bool branch_taken_0x2b03e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03E0u;
        // 0x2b03e4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03e0) {
            ctx->pc = 0x2B0420u;
            goto label_2b0420;
        }
    }
    ctx->pc = 0x2B03E8u;
    // 0x2b03e8: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x2b03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2b03ec: 0xc0810c0  jal         func_204300
    ctx->pc = 0x2B03ECu;
    SET_GPR_U32(ctx, 31, 0x2B03F4u);
    ctx->pc = 0x2B03F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B03ECu;
    // 0x2b03f0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204300u, 0x2B03ECu, 0x2B03F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03F4u;
label_2b03f4:
    // 0x2b03f4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b03f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B03F8u;
    {
        const bool branch_taken_0x2b03f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b03f8) {
            ctx->pc = 0x2B0418u;
            goto label_2b0418;
        }
    }
    ctx->pc = 0x2B0400u;
    // 0x2b0400: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2b0400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2b0404: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x2b0404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2b0408: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b0408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2b040c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0410: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0410u;
    {
        const bool branch_taken_0x2b0410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0410u;
        // 0x2b0414: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0410) {
            ctx->pc = 0x2B0420u;
            goto label_2b0420;
        }
    }
    ctx->pc = 0x2B0418u;
label_2b0418:
    // 0x2b0418: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B0418u;
    {
        const bool branch_taken_0x2b0418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0418u;
        // 0x2b041c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0418) {
            ctx->pc = 0x2B0428u;
            goto label_2b0428;
        }
    }
    ctx->pc = 0x2B0420u;
label_2b0420:
    // 0x2b0420: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b0420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2b0424: 0x0  nop
    ctx->pc = 0x2b0424u;
    // NOP
label_2b0428:
    // 0x2b0428: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b0428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b042c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b042cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0438: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0438u;
        // 0x2b043c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0440u;
}
