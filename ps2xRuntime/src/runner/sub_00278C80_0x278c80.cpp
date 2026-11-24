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

// Function: sub_00278C80
// Address: 0x278c80 - 0x2790d0
void sub_00278C80_0x278c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278C80_0x278c80");
#endif

    switch (ctx->pc) {
        case 0x278cd0u: goto label_278cd0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278cf4u: goto label_278cf4;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d80u: goto label_278d80;
        case 0x278d90u: goto label_278d90;
        case 0x278de0u: goto label_278de0;
        case 0x278e00u: goto label_278e00;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e70u: goto label_278e70;
        case 0x278e80u: goto label_278e80;
        case 0x278eacu: goto label_278eac;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ec8u: goto label_278ec8;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ef8u: goto label_278ef8;
        case 0x278f10u: goto label_278f10;
        case 0x278f1cu: goto label_278f1c;
        case 0x278f38u: goto label_278f38;
        case 0x278f48u: goto label_278f48;
        case 0x278fa8u: goto label_278fa8;
        case 0x278ff4u: goto label_278ff4;
        case 0x279028u: goto label_279028;
        case 0x279088u: goto label_279088;
        case 0x279098u: goto label_279098;
        case 0x2790b0u: goto label_2790b0;
        default: break;
    }

    ctx->pc = 0x278c80u;

    // 0x278c80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x278c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x278c84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x278c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x278c88: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x278c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x278c8c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x278c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x278c90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x278c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x278c94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x278c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x278c98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x278c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x278c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278ca0: 0x908500b7  lbu         $a1, 0xB7($a0)
    ctx->pc = 0x278ca0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 183)));
    // 0x278ca4: 0x10a300fa  beq         $a1, $v1, . + 4 + (0xFA << 2)
    ctx->pc = 0x278CA4u;
    {
        const bool branch_taken_0x278ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CA4u;
        // 0x278ca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ca4) {
            ctx->pc = 0x279090u;
            goto label_279090;
        }
    }
    ctx->pc = 0x278CACu;
    // 0x278cac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x278cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278cb0: 0x10a300f3  beq         $a1, $v1, . + 4 + (0xF3 << 2)
    ctx->pc = 0x278CB0u;
    {
        const bool branch_taken_0x278cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x278cb0) {
            ctx->pc = 0x279080u;
            goto label_279080;
        }
    }
    ctx->pc = 0x278CB8u;
    // 0x278cb8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278CB8u;
    {
        const bool branch_taken_0x278cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x278cb8) {
            ctx->pc = 0x278CC8u;
            goto label_278cc8;
        }
    }
    ctx->pc = 0x278CC0u;
    // 0x278cc0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x278CC0u;
    {
        const bool branch_taken_0x278cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278cc0) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x278CC8u;
label_278cc8:
    // 0x278cc8: 0xc09daac  jal         func_276AB0
    ctx->pc = 0x278CC8u;
    SET_GPR_U32(ctx, 31, 0x278CD0u);
    ctx->pc = 0x276AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276AB0u, 0x278CC8u, 0x278CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CD0u;
label_278cd0:
    // 0x278cd0: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x278cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x278cd4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x278CD4u;
    {
        const bool branch_taken_0x278cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CD4u;
        // 0x278cd8: 0x260400e0  addiu       $a0, $s0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cd4) {
            ctx->pc = 0x278CF8u;
            goto label_278cf8;
        }
    }
    ctx->pc = 0x278CDCu;
    // 0x278cdc: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x278CDCu;
    SET_GPR_U32(ctx, 31, 0x278CE4u);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x278CDCu, 0x278CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CE4u;
