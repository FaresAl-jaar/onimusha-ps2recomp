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

// Function: sub_0021F758
// Address: 0x21f758 - 0x21f7dc
void sub_0021F758_0x21f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F758_0x21f758");
#endif

    switch (ctx->pc) {
        case 0x21f7c8u: goto label_21f7c8;
        default: break;
    }

    ctx->pc = 0x21f758u;

    // 0x21f758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21f760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21f764: 0x8c9036b0  lw          $s0, 0x36B0($a0)
    ctx->pc = 0x21f764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 14000)));
    // 0x21f768: 0x8e020dd0  lw          $v0, 0xDD0($s0)
    ctx->pc = 0x21f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3536)));
    // 0x21f76c: 0x5c400017  bgtzl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21F76Cu;
    {
        const bool branch_taken_0x21f76c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x21f76c) {
            ctx->pc = 0x21F770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F76Cu;
            // 0x21f770: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F7CCu;
            goto label_21f7cc;
        }
    }
    ctx->pc = 0x21F774u;
    // 0x21f774: 0x8e040dc4  lw          $a0, 0xDC4($s0)
    ctx->pc = 0x21f774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3524)));
    // 0x21f778: 0x8e060dc8  lw          $a2, 0xDC8($s0)
    ctx->pc = 0x21f778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3528)));
    // 0x21f77c: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F77Cu;
    {
        const bool branch_taken_0x21f77c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x21F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F77Cu;
        // 0x21f780: 0x8e050dcc  lw          $a1, 0xDCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f77c) {
            ctx->pc = 0x21F78Cu;
            goto label_21f78c;
        }
    }
    ctx->pc = 0x21F784u;
    // 0x21f784: 0x1cc0000e  bgtz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x21F784u;
    {
        const bool branch_taken_0x21f784 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x21f784) {
            ctx->pc = 0x21F7C0u;
            goto label_21f7c0;
        }
    }
    ctx->pc = 0x21F78Cu;
label_21f78c:
    // 0x21f78c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21f790: 0x5c40000e  bgtzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21F790u;
    {
        const bool branch_taken_0x21f790 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x21f790) {
            ctx->pc = 0x21F794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F790u;
            // 0x21f794: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F7CCu;
            goto label_21f7cc;
        }
    }
    ctx->pc = 0x21F798u;
    // 0x21f798: 0x58800001  blezl       $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21F798u;
    {
        const bool branch_taken_0x21f798 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x21f798) {
            ctx->pc = 0x21F79Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F798u;
            // 0x21f79c: 0x8e040dac  lw          $a0, 0xDAC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F7A0u;
            goto label_21f7a0;
        }
    }
    ctx->pc = 0x21F7A0u;
label_21f7a0:
    // 0x21f7a0: 0x1cc00003  bgtz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F7A0u;
    {
        const bool branch_taken_0x21f7a0 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x21f7a0) {
            ctx->pc = 0x21F7B0u;
            goto label_21f7b0;
        }
    }
    ctx->pc = 0x21F7A8u;
    // 0x21f7a8: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x21f7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
    // 0x21f7ac: 0x8e050db4  lw          $a1, 0xDB4($s0)
    ctx->pc = 0x21f7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3508)));
label_21f7b0:
    // 0x21f7b0: 0x58800006  blezl       $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F7B0u;
    {
        const bool branch_taken_0x21f7b0 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x21f7b0) {
            ctx->pc = 0x21F7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F7B0u;
            // 0x21f7b4: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F7CCu;
            goto label_21f7cc;
        }
    }
    ctx->pc = 0x21F7B8u;
    // 0x21f7b8: 0x58c00004  blezl       $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21F7B8u;
    {
        const bool branch_taken_0x21f7b8 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x21f7b8) {
            ctx->pc = 0x21F7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21F7B8u;
            // 0x21f7bc: 0xae020da8  sw          $v0, 0xDA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21F7CCu;
            goto label_21f7cc;
        }
    }
    ctx->pc = 0x21F7C0u;
label_21f7c0:
    // 0x21f7c0: 0xc080568  jal         func_2015A0
    ctx->pc = 0x21F7C0u;
    SET_GPR_U32(ctx, 31, 0x21F7C8u);
    ctx->pc = 0x2015A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2015A0u, 0x21F7C0u, 0x21F7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7C8u;
label_21f7c8:
    // 0x21f7c8: 0xae020da8  sw          $v0, 0xDA8($s0)
    ctx->pc = 0x21f7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 2));
label_21f7cc:
    // 0x21f7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f7d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7D4u;
        // 0x21f7d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F7DCu;
}
