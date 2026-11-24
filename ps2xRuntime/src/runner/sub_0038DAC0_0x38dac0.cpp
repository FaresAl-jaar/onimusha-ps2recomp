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

// Function: sub_0038DAC0
// Address: 0x38dac0 - 0x38db90
void sub_0038DAC0_0x38dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DAC0_0x38dac0");
#endif

    ctx->pc = 0x38dac0u;

    // 0x38dac0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x38dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38dac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38dac8: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38DAC8u;
    {
        const bool branch_taken_0x38dac8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x38dac8) {
            ctx->pc = 0x38DB10u;
            goto label_38db10;
        }
    }
    ctx->pc = 0x38DAD0u;
    // 0x38dad0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x38dad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38dad4: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x38dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x38dad8: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x38dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x38dadc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x38dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x38dae0: 0x24840100  addiu       $a0, $a0, 0x100
    ctx->pc = 0x38dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
    // 0x38dae4: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x38dae4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x38dae8: 0x42142  srl         $a0, $a0, 5
    ctx->pc = 0x38dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x38daec: 0xc52806  srlv        $a1, $a1, $a2
    ctx->pc = 0x38daecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 6) & 0x1F));
    // 0x38daf0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x38daf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38daf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38daf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38dafc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x38dafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x38db00: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x38DB00u;
    {
        const bool branch_taken_0x38db00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38db00) {
            ctx->pc = 0x38DB80u;
            goto label_38db80;
        }
    }
    ctx->pc = 0x38DB08u;
    // 0x38db08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x38DB08u;
    {
        const bool branch_taken_0x38db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38db08) {
            ctx->pc = 0x38DB88u;
            goto label_38db88;
        }
    }
    ctx->pc = 0x38DB10u;
label_38db10:
    // 0x38db10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38db14: 0x14a30018  bne         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x38DB14u;
    {
        const bool branch_taken_0x38db14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x38db14) {
            ctx->pc = 0x38DB78u;
            goto label_38db78;
        }
    }
    ctx->pc = 0x38DB1Cu;
    // 0x38db1c: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x38db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38db20: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x38db20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x38db24: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x38db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x38db28: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x38db28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x38db2c: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x38db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x38db30: 0x30a7001f  andi        $a3, $a1, 0x1F
    ctx->pc = 0x38db30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x38db34: 0x52942  srl         $a1, $a1, 5
    ctx->pc = 0x38db34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x38db38: 0xe63006  srlv        $a2, $a2, $a3
    ctx->pc = 0x38db38u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 7) & 0x1F));
    // 0x38db3c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x38db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x38db40: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x38db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x38db44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38db44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38db48: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x38db48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x38db4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38DB4Cu;
    {
        const bool branch_taken_0x38db4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB4Cu;
        // 0x38db50: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db4c) {
            ctx->pc = 0x38DB58u;
            goto label_38db58;
        }
    }
    ctx->pc = 0x38DB54u;
    // 0x38db54: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x38db54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_38db58:
    // 0x38db58: 0x9083000e  lbu         $v1, 0xE($a0)
    ctx->pc = 0x38db58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x38db5c: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x38db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x38db60: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x38DB60u;
    {
        const bool branch_taken_0x38db60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x38db60) {
            ctx->pc = 0x38DB80u;
            goto label_38db80;
        }
    }
    ctx->pc = 0x38DB68u;
    // 0x38db68: 0xa088000e  sb          $t0, 0xE($a0)
    ctx->pc = 0x38db68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 8));
    // 0x38db6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38DB6Cu;
    {
        const bool branch_taken_0x38db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DB6Cu;
        // 0x38db70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38db6c) {
            ctx->pc = 0x38DB88u;
            goto label_38db88;
        }
    }
    ctx->pc = 0x38DB74u;
    // 0x38db74: 0x0  nop
    ctx->pc = 0x38db74u;
    // NOP
label_38db78:
    // 0x38db78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38db78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x38db7c: 0x0  nop
    ctx->pc = 0x38db7cu;
    // NOP
label_38db80:
    // 0x38db80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38db80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38db84: 0x0  nop
    ctx->pc = 0x38db84u;
    // NOP
label_38db88:
    // 0x38db88: 0x3e00008  jr          $ra
    ctx->pc = 0x38DB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DB90u;
}
