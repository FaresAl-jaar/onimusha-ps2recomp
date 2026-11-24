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

// Function: sub_00357D20
// Address: 0x357d20 - 0x357d88
void sub_00357D20_0x357d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357D20_0x357d20");
#endif

    switch (ctx->pc) {
        case 0x357d54u: goto label_357d54;
        default: break;
    }

    ctx->pc = 0x357d20u;

    // 0x357d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x357d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x357d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x357d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x357d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x357d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357d30: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x357D30u;
    {
        const bool branch_taken_0x357d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D30u;
        // 0x357d34: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d30) {
            ctx->pc = 0x357D78u;
            goto label_357d78;
        }
    }
    ctx->pc = 0x357D38u;
    // 0x357d38: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x357d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x357d3c: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x357d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x357d40: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x357d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x357d44: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x357d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x357d48: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x357d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x357d4c: 0xc09d694  jal         func_275A50
    ctx->pc = 0x357D4Cu;
    SET_GPR_U32(ctx, 31, 0x357D54u);
    ctx->pc = 0x357D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357D4Cu;
    // 0x357d50: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x357D4Cu, 0x357D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357D54u;
label_357d54:
    // 0x357d54: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x357d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x357d58: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x357d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x357d5c: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x357d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x357d60: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x357d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x357d64: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x357d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x357d68: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x357d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x357d6c: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x357d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x357d70: 0x246390b0  addiu       $v1, $v1, -0x6F50
    ctx->pc = 0x357d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938800));
    // 0x357d74: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x357d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_357d78:
    // 0x357d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x357d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357d7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357d80: 0x3e00008  jr          $ra
    ctx->pc = 0x357D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357D80u;
        // 0x357d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D88u;
}
