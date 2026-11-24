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

// Function: sub_0022EE28
// Address: 0x22ee28 - 0x22eeec
void sub_0022EE28_0x22ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EE28_0x22ee28");
#endif

    switch (ctx->pc) {
        case 0x22ee50u: goto label_22ee50;
        case 0x22ee9cu: goto label_22ee9c;
        case 0x22eeb0u: goto label_22eeb0;
        case 0x22eec4u: goto label_22eec4;
        default: break;
    }

    ctx->pc = 0x22ee28u;

    // 0x22ee28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ee2c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22ee2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22ee30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ee34: 0x2463c470  addiu       $v1, $v1, -0x3B90
    ctx->pc = 0x22ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952048));
    // 0x22ee38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BC470u));
    // 0x22ee3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22ee40: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22EE40u;
    {
        const bool branch_taken_0x22ee40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EE40u;
        // 0x22ee44: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ee40) {
            ctx->pc = 0x22EEE0u;
            goto label_22eee0;
        }
    }
    ctx->pc = 0x22EE48u;
    // 0x22ee48: 0xc08c1fc  jal         func_2307F0
    ctx->pc = 0x22EE48u;
    SET_GPR_U32(ctx, 31, 0x22EE50u);
    ctx->pc = 0x2307F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307F0u, 0x22EE48u, 0x22EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE50u;
label_22ee50:
    // 0x22ee50: 0x3c0c004c  lui         $t4, 0x4C
    ctx->pc = 0x22ee50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)76 << 16));
    // 0x22ee54: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ee58: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x22ee58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee5c: 0x3c0b004c  lui         $t3, 0x4C
    ctx->pc = 0x22ee5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)76 << 16));
    // 0x22ee60: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x22ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x22ee64: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x22ee64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x22ee68: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x22ee68u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x22ee6c: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x22ee6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x22ee70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22ee70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ee74: 0x2484cdc0  addiu       $a0, $a0, -0x3240
    ctx->pc = 0x22ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
    // 0x22ee78: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22ee78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22ee7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22ee80: 0xad8acdf0  sw          $t2, -0x3210($t4)
    ctx->pc = 0x22ee80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x4BCDF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDF0u, _value); } while (0);
    // 0x22ee84: 0xad62cdec  sw          $v0, -0x3214($t3)
    ctx->pc = 0x22ee84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4BCDECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDECu, _value); } while (0);
    // 0x22ee88: 0xac60cde8  sw          $zero, -0x3218($v1)
    ctx->pc = 0x22ee88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE8u, _value); } while (0);
    // 0x22ee8c: 0xace0cde4  sw          $zero, -0x321C($a3)
    ctx->pc = 0x22ee8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCDE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCDE4u, _value); } while (0);
    // 0x22ee90: 0xad00ccb8  sw          $zero, -0x3348($t0)
    ctx->pc = 0x22ee90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BCCB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BCCB8u, _value); } while (0);
    // 0x22ee94: 0xc049590  jal         func_125640
    ctx->pc = 0x22EE94u;
    SET_GPR_U32(ctx, 31, 0x22EE9Cu);
    ctx->pc = 0x22EE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EE94u;
    // 0x22ee98: 0xad20cde0  sw          $zero, -0x3220($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294954464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EE94u, 0x22EE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE9Cu;
label_22ee9c:
    // 0x22ee9c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22eea0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x22eea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22eea4: 0x2484ccc0  addiu       $a0, $a0, -0x3340
    ctx->pc = 0x22eea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954176));
    // 0x22eea8: 0xc049590  jal         func_125640
    ctx->pc = 0x22EEA8u;
    SET_GPR_U32(ctx, 31, 0x22EEB0u);
    ctx->pc = 0x22EEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEA8u;
    // 0x22eeac: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EEA8u, 0x22EEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEB0u;
label_22eeb0:
    // 0x22eeb0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22eeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22eeb4: 0x2484c8b8  addiu       $a0, $a0, -0x3748
    ctx->pc = 0x22eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953144));
    // 0x22eeb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22eeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eebc: 0xc049590  jal         func_125640
    ctx->pc = 0x22EEBCu;
    SET_GPR_U32(ctx, 31, 0x22EEC4u);
    ctx->pc = 0x22EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EEBCu;
    // 0x22eec0: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x22EEBCu, 0x22EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EEC4u;
label_22eec4:
    // 0x22eec4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22eec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22eec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eecc: 0x2484c478  addiu       $a0, $a0, -0x3B88
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952056));
    // 0x22eed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22eed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eed4: 0x24060440  addiu       $a2, $zero, 0x440
    ctx->pc = 0x22eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x22eed8: 0x8049590  j           func_125640
    ctx->pc = 0x22EED8u;
    ctx->pc = 0x22EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EED8u;
    // 0x22eedc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    sub_00125640_0x125640(rdram, ctx, runtime); return;
    ctx->pc = 0x22EEE0u;
label_22eee0:
    // 0x22eee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22eee4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEE4u;
        // 0x22eee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EEECu;
}
