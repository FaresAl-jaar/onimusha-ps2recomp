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

// Function: sub_003AF210
// Address: 0x3af210 - 0x3af278
void sub_003AF210_0x3af210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF210_0x3af210");
#endif

    switch (ctx->pc) {
        case 0x3af244u: goto label_3af244;
        default: break;
    }

    ctx->pc = 0x3af210u;

    // 0x3af210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3af214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3af214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3af218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3af218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3af21c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af220: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AF220u;
    {
        const bool branch_taken_0x3af220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF220u;
        // 0x3af224: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af220) {
            ctx->pc = 0x3AF268u;
            goto label_3af268;
        }
    }
    ctx->pc = 0x3AF228u;
    // 0x3af228: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3af228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3af22c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3af22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3af230: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3af230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3af234: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3af234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3af238: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3af238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3af23c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3AF23Cu;
    SET_GPR_U32(ctx, 31, 0x3AF244u);
    ctx->pc = 0x3AF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF23Cu;
    // 0x3af240: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3AF23Cu, 0x3AF244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF244u;
label_3af244:
    // 0x3af244: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3af244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3af248: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3af248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3af24c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3af24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3af250: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x3af250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x3af254: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3af254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3af258: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3af258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3af25c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3af25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3af260: 0x2463a390  addiu       $v1, $v1, -0x5C70
    ctx->pc = 0x3af260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943632));
    // 0x3af264: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3af264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3af268:
    // 0x3af268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3af268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af26c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3af26cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af270: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF270u;
        // 0x3af274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF278u;
}
