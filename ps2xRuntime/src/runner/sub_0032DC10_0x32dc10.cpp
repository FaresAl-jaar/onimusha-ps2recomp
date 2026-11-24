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

// Function: sub_0032DC10
// Address: 0x32dc10 - 0x32dcdc
void sub_0032DC10_0x32dc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DC10_0x32dc10");
#endif

    switch (ctx->pc) {
        case 0x32dc90u: goto label_32dc90;
        case 0x32dcc0u: goto label_32dcc0;
        default: break;
    }

    ctx->pc = 0x32dc10u;

    // 0x32dc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32dc14: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x32dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x32dc18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32dc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32dc1c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32dc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32dc20: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x32dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x32dc24: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x32dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x32dc28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32dc2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DC2Cu;
    {
        const bool branch_taken_0x32dc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC2Cu;
        // 0x32dc30: 0x8085000a  lb          $a1, 0xA($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dc2c) {
            ctx->pc = 0x32DC40u;
            goto label_32dc40;
        }
    }
    ctx->pc = 0x32DC34u;
    // 0x32dc34: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x32dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x32dc38: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x32dc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x32dc3c: 0x0  nop
    ctx->pc = 0x32dc3cu;
    // NOP
label_32dc40:
    // 0x32dc40: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x32dc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x32dc44: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x32dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x32dc48: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x32dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x32dc4c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x32dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x32dc50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x32dc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32dc54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32DC54u;
    {
        const bool branch_taken_0x32dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32dc54) {
            ctx->pc = 0x32DC68u;
            goto label_32dc68;
        }
    }
    ctx->pc = 0x32DC5Cu;
    // 0x32dc5c: 0x8082000a  lb          $v0, 0xA($a0)
    ctx->pc = 0x32dc5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32dc60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32dc64: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x32dc64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
label_32dc68:
    // 0x32dc68: 0x8083000a  lb          $v1, 0xA($a0)
    ctx->pc = 0x32dc68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32dc6c: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x32dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x32dc70: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x32dc70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x32dc74: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x32dc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x32dc78: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x32dc78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x32dc7c: 0x8083000a  lb          $v1, 0xA($a0)
    ctx->pc = 0x32dc7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32dc80: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x32DC80u;
    {
        const bool branch_taken_0x32dc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32dc80) {
            ctx->pc = 0x32DCC8u;
            goto label_32dcc8;
        }
    }
    ctx->pc = 0x32DC88u;
    // 0x32dc88: 0xc0cb954  jal         func_32E550
    ctx->pc = 0x32DC88u;
    SET_GPR_U32(ctx, 31, 0x32DC90u);
    ctx->pc = 0x32E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E550u, 0x32DC88u, 0x32DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DC90u;
label_32dc90:
    // 0x32dc90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32dc94: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x32dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x32dc98: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x32dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x32dc9c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x32dc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x32dca0: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x32dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x32dca4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32dca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dca8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32dca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x32dcacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcb0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32dcb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32dcb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dcb8: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x32DCB8u;
    SET_GPR_U32(ctx, 31, 0x32DCC0u);
    ctx->pc = 0x32DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DCB8u;
    // 0x32dcbc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x32DCB8u, 0x32DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DCC0u;
label_32dcc0:
    // 0x32dcc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32DCC0u;
    {
        const bool branch_taken_0x32dcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCC0u;
        // 0x32dcc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dcc0) {
            ctx->pc = 0x32DCD0u;
            goto label_32dcd0;
        }
    }
    ctx->pc = 0x32DCC8u;
label_32dcc8:
    // 0x32dcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32dcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dccc: 0x0  nop
    ctx->pc = 0x32dcccu;
    // NOP
label_32dcd0:
    // 0x32dcd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32dcd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dcd4: 0x3e00008  jr          $ra
    ctx->pc = 0x32DCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DCD4u;
        // 0x32dcd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DCD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DCDCu;
}
