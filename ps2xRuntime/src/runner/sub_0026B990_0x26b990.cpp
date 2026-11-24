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

// Function: sub_0026B990
// Address: 0x26b990 - 0x26ba98
void sub_0026B990_0x26b990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B990_0x26b990");
#endif

    switch (ctx->pc) {
        case 0x26b9f0u: goto label_26b9f0;
        default: break;
    }

    ctx->pc = 0x26b990u;

    // 0x26b990: 0x80850000  lb          $a1, 0x0($a0)
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26b994: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x26b998: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x26B998u;
    {
        const bool branch_taken_0x26b998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x26b998) {
            ctx->pc = 0x26BA90u;
            goto label_26ba90;
        }
    }
    ctx->pc = 0x26B9A0u;
    // 0x26b9a0: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x26b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26b9a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x26b9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26b9a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B9A8u;
    {
        const bool branch_taken_0x26b9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9a8) {
            ctx->pc = 0x26B9B8u;
            goto label_26b9b8;
        }
    }
    ctx->pc = 0x26B9B0u;
    // 0x26b9b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b9b4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x26b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_26b9b8:
    // 0x26b9b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x26b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x26b9bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B9BCu;
    {
        const bool branch_taken_0x26b9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9bc) {
            ctx->pc = 0x26B9D0u;
            goto label_26b9d0;
        }
    }
    ctx->pc = 0x26B9C4u;
    // 0x26b9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b9c8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x26b9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x26b9cc: 0x0  nop
    ctx->pc = 0x26b9ccu;
    // NOP
label_26b9d0:
    // 0x26b9d0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x26b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x26b9d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B9D4u;
    {
        const bool branch_taken_0x26b9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9d4) {
            ctx->pc = 0x26B9E8u;
            goto label_26b9e8;
        }
    }
    ctx->pc = 0x26B9DCu;
    // 0x26b9dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26b9e0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x26b9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x26b9e4: 0x0  nop
    ctx->pc = 0x26b9e4u;
    // NOP
label_26b9e8:
    // 0x26b9e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b9ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26b9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b9f0:
    // 0x26b9f0: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x26b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x26b9f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B9F4u;
    {
        const bool branch_taken_0x26b9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b9f4) {
            ctx->pc = 0x26BA08u;
            goto label_26ba08;
        }
    }
    ctx->pc = 0x26B9FCu;
    // 0x26b9fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba00: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x26ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x26ba04: 0x0  nop
    ctx->pc = 0x26ba04u;
    // NOP
label_26ba08:
    // 0x26ba08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26ba0c: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x26ba0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26ba10: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x26BA10u;
    {
        const bool branch_taken_0x26ba10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BA10u;
        // 0x26ba14: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ba10) {
            ctx->pc = 0x26B9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b9f0;
        }
    }
    ctx->pc = 0x26BA18u;
    // 0x26ba18: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x26ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x26ba1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA1Cu;
    {
        const bool branch_taken_0x26ba1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba1c) {
            ctx->pc = 0x26BA30u;
            goto label_26ba30;
        }
    }
    ctx->pc = 0x26BA24u;
    // 0x26ba24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba28: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x26ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x26ba2c: 0x0  nop
    ctx->pc = 0x26ba2cu;
    // NOP
label_26ba30:
    // 0x26ba30: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x26ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x26ba34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA34u;
    {
        const bool branch_taken_0x26ba34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba34) {
            ctx->pc = 0x26BA48u;
            goto label_26ba48;
        }
    }
    ctx->pc = 0x26BA3Cu;
    // 0x26ba3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba40: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x26ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x26ba44: 0x0  nop
    ctx->pc = 0x26ba44u;
    // NOP
label_26ba48:
    // 0x26ba48: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x26ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26ba4c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA4Cu;
    {
        const bool branch_taken_0x26ba4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba4c) {
            ctx->pc = 0x26BA60u;
            goto label_26ba60;
        }
    }
    ctx->pc = 0x26BA54u;
    // 0x26ba54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba58: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x26ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x26ba5c: 0x0  nop
    ctx->pc = 0x26ba5cu;
    // NOP
label_26ba60:
    // 0x26ba60: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x26ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x26ba64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA64u;
    {
        const bool branch_taken_0x26ba64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba64) {
            ctx->pc = 0x26BA78u;
            goto label_26ba78;
        }
    }
    ctx->pc = 0x26BA6Cu;
    // 0x26ba6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba70: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x26ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x26ba74: 0x0  nop
    ctx->pc = 0x26ba74u;
    // NOP
label_26ba78:
    // 0x26ba78: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x26ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x26ba7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BA7Cu;
    {
        const bool branch_taken_0x26ba7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ba7c) {
            ctx->pc = 0x26BA90u;
            goto label_26ba90;
        }
    }
    ctx->pc = 0x26BA84u;
    // 0x26ba84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ba88: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x26ba88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x26ba8c: 0x0  nop
    ctx->pc = 0x26ba8cu;
    // NOP
label_26ba90:
    // 0x26ba90: 0x3e00008  jr          $ra
    ctx->pc = 0x26BA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BA98u;
}
