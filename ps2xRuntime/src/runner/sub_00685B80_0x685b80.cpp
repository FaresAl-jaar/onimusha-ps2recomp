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

// Function: sub_00685B80
// Address: 0x685b80 - 0x685c38
void sub_00685B80_0x685b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00685B80_0x685b80");
#endif

    switch (ctx->pc) {
        case 0x685ba4u: goto label_685ba4;
        case 0x685bb0u: goto label_685bb0;
        case 0x685be8u: goto label_685be8;
        case 0x685c08u: goto label_685c08;
        default: break;
    }

    ctx->pc = 0x685b80u;

    // 0x685b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x685b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x685b84: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x685b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x685b88: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x685b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x685b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x685b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x685b90: 0x24427750  addiu       $v0, $v0, 0x7750
    ctx->pc = 0x685b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x685b94: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x685b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x685b98: 0xac22f644  sw          $v0, -0x9BC($at)
    ctx->pc = 0x685b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FF644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FF644u, _value); } while (0);
    // 0x685b9c: 0xc09d2c0  jal         func_274B00
    ctx->pc = 0x685B9Cu;
    SET_GPR_U32(ctx, 31, 0x685BA4u);
    ctx->pc = 0x685BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685B9Cu;
    // 0x685ba0: 0x2484f7c0  addiu       $a0, $a0, -0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274B00u, 0x685B9Cu, 0x685BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685BA4u;
label_685ba4:
    // 0x685ba4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x685ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x685ba8: 0xc09d694  jal         func_275A50
    ctx->pc = 0x685BA8u;
    SET_GPR_U32(ctx, 31, 0x685BB0u);
    ctx->pc = 0x685BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685BA8u;
    // 0x685bac: 0x24841aa0  addiu       $a0, $a0, 0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275A50u, 0x685BA8u, 0x685BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685BB0u;
label_685bb0:
    // 0x685bb0: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x685bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x685bb4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x685bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x685bb8: 0x24637430  addiu       $v1, $v1, 0x7430
    ctx->pc = 0x685bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29744));
    // 0x685bbc: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x685bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x685bc0: 0xac23f644  sw          $v1, -0x9BC($at)
    ctx->pc = 0x685bc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7FF644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7FF644u, _value); } while (0);
    // 0x685bc4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x685bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x685bc8: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x685bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x685bcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x685bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x685bd0: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x685bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x685bd4: 0x2484f170  addiu       $a0, $a0, -0xE90
    ctx->pc = 0x685bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963568));
    // 0x685bd8: 0xa022f170  sb          $v0, -0xE90($at)
    ctx->pc = 0x685bd8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7FF170u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x7FF170u, _value); } while (0);
    // 0x685bdc: 0x24a5a4b0  addiu       $a1, $a1, -0x5B50
    ctx->pc = 0x685bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943920));
    // 0x685be0: 0xc040244  jal         func_100910
    ctx->pc = 0x685BE0u;
    SET_GPR_U32(ctx, 31, 0x685BE8u);
    ctx->pc = 0x685BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x685BE0u;
    // 0x685be4: 0x24c6f160  addiu       $a2, $a2, -0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100910u, 0x685BE0u, 0x685BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x685BE8u;
label_685be8:
    // 0x685be8: 0x3c060081  lui         $a2, 0x81
    ctx->pc = 0x685be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)129 << 16));
    // 0x685bec: 0x24c695c0  addiu       $a2, $a2, -0x6A40
    ctx->pc = 0x685becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940096));
    // 0x685bf0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x685bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x685bf4: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x685bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
    // 0x685bf8: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x685bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x685bfc: 0x24a55fd0  addiu       $a1, $a1, 0x5FD0
    ctx->pc = 0x685bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24528));
    // 0x685c00: 0x24845fe0  addiu       $a0, $a0, 0x5FE0
    ctx->pc = 0x685c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24544));
    // 0x685c04: 0x2463db20  addiu       $v1, $v1, -0x24E0
    ctx->pc = 0x685c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957856));
label_685c08:
    // 0x685c08: 0xacc50154  sw          $a1, 0x154($a2)
    ctx->pc = 0x685c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 5));
    // 0x685c0c: 0xacc40154  sw          $a0, 0x154($a2)
    ctx->pc = 0x685c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 4));
    // 0x685c10: 0x24c622b0  addiu       $a2, $a2, 0x22B0
    ctx->pc = 0x685c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8880));
    // 0x685c14: 0x0  nop
    ctx->pc = 0x685c14u;
    // NOP
    // 0x685c18: 0x0  nop
    ctx->pc = 0x685c18u;
    // NOP
    // 0x685c1c: 0x14c3fffa  bne         $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x685C1Cu;
    {
        const bool branch_taken_0x685c1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x685c1c) {
            ctx->pc = 0x685C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_685c08;
        }
    }
    ctx->pc = 0x685C24u;
    // 0x685c24: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x685c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x685c28: 0xac24dc74  sw          $a0, -0x238C($at)
    ctx->pc = 0x685c28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x80DC74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x80DC74u, _value); } while (0);
    // 0x685c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x685c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x685c30: 0x3e00008  jr          $ra
    ctx->pc = 0x685C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x685C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x685C30u;
        // 0x685c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x685C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x685C38u;
}
