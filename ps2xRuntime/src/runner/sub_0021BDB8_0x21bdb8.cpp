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

// Function: sub_0021BDB8
// Address: 0x21bdb8 - 0x21be04
void sub_0021BDB8_0x21bdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BDB8_0x21bdb8");
#endif

    switch (ctx->pc) {
        case 0x21bdccu: goto label_21bdcc;
        case 0x21bde4u: goto label_21bde4;
        default: break;
    }

    ctx->pc = 0x21bdb8u;

    // 0x21bdb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21bdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21bdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bdc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21bdc4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21BDC4u;
    SET_GPR_U32(ctx, 31, 0x21BDCCu);
    ctx->pc = 0x21BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21BDC4u;
    // 0x21bdc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21BDC4u, 0x21BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDCCu;
label_21bdcc:
    // 0x21bdcc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21bdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21bdd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21bdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21BDD4u;
    {
        const bool branch_taken_0x21bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDD4u;
        // 0x21bdd8: 0x34a50141  ori         $a1, $a1, 0x141 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)321);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bdd4) {
            ctx->pc = 0x21BDF0u;
            goto label_21bdf0;
        }
    }
    ctx->pc = 0x21BDDCu;
    // 0x21bddc: 0xc0848e0  jal         func_212380
    ctx->pc = 0x21BDDCu;
    SET_GPR_U32(ctx, 31, 0x21BDE4u);
    ctx->pc = 0x212380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212380u, 0x21BDDCu, 0x21BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BDE4u;
label_21bde4:
    // 0x21bde4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21BDE4u;
    {
        const bool branch_taken_0x21bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDE4u;
        // 0x21bde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bde4) {
            ctx->pc = 0x21BDF4u;
            goto label_21bdf4;
        }
    }
    ctx->pc = 0x21BDECu;
    // 0x21bdec: 0x0  nop
    ctx->pc = 0x21bdecu;
    // NOP
label_21bdf0:
    // 0x21bdf0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x21bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_21bdf4:
    // 0x21bdf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21bdf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bdf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21bdfc: 0x3e00008  jr          $ra
    ctx->pc = 0x21BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BDFCu;
        // 0x21be00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BE04u;
}
