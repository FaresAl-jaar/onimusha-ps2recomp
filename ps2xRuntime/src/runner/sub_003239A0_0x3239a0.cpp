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

// Function: sub_003239A0
// Address: 0x3239a0 - 0x323a94
void sub_003239A0_0x3239a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003239A0_0x3239a0");
#endif

    switch (ctx->pc) {
        case 0x3239f0u: goto label_3239f0;
        case 0x323a18u: goto label_323a18;
        case 0x323a40u: goto label_323a40;
        default: break;
    }

    ctx->pc = 0x3239a0u;

    // 0x3239a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3239a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3239a4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3239a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3239a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3239a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3239ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3239acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3239b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3239b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3239b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3239b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3239b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3239bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3239c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3239c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3239c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3239c8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3239c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239cc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3239ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3239d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239d4: 0x3c080032  lui         $t0, 0x32
    ctx->pc = 0x3239d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)50 << 16));
    // 0x3239d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3239d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3239dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239e0: 0x24070570  addiu       $a3, $zero, 0x570
    ctx->pc = 0x3239e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x3239e4: 0x25083930  addiu       $t0, $t0, 0x3930
    ctx->pc = 0x3239e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14640));
    // 0x3239e8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x3239E8u;
    SET_GPR_U32(ctx, 31, 0x3239F0u);
    ctx->pc = 0x3239ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3239E8u;
    // 0x3239ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x3239E8u, 0x3239F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3239F0u;
label_3239f0:
    // 0x3239f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3239f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3239f4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3239F4u;
    {
        const bool branch_taken_0x3239f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3239F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239F4u;
        // 0x3239f8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3239f4) {
            ctx->pc = 0x323A68u;
            goto label_323a68;
        }
    }
    ctx->pc = 0x3239FCu;
    // 0x3239fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x3239fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a00: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x323a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a04: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x323a04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a0c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x323a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x323a10: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x323A10u;
    SET_GPR_U32(ctx, 31, 0x323A18u);
    ctx->pc = 0x323A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A10u;
    // 0x323a14: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x323A10u, 0x323A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A18u;
label_323a18:
    // 0x323a18: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x323a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x323a1c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x323a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x323a20: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x323a20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x323a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a28: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x323a28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x323a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323a30: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x323a30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x323a34: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x323a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x323a38: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x323A38u;
    SET_GPR_U32(ctx, 31, 0x323A40u);
    ctx->pc = 0x323A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A38u;
    // 0x323a3c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x323A38u, 0x323A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A40u;
label_323a40:
    // 0x323a40: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x323a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x323a44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x323a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x323a48: 0xae000554  sw          $zero, 0x554($s0)
    ctx->pc = 0x323a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 0));
    // 0x323a4c: 0xae000558  sw          $zero, 0x558($s0)
    ctx->pc = 0x323a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1368), GPR_U32(ctx, 0));
    // 0x323a50: 0xae02055c  sw          $v0, 0x55C($s0)
    ctx->pc = 0x323a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1372), GPR_U32(ctx, 2));
    // 0x323a54: 0xa2110560  sb          $s1, 0x560($s0)
    ctx->pc = 0x323a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1376), (uint8_t)GPR_U32(ctx, 17));
    // 0x323a58: 0xa2000561  sb          $zero, 0x561($s0)
    ctx->pc = 0x323a58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1377), (uint8_t)GPR_U32(ctx, 0));
    // 0x323a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x323A5Cu;
    {
        const bool branch_taken_0x323a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A5Cu;
        // 0x323a60: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a5c) {
            ctx->pc = 0x323A70u;
            goto label_323a70;
        }
    }
    ctx->pc = 0x323A64u;
    // 0x323a64: 0x0  nop
    ctx->pc = 0x323a64u;
    // NOP
label_323a68:
    // 0x323a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x323a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a6c: 0x0  nop
    ctx->pc = 0x323a6cu;
    // NOP
label_323a70:
    // 0x323a70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x323a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x323a74: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x323a74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x323a78: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x323a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x323a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x323a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x323a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x323a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x323a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x323A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A8Cu;
        // 0x323a90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323A94u;
}
