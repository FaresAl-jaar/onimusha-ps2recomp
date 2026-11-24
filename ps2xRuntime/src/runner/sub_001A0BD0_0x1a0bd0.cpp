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

// Function: sub_001A0BD0
// Address: 0x1a0bd0 - 0x1a0ce8
void sub_001A0BD0_0x1a0bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0BD0_0x1a0bd0");
#endif

    switch (ctx->pc) {
        case 0x1a0c98u: goto label_1a0c98;
        case 0x1a0ca0u: goto label_1a0ca0;
        default: break;
    }

    ctx->pc = 0x1a0bd0u;

    // 0x1a0bd0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a0bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a0bd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0bd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bd8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1a0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1a0bdc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1a0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1a0be0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1a0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1a0be4: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x1a0be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x1a0be8: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1a0be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1a0bec: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a0becu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a0bf0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1a0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1a0bf4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1a0bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1a0bf8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1a0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1a0bfc: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1a0bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x1a0c00: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1a0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1a0c04: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a0c08: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1a0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1a0c0c: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1a0c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1a0c10: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1a0c10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1a0c14: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x1a0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x1a0c18: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x1a0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x1a0c1c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a0c20: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1a0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1a0c24: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1a0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1a0c28: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1a0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1a0c2c: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x1a0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x1a0c30: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1a0c30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x1a0c34: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1a0c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1a0c38: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1a0c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1a0c3c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1a0c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1a0c40: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x1a0c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x1a0c44: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1a0c44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x1a0c48: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x1a0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x1a0c4c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1a0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1a0c50: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1a0c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1a0c54: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1a0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1a0c58: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1a0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x1a0c5c: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x1a0c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x1a0c60: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x1a0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x1a0c64: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1a0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1a0c68: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1a0c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1a0c6c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1a0c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1a0c70: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1a0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x1a0c74: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x1a0c74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x1a0c78: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x1a0c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x1a0c7c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1a0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1a0c80: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1a0c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1a0c84: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1a0c84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1a0c88: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x1a0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x1a0c8c: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x1a0c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x1a0c90: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x1a0c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x1a0c94: 0x0  nop
    ctx->pc = 0x1a0c94u;
    // NOP
label_1a0c98:
    // 0x1a0c98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a0c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0ca0:
    // 0x1a0ca0: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x1a0ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x1a0ca4: 0xaca00084  sw          $zero, 0x84($a1)
    ctx->pc = 0x1a0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
    // 0x1a0ca8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a0cac: 0xaca00088  sw          $zero, 0x88($a1)
    ctx->pc = 0x1a0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 0));
    // 0x1a0cb0: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x1a0cb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a0cb4: 0xaca0008c  sw          $zero, 0x8C($a1)
    ctx->pc = 0x1a0cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 0));
    // 0x1a0cb8: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x1a0cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
    // 0x1a0cbc: 0xaca00094  sw          $zero, 0x94($a1)
    ctx->pc = 0x1a0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 0));
    // 0x1a0cc0: 0xaca00098  sw          $zero, 0x98($a1)
    ctx->pc = 0x1a0cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 0));
    // 0x1a0cc4: 0xaca0009c  sw          $zero, 0x9C($a1)
    ctx->pc = 0x1a0cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 0));
    // 0x1a0cc8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1A0CC8u;
    {
        const bool branch_taken_0x1a0cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CC8u;
        // 0x1a0ccc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cc8) {
            ctx->pc = 0x1A0CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0ca0;
        }
    }
    ctx->pc = 0x1A0CD0u;
    // 0x1a0cd0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a0cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a0cd4: 0x2ce30004  sltiu       $v1, $a3, 0x4
    ctx->pc = 0x1a0cd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a0cd8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1A0CD8u;
    {
        const bool branch_taken_0x1a0cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0CD8u;
        // 0x1a0cdc: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0cd8) {
            ctx->pc = 0x1A0C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0c98;
        }
    }
    ctx->pc = 0x1A0CE0u;
    // 0x1a0ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0CE8u;
}
