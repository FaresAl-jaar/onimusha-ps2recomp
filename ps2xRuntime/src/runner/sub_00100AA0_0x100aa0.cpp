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

// Function: sub_00100AA0
// Address: 0x100aa0 - 0x100b48
void sub_00100AA0_0x100aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100AA0_0x100aa0");
#endif

    ctx->pc = 0x100aa0u;

    // 0x100aa0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x100aa4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x100aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x100aa8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x100AA8u;
    {
        const bool branch_taken_0x100aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100aa8) {
            ctx->pc = 0x100AC0u;
            goto label_100ac0;
        }
    }
    ctx->pc = 0x100AB0u;
    // 0x100ab0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x100ab4: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x100ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x100ab8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x100AB8u;
    {
        const bool branch_taken_0x100ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB8u;
        // 0x100abc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ab8) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100AC0u;
label_100ac0:
    // 0x100ac0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x100ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x100ac4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x100AC4u;
    {
        const bool branch_taken_0x100ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AC4u;
        // 0x100ac8: 0x90860001  lbu         $a2, 0x1($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ac4) {
            ctx->pc = 0x100AE8u;
            goto label_100ae8;
        }
    }
    ctx->pc = 0x100ACCu;
    // 0x100acc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x100ad0: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x100ad4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x100ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x100ad8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100adc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x100ADCu;
    {
        const bool branch_taken_0x100adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100ADCu;
        // 0x100ae0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100adc) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100AE4u;
    // 0x100ae4: 0x0  nop
    ctx->pc = 0x100ae4u;
    // NOP
label_100ae8:
    // 0x100ae8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x100ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x100aec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x100AECu;
    {
        const bool branch_taken_0x100aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AECu;
        // 0x100af0: 0x90870002  lbu         $a3, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100aec) {
            ctx->pc = 0x100B18u;
            goto label_100b18;
        }
    }
    ctx->pc = 0x100AF4u;
    // 0x100af4: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x100af8: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x100af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x100afc: 0x23400  sll         $a2, $v0, 16
    ctx->pc = 0x100afcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x100b00: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x100b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x100b04: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x100b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x100b08: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x100b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x100b0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x100B0Cu;
    {
        const bool branch_taken_0x100b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B0Cu;
        // 0x100b10: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b0c) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100B14u;
    // 0x100b14: 0x0  nop
    ctx->pc = 0x100b14u;
    // NOP
label_100b18:
    // 0x100b18: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x100b18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x100b1c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x100b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x100b20: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x100b24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x100b28: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x100b2c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x100b2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x100b30: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x100b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x100b34: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x100b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x100b38: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x100b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x100b3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x100b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_100b40:
    // 0x100b40: 0x3e00008  jr          $ra
    ctx->pc = 0x100B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100B48u;
}
