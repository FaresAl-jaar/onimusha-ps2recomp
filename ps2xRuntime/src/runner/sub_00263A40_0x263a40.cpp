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

// Function: sub_00263A40
// Address: 0x263a40 - 0x263ac0
void sub_00263A40_0x263a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263A40_0x263a40");
#endif

    switch (ctx->pc) {
        case 0x263a6cu: goto label_263a6c;
        case 0x263a98u: goto label_263a98;
        default: break;
    }

    ctx->pc = 0x263a40u;

    // 0x263a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x263a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x263a44: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x263a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x263a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x263a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x263a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263a50: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x263a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x263a54: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x263A54u;
    {
        const bool branch_taken_0x263a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A54u;
        // 0x263a58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a54) {
            ctx->pc = 0x263A88u;
            goto label_263a88;
        }
    }
    ctx->pc = 0x263A5Cu;
    // 0x263a5c: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x263a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x263a60: 0x80450036  lb          $a1, 0x36($v0)
    ctx->pc = 0x263a60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x263a64: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x263A64u;
    SET_GPR_U32(ctx, 31, 0x263A6Cu);
    ctx->pc = 0x263A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A64u;
    // 0x263a68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x263A64u, 0x263A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A6Cu;
label_263a6c:
    // 0x263a6c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x263a70: 0x2463f358  addiu       $v1, $v1, -0xCA8
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964056));
    // 0x263a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263a78: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263a7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263A7Cu;
    {
        const bool branch_taken_0x263a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263A7Cu;
        // 0x263a80: 0xa2032ad7  sb          $v1, 0x2AD7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10967), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263a7c) {
            ctx->pc = 0x263AB0u;
            goto label_263ab0;
        }
    }
    ctx->pc = 0x263A84u;
    // 0x263a84: 0x0  nop
    ctx->pc = 0x263a84u;
    // NOP
label_263a88:
    // 0x263a88: 0x8e0229c0  lw          $v0, 0x29C0($s0)
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10688)));
    // 0x263a8c: 0x80450036  lb          $a1, 0x36($v0)
    ctx->pc = 0x263a8cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 54)));
    // 0x263a90: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x263A90u;
    SET_GPR_U32(ctx, 31, 0x263A98u);
    ctx->pc = 0x263A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263A90u;
    // 0x263a94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x263A90u, 0x263A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263A98u;
label_263a98:
    // 0x263a98: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x263a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x263a9c: 0x2463f350  addiu       $v1, $v1, -0xCB0
    ctx->pc = 0x263a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964048));
    // 0x263aa0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263aa4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x263aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263aa8: 0xa2032ad7  sb          $v1, 0x2AD7($s0)
    ctx->pc = 0x263aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10967), (uint8_t)GPR_U32(ctx, 3));
    // 0x263aac: 0x0  nop
    ctx->pc = 0x263aacu;
    // NOP
label_263ab0:
    // 0x263ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x263ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x263ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x263AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AB8u;
        // 0x263abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263AC0u;
}
