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

// Function: sub_001ECB90
// Address: 0x1ecb90 - 0x1ecce8
void sub_001ECB90_0x1ecb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECB90_0x1ecb90");
#endif

    switch (ctx->pc) {
        case 0x1ecb90u: goto label_1ecb90;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecb98u: goto label_1ecb98;
        case 0x1ecb9cu: goto label_1ecb9c;
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbacu: goto label_1ecbac;
        case 0x1ecbb0u: goto label_1ecbb0;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbb8u: goto label_1ecbb8;
        case 0x1ecbbcu: goto label_1ecbbc;
        case 0x1ecbc0u: goto label_1ecbc0;
        case 0x1ecbc4u: goto label_1ecbc4;
        case 0x1ecbc8u: goto label_1ecbc8;
        case 0x1ecbccu: goto label_1ecbcc;
        case 0x1ecbd0u: goto label_1ecbd0;
        case 0x1ecbd4u: goto label_1ecbd4;
        case 0x1ecbd8u: goto label_1ecbd8;
        case 0x1ecbdcu: goto label_1ecbdc;
        case 0x1ecbe0u: goto label_1ecbe0;
        case 0x1ecbe4u: goto label_1ecbe4;
        case 0x1ecbe8u: goto label_1ecbe8;
        case 0x1ecbecu: goto label_1ecbec;
        case 0x1ecbf0u: goto label_1ecbf0;
        case 0x1ecbf4u: goto label_1ecbf4;
        case 0x1ecbf8u: goto label_1ecbf8;
        case 0x1ecbfcu: goto label_1ecbfc;
        case 0x1ecc00u: goto label_1ecc00;
        case 0x1ecc04u: goto label_1ecc04;
        case 0x1ecc08u: goto label_1ecc08;
        case 0x1ecc0cu: goto label_1ecc0c;
        case 0x1ecc10u: goto label_1ecc10;
        case 0x1ecc14u: goto label_1ecc14;
        case 0x1ecc18u: goto label_1ecc18;
        case 0x1ecc1cu: goto label_1ecc1c;
        case 0x1ecc20u: goto label_1ecc20;
        case 0x1ecc24u: goto label_1ecc24;
        case 0x1ecc28u: goto label_1ecc28;
        case 0x1ecc2cu: goto label_1ecc2c;
        case 0x1ecc30u: goto label_1ecc30;
        case 0x1ecc34u: goto label_1ecc34;
        case 0x1ecc38u: goto label_1ecc38;
        case 0x1ecc3cu: goto label_1ecc3c;
        case 0x1ecc40u: goto label_1ecc40;
        case 0x1ecc44u: goto label_1ecc44;
        case 0x1ecc48u: goto label_1ecc48;
        case 0x1ecc4cu: goto label_1ecc4c;
        case 0x1ecc50u: goto label_1ecc50;
        case 0x1ecc54u: goto label_1ecc54;
        case 0x1ecc58u: goto label_1ecc58;
        case 0x1ecc5cu: goto label_1ecc5c;
        case 0x1ecc60u: goto label_1ecc60;
        case 0x1ecc64u: goto label_1ecc64;
        case 0x1ecc68u: goto label_1ecc68;
        case 0x1ecc6cu: goto label_1ecc6c;
        case 0x1ecc70u: goto label_1ecc70;
        case 0x1ecc74u: goto label_1ecc74;
        case 0x1ecc78u: goto label_1ecc78;
        case 0x1ecc7cu: goto label_1ecc7c;
        case 0x1ecc80u: goto label_1ecc80;
        case 0x1ecc84u: goto label_1ecc84;
        case 0x1ecc88u: goto label_1ecc88;
        case 0x1ecc8cu: goto label_1ecc8c;
        case 0x1ecc90u: goto label_1ecc90;
        case 0x1ecc94u: goto label_1ecc94;
        case 0x1ecc98u: goto label_1ecc98;
        case 0x1ecc9cu: goto label_1ecc9c;
        case 0x1ecca0u: goto label_1ecca0;
        case 0x1ecca4u: goto label_1ecca4;
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccacu: goto label_1eccac;
        case 0x1eccb0u: goto label_1eccb0;
        case 0x1eccb4u: goto label_1eccb4;
        case 0x1eccb8u: goto label_1eccb8;
        case 0x1eccbcu: goto label_1eccbc;
        case 0x1eccc0u: goto label_1eccc0;
        case 0x1eccc4u: goto label_1eccc4;
        case 0x1eccc8u: goto label_1eccc8;
        case 0x1eccccu: goto label_1ecccc;
        case 0x1eccd0u: goto label_1eccd0;
        case 0x1eccd4u: goto label_1eccd4;
        case 0x1eccd8u: goto label_1eccd8;
        case 0x1eccdcu: goto label_1eccdc;
        case 0x1ecce0u: goto label_1ecce0;
        case 0x1ecce4u: goto label_1ecce4;
        default: break;
    }

    ctx->pc = 0x1ecb90u;

