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

// Function: sub_002D9500
// Address: 0x2d9500 - 0x2d9570
void sub_002D9500_0x2d9500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9500_0x2d9500");
#endif

    switch (ctx->pc) {
        case 0x2d9534u: goto label_2d9534;
        case 0x2d953cu: goto label_2d953c;
        default: break;
    }

    ctx->pc = 0x2d9500u;

    // 0x2d9500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d950c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d950cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9510: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9510u;
    {
        const bool branch_taken_0x2d9510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9510u;
        // 0x2d9514: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9510) {
            ctx->pc = 0x2D9560u;
            goto label_2d9560;
        }
    }
    ctx->pc = 0x2D9518u;
    // 0x2d9518: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2d9518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2d951c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x2d951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x2d9520: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x2d9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x2d9524: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2d9524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2d9528: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x2d9528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x2d952c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x2D952Cu;
    SET_GPR_U32(ctx, 31, 0x2D9534u);
    ctx->pc = 0x2D9530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D952Cu;
    // 0x2d9530: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x2D952Cu, 0x2D9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9534u;
label_2d9534:
    // 0x2d9534: 0xc09d694  jal         func_275A50
    ctx->pc = 0x2D9534u;
    SET_GPR_U32(ctx, 31, 0x2D953Cu);
    ctx->pc = 0x2D9538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9534u;
    // 0x2d9538: 0x26042930  addiu       $a0, $s0, 0x2930 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 10544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x2D9534u, 0x2D953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D953Cu;
label_2d953c:
    // 0x2d953c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d9540: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d9540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9544: 0x246376c0  addiu       $v1, $v1, 0x76C0
    ctx->pc = 0x2d9544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30400));
    // 0x2d9548: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2d9548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2d954c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2d954cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2d9550: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2d9550u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d9554: 0x246378f0  addiu       $v1, $v1, 0x78F0
    ctx->pc = 0x2d9554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30960));
    // 0x2d9558: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x2d9558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x2d955c: 0x0  nop
    ctx->pc = 0x2d955cu;
    // NOP
label_2d9560:
    // 0x2d9560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9568: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9568u;
        // 0x2d956c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9570u;
}
