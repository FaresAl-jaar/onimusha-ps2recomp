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

// Function: sub_00224E58
// Address: 0x224e58 - 0x224e98
void sub_00224E58_0x224e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224E58_0x224e58");
#endif

    switch (ctx->pc) {
        case 0x224e6cu: goto label_224e6c;
        default: break;
    }

    ctx->pc = 0x224e58u;

    // 0x224e58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224e5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224e60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224e64: 0xc0893a6  jal         func_224E98
    ctx->pc = 0x224E64u;
    SET_GPR_U32(ctx, 31, 0x224E6Cu);
    ctx->pc = 0x224E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224E64u;
    // 0x224e68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224E98u, 0x224E64u, 0x224E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E6Cu;
label_224e6c:
    // 0x224e6c: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x224e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x224e70: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x224E70u;
    {
        const bool branch_taken_0x224e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x224E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E70u;
        // 0x224e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224e70) {
            ctx->pc = 0x224E88u;
            goto label_224e88;
        }
    }
    ctx->pc = 0x224E78u;
    // 0x224e78: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x224e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x224e7c: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x224e7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x224e80: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x224e80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x224e84: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x224e84u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_224e88:
    // 0x224e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224e8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224e90: 0x3e00008  jr          $ra
    ctx->pc = 0x224E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224E90u;
        // 0x224e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224E98u;
}
