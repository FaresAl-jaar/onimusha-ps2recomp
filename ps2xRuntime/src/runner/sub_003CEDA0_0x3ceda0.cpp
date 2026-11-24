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

// Function: sub_003CEDA0
// Address: 0x3ceda0 - 0x3cee08
void sub_003CEDA0_0x3ceda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEDA0_0x3ceda0");
#endif

    switch (ctx->pc) {
        case 0x3cedd4u: goto label_3cedd4;
        default: break;
    }

    ctx->pc = 0x3ceda0u;

    // 0x3ceda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ceda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ceda4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ceda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ceda8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ceda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cedac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cedacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cedb0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CEDB0u;
    {
        const bool branch_taken_0x3cedb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEDB0u;
        // 0x3cedb4: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cedb0) {
            ctx->pc = 0x3CEDF8u;
            goto label_3cedf8;
        }
    }
    ctx->pc = 0x3CEDB8u;
    // 0x3cedb8: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3cedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3cedbc: 0x246377e0  addiu       $v1, $v1, 0x77E0
    ctx->pc = 0x3cedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30688));
    // 0x3cedc0: 0x24427800  addiu       $v0, $v0, 0x7800
    ctx->pc = 0x3cedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30720));
    // 0x3cedc4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3cedc8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x3cedc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
    // 0x3cedcc: 0xc09d694  jal         func_275A50
    ctx->pc = 0x3CEDCCu;
    SET_GPR_U32(ctx, 31, 0x3CEDD4u);
    ctx->pc = 0x3CEDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEDCCu;
    // 0x3cedd0: 0xae0204d4  sw          $v0, 0x4D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x3CEDCCu, 0x3CEDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEDD4u;
label_3cedd4:
    // 0x3cedd4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3cedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3cedd8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x3cedd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x3ceddc: 0x246381b0  addiu       $v1, $v1, -0x7E50
    ctx->pc = 0x3ceddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934960));
    // 0x3cede0: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x3cede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
    // 0x3cede4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cede4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
    // 0x3cede8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3cede8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3cedec: 0xae0404d4  sw          $a0, 0x4D4($s0)
    ctx->pc = 0x3cedecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 4));
    // 0x3cedf0: 0x2463a940  addiu       $v1, $v1, -0x56C0
    ctx->pc = 0x3cedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945088));
    // 0x3cedf4: 0xae0304d4  sw          $v1, 0x4D4($s0)
    ctx->pc = 0x3cedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1236), GPR_U32(ctx, 3));
label_3cedf8:
    // 0x3cedf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cedf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cedfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cedfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cee00: 0x3e00008  jr          $ra
    ctx->pc = 0x3CEE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE00u;
        // 0x3cee04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CEE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CEE08u;
}
