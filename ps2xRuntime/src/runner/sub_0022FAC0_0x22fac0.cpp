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

// Function: sub_0022FAC0
// Address: 0x22fac0 - 0x22fb00
void sub_0022FAC0_0x22fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FAC0_0x22fac0");
#endif

    switch (ctx->pc) {
        case 0x22fadcu: goto label_22fadc;
        default: break;
    }

    ctx->pc = 0x22fac0u;

    // 0x22fac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22fac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fac8: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x22fac8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x22facc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22fad0: 0x2610cde8  addiu       $s0, $s0, -0x3218
    ctx->pc = 0x22fad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954472));
    // 0x22fad4: 0xc08c1ce  jal         func_230738
    ctx->pc = 0x22FAD4u;
    SET_GPR_U32(ctx, 31, 0x22FADCu);
    ctx->pc = 0x22FAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FAD4u;
    // 0x22fad8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230738u, 0x22FAD4u, 0x22FADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FADCu;
label_22fadc:
    // 0x22fadc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x22fadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x22fae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22fae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fae4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22fae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22faec: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22faecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22faf0: 0xac40cde4  sw          $zero, -0x321C($v0)
    ctx->pc = 0x22faf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE4u, _value); } while (0);
    // 0x22faf4: 0xac60cdfc  sw          $zero, -0x3204($v1)
    ctx->pc = 0x22faf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDFCu, _value); } while (0);
    // 0x22faf8: 0x3e00008  jr          $ra
    ctx->pc = 0x22FAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FAF8u;
        // 0x22fafc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FB00u;
}
