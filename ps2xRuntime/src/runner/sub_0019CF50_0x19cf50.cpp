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

// Function: sub_0019CF50
// Address: 0x19cf50 - 0x19d160
void sub_0019CF50_0x19cf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CF50_0x19cf50");
#endif

    switch (ctx->pc) {
        case 0x19cffcu: goto label_19cffc;
        case 0x19d008u: goto label_19d008;
        case 0x19d054u: goto label_19d054;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0a8u: goto label_19d0a8;
        case 0x19d138u: goto label_19d138;
        default: break;
    }

    ctx->pc = 0x19cf50u;

    // 0x19cf50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19cf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19cf54: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19cf58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19cf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19cf5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19cf60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19cf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19cf64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19cf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19cf68: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x19cf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19cf6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19cf70: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19cf70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19cf74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19cf78: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x19cf7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19cf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19cf80: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x19cf80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19cf84: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x19cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x19cf88: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x19cf88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x19cf8c: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x19cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x19cf90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cf94: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x19cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x19cf98: 0x3c02873c  lui         $v0, 0x873C
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34620 << 16));
    // 0x19cf9c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x19cf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x19cfa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19cfa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfa4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x19cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x19cfa8: 0x2631f750  addiu       $s1, $s1, -0x8B0
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965072));
    // 0x19cfac: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x19cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x19cfb0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x19cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x19cfb4: 0x8c25f004  lw          $a1, -0xFFC($at)
    ctx->pc = 0x19cfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963204)));
    // 0x19cfb8: 0x3443a9e5  ori         $v1, $v0, 0xA9E5
    ctx->pc = 0x19cfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43493);
    // 0x19cfbc: 0x3402fde8  ori         $v0, $zero, 0xFDE8
    ctx->pc = 0x19cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65000);
    // 0x19cfc0: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19cfc4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x19cfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x19cfc8: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19cfcc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x19cfd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19cfd4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x19cfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x19cfd8: 0xac23f004  sw          $v1, -0xFFC($at)
    ctx->pc = 0x19cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963204), GPR_U32(ctx, 3));
    // 0x19cfdc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x19cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x19cfe0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x19cfe0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x19cfe4: 0x0  nop
    ctx->pc = 0x19cfe4u;
    // NOP
    // 0x19cfe8: 0x0  nop
    ctx->pc = 0x19cfe8u;
    // NOP
    // 0x19cfec: 0x1010  mfhi        $v0
    ctx->pc = 0x19cfecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19cff0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x19cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x19cff4: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19CFF4u;
    SET_GPR_U32(ctx, 31, 0x19CFFCu);
    ctx->pc = 0x19CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFF4u;
    // 0x19cff8: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19CFF4u, 0x19CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFFCu;
label_19cffc:
    // 0x19cffc: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x19cffcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d000: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x19D000u;
    {
        const bool branch_taken_0x19d000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d000) {
            ctx->pc = 0x19D060u;
            goto label_19d060;
        }
    }
    ctx->pc = 0x19D008u;
label_19d008:
    // 0x19d008: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x19d008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19d00c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x19d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19d010: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19D010u;
    {
        const bool branch_taken_0x19d010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d010) {
            ctx->pc = 0x19D048u;
            goto label_19d048;
        }
    }
    ctx->pc = 0x19D018u;
    // 0x19d018: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x19d018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x19d01c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x19d020: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D020u;
    {
        const bool branch_taken_0x19d020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d020) {
            ctx->pc = 0x19D048u;
            goto label_19d048;
        }
    }
    ctx->pc = 0x19D028u;
    // 0x19d028: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x19d028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x19d02c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D02Cu;
    {
        const bool branch_taken_0x19d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d02c) {
            ctx->pc = 0x19D038u;
            goto label_19d038;
        }
    }
    ctx->pc = 0x19D034u;
    // 0x19d034: 0xae910018  sw          $s1, 0x18($s4)
    ctx->pc = 0x19d034u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 17));
label_19d038:
    // 0x19d038: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x19d038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x19d03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d040: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x19d040u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
    // 0x19d044: 0x0  nop
    ctx->pc = 0x19d044u;
    // NOP
