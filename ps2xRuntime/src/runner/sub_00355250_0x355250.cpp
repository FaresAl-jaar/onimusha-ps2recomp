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

// Function: sub_00355250
// Address: 0x355250 - 0x3552b8
void sub_00355250_0x355250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355250_0x355250");
#endif

    switch (ctx->pc) {
        case 0x355284u: goto label_355284;
        default: break;
    }

    ctx->pc = 0x355250u;

    // 0x355250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35525c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35525cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355260: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x355260u;
    {
        const bool branch_taken_0x355260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355260u;
        // 0x355264: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355260) {
            ctx->pc = 0x3552A8u;
            goto label_3552a8;
        }
    }
    ctx->pc = 0x355268u;
    // 0x355268: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x355268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35526c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x35526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x355270: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x355270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x355274: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x355274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x355278: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x355278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35527c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x35527Cu;
    SET_GPR_U32(ctx, 31, 0x355284u);
    ctx->pc = 0x355280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35527Cu;
    // 0x355280: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x35527Cu, 0x355284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355284u;
label_355284:
    // 0x355284: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x355284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x355288: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x355288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x35528c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x35528cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x355290: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x355290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x355294: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x355294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x355298: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x355298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x35529c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x35529cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3552a0: 0x24638fe0  addiu       $v1, $v1, -0x7020
    ctx->pc = 0x3552a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938592));
    // 0x3552a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3552a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3552a8:
    // 0x3552a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3552a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3552ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3552acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3552b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3552B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3552B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3552B0u;
        // 0x3552b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3552B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3552B8u;
}
