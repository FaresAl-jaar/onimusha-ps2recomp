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

// Function: sub_001ED9A0
// Address: 0x1ed9a0 - 0x1eda80
void sub_001ED9A0_0x1ed9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED9A0_0x1ed9a0");
#endif

    switch (ctx->pc) {
        case 0x1ed9a0u: goto label_1ed9a0;
        case 0x1ed9a4u: goto label_1ed9a4;
        case 0x1ed9a8u: goto label_1ed9a8;
        case 0x1ed9acu: goto label_1ed9ac;
        case 0x1ed9b0u: goto label_1ed9b0;
        case 0x1ed9b4u: goto label_1ed9b4;
        case 0x1ed9b8u: goto label_1ed9b8;
        case 0x1ed9bcu: goto label_1ed9bc;
        case 0x1ed9c0u: goto label_1ed9c0;
        case 0x1ed9c4u: goto label_1ed9c4;
        case 0x1ed9c8u: goto label_1ed9c8;
        case 0x1ed9ccu: goto label_1ed9cc;
        case 0x1ed9d0u: goto label_1ed9d0;
        case 0x1ed9d4u: goto label_1ed9d4;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9dcu: goto label_1ed9dc;
        case 0x1ed9e0u: goto label_1ed9e0;
        case 0x1ed9e4u: goto label_1ed9e4;
        case 0x1ed9e8u: goto label_1ed9e8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9f0u: goto label_1ed9f0;
        case 0x1ed9f4u: goto label_1ed9f4;
        case 0x1ed9f8u: goto label_1ed9f8;
        case 0x1ed9fcu: goto label_1ed9fc;
        case 0x1eda00u: goto label_1eda00;
        case 0x1eda04u: goto label_1eda04;
        case 0x1eda08u: goto label_1eda08;
        case 0x1eda0cu: goto label_1eda0c;
        case 0x1eda10u: goto label_1eda10;
        case 0x1eda14u: goto label_1eda14;
        case 0x1eda18u: goto label_1eda18;
        case 0x1eda1cu: goto label_1eda1c;
        case 0x1eda20u: goto label_1eda20;
        case 0x1eda24u: goto label_1eda24;
        case 0x1eda28u: goto label_1eda28;
        case 0x1eda2cu: goto label_1eda2c;
        case 0x1eda30u: goto label_1eda30;
        case 0x1eda34u: goto label_1eda34;
        case 0x1eda38u: goto label_1eda38;
        case 0x1eda3cu: goto label_1eda3c;
        case 0x1eda40u: goto label_1eda40;
        case 0x1eda44u: goto label_1eda44;
        case 0x1eda48u: goto label_1eda48;
        case 0x1eda4cu: goto label_1eda4c;
        case 0x1eda50u: goto label_1eda50;
        case 0x1eda54u: goto label_1eda54;
        case 0x1eda58u: goto label_1eda58;
        case 0x1eda5cu: goto label_1eda5c;
        case 0x1eda60u: goto label_1eda60;
        case 0x1eda64u: goto label_1eda64;
        case 0x1eda68u: goto label_1eda68;
        case 0x1eda6cu: goto label_1eda6c;
        case 0x1eda70u: goto label_1eda70;
        case 0x1eda74u: goto label_1eda74;
        case 0x1eda78u: goto label_1eda78;
        case 0x1eda7cu: goto label_1eda7c;
        default: break;
    }

    ctx->pc = 0x1ed9a0u;

label_1ed9a0:
    // 0x1ed9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed9a4:
    // 0x1ed9a4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1ed9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
label_1ed9a8:
    // 0x1ed9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed9ac:
    // 0x1ed9ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ed9b0:
    // 0x1ed9b0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ed9b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1ed9b4:
    // 0x1ed9b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1ed9b8:
    if (ctx->pc == 0x1ED9B8u) {
        ctx->pc = 0x1ED9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9B4u;
        // 0x1ed9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9BCu;
        goto label_1ed9bc;
    }
    ctx->pc = 0x1ED9B4u;
    {
        const bool branch_taken_0x1ed9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ED9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9B4u;
        // 0x1ed9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9b4) {
            ctx->pc = 0x1ED9C8u;
            goto label_1ed9c8;
        }
    }
    ctx->pc = 0x1ED9BCu;
