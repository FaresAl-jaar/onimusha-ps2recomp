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

// Function: sub_001EAB80
// Address: 0x1eab80 - 0x1ead08
void sub_001EAB80_0x1eab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAB80_0x1eab80");
#endif

    switch (ctx->pc) {
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        case 0x1eabb8u: goto label_1eabb8;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        case 0x1eac70u: goto label_1eac70;
        case 0x1eac74u: goto label_1eac74;
        case 0x1eac78u: goto label_1eac78;
        case 0x1eac7cu: goto label_1eac7c;
        case 0x1eac80u: goto label_1eac80;
        case 0x1eac84u: goto label_1eac84;
        case 0x1eac88u: goto label_1eac88;
        case 0x1eac8cu: goto label_1eac8c;
        case 0x1eac90u: goto label_1eac90;
        case 0x1eac94u: goto label_1eac94;
        case 0x1eac98u: goto label_1eac98;
        case 0x1eac9cu: goto label_1eac9c;
        case 0x1eaca0u: goto label_1eaca0;
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eaca8u: goto label_1eaca8;
        case 0x1eacacu: goto label_1eacac;
        case 0x1eacb0u: goto label_1eacb0;
        case 0x1eacb4u: goto label_1eacb4;
        case 0x1eacb8u: goto label_1eacb8;
        case 0x1eacbcu: goto label_1eacbc;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacc4u: goto label_1eacc4;
        case 0x1eacc8u: goto label_1eacc8;
        case 0x1eacccu: goto label_1eaccc;
        case 0x1eacd0u: goto label_1eacd0;
        case 0x1eacd4u: goto label_1eacd4;
        case 0x1eacd8u: goto label_1eacd8;
        case 0x1eacdcu: goto label_1eacdc;
        case 0x1eace0u: goto label_1eace0;
        case 0x1eace4u: goto label_1eace4;
        case 0x1eace8u: goto label_1eace8;
        case 0x1eacecu: goto label_1eacec;
        case 0x1eacf0u: goto label_1eacf0;
        case 0x1eacf4u: goto label_1eacf4;
        case 0x1eacf8u: goto label_1eacf8;
        case 0x1eacfcu: goto label_1eacfc;
        case 0x1ead00u: goto label_1ead00;
        case 0x1ead04u: goto label_1ead04;
        default: break;
    }

    ctx->pc = 0x1eab80u;

label_1eab80:
    // 0x1eab80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eab84:
    // 0x1eab84: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1eab88:
    // 0x1eab88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1eab8c:
    // 0x1eab8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eab8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1eab90:
    // 0x1eab90: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1eab90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1eab94:
    // 0x1eab94: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1eab98:
    if (ctx->pc == 0x1EAB98u) {
        ctx->pc = 0x1EAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB94u;
        // 0x1eab98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAB9Cu;
        goto label_1eab9c;
    }
    ctx->pc = 0x1EAB94u;
    {
        const bool branch_taken_0x1eab94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB94u;
        // 0x1eab98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab94) {
            ctx->pc = 0x1EABA8u;
            goto label_1eaba8;
        }
    }
    ctx->pc = 0x1EAB9Cu;
label_1eab9c:
    // 0x1eab9c: 0x10000056  b           . + 4 + (0x56 << 2)
label_1eaba0:
    if (ctx->pc == 0x1EABA0u) {
        ctx->pc = 0x1EABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB9Cu;
        // 0x1eaba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABA4u;
        goto label_1eaba4;
    }
    ctx->pc = 0x1EAB9Cu;
    {
        const bool branch_taken_0x1eab9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB9Cu;
        // 0x1eaba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab9c) {
            ctx->pc = 0x1EACF8u;
            goto label_1eacf8;
        }
    }
    ctx->pc = 0x1EABA4u;
label_1eaba4:
    // 0x1eaba4: 0x0  nop
    ctx->pc = 0x1eaba4u;
    // NOP
label_1eaba8:
    // 0x1eaba8: 0x7a0300a0  lq          $v1, 0xA0($s0)
    ctx->pc = 0x1eaba8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 160)));
