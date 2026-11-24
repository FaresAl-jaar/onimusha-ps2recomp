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

// Function: sub_002FFBB0
// Address: 0x2ffbb0 - 0x2ffc9c
void sub_002FFBB0_0x2ffbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFBB0_0x2ffbb0");
#endif

    switch (ctx->pc) {
        case 0x2ffc00u: goto label_2ffc00;
        case 0x2ffc28u: goto label_2ffc28;
        case 0x2ffc50u: goto label_2ffc50;
        default: break;
    }

    ctx->pc = 0x2ffbb0u;

    // 0x2ffbb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ffbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ffbb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ffbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ffbb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ffbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ffbbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ffbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ffbc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ffbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ffbc8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ffbc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ffbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ffbd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ffbd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ffbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ffbd8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ffbd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbdc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ffbdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbe4: 0x3c080030  lui         $t0, 0x30
    ctx->pc = 0x2ffbe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48 << 16));
    // 0x2ffbe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ffbe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ffbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbf0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x2ffbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x2ffbf4: 0x2508fb40  addiu       $t0, $t0, -0x4C0
    ctx->pc = 0x2ffbf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966080));
    // 0x2ffbf8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x2FFBF8u;
    SET_GPR_U32(ctx, 31, 0x2FFC00u);
    ctx->pc = 0x2FFBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFBF8u;
    // 0x2ffbfc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x2FFBF8u, 0x2FFC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC00u;
label_2ffc00:
    // 0x2ffc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ffc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc04: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2FFC04u;
    {
        const bool branch_taken_0x2ffc04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC04u;
        // 0x2ffc08: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc04) {
            ctx->pc = 0x2FFC70u;
            goto label_2ffc70;
        }
    }
    ctx->pc = 0x2FFC0Cu;
    // 0x2ffc0c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ffc0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc10: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ffc10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc14: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2ffc14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ffc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ffc20: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x2FFC20u;
    SET_GPR_U32(ctx, 31, 0x2FFC28u);
    ctx->pc = 0x2FFC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC20u;
    // 0x2ffc24: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x2FFC20u, 0x2FFC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC28u;
label_2ffc28:
    // 0x2ffc28: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2ffc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2ffc2c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x2ffc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x2ffc30: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x2ffc30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ffc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc38: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x2ffc38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ffc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ffc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffc40: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x2ffc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ffc44: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x2ffc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ffc48: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x2FFC48u;
    SET_GPR_U32(ctx, 31, 0x2FFC50u);
    ctx->pc = 0x2FFC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFC48u;
    // 0x2ffc4c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x2FFC48u, 0x2FFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFC50u;
label_2ffc50:
    // 0x2ffc50: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x2ffc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x2ffc54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ffc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ffc58: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x2ffc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x2ffc5c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x2ffc5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x2ffc60: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x2ffc60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ffc64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FFC64u;
    {
        const bool branch_taken_0x2ffc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC64u;
        // 0x2ffc68: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffc64) {
            ctx->pc = 0x2FFC78u;
            goto label_2ffc78;
        }
    }
    ctx->pc = 0x2FFC6Cu;
    // 0x2ffc6c: 0x0  nop
    ctx->pc = 0x2ffc6cu;
    // NOP
label_2ffc70:
    // 0x2ffc70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ffc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc74: 0x0  nop
    ctx->pc = 0x2ffc74u;
    // NOP
label_2ffc78:
    // 0x2ffc78: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ffc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ffc7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ffc7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ffc80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ffc80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffc84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ffc84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ffc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffc8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ffc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffc90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ffc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffc94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFC94u;
        // 0x2ffc98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC9Cu;
}