label_19d048:
    // 0x19d048: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19d048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19d04c: 0xc071cd0  jal         func_1C7340
    ctx->pc = 0x19D04Cu;
    SET_GPR_U32(ctx, 31, 0x19D054u);
    ctx->pc = 0x19D050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D04Cu;
    // 0x19d050: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7340u, 0x19D04Cu, 0x19D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D054u;
label_19d054:
    // 0x19d054: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x19d054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d058: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19D058u;
    {
        const bool branch_taken_0x19d058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d058) {
            ctx->pc = 0x19D008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d008;
        }
    }
    ctx->pc = 0x19D060u;
label_19d060:
    // 0x19d060: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x19d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x19d064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D064u;
    {
        const bool branch_taken_0x19d064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D064u;
        // 0x19d068: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d064) {
            ctx->pc = 0x19D078u;
            goto label_19d078;
        }
    }
    ctx->pc = 0x19D06Cu;
    // 0x19d06c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x19D06Cu;
    {
        const bool branch_taken_0x19d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d06c) {
            ctx->pc = 0x19D140u;
            goto label_19d140;
        }
    }
    ctx->pc = 0x19D074u;
    // 0x19d074: 0x0  nop
    ctx->pc = 0x19d074u;
    // NOP
label_19d078:
    // 0x19d078: 0xae930020  sw          $s3, 0x20($s4)
    ctx->pc = 0x19d078u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 19));
    // 0x19d07c: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x19d080: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19d080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d084: 0x8e900018  lw          $s0, 0x18($s4)
    ctx->pc = 0x19d084u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x19d088: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x19d088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19d08c: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x19d08cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19d090: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x19D090u;
    {
        const bool branch_taken_0x19d090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D090u;
        // 0x19d094: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d090) {
            ctx->pc = 0x19D118u;
            goto label_19d118;
        }
    }
    ctx->pc = 0x19D098u;
    // 0x19d098: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19d098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d09c: 0x0  nop
    ctx->pc = 0x19d09cu;
    // NOP
label_19d0a0:
    // 0x19d0a0: 0xc067360  jal         func_19CD80
    ctx->pc = 0x19D0A0u;
    SET_GPR_U32(ctx, 31, 0x19D0A8u);
    ctx->pc = 0x19D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0A0u;
    // 0x19d0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CD80u, 0x19D0A0u, 0x19D0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0A8u;
label_19d0a8:
    // 0x19d0a8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x19d0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19d0ac: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x19d0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d0b0: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x19d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x19d0b4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19d0b8: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x19d0b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x19d0bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19d0c0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x19d0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x19d0c4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x19d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x19d0c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19d0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d0cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19d0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19d0d0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x19d0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x19d0d4: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x19d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19d0d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19d0dc: 0xac730004  sw          $s3, 0x4($v1)
    ctx->pc = 0x19d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x19d0e0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x19d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19d0e4: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x19d0e8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19d0ec: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x19d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x19d0f0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x19d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x19d0f4: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x19d0f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x19d0fc: 0xac73000c  sw          $s3, 0xC($v1)
    ctx->pc = 0x19d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 19));
    // 0x19d100: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x19d100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19d104: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x19d104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x19d108: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x19d108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19d10c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x19D10Cu;
    {
        const bool branch_taken_0x19d10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D10Cu;
        // 0x19d110: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d10c) {
            ctx->pc = 0x19D0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d0a0;
        }
    }
    ctx->pc = 0x19D114u;
    // 0x19d114: 0x0  nop
    ctx->pc = 0x19d114u;
    // NOP
label_19d118:
    // 0x19d118: 0x2664000f  addiu       $a0, $s3, 0xF
    ctx->pc = 0x19d118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x19d11c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x19d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x19d120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d124: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x19d124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x19d128: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x19d128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x19d12c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d130: 0xc06745c  jal         func_19D170
    ctx->pc = 0x19D130u;
    SET_GPR_U32(ctx, 31, 0x19D138u);
    ctx->pc = 0x19D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D130u;
    // 0x19d134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D170u, 0x19D130u, 0x19D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D138u;
label_19d138:
    // 0x19d138: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d13c: 0x0  nop
    ctx->pc = 0x19d13cu;
    // NOP
label_19d140:
    // 0x19d140: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19d140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19d144: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19d144u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19d148: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19d148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19d14c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19d14cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19d154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d158: 0x3e00008  jr          $ra
    ctx->pc = 0x19D158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D158u;
        // 0x19d15c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D160u;
}
