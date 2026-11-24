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

// Function: sub_0030CE40
// Address: 0x30ce40 - 0x30cf2c
void sub_0030CE40_0x30ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CE40_0x30ce40");
#endif

    switch (ctx->pc) {
        case 0x30ce90u: goto label_30ce90;
        case 0x30ceb8u: goto label_30ceb8;
        case 0x30cee0u: goto label_30cee0;
        default: break;
    }

    ctx->pc = 0x30ce40u;

    // 0x30ce40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30ce40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30ce44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x30ce44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x30ce48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x30ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x30ce4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30ce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30ce50: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30ce50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30ce54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x30ce58: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x30ce58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ce60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x30ce60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30ce68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x30ce68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x30ce6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30ce70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce74: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x30ce74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x30ce78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30ce78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30ce7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce80: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x30ce80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x30ce84: 0x2508cdd0  addiu       $t0, $t0, -0x3230
    ctx->pc = 0x30ce84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954448));
    // 0x30ce88: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x30CE88u;
    SET_GPR_U32(ctx, 31, 0x30CE90u);
    ctx->pc = 0x30CE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE88u;
    // 0x30ce8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x30CE88u, 0x30CE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE90u;
label_30ce90:
    // 0x30ce90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30ce90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ce94: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x30CE94u;
    {
        const bool branch_taken_0x30ce94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE94u;
        // 0x30ce98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce94) {
            ctx->pc = 0x30CF00u;
            goto label_30cf00;
        }
    }
    ctx->pc = 0x30CE9Cu;
    // 0x30ce9c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x30ce9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cea0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x30cea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cea4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x30cea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ceac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x30ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30ceb0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x30CEB0u;
    SET_GPR_U32(ctx, 31, 0x30CEB8u);
    ctx->pc = 0x30CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CEB0u;
    // 0x30ceb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x30CEB0u, 0x30CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CEB8u;
label_30ceb8:
    // 0x30ceb8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x30ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30cebc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x30cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x30cec0: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x30cec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x30cec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cec8: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x30cec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x30cecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ced0: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x30ced0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x30ced4: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x30ced4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x30ced8: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x30CED8u;
    SET_GPR_U32(ctx, 31, 0x30CEE0u);
    ctx->pc = 0x30CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CED8u;
    // 0x30cedc: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x30CED8u, 0x30CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CEE0u;
label_30cee0:
    // 0x30cee0: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x30cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x30cee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30cee8: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x30cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x30ceec: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x30ceecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x30cef0: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x30cef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30CEF4u;
    {
        const bool branch_taken_0x30cef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CEF4u;
        // 0x30cef8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cef4) {
            ctx->pc = 0x30CF08u;
            goto label_30cf08;
        }
    }
    ctx->pc = 0x30CEFCu;
    // 0x30cefc: 0x0  nop
    ctx->pc = 0x30cefcu;
    // NOP
label_30cf00:
    // 0x30cf00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30cf00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cf04: 0x0  nop
    ctx->pc = 0x30cf04u;
    // NOP
label_30cf08:
    // 0x30cf08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x30cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30cf0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x30cf0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30cf10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30cf10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30cf14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x30cf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30cf18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30cf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30cf1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30cf1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cf20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30cf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x30CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CF24u;
        // 0x30cf28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CF2Cu;
}
