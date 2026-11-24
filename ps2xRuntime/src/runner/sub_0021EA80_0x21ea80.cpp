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

// Function: sub_0021EA80
// Address: 0x21ea80 - 0x21eaf0
void sub_0021EA80_0x21ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EA80_0x21ea80");
#endif

    switch (ctx->pc) {
        case 0x21ea9cu: goto label_21ea9c;
        case 0x21eaa4u: goto label_21eaa4;
        default: break;
    }

    ctx->pc = 0x21ea80u;

    // 0x21ea80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21ea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21ea84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ea84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ea8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ea8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ea90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21ea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21ea94: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x21EA94u;
    SET_GPR_U32(ctx, 31, 0x21EA9Cu);
    ctx->pc = 0x21EA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA94u;
    // 0x21ea98: 0x24060376  addiu       $a2, $zero, 0x376 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 886));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x21EA94u, 0x21EA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA9Cu;
label_21ea9c:
    // 0x21ea9c: 0xc087abc  jal         func_21EAF0
    ctx->pc = 0x21EA9Cu;
    SET_GPR_U32(ctx, 31, 0x21EAA4u);
    ctx->pc = 0x21EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA9Cu;
    // 0x21eaa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EAF0u, 0x21EA9Cu, 0x21EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAA4u;
label_21eaa4:
    // 0x21eaa4: 0xae000da8  sw          $zero, 0xDA8($s0)
    ctx->pc = 0x21eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3496), GPR_U32(ctx, 0));
    // 0x21eaa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21eaac: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x21eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x21eab0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21eab4: 0xae020dd4  sw          $v0, 0xDD4($s0)
    ctx->pc = 0x21eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3540), GPR_U32(ctx, 2));
    // 0x21eab8: 0xae030dc8  sw          $v1, 0xDC8($s0)
    ctx->pc = 0x21eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3528), GPR_U32(ctx, 3));
    // 0x21eabc: 0xae040dcc  sw          $a0, 0xDCC($s0)
    ctx->pc = 0x21eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3532), GPR_U32(ctx, 4));
    // 0x21eac0: 0xae000dac  sw          $zero, 0xDAC($s0)
    ctx->pc = 0x21eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3500), GPR_U32(ctx, 0));
    // 0x21eac4: 0xae030db0  sw          $v1, 0xDB0($s0)
    ctx->pc = 0x21eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3504), GPR_U32(ctx, 3));
    // 0x21eac8: 0xae040db4  sw          $a0, 0xDB4($s0)
    ctx->pc = 0x21eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3508), GPR_U32(ctx, 4));
    // 0x21eacc: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x21eaccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
    // 0x21ead0: 0xae020dbc  sw          $v0, 0xDBC($s0)
    ctx->pc = 0x21ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 2));
    // 0x21ead4: 0xae000dc0  sw          $zero, 0xDC0($s0)
    ctx->pc = 0x21ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3520), GPR_U32(ctx, 0));
    // 0x21ead8: 0xae000dc4  sw          $zero, 0xDC4($s0)
    ctx->pc = 0x21ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3524), GPR_U32(ctx, 0));
    // 0x21eadc: 0xae000dd0  sw          $zero, 0xDD0($s0)
    ctx->pc = 0x21eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3536), GPR_U32(ctx, 0));
    // 0x21eae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21eae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21eae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21eae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21eae8: 0x3e00008  jr          $ra
    ctx->pc = 0x21EAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAE8u;
        // 0x21eaec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EAF0u;
}
