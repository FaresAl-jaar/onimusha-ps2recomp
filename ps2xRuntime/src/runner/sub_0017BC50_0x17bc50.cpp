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

// Function: sub_0017BC50
// Address: 0x17bc50 - 0x17bce8
void sub_0017BC50_0x17bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BC50_0x17bc50");
#endif

    switch (ctx->pc) {
        case 0x17bc70u: goto label_17bc70;
        default: break;
    }

    ctx->pc = 0x17bc50u;

    // 0x17bc50: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x17bc50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bc54: 0x11400020  beqz        $t2, . + 4 + (0x20 << 2)
    ctx->pc = 0x17BC54u;
    {
        const bool branch_taken_0x17bc54 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BC54u;
        // 0x17bc58: 0x30a900ff  andi        $t1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bc54) {
            ctx->pc = 0x17BCD8u;
            goto label_17bcd8;
        }
    }
    ctx->pc = 0x17BC5Cu;
    // 0x17bc5c: 0x30c800ff  andi        $t0, $a2, 0xFF
    ctx->pc = 0x17bc5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17bc60: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x17bc60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x17bc64: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x17bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x17bc68: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x17bc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x17bc6c: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x17bc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_17bc70:
    // 0x17bc70: 0x91420008  lbu         $v0, 0x8($t2)
    ctx->pc = 0x17bc70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x17bc74: 0x14490014  bne         $v0, $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17BC74u;
    {
        const bool branch_taken_0x17bc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x17bc74) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BC7Cu;
    // 0x17bc7c: 0x91420009  lbu         $v0, 0x9($t2)
    ctx->pc = 0x17bc7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 9)));
    // 0x17bc80: 0x14480011  bne         $v0, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x17BC80u;
    {
        const bool branch_taken_0x17bc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x17bc80) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BC88u;
    // 0x17bc88: 0x9142000a  lbu         $v0, 0xA($t2)
    ctx->pc = 0x17bc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x17bc8c: 0x1447000e  bne         $v0, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x17BC8Cu;
    {
        const bool branch_taken_0x17bc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x17bc8c) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BC94u;
    // 0x17bc94: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x17bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x17bc98: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x17bc98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bc9c: 0x1486000a  bne         $a0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x17BC9Cu;
    {
        const bool branch_taken_0x17bc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x17bc9c) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BCA4u;
    // 0x17bca4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x17bca4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x17bca8: 0x14850007  bne         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17BCA8u;
    {
        const bool branch_taken_0x17bca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x17bca8) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BCB0u;
    // 0x17bcb0: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x17bcb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x17bcb4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BCB4u;
    {
        const bool branch_taken_0x17bcb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bcb4) {
            ctx->pc = 0x17BCC8u;
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BCBCu;
    // 0x17bcbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17BCBCu;
    {
        const bool branch_taken_0x17bcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bcbc) {
            ctx->pc = 0x17BCE0u;
            goto label_17bce0;
        }
    }
    ctx->pc = 0x17BCC4u;
    // 0x17bcc4: 0x0  nop
    ctx->pc = 0x17bcc4u;
    // NOP
label_17bcc8:
    // 0x17bcc8: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x17bcc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x17bccc: 0x1540ffe8  bnez        $t2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17BCCCu;
    {
        const bool branch_taken_0x17bccc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bccc) {
            ctx->pc = 0x17BC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bc70;
        }
    }
    ctx->pc = 0x17BCD4u;
    // 0x17bcd4: 0x0  nop
    ctx->pc = 0x17bcd4u;
    // NOP
label_17bcd8:
    // 0x17bcd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17bcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcdc: 0x0  nop
    ctx->pc = 0x17bcdcu;
    // NOP
label_17bce0:
    // 0x17bce0: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCE8u;
}
