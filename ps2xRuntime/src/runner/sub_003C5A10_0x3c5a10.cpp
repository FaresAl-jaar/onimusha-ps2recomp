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

// Function: sub_003C5A10
// Address: 0x3c5a10 - 0x3c5ae0
void sub_003C5A10_0x3c5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5A10_0x3c5a10");
#endif

    switch (ctx->pc) {
        case 0x3c5a48u: goto label_3c5a48;
        case 0x3c5a50u: goto label_3c5a50;
        case 0x3c5a70u: goto label_3c5a70;
        case 0x3c5ab8u: goto label_3c5ab8;
        case 0x3c5ac0u: goto label_3c5ac0;
        default: break;
    }

    ctx->pc = 0x3c5a10u;

    // 0x3c5a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3c5a14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5a18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c5a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c5a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c5a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c5a20: 0x90850509  lbu         $a1, 0x509($a0)
    ctx->pc = 0x3c5a20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1289)));
    // 0x3c5a24: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C5A24u;
    {
        const bool branch_taken_0x3c5a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C5A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5A24u;
        // 0x3c5a28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5a24) {
            ctx->pc = 0x3C5A60u;
            goto label_3c5a60;
        }
    }
    ctx->pc = 0x3C5A2Cu;
    // 0x3c5a2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C5A2Cu;
    {
        const bool branch_taken_0x3c5a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5a2c) {
            ctx->pc = 0x3C5A40u;
            goto label_3c5a40;
        }
    }
    ctx->pc = 0x3C5A34u;
    // 0x3c5a34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3C5A34u;
    {
        const bool branch_taken_0x3c5a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5a34) {
            ctx->pc = 0x3C5AD0u;
            goto label_3c5ad0;
        }
    }
    ctx->pc = 0x3C5A3Cu;
    // 0x3c5a3c: 0x0  nop
    ctx->pc = 0x3c5a3cu;
    // NOP
label_3c5a40:
    // 0x3c5a40: 0xc0f1adc  jal         func_3C6B70
    ctx->pc = 0x3C5A40u;
    SET_GPR_U32(ctx, 31, 0x3C5A48u);
    ctx->pc = 0x3C6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6B70u, 0x3C5A40u, 0x3C5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A48u;
label_3c5a48:
    // 0x3c5a48: 0xc0f1a38  jal         func_3C68E0
    ctx->pc = 0x3C5A48u;
    SET_GPR_U32(ctx, 31, 0x3C5A50u);
    ctx->pc = 0x3C5A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A48u;
    // 0x3c5a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C68E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C68E0u, 0x3C5A48u, 0x3C5A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A50u;
label_3c5a50:
    // 0x3c5a50: 0x92020509  lbu         $v0, 0x509($s0)
    ctx->pc = 0x3c5a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1289)));
    // 0x3c5a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3c5a58: 0xa2020509  sb          $v0, 0x509($s0)
    ctx->pc = 0x3c5a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c5a5c: 0x0  nop
    ctx->pc = 0x3c5a5cu;
    // NOP
label_3c5a60:
    // 0x3c5a60: 0x8e050500  lw          $a1, 0x500($s0)
    ctx->pc = 0x3c5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3c5a64: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3c5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3c5a68: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3C5A68u;
    SET_GPR_U32(ctx, 31, 0x3C5A70u);
    ctx->pc = 0x3C5A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5A68u;
    // 0x3c5a6c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3C5A68u, 0x3C5A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5A70u;
label_3c5a70:
    // 0x3c5a70: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C5A70u;
    {
        const bool branch_taken_0x3c5a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5a70) {
            ctx->pc = 0x3C5AB8u;
            goto label_3c5ab8;
        }
    }
    ctx->pc = 0x3C5A78u;
    // 0x3c5a78: 0x8c45004c  lw          $a1, 0x4C($v0)
    ctx->pc = 0x3c5a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c5a7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3c5a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3c5a80: 0x92060504  lbu         $a2, 0x504($s0)
    ctx->pc = 0x3c5a80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x3c5a84: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x3c5a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3c5a88: 0x8ca50094  lw          $a1, 0x94($a1)
    ctx->pc = 0x3c5a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x3c5a8c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x3c5a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x3c5a90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3c5a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3c5a94: 0x78a50030  lq          $a1, 0x30($a1)
    ctx->pc = 0x3c5a94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3c5a98: 0x7e050020  sq          $a1, 0x20($s0)
    ctx->pc = 0x3c5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 5));
    // 0x3c5a9c: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x3c5a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x3c5aa0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x3c5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x3c5aa4: 0x92030504  lbu         $v1, 0x504($s0)
    ctx->pc = 0x3c5aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1284)));
    // 0x3c5aa8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3c5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3c5aac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3c5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3c5ab0: 0xc0968b8  jal         func_25A2E0
    ctx->pc = 0x3C5AB0u;
    SET_GPR_U32(ctx, 31, 0x3C5AB8u);
    ctx->pc = 0x3C5AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5AB0u;
    // 0x3c5ab4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2E0u, 0x3C5AB0u, 0x3C5AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5AB8u;
label_3c5ab8:
    // 0x3c5ab8: 0xc0f1a90  jal         func_3C6A40
    ctx->pc = 0x3C5AB8u;
    SET_GPR_U32(ctx, 31, 0x3C5AC0u);
    ctx->pc = 0x3C5ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5AB8u;
    // 0x3c5abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6A40u, 0x3C5AB8u, 0x3C5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5AC0u;
label_3c5ac0:
    // 0x3c5ac0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x3c5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x3c5ac4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3c5ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3c5ac8: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x3c5ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x3c5acc: 0x0  nop
    ctx->pc = 0x3c5accu;
    // NOP
label_3c5ad0:
    // 0x3c5ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5AD8u;
        // 0x3c5adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5AE0u;
}
