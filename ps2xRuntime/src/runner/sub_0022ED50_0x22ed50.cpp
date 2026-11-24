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

// Function: sub_0022ED50
// Address: 0x22ed50 - 0x22ee28
void sub_0022ED50_0x22ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022ED50_0x22ed50");
#endif

    switch (ctx->pc) {
        case 0x22ed98u: goto label_22ed98;
        case 0x22edacu: goto label_22edac;
        case 0x22edc0u: goto label_22edc0;
        case 0x22edd4u: goto label_22edd4;
        default: break;
    }

    ctx->pc = 0x22ed50u;

    // 0x22ed50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ed54: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ed58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ed5c: 0x2490c470  addiu       $s0, $a0, -0x3B90
    ctx->pc = 0x22ed5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952048));
    // 0x22ed60: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x22ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
    // 0x22ed64: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x22ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x22ed68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BC470u));
    // 0x22ed6c: 0x24635ac0  addiu       $v1, $v1, 0x5AC0
    ctx->pc = 0x22ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23232));
    // 0x22ed70: 0x2442a2b8  addiu       $v0, $v0, -0x5D48
    ctx->pc = 0x22ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943416));
    // 0x22ed74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22ed78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22ed78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x885AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x885AC0u, _value); } while (0);
    // 0x22ed7c: 0x54800025  bnel        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x22ED7Cu;
    {
        const bool branch_taken_0x22ed7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ed7c) {
            ctx->pc = 0x22ED80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ED7Cu;
            // 0x22ed80: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22EE14u;
            goto label_22ee14;
        }
    }
    ctx->pc = 0x22ED84u;
    // 0x22ed84: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ed88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ed88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ed8c: 0x2484c478  addiu       $a0, $a0, -0x3B88
    ctx->pc = 0x22ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952056));
    // 0x22ed90: 0xc049590  jal         func_125640
    ctx->pc = 0x22ED90u;
    SET_GPR_U32(ctx, 31, 0x22ED98u);
    ctx->pc = 0x22ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ED90u;
    // 0x22ed94: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22ED90u, 0x22ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ED98u;
label_22ed98:
    // 0x22ed98: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ed9c: 0x2484c8b8  addiu       $a0, $a0, -0x3748
    ctx->pc = 0x22ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953144));
    // 0x22eda0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22eda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eda4: 0xc049590  jal         func_125640
    ctx->pc = 0x22EDA4u;
    SET_GPR_U32(ctx, 31, 0x22EDACu);
    ctx->pc = 0x22EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDA4u;
    // 0x22eda8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EDA4u, 0x22EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDACu;
label_22edac:
    // 0x22edac: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22edacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22edb0: 0x2484ccc0  addiu       $a0, $a0, -0x3340
    ctx->pc = 0x22edb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954176));
    // 0x22edb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x22edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22edb8: 0xc049590  jal         func_125640
    ctx->pc = 0x22EDB8u;
    SET_GPR_U32(ctx, 31, 0x22EDC0u);
    ctx->pc = 0x22EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDB8u;
    // 0x22edbc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EDB8u, 0x22EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDC0u;
label_22edc0:
    // 0x22edc0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22edc4: 0x2484cdc0  addiu       $a0, $a0, -0x3240
    ctx->pc = 0x22edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
    // 0x22edc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22edc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22edcc: 0xc049590  jal         func_125640
    ctx->pc = 0x22EDCCu;
    SET_GPR_U32(ctx, 31, 0x22EDD4u);
    ctx->pc = 0x22EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EDCCu;
    // 0x22edd0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EDCCu, 0x22EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EDD4u;
label_22edd4:
    // 0x22edd4: 0x3c06004c  lui         $a2, 0x4C
    ctx->pc = 0x22edd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
    // 0x22edd8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22edd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22eddc: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x22eddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x22ede0: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22ede0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22ede4: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x22ede4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x22ede8: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x22ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x22edec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22edecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22edf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22edf4: 0xaca3cdec  sw          $v1, -0x3214($a1)
    ctx->pc = 0x22edf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4BCDECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDECu, _value); } while (0);
    // 0x22edf8: 0xac82cdf0  sw          $v0, -0x3210($a0)
    ctx->pc = 0x22edf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BCDF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDF0u, _value); } while (0);
    // 0x22edfc: 0xacc0cde0  sw          $zero, -0x3220($a2)
    ctx->pc = 0x22edfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE0u, _value); } while (0);
    // 0x22ee00: 0xace0ccb8  sw          $zero, -0x3348($a3)
    ctx->pc = 0x22ee00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCCB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCCB8u, _value); } while (0);
    // 0x22ee04: 0xad00cde4  sw          $zero, -0x321C($t0)
    ctx->pc = 0x22ee04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE4u, _value); } while (0);
    // 0x22ee08: 0xad20cde8  sw          $zero, -0x3218($t1)
    ctx->pc = 0x22ee08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE8u, _value); } while (0);
    // 0x22ee0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ee10: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x22ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22ee14:
    // 0x22ee14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22ee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ee18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x22ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x22ee1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22ee1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ee20: 0x3e00008  jr          $ra
    ctx->pc = 0x22EE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE20u;
        // 0x22ee24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EE28u;
}
