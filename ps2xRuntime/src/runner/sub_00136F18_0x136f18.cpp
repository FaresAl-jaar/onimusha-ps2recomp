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

// Function: sub_00136F18
// Address: 0x136f18 - 0x136f6c
void sub_00136F18_0x136f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136F18_0x136f18");
#endif

    switch (ctx->pc) {
        case 0x136f58u: goto label_136f58;
        default: break;
    }

    ctx->pc = 0x136f18u;

    // 0x136f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136f1c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x136f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x136f20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x136f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x136f24: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x136f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x136f28: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x136f28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x136f2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136f30: 0x26074340  addiu       $a3, $s0, 0x4340
    ctx->pc = 0x136f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 17216));
    // 0x136f34: 0x24844248  addiu       $a0, $a0, 0x4248
    ctx->pc = 0x136f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16968));
    // 0x136f38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x136f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x136f3c: 0x34a51363  ori         $a1, $a1, 0x1363
    ctx->pc = 0x136f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4963);
    // 0x136f40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f44: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x136f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136f48: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x136f48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f4c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x136f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x136f50: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x136F50u;
    SET_GPR_U32(ctx, 31, 0x136F58u);
    ctx->pc = 0x136F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F50u;
    // 0x136f54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x136F50u, 0x136F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136F58u;
label_136f58:
    // 0x136f58: 0x8e024340  lw          $v0, 0x4340($s0)
    ctx->pc = 0x136f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17216)));
    // 0x136f5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x136f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f64: 0x3e00008  jr          $ra
    ctx->pc = 0x136F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F64u;
        // 0x136f68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F6Cu;
}
