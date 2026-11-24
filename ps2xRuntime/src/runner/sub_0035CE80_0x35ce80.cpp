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

// Function: sub_0035CE80
// Address: 0x35ce80 - 0x35cf6c
void sub_0035CE80_0x35ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE80_0x35ce80");
#endif

    switch (ctx->pc) {
        case 0x35ced0u: goto label_35ced0;
        case 0x35cef8u: goto label_35cef8;
        case 0x35cf20u: goto label_35cf20;
        default: break;
    }

    ctx->pc = 0x35ce80u;

    // 0x35ce80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x35ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x35ce84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35ce88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x35ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x35ce8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35ce90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35ce90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce94: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35ce98: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35ce98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35cea0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35cea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35cea8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35cea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x35ceacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35ceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceb4: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x35ceb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x35ceb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35ceb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cebc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35cebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cec0: 0x24070560  addiu       $a3, $zero, 0x560
    ctx->pc = 0x35cec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1376));
    // 0x35cec4: 0x2508ce10  addiu       $t0, $t0, -0x31F0
    ctx->pc = 0x35cec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954512));
    // 0x35cec8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x35CEC8u;
    SET_GPR_U32(ctx, 31, 0x35CED0u);
    ctx->pc = 0x35CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEC8u;
    // 0x35cecc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x35CEC8u, 0x35CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CED0u;
label_35ced0:
    // 0x35ced0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35ced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ced4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35CED4u;
    {
        const bool branch_taken_0x35ced4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CED4u;
        // 0x35ced8: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ced4) {
            ctx->pc = 0x35CF40u;
            goto label_35cf40;
        }
    }
    ctx->pc = 0x35CEDCu;
    // 0x35cedc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x35cedcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cee0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x35cee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cee4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x35cee4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x35ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35cef0: 0xc0c067c  jal         func_3019F0
    ctx->pc = 0x35CEF0u;
    SET_GPR_U32(ctx, 31, 0x35CEF8u);
    ctx->pc = 0x35CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEF0u;
    // 0x35cef4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3019F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3019F0u, 0x35CEF0u, 0x35CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CEF8u;
label_35cef8:
    // 0x35cef8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x35cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35cefc: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x35cf00: 0xa6020526  sh          $v0, 0x526($s0)
    ctx->pc = 0x35cf00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1318), (uint16_t)GPR_U32(ctx, 2));
    // 0x35cf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35cf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf08: 0xa6030528  sh          $v1, 0x528($s0)
    ctx->pc = 0x35cf08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1320), (uint16_t)GPR_U32(ctx, 3));
    // 0x35cf0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35cf10: 0xa603052a  sh          $v1, 0x52A($s0)
    ctx->pc = 0x35cf10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1322), (uint16_t)GPR_U32(ctx, 3));
    // 0x35cf14: 0xa2000521  sb          $zero, 0x521($s0)
    ctx->pc = 0x35cf14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 0));
    // 0x35cf18: 0xc0c08a8  jal         func_3022A0
    ctx->pc = 0x35CF18u;
    SET_GPR_U32(ctx, 31, 0x35CF20u);
    ctx->pc = 0x35CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CF18u;
    // 0x35cf1c: 0xa2020520  sb          $v0, 0x520($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1312), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022A0u, 0x35CF18u, 0x35CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CF20u;
label_35cf20:
    // 0x35cf20: 0xae000550  sw          $zero, 0x550($s0)
    ctx->pc = 0x35cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 0));
    // 0x35cf24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x35cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x35cf28: 0xae020554  sw          $v0, 0x554($s0)
    ctx->pc = 0x35cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1364), GPR_U32(ctx, 2));
    // 0x35cf2c: 0xa2110558  sb          $s1, 0x558($s0)
    ctx->pc = 0x35cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1368), (uint8_t)GPR_U32(ctx, 17));
    // 0x35cf30: 0xa2000559  sb          $zero, 0x559($s0)
    ctx->pc = 0x35cf30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1369), (uint8_t)GPR_U32(ctx, 0));
    // 0x35cf34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35CF34u;
    {
        const bool branch_taken_0x35cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF34u;
        // 0x35cf38: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cf34) {
            ctx->pc = 0x35CF48u;
            goto label_35cf48;
        }
    }
    ctx->pc = 0x35CF3Cu;
    // 0x35cf3c: 0x0  nop
    ctx->pc = 0x35cf3cu;
    // NOP
label_35cf40:
    // 0x35cf40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35cf40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cf44: 0x0  nop
    ctx->pc = 0x35cf44u;
    // NOP
label_35cf48:
    // 0x35cf48: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35cf4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35cf4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35cf50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35cf50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35cf54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35cf54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35cf58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35cf58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35cf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cf64: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF64u;
        // 0x35cf68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF6Cu;
}
