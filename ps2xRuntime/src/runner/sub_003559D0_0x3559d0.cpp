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

// Function: sub_003559D0
// Address: 0x3559d0 - 0x355af8
void sub_003559D0_0x3559d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003559D0_0x3559d0");
#endif

    switch (ctx->pc) {
        case 0x355a28u: goto label_355a28;
        case 0x355a50u: goto label_355a50;
        case 0x355a74u: goto label_355a74;
        case 0x355aa4u: goto label_355aa4;
        case 0x355ab0u: goto label_355ab0;
        case 0x355ac0u: goto label_355ac0;
        default: break;
    }

    ctx->pc = 0x3559d0u;

    // 0x3559d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3559d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3559d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3559d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3559d8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3559d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3559dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3559dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3559e0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3559e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559e4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3559e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3559e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3559e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3559ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3559f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3559f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3559f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3559f8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3559f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3559fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3559fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x355a00: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x355a00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
    // 0x355a04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x355a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x355a08: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x355a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x355a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a10: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x355a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x355a14: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x355a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x355a18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x355a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355a1c: 0x240705c0  addiu       $a3, $zero, 0x5C0
    ctx->pc = 0x355a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x355a20: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x355A20u;
    SET_GPR_U32(ctx, 31, 0x355A28u);
    ctx->pc = 0x355A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A20u;
    // 0x355a24: 0x25085860  addiu       $t0, $t0, 0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x355A20u, 0x355A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A28u;
label_355a28:
    // 0x355a28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x355a28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a2c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x355A2Cu;
    {
        const bool branch_taken_0x355a2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x355A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A2Cu;
        // 0x355a30: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a2c) {
            ctx->pc = 0x355AC8u;
            goto label_355ac8;
        }
    }
    ctx->pc = 0x355A34u;
    // 0x355a34: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x355a34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a38: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x355a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x355a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355a44: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x355a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x355a48: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x355A48u;
    SET_GPR_U32(ctx, 31, 0x355A50u);
    ctx->pc = 0x355A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A48u;
    // 0x355a4c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x355A48u, 0x355A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A50u;
label_355a50:
    // 0x355a50: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x355a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x355a54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x355a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355a58: 0xa6230526  sh          $v1, 0x526($s1)
    ctx->pc = 0x355a58u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1318), (uint16_t)GPR_U32(ctx, 3));
    // 0x355a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a60: 0xa6230528  sh          $v1, 0x528($s1)
    ctx->pc = 0x355a60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x355a64: 0xa623052a  sh          $v1, 0x52A($s1)
    ctx->pc = 0x355a64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x355a68: 0xa2200521  sb          $zero, 0x521($s1)
    ctx->pc = 0x355a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x355a6c: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x355A6Cu;
    SET_GPR_U32(ctx, 31, 0x355A74u);
    ctx->pc = 0x355A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A6Cu;
    // 0x355a70: 0xa2220520  sb          $v0, 0x520($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x355A6Cu, 0x355A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A74u;
label_355a74:
    // 0x355a74: 0xae200560  sw          $zero, 0x560($s1)
    ctx->pc = 0x355a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 0));
    // 0x355a78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x355a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x355a7c: 0xae200564  sw          $zero, 0x564($s1)
    ctx->pc = 0x355a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 0));
    // 0x355a80: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x355a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x355a84: 0xae220568  sw          $v0, 0x568($s1)
    ctx->pc = 0x355a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1384), GPR_U32(ctx, 2));
    // 0x355a88: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x355a8c: 0xa233056c  sb          $s3, 0x56C($s1)
    ctx->pc = 0x355a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1388), (uint8_t)GPR_U32(ctx, 19));
    // 0x355a90: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x355a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x355a94: 0xa232056d  sb          $s2, 0x56D($s1)
    ctx->pc = 0x355a94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1389), (uint8_t)GPR_U32(ctx, 18));
    // 0x355a98: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x355a98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x355a9c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x355A9Cu;
    SET_GPR_U32(ctx, 31, 0x355AA4u);
    ctx->pc = 0x355AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355A9Cu;
    // 0x355aa0: 0xa62200c2  sh          $v0, 0xC2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 194), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x355A9Cu, 0x355AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AA4u;
label_355aa4:
    // 0x355aa4: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x355aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x355aa8: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x355AA8u;
    SET_GPR_U32(ctx, 31, 0x355AB0u);
    ctx->pc = 0x355AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AA8u;
    // 0x355aac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x355AA8u, 0x355AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AB0u;
label_355ab0:
    // 0x355ab0: 0xae2005b8  sw          $zero, 0x5B8($s1)
    ctx->pc = 0x355ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1464), GPR_U32(ctx, 0));
    // 0x355ab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ab8: 0xc0d5638  jal         func_3558E0
    ctx->pc = 0x355AB8u;
    SET_GPR_U32(ctx, 31, 0x355AC0u);
    ctx->pc = 0x355ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AB8u;
    // 0x355abc: 0xae2005b4  sw          $zero, 0x5B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1460), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3558E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3558E0u, 0x355AB8u, 0x355AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AC0u;
label_355ac0:
    // 0x355ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x355AC0u;
    {
        const bool branch_taken_0x355ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AC0u;
        // 0x355ac4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ac0) {
            ctx->pc = 0x355AD0u;
            goto label_355ad0;
        }
    }
    ctx->pc = 0x355AC8u;
label_355ac8:
    // 0x355ac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x355ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355acc: 0x0  nop
    ctx->pc = 0x355accu;
    // NOP
label_355ad0:
    // 0x355ad0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x355ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x355ad4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x355ad4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x355ad8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x355ad8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x355adc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x355adcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x355ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x355ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355ae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x355ae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355aec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x355aecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355af0: 0x3e00008  jr          $ra
    ctx->pc = 0x355AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AF0u;
        // 0x355af4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355AF8u;
}
