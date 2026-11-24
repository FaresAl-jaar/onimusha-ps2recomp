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

// Function: sub_00273A20
// Address: 0x273a20 - 0x273c40
void sub_00273A20_0x273a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273A20_0x273a20");
#endif

    switch (ctx->pc) {
        case 0x273ab8u: goto label_273ab8;
        case 0x273b20u: goto label_273b20;
        case 0x273b98u: goto label_273b98;
        case 0x273be8u: goto label_273be8;
        default: break;
    }

    ctx->pc = 0x273a20u;

    // 0x273a20: 0x838688a4  lb          $a2, -0x775C($gp)
    ctx->pc = 0x273a20u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936740)));
    // 0x273a24: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A24u;
    {
        const bool branch_taken_0x273a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A24u;
        // 0x273a28: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a24) {
            ctx->pc = 0x273A38u;
            goto label_273a38;
        }
    }
    ctx->pc = 0x273A2Cu;
    // 0x273a2c: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x273A2Cu;
    {
        const bool branch_taken_0x273a2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x273a2c) {
            ctx->pc = 0x273A40u;
            goto label_273a40;
        }
    }
    ctx->pc = 0x273A34u;
    // 0x273a34: 0x0  nop
    ctx->pc = 0x273a34u;
    // NOP
label_273a38:
    // 0x273a38: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x273A38u;
    {
        const bool branch_taken_0x273a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273a38) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273A40u;
label_273a40:
    // 0x273a40: 0x838388a0  lb          $v1, -0x7760($gp)
    ctx->pc = 0x273a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936736)));
    // 0x273a44: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x273a44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x273a48: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x273A48u;
    {
        const bool branch_taken_0x273a48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A48u;
        // 0x273a4c: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a48) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273A50u;
    // 0x273a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x273a54: 0x24a55a10  addiu       $a1, $a1, 0x5A10
    ctx->pc = 0x273a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23056));
    // 0x273a58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x273a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x273a5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x273a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x273a60: 0x600008  jr          $v1
    ctx->pc = 0x273A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x273A68u: goto label_273a68;
            case 0x273AA0u: goto label_273aa0;
            case 0x273AF8u: goto label_273af8;
            case 0x273B88u: goto label_273b88;
            case 0x273BD8u: goto label_273bd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273A60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x273A68u;
label_273a68:
    // 0x273a68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x273a6c: 0x14c30072  bne         $a2, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x273A6Cu;
    {
        const bool branch_taken_0x273a6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x273a6c) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273A74u;
    // 0x273a74: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x273a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x273a78: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x273a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x273a7c: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x273a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x273a80: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x273a80u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x273a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273a8c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x273a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x273a90: 0x978388bc  lhu         $v1, -0x7744($gp)
    ctx->pc = 0x273a90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273a94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x273a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273a98: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x273A98u;
    {
        const bool branch_taken_0x273a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273A98u;
        // 0x273a9c: 0xa78388bc  sh          $v1, -0x7744($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273a98) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273AA0u;
label_273aa0:
    // 0x273aa0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x273aa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x273aa4: 0x938388ac  lbu         $v1, -0x7754($gp)
    ctx->pc = 0x273aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936748)));
    // 0x273aa8: 0x14a30063  bne         $a1, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x273AA8u;
    {
        const bool branch_taken_0x273aa8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x273AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AA8u;
        // 0x273aac: 0x3c05008c  lui         $a1, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273aa8) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273AB0u;
    // 0x273ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ab4: 0x24a50850  addiu       $a1, $a1, 0x850
    ctx->pc = 0x273ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
label_273ab8:
    // 0x273ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273abc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273ABCu;
    {
        const bool branch_taken_0x273abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273abc) {
            ctx->pc = 0x273AE0u;
            goto label_273ae0;
        }
    }
    ctx->pc = 0x273AC4u;
    // 0x273ac4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x273ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x273ac8: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x273ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x273acc: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x273accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x273ad0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x273ad4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273ad8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x273AD8u;
    {
        const bool branch_taken_0x273ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AD8u;
        // 0x273adc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ad8) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273AE0u;
label_273ae0:
    // 0x273ae0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x273ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x273ae4: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x273ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x273ae8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x273AE8u;
    {
        const bool branch_taken_0x273ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273AE8u;
        // 0x273aec: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ae8) {
            ctx->pc = 0x273AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273ab8;
        }
    }
    ctx->pc = 0x273AF0u;
    // 0x273af0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x273AF0u;
    {
        const bool branch_taken_0x273af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273af0) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273AF8u;
label_273af8:
    // 0x273af8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x273af8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x273afc: 0x240300b5  addiu       $v1, $zero, 0xB5
    ctx->pc = 0x273afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x273b00: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x273B00u;
    {
        const bool branch_taken_0x273b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x273B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B00u;
        // 0x273b04: 0x240300b6  addiu       $v1, $zero, 0xB6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b00) {
            ctx->pc = 0x273B10u;
            goto label_273b10;
        }
    }
    ctx->pc = 0x273B08u;
    // 0x273b08: 0x14a3004b  bne         $a1, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x273B08u;
    {
        const bool branch_taken_0x273b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x273b08) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273B10u;
