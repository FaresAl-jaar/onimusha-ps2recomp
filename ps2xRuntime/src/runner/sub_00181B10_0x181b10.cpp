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

// Function: sub_00181B10
// Address: 0x181b10 - 0x181c38
void sub_00181B10_0x181b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181B10_0x181b10");
#endif

    switch (ctx->pc) {
        case 0x181bf8u: goto label_181bf8;
        default: break;
    }

    ctx->pc = 0x181b10u;

    // 0x181b10: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x181b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x181b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x181b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x181b18: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x181b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x181b1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x181b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x181b20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181B20u;
    {
        const bool branch_taken_0x181b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181b20) {
            ctx->pc = 0x181B38u;
            goto label_181b38;
        }
    }
    ctx->pc = 0x181B28u;
    // 0x181b28: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x181b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x181b2c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x181B2Cu;
    {
        const bool branch_taken_0x181b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B2Cu;
        // 0x181b30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b2c) {
            ctx->pc = 0x181C30u;
            goto label_181c30;
        }
    }
    ctx->pc = 0x181B34u;
    // 0x181b34: 0x0  nop
    ctx->pc = 0x181b34u;
    // NOP
label_181b38:
    // 0x181b38: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x181b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x181b3c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x181B3Cu;
    {
        const bool branch_taken_0x181b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x181b3c) {
            ctx->pc = 0x181B50u;
            goto label_181b50;
        }
    }
    ctx->pc = 0x181B44u;
    // 0x181b44: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x181b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x181b48: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x181B48u;
    {
        const bool branch_taken_0x181b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181B48u;
        // 0x181b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181b48) {
            ctx->pc = 0x181C30u;
            goto label_181c30;
        }
    }
    ctx->pc = 0x181B50u;
label_181b50:
    // 0x181b50: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x181b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
    // 0x181b54: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x181b54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
    // 0x181b58: 0x24680003  addiu       $t0, $v1, 0x3
    ctx->pc = 0x181b58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x181b5c: 0x94690000  lhu         $t1, 0x0($v1)
    ctx->pc = 0x181b5cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x181b60: 0x2407fffc  addiu       $a3, $zero, -0x4
    ctx->pc = 0x181b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x181b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x181b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181b68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x181b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x181b6c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x181b6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x181b70: 0xa48900c8  sh          $t1, 0xC8($a0)
    ctx->pc = 0x181b70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 9));
    // 0x181b74: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x181b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x181b78: 0x90690002  lbu         $t1, 0x2($v1)
    ctx->pc = 0x181b78u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x181b7c: 0xa08900cc  sb          $t1, 0xCC($a0)
    ctx->pc = 0x181b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 9));
    // 0x181b80: 0xac880098  sw          $t0, 0x98($a0)
    ctx->pc = 0x181b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 8));
    // 0x181b84: 0x908900cc  lbu         $t1, 0xCC($a0)
    ctx->pc = 0x181b84u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x181b88: 0x8c880098  lw          $t0, 0x98($a0)
    ctx->pc = 0x181b88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x181b8c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x181b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x181b90: 0xac88009c  sw          $t0, 0x9C($a0)
    ctx->pc = 0x181b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 8));
    // 0x181b94: 0x8c89009c  lw          $t1, 0x9C($a0)
    ctx->pc = 0x181b94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x181b98: 0x908800cc  lbu         $t0, 0xCC($a0)
    ctx->pc = 0x181b98u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x181b9c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x181b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x181ba0: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x181ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x181ba4: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x181ba4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x181ba8: 0xac8700a0  sw          $a3, 0xA0($a0)
    ctx->pc = 0x181ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 7));
    // 0x181bac: 0x8c8700a0  lw          $a3, 0xA0($a0)
    ctx->pc = 0x181bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x181bb0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x181bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x181bb4: 0xac8700a0  sw          $a3, 0xA0($a0)
    ctx->pc = 0x181bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 7));
    // 0x181bb8: 0x908800cc  lbu         $t0, 0xCC($a0)
    ctx->pc = 0x181bb8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x181bbc: 0x8c8700a0  lw          $a3, 0xA0($a0)
    ctx->pc = 0x181bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x181bc0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x181bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x181bc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x181bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x181bc8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x181bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181bcc: 0xe48001d0  swc1        $f0, 0x1D0($a0)
    ctx->pc = 0x181bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 464), bits); }
    // 0x181bd0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x181bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181bd4: 0xe48001d4  swc1        $f0, 0x1D4($a0)
    ctx->pc = 0x181bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 468), bits); }
    // 0x181bd8: 0xa08601e4  sb          $a2, 0x1E4($a0)
    ctx->pc = 0x181bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 484), (uint8_t)GPR_U32(ctx, 6));
    // 0x181bdc: 0xac8500b0  sw          $a1, 0xB0($a0)
    ctx->pc = 0x181bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 5));
    // 0x181be0: 0x908500cc  lbu         $a1, 0xCC($a0)
    ctx->pc = 0x181be0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x181be4: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x181be4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x181be8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x181BE8u;
    {
        const bool branch_taken_0x181be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181BE8u;
        // 0x181bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181be8) {
            ctx->pc = 0x181C28u;
            goto label_181c28;
        }
    }
    ctx->pc = 0x181BF0u;
    // 0x181bf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181bf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x181bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181bf8:
    // 0x181bf8: 0x8c8500a0  lw          $a1, 0xA0($a0)
    ctx->pc = 0x181bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x181bfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181c00: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x181c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x181c04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x181c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x181c08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x181c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x181c0c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x181c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x181c10: 0xacc500d0  sw          $a1, 0xD0($a2)
    ctx->pc = 0x181c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 5));
    // 0x181c14: 0x908500cc  lbu         $a1, 0xCC($a0)
    ctx->pc = 0x181c14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x181c18: 0x45282b  sltu        $a1, $v0, $a1
    ctx->pc = 0x181c18u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x181c1c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x181C1Cu;
    {
        const bool branch_taken_0x181c1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181C1Cu;
        // 0x181c20: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181c1c) {
            ctx->pc = 0x181BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181bf8;
        }
    }
    ctx->pc = 0x181C24u;
    // 0x181c24: 0x0  nop
    ctx->pc = 0x181c24u;
    // NOP
label_181c28:
    // 0x181c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181c2c: 0x0  nop
    ctx->pc = 0x181c2cu;
    // NOP
label_181c30:
    // 0x181c30: 0x3e00008  jr          $ra
    ctx->pc = 0x181C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181C38u;
}
