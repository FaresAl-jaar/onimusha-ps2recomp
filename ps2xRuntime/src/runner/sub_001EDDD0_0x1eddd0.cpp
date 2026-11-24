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

// Function: sub_001EDDD0
// Address: 0x1eddd0 - 0x1edea0
void sub_001EDDD0_0x1eddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDDD0_0x1eddd0");
#endif

    switch (ctx->pc) {
        case 0x1eddd0u: goto label_1eddd0;
        case 0x1eddd4u: goto label_1eddd4;
        case 0x1eddd8u: goto label_1eddd8;
        case 0x1edddcu: goto label_1edddc;
        case 0x1edde0u: goto label_1edde0;
        case 0x1edde4u: goto label_1edde4;
        case 0x1edde8u: goto label_1edde8;
        case 0x1eddecu: goto label_1eddec;
        case 0x1eddf0u: goto label_1eddf0;
        case 0x1eddf4u: goto label_1eddf4;
        case 0x1eddf8u: goto label_1eddf8;
        case 0x1eddfcu: goto label_1eddfc;
        case 0x1ede00u: goto label_1ede00;
        case 0x1ede04u: goto label_1ede04;
        case 0x1ede08u: goto label_1ede08;
        case 0x1ede0cu: goto label_1ede0c;
        case 0x1ede10u: goto label_1ede10;
        case 0x1ede14u: goto label_1ede14;
        case 0x1ede18u: goto label_1ede18;
        case 0x1ede1cu: goto label_1ede1c;
        case 0x1ede20u: goto label_1ede20;
        case 0x1ede24u: goto label_1ede24;
        case 0x1ede28u: goto label_1ede28;
        case 0x1ede2cu: goto label_1ede2c;
        case 0x1ede30u: goto label_1ede30;
        case 0x1ede34u: goto label_1ede34;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede3cu: goto label_1ede3c;
        case 0x1ede40u: goto label_1ede40;
        case 0x1ede44u: goto label_1ede44;
        case 0x1ede48u: goto label_1ede48;
        case 0x1ede4cu: goto label_1ede4c;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede54u: goto label_1ede54;
        case 0x1ede58u: goto label_1ede58;
        case 0x1ede5cu: goto label_1ede5c;
        case 0x1ede60u: goto label_1ede60;
        case 0x1ede64u: goto label_1ede64;
        case 0x1ede68u: goto label_1ede68;
        case 0x1ede6cu: goto label_1ede6c;
        case 0x1ede70u: goto label_1ede70;
        case 0x1ede74u: goto label_1ede74;
        case 0x1ede78u: goto label_1ede78;
        case 0x1ede7cu: goto label_1ede7c;
        case 0x1ede80u: goto label_1ede80;
        case 0x1ede84u: goto label_1ede84;
        case 0x1ede88u: goto label_1ede88;
        case 0x1ede8cu: goto label_1ede8c;
        case 0x1ede90u: goto label_1ede90;
        case 0x1ede94u: goto label_1ede94;
        case 0x1ede98u: goto label_1ede98;
        case 0x1ede9cu: goto label_1ede9c;
        default: break;
    }

    ctx->pc = 0x1eddd0u;

label_1eddd0:
    // 0x1eddd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1eddd4:
    // 0x1eddd4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1eddd8:
    // 0x1eddd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eddd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1edddc:
    // 0x1edddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1edddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1edde0:
    // 0x1edde0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1edde0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1edde4:
    // 0x1edde4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1edde8:
    if (ctx->pc == 0x1EDDE8u) {
        ctx->pc = 0x1EDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDE4u;
        // 0x1edde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDECu;
        goto label_1eddec;
    }
    ctx->pc = 0x1EDDE4u;
    {
        const bool branch_taken_0x1edde4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EDDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDE4u;
        // 0x1edde8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edde4) {
            ctx->pc = 0x1EDDF8u;
            goto label_1eddf8;
        }
    }
    ctx->pc = 0x1EDDECu;
label_1eddec:
    // 0x1eddec: 0x10000028  b           . + 4 + (0x28 << 2)
label_1eddf0:
    if (ctx->pc == 0x1EDDF0u) {
        ctx->pc = 0x1EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDECu;
        // 0x1eddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDDF4u;
        goto label_1eddf4;
    }
    ctx->pc = 0x1EDDECu;
    {
        const bool branch_taken_0x1eddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDECu;
        // 0x1eddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddec) {
            ctx->pc = 0x1EDE90u;
            goto label_1ede90;
        }
    }
    ctx->pc = 0x1EDDF4u;
label_1eddf4:
    // 0x1eddf4: 0x0  nop
    ctx->pc = 0x1eddf4u;
    // NOP
label_1eddf8:
    // 0x1eddf8: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1eddf8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_1eddfc:
    // 0x1eddfc: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1eddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ede00:
    // 0x1ede00: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ede00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ede04:
    // 0x1ede04: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ede04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ede08:
    // 0x1ede08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ede08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ede0c:
    // 0x1ede0c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ede0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ede10:
    // 0x1ede10: 0x86030032  lh          $v1, 0x32($s0)
    ctx->pc = 0x1ede10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
label_1ede14:
    // 0x1ede14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ede18:
    if (ctx->pc == 0x1EDE18u) {
        ctx->pc = 0x1EDE1Cu;
        goto label_1ede1c;
    }
    ctx->pc = 0x1EDE14u;
    {
        const bool branch_taken_0x1ede14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ede14) {
            ctx->pc = 0x1EDE38u;
            goto label_1ede38;
        }
    }
    ctx->pc = 0x1EDE1Cu;
