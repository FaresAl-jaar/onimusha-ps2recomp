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

// Function: sub_0022D048
// Address: 0x22d048 - 0x22d1dc
void sub_0022D048_0x22d048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D048_0x22d048");
#endif

    switch (ctx->pc) {
        case 0x22d048u: goto label_22d048;
        case 0x22d04cu: goto label_22d04c;
        case 0x22d050u: goto label_22d050;
        case 0x22d054u: goto label_22d054;
        case 0x22d058u: goto label_22d058;
        case 0x22d05cu: goto label_22d05c;
        case 0x22d060u: goto label_22d060;
        case 0x22d064u: goto label_22d064;
        case 0x22d068u: goto label_22d068;
        case 0x22d06cu: goto label_22d06c;
        case 0x22d070u: goto label_22d070;
        case 0x22d074u: goto label_22d074;
        case 0x22d078u: goto label_22d078;
        case 0x22d07cu: goto label_22d07c;
        case 0x22d080u: goto label_22d080;
        case 0x22d084u: goto label_22d084;
        case 0x22d088u: goto label_22d088;
        case 0x22d08cu: goto label_22d08c;
        case 0x22d090u: goto label_22d090;
        case 0x22d094u: goto label_22d094;
        case 0x22d098u: goto label_22d098;
        case 0x22d09cu: goto label_22d09c;
        case 0x22d0a0u: goto label_22d0a0;
        case 0x22d0a4u: goto label_22d0a4;
        case 0x22d0a8u: goto label_22d0a8;
        case 0x22d0acu: goto label_22d0ac;
        case 0x22d0b0u: goto label_22d0b0;
        case 0x22d0b4u: goto label_22d0b4;
        case 0x22d0b8u: goto label_22d0b8;
        case 0x22d0bcu: goto label_22d0bc;
        case 0x22d0c0u: goto label_22d0c0;
        case 0x22d0c4u: goto label_22d0c4;
        case 0x22d0c8u: goto label_22d0c8;
        case 0x22d0ccu: goto label_22d0cc;
        case 0x22d0d0u: goto label_22d0d0;
        case 0x22d0d4u: goto label_22d0d4;
        case 0x22d0d8u: goto label_22d0d8;
        case 0x22d0dcu: goto label_22d0dc;
        case 0x22d0e0u: goto label_22d0e0;
        case 0x22d0e4u: goto label_22d0e4;
        case 0x22d0e8u: goto label_22d0e8;
        case 0x22d0ecu: goto label_22d0ec;
        case 0x22d0f0u: goto label_22d0f0;
        case 0x22d0f4u: goto label_22d0f4;
        case 0x22d0f8u: goto label_22d0f8;
        case 0x22d0fcu: goto label_22d0fc;
        case 0x22d100u: goto label_22d100;
        case 0x22d104u: goto label_22d104;
        case 0x22d108u: goto label_22d108;
        case 0x22d10cu: goto label_22d10c;
        case 0x22d110u: goto label_22d110;
        case 0x22d114u: goto label_22d114;
        case 0x22d118u: goto label_22d118;
        case 0x22d11cu: goto label_22d11c;
        case 0x22d120u: goto label_22d120;
        case 0x22d124u: goto label_22d124;
        case 0x22d128u: goto label_22d128;
        case 0x22d12cu: goto label_22d12c;
        case 0x22d130u: goto label_22d130;
        case 0x22d134u: goto label_22d134;
        case 0x22d138u: goto label_22d138;
        case 0x22d13cu: goto label_22d13c;
        case 0x22d140u: goto label_22d140;
        case 0x22d144u: goto label_22d144;
        case 0x22d148u: goto label_22d148;
        case 0x22d14cu: goto label_22d14c;
        case 0x22d150u: goto label_22d150;
        case 0x22d154u: goto label_22d154;
        case 0x22d158u: goto label_22d158;
        case 0x22d15cu: goto label_22d15c;
        case 0x22d160u: goto label_22d160;
        case 0x22d164u: goto label_22d164;
        case 0x22d168u: goto label_22d168;
        case 0x22d16cu: goto label_22d16c;
        case 0x22d170u: goto label_22d170;
        case 0x22d174u: goto label_22d174;
        case 0x22d178u: goto label_22d178;
        case 0x22d17cu: goto label_22d17c;
        case 0x22d180u: goto label_22d180;
        case 0x22d184u: goto label_22d184;
        case 0x22d188u: goto label_22d188;
        case 0x22d18cu: goto label_22d18c;
        case 0x22d190u: goto label_22d190;
        case 0x22d194u: goto label_22d194;
        case 0x22d198u: goto label_22d198;
        case 0x22d19cu: goto label_22d19c;
        case 0x22d1a0u: goto label_22d1a0;
        case 0x22d1a4u: goto label_22d1a4;
        case 0x22d1a8u: goto label_22d1a8;
        case 0x22d1acu: goto label_22d1ac;
        case 0x22d1b0u: goto label_22d1b0;
        case 0x22d1b4u: goto label_22d1b4;
        case 0x22d1b8u: goto label_22d1b8;
        case 0x22d1bcu: goto label_22d1bc;
        case 0x22d1c0u: goto label_22d1c0;
        case 0x22d1c4u: goto label_22d1c4;
        case 0x22d1c8u: goto label_22d1c8;
        case 0x22d1ccu: goto label_22d1cc;
        case 0x22d1d0u: goto label_22d1d0;
        case 0x22d1d4u: goto label_22d1d4;
        case 0x22d1d8u: goto label_22d1d8;
        default: break;
    }

    ctx->pc = 0x22d048u;

