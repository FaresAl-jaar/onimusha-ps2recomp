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

// Function: sub_003002C0
// Address: 0x3002c0 - 0x300328
void sub_003002C0_0x3002c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003002C0_0x3002c0");
#endif

    switch (ctx->pc) {
        case 0x3002f4u: goto label_3002f4;
        default: break;
    }

    ctx->pc = 0x3002c0u;

    // 0x3002c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3002c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3002c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3002c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3002c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3002c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3002cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3002ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3002d0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3002D0u;
    {
        const bool branch_taken_0x3002d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D0u;
        // 0x3002d4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002d0) {
            ctx->pc = 0x300318u;
            goto label_300318;
        }
    }
    ctx->pc = 0x3002D8u;
    // 0x3002d8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3002d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3002dc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3002dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3002e0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3002e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3002e4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3002e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3002e8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3002e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3002ec: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3002ECu;
    SET_GPR_U32(ctx, 31, 0x3002F4u);
    ctx->pc = 0x3002F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002ECu;
    // 0x3002f0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3002ECu, 0x3002F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002F4u;
label_3002f4:
    // 0x3002f4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3002f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3002f8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3002fc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3002fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x300300: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x300300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x300304: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x300304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x300308: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x300308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x30030c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x30030cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x300310: 0x24638090  addiu       $v1, $v1, -0x7F70
    ctx->pc = 0x300310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934672));
    // 0x300314: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x300314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_300318:
    // 0x300318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30031c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30031cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300320: 0x3e00008  jr          $ra
    ctx->pc = 0x300320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300320u;
        // 0x300324: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300328u;
}
