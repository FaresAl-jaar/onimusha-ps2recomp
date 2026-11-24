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

// Function: sub_002CBDE0
// Address: 0x2cbde0 - 0x2cbe84
void sub_002CBDE0_0x2cbde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBDE0_0x2cbde0");
#endif

    switch (ctx->pc) {
        case 0x2cbe68u: goto label_2cbe68;
        default: break;
    }

    ctx->pc = 0x2cbde0u;

    // 0x2cbde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbde4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2cbde4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cbde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cbdec: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CBDECu;
    {
        const bool branch_taken_0x2cbdec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBDECu;
        // 0x2cbdf0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbdec) {
            ctx->pc = 0x2CBE10u;
            goto label_2cbe10;
        }
    }
    ctx->pc = 0x2CBDF4u;
    // 0x2cbdf4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CBDF4u;
    {
        const bool branch_taken_0x2cbdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdf4) {
            ctx->pc = 0x2CBE10u;
            goto label_2cbe10;
        }
    }
    ctx->pc = 0x2CBDFCu;
    // 0x2cbdfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBDFCu;
    {
        const bool branch_taken_0x2cbdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbdfc) {
            ctx->pc = 0x2CBE10u;
            goto label_2cbe10;
        }
    }
    ctx->pc = 0x2CBE04u;
    // 0x2cbe04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2CBE04u;
    {
        const bool branch_taken_0x2cbe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE04u;
        // 0x2cbe08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe04) {
            ctx->pc = 0x2CBE78u;
            goto label_2cbe78;
        }
    }
    ctx->pc = 0x2CBE0Cu;
    // 0x2cbe0c: 0x0  nop
    ctx->pc = 0x2cbe0cu;
    // NOP
label_2cbe10:
    // 0x2cbe10: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2cbe10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe14: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2cbe14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2cbe18: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2cbe18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe1c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2cbe1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe20: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cbe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2cbe24: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2cbe24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cbe28: 0x246359d0  addiu       $v1, $v1, 0x59D0
    ctx->pc = 0x2cbe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22992));
    // 0x2cbe2c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x2cbe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cbe30: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x2cbe30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2cbe34: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2cbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2cbe38: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x2cbe38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x2cbe3c: 0x24429b60  addiu       $v0, $v0, -0x64A0
    ctx->pc = 0x2cbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941536));
    // 0x2cbe40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cbe40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe44: 0xaf828a34  sw          $v0, -0x75CC($gp)
    ctx->pc = 0x2cbe44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 2));
    // 0x2cbe48: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbe4c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2cbe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cbe50: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x2cbe50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x2cbe54: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cbe54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbe58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2cbe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2cbe5c: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x2cbe5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
    // 0x2cbe60: 0xc0510e0  jal         func_144380
    ctx->pc = 0x2CBE60u;
    SET_GPR_U32(ctx, 31, 0x2CBE68u);
    ctx->pc = 0x2CBE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBE60u;
    // 0x2cbe64: 0xaf828a2c  sw          $v0, -0x75D4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x2CBE60u, 0x2CBE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBE68u;
label_2cbe68:
    // 0x2cbe68: 0xaf808a2c  sw          $zero, -0x75D4($gp)
    ctx->pc = 0x2cbe68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937132), GPR_U32(ctx, 0));
    // 0x2cbe6c: 0xaf808a30  sw          $zero, -0x75D0($gp)
    ctx->pc = 0x2cbe6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 0));
    // 0x2cbe70: 0xaf808a34  sw          $zero, -0x75CC($gp)
    ctx->pc = 0x2cbe70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937140), GPR_U32(ctx, 0));
    // 0x2cbe74: 0x0  nop
    ctx->pc = 0x2cbe74u;
    // NOP
label_2cbe78:
    // 0x2cbe78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cbe78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbe7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE7Cu;
        // 0x2cbe80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBE7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBE84u;
}
