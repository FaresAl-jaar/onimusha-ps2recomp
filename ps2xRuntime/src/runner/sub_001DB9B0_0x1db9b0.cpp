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

// Function: sub_001DB9B0
// Address: 0x1db9b0 - 0x1dbaa8
void sub_001DB9B0_0x1db9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB9B0_0x1db9b0");
#endif

    switch (ctx->pc) {
        case 0x1db9b0u: goto label_1db9b0;
        case 0x1db9b4u: goto label_1db9b4;
        case 0x1db9b8u: goto label_1db9b8;
        case 0x1db9bcu: goto label_1db9bc;
        case 0x1db9c0u: goto label_1db9c0;
        case 0x1db9c4u: goto label_1db9c4;
        case 0x1db9c8u: goto label_1db9c8;
        case 0x1db9ccu: goto label_1db9cc;
        case 0x1db9d0u: goto label_1db9d0;
        case 0x1db9d4u: goto label_1db9d4;
        case 0x1db9d8u: goto label_1db9d8;
        case 0x1db9dcu: goto label_1db9dc;
        case 0x1db9e0u: goto label_1db9e0;
        case 0x1db9e4u: goto label_1db9e4;
        case 0x1db9e8u: goto label_1db9e8;
        case 0x1db9ecu: goto label_1db9ec;
        case 0x1db9f0u: goto label_1db9f0;
        case 0x1db9f4u: goto label_1db9f4;
        case 0x1db9f8u: goto label_1db9f8;
        case 0x1db9fcu: goto label_1db9fc;
        case 0x1dba00u: goto label_1dba00;
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba08u: goto label_1dba08;
        case 0x1dba0cu: goto label_1dba0c;
        case 0x1dba10u: goto label_1dba10;
        case 0x1dba14u: goto label_1dba14;
        case 0x1dba18u: goto label_1dba18;
        case 0x1dba1cu: goto label_1dba1c;
        case 0x1dba20u: goto label_1dba20;
        case 0x1dba24u: goto label_1dba24;
        case 0x1dba28u: goto label_1dba28;
        case 0x1dba2cu: goto label_1dba2c;
        case 0x1dba30u: goto label_1dba30;
        case 0x1dba34u: goto label_1dba34;
        case 0x1dba38u: goto label_1dba38;
        case 0x1dba3cu: goto label_1dba3c;
        case 0x1dba40u: goto label_1dba40;
        case 0x1dba44u: goto label_1dba44;
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba4cu: goto label_1dba4c;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba54u: goto label_1dba54;
        case 0x1dba58u: goto label_1dba58;
        case 0x1dba5cu: goto label_1dba5c;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba64u: goto label_1dba64;
        case 0x1dba68u: goto label_1dba68;
        case 0x1dba6cu: goto label_1dba6c;
        case 0x1dba70u: goto label_1dba70;
        case 0x1dba74u: goto label_1dba74;
        case 0x1dba78u: goto label_1dba78;
        case 0x1dba7cu: goto label_1dba7c;
        case 0x1dba80u: goto label_1dba80;
        case 0x1dba84u: goto label_1dba84;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dba8cu: goto label_1dba8c;
        case 0x1dba90u: goto label_1dba90;
        case 0x1dba94u: goto label_1dba94;
        case 0x1dba98u: goto label_1dba98;
        case 0x1dba9cu: goto label_1dba9c;
        case 0x1dbaa0u: goto label_1dbaa0;
        case 0x1dbaa4u: goto label_1dbaa4;
        default: break;
    }

    ctx->pc = 0x1db9b0u;

label_1db9b0:
    // 0x1db9b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1db9b4:
    // 0x1db9b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1db9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1db9b8:
    // 0x1db9b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1db9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1db9bc:
    // 0x1db9bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1db9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1db9c0:
    // 0x1db9c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1db9c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db9c4:
    // 0x1db9c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1db9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1db9c8:
    // 0x1db9c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1db9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db9cc:
    // 0x1db9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1db9d0:
    // 0x1db9d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1db9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1db9d4:
    // 0x1db9d4: 0xc076ed0  jal         func_1DBB40
