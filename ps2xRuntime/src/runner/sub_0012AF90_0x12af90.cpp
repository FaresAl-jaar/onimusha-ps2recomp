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

// Function: sub_0012AF90
// Address: 0x12af90 - 0x12b138
void sub_0012AF90_0x12af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AF90_0x12af90");
#endif

    switch (ctx->pc) {
        case 0x12b01cu: goto label_12b01c;
        case 0x12b048u: goto label_12b048;
        case 0x12b090u: goto label_12b090;
        case 0x12b0b4u: goto label_12b0b4;
        case 0x12b0d8u: goto label_12b0d8;
        case 0x12b0f4u: goto label_12b0f4;
        default: break;
    }

    ctx->pc = 0x12af90u;

    // 0x12af90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12af94: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12af94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12af98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12af9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12af9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12afa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12afa4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x12afa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afa8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12afac: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x12afacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afb0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12afb4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x12afb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12afb8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12afb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12afbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x12afbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afc0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12afc4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12afc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afc8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12afc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12afcc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12afccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afd0: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12afd4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x12afd4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afd8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12afdc: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x12afdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12afe0: 0x114f0008  beq         $t2, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AFE0u;
    {
        const bool branch_taken_0x12afe0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFE0u;
        // 0x12afe4: 0x160f02d  daddu       $fp, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afe0) {
            ctx->pc = 0x12B004u;
            goto label_12b004;
        }
    }
    ctx->pc = 0x12AFE8u;
    // 0x12afe8: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12afe8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12afec: 0x114f0003  beq         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFECu;
    {
        const bool branch_taken_0x12afec = (GPR_U64(ctx, 10) == GPR_U64(ctx, 15));
        ctx->pc = 0x12AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFECu;
        // 0x12aff0: 0x240f0045  addiu       $t7, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12afec) {
            ctx->pc = 0x12AFFCu;
            goto label_12affc;
        }
    }
    ctx->pc = 0x12AFF4u;
    // 0x12aff4: 0x154f0003  bne         $t2, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AFF4u;
    {
        const bool branch_taken_0x12aff4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 15));
        ctx->pc = 0x12AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AFF4u;
        // 0x12aff8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aff4) {
            ctx->pc = 0x12B004u;
            goto label_12b004;
        }
    }
    ctx->pc = 0x12AFFCu;
label_12affc:
    // 0x12affc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12affcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x12b000: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x12b000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12b004:
    // 0x12b004: 0x13783f  dsra32      $t7, $s3, 0
    ctx->pc = 0x12b004u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x12b008: 0x5e30007  bgezl       $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B008u;
    {
        const bool branch_taken_0x12b008 = (GPR_S64(ctx, 15) >= 0);
        if (branch_taken_0x12b008) {
            ctx->pc = 0x12B00Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B008u;
            // 0x12b00c: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B028u;
            goto label_12b028;
        }
    }
    ctx->pc = 0x12B010u;
    // 0x12b010: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b014: 0xc04ba4c  jal         func_12E930
    ctx->pc = 0x12B014u;
    SET_GPR_U32(ctx, 31, 0x12B01Cu);
    ctx->pc = 0x12B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B014u;
    // 0x12b018: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E930u, 0x12B014u, 0x12B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B01Cu;
label_12b01c:
    // 0x12b01c: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12b01cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12b020: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12b020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b024: 0xa20f0000  sb          $t7, 0x0($s0)
    ctx->pc = 0x12b024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 15));
label_12b028:
    // 0x12b028: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12b028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b02c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12b02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b030: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b034: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x12b034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b038: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x12b038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b03c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x12b03cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b040: 0xc0489c0  jal         func_122700
    ctx->pc = 0x12B040u;
    SET_GPR_U32(ctx, 31, 0x12B048u);
    ctx->pc = 0x12B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B040u;
    // 0x12b044: 0x27aa0004  addiu       $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122700u, 0x12B040u, 0x12B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B048u;
label_12b048:
    // 0x12b048: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12b048u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12b04c: 0x122f0004  beq         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B04Cu;
    {
        const bool branch_taken_0x12b04c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B04Cu;
        // 0x12b050: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b04c) {
            ctx->pc = 0x12B060u;
            goto label_12b060;
        }
    }
    ctx->pc = 0x12B054u;
    // 0x12b054: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12b054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12b058: 0x162f0004  bne         $s1, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B058u;
    {
        const bool branch_taken_0x12b058 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B058u;
        // 0x12b05c: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b058) {
            ctx->pc = 0x12B06Cu;
            goto label_12b06c;
        }
    }
    ctx->pc = 0x12B060u;
label_12b060:
    // 0x12b060: 0x32ef0001  andi        $t7, $s7, 0x1
    ctx->pc = 0x12b060u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x12b064: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x12B064u;
    {
        const bool branch_taken_0x12b064 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B064u;
        // 0x12b068: 0x240f0066  addiu       $t7, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b064) {
            ctx->pc = 0x12B130u;
            goto label_12b130;
        }
    }
    ctx->pc = 0x12B06Cu;