label_22d048:
    // 0x22d048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22d04c:
    // 0x22d04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22d050:
    // 0x22d050: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22d050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22d054:
    // 0x22d054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d058:
    // 0x22d058: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22d05c:
    // 0x22d05c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x22d05cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_22d060:
    // 0x22d060: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_22d064:
    // 0x22d064: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22d064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_22d068:
    // 0x22d068: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x22d068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22d06c:
    // 0x22d06c: 0x1462004b  bne         $v1, $v0, . + 4 + (0x4B << 2)
label_22d070:
    if (ctx->pc == 0x22D070u) {
        ctx->pc = 0x22D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D06Cu;
        // 0x22d070: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D074u;
        goto label_22d074;
    }
    ctx->pc = 0x22D06Cu;
    {
        const bool branch_taken_0x22d06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D06Cu;
        // 0x22d070: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d06c) {
            ctx->pc = 0x22D19Cu;
            goto label_22d19c;
        }
    }
    ctx->pc = 0x22D074u;
label_22d074:
    // 0x22d074: 0xc08f924  jal         func_23E490
label_22d078:
    if (ctx->pc == 0x22D078u) {
        ctx->pc = 0x22D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D074u;
        // 0x22d078: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D07Cu;
        goto label_22d07c;
    }
    ctx->pc = 0x22D074u;
    SET_GPR_U32(ctx, 31, 0x22D07Cu);
    ctx->pc = 0x22D078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D074u;
    // 0x22d078: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E490u, 0x22D074u, 0x22D07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D07Cu;
label_22d07c:
    // 0x22d07c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_22d080:
    if (ctx->pc == 0x22D080u) {
        ctx->pc = 0x22D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D07Cu;
        // 0x22d080: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D084u;
        goto label_22d084;
    }
    ctx->pc = 0x22D07Cu;
    {
        const bool branch_taken_0x22d07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d07c) {
            ctx->pc = 0x22D080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D07Cu;
            // 0x22d080: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D19Cu;
            goto label_22d19c;
        }
    }
    ctx->pc = 0x22D084u;
label_22d084:
    // 0x22d084: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x22d084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_22d088:
    // 0x22d088: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x22d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_22d08c:
    // 0x22d08c: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x22d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_22d090:
    // 0x22d090: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x22d090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_22d094:
    // 0x22d094: 0x40f809  jalr        $v0
label_22d098:
    if (ctx->pc == 0x22D098u) {
        ctx->pc = 0x22D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D094u;
        // 0x22d098: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D09Cu;
        goto label_22d09c;
    }
    ctx->pc = 0x22D094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D09Cu);
        ctx->pc = 0x22D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D094u;
        // 0x22d098: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D094u, 0x22D09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D09Cu;
