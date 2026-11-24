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

// Function: sub_0010BE08
// Address: 0x10be08 - 0x10bed4
void sub_0010BE08_0x10be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BE08_0x10be08");
#endif

    switch (ctx->pc) {
        case 0x10be44u: goto label_10be44;
        case 0x10bea4u: goto label_10bea4;
        case 0x10beacu: goto label_10beac;
        default: break;
    }

    ctx->pc = 0x10be08u;

    // 0x10be08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10be0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10be10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10be14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10be18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10be18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10be20: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10be20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10be24: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10BE24u;
    {
        const bool branch_taken_0x10be24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE24u;
        // 0x10be28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be24) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BE2Cu;
    // 0x10be2c: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x10be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x10be30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BE30u;
    {
        const bool branch_taken_0x10be30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE30u;
        // 0x10be34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be30) {
            ctx->pc = 0x10BE50u;
            goto label_10be50;
        }
    }
    ctx->pc = 0x10BE38u;
    // 0x10be38: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x10be38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x10be3c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10BE3Cu;
    SET_GPR_U32(ctx, 31, 0x10BE44u);
    ctx->pc = 0x10BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE3Cu;
    // 0x10be40: 0x24a522b8  addiu       $a1, $a1, 0x22B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10BE3Cu, 0x10BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE44u;
label_10be44:
    // 0x10be44: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x10be44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x10be48: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x10be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10be4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_10be50:
    // 0x10be50: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10BE50u;
    {
        const bool branch_taken_0x10be50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE50u;
        // 0x10be54: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be50) {
            ctx->pc = 0x10BE8Cu;
            goto label_10be8c;
        }
    }
    ctx->pc = 0x10BE58u;
    // 0x10be58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BE58u;
    {
        const bool branch_taken_0x10be58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE58u;
        // 0x10be5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be58) {
            ctx->pc = 0x10BE70u;
            goto label_10be70;
        }
    }
    ctx->pc = 0x10BE60u;
    // 0x10be60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BE60u;
    {
        const bool branch_taken_0x10be60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE60u;
        // 0x10be64: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be60) {
            ctx->pc = 0x10BE84u;
            goto label_10be84;
        }
    }
    ctx->pc = 0x10BE68u;
    // 0x10be68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10BE68u;
    {
        const bool branch_taken_0x10be68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE68u;
        // 0x10be6c: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be68) {
            ctx->pc = 0x10BE98u;
            goto label_10be98;
        }
    }
    ctx->pc = 0x10BE70u;
label_10be70:
    // 0x10be70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10be74: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10BE74u;
    {
        const bool branch_taken_0x10be74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE74u;
        // 0x10be78: 0x3c050066  lui         $a1, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be74) {
            ctx->pc = 0x10BE94u;
            goto label_10be94;
        }
    }
    ctx->pc = 0x10BE7Cu;
    // 0x10be7c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10BE7Cu;
    {
        const bool branch_taken_0x10be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE7Cu;
        // 0x10be80: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be7c) {
            ctx->pc = 0x10BEA4u;
            goto label_10bea4;
        }
    }
    ctx->pc = 0x10BE84u;
label_10be84:
    // 0x10be84: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10BE84u;
    {
        const bool branch_taken_0x10be84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE84u;
        // 0x10be88: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be84) {
            ctx->pc = 0x10BEA4u;
            goto label_10bea4;
        }
    }
    ctx->pc = 0x10BE8Cu;
label_10be8c:
    // 0x10be8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BE8Cu;
    {
        const bool branch_taken_0x10be8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE8Cu;
        // 0x10be90: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be8c) {
            ctx->pc = 0x10BEA4u;
            goto label_10bea4;
        }
    }
    ctx->pc = 0x10BE94u;
label_10be94:
    // 0x10be94: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_10be98:
    // 0x10be98: 0x24a522d8  addiu       $a1, $a1, 0x22D8
    ctx->pc = 0x10be98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8920));
    // 0x10be9c: 0xc043536  jal         func_10D4D8
    ctx->pc = 0x10BE9Cu;
    SET_GPR_U32(ctx, 31, 0x10BEA4u);
    ctx->pc = 0x10BEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE9Cu;
    // 0x10bea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D4D8u, 0x10BE9Cu, 0x10BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEA4u;
label_10bea4:
    // 0x10bea4: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x10BEA4u;
    SET_GPR_U32(ctx, 31, 0x10BEACu);
    ctx->pc = 0x10BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BEA4u;
    // 0x10bea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106FD8u, 0x10BEA4u, 0x10BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEACu;
label_10beac:
    // 0x10beac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10beacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10beb0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10BEB0u;
    {
        const bool branch_taken_0x10beb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEB0u;
        // 0x10beb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10beb0) {
            ctx->pc = 0x10BEBCu;
            goto label_10bebc;
        }
    }
    ctx->pc = 0x10BEB8u;
    // 0x10beb8: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x10beb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_10bebc:
    // 0x10bebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10bebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bec0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10bec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bec4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10bec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10becc: 0x3e00008  jr          $ra
    ctx->pc = 0x10BECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BECCu;
        // 0x10bed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BED4u;
}