label_1db9d8:
    if (ctx->pc == 0x1DB9D8u) {
        ctx->pc = 0x1DB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9D4u;
        // 0x1db9d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9DCu;
        goto label_1db9dc;
    }
    ctx->pc = 0x1DB9D4u;
    SET_GPR_U32(ctx, 31, 0x1DB9DCu);
    ctx->pc = 0x1DB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9D4u;
    // 0x1db9d8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB40u, 0x1DB9D4u, 0x1DB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB9DCu;
label_1db9dc:
    // 0x1db9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1db9e0:
    if (ctx->pc == 0x1DB9E0u) {
        ctx->pc = 0x1DB9E4u;
        goto label_1db9e4;
    }
    ctx->pc = 0x1DB9DCu;
    {
        const bool branch_taken_0x1db9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db9dc) {
            ctx->pc = 0x1DB9F0u;
            goto label_1db9f0;
        }
    }
    ctx->pc = 0x1DB9E4u;
label_1db9e4:
    // 0x1db9e4: 0x10000028  b           . + 4 + (0x28 << 2)
label_1db9e8:
    if (ctx->pc == 0x1DB9E8u) {
        ctx->pc = 0x1DB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E4u;
        // 0x1db9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DB9ECu;
        goto label_1db9ec;
    }
    ctx->pc = 0x1DB9E4u;
    {
        const bool branch_taken_0x1db9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9E4u;
        // 0x1db9e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9e4) {
            ctx->pc = 0x1DBA88u;
            goto label_1dba88;
        }
    }
    ctx->pc = 0x1DB9ECu;
label_1db9ec:
    // 0x1db9ec: 0x0  nop
    ctx->pc = 0x1db9ecu;
    // NOP
label_1db9f0:
    // 0x1db9f0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1db9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1db9f4:
    // 0x1db9f4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1db9f8:
    // 0x1db9f8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1db9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1db9fc:
    // 0x1db9fc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1dba00:
    if (ctx->pc == 0x1DBA00u) {
        ctx->pc = 0x1DBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9FCu;
        // 0x1dba00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA04u;
        goto label_1dba04;
    }
    ctx->pc = 0x1DB9FCu;
    {
        const bool branch_taken_0x1db9fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9FCu;
        // 0x1dba00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9fc) {
            ctx->pc = 0x1DBA38u;
            goto label_1dba38;
        }
    }
    ctx->pc = 0x1DBA04u;
label_1dba04:
    // 0x1dba04: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1dba04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1dba08:
    // 0x1dba08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dba0c:
    // 0x1dba0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dba0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dba10:
    // 0x1dba10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dba14:
    // 0x1dba14: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1dba14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1dba18:
    // 0x1dba18: 0x320f809  jalr        $t9
label_1dba1c:
    if (ctx->pc == 0x1DBA1Cu) {
        ctx->pc = 0x1DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA18u;
        // 0x1dba1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA20u;
        goto label_1dba20;
    }
    ctx->pc = 0x1DBA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBA20u);
        ctx->pc = 0x1DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA18u;
        // 0x1dba1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA18u, 0x1DBA20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBA20u;
label_1dba20:
    // 0x1dba20: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1dba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1dba24:
    // 0x1dba24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dba28:
    // 0x1dba28: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1dba2c:
    // 0x1dba2c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1dba2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1dba30:
    // 0x1dba30: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1dba34:
    if (ctx->pc == 0x1DBA34u) {
        ctx->pc = 0x1DBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA30u;
        // 0x1dba34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA38u;
        goto label_1dba38;
    }
    ctx->pc = 0x1DBA30u;
    {
        const bool branch_taken_0x1dba30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA30u;
        // 0x1dba34: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba30) {
            ctx->pc = 0x1DBA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dba08;
        }
    }
    ctx->pc = 0x1DBA38u;