label_1ede1c:
    // 0x1ede1c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ede1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ede20:
    // 0x1ede20: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ede20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ede24:
    // 0x1ede24: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ede28:
    if (ctx->pc == 0x1EDE28u) {
        ctx->pc = 0x1EDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE24u;
        // 0x1ede28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE2Cu;
        goto label_1ede2c;
    }
    ctx->pc = 0x1EDE24u;
    {
        const bool branch_taken_0x1ede24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE24u;
        // 0x1ede28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede24) {
            ctx->pc = 0x1EDE60u;
            goto label_1ede60;
        }
    }
    ctx->pc = 0x1EDE2Cu;
label_1ede2c:
    // 0x1ede2c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ede2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ede30:
    // 0x1ede30: 0x1000000b  b           . + 4 + (0xB << 2)
label_1ede34:
    if (ctx->pc == 0x1EDE34u) {
        ctx->pc = 0x1EDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE30u;
        // 0x1ede34: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE38u;
        goto label_1ede38;
    }
    ctx->pc = 0x1EDE30u;
    {
        const bool branch_taken_0x1ede30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE30u;
        // 0x1ede34: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede30) {
            ctx->pc = 0x1EDE60u;
            goto label_1ede60;
        }
    }
    ctx->pc = 0x1EDE38u;
label_1ede38:
    // 0x1ede38: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ede38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ede3c:
    // 0x1ede3c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ede3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ede40:
    // 0x1ede40: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1ede44:
    if (ctx->pc == 0x1EDE44u) {
        ctx->pc = 0x1EDE48u;
        goto label_1ede48;
    }
    ctx->pc = 0x1EDE40u;
    {
        const bool branch_taken_0x1ede40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede40) {
            ctx->pc = 0x1EDE60u;
            goto label_1ede60;
        }
    }
    ctx->pc = 0x1EDE48u;
label_1ede48:
    // 0x1ede48: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1ede48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1ede4c:
    // 0x1ede4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ede4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ede50:
    // 0x1ede50: 0x320f809  jalr        $t9
label_1ede54:
    if (ctx->pc == 0x1EDE54u) {
        ctx->pc = 0x1EDE58u;
        goto label_1ede58;
    }
    ctx->pc = 0x1EDE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDE58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE50u, 0x1EDE58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDE58u;
label_1ede58:
    // 0x1ede58: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ede5c:
    if (ctx->pc == 0x1EDE5Cu) {
        ctx->pc = 0x1EDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE58u;
        // 0x1ede5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE60u;
        goto label_1ede60;
    }
    ctx->pc = 0x1EDE58u;
    {
        const bool branch_taken_0x1ede58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE58u;
        // 0x1ede5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ede58) {
            ctx->pc = 0x1EDE90u;
            goto label_1ede90;
        }
    }
    ctx->pc = 0x1EDE60u;
label_1ede60:
    // 0x1ede60: 0xc0743c0  jal         func_1D0F00
label_1ede64:
    if (ctx->pc == 0x1EDE64u) {
        ctx->pc = 0x1EDE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE60u;
        // 0x1ede64: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE68u;
        goto label_1ede68;
    }
    ctx->pc = 0x1EDE60u;
    SET_GPR_U32(ctx, 31, 0x1EDE68u);
    ctx->pc = 0x1EDE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE60u;
    // 0x1ede64: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EDE60u, 0x1EDE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE68u;
label_1ede68:
    // 0x1ede68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ede6c:
    if (ctx->pc == 0x1EDE6Cu) {
        ctx->pc = 0x1EDE70u;
        goto label_1ede70;
    }
    ctx->pc = 0x1EDE68u;
    {
        const bool branch_taken_0x1ede68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede68) {
            ctx->pc = 0x1EDE80u;
            goto label_1ede80;
        }
    }
    ctx->pc = 0x1EDE70u;
label_1ede70:
    // 0x1ede70: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1ede70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ede74:
    // 0x1ede74: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ede74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ede78:
    // 0x1ede78: 0x320f809  jalr        $t9
label_1ede7c:
    if (ctx->pc == 0x1EDE7Cu) {
        ctx->pc = 0x1EDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE78u;
        // 0x1ede7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE80u;
        goto label_1ede80;
    }
    ctx->pc = 0x1EDE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDE80u);
        ctx->pc = 0x1EDE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE78u;
        // 0x1ede7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE78u, 0x1EDE80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDE80u;
label_1ede80:
    // 0x1ede80: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1ede80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1ede84:
    // 0x1ede84: 0xc076800  jal         func_1DA000
label_1ede88:
    if (ctx->pc == 0x1EDE88u) {
        ctx->pc = 0x1EDE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE84u;
        // 0x1ede88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDE8Cu;
        goto label_1ede8c;
    }
    ctx->pc = 0x1EDE84u;
    SET_GPR_U32(ctx, 31, 0x1EDE8Cu);
    ctx->pc = 0x1EDE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDE84u;
    // 0x1ede88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EDE84u, 0x1EDE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE8Cu;
label_1ede8c:
    // 0x1ede8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ede8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ede90:
    // 0x1ede90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ede90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ede94:
    // 0x1ede94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ede94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ede98:
    // 0x1ede98: 0x3e00008  jr          $ra
label_1ede9c:
    if (ctx->pc == 0x1EDE9Cu) {
        ctx->pc = 0x1EDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE98u;
        // 0x1ede9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDEA0u;
        goto label_fallthrough_0x1ede98;
    }
    ctx->pc = 0x1EDE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDE98u;
        // 0x1ede9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDE98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ede98:
    ctx->pc = 0x1EDEA0u;
}
