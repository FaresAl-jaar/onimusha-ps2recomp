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

// Function: sub_00331C80
// Address: 0x331c80 - 0x331dc8
void sub_00331C80_0x331c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331C80_0x331c80");
#endif

    switch (ctx->pc) {
        case 0x331ca8u: goto label_331ca8;
        case 0x331cf8u: goto label_331cf8;
        case 0x331d30u: goto label_331d30;
        case 0x331d84u: goto label_331d84;
        case 0x331db0u: goto label_331db0;
        case 0x331db8u: goto label_331db8;
        default: break;
    }

    ctx->pc = 0x331c80u;

    // 0x331c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x331c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x331c90: 0x84860024  lh          $a2, 0x24($a0)
    ctx->pc = 0x331c90u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x331c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c98: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x331c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x331c9c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x331C9Cu;
    {
        const bool branch_taken_0x331c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C9Cu;
        // 0x331ca0: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c9c) {
            ctx->pc = 0x331D10u;
            goto label_331d10;
        }
    }
    ctx->pc = 0x331CA4u;
    // 0x331ca4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x331ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_331ca8:
    // 0x331ca8: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x331ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x331cac: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x331CACu;
    {
        const bool branch_taken_0x331cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331cac) {
            ctx->pc = 0x331D00u;
            goto label_331d00;
        }
    }
    ctx->pc = 0x331CB4u;
    // 0x331cb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x331cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331cb8: 0x26041c7c  addiu       $a0, $s0, 0x1C7C
    ctx->pc = 0x331cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7292));
    // 0x331cbc: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x331cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x331cc0: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x331cc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331cc4: 0x0  nop
    ctx->pc = 0x331cc4u;
    // NOP
    // 0x331cc8: 0x0  nop
    ctx->pc = 0x331cc8u;
    // NOP
    // 0x331ccc: 0x1010  mfhi        $v0
    ctx->pc = 0x331cccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x331cd0: 0xa6021c7a  sh          $v0, 0x1C7A($s0)
    ctx->pc = 0x331cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7290), (uint16_t)GPR_U32(ctx, 2));
    // 0x331cd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x331cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331cd8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x331cd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x331cdc: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x331cdcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331ce0: 0x0  nop
    ctx->pc = 0x331ce0u;
    // NOP
    // 0x331ce4: 0x0  nop
    ctx->pc = 0x331ce4u;
    // NOP
    // 0x331ce8: 0x1012  mflo        $v0
    ctx->pc = 0x331ce8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x331cec: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x331cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x331cf0: 0xc0cde24  jal         func_337890
    ctx->pc = 0x331CF0u;
    SET_GPR_U32(ctx, 31, 0x331CF8u);
    ctx->pc = 0x331CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331CF0u;
    // 0x331cf4: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x331CF0u, 0x331CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331CF8u;
label_331cf8:
    // 0x331cf8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x331CF8u;
    {
        const bool branch_taken_0x331cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331cf8) {
            ctx->pc = 0x331DB8u;
            goto label_331db8;
        }
    }
    ctx->pc = 0x331D00u;
label_331d00:
    // 0x331d00: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x331d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x331d04: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x331d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x331d08: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x331D08u;
    {
        const bool branch_taken_0x331d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D08u;
        // 0x331d0c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d08) {
            ctx->pc = 0x331CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331ca8;
        }
    }
    ctx->pc = 0x331D10u;
