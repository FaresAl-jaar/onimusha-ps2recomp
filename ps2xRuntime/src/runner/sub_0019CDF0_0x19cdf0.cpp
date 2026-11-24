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

// Function: sub_0019CDF0
// Address: 0x19cdf0 - 0x19cf44
void sub_0019CDF0_0x19cdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CDF0_0x19cdf0");
#endif

    switch (ctx->pc) {
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce98u: goto label_19ce98;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ced0u: goto label_19ced0;
        case 0x19cef4u: goto label_19cef4;
        default: break;
    }

    ctx->pc = 0x19cdf0u;

    // 0x19cdf0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19cdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19cdf4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x19cdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x19cdf8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x19cdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x19cdfc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19cdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x19ce00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19ce04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x19ce04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ce08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19ce0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19ce0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19ce10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19ce14: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x19ce14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x19ce18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ce1c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19ce1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ce24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ce24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ce28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ce2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ce2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce30: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19CE30u;
    SET_GPR_U32(ctx, 31, 0x19CE38u);
    ctx->pc = 0x19CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE30u;
    // 0x19ce34: 0x2694f750  addiu       $s4, $s4, -0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19CE30u, 0x19CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE38u;
label_19ce38:
    // 0x19ce38: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19ce38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19ce3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CE3Cu;
    {
        const bool branch_taken_0x19ce3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE3Cu;
        // 0x19ce40: 0x32d700ff  andi        $s7, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce3c) {
            ctx->pc = 0x19CE80u;
            goto label_19ce80;
        }
    }
    ctx->pc = 0x19CE44u;
    // 0x19ce44: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x19ce44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_19ce48:
    // 0x19ce48: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x19ce48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x19ce4c: 0x14570006  bne         $v0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x19CE4Cu;
    {
        const bool branch_taken_0x19ce4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x19ce4c) {
            ctx->pc = 0x19CE68u;
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE54u;
    // 0x19ce54: 0x92820001  lbu         $v0, 0x1($s4)
    ctx->pc = 0x19ce54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x19ce58: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19CE58u;
    {
        const bool branch_taken_0x19ce58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x19ce58) {
            ctx->pc = 0x19CE68u;
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE60u;
    // 0x19ce60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19ce60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19ce64: 0x0  nop
    ctx->pc = 0x19ce64u;
    // NOP
label_19ce68:
    // 0x19ce68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x19ce68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x19ce6c: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19CE6Cu;
    SET_GPR_U32(ctx, 31, 0x19CE74u);
    ctx->pc = 0x19CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE6Cu;
    // 0x19ce70: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19CE6Cu, 0x19CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE74u;
label_19ce74:
    // 0x19ce74: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x19ce74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19ce78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x19CE78u;
    {
        const bool branch_taken_0x19ce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ce78) {
            ctx->pc = 0x19CE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ce48;
        }
    }
    ctx->pc = 0x19CE80u;
label_19ce80:
    // 0x19ce80: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x19ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19ce84: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x19ce84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x19ce88: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19ce8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ce8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce90: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19CE90u;
    SET_GPR_U32(ctx, 31, 0x19CE98u);
    ctx->pc = 0x19CE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE90u;
    // 0x19ce94: 0x2610f750  addiu       $s0, $s0, -0x8B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19CE90u, 0x19CE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CE98u;
label_19ce98:
    // 0x19ce98: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19ce98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19ce9c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x19CE9Cu;
    {
        const bool branch_taken_0x19ce9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE9Cu;
        // 0x19cea0: 0x32d400ff  andi        $s4, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce9c) {
            ctx->pc = 0x19CF00u;
            goto label_19cf00;
        }
    }
    ctx->pc = 0x19CEA4u;
    // 0x19cea4: 0x32b300ff  andi        $s3, $s5, 0xFF
    ctx->pc = 0x19cea4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_19cea8:
    // 0x19cea8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x19cea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ceac: 0x1454000e  bne         $v0, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x19CEACu;
    {
        const bool branch_taken_0x19ceac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x19ceac) {
            ctx->pc = 0x19CEE8u;
            goto label_19cee8;
        }
    }
    ctx->pc = 0x19CEB4u;
    // 0x19ceb4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x19ceb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x19ceb8: 0x1453000b  bne         $v0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x19CEB8u;
    {
        const bool branch_taken_0x19ceb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x19CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB8u;
        // 0x19cebc: 0x2643000f  addiu       $v1, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb8) {
            ctx->pc = 0x19CEE8u;
            goto label_19cee8;
        }
    }
    ctx->pc = 0x19CEC0u;
    // 0x19cec0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19cec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19cec4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x19cec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19cec8: 0xc067360  jal         func_19CD80
    ctx->pc = 0x19CEC8u;
    SET_GPR_U32(ctx, 31, 0x19CED0u);
    ctx->pc = 0x19CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEC8u;
    // 0x19cecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD80u, 0x19CEC8u, 0x19CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CED0u;
label_19ced0:
    // 0x19ced0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19ced4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x19ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19ced8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x19cedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19cee0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x19cee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x19cee4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_19cee8:
    // 0x19cee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19ceec: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19CEECu;
    SET_GPR_U32(ctx, 31, 0x19CEF4u);
    ctx->pc = 0x19CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CEECu;
    // 0x19cef0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19CEECu, 0x19CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CEF4u;
label_19cef4:
    // 0x19cef4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x19cef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19cef8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19CEF8u;
    {
        const bool branch_taken_0x19cef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cef8) {
            ctx->pc = 0x19CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cea8;
        }
    }
    ctx->pc = 0x19CF00u;
label_19cf00:
    // 0x19cf00: 0x2643000f  addiu       $v1, $s2, 0xF
    ctx->pc = 0x19cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
    // 0x19cf04: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19cf08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19cf0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19CF0Cu;
    {
        const bool branch_taken_0x19cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cf0c) {
            ctx->pc = 0x19CF18u;
            goto label_19cf18;
        }
    }
    ctx->pc = 0x19CF14u;
    // 0x19cf14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x19cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_19cf18:
    // 0x19cf18: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19cf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19cf1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x19cf1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19cf20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x19cf20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19cf24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19cf24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19cf28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19cf28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cf2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19cf2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cf30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19cf30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cf34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19cf34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cf38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19cf38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cf3c: 0x3e00008  jr          $ra
    ctx->pc = 0x19CF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF3Cu;
        // 0x19cf40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19CF44u;
}