label_1eabac:
    // 0x1eabac: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1eabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1eabb0:
    // 0x1eabb0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1eabb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1eabb4:
    // 0x1eabb4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1eabb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eabb8:
    // 0x1eabb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1eabbc:
    // 0x1eabbc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1eabbcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1eabc0:
    // 0x1eabc0: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x1eabc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1eabc4:
    // 0x1eabc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1eabc8:
    if (ctx->pc == 0x1EABC8u) {
        ctx->pc = 0x1EABCCu;
        goto label_1eabcc;
    }
    ctx->pc = 0x1EABC4u;
    {
        const bool branch_taken_0x1eabc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eabc4) {
            ctx->pc = 0x1EABE8u;
            goto label_1eabe8;
        }
    }
    ctx->pc = 0x1EABCCu;
label_1eabcc:
    // 0x1eabcc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1eabccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eabd0:
    // 0x1eabd0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1eabd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1eabd4:
    // 0x1eabd4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1eabd8:
    if (ctx->pc == 0x1EABD8u) {
        ctx->pc = 0x1EABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABD4u;
        // 0x1eabd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABDCu;
        goto label_1eabdc;
    }
    ctx->pc = 0x1EABD4u;
    {
        const bool branch_taken_0x1eabd4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABD4u;
        // 0x1eabd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabd4) {
            ctx->pc = 0x1EAC10u;
            goto label_1eac10;
        }
    }
    ctx->pc = 0x1EABDCu;
label_1eabdc:
    // 0x1eabdc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1eabdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1eabe0:
    // 0x1eabe0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1eabe4:
    if (ctx->pc == 0x1EABE4u) {
        ctx->pc = 0x1EABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABE0u;
        // 0x1eabe4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABE8u;
        goto label_1eabe8;
    }
    ctx->pc = 0x1EABE0u;
    {
        const bool branch_taken_0x1eabe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABE0u;
        // 0x1eabe4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabe0) {
            ctx->pc = 0x1EAC10u;
            goto label_1eac10;
        }
    }
    ctx->pc = 0x1EABE8u;
label_1eabe8:
    // 0x1eabe8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1eabe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eabec:
    // 0x1eabec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1eabecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eabf0:
    // 0x1eabf0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1eabf4:
    if (ctx->pc == 0x1EABF4u) {
        ctx->pc = 0x1EABF8u;
        goto label_1eabf8;
    }
    ctx->pc = 0x1EABF0u;
    {
        const bool branch_taken_0x1eabf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eabf0) {
            ctx->pc = 0x1EAC10u;
            goto label_1eac10;
        }
    }
    ctx->pc = 0x1EABF8u;
label_1eabf8:
    // 0x1eabf8: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1eabfc:
    // 0x1eabfc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eabfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eac00:
    // 0x1eac00: 0x320f809  jalr        $t9
label_1eac04:
    if (ctx->pc == 0x1EAC04u) {
        ctx->pc = 0x1EAC08u;
        goto label_1eac08;
    }
    ctx->pc = 0x1EAC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EAC08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC00u, 0x1EAC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC08u;
label_1eac08:
    // 0x1eac08: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1eac0c:
    if (ctx->pc == 0x1EAC0Cu) {
        ctx->pc = 0x1EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC08u;
        // 0x1eac0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC10u;
        goto label_1eac10;
    }
    ctx->pc = 0x1EAC08u;
    {
        const bool branch_taken_0x1eac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC08u;
        // 0x1eac0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac08) {
            ctx->pc = 0x1EACF8u;
            goto label_1eacf8;
        }
    }
    ctx->pc = 0x1EAC10u;
label_1eac10:
    // 0x1eac10: 0xc0743c0  jal         func_1D0F00
label_1eac14:
    if (ctx->pc == 0x1EAC14u) {
        ctx->pc = 0x1EAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC10u;
        // 0x1eac14: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC18u;
        goto label_1eac18;
    }
    ctx->pc = 0x1EAC10u;
    SET_GPR_U32(ctx, 31, 0x1EAC18u);
    ctx->pc = 0x1EAC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC10u;
    // 0x1eac14: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EAC10u, 0x1EAC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC18u;
