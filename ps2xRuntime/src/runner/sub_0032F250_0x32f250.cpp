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

// Function: sub_0032F250
// Address: 0x32f250 - 0x32f2b8
void sub_0032F250_0x32f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F250_0x32f250");
#endif

    switch (ctx->pc) {
        case 0x32f284u: goto label_32f284;
        default: break;
    }

    ctx->pc = 0x32f250u;

    // 0x32f250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32f254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32f254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32f258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32f258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32f25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32f25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f260: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32F260u;
    {
        const bool branch_taken_0x32f260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F260u;
        // 0x32f264: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f260) {
            ctx->pc = 0x32F2A8u;
            goto label_32f2a8;
        }
    }
    ctx->pc = 0x32F268u;
    // 0x32f268: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x32f268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32f26c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x32f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x32f270: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x32f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x32f274: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x32f274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x32f278: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x32f278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x32f27c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x32F27Cu;
    SET_GPR_U32(ctx, 31, 0x32F284u);
    ctx->pc = 0x32F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F27Cu;
    // 0x32f280: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x32F27Cu, 0x32F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F284u;
label_32f284:
    // 0x32f284: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x32f284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32f288: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x32f28c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x32f28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x32f290: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x32f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x32f294: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x32f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x32f298: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x32f29c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x32f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x32f2a0: 0x24638750  addiu       $v1, $v1, -0x78B0
    ctx->pc = 0x32f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936400));
    // 0x32f2a4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x32f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_32f2a8:
    // 0x32f2a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x32F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2B0u;
        // 0x32f2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F2B8u;
}
