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

// Function: sub_0034CB80
// Address: 0x34cb80 - 0x34cbe8
void sub_0034CB80_0x34cb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CB80_0x34cb80");
#endif

    switch (ctx->pc) {
        case 0x34cbb4u: goto label_34cbb4;
        default: break;
    }

    ctx->pc = 0x34cb80u;

    // 0x34cb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34cb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34cb84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34cb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34cb88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34cb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34cb8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34cb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34cb90: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x34CB90u;
    {
        const bool branch_taken_0x34cb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x34CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CB90u;
        // 0x34cb94: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34cb90) {
            ctx->pc = 0x34CBD8u;
            goto label_34cbd8;
        }
    }
    ctx->pc = 0x34CB98u;
    // 0x34cb98: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x34cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x34cb9c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x34cb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x34cba0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x34cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x34cba4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34cba8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x34cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x34cbac: 0xc09d694  jal         func_275A50
    ctx->pc = 0x34CBACu;
    SET_GPR_U32(ctx, 31, 0x34CBB4u);
    ctx->pc = 0x34CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CBACu;
    // 0x34cbb0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x34CBACu, 0x34CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CBB4u;
label_34cbb4:
    // 0x34cbb4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34cbb8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x34cbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x34cbbc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x34cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x34cbc0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x34cbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x34cbc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34cbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x34cbc8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x34cbcc: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x34cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x34cbd0: 0x24638e30  addiu       $v1, $v1, -0x71D0
    ctx->pc = 0x34cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938160));
    // 0x34cbd4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x34cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_34cbd8:
    // 0x34cbd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34cbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34cbdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34cbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34cbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CBE0u;
        // 0x34cbe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CBE8u;
}