label_1eac18:
    // 0x1eac18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1eac1c:
    if (ctx->pc == 0x1EAC1Cu) {
        ctx->pc = 0x1EAC20u;
        goto label_1eac20;
    }
    ctx->pc = 0x1EAC18u;
    {
        const bool branch_taken_0x1eac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eac18) {
            ctx->pc = 0x1EAC30u;
            goto label_1eac30;
        }
    }
    ctx->pc = 0x1EAC20u;
label_1eac20:
    // 0x1eac20: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1eac20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1eac24:
    // 0x1eac24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eac28:
    // 0x1eac28: 0x320f809  jalr        $t9
label_1eac2c:
    if (ctx->pc == 0x1EAC2Cu) {
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC30u;
        goto label_1eac30;
    }
    ctx->pc = 0x1EAC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EAC30u);
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC28u, 0x1EAC30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC30u;
label_1eac30:
    // 0x1eac30: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1eac34:
    // 0x1eac34: 0xc076800  jal         func_1DA000
label_1eac38:
    if (ctx->pc == 0x1EAC38u) {
        ctx->pc = 0x1EAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC34u;
        // 0x1eac38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC3Cu;
        goto label_1eac3c;
    }
    ctx->pc = 0x1EAC34u;
    SET_GPR_U32(ctx, 31, 0x1EAC3Cu);
    ctx->pc = 0x1EAC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC34u;
    // 0x1eac38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EAC34u, 0x1EAC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC3Cu;
label_1eac3c:
    // 0x1eac3c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1eac40:
    // 0x1eac40: 0xc076800  jal         func_1DA000
label_1eac44:
    if (ctx->pc == 0x1EAC44u) {
        ctx->pc = 0x1EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC40u;
        // 0x1eac44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC48u;
        goto label_1eac48;
    }
    ctx->pc = 0x1EAC40u;
    SET_GPR_U32(ctx, 31, 0x1EAC48u);
    ctx->pc = 0x1EAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC40u;
    // 0x1eac44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EAC40u, 0x1EAC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC48u;
label_1eac48:
    // 0x1eac48: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1eac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1eac4c:
    // 0x1eac4c: 0xc076800  jal         func_1DA000
label_1eac50:
    if (ctx->pc == 0x1EAC50u) {
        ctx->pc = 0x1EAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC4Cu;
        // 0x1eac50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC54u;
        goto label_1eac54;
    }
    ctx->pc = 0x1EAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1EAC54u);
    ctx->pc = 0x1EAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC4Cu;
    // 0x1eac50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EAC4Cu, 0x1EAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC54u;
label_1eac54:
    // 0x1eac54: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x1eac54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_1eac58:
    // 0x1eac58: 0xc076800  jal         func_1DA000
label_1eac5c:
    if (ctx->pc == 0x1EAC5Cu) {
        ctx->pc = 0x1EAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC58u;
        // 0x1eac5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC60u;
        goto label_1eac60;
    }
    ctx->pc = 0x1EAC58u;
    SET_GPR_U32(ctx, 31, 0x1EAC60u);
    ctx->pc = 0x1EAC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC58u;
    // 0x1eac5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EAC58u, 0x1EAC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC60u;
label_1eac60:
    // 0x1eac60: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1eac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1eac64:
    // 0x1eac64: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eac68:
    // 0x1eac68: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1eac68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_1eac6c:
    // 0x1eac6c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1eac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1eac70:
    // 0x1eac70: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eac70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eac74:
    // 0x1eac74: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1eac74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1eac78:
    // 0x1eac78: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1eac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1eac7c:
    // 0x1eac7c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1eac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1eac80:
    // 0x1eac80: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1eac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1eac84:
    // 0x1eac84: 0x92020033  lbu         $v0, 0x33($s0)
    ctx->pc = 0x1eac84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 51)));