label_278ce4:
    // 0x278ce4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278CE4u;
    {
        const bool branch_taken_0x278ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CE4u;
        // 0x278ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ce4) {
            ctx->pc = 0x278CF8u;
            goto label_278cf8;
        }
    }
    ctx->pc = 0x278CECu;
    // 0x278cec: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x278CECu;
    SET_GPR_U32(ctx, 31, 0x278CF4u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x278CECu, 0x278CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CF4u;
label_278cf4:
    // 0x278cf4: 0x0  nop
    ctx->pc = 0x278cf4u;
    // NOP
label_278cf8:
    // 0x278cf8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x278cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x278cfc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x278CFCu;
    {
        const bool branch_taken_0x278cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CFCu;
        // 0x278d00: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cfc) {
            ctx->pc = 0x278D20u;
            goto label_278d20;
        }
    }
    ctx->pc = 0x278D04u;
    // 0x278d04: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x278D04u;
    SET_GPR_U32(ctx, 31, 0x278D0Cu);
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x278D04u, 0x278D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D0Cu;
label_278d0c:
    // 0x278d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278D0Cu;
    {
        const bool branch_taken_0x278d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D0Cu;
        // 0x278d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d0c) {
            ctx->pc = 0x278D20u;
            goto label_278d20;
        }
    }
    ctx->pc = 0x278D14u;
    // 0x278d14: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x278D14u;
    SET_GPR_U32(ctx, 31, 0x278D1Cu);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x278D14u, 0x278D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D1Cu;
label_278d1c:
    // 0x278d1c: 0x0  nop
    ctx->pc = 0x278d1cu;
    // NOP
label_278d20:
    // 0x278d20: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x278d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x278d24: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x278D24u;
    {
        const bool branch_taken_0x278d24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d24) {
            ctx->pc = 0x278D90u;
            goto label_278d90;
        }
    }
    ctx->pc = 0x278D2Cu;
    // 0x278d2c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x278d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x278d30: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x278d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x278d34: 0x7a040040  lq          $a0, 0x40($s0)
    ctx->pc = 0x278d34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x278d38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x278d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278d40: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x278d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x278d44: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x278d48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x278d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x278d4c: 0xa6020110  sh          $v0, 0x110($s0)
    ctx->pc = 0x278d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
    // 0x278d50: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x278d54: 0x86020116  lh          $v0, 0x116($s0)
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
    // 0x278d58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x278d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x278d5c: 0xa6020110  sh          $v0, 0x110($s0)
    ctx->pc = 0x278d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
    // 0x278d60: 0x86030112  lh          $v1, 0x112($s0)
    ctx->pc = 0x278d60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x278d64: 0x86020114  lh          $v0, 0x114($s0)
    ctx->pc = 0x278d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278d68: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x278d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x278d6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x278D6Cu;
    {
        const bool branch_taken_0x278d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D6Cu;
        // 0x278d70: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d6c) {
            ctx->pc = 0x278D78u;
            goto label_278d78;
        }
    }
    ctx->pc = 0x278D74u;
    // 0x278d74: 0xa6020112  sh          $v0, 0x112($s0)
    ctx->pc = 0x278d74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 2));
label_278d78:
    // 0x278d78: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x278D78u;
    SET_GPR_U32(ctx, 31, 0x278D80u);
    ctx->pc = 0x278D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D78u;
    // 0x278d7c: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x278D78u, 0x278D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D80u;
label_278d80:
    // 0x278d80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278D80u;
    {
        const bool branch_taken_0x278d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D80u;
        // 0x278d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d80) {
            ctx->pc = 0x278D90u;
            goto label_278d90;
        }
    }
    ctx->pc = 0x278D88u;
    // 0x278d88: 0xc096b54  jal         func_25AD50
    ctx->pc = 0x278D88u;
    SET_GPR_U32(ctx, 31, 0x278D90u);
    ctx->pc = 0x25AD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD50u, 0x278D88u, 0x278D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D90u;