label_331d10:
    // 0x331d10: 0x86031c7c  lh          $v1, 0x1C7C($s0)
    ctx->pc = 0x331d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 7292)));
    // 0x331d14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x331d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331d18: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x331D18u;
    {
        const bool branch_taken_0x331d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D18u;
        // 0x331d1c: 0x6082a  slt         $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d18) {
            ctx->pc = 0x331DB0u;
            goto label_331db0;
        }
    }
    ctx->pc = 0x331D20u;
    // 0x331d20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d24: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x331D24u;
    {
        const bool branch_taken_0x331d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D24u;
        // 0x331d28: 0x26040028  addiu       $a0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d24) {
            ctx->pc = 0x331DA0u;
            goto label_331da0;
        }
    }
    ctx->pc = 0x331D2Cu;
    // 0x331d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_331d30:
    // 0x331d30: 0x90820008  lbu         $v0, 0x8($a0)
    ctx->pc = 0x331d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x331d34: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x331d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x331d38: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x331D38u;
    {
        const bool branch_taken_0x331d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331d38) {
            ctx->pc = 0x331D90u;
            goto label_331d90;
        }
    }
    ctx->pc = 0x331D40u;
    // 0x331d40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x331d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331d44: 0x26041c7c  addiu       $a0, $s0, 0x1C7C
    ctx->pc = 0x331d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7292));
    // 0x331d48: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x331d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x331d4c: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x331d4cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331d50: 0x0  nop
    ctx->pc = 0x331d50u;
    // NOP
    // 0x331d54: 0x0  nop
    ctx->pc = 0x331d54u;
    // NOP
    // 0x331d58: 0x1010  mfhi        $v0
    ctx->pc = 0x331d58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x331d5c: 0xa6021c7a  sh          $v0, 0x1C7A($s0)
    ctx->pc = 0x331d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 7290), (uint16_t)GPR_U32(ctx, 2));
    // 0x331d60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x331d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331d64: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x331d64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x331d68: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x331d68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x331d6c: 0x0  nop
    ctx->pc = 0x331d6cu;
    // NOP
    // 0x331d70: 0x0  nop
    ctx->pc = 0x331d70u;
    // NOP
    // 0x331d74: 0x1012  mflo        $v0
    ctx->pc = 0x331d74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x331d78: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x331d78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x331d7c: 0xc0cde24  jal         func_337890
    ctx->pc = 0x331D7Cu;
    SET_GPR_U32(ctx, 31, 0x331D84u);
    ctx->pc = 0x331D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D7Cu;
    // 0x331d80: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x331D7Cu, 0x331D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D84u;
label_331d84:
    // 0x331d84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x331D84u;
    {
        const bool branch_taken_0x331d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d84) {
            ctx->pc = 0x331DB8u;
            goto label_331db8;
        }
    }
    ctx->pc = 0x331D8Cu;
    // 0x331d8c: 0x0  nop
    ctx->pc = 0x331d8cu;
    // NOP
label_331d90:
    // 0x331d90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x331d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x331d94: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x331d94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x331d98: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x331D98u;
    {
        const bool branch_taken_0x331d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D98u;
        // 0x331d9c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d98) {
            ctx->pc = 0x331D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331d30;
        }
    }
    ctx->pc = 0x331DA0u;
label_331da0:
    // 0x331da0: 0x26041c7c  addiu       $a0, $s0, 0x1C7C
    ctx->pc = 0x331da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7292));
    // 0x331da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331da8: 0xc0cde24  jal         func_337890
    ctx->pc = 0x331DA8u;
    SET_GPR_U32(ctx, 31, 0x331DB0u);
    ctx->pc = 0x331DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331DA8u;
    // 0x331dac: 0xa6001c7a  sh          $zero, 0x1C7A($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 7290), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337890u, 0x331DA8u, 0x331DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331DB0u;
label_331db0:
    // 0x331db0: 0xc0cde28  jal         func_3378A0
    ctx->pc = 0x331DB0u;
    SET_GPR_U32(ctx, 31, 0x331DB8u);
    ctx->pc = 0x331DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331DB0u;
    // 0x331db4: 0x26041c7c  addiu       $a0, $s0, 0x1C7C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3378A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3378A0u, 0x331DB0u, 0x331DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331DB8u;
label_331db8:
    // 0x331db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x331DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DC0u;
        // 0x331dc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331DC8u;
}