label_22d09c:
    // 0x22d09c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x22d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_22d0a0:
    // 0x22d0a0: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x22d0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_22d0a4:
    // 0x22d0a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22d0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d0a8:
    // 0x22d0a8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x22d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_22d0ac:
    // 0x22d0ac: 0x874823  subu        $t1, $a0, $a3
    ctx->pc = 0x22d0acu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_22d0b0:
    // 0x22d0b0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x22d0b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22d0b4:
    // 0x22d0b4: 0x69102a  slt         $v0, $v1, $t1
    ctx->pc = 0x22d0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d0b8:
    // 0x22d0b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_22d0bc:
    // 0x22d0bc: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x22d0bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_22d0c0:
    // 0x22d0c0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x22d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22d0c4:
    // 0x22d0c4: 0x8e2a0014  lw          $t2, 0x14($s1)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_22d0c8:
    // 0x22d0c8: 0xa9102a  slt         $v0, $a1, $t1
    ctx->pc = 0x22d0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d0cc:
    // 0x22d0cc: 0xa2480b  movn        $t1, $a1, $v0
    ctx->pc = 0x22d0ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
label_22d0d0:
    // 0x22d0d0: 0x1435821  addu        $t3, $t2, $v1
    ctx->pc = 0x22d0d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_22d0d4:
    // 0x22d0d4: 0x1486001c  bne         $a0, $a2, . + 4 + (0x1C << 2)
label_22d0d8:
    if (ctx->pc == 0x22D0D8u) {
        ctx->pc = 0x22D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D4u;
        // 0x22d0d8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0DCu;
        goto label_22d0dc;
    }
    ctx->pc = 0x22D0D4u;
    {
        const bool branch_taken_0x22d0d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x22D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0D4u;
        // 0x22d0d8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0d4) {
            ctx->pc = 0x22D148u;
            goto label_22d148;
        }
    }
    ctx->pc = 0x22D0DCu;
label_22d0dc:
    // 0x22d0dc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_22d0e0:
    // 0x22d0e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22d0e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22d0e4:
    // 0x22d0e4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22d0e8:
    // 0x22d0e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22d0ec:
    // 0x22d0ec: 0x19200024  blez        $t1, . + 4 + (0x24 << 2)
label_22d0f0:
    if (ctx->pc == 0x22D0F0u) {
        ctx->pc = 0x22D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0ECu;
        // 0x22d0f0: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D0F4u;
        goto label_22d0f4;
    }
    ctx->pc = 0x22D0ECu;
    {
        const bool branch_taken_0x22d0ec = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D0ECu;
        // 0x22d0f0: 0x1426021  addu        $t4, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d0ec) {
            ctx->pc = 0x22D180u;
            goto label_22d180;
        }
    }
    ctx->pc = 0x22D0F4u;
label_22d0f4:
    // 0x22d0f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22d0f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22d0f8:
    // 0x22d0f8: 0x340aff80  ori         $t2, $zero, 0xFF80
    ctx->pc = 0x22d0f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_22d0fc:
    // 0x22d0fc: 0x0  nop
    ctx->pc = 0x22d0fcu;
    // NOP
label_22d100:
    // 0x22d100: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x22d100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_22d104:
    // 0x22d104: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x22d104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_22d108:
    // 0x22d108: 0x8b2821  addu        $a1, $a0, $t3
    ctx->pc = 0x22d108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_22d10c:
    // 0x22d10c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x22d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_22d110:
    // 0x22d110: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22d114:
    // 0x22d114: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22d114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22d118:
    // 0x22d118: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22d118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22d11c:
    // 0x22d11c: 0x109302a  slt         $a2, $t0, $t1
    ctx->pc = 0x22d11cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d120:
    // 0x22d120: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22d120u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22d124:
    // 0x22d124: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x22d124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_22d128:
    // 0x22d128: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x22d128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_22d12c:
    // 0x22d12c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x22d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_22d130:
    // 0x22d130: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22d134:
    // 0x22d134: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_22d138:
    if (ctx->pc == 0x22D138u) {
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D13Cu;
        goto label_22d13c;
    }
    ctx->pc = 0x22D134u;
    {
        const bool branch_taken_0x22d134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D134u;
        // 0x22d138: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d134) {
            ctx->pc = 0x22D100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d100;
        }
    }
    ctx->pc = 0x22D13Cu;
label_22d13c:
    // 0x22d13c: 0x10000010  b           . + 4 + (0x10 << 2)
label_22d140:
    if (ctx->pc == 0x22D140u) {
        ctx->pc = 0x22D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D13Cu;
        // 0x22d140: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D144u;
        goto label_22d144;
    }
    ctx->pc = 0x22D13Cu;
    {
        const bool branch_taken_0x22d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D13Cu;
        // 0x22d140: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d13c) {
            ctx->pc = 0x22D180u;
            goto label_22d180;
        }
    }
    ctx->pc = 0x22D144u;