label_278d90:
    // 0x278d90: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x278d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278d94: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x278D94u;
    {
        const bool branch_taken_0x278d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d94) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x278D9Cu;
    // 0x278d9c: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x278d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x278da0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x278DA0u;
    {
        const bool branch_taken_0x278da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x278da0) {
            ctx->pc = 0x278DC8u;
            goto label_278dc8;
        }
    }
    ctx->pc = 0x278DA8u;
    // 0x278da8: 0x860400b4  lh          $a0, 0xB4($s0)
    ctx->pc = 0x278da8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x278dac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x278dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x278db0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x278db0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x278db4: 0x0  nop
    ctx->pc = 0x278db4u;
    // NOP
    // 0x278db8: 0x0  nop
    ctx->pc = 0x278db8u;
    // NOP
    // 0x278dbc: 0x1810  mfhi        $v1
    ctx->pc = 0x278dbcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x278dc0: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x278DC0u;
    {
        const bool branch_taken_0x278dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278dc0) {
            ctx->pc = 0x278F90u;
            goto label_278f90;
        }
    }
    ctx->pc = 0x278DC8u;
label_278dc8:
    // 0x278dc8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x278dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x278dcc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x278dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x278dd0: 0x1020006f  beqz        $at, . + 4 + (0x6F << 2)
    ctx->pc = 0x278DD0u;
    {
        const bool branch_taken_0x278dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DD0u;
        // 0x278dd4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dd0) {
            ctx->pc = 0x278F90u;
            goto label_278f90;
        }
    }
    ctx->pc = 0x278DD8u;
    // 0x278dd8: 0x27b20064  addiu       $s2, $sp, 0x64
    ctx->pc = 0x278dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x278ddc: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x278ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_278de0:
    // 0x278de0: 0x84a40028  lh          $a0, 0x28($a1)
    ctx->pc = 0x278de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x278de4: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x278de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x278de8: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x278de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x278dec: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x278decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x278df0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x278df4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x278df8: 0xc078e9c  jal         func_1E3A70
    ctx->pc = 0x278DF8u;
    SET_GPR_U32(ctx, 31, 0x278E00u);
    ctx->pc = 0x278DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DF8u;
    // 0x278dfc: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A70u, 0x278DF8u, 0x278E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E00u;
label_278e00:
    // 0x278e00: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x278e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278e04: 0x84630026  lh          $v1, 0x26($v1)
    ctx->pc = 0x278e04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x278e08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x278e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278e0c: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x278e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x278e10: 0x86620006  lh          $v0, 0x6($s3)
    ctx->pc = 0x278e10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x278e14: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278E14u;
    {
        const bool branch_taken_0x278e14 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x278E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E14u;
        // 0x278e18: 0x28417ff1  slti        $at, $v0, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e14) {
            ctx->pc = 0x278E24u;
            goto label_278e24;
        }
    }
    ctx->pc = 0x278E1Cu;
    // 0x278e1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278E1Cu;
    {
        const bool branch_taken_0x278e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E1Cu;
        // 0x278e20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e1c) {
            ctx->pc = 0x278E34u;
            goto label_278e34;
        }
    }
    ctx->pc = 0x278E24u;
label_278e24:
    // 0x278e24: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x278E24u;
    {
        const bool branch_taken_0x278e24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278e24) {
            ctx->pc = 0x278E34u;
            goto label_278e34;
        }
    }
    ctx->pc = 0x278E2Cu;
    // 0x278e2c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x278E2Cu;
    {
        const bool branch_taken_0x278e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E2Cu;
        // 0x278e30: 0x24027ff0  addiu       $v0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e2c) {
            ctx->pc = 0x278E34u;
            goto label_278e34;
        }
    }
    ctx->pc = 0x278E34u;
label_278e34:
    // 0x278e34: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x278e34u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x278e38: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x278e3c: 0xa6600004  sh          $zero, 0x4($s3)
    ctx->pc = 0x278e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x278e40: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x278e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x278e44: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278e48: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x278e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x278e4c: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x278e50: 0x24480008  addiu       $t0, $v0, 0x8
    ctx->pc = 0x278e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x278e54: 0xc096da0  jal         func_25B680
    ctx->pc = 0x278E54u;
    SET_GPR_U32(ctx, 31, 0x278E5Cu);
    ctx->pc = 0x278E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E54u;
    // 0x278e58: 0x2449000c  addiu       $t1, $v0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x278E54u, 0x278E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E5Cu;
