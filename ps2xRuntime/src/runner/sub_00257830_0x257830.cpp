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

// Function: sub_00257830
// Address: 0x257830 - 0x2578bc
void sub_00257830_0x257830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257830_0x257830");
#endif

    switch (ctx->pc) {
        case 0x257864u: goto label_257864;
        default: break;
    }

    ctx->pc = 0x257830u;

    // 0x257830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257834: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x257834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x257838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25783c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25783cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257844: 0x3050000f  andi        $s0, $v0, 0xF
    ctx->pc = 0x257844u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x257848: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257848u;
    {
        const bool branch_taken_0x257848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x25784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257848u;
        // 0x25784c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257848) {
            ctx->pc = 0x257858u;
            goto label_257858;
        }
    }
    ctx->pc = 0x257850u;
    // 0x257850: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x257850u;
    {
        const bool branch_taken_0x257850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257850u;
        // 0x257854: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257850) {
            ctx->pc = 0x2578A8u;
            goto label_2578a8;
        }
    }
    ctx->pc = 0x257858u;
label_257858:
    // 0x257858: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x257858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25785c: 0xc095e60  jal         func_257980
    ctx->pc = 0x25785Cu;
    SET_GPR_U32(ctx, 31, 0x257864u);
    ctx->pc = 0x257860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25785Cu;
    // 0x257860: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257980u, 0x25785Cu, 0x257864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257864u;
label_257864:
    // 0x257864: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x257864u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x257868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25786c: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25786Cu;
    {
        const bool branch_taken_0x25786c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x257870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25786Cu;
        // 0x257870: 0x111c3c  dsll32      $v1, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25786c) {
            ctx->pc = 0x257894u;
            goto label_257894;
        }
    }
    ctx->pc = 0x257874u;
    // 0x257874: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x257874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x257878: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x257878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x25787c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25787cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x257880: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x257880u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x257884: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x257884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257888: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x257888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25788c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25788Cu;
    {
        const bool branch_taken_0x25788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25788Cu;
        // 0x257890: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25788c) {
            ctx->pc = 0x2578A8u;
            goto label_2578a8;
        }
    }
    ctx->pc = 0x257894u;
label_257894:
    // 0x257894: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x257894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x257898: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x257898u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x25789c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x25789cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2578a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2578a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2578a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2578a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2578a8:
    // 0x2578a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2578a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2578ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2578acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2578b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2578b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2578b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2578B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2578B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2578B4u;
        // 0x2578b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2578B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2578BCu;
}