label_22d144:
    // 0x22d144: 0x0  nop
    ctx->pc = 0x22d144u;
    // NOP
label_22d148:
    // 0x22d148: 0x1920000d  blez        $t1, . + 4 + (0xD << 2)
label_22d14c:
    if (ctx->pc == 0x22D14Cu) {
        ctx->pc = 0x22D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D148u;
        // 0x22d14c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D150u;
        goto label_22d150;
    }
    ctx->pc = 0x22D148u;
    {
        const bool branch_taken_0x22d148 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D148u;
        // 0x22d14c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d148) {
            ctx->pc = 0x22D180u;
            goto label_22d180;
        }
    }
    ctx->pc = 0x22D150u;
label_22d150:
    // 0x22d150: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x22d150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_22d154:
    // 0x22d154: 0x3406ff80  ori         $a2, $zero, 0xFF80
    ctx->pc = 0x22d154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
label_22d158:
    // 0x22d158: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x22d158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_22d15c:
    // 0x22d15c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22d15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22d160:
    // 0x22d160: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x22d160u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22d164:
    // 0x22d164: 0x109202a  slt         $a0, $t0, $t1
    ctx->pc = 0x22d164u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_22d168:
    // 0x22d168: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_22d16c:
    // 0x22d16c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x22d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_22d170:
    // 0x22d170: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x22d170u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_22d174:
    // 0x22d174: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_22d178:
    if (ctx->pc == 0x22D178u) {
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D17Cu;
        goto label_22d17c;
    }
    ctx->pc = 0x22D174u;
    {
        const bool branch_taken_0x22d174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D174u;
        // 0x22d178: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d174) {
            ctx->pc = 0x22D158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22d158;
        }
    }
    ctx->pc = 0x22D17Cu;
label_22d17c:
    // 0x22d17c: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x22d17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22d180:
    // 0x22d180: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x22d180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_22d184:
    // 0x22d184: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d188:
    // 0x22d188: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x22d188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_22d18c:
    // 0x22d18c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x22d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_22d190:
    // 0x22d190: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x22d190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_22d194:
    // 0x22d194: 0xae090090  sw          $t1, 0x90($s0)
    ctx->pc = 0x22d194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 9));
label_22d198:
    // 0x22d198: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x22d198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_22d19c:
    // 0x22d19c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22d1a0:
    // 0x22d1a0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_22d1a4:
    if (ctx->pc == 0x22D1A4u) {
        ctx->pc = 0x22D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1A0u;
        // 0x22d1a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1A8u;
        goto label_22d1a8;
    }
    ctx->pc = 0x22D1A0u;
    {
        const bool branch_taken_0x22d1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22d1a0) {
            ctx->pc = 0x22D1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D1A0u;
            // 0x22d1a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D1C8u;
            goto label_22d1c8;
        }
    }
    ctx->pc = 0x22D1A8u;
label_22d1a8:
    // 0x22d1a8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x22d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_22d1ac:
    // 0x22d1ac: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x22d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22d1b0:
    // 0x22d1b0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x22d1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_22d1b4:
    // 0x22d1b4: 0x60f809  jalr        $v1
label_22d1b8:
    if (ctx->pc == 0x22D1B8u) {
        ctx->pc = 0x22D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1B4u;
        // 0x22d1b8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1BCu;
        goto label_22d1bc;
    }
    ctx->pc = 0x22D1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22D1BCu);
        ctx->pc = 0x22D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1B4u;
        // 0x22d1b8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1B4u, 0x22D1BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D1BCu;
label_22d1bc:
    // 0x22d1bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d1c0:
    // 0x22d1c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x22d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_22d1c4:
    // 0x22d1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22d1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d1c8:
    // 0x22d1c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22d1c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22d1cc:
    // 0x22d1cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22d1d0:
    // 0x22d1d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22d1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_22d1d4:
    // 0x22d1d4: 0x3e00008  jr          $ra
label_22d1d8:
    if (ctx->pc == 0x22D1D8u) {
        ctx->pc = 0x22D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D4u;
        // 0x22d1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D1DCu;
        goto label_fallthrough_0x22d1d4;
    }
    ctx->pc = 0x22D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D1D4u;
        // 0x22d1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d1d4:
    ctx->pc = 0x22D1DCu;
}
