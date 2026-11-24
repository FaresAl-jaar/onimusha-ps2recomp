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

// Function: sub_00229AD0
// Address: 0x229ad0 - 0x229b80
void sub_00229AD0_0x229ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229AD0_0x229ad0");
#endif

    ctx->pc = 0x229ad0u;

    // 0x229ad0: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x229ad0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229ad4: 0x8dc300c0  lw          $v1, 0xC0($t6)
    ctx->pc = 0x229ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
    // 0x229ad8: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x229AD8u;
    {
        const bool branch_taken_0x229ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229AD8u;
        // 0x229adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ad8) {
            ctx->pc = 0x229B78u;
            goto label_229b78;
        }
    }
    ctx->pc = 0x229AE0u;
    // 0x229ae0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x229ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x229ae4: 0x8dcc003c  lw          $t4, 0x3C($t6)
    ctx->pc = 0x229ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 60)));
    // 0x229ae8: 0x8dcd0040  lw          $t5, 0x40($t6)
    ctx->pc = 0x229ae8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 64)));
    // 0x229aec: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x229aecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229af0: 0x8dcb0044  lw          $t3, 0x44($t6)
    ctx->pc = 0x229af0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 68)));
    // 0x229af4: 0x24090600  addiu       $t1, $zero, 0x600
    ctx->pc = 0x229af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x229af8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x229af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x229afc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x229afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x229b00: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x229b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229b04: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x229b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x229b08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x229b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229b0c: 0x2408007f  addiu       $t0, $zero, 0x7F
    ctx->pc = 0x229b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x229b10: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x229b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x229b14: 0xa1ca000e  sb          $t2, 0xE($t6)
    ctx->pc = 0x229b14u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 14), (uint8_t)GPR_U32(ctx, 10));
    // 0x229b18: 0xa1c4000d  sb          $a0, 0xD($t6)
    ctx->pc = 0x229b18u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x229b1c: 0xadc30018  sw          $v1, 0x18($t6)
    ctx->pc = 0x229b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 24), GPR_U32(ctx, 3));
    // 0x229b20: 0xa1c5000f  sb          $a1, 0xF($t6)
    ctx->pc = 0x229b20u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 15), (uint8_t)GPR_U32(ctx, 5));
    // 0x229b24: 0xa5c60098  sh          $a2, 0x98($t6)
    ctx->pc = 0x229b24u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 152), (uint16_t)GPR_U32(ctx, 6));
    // 0x229b28: 0xadc70050  sw          $a3, 0x50($t6)
    ctx->pc = 0x229b28u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 80), GPR_U32(ctx, 7));
    // 0x229b2c: 0xadc80054  sw          $t0, 0x54($t6)
    ctx->pc = 0x229b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 84), GPR_U32(ctx, 8));
    // 0x229b30: 0xadc90058  sw          $t1, 0x58($t6)
    ctx->pc = 0x229b30u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 88), GPR_U32(ctx, 9));
    // 0x229b34: 0xadcc005c  sw          $t4, 0x5C($t6)
    ctx->pc = 0x229b34u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 92), GPR_U32(ctx, 12));
    // 0x229b38: 0xadcd0060  sw          $t5, 0x60($t6)
    ctx->pc = 0x229b38u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 96), GPR_U32(ctx, 13));
    // 0x229b3c: 0xadcb0064  sw          $t3, 0x64($t6)
    ctx->pc = 0x229b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 100), GPR_U32(ctx, 11));
    // 0x229b40: 0xadc00088  sw          $zero, 0x88($t6)
    ctx->pc = 0x229b40u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 136), GPR_U32(ctx, 0));
    // 0x229b44: 0xa5ca0002  sh          $t2, 0x2($t6)
    ctx->pc = 0x229b44u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x229b48: 0xadc90010  sw          $t1, 0x10($t6)
    ctx->pc = 0x229b48u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 16), GPR_U32(ctx, 9));
    // 0x229b4c: 0xadc0008c  sw          $zero, 0x8C($t6)
    ctx->pc = 0x229b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 140), GPR_U32(ctx, 0));
    // 0x229b50: 0xa5c0001c  sh          $zero, 0x1C($t6)
    ctx->pc = 0x229b50u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x229b54: 0xa5c00024  sh          $zero, 0x24($t6)
    ctx->pc = 0x229b54u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x229b58: 0xa5c00026  sh          $zero, 0x26($t6)
    ctx->pc = 0x229b58u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x229b5c: 0xadc00020  sw          $zero, 0x20($t6)
    ctx->pc = 0x229b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 32), GPR_U32(ctx, 0));
    // 0x229b60: 0xadc00028  sw          $zero, 0x28($t6)
    ctx->pc = 0x229b60u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 0));
    // 0x229b64: 0xadc0002c  sw          $zero, 0x2C($t6)
    ctx->pc = 0x229b64u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 0));
    // 0x229b68: 0xadc00030  sw          $zero, 0x30($t6)
    ctx->pc = 0x229b68u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 48), GPR_U32(ctx, 0));
    // 0x229b6c: 0xadc00034  sw          $zero, 0x34($t6)
    ctx->pc = 0x229b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 52), GPR_U32(ctx, 0));
    // 0x229b70: 0xadc20014  sw          $v0, 0x14($t6)
    ctx->pc = 0x229b70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 20), GPR_U32(ctx, 2));
    // 0x229b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229b78:
    // 0x229b78: 0x3e00008  jr          $ra
    ctx->pc = 0x229B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229B80u;
}