label_273b10:
    // 0x273b10: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x273b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x273b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b18: 0x24a50850  addiu       $a1, $a1, 0x850
    ctx->pc = 0x273b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    // 0x273b1c: 0x0  nop
    ctx->pc = 0x273b1cu;
    // NOP
label_273b20:
    // 0x273b20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273b24: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x273B24u;
    {
        const bool branch_taken_0x273b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b24) {
            ctx->pc = 0x273B70u;
            goto label_273b70;
        }
    }
    ctx->pc = 0x273B2Cu;
    // 0x273b2c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x273b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x273b30: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x273b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x273b34: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x273b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x273b38: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x273b38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x273b3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273b40: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x273b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x273b44: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x273b44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273b48: 0x978388c0  lhu         $v1, -0x7740($gp)
    ctx->pc = 0x273b48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273b4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x273b50: 0xa78488bc  sh          $a0, -0x7744($gp)
    ctx->pc = 0x273b50u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 4));
    // 0x273b54: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x273b54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273b58: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x273b58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x273b5c: 0x14600036  bnez        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x273B5Cu;
    {
        const bool branch_taken_0x273b5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B5Cu;
        // 0x273b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b5c) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273B64u;
    // 0x273b64: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x273B64u;
    {
        const bool branch_taken_0x273b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B64u;
        // 0x273b68: 0xa38388cc  sb          $v1, -0x7734($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936780), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b64) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273B6Cu;
    // 0x273b6c: 0x0  nop
    ctx->pc = 0x273b6cu;
    // NOP
label_273b70:
    // 0x273b70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x273b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x273b74: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x273b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x273b78: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x273B78u;
    {
        const bool branch_taken_0x273b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273B78u;
        // 0x273b7c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b78) {
            ctx->pc = 0x273B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273b20;
        }
    }
    ctx->pc = 0x273B80u;
    // 0x273b80: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x273B80u;
    {
        const bool branch_taken_0x273b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b80) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273B88u;
label_273b88:
    // 0x273b88: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x273b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x273b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273b90: 0x24a50850  addiu       $a1, $a1, 0x850
    ctx->pc = 0x273b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    // 0x273b94: 0x0  nop
    ctx->pc = 0x273b94u;
    // NOP
label_273b98:
    // 0x273b98: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273b9c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x273B9Cu;
    {
        const bool branch_taken_0x273b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273b9c) {
            ctx->pc = 0x273BC0u;
            goto label_273bc0;
        }
    }
    ctx->pc = 0x273BA4u;
    // 0x273ba4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x273ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x273ba8: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x273ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x273bac: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x273bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x273bb0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x273bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x273bb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273bb8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x273BB8u;
    {
        const bool branch_taken_0x273bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BB8u;
        // 0x273bbc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bb8) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273BC0u;
label_273bc0:
    // 0x273bc0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x273bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x273bc4: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x273bc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x273bc8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x273BC8u;
    {
        const bool branch_taken_0x273bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273BC8u;
        // 0x273bcc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bc8) {
            ctx->pc = 0x273B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273b98;
        }
    }
    ctx->pc = 0x273BD0u;
    // 0x273bd0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x273BD0u;
    {
        const bool branch_taken_0x273bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273bd0) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273BD8u;
label_273bd8:
    // 0x273bd8: 0x3c05008c  lui         $a1, 0x8C
    ctx->pc = 0x273bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)140 << 16));
    // 0x273bdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273be0: 0x24a50850  addiu       $a1, $a1, 0x850
    ctx->pc = 0x273be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
    // 0x273be4: 0x0  nop
    ctx->pc = 0x273be4u;
    // NOP
label_273be8:
    // 0x273be8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x273be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x273bec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x273BECu;
    {
        const bool branch_taken_0x273bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x273bec) {
            ctx->pc = 0x273C28u;
            goto label_273c28;
        }
    }
    ctx->pc = 0x273BF4u;
    // 0x273bf4: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x273bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x273bf8: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x273bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x273bfc: 0x24630850  addiu       $v1, $v1, 0x850
    ctx->pc = 0x273bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2128));
    // 0x273c00: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x273c04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273c08: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x273c08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x273c0c: 0x978488bc  lhu         $a0, -0x7744($gp)
    ctx->pc = 0x273c0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936764)));
    // 0x273c10: 0x978388c0  lhu         $v1, -0x7740($gp)
    ctx->pc = 0x273c10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936768)));
    // 0x273c14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x273c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x273c18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x273c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x273c1c: 0xa78488bc  sh          $a0, -0x7744($gp)
    ctx->pc = 0x273c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936764), (uint16_t)GPR_U32(ctx, 4));
    // 0x273c20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x273C20u;
    {
        const bool branch_taken_0x273c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C20u;
        // 0x273c24: 0xa78388c0  sh          $v1, -0x7740($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936768), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c20) {
            ctx->pc = 0x273C38u;
            goto label_273c38;
        }
    }
    ctx->pc = 0x273C28u;
label_273c28:
    // 0x273c28: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x273c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x273c2c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x273c2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x273c30: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x273C30u;
    {
        const bool branch_taken_0x273c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273C30u;
        // 0x273c34: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c30) {
            ctx->pc = 0x273BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273be8;
        }
    }
    ctx->pc = 0x273C38u;
label_273c38:
    // 0x273c38: 0x3e00008  jr          $ra
    ctx->pc = 0x273C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273C40u;
}
