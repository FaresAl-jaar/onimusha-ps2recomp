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

// Function: entry_116760
// Address: 0x116760 - 0x1167e0
void entry_116760_0x1167e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_116760_0x1167e0");
#endif

    switch (ctx->pc) {
        case 0x1167bcu: goto label_1167bc;
        default: break;
    }

    ctx->pc = 0x116760u;

    // 0x116760: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x116760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x116764: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x116764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x116768: 0x8c622b58  lw          $v0, 0x2B58($v1)
    ctx->pc = 0x116768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B58u));
    // 0x11676c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116770: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x116770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x116774: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116774u;
    {
        const bool branch_taken_0x116774 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x116778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116774u;
        // 0x116778: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116774) {
            ctx->pc = 0x116784u;
            goto label_116784;
        }
    }
    ctx->pc = 0x11677Cu;
    // 0x11677c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11677Cu;
    {
        const bool branch_taken_0x11677c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11677Cu;
        // 0x116780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11677c) {
            ctx->pc = 0x1167CCu;
            goto label_1167cc;
        }
    }
    ctx->pc = 0x116784u;
label_116784:
    // 0x116784: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x116784u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x116788: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11678c: 0xace50500  sw          $a1, 0x500($a3)
    ctx->pc = 0x11678cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x690500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x690500u, _value); } while (0);
    // 0x116790: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x116790u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x116794: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x116794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x116798: 0x24e70500  addiu       $a3, $a3, 0x500
    ctx->pc = 0x116798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x11679c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11679cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1167a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1167a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1167a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1167a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1167a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1167ac: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x1167acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x1167b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1167b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1167b4: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x1167B4u;
    SET_GPR_U32(ctx, 31, 0x1167BCu);
    ctx->pc = 0x1167B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167B4u;
    // 0x1167b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x1167B4u, 0x1167BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167BCu;
label_1167bc:
    // 0x1167bc: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1167BCu;
    {
        const bool branch_taken_0x1167bc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x1167bc) {
            ctx->pc = 0x1167C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1167BCu;
            // 0x1167c0: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167CCu;
            goto label_1167cc;
        }
    }
    ctx->pc = 0x1167C4u;
    // 0x1167c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1167c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1167c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1167c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1167cc:
    // 0x1167cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1167ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1167d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1167d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1167d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1167D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1167D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167D4u;
        // 0x1167d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1167D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1167DCu;
    // 0x1167dc: 0x0  nop
    ctx->pc = 0x1167dcu;
    // NOP
    ctx->pc = 0x1167e0u;
}
