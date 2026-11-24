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

// Function: sub_0021ECC0
// Address: 0x21ecc0 - 0x21ed2c
void sub_0021ECC0_0x21ecc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021ECC0_0x21ecc0");
#endif

    switch (ctx->pc) {
        case 0x21ece0u: goto label_21ece0;
        case 0x21ed14u: goto label_21ed14;
        default: break;
    }

    ctx->pc = 0x21ecc0u;

    // 0x21ecc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ecc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ecc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ecc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ecc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ecd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21ecd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ecd8: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21ECD8u;
    SET_GPR_U32(ctx, 31, 0x21ECE0u);
    ctx->pc = 0x21ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECD8u;
    // 0x21ecdc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21ECD8u, 0x21ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECE0u;
label_21ece0:
    // 0x21ece0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21ece4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21ECE4u;
    {
        const bool branch_taken_0x21ece4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECE4u;
        // 0x21ece8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ece4) {
            ctx->pc = 0x21ED08u;
            goto label_21ed08;
        }
    }
    ctx->pc = 0x21ECECu;
    // 0x21ecec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ececu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ecf0: 0x34a50154  ori         $a1, $a1, 0x154
    ctx->pc = 0x21ecf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)340);
    // 0x21ecf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ecf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ecf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ecf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ecfc: 0x80848e0  j           func_212380
    ctx->pc = 0x21ECFCu;
    ctx->pc = 0x21ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECFCu;
    // 0x21ed00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21ED04u;
    // 0x21ed04: 0x0  nop
    ctx->pc = 0x21ed04u;
    // NOP
label_21ed08:
    // 0x21ed08: 0x8e2436b0  lw          $a0, 0x36B0($s1)
    ctx->pc = 0x21ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14000)));
    // 0x21ed0c: 0xc087b4c  jal         func_21ED30
    ctx->pc = 0x21ED0Cu;
    SET_GPR_U32(ctx, 31, 0x21ED14u);
    ctx->pc = 0x21ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED0Cu;
    // 0x21ed10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21ED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21ED30u, 0x21ED0Cu, 0x21ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED14u;
label_21ed14:
    // 0x21ed14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ed14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21ed18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ed1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ed1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ed20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ed20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ed24: 0x3e00008  jr          $ra
    ctx->pc = 0x21ED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED24u;
        // 0x21ed28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ED2Cu;
}