label_1ed9bc:
    // 0x1ed9bc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_1ed9c0:
    if (ctx->pc == 0x1ED9C0u) {
        ctx->pc = 0x1ED9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9BCu;
        // 0x1ed9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9C4u;
        goto label_1ed9c4;
    }
    ctx->pc = 0x1ED9BCu;
    {
        const bool branch_taken_0x1ed9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9BCu;
        // 0x1ed9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9bc) {
            ctx->pc = 0x1EDA70u;
            goto label_1eda70;
        }
    }
    ctx->pc = 0x1ED9C4u;
label_1ed9c4:
    // 0x1ed9c4: 0x0  nop
    ctx->pc = 0x1ed9c4u;
    // NOP
label_1ed9c8:
    // 0x1ed9c8: 0x7a030060  lq          $v1, 0x60($s0)
    ctx->pc = 0x1ed9c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 96)));
label_1ed9cc:
    // 0x1ed9cc: 0x24027ffd  addiu       $v0, $zero, 0x7FFD
    ctx->pc = 0x1ed9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
label_1ed9d0:
    // 0x1ed9d0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x1ed9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_1ed9d4:
    // 0x1ed9d4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1ed9d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed9d8:
    // 0x1ed9d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ed9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ed9dc:
    // 0x1ed9dc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x1ed9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_1ed9e0:
    // 0x1ed9e0: 0x86030040  lh          $v1, 0x40($s0)
    ctx->pc = 0x1ed9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
label_1ed9e4:
    // 0x1ed9e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1ed9e8:
    if (ctx->pc == 0x1ED9E8u) {
        ctx->pc = 0x1ED9ECu;
        goto label_1ed9ec;
    }
    ctx->pc = 0x1ED9E4u;
    {
        const bool branch_taken_0x1ed9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ed9e4) {
            ctx->pc = 0x1EDA08u;
            goto label_1eda08;
        }
    }
    ctx->pc = 0x1ED9ECu;
label_1ed9ec:
    // 0x1ed9ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed9f0:
    // 0x1ed9f0: 0x28417ff1  slti        $at, $v0, 0x7FF1
    ctx->pc = 0x1ed9f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32753) ? 1 : 0);
label_1ed9f4:
    // 0x1ed9f4: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1ed9f8:
    if (ctx->pc == 0x1ED9F8u) {
        ctx->pc = 0x1ED9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9F4u;
        // 0x1ed9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED9FCu;
        goto label_1ed9fc;
    }
    ctx->pc = 0x1ED9F4u;
    {
        const bool branch_taken_0x1ed9f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED9F4u;
        // 0x1ed9f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed9f4) {
            ctx->pc = 0x1EDA30u;
            goto label_1eda30;
        }
    }
    ctx->pc = 0x1ED9FCu;
label_1ed9fc:
    // 0x1ed9fc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1ed9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1eda00:
    // 0x1eda00: 0x1000000b  b           . + 4 + (0xB << 2)
label_1eda04:
    if (ctx->pc == 0x1EDA04u) {
        ctx->pc = 0x1EDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA00u;
        // 0x1eda04: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA08u;
        goto label_1eda08;
    }
    ctx->pc = 0x1EDA00u;
    {
        const bool branch_taken_0x1eda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA00u;
        // 0x1eda04: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda00) {
            ctx->pc = 0x1EDA30u;
            goto label_1eda30;
        }
    }
    ctx->pc = 0x1EDA08u;
label_1eda08:
    // 0x1eda08: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x1eda08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1eda0c:
    // 0x1eda0c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1eda0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1eda10:
    // 0x1eda10: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1eda14:
    if (ctx->pc == 0x1EDA14u) {
        ctx->pc = 0x1EDA18u;
        goto label_1eda18;
    }
    ctx->pc = 0x1EDA10u;
    {
        const bool branch_taken_0x1eda10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eda10) {
            ctx->pc = 0x1EDA30u;
            goto label_1eda30;
        }
    }
    ctx->pc = 0x1EDA18u;
label_1eda18:
    // 0x1eda18: 0x8c990020  lw          $t9, 0x20($a0)
    ctx->pc = 0x1eda18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1eda1c:
    // 0x1eda1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eda1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eda20:
    // 0x1eda20: 0x320f809  jalr        $t9
