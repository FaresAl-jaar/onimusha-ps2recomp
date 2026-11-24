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

// Function: sub_00116408
// Address: 0x116408 - 0x116480
void sub_00116408_0x116408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116408_0x116408");
#endif

    switch (ctx->pc) {
        case 0x116464u: goto label_116464;
        default: break;
    }

    ctx->pc = 0x116408u;

    // 0x116408: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x116408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x11640c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11640cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116410: 0x8c622b58  lw          $v0, 0x2B58($v1)
    ctx->pc = 0x116410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B58u));
    // 0x116414: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x116414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11641c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11641Cu;
    {
        const bool branch_taken_0x11641c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x116420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11641Cu;
        // 0x116420: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11641c) {
            ctx->pc = 0x11642Cu;
            goto label_11642c;
        }
    }
    ctx->pc = 0x116424u;
    // 0x116424: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x116424u;
    {
        const bool branch_taken_0x116424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116424u;
        // 0x116428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116424) {
            ctx->pc = 0x116470u;
            goto label_116470;
        }
    }
    ctx->pc = 0x11642Cu;
label_11642c:
    // 0x11642c: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x11642cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x116430: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x116434: 0xace50500  sw          $a1, 0x500($a3)
    ctx->pc = 0x116434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x690500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x690500u, _value); } while (0);
    // 0x116438: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x116438u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x11643c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x11643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x116440: 0x24e70500  addiu       $a3, $a3, 0x500
    ctx->pc = 0x116440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x116444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x116444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116448: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x116448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11644c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11644cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116450: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x116450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116454: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x116454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x116458: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11645c: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x11645Cu;
    SET_GPR_U32(ctx, 31, 0x116464u);
    ctx->pc = 0x116460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11645Cu;
    // 0x116460: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x11645Cu, 0x116464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116464u;
label_116464:
    // 0x116464: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x116464u;
    {
        const bool branch_taken_0x116464 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x116468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116464u;
        // 0x116468: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116464) {
            ctx->pc = 0x116470u;
            goto label_116470;
        }
    }
    ctx->pc = 0x11646Cu;
    // 0x11646c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_116470:
    // 0x116470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x116470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116474: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116478: 0x3e00008  jr          $ra
    ctx->pc = 0x116478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116478u;
        // 0x11647c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116480u;
}
