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

// Function: sub_003801F0
// Address: 0x3801f0 - 0x38024c
void sub_003801F0_0x3801f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003801F0_0x3801f0");
#endif

    switch (ctx->pc) {
        case 0x380218u: goto label_380218;
        default: break;
    }

    ctx->pc = 0x3801f0u;

    // 0x3801f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3801f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3801f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3801f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3801f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3801f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3801fc: 0x90850640  lbu         $a1, 0x640($a0)
    ctx->pc = 0x3801fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1600)));
    // 0x380200: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x380200u;
    {
        const bool branch_taken_0x380200 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x380200) {
            ctx->pc = 0x380220u;
            goto label_380220;
        }
    }
    ctx->pc = 0x380208u;
    // 0x380208: 0x848600c2  lh          $a2, 0xC2($a0)
    ctx->pc = 0x380208u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x38020c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x38020cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x380210: 0xc0a2640  jal         func_289900
    ctx->pc = 0x380210u;
    SET_GPR_U32(ctx, 31, 0x380218u);
    ctx->pc = 0x380214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380210u;
    // 0x380214: 0x24a50cc0  addiu       $a1, $a1, 0xCC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289900u, 0x380210u, 0x380218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380218u;
label_380218:
    // 0x380218: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x380218u;
    {
        const bool branch_taken_0x380218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x380218) {
            ctx->pc = 0x380240u;
            goto label_380240;
        }
    }
    ctx->pc = 0x380220u;
label_380220:
    // 0x380220: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x380220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x380224: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x380224u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x380228: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x380228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x38022c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38022cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x380230: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x380230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x380234: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x380234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x380238: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x380238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38023c: 0xac8307c0  sw          $v1, 0x7C0($a0)
    ctx->pc = 0x38023cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1984), GPR_U32(ctx, 3));
label_380240:
    // 0x380240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380244: 0x3e00008  jr          $ra
    ctx->pc = 0x380244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380244u;
        // 0x380248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38024Cu;
}