label_1dba38:
    // 0x1dba38: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1dba3c:
    // 0x1dba3c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1dba3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1dba40:
    // 0x1dba40: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dba44:
    // 0x1dba44: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1dba44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1dba48:
    // 0x1dba48: 0x320f809  jalr        $t9
label_1dba4c:
    if (ctx->pc == 0x1DBA4Cu) {
        ctx->pc = 0x1DBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA48u;
        // 0x1dba4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA50u;
        goto label_1dba50;
    }
    ctx->pc = 0x1DBA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBA50u);
        ctx->pc = 0x1DBA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA48u;
        // 0x1dba4c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA48u, 0x1DBA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBA50u;
label_1dba50:
    // 0x1dba50: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x1dba50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1dba54:
    // 0x1dba54: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1dba58:
    // 0x1dba58: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1dba58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1dba5c:
    // 0x1dba5c: 0x320f809  jalr        $t9
label_1dba60:
    if (ctx->pc == 0x1DBA60u) {
        ctx->pc = 0x1DBA64u;
        goto label_1dba64;
    }
    ctx->pc = 0x1DBA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DBA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA5Cu, 0x1DBA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DBA64u;
label_1dba64:
    // 0x1dba64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dba68:
    if (ctx->pc == 0x1DBA68u) {
        ctx->pc = 0x1DBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA64u;
        // 0x1dba68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA6Cu;
        goto label_1dba6c;
    }
    ctx->pc = 0x1DBA64u;
    {
        const bool branch_taken_0x1dba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA64u;
        // 0x1dba68: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba64) {
            ctx->pc = 0x1DBA80u;
            goto label_1dba80;
        }
    }
    ctx->pc = 0x1DBA6Cu;
label_1dba6c:
    // 0x1dba6c: 0xc076e10  jal         func_1DB840
label_1dba70:
    if (ctx->pc == 0x1DBA70u) {
        ctx->pc = 0x1DBA74u;
        goto label_1dba74;
    }
    ctx->pc = 0x1DBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA74u);
    ctx->pc = 0x1DB840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB840u, 0x1DBA6Cu, 0x1DBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA74u;
label_1dba74:
    // 0x1dba74: 0x10000004  b           . + 4 + (0x4 << 2)
label_1dba78:
    if (ctx->pc == 0x1DBA78u) {
        ctx->pc = 0x1DBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA74u;
        // 0x1dba78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBA7Cu;
        goto label_1dba7c;
    }
    ctx->pc = 0x1DBA74u;
    {
        const bool branch_taken_0x1dba74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA74u;
        // 0x1dba78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba74) {
            ctx->pc = 0x1DBA88u;
            goto label_1dba88;
        }
    }
    ctx->pc = 0x1DBA7Cu;
label_1dba7c:
    // 0x1dba7c: 0x0  nop
    ctx->pc = 0x1dba7cu;
    // NOP
label_1dba80:
    // 0x1dba80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dba84:
    // 0x1dba84: 0x0  nop
    ctx->pc = 0x1dba84u;
    // NOP
label_1dba88:
    // 0x1dba88: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dba88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dba8c:
    // 0x1dba8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dba8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dba90:
    // 0x1dba90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dba94:
    // 0x1dba94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dba94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dba98:
    // 0x1dba98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dba98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dba9c:
    // 0x1dba9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dba9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dbaa0:
    // 0x1dbaa0: 0x3e00008  jr          $ra
label_1dbaa4:
    if (ctx->pc == 0x1DBAA4u) {
        ctx->pc = 0x1DBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAA0u;
        // 0x1dbaa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DBAA8u;
        goto label_fallthrough_0x1dbaa0;
    }
    ctx->pc = 0x1DBAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBAA0u;
        // 0x1dbaa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1dbaa0:
    ctx->pc = 0x1DBAA8u;
}
