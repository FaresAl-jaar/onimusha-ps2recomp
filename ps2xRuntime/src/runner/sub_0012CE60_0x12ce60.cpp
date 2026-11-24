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

// Function: sub_0012CE60
// Address: 0x12ce60 - 0x12cf90
void sub_0012CE60_0x12ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CE60_0x12ce60");
#endif

    switch (ctx->pc) {
        case 0x12cf20u: goto label_12cf20;
        default: break;
    }

    ctx->pc = 0x12ce60u;

    // 0x12ce60: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x12ce60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12ce64: 0x5703c  dsll32      $t6, $a1, 0
    ctx->pc = 0x12ce64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 5) << (32 + 0));
    // 0x12ce68: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12ce68u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12ce6c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ce6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ce70: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12ce74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12ce74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12ce78: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12ce78u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12ce7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12ce80: 0xf683c  dsll32      $t5, $t7, 0
    ctx->pc = 0x12ce80u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12ce84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ce88: 0xe7023  negu        $t6, $t6
    ctx->pc = 0x12ce88u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x12ce8c: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x12ce8cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12ce90: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12ce90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12ce94: 0x5603f  dsra32      $t4, $a1, 0
    ctx->pc = 0x12ce94u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12ce98: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x12ce9c: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x12ce9cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x12cea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12cea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cea4: 0xf4823  negu        $t1, $t7
    ctx->pc = 0x12cea4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12cea8: 0x5e1000e  bgez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12CEA8u;
    {
        const bool branch_taken_0x12cea8 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x12CEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEA8u;
        // 0x12ceac: 0xc4023  negu        $t0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cea8) {
            ctx->pc = 0x12CEE4u;
            goto label_12cee4;
        }
    }
    ctx->pc = 0x12CEB0u;
    // 0x12ceb0: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12ceb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ceb4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x12ceb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ceb8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12ceb8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cebc: 0x16f5824  and         $t3, $t3, $t7
    ctx->pc = 0x12cebcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 15));
    // 0x12cec0: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x12cec0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x12cec4: 0xb783c  dsll32      $t7, $t3, 0
    ctx->pc = 0x12cec4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12cec8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12cec8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12cecc: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x12ceccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x12ced0: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x12ced0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12ced4: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x12ced4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x12ced8: 0x12f7823  subu        $t7, $t1, $t7
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x12cedc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cedcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cee0: 0x16f2025  or          $a0, $t3, $t7
    ctx->pc = 0x12cee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
label_12cee4:
    // 0x12cee4: 0x581000c  bgez        $t4, . + 4 + (0xC << 2)
    ctx->pc = 0x12CEE4u;
    {
        const bool branch_taken_0x12cee4 = (GPR_S64(ctx, 12) >= 0);
        ctx->pc = 0x12CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEE4u;
        // 0x12cee8: 0x240fffff  addiu       $t7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cee4) {
            ctx->pc = 0x12CF18u;
            goto label_12cf18;
        }
    }
    ctx->pc = 0x12CEECu;
    // 0x12ceec: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12ceecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cef0: 0x14f5024  and         $t2, $t2, $t7
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 15));
    // 0x12cef4: 0x14e5025  or          $t2, $t2, $t6
    ctx->pc = 0x12cef4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 14));
    // 0x12cef8: 0xa783c  dsll32      $t7, $t2, 0
    ctx->pc = 0x12cef8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12cefc: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12cefcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12cf00: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x12cf00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x12cf04: 0xf782b  sltu        $t7, $zero, $t7
    ctx->pc = 0x12cf04u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12cf08: 0xa503e  dsrl32      $t2, $t2, 0
    ctx->pc = 0x12cf08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) >> (32 + 0));
    // 0x12cf0c: 0x10f7823  subu        $t7, $t0, $t7
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 15)));
    // 0x12cf10: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cf10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cf14: 0x14f2825  or          $a1, $t2, $t7
    ctx->pc = 0x12cf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
label_12cf18:
    // 0x12cf18: 0xc04b3e4  jal         func_12CF90
    ctx->pc = 0x12CF18u;
    SET_GPR_U32(ctx, 31, 0x12CF20u);
    ctx->pc = 0x12CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF18u;
    // 0x12cf1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CF90u, 0x12CF18u, 0x12CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF20u;
label_12cf20:
    // 0x12cf20: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x12CF20u;
    {
        const bool branch_taken_0x12cf20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF20u;
        // 0x12cf24: 0xdfad0000  ld          $t5, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf20) {
            ctx->pc = 0x12CF78u;
            goto label_12cf78;
        }
    }
    ctx->pc = 0x12CF28u;
    // 0x12cf28: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x12cf28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cf2c: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x12cf2cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x12cf30: 0xd783c  dsll32      $t7, $t5, 0
    ctx->pc = 0x12cf30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12cf34: 0x20e8024  and         $s0, $s0, $t6
    ctx->pc = 0x12cf34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 14));
    // 0x12cf38: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12cf38u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12cf3c: 0xd683f  dsra32      $t5, $t5, 0
    ctx->pc = 0x12cf3cu;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 0));
    // 0x12cf40: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12cf44: 0xd6823  negu        $t5, $t5
    ctx->pc = 0x12cf44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 13)));
    // 0x12cf48: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12cf48u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12cf4c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x12cf4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x12cf50: 0x20f8025  or          $s0, $s0, $t7
    ctx->pc = 0x12cf50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 15));
    // 0x12cf54: 0x10703c  dsll32      $t6, $s0, 0
    ctx->pc = 0x12cf54u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12cf58: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x12cf58u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x12cf5c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12cf5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12cf60: 0xe702b  sltu        $t6, $zero, $t6
    ctx->pc = 0x12cf60u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x12cf64: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12cf64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12cf68: 0x1ae6823  subu        $t5, $t5, $t6
    ctx->pc = 0x12cf68u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x12cf6c: 0xd683c  dsll32      $t5, $t5, 0
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 0));
    // 0x12cf70: 0x20d8025  or          $s0, $s0, $t5
    ctx->pc = 0x12cf70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 13));
    // 0x12cf74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12cf78:
    // 0x12cf78: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x12cf78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cf7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cf80: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cf80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cf84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cf84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cf88: 0x3e00008  jr          $ra
    ctx->pc = 0x12CF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF88u;
        // 0x12cf8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CF90u;
}