label_1eda24:
    if (ctx->pc == 0x1EDA24u) {
        ctx->pc = 0x1EDA28u;
        goto label_1eda28;
    }
    ctx->pc = 0x1EDA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDA28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA20u, 0x1EDA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDA28u;
label_1eda28:
    // 0x1eda28: 0x10000011  b           . + 4 + (0x11 << 2)
label_1eda2c:
    if (ctx->pc == 0x1EDA2Cu) {
        ctx->pc = 0x1EDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA28u;
        // 0x1eda2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA30u;
        goto label_1eda30;
    }
    ctx->pc = 0x1EDA28u;
    {
        const bool branch_taken_0x1eda28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA28u;
        // 0x1eda2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eda28) {
            ctx->pc = 0x1EDA70u;
            goto label_1eda70;
        }
    }
    ctx->pc = 0x1EDA30u;
label_1eda30:
    // 0x1eda30: 0xc0743c0  jal         func_1D0F00
label_1eda34:
    if (ctx->pc == 0x1EDA34u) {
        ctx->pc = 0x1EDA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA30u;
        // 0x1eda34: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA38u;
        goto label_1eda38;
    }
    ctx->pc = 0x1EDA30u;
    SET_GPR_U32(ctx, 31, 0x1EDA38u);
    ctx->pc = 0x1EDA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA30u;
    // 0x1eda34: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F00u, 0x1EDA30u, 0x1EDA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA38u;
label_1eda38:
    // 0x1eda38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1eda3c:
    if (ctx->pc == 0x1EDA3Cu) {
        ctx->pc = 0x1EDA40u;
        goto label_1eda40;
    }
    ctx->pc = 0x1EDA38u;
    {
        const bool branch_taken_0x1eda38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda38) {
            ctx->pc = 0x1EDA50u;
            goto label_1eda50;
        }
    }
    ctx->pc = 0x1EDA40u;
label_1eda40:
    // 0x1eda40: 0x8e190020  lw          $t9, 0x20($s0)
    ctx->pc = 0x1eda40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1eda44:
    // 0x1eda44: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1eda44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1eda48:
    // 0x1eda48: 0x320f809  jalr        $t9
label_1eda4c:
    if (ctx->pc == 0x1EDA4Cu) {
        ctx->pc = 0x1EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA48u;
        // 0x1eda4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA50u;
        goto label_1eda50;
    }
    ctx->pc = 0x1EDA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EDA50u);
        ctx->pc = 0x1EDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA48u;
        // 0x1eda4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA48u, 0x1EDA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EDA50u;
label_1eda50:
    // 0x1eda50: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1eda50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_1eda54:
    // 0x1eda54: 0xc076800  jal         func_1DA000
label_1eda58:
    if (ctx->pc == 0x1EDA58u) {
        ctx->pc = 0x1EDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA54u;
        // 0x1eda58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA5Cu;
        goto label_1eda5c;
    }
    ctx->pc = 0x1EDA54u;
    SET_GPR_U32(ctx, 31, 0x1EDA5Cu);
    ctx->pc = 0x1EDA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDA54u;
    // 0x1eda58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA000u, 0x1EDA54u, 0x1EDA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA5Cu;
label_1eda5c:
    // 0x1eda5c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1eda5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1eda60:
    // 0x1eda60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eda60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eda64:
    // 0x1eda64: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1eda64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
label_1eda68:
    // 0x1eda68: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x1eda68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_1eda6c:
    // 0x1eda6c: 0x0  nop
    ctx->pc = 0x1eda6cu;
    // NOP
label_1eda70:
    // 0x1eda70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eda70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eda74:
    // 0x1eda74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eda74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1eda78:
    // 0x1eda78: 0x3e00008  jr          $ra
label_1eda7c:
    if (ctx->pc == 0x1EDA7Cu) {
        ctx->pc = 0x1EDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA78u;
        // 0x1eda7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EDA80u;
        goto label_fallthrough_0x1eda78;
    }
    ctx->pc = 0x1EDA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDA78u;
        // 0x1eda7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1eda78:
    ctx->pc = 0x1EDA80u;
}
