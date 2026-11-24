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

// Function: sub_00224E98
// Address: 0x224e98 - 0x224edc
void sub_00224E98_0x224e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224E98_0x224e98");
#endif

    ctx->pc = 0x224e98u;

    // 0x224e98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x224e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224e9c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x224e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x224ea0: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x224ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x224ea4: 0x24a4ff20  addiu       $a0, $a1, -0xE0
    ctx->pc = 0x224ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x224ea8: 0x2c630020  sltiu       $v1, $v1, 0x20
    ctx->pc = 0x224ea8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x224eac: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x224EACu;
    {
        const bool branch_taken_0x224eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EACu;
        // 0x224eb0: 0x2c840010  sltiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x224eac) {
            ctx->pc = 0x224ED4u;
            goto label_224ed4;
        }
    }
    ctx->pc = 0x224EB4u;
    // 0x224eb4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x224EB4u;
    {
        const bool branch_taken_0x224eb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EB4u;
        // 0x224eb8: 0x240200e0  addiu       $v0, $zero, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224eb4) {
            ctx->pc = 0x224ED4u;
            goto label_224ed4;
        }
    }
    ctx->pc = 0x224EBCu;
    // 0x224ebc: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x224ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x224ec0: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x224EC0u;
    {
        const bool branch_taken_0x224ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x224EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EC0u;
        // 0x224ec4: 0x240300bf  addiu       $v1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ec0) {
            ctx->pc = 0x224ED4u;
            goto label_224ed4;
        }
    }
    ctx->pc = 0x224EC8u;
    // 0x224ec8: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x224EC8u;
    {
        const bool branch_taken_0x224ec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x224ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224EC8u;
        // 0x224ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ec8) {
            ctx->pc = 0x224ED4u;
            goto label_224ed4;
        }
    }
    ctx->pc = 0x224ED0u;
    // 0x224ed0: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x224ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_224ed4:
    // 0x224ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x224ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224EDCu;
}