label_278e5c:
    // 0x278e5c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x278e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x278e60: 0xa6620008  sh          $v0, 0x8($s3)
    ctx->pc = 0x278e60u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x278e64: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278e68: 0xc096d80  jal         func_25B600
    ctx->pc = 0x278E68u;
    SET_GPR_U32(ctx, 31, 0x278E70u);
    ctx->pc = 0x278E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E68u;
    // 0x278e6c: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x278E68u, 0x278E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E70u;
label_278e70:
    // 0x278e70: 0xa262000a  sb          $v0, 0xA($s3)
    ctx->pc = 0x278e70u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x278e74: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278e78: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x278E78u;
    SET_GPR_U32(ctx, 31, 0x278E80u);
    ctx->pc = 0x278E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278E78u;
    // 0x278e7c: 0xc44c002c  lwc1        $f12, 0x2C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x278E78u, 0x278E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E80u;
label_278e80:
    // 0x278e80: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278e84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x278e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x278e88: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x278e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278e8c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x278e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x278e90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278e94: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x278E94u;
    {
        const bool branch_taken_0x278e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E94u;
        // 0x278e98: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e94) {
            ctx->pc = 0x278EA0u;
            goto label_278ea0;
        }
    }
    ctx->pc = 0x278E9Cu;
    // 0x278e9c: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x278e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_278ea0:
    // 0x278ea0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x278ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x278ea4: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x278EA4u;
    SET_GPR_U32(ctx, 31, 0x278EACu);
    ctx->pc = 0x278EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EA4u;
    // 0x278ea8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x278EA4u, 0x278EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EACu;
label_278eac:
    // 0x278eac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x278eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278eb0: 0xc078ba8  jal         func_1E2EA0
    ctx->pc = 0x278EB0u;
    SET_GPR_U32(ctx, 31, 0x278EB8u);
    ctx->pc = 0x278EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EB0u;
    // 0x278eb4: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EA0u, 0x278EB0u, 0x278EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EB8u;
label_278eb8:
    // 0x278eb8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x278eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x278ebc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278ec0: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x278EC0u;
    SET_GPR_U32(ctx, 31, 0x278EC8u);
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x278EC0u, 0x278EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EC8u;
label_278ec8:
    // 0x278ec8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x278ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ecc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x278ed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278ed4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278ed8: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x278ED8u;
    SET_GPR_U32(ctx, 31, 0x278EE0u);
    ctx->pc = 0x278EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278ED8u;
    // 0x278edc: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x278ED8u, 0x278EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EE0u;
label_278ee0:
    // 0x278ee0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x278ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278ee4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x278ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x278ee8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x278ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x278eec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278ef0: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x278EF0u;
    SET_GPR_U32(ctx, 31, 0x278EF8u);
    ctx->pc = 0x278EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278EF0u;
    // 0x278ef4: 0xe6400000  swc1        $f0, 0x0($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x278EF0u, 0x278EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278EF8u;
label_278ef8:
    // 0x278ef8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x278ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278efc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x278efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278f00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x278f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278f08: 0xc0766dc  jal         func_1D9B70
    ctx->pc = 0x278F08u;
    SET_GPR_U32(ctx, 31, 0x278F10u);
    ctx->pc = 0x278F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F08u;
    // 0x278f0c: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B70u, 0x278F08u, 0x278F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F10u;
label_278f10:
    // 0x278f10: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278f14: 0xc078b88  jal         func_1E2E20
    ctx->pc = 0x278F14u;
    SET_GPR_U32(ctx, 31, 0x278F1Cu);
    ctx->pc = 0x278F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F14u;
    // 0x278f18: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2E20u, 0x278F14u, 0x278F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F1Cu;
label_278f1c:
    // 0x278f1c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x278f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278f20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x278f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278f24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x278f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f28: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x278f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278f2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278f2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x278f30: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x278F30u;
    SET_GPR_U32(ctx, 31, 0x278F38u);
    ctx->pc = 0x278F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F30u;
    // 0x278f34: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x278F30u, 0x278F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F38u;