label_1ecb90:
    // 0x1ecb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ecb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ecb94:
    // 0x1ecb94: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ecb98:
    // 0x1ecb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ecb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ecb9c:
    // 0x1ecb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ecb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ecba0:
    // 0x1ecba0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ecba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ecba4:
    // 0x1ecba4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ecba8:
    if (ctx->pc == 0x1ECBA8u) {
        ctx->pc = 0x1ECBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA4u;
        // 0x1ecba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBACu;
        goto label_1ecbac;
    }
    ctx->pc = 0x1ECBA4u;
    {
        const bool branch_taken_0x1ecba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA4u;
        // 0x1ecba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecba4) {
            ctx->pc = 0x1ECBB8u;
            goto label_1ecbb8;
        }
    }
    ctx->pc = 0x1ECBACu;
label_1ecbac:
    // 0x1ecbac: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1ecbb0:
    if (ctx->pc == 0x1ECBB0u) {
        ctx->pc = 0x1ECBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBACu;
        // 0x1ecbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBB4u;
        goto label_1ecbb4;
    }
    ctx->pc = 0x1ECBACu;
    {
        const bool branch_taken_0x1ecbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBACu;
        // 0x1ecbb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbac) {
            ctx->pc = 0x1ECCD8u;
            goto label_1eccd8;
        }
    }
    ctx->pc = 0x1ECBB4u;
label_1ecbb4:
    // 0x1ecbb4: 0x0  nop
    ctx->pc = 0x1ecbb4u;
    // NOP
label_1ecbb8:
    // 0x1ecbb8: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1ecbb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
label_1ecbbc:
    // 0x1ecbbc: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ecbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ecbc0:
    // 0x1ecbc0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ecbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ecbc4:
    // 0x1ecbc4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ecbc8:
    // 0x1ecbc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ecbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ecbcc:
    // 0x1ecbcc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ecbccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ecbd0:
    // 0x1ecbd0: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x1ecbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1ecbd4:
    // 0x1ecbd4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ecbd8:
    if (ctx->pc == 0x1ECBD8u) {
        ctx->pc = 0x1ECBDCu;
        goto label_1ecbdc;
    }
    ctx->pc = 0x1ECBD4u;
    {
        const bool branch_taken_0x1ecbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecbd4) {
            ctx->pc = 0x1ECBF8u;
            goto label_1ecbf8;
        }
    }
    ctx->pc = 0x1ECBDCu;
label_1ecbdc:
    // 0x1ecbdc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ecbdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ecbe0:
    // 0x1ecbe0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ecbe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ecbe4:
    // 0x1ecbe4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ecbe8:
    if (ctx->pc == 0x1ECBE8u) {
        ctx->pc = 0x1ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBE4u;
        // 0x1ecbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBECu;
        goto label_1ecbec;
    }
    ctx->pc = 0x1ECBE4u;
    {
        const bool branch_taken_0x1ecbe4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBE4u;
        // 0x1ecbe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbe4) {
            ctx->pc = 0x1ECC20u;
            goto label_1ecc20;
        }
    }
    ctx->pc = 0x1ECBECu;
label_1ecbec:
    // 0x1ecbec: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ecbecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ecbf0:
    // 0x1ecbf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ecbf4:
    if (ctx->pc == 0x1ECBF4u) {
        ctx->pc = 0x1ECBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBF0u;
        // 0x1ecbf4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECBF8u;
        goto label_1ecbf8;
    }
    ctx->pc = 0x1ECBF0u;
    {
        const bool branch_taken_0x1ecbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBF0u;
        // 0x1ecbf4: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecbf0) {
            ctx->pc = 0x1ECC20u;
            goto label_1ecc20;
        }
    }
    ctx->pc = 0x1ECBF8u;
