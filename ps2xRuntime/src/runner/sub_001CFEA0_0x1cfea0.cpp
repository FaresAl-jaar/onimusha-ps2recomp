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

// Function: sub_001CFEA0
// Address: 0x1cfea0 - 0x1cff60
void sub_001CFEA0_0x1cfea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFEA0_0x1cfea0");
#endif

    switch (ctx->pc) {
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff38u: goto label_1cff38;
        default: break;
    }

    ctx->pc = 0x1cfea0u;

    // 0x1cfea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cfea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cfea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cfeac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cfeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cfeb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfeb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfeb4: 0x90843022  lbu         $a0, 0x3022($a0)
    ctx->pc = 0x1cfeb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cfeb8: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CFEB8u;
    {
        const bool branch_taken_0x1cfeb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CFEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFEB8u;
        // 0x1cfebc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfeb8) {
            ctx->pc = 0x1CFF50u;
            goto label_1cff50;
        }
    }
    ctx->pc = 0x1CFEC0u;
    // 0x1cfec0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1CFEC0u;
    {
        const bool branch_taken_0x1cfec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cfec0) {
            ctx->pc = 0x1CFEF0u;
            goto label_1cfef0;
        }
    }
    ctx->pc = 0x1CFEC8u;
    // 0x1cfec8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFEC8u;
    {
        const bool branch_taken_0x1cfec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfec8) {
            ctx->pc = 0x1CFED8u;
            goto label_1cfed8;
        }
    }
    ctx->pc = 0x1CFED0u;
    // 0x1cfed0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CFED0u;
    {
        const bool branch_taken_0x1cfed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfed0) {
            ctx->pc = 0x1CFF50u;
            goto label_1cff50;
        }
    }
    ctx->pc = 0x1CFED8u;
label_1cfed8:
    // 0x1cfed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1cfedc: 0x9022cea4  lbu         $v0, -0x315C($at)
    ctx->pc = 0x1cfedcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81CEA4u));
    // 0x1cfee0: 0xa2023023  sb          $v0, 0x3023($s0)
    ctx->pc = 0x1cfee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12323), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cfee4: 0x92023022  lbu         $v0, 0x3022($s0)
    ctx->pc = 0x1cfee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cfee8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cfeec: 0xa2023022  sb          $v0, 0x3022($s0)
    ctx->pc = 0x1cfeecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 2));
label_1cfef0:
    // 0x1cfef0: 0xc074050  jal         func_1D0140
    ctx->pc = 0x1CFEF0u;
    SET_GPR_U32(ctx, 31, 0x1CFEF8u);
    ctx->pc = 0x1CFEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFEF0u;
    // 0x1cfef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0140u, 0x1CFEF0u, 0x1CFEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFEF8u;
label_1cfef8:
    // 0x1cfef8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1CFEF8u;
    {
        const bool branch_taken_0x1cfef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfef8) {
            ctx->pc = 0x1CFF50u;
            goto label_1cff50;
        }
    }
    ctx->pc = 0x1CFF00u;
    // 0x1cff00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cff04: 0xaf8080d4  sw          $zero, -0x7F2C($gp)
    ctx->pc = 0x1cff04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934740), GPR_U32(ctx, 0));
    // 0x1cff08: 0xa38280df  sb          $v0, -0x7F21($gp)
    ctx->pc = 0x1cff08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934751), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cff0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff10: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x1cff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1cff14: 0xaf8087d4  sw          $zero, -0x782C($gp)
    ctx->pc = 0x1cff14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936532), GPR_U32(ctx, 0));
    // 0x1cff18: 0xa2023026  sb          $v0, 0x3026($s0)
    ctx->pc = 0x1cff18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12326), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cff1c: 0x8e043030  lw          $a0, 0x3030($s0)
    ctx->pc = 0x1cff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12336)));
    // 0x1cff20: 0xc073784  jal         func_1CDE10
    ctx->pc = 0x1CFF20u;
    SET_GPR_U32(ctx, 31, 0x1CFF28u);
    ctx->pc = 0x1CFF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF20u;
    // 0x1cff24: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE10u, 0x1CFF20u, 0x1CFF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF28u;
label_1cff28:
    // 0x1cff28: 0x8e043034  lw          $a0, 0x3034($s0)
    ctx->pc = 0x1cff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12340)));
    // 0x1cff2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff30: 0xc073784  jal         func_1CDE10
    ctx->pc = 0x1CFF30u;
    SET_GPR_U32(ctx, 31, 0x1CFF38u);
    ctx->pc = 0x1CFF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF30u;
    // 0x1cff34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE10u, 0x1CFF30u, 0x1CFF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF38u;
label_1cff38:
    // 0x1cff38: 0x92043022  lbu         $a0, 0x3022($s0)
    ctx->pc = 0x1cff38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12322)));
    // 0x1cff3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cff40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1cff44: 0xa2043022  sb          $a0, 0x3022($s0)
    ctx->pc = 0x1cff44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12322), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cff48: 0xa2033021  sb          $v1, 0x3021($s0)
    ctx->pc = 0x1cff48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12321), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cff4c: 0x0  nop
    ctx->pc = 0x1cff4cu;
    // NOP
label_1cff50:
    // 0x1cff50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cff54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff58: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF58u;
        // 0x1cff5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF60u;
}