label_12b06c:
    // 0x12b06c: 0x162f000e  bne         $s1, $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x12B06Cu;
    {
        const bool branch_taken_0x12b06c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B06Cu;
        // 0x12b070: 0x2548021  addu        $s0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b06c) {
            ctx->pc = 0x12B0A8u;
            goto label_12b0a8;
        }
    }
    ctx->pc = 0x12B074u;
    // 0x12b074: 0x824e0000  lb          $t6, 0x0($s2)
    ctx->pc = 0x12b074u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12b078: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12b078u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12b07c: 0x55cf0009  bnel        $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B07Cu;
    {
        const bool branch_taken_0x12b07c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b07c) {
            ctx->pc = 0x12B080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B07Cu;
            // 0x12b080: 0x8eaf0000  lw          $t7, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B0A4u;
            goto label_12b0a4;
        }
    }
    ctx->pc = 0x12B084u;
    // 0x12b084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b088: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12B088u;
    SET_GPR_U32(ctx, 31, 0x12B090u);
    ctx->pc = 0x12B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B088u;
    // 0x12b08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12B088u, 0x12B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B090u;
label_12b090:
    // 0x12b090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B090u;
    {
        const bool branch_taken_0x12b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B090u;
        // 0x12b094: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b090) {
            ctx->pc = 0x12B0A0u;
            goto label_12b0a0;
        }
    }
    ctx->pc = 0x12B098u;
    // 0x12b098: 0x1f47823  subu        $t7, $t7, $s4
    ctx->pc = 0x12b098u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 20)));
    // 0x12b09c: 0xaeaf0000  sw          $t7, 0x0($s5)
    ctx->pc = 0x12b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 15));
label_12b0a0:
    // 0x12b0a0: 0x8eaf0000  lw          $t7, 0x0($s5)
    ctx->pc = 0x12b0a0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_12b0a4:
    // 0x12b0a4: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x12b0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
label_12b0a8:
    // 0x12b0a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12b0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b0ac: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12B0ACu;
    SET_GPR_U32(ctx, 31, 0x12B0B4u);
    ctx->pc = 0x12B0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B0ACu;
    // 0x12b0b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12B0ACu, 0x12B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B0B4u;
label_12b0b4:
    // 0x12b0b4: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12b0b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12b0b8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x12b0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x12b0bc: 0x202780a  movz        $t7, $s0, $v0
    ctx->pc = 0x12b0bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 16));
    // 0x12b0c0: 0xafaf0004  sw          $t7, 0x4($sp)
    ctx->pc = 0x12b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
    // 0x12b0c4: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12b0c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12b0c8: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12b0c8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12b0cc: 0x11e00009  beqz        $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B0CCu;
    {
        const bool branch_taken_0x12b0cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0CCu;
        // 0x12b0d0: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0cc) {
            ctx->pc = 0x12B0F4u;
            goto label_12b0f4;
        }
    }
    ctx->pc = 0x12B0D4u;
    // 0x12b0d4: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x12b0d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_12b0d8:
    // 0x12b0d8: 0xa1ac0000  sb          $t4, 0x0($t5)
    ctx->pc = 0x12b0d8u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 12));
    // 0x12b0dc: 0x25ae0001  addiu       $t6, $t5, 0x1
    ctx->pc = 0x12b0dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12b0e0: 0x1d0782b  sltu        $t7, $t6, $s0
    ctx->pc = 0x12b0e0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x12b0e4: 0xafae0004  sw          $t6, 0x4($sp)
    ctx->pc = 0x12b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 14));
    // 0x12b0e8: 0x0  nop
    ctx->pc = 0x12b0e8u;
    // NOP
    // 0x12b0ec: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B0ECu;
    {
        const bool branch_taken_0x12b0ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B0ECu;
        // 0x12b0f0: 0x1c0682d  daddu       $t5, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b0ec) {
            ctx->pc = 0x12B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b0d8;
        }
    }
    ctx->pc = 0x12B0F4u;
label_12b0f4:
    // 0x12b0f4: 0x1d27823  subu        $t7, $t6, $s2
    ctx->pc = 0x12b0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x12b0f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12b0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b0fc: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x12b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x12b100: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12b100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b104: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12b104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12b108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b10c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12b10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12b110: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12b110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b114: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12b114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b118: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12b118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b11c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12b11cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b120: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12b120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b124: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12b128: 0x3e00008  jr          $ra
    ctx->pc = 0x12B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B128u;
        // 0x12b12c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B130u;
label_12b130:
    // 0x12b130: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12B130u;
    {
        const bool branch_taken_0x12b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B130u;
        // 0x12b134: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b130) {
            ctx->pc = 0x12B0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b0f4;
        }
    }
    ctx->pc = 0x12B138u;
}
