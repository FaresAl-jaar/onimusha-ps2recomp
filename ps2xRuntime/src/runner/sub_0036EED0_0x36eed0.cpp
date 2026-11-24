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

// Function: sub_0036EED0
// Address: 0x36eed0 - 0x36ef94
void sub_0036EED0_0x36eed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EED0_0x36eed0");
#endif

    switch (ctx->pc) {
        case 0x36eefcu: goto label_36eefc;
        case 0x36ef18u: goto label_36ef18;
        case 0x36ef34u: goto label_36ef34;
        case 0x36ef54u: goto label_36ef54;
        case 0x36ef70u: goto label_36ef70;
        case 0x36ef7cu: goto label_36ef7c;
        case 0x36ef84u: goto label_36ef84;
        default: break;
    }

    ctx->pc = 0x36eed0u;

    // 0x36eed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36eed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36eed4: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x36eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
    // 0x36eed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36eed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36eedc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x36eedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36eee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36eee4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x36eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x36eee8: 0x8089032c  lb          $t1, 0x32C($a0)
    ctx->pc = 0x36eee8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 812)));
    // 0x36eeec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eef0: 0x24e7ab20  addiu       $a3, $a3, -0x54E0
    ctx->pc = 0x36eef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945568));
    // 0x36eef4: 0xc0dc390  jal         func_370E40
    ctx->pc = 0x36EEF4u;
    SET_GPR_U32(ctx, 31, 0x36EEFCu);
    ctx->pc = 0x36EEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEF4u;
    // 0x36eef8: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370E40u, 0x36EEF4u, 0x36EEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEFCu;
label_36eefc:
    // 0x36eefc: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x36eefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x36ef00: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x36ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x36ef04: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x36ef04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x36ef08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36ef08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36ef0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ef10: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x36EF10u;
    SET_GPR_U32(ctx, 31, 0x36EF18u);
    ctx->pc = 0x36EF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF10u;
    // 0x36ef14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x36EF10u, 0x36EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF18u;
label_36ef18:
    // 0x36ef18: 0x92080336  lbu         $t0, 0x336($s0)
    ctx->pc = 0x36ef18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 822)));
    // 0x36ef1c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x36ef1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ef20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef24: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x36ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x36ef28: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x36ef28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x36ef2c: 0xc0dc434  jal         func_3710D0
    ctx->pc = 0x36EF2Cu;
    SET_GPR_U32(ctx, 31, 0x36EF34u);
    ctx->pc = 0x36EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF2Cu;
    // 0x36ef30: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710D0u, 0x36EF2Cu, 0x36EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF34u;
label_36ef34:
    // 0x36ef34: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x36ef34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x36ef38: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x36ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x36ef3c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x36ef3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x36ef40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x36ef40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x36ef44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x36ef48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36ef4c: 0xc0d8f4c  jal         func_363D30
    ctx->pc = 0x36EF4Cu;
    SET_GPR_U32(ctx, 31, 0x36EF54u);
    ctx->pc = 0x36EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF4Cu;
    // 0x36ef50: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D30u, 0x36EF4Cu, 0x36EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF54u;
label_36ef54:
    // 0x36ef54: 0x92080336  lbu         $t0, 0x336($s0)
    ctx->pc = 0x36ef54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 822)));
    // 0x36ef58: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x36ef58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36ef5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef60: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x36ef60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x36ef64: 0x240600aa  addiu       $a2, $zero, 0xAA
    ctx->pc = 0x36ef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x36ef68: 0xc0dc434  jal         func_3710D0
    ctx->pc = 0x36EF68u;
    SET_GPR_U32(ctx, 31, 0x36EF70u);
    ctx->pc = 0x36EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF68u;
    // 0x36ef6c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710D0u, 0x36EF68u, 0x36EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF70u;
label_36ef70:
    // 0x36ef70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36ef70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef74: 0xc0dc700  jal         func_371C00
    ctx->pc = 0x36EF74u;
    SET_GPR_U32(ctx, 31, 0x36EF7Cu);
    ctx->pc = 0x36EF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF74u;
    // 0x36ef78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371C00u, 0x36EF74u, 0x36EF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF7Cu;
label_36ef7c:
    // 0x36ef7c: 0xc0dc6fc  jal         func_371BF0
    ctx->pc = 0x36EF7Cu;
    SET_GPR_U32(ctx, 31, 0x36EF84u);
    ctx->pc = 0x36EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF7Cu;
    // 0x36ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371BF0u, 0x36EF7Cu, 0x36EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF84u;
label_36ef84:
    // 0x36ef84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ef88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36ef88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ef8c: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF8Cu;
        // 0x36ef90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF94u;
}
