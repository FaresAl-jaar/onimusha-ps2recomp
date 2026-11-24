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

// Function: sub_0017BE80
// Address: 0x17be80 - 0x17bf68
void sub_0017BE80_0x17be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BE80_0x17be80");
#endif

    switch (ctx->pc) {
        case 0x17bf1cu: goto label_17bf1c;
        case 0x17bf28u: goto label_17bf28;
        case 0x17bf40u: goto label_17bf40;
        case 0x17bf4cu: goto label_17bf4c;
        default: break;
    }

    ctx->pc = 0x17be80u;

    // 0x17be80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17be84: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x17be84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17be88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17be8c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17be90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17be90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17be94: 0xa080001c  sb          $zero, 0x1C($a0)
    ctx->pc = 0x17be94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x17be98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17be98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17be9c: 0xac860010  sw          $a2, 0x10($a0)
    ctx->pc = 0x17be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 6));
    // 0x17bea0: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x17bea4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bea8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17beac: 0xa080001d  sb          $zero, 0x1D($a0)
    ctx->pc = 0x17beacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x17beb0: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x17beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x17beb4: 0xac870024  sw          $a3, 0x24($a0)
    ctx->pc = 0x17beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 7));
    // 0x17beb8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17bebc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17bec0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17bec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17bec4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x17bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x17bec8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17becc: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x17beccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x17bed0: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x17BED0u;
    {
        const bool branch_taken_0x17bed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BED0u;
        // 0x17bed4: 0xac860078  sw          $a2, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bed0) {
            ctx->pc = 0x17BF58u;
            goto label_17bf58;
        }
    }
    ctx->pc = 0x17BED8u;
    // 0x17bed8: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17bedc: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x17BEDCu;
    {
        const bool branch_taken_0x17bedc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bedc) {
            ctx->pc = 0x17BF38u;
            goto label_17bf38;
        }
    }
    ctx->pc = 0x17BEE4u;
    // 0x17bee4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x17bee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17bee8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x17bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x17beec: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17BEECu;
    {
        const bool branch_taken_0x17beec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17beec) {
            ctx->pc = 0x17BF30u;
            goto label_17bf30;
        }
    }
    ctx->pc = 0x17BEF4u;
    // 0x17bef4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x17bef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x17bef8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x17bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x17befc: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17BEFCu;
    {
        const bool branch_taken_0x17befc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17befc) {
            ctx->pc = 0x17BF30u;
            goto label_17bf30;
        }
    }
    ctx->pc = 0x17BF04u;
    // 0x17bf04: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x17bf04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x17bf08: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x17bf0c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17BF0Cu;
    {
        const bool branch_taken_0x17bf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17bf0c) {
            ctx->pc = 0x17BF30u;
            goto label_17bf30;
        }
    }
    ctx->pc = 0x17BF14u;
    // 0x17bf14: 0xc05f404  jal         func_17D010
    ctx->pc = 0x17BF14u;
    SET_GPR_U32(ctx, 31, 0x17BF1Cu);
    ctx->pc = 0x17BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF14u;
    // 0x17bf18: 0xa206001d  sb          $a2, 0x1D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D010u, 0x17BF14u, 0x17BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF1Cu;
label_17bf1c:
    // 0x17bf1c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x17bf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x17bf20: 0xc05f420  jal         func_17D080
    ctx->pc = 0x17BF20u;
    SET_GPR_U32(ctx, 31, 0x17BF28u);
    ctx->pc = 0x17BF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF20u;
    // 0x17bf24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D080u, 0x17BF20u, 0x17BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF28u;
label_17bf28:
    // 0x17bf28: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x17bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x17bf2c: 0x0  nop
    ctx->pc = 0x17bf2cu;
    // NOP
label_17bf30:
    // 0x17bf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf34: 0xa202007c  sb          $v0, 0x7C($s0)
    ctx->pc = 0x17bf34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
label_17bf38:
    // 0x17bf38: 0xc05f3d4  jal         func_17CF50
    ctx->pc = 0x17BF38u;
    SET_GPR_U32(ctx, 31, 0x17BF40u);
    ctx->pc = 0x17BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF38u;
    // 0x17bf3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF50u, 0x17BF38u, 0x17BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF40u;
label_17bf40:
    // 0x17bf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf44: 0xc05f110  jal         func_17C440
    ctx->pc = 0x17BF44u;
    SET_GPR_U32(ctx, 31, 0x17BF4Cu);
    ctx->pc = 0x17BF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF44u;
    // 0x17bf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C440u, 0x17BF44u, 0x17BF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF4Cu;
label_17bf4c:
    // 0x17bf4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf50: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x17bf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x17bf54: 0x0  nop
    ctx->pc = 0x17bf54u;
    // NOP
label_17bf58:
    // 0x17bf58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17bf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bf5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17bf5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bf60: 0x3e00008  jr          $ra
    ctx->pc = 0x17BF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF60u;
        // 0x17bf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BF68u;
}