label_1eac88:
    // 0x1eac88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eac88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1eac8c:
    // 0x1eac8c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1eac90:
    if (ctx->pc == 0x1EAC90u) {
        ctx->pc = 0x1EAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC8Cu;
        // 0x1eac90: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC94u;
        goto label_1eac94;
    }
    ctx->pc = 0x1EAC8Cu;
    {
        const bool branch_taken_0x1eac8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC8Cu;
        // 0x1eac90: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac8c) {
            ctx->pc = 0x1EACF0u;
            goto label_1eacf0;
        }
    }
    ctx->pc = 0x1EAC94u;
label_1eac94:
    // 0x1eac94: 0xc0743e0  jal         func_1D0F80
label_1eac98:
    if (ctx->pc == 0x1EAC98u) {
        ctx->pc = 0x1EAC9Cu;
        goto label_1eac9c;
    }
    ctx->pc = 0x1EAC94u;
    SET_GPR_U32(ctx, 31, 0x1EAC9Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1EAC94u, 0x1EAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAC9Cu;
label_1eac9c:
    // 0x1eac9c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1eac9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1eaca0:
    // 0x1eaca0: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1eaca0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1eaca4:
    // 0x1eaca4: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x1eaca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_1eaca8:
    // 0x1eaca8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1eaca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1eacac:
    // 0x1eacac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1eacb0:
    if (ctx->pc == 0x1EACB0u) {
        ctx->pc = 0x1EACB4u;
        goto label_1eacb4;
    }
    ctx->pc = 0x1EACACu;
    {
        const bool branch_taken_0x1eacac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eacac) {
            ctx->pc = 0x1EACC8u;
            goto label_1eacc8;
        }
    }
    ctx->pc = 0x1EACB4u;
label_1eacb4:
    // 0x1eacb4: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1eacb4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eacb8:
    // 0x1eacb8: 0x0  nop
    ctx->pc = 0x1eacb8u;
    // NOP
label_1eacbc:
    // 0x1eacbc: 0x0  nop
    ctx->pc = 0x1eacbcu;
    // NOP
label_1eacc0:
    // 0x1eacc0: 0x1010  mfhi        $v0
    ctx->pc = 0x1eacc0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eacc4:
    // 0x1eacc4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1eacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_1eacc8:
    // 0x1eacc8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1eacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1eaccc:
    // 0x1eaccc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1eacccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1eacd0:
    // 0x1eacd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1eacd4:
    if (ctx->pc == 0x1EACD4u) {
        ctx->pc = 0x1EACD8u;
        goto label_1eacd8;
    }
    ctx->pc = 0x1EACD0u;
    {
        const bool branch_taken_0x1eacd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eacd0) {
            ctx->pc = 0x1EACF0u;
            goto label_1eacf0;
        }
    }
    ctx->pc = 0x1EACD8u;
label_1eacd8:
    // 0x1eacd8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1eacd8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eacdc:
    // 0x1eacdc: 0x0  nop
    ctx->pc = 0x1eacdcu;
    // NOP
label_1eace0:
    // 0x1eace0: 0x0  nop
    ctx->pc = 0x1eace0u;
    // NOP
label_1eace4:
    // 0x1eace4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eace4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eace8:
    // 0x1eace8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1eace8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1eacec:
    // 0x1eacec: 0x0  nop
    ctx->pc = 0x1eacecu;
    // NOP
label_1eacf0:
    // 0x1eacf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eacf4:
    // 0x1eacf4: 0x0  nop
    ctx->pc = 0x1eacf4u;
    // NOP
label_1eacf8:
    // 0x1eacf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eacf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eacfc:
    // 0x1eacfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eacfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ead00:
    // 0x1ead00: 0x3e00008  jr          $ra
label_1ead04:
    if (ctx->pc == 0x1EAD04u) {
        ctx->pc = 0x1EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD00u;
        // 0x1ead04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD08u;
        goto label_fallthrough_0x1ead00;
    }
    ctx->pc = 0x1EAD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD00u;
        // 0x1ead04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ead00:
    ctx->pc = 0x1EAD08u;
}