label_278f38:
    // 0x278f38: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x278f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x278f3c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x278f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x278f40: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x278F40u;
    SET_GPR_U32(ctx, 31, 0x278F48u);
    ctx->pc = 0x278F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278F40u;
    // 0x278f44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x278F40u, 0x278F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F48u;
label_278f48:
    // 0x278f48: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x278f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x278f4c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x278f4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x278f50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x278f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x278f54: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x278f54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
    // 0x278f58: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x278f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278f5c: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x278f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x278f60: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x278f60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x278f64: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x278f64u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x278f68: 0x0  nop
    ctx->pc = 0x278f68u;
    // NOP
    // 0x278f6c: 0x0  nop
    ctx->pc = 0x278f6cu;
    // NOP
    // 0x278f70: 0x1810  mfhi        $v1
    ctx->pc = 0x278f70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x278f74: 0xae030120  sw          $v1, 0x120($s0)
    ctx->pc = 0x278f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 3));
    // 0x278f78: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x278f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x278f7c: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x278f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x278f80: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x278f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x278f84: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x278F84u;
    {
        const bool branch_taken_0x278f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f84) {
            ctx->pc = 0x278DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278de0;
        }
    }
    ctx->pc = 0x278F8Cu;
    // 0x278f8c: 0x0  nop
    ctx->pc = 0x278f8cu;
    // NOP
label_278f90:
    // 0x278f90: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x278f90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x278f94: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x278f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x278f98: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x278F98u;
    {
        const bool branch_taken_0x278f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F98u;
        // 0x278f9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f98) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x278FA0u;
    // 0x278fa0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x278fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fa4: 0x0  nop
    ctx->pc = 0x278fa4u;
    // NOP
label_278fa8:
    // 0x278fa8: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x278fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x278fac: 0x24037ffe  addiu       $v1, $zero, 0x7FFE
    ctx->pc = 0x278facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x278fb0: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x278fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x278fb4: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x278fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x278fb8: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x278FB8u;
    {
        const bool branch_taken_0x278fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278fb8) {
            ctx->pc = 0x279060u;
            goto label_279060;
        }
    }
    ctx->pc = 0x278FC0u;
    // 0x278fc0: 0x90a20012  lbu         $v0, 0x12($a1)
    ctx->pc = 0x278fc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x278fc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278fc8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x278FC8u;
    {
        const bool branch_taken_0x278fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278fc8) {
            ctx->pc = 0x279020u;
            goto label_279020;
        }
    }
    ctx->pc = 0x278FD0u;
    // 0x278fd0: 0x86460006  lh          $a2, 0x6($s2)
    ctx->pc = 0x278fd0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x278fd4: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x278FD4u;
    {
        const bool branch_taken_0x278fd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x278FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FD4u;
        // 0x278fd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fd4) {
            ctx->pc = 0x278FECu;
            goto label_278fec;
        }
    }
    ctx->pc = 0x278FDCu;
    // 0x278fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x278fe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x278fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278fe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278FE4u;
    {
        const bool branch_taken_0x278fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FE4u;
        // 0x278fe8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fe4) {
            ctx->pc = 0x278FF8u;
            goto label_278ff8;
        }
    }
    ctx->pc = 0x278FECu;
label_278fec:
    // 0x278fec: 0xc0767d4  jal         func_1D9F50
    ctx->pc = 0x278FECu;
    SET_GPR_U32(ctx, 31, 0x278FF4u);
    ctx->pc = 0x1D9F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F50u, 0x278FECu, 0x278FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FF4u;
label_278ff4:
    // 0x278ff4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x278ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_278ff8:
    // 0x278ff8: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x278ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x278ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x278ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x279000: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x279000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x279004: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x279004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279008: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x279008u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27900c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27900cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x279010: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x279010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x279014: 0x0  nop
    ctx->pc = 0x279014u;
    // NOP
    // 0x279018: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x279018u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x27901c: 0x0  nop
    ctx->pc = 0x27901cu;
    // NOP
