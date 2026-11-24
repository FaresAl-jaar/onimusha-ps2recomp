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

// Function: entry_1166e0
// Address: 0x1166e0 - 0x116760
void entry_1166e0_0x116760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1166e0_0x116760");
#endif

    switch (ctx->pc) {
        case 0x11673cu: goto label_11673c;
        default: break;
    }

    ctx->pc = 0x1166e0u;

    // 0x1166e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1166e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1166e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1166e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1166e8: 0x8c622b58  lw          $v0, 0x2B58($v1)
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x402B58u));
    // 0x1166ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1166ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1166f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1166f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1166F4u;
    {
        const bool branch_taken_0x1166f4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1166F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F4u;
        // 0x1166f8: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166f4) {
            ctx->pc = 0x116704u;
            goto label_116704;
        }
    }
    ctx->pc = 0x1166FCu;
    // 0x1166fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1166FCu;
    {
        const bool branch_taken_0x1166fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166FCu;
        // 0x116700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166fc) {
            ctx->pc = 0x11674Cu;
            goto label_11674c;
        }
    }
    ctx->pc = 0x116704u;
label_116704:
    // 0x116704: 0x3c070069  lui         $a3, 0x69
    ctx->pc = 0x116704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)105 << 16));
    // 0x116708: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x11670c: 0xace50500  sw          $a1, 0x500($a3)
    ctx->pc = 0x11670cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x690500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x690500u, _value); } while (0);
    // 0x116710: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x116710u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x116714: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x116714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x116718: 0x24e70500  addiu       $a3, $a3, 0x500
    ctx->pc = 0x116718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x11671c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x116720: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x116720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x116724: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x116724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116728: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x116728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11672c: 0x260904c0  addiu       $t1, $s0, 0x4C0
    ctx->pc = 0x11672cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x116730: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x116730u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x116734: 0xc0447ca  jal         func_111F28
    ctx->pc = 0x116734u;
    SET_GPR_U32(ctx, 31, 0x11673Cu);
    ctx->pc = 0x116738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116734u;
    // 0x116738: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F28u, 0x116734u, 0x11673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11673Cu;
label_11673c:
    // 0x11673c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11673Cu;
    {
        const bool branch_taken_0x11673c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x11673c) {
            ctx->pc = 0x116740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11673Cu;
            // 0x116740: 0x8e0204c0  lw          $v0, 0x4C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11674Cu;
            goto label_11674c;
        }
    }
    ctx->pc = 0x116744u;
    // 0x116744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x116748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x116748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_11674c:
    // 0x11674c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11674cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116750: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x116750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116754: 0x3e00008  jr          $ra
    ctx->pc = 0x116754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116754u;
        // 0x116758: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11675Cu;
    // 0x11675c: 0x0  nop
    ctx->pc = 0x11675cu;
    // NOP
    ctx->pc = 0x116760u;
}
