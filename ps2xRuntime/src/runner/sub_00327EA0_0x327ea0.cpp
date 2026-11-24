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

// Function: sub_00327EA0
// Address: 0x327ea0 - 0x327f08
void sub_00327EA0_0x327ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327EA0_0x327ea0");
#endif

    switch (ctx->pc) {
        case 0x327ed4u: goto label_327ed4;
        default: break;
    }

    ctx->pc = 0x327ea0u;

    // 0x327ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x327eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327eb0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x327EB0u;
    {
        const bool branch_taken_0x327eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB0u;
        // 0x327eb4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327eb0) {
            ctx->pc = 0x327EF8u;
            goto label_327ef8;
        }
    }
    ctx->pc = 0x327EB8u;
    // 0x327eb8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327ebc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x327ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x327ec0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x327ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x327ec4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x327ec8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x327ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x327ecc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x327ECCu;
    SET_GPR_U32(ctx, 31, 0x327ED4u);
    ctx->pc = 0x327ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327ECCu;
    // 0x327ed0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x327ECCu, 0x327ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327ED4u;
label_327ed4:
    // 0x327ed4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x327ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x327ed8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x327ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x327edc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x327edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x327ee0: 0x24848030  addiu       $a0, $a0, -0x7FD0
    ctx->pc = 0x327ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    // 0x327ee4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x327ee8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x327ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x327eec: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x327eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x327ef0: 0x246386c0  addiu       $v1, $v1, -0x7940
    ctx->pc = 0x327ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936256));
    // 0x327ef4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x327ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_327ef8:
    // 0x327ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x327efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327f00: 0x3e00008  jr          $ra
    ctx->pc = 0x327F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F00u;
        // 0x327f04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327F08u;
}
