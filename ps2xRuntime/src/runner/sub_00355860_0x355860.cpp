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

// Function: sub_00355860
// Address: 0x355860 - 0x3558c8
void sub_00355860_0x355860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355860_0x355860");
#endif

    switch (ctx->pc) {
        case 0x355894u: goto label_355894;
        default: break;
    }

    ctx->pc = 0x355860u;

    // 0x355860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355864: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x355864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x355868: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35586c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35586cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355870: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x355870u;
    {
        const bool branch_taken_0x355870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355870u;
        // 0x355874: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355870) {
            ctx->pc = 0x3558B8u;
            goto label_3558b8;
        }
    }
    ctx->pc = 0x355878u;
    // 0x355878: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x355878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x35587c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x35587cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x355880: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x355880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x355884: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x355884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x355888: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x355888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x35588c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x35588Cu;
    SET_GPR_U32(ctx, 31, 0x355894u);
    ctx->pc = 0x355890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35588Cu;
    // 0x355890: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x35588Cu, 0x355894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355894u;
label_355894:
    // 0x355894: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x355894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x355898: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x355898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x35589c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x35589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3558a0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3558a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3558a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3558a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3558a8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3558a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3558ac: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3558acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3558b0: 0x24639010  addiu       $v1, $v1, -0x6FF0
    ctx->pc = 0x3558b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938640));
    // 0x3558b4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3558b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3558b8:
    // 0x3558b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3558b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3558bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3558bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3558c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3558C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3558C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3558C0u;
        // 0x3558c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3558C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3558C8u;
}
