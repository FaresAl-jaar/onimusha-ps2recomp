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

// Function: sub_0032BDA0
// Address: 0x32bda0 - 0x32beac
void sub_0032BDA0_0x32bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BDA0_0x32bda0");
#endif

    switch (ctx->pc) {
        case 0x32be08u: goto label_32be08;
        default: break;
    }

    ctx->pc = 0x32bda0u;

    // 0x32bda0: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x32bda0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x32bda4: 0x24030e85  addiu       $v1, $zero, 0xE85
    ctx->pc = 0x32bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3717));
    // 0x32bda8: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x32bda8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x32bdac: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32BDACu;
    {
        const bool branch_taken_0x32bdac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDACu;
        // 0x32bdb0: 0x24030e95  addiu       $v1, $zero, 0xE95 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3733));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bdac) {
            ctx->pc = 0x32BDF0u;
            goto label_32bdf0;
        }
    }
    ctx->pc = 0x32BDB4u;
    // 0x32bdb4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32BDB4u;
    {
        const bool branch_taken_0x32bdb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32bdb4) {
            ctx->pc = 0x32BDE8u;
            goto label_32bde8;
        }
    }
    ctx->pc = 0x32BDBCu;
    // 0x32bdbc: 0x24030e94  addiu       $v1, $zero, 0xE94
    ctx->pc = 0x32bdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3732));
    // 0x32bdc0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32BDC0u;
    {
        const bool branch_taken_0x32bdc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x32BDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDC0u;
        // 0x32bdc4: 0x24030e84  addiu       $v1, $zero, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bdc0) {
            ctx->pc = 0x32BDE0u;
            goto label_32bde0;
        }
    }
    ctx->pc = 0x32BDC8u;
    // 0x32bdc8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BDC8u;
    {
        const bool branch_taken_0x32bdc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32bdc8) {
            ctx->pc = 0x32BDD8u;
            goto label_32bdd8;
        }
    }
    ctx->pc = 0x32BDD0u;
    // 0x32bdd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32BDD0u;
    {
        const bool branch_taken_0x32bdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bdd0) {
            ctx->pc = 0x32BDF8u;
            goto label_32bdf8;
        }
    }
    ctx->pc = 0x32BDD8u;
label_32bdd8:
    // 0x32bdd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32BDD8u;
    {
        const bool branch_taken_0x32bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDD8u;
        // 0x32bddc: 0x64040020  daddiu      $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bdd8) {
            ctx->pc = 0x32BE00u;
            goto label_32be00;
        }
    }
    ctx->pc = 0x32BDE0u;
label_32bde0:
    // 0x32bde0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32BDE0u;
    {
        const bool branch_taken_0x32bde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE0u;
        // 0x32bde4: 0x640400f1  daddiu      $a0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)241);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bde0) {
            ctx->pc = 0x32BE00u;
            goto label_32be00;
        }
    }
    ctx->pc = 0x32BDE8u;
label_32bde8:
    // 0x32bde8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32BDE8u;
    {
        const bool branch_taken_0x32bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDE8u;
        // 0x32bdec: 0x640400f3  daddiu      $a0, $zero, 0xF3 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)243);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bde8) {
            ctx->pc = 0x32BE00u;
            goto label_32be00;
        }
    }
    ctx->pc = 0x32BDF0u;
label_32bdf0:
    // 0x32bdf0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32BDF0u;
    {
        const bool branch_taken_0x32bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BDF0u;
        // 0x32bdf4: 0x640400f4  daddiu      $a0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)244);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bdf0) {
            ctx->pc = 0x32BE00u;
            goto label_32be00;
        }
    }
    ctx->pc = 0x32BDF8u;
label_32bdf8:
    // 0x32bdf8: 0x640400ff  daddiu      $a0, $zero, 0xFF
    ctx->pc = 0x32bdf8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
    // 0x32bdfc: 0x0  nop
    ctx->pc = 0x32bdfcu;
    // NOP
label_32be00:
    // 0x32be00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32be00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32be04: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x32be04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_32be08:
    // 0x32be08: 0x8f888ba8  lw          $t0, -0x7458($gp)
    ctx->pc = 0x32be08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x32be0c: 0x11000020  beqz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x32BE0Cu;
    {
        const bool branch_taken_0x32be0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE0Cu;
        // 0x32be10: 0x308500ff  andi        $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be0c) {
            ctx->pc = 0x32BE90u;
            goto label_32be90;
        }
    }
    ctx->pc = 0x32BE14u;
    // 0x32be14: 0x30a6000f  andi        $a2, $a1, 0xF
    ctx->pc = 0x32be14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x32be18: 0x10c7001d  beq         $a2, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x32BE18u;
    {
        const bool branch_taken_0x32be18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x32be18) {
            ctx->pc = 0x32BE90u;
            goto label_32be90;
        }
    }
    ctx->pc = 0x32BE20u;
    // 0x32be20: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x32be20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32be24: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x32be24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x32be28: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x32be28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x32be2c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x32be2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x32be30: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x32be30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x32be34: 0x1054021  addu        $t0, $t0, $a1
    ctx->pc = 0x32be34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x32be38: 0x8d060024  lw          $a2, 0x24($t0)
    ctx->pc = 0x32be38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x32be3c: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x32be3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x32be40: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x32be40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x32be44: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x32be44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32be48: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x32be48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x32be4c: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x32be4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x32be50: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BE50u;
    {
        const bool branch_taken_0x32be50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE50u;
        // 0x32be54: 0x34c50020  ori         $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be50) {
            ctx->pc = 0x32BE60u;
            goto label_32be60;
        }
    }
    ctx->pc = 0x32BE58u;
    // 0x32be58: 0xad050024  sw          $a1, 0x24($t0)
    ctx->pc = 0x32be58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 5));
    // 0x32be5c: 0x0  nop
    ctx->pc = 0x32be5cu;
    // NOP
label_32be60:
    // 0x32be60: 0x8d050024  lw          $a1, 0x24($t0)
    ctx->pc = 0x32be60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x32be64: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x32be64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32be68: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x32be68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x32be6c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x32be6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x32be70: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x32be70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x32be74: 0x30a50020  andi        $a1, $a1, 0x20
    ctx->pc = 0x32be74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x32be78: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32BE78u;
    {
        const bool branch_taken_0x32be78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32be78) {
            ctx->pc = 0x32BE90u;
            goto label_32be90;
        }
    }
    ctx->pc = 0x32BE80u;
    // 0x32be80: 0x8105002d  lb          $a1, 0x2D($t0)
    ctx->pc = 0x32be80u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 45)));
    // 0x32be84: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32BE84u;
    {
        const bool branch_taken_0x32be84 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x32be84) {
            ctx->pc = 0x32BE90u;
            goto label_32be90;
        }
    }
    ctx->pc = 0x32BE8Cu;
    // 0x32be8c: 0xa100002d  sb          $zero, 0x2D($t0)
    ctx->pc = 0x32be8cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 45), (uint8_t)GPR_U32(ctx, 0));
label_32be90:
    // 0x32be90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32be90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32be94: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x32be94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x32be98: 0x28650002  slti        $a1, $v1, 0x2
    ctx->pc = 0x32be98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32be9c: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x32BE9Cu;
    {
        const bool branch_taken_0x32be9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BE9Cu;
        // 0x32bea0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32be9c) {
            ctx->pc = 0x32BE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32be08;
        }
    }
    ctx->pc = 0x32BEA4u;
    // 0x32bea4: 0x3e00008  jr          $ra
    ctx->pc = 0x32BEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BEACu;
}