label_1ecbf8:
    // 0x1ecbf8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ecbf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ecbfc:
    // 0x1ecbfc: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ecbfcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ecc00:
    // 0x1ecc00: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ecc04:
    if (ctx->pc == 0x1ECC04u) {
        ctx->pc = 0x1ECC08u;
        goto label_1ecc08;
    }
    ctx->pc = 0x1ECC00u;
    {
        const bool branch_taken_0x1ecc00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc00) {
            ctx->pc = 0x1ECC20u;
            goto label_1ecc20;
        }
    }
    ctx->pc = 0x1ECC08u;
label_1ecc08:
    // 0x1ecc08: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ecc08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ecc0c:
    // 0x1ecc0c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ecc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ecc10:
    // 0x1ecc10: 0x320f809  jalr        $t9
label_1ecc14:
    if (ctx->pc == 0x1ECC14u) {
        ctx->pc = 0x1ECC18u;
        goto label_1ecc18;
    }
    ctx->pc = 0x1ECC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ECC18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC10u, 0x1ECC18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECC18u;
label_1ecc18:
    // 0x1ecc18: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ecc1c:
    if (ctx->pc == 0x1ECC1Cu) {
        ctx->pc = 0x1ECC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC18u;
        // 0x1ecc1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC20u;
        goto label_1ecc20;
    }
    ctx->pc = 0x1ECC18u;
    {
        const bool branch_taken_0x1ecc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC18u;
        // 0x1ecc1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc18) {
            ctx->pc = 0x1ECCD8u;
            goto label_1eccd8;
        }
    }
    ctx->pc = 0x1ECC20u;
label_1ecc20:
    // 0x1ecc20: 0xc0743c0  jal         func_1D0F00
label_1ecc24:
    if (ctx->pc == 0x1ECC24u) {
        ctx->pc = 0x1ECC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC20u;
        // 0x1ecc24: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC28u;
        goto label_1ecc28;
    }
    ctx->pc = 0x1ECC20u;
    SET_GPR_U32(ctx, 31, 0x1ECC28u);
    ctx->pc = 0x1ECC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC20u;
    // 0x1ecc24: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1ECC20u, 0x1ECC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC28u;
label_1ecc28:
    // 0x1ecc28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ecc2c:
    if (ctx->pc == 0x1ECC2Cu) {
        ctx->pc = 0x1ECC30u;
        goto label_1ecc30;
    }
    ctx->pc = 0x1ECC28u;
    {
        const bool branch_taken_0x1ecc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc28) {
            ctx->pc = 0x1ECC40u;
            goto label_1ecc40;
        }
    }
    ctx->pc = 0x1ECC30u;
label_1ecc30:
    // 0x1ecc30: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ecc34:
    // 0x1ecc34: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ecc38:
    // 0x1ecc38: 0x320f809  jalr        $t9
label_1ecc3c:
    if (ctx->pc == 0x1ECC3Cu) {
        ctx->pc = 0x1ECC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC38u;
        // 0x1ecc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC40u;
        goto label_1ecc40;
    }
    ctx->pc = 0x1ECC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1ECC40u);
        ctx->pc = 0x1ECC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC38u;
        // 0x1ecc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECC38u, 0x1ECC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ECC40u;
label_1ecc40:
    // 0x1ecc40: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ecc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ecc44:
    // 0x1ecc44: 0xc076800  jal         func_1DA000
label_1ecc48:
    if (ctx->pc == 0x1ECC48u) {
        ctx->pc = 0x1ECC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC44u;
        // 0x1ecc48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC4Cu;
        goto label_1ecc4c;
    }
    ctx->pc = 0x1ECC44u;
    SET_GPR_U32(ctx, 31, 0x1ECC4Cu);
    ctx->pc = 0x1ECC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC44u;
    // 0x1ecc48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1ECC44u, 0x1ECC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC4Cu;
label_1ecc4c:
    // 0x1ecc4c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1ecc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1ecc50:
    // 0x1ecc50: 0xc076800  jal         func_1DA000
label_1ecc54:
    if (ctx->pc == 0x1ECC54u) {
        ctx->pc = 0x1ECC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC50u;
        // 0x1ecc54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC58u;
        goto label_1ecc58;
    }
    ctx->pc = 0x1ECC50u;
    SET_GPR_U32(ctx, 31, 0x1ECC58u);
    ctx->pc = 0x1ECC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECC50u;
    // 0x1ecc54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1ECC50u, 0x1ECC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC58u;