label_279020:
    // 0x279020: 0xc0743c0  jal         func_1D0F00
    ctx->pc = 0x279020u;
    SET_GPR_U32(ctx, 31, 0x279028u);
    ctx->pc = 0x279024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279020u;
    // 0x279024: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x279020u, 0x279028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279028u;
label_279028:
    // 0x279028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279028u;
    {
        const bool branch_taken_0x279028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279028u;
        // 0x27902c: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279028) {
            ctx->pc = 0x279038u;
            goto label_279038;
        }
    }
    ctx->pc = 0x279030u;
    // 0x279030: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x279030u;
    {
        const bool branch_taken_0x279030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279030u;
        // 0x279034: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279030) {
            ctx->pc = 0x279060u;
            goto label_279060;
        }
    }
    ctx->pc = 0x279038u;
label_279038:
    // 0x279038: 0x86430004  lh          $v1, 0x4($s2)
    ctx->pc = 0x279038u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x27903c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x279040: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x279040u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x279044: 0x86440004  lh          $a0, 0x4($s2)
    ctx->pc = 0x279044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x279048: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x279048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x27904c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x27904cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x279050: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x279050u;
    {
        const bool branch_taken_0x279050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x279054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279050u;
        // 0x279054: 0x24037ffe  addiu       $v1, $zero, 0x7FFE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279050) {
            ctx->pc = 0x279060u;
            goto label_279060;
        }
    }
    ctx->pc = 0x279058u;
    // 0x279058: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x279058u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x27905c: 0x0  nop
    ctx->pc = 0x27905cu;
    // NOP
label_279060:
    // 0x279060: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x279060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x279064: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x279064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x279068: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x279068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x27906c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x27906cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x279070: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x279070u;
    {
        const bool branch_taken_0x279070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x279074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279070u;
        // 0x279074: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279070) {
            ctx->pc = 0x278FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278fa8;
        }
    }
    ctx->pc = 0x279078u;
    // 0x279078: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x279078u;
    {
        const bool branch_taken_0x279078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279078) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x279080u;
label_279080:
    // 0x279080: 0xc09dd08  jal         func_277420
    ctx->pc = 0x279080u;
    SET_GPR_U32(ctx, 31, 0x279088u);
    ctx->pc = 0x277420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277420u, 0x279080u, 0x279088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279088u;
label_279088:
    // 0x279088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x279088u;
    {
        const bool branch_taken_0x279088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279088) {
            ctx->pc = 0x279098u;
            goto label_279098;
        }
    }
    ctx->pc = 0x279090u;
label_279090:
    // 0x279090: 0xc09dd24  jal         func_277490
    ctx->pc = 0x279090u;
    SET_GPR_U32(ctx, 31, 0x279098u);
    ctx->pc = 0x277490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277490u, 0x279090u, 0x279098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279098u;
label_279098:
    // 0x279098: 0x92030050  lbu         $v1, 0x50($s0)
    ctx->pc = 0x279098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x27909c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x27909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2790a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2790A0u;
    {
        const bool branch_taken_0x2790a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790A0u;
        // 0x2790a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2790a0) {
            ctx->pc = 0x2790B0u;
            goto label_2790b0;
        }
    }
    ctx->pc = 0x2790A8u;
    // 0x2790a8: 0xc096b58  jal         func_25AD60
    ctx->pc = 0x2790A8u;
    SET_GPR_U32(ctx, 31, 0x2790B0u);
    ctx->pc = 0x2790ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2790A8u;
    // 0x2790ac: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD60u, 0x2790A8u, 0x2790B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2790B0u;
label_2790b0:
    // 0x2790b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2790b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2790b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2790b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2790b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2790b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2790bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2790bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2790c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2790c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2790c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2790c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2790c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2790C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2790CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2790C8u;
        // 0x2790cc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2790C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2790D0u;
}
