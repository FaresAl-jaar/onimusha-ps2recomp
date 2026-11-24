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

// Function: sub_00220EB0
// Address: 0x220eb0 - 0x220f18
void sub_00220EB0_0x220eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220EB0_0x220eb0");
#endif

    switch (ctx->pc) {
        case 0x220ec4u: goto label_220ec4;
        case 0x220ef0u: goto label_220ef0;
        case 0x220f04u: goto label_220f04;
        default: break;
    }

    ctx->pc = 0x220eb0u;

    // 0x220eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x220eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x220eb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x220eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x220ebc: 0xc084968  jal         func_2125A0
    ctx->pc = 0x220EBCu;
    SET_GPR_U32(ctx, 31, 0x220EC4u);
    ctx->pc = 0x220EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EBCu;
    // 0x220ec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x220EBCu, 0x220EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EC4u;
label_220ec4:
    // 0x220ec4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x220ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x220ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ecc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220ECCu;
    {
        const bool branch_taken_0x220ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ECCu;
        // 0x220ed0: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ecc) {
            ctx->pc = 0x220EE8u;
            goto label_220ee8;
        }
    }
    ctx->pc = 0x220ED4u;
    // 0x220ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x220ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220edc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220ee0: 0x80848e0  j           func_212380
    ctx->pc = 0x220EE0u;
    ctx->pc = 0x220EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EE0u;
    // 0x220ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x220EE8u;
label_220ee8:
    // 0x220ee8: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x220EE8u;
    SET_GPR_U32(ctx, 31, 0x220EF0u);
    ctx->pc = 0x220EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220EE8u;
    // 0x220eec: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x220EE8u, 0x220EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EF0u;
label_220ef0:
    // 0x220ef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220ef4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220EF4u;
    {
        const bool branch_taken_0x220ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x220EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EF4u;
        // 0x220ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ef4) {
            ctx->pc = 0x220F04u;
            goto label_220f04;
        }
    }
    ctx->pc = 0x220EFCu;
    // 0x220efc: 0xc0883c6  jal         func_220F18
    ctx->pc = 0x220EFCu;
    SET_GPR_U32(ctx, 31, 0x220F04u);
    ctx->pc = 0x220F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220F18u, 0x220EFCu, 0x220F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220F04u;
label_220f04:
    // 0x220f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220f08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x220f08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220f0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x220f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x220f10: 0x3e00008  jr          $ra
    ctx->pc = 0x220F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220F10u;
        // 0x220f14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220F18u;
}