label_1ecc58:
    // 0x1ecc58: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1ecc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1ecc5c:
    // 0x1ecc5c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1ecc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_1ecc60:
    // 0x1ecc60: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1ecc60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_1ecc64:
    // 0x1ecc64: 0x92020036  lbu         $v0, 0x36($s0)
    ctx->pc = 0x1ecc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_1ecc68:
    // 0x1ecc68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1ecc6c:
    // 0x1ecc6c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ecc70:
    if (ctx->pc == 0x1ECC70u) {
        ctx->pc = 0x1ECC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC6Cu;
        // 0x1ecc70: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECC74u;
        goto label_1ecc74;
    }
    ctx->pc = 0x1ECC6Cu;
    {
        const bool branch_taken_0x1ecc6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC6Cu;
        // 0x1ecc70: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc6c) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECC74u;
label_1ecc74:
    // 0x1ecc74: 0xc0743e0  jal         func_1D0F80
label_1ecc78:
    if (ctx->pc == 0x1ECC78u) {
        ctx->pc = 0x1ECC7Cu;
        goto label_1ecc7c;
    }
    ctx->pc = 0x1ECC74u;
    SET_GPR_U32(ctx, 31, 0x1ECC7Cu);
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1ECC74u, 0x1ECC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC7Cu;
label_1ecc7c:
    // 0x1ecc7c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1ecc7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1ecc80:
    // 0x1ecc80: 0x8445000a  lh          $a1, 0xA($v0)
    ctx->pc = 0x1ecc80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
label_1ecc84:
    // 0x1ecc84: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1ecc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1ecc88:
    // 0x1ecc88: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1ecc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ecc8c:
    // 0x1ecc8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ecc90:
    if (ctx->pc == 0x1ECC90u) {
        ctx->pc = 0x1ECC94u;
        goto label_1ecc94;
    }
    ctx->pc = 0x1ECC8Cu;
    {
        const bool branch_taken_0x1ecc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc8c) {
            ctx->pc = 0x1ECCA8u;
            goto label_1ecca8;
        }
    }
    ctx->pc = 0x1ECC94u;
label_1ecc94:
    // 0x1ecc94: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1ecc94u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ecc98:
    // 0x1ecc98: 0x0  nop
    ctx->pc = 0x1ecc98u;
    // NOP
label_1ecc9c:
    // 0x1ecc9c: 0x0  nop
    ctx->pc = 0x1ecc9cu;
    // NOP
label_1ecca0:
    // 0x1ecca0: 0x1010  mfhi        $v0
    ctx->pc = 0x1ecca0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ecca4:
    // 0x1ecca4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1ecca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_1ecca8:
    // 0x1ecca8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ecca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1eccac:
    // 0x1eccac: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1eccacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1eccb0:
    // 0x1eccb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1eccb4:
    if (ctx->pc == 0x1ECCB4u) {
        ctx->pc = 0x1ECCB8u;
        goto label_1eccb8;
    }
    ctx->pc = 0x1ECCB0u;
    {
        const bool branch_taken_0x1eccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eccb0) {
            ctx->pc = 0x1ECCD0u;
            goto label_1eccd0;
        }
    }
    ctx->pc = 0x1ECCB8u;
label_1eccb8:
    // 0x1eccb8: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x1eccb8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1eccbc:
    // 0x1eccbc: 0x0  nop
    ctx->pc = 0x1eccbcu;
    // NOP
label_1eccc0:
    // 0x1eccc0: 0x0  nop
    ctx->pc = 0x1eccc0u;
    // NOP
label_1eccc4:
    // 0x1eccc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1eccc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1eccc8:
    // 0x1eccc8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1eccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1ecccc:
    // 0x1ecccc: 0x0  nop
    ctx->pc = 0x1eccccu;
    // NOP
label_1eccd0:
    // 0x1eccd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eccd4:
    // 0x1eccd4: 0x0  nop
    ctx->pc = 0x1eccd4u;
    // NOP
label_1eccd8:
    // 0x1eccd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eccd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eccdc:
    // 0x1eccdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eccdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ecce0:
    // 0x1ecce0: 0x3e00008  jr          $ra
label_1ecce4:
    if (ctx->pc == 0x1ECCE4u) {
        ctx->pc = 0x1ECCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCE0u;
        // 0x1ecce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ECCE8u;
        goto label_fallthrough_0x1ecce0;
    }
    ctx->pc = 0x1ECCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCE0u;
        // 0x1ecce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ecce0:
    ctx->pc = 0x1ECCE8u;
}
