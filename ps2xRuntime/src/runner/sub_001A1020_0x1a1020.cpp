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

// Function: sub_001A1020
// Address: 0x1a1020 - 0x1a12f0
void sub_001A1020_0x1a1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1020_0x1a1020");
#endif

    switch (ctx->pc) {
        case 0x1a1198u: goto label_1a1198;
        case 0x1a1238u: goto label_1a1238;
        case 0x1a1250u: goto label_1a1250;
        case 0x1a1260u: goto label_1a1260;
        case 0x1a1298u: goto label_1a1298;
        default: break;
    }

    ctx->pc = 0x1a1020u;

    // 0x1a1020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a1024: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a1024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a1028: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a1028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1a102c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a1030: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a1034: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a1034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a1038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a103c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1040: 0x902829e3  lbu         $t0, 0x29E3($at)
    ctx->pc = 0x1a1040u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x8129E3u));
    // 0x1a1044: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a1044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1048: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x1a1048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a104c: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x1a104cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a1050: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a1050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a1054: 0x902329e2  lbu         $v1, 0x29E2($at)
    ctx->pc = 0x1a1054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8129E2u));
    // 0x1a1058: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a1058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a105c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1a105cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1a1060: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1a1060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1064: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x1a1064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1a1068: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1068u;
    {
        const bool branch_taken_0x1a1068 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1068u;
        // 0x1a106c: 0x8d080040  lw          $t0, 0x40($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1068) {
            ctx->pc = 0x1A1080u;
            goto label_1a1080;
        }
    }
    ctx->pc = 0x1A1070u;
    // 0x1a1070: 0x24090f00  addiu       $t1, $zero, 0xF00
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1a1074: 0x10c90018  beq         $a2, $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A1074u;
    {
        const bool branch_taken_0x1a1074 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a1074) {
            ctx->pc = 0x1A10D8u;
            goto label_1a10d8;
        }
    }
    ctx->pc = 0x1A107Cu;
    // 0x1a107c: 0x0  nop
    ctx->pc = 0x1a107cu;
    // NOP
label_1a1080:
    // 0x1a1080: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1080u;
    {
        const bool branch_taken_0x1a1080 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1080u;
        // 0x1a1084: 0x24090f04  addiu       $t1, $zero, 0xF04 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3844));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1080) {
            ctx->pc = 0x1A1090u;
            goto label_1a1090;
        }
    }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x10c90013  beq         $a2, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1088u;
    {
        const bool branch_taken_0x1a1088 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a1088) {
            ctx->pc = 0x1A10D8u;
            goto label_1a10d8;
        }
    }
    ctx->pc = 0x1A1090u;
label_1a1090:
    // 0x1a1090: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1094: 0x14e90004  bne         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1094u;
    {
        const bool branch_taken_0x1a1094 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1094u;
        // 0x1a1098: 0x24090f07  addiu       $t1, $zero, 0xF07 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1094) {
            ctx->pc = 0x1A10A8u;
            goto label_1a10a8;
        }
    }
    ctx->pc = 0x1A109Cu;
    // 0x1a109c: 0x10c9000e  beq         $a2, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A109Cu;
    {
        const bool branch_taken_0x1a109c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a109c) {
            ctx->pc = 0x1A10D8u;
            goto label_1a10d8;
        }
    }
    ctx->pc = 0x1A10A4u;
    // 0x1a10a4: 0x0  nop
    ctx->pc = 0x1a10a4u;
    // NOP
label_1a10a8:
    // 0x1a10a8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a10a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a10ac: 0x14e90004  bne         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A10ACu;
    {
        const bool branch_taken_0x1a10ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10ACu;
        // 0x1a10b0: 0x24090f1c  addiu       $t1, $zero, 0xF1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3868));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10ac) {
            ctx->pc = 0x1A10C0u;
            goto label_1a10c0;
        }
    }
    ctx->pc = 0x1A10B4u;
    // 0x1a10b4: 0x10c90008  beq         $a2, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A10B4u;
    {
        const bool branch_taken_0x1a10b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a10b4) {
            ctx->pc = 0x1A10D8u;
            goto label_1a10d8;
        }
    }
    ctx->pc = 0x1A10BCu;
    // 0x1a10bc: 0x0  nop
    ctx->pc = 0x1a10bcu;
    // NOP
label_1a10c0:
    // 0x1a10c0: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1a10c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a10c4: 0x14e90008  bne         $a3, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A10C4u;
    {
        const bool branch_taken_0x1a10c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A10C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10C4u;
        // 0x1a10c8: 0x240900a6  addiu       $t1, $zero, 0xA6 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10c4) {
            ctx->pc = 0x1A10E8u;
            goto label_1a10e8;
        }
    }
    ctx->pc = 0x1A10CCu;
    // 0x1a10cc: 0x14c90006  bne         $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A10CCu;
    {
        const bool branch_taken_0x1a10cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        if (branch_taken_0x1a10cc) {
            ctx->pc = 0x1A10E8u;
            goto label_1a10e8;
        }
    }
    ctx->pc = 0x1A10D4u;
    // 0x1a10d4: 0x0  nop
    ctx->pc = 0x1a10d4u;
    // NOP
label_1a10d8:
    // 0x1a10d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a10dc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a10e0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1A10E0u;
    {
        const bool branch_taken_0x1a10e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10E0u;
        // 0x1a10e4: 0x8c680080  lw          $t0, 0x80($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e0) {
            ctx->pc = 0x1A1188u;
            goto label_1a1188;
        }
    }
    ctx->pc = 0x1A10E8u;
label_1a10e8:
    // 0x1a10e8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A10E8u;
    {
        const bool branch_taken_0x1a10e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10E8u;
        // 0x1a10ec: 0x24090f01  addiu       $t1, $zero, 0xF01 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10e8) {
            ctx->pc = 0x1A10F8u;
            goto label_1a10f8;
        }
    }
    ctx->pc = 0x1A10F0u;
    // 0x1a10f0: 0x10c90007  beq         $a2, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A10F0u;
    {
        const bool branch_taken_0x1a10f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a10f0) {
            ctx->pc = 0x1A1110u;
            goto label_1a1110;
        }
    }
    ctx->pc = 0x1A10F8u;
label_1a10f8:
    // 0x1a10f8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a10f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a10fc: 0x14e90008  bne         $a3, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A10FCu;
    {
        const bool branch_taken_0x1a10fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A1100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A10FCu;
        // 0x1a1100: 0x24090f1d  addiu       $t1, $zero, 0xF1D (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3869));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a10fc) {
            ctx->pc = 0x1A1120u;
            goto label_1a1120;
        }
    }
    ctx->pc = 0x1A1104u;
    // 0x1a1104: 0x14c90006  bne         $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1104u;
    {
        const bool branch_taken_0x1a1104 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        if (branch_taken_0x1a1104) {
            ctx->pc = 0x1A1120u;
            goto label_1a1120;
        }
    }
    ctx->pc = 0x1A110Cu;
    // 0x1a110c: 0x0  nop
    ctx->pc = 0x1a110cu;
    // NOP
label_1a1110:
    // 0x1a1110: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a1110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a1114: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a1114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1118: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A1118u;
    {
        const bool branch_taken_0x1a1118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1118u;
        // 0x1a111c: 0x8c680100  lw          $t0, 0x100($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1118) {
            ctx->pc = 0x1A1188u;
            goto label_1a1188;
        }
    }
    ctx->pc = 0x1A1120u;
label_1a1120:
    // 0x1a1120: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1120u;
    {
        const bool branch_taken_0x1a1120 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1120u;
        // 0x1a1124: 0x24090f02  addiu       $t1, $zero, 0xF02 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1120) {
            ctx->pc = 0x1A1130u;
            goto label_1a1130;
        }
    }
    ctx->pc = 0x1A1128u;
    // 0x1a1128: 0x10c90013  beq         $a2, $t1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1128u;
    {
        const bool branch_taken_0x1a1128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a1128) {
            ctx->pc = 0x1A1178u;
            goto label_1a1178;
        }
    }
    ctx->pc = 0x1A1130u;
label_1a1130:
    // 0x1a1130: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1a1130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1134: 0x14e90004  bne         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1134u;
    {
        const bool branch_taken_0x1a1134 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1134u;
        // 0x1a1138: 0x24090f02  addiu       $t1, $zero, 0xF02 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3842));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1134) {
            ctx->pc = 0x1A1148u;
            goto label_1a1148;
        }
    }
    ctx->pc = 0x1A113Cu;
    // 0x1a113c: 0x10c9000e  beq         $a2, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x1A113Cu;
    {
        const bool branch_taken_0x1a113c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a113c) {
            ctx->pc = 0x1A1178u;
            goto label_1a1178;
        }
    }
    ctx->pc = 0x1A1144u;
    // 0x1a1144: 0x0  nop
    ctx->pc = 0x1a1144u;
    // NOP
label_1a1148:
    // 0x1a1148: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1a1148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a114c: 0x14e90004  bne         $a3, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A114Cu;
    {
        const bool branch_taken_0x1a114c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A114Cu;
        // 0x1a1150: 0x24090f1e  addiu       $t1, $zero, 0xF1E (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3870));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a114c) {
            ctx->pc = 0x1A1160u;
            goto label_1a1160;
        }
    }
    ctx->pc = 0x1A1154u;
    // 0x1a1154: 0x10c90008  beq         $a2, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1154u;
    {
        const bool branch_taken_0x1a1154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a1154) {
            ctx->pc = 0x1A1178u;
            goto label_1a1178;
        }
    }
    ctx->pc = 0x1A115Cu;
    // 0x1a115c: 0x0  nop
    ctx->pc = 0x1a115cu;
    // NOP
label_1a1160:
    // 0x1a1160: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x1a1160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a1164: 0x14e90008  bne         $a3, $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1164u;
    {
        const bool branch_taken_0x1a1164 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1A1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1164u;
        // 0x1a1168: 0x240900b0  addiu       $t1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1164) {
            ctx->pc = 0x1A1188u;
            goto label_1a1188;
        }
    }
    ctx->pc = 0x1A116Cu;
    // 0x1a116c: 0x14c90006  bne         $a2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A116Cu;
    {
        const bool branch_taken_0x1a116c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        if (branch_taken_0x1a116c) {
            ctx->pc = 0x1A1188u;
            goto label_1a1188;
        }
    }
    ctx->pc = 0x1A1174u;
    // 0x1a1174: 0x0  nop
    ctx->pc = 0x1a1174u;
    // NOP
label_1a1178:
    // 0x1a1178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a117c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1a117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a1180: 0x8c680140  lw          $t0, 0x140($v1)
    ctx->pc = 0x1a1180u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1a1184: 0x0  nop
    ctx->pc = 0x1a1184u;
    // NOP
label_1a1188:
    // 0x1a1188: 0x15000049  bnez        $t0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1A1188u;
    {
        const bool branch_taken_0x1a1188 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1188) {
            ctx->pc = 0x1A12B0u;
            goto label_1a12b0;
        }
    }
    ctx->pc = 0x1A1190u;
    // 0x1a1190: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1A1190u;
    {
        const bool branch_taken_0x1a1190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1190) {
            ctx->pc = 0x1A12D0u;
            goto label_1a12d0;
        }
    }
    ctx->pc = 0x1A1198u;
label_1a1198:
    // 0x1a1198: 0x146d003b  bne         $v1, $t5, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A1198u;
    {
        const bool branch_taken_0x1a1198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 13));
        if (branch_taken_0x1a1198) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A11A0u;
    // 0x1a11a0: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x1a11a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1a11a4: 0x146c0038  bne         $v1, $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x1A11A4u;
    {
        const bool branch_taken_0x1a11a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 12));
        if (branch_taken_0x1a11a4) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A11ACu;
    // 0x1a11ac: 0x91030008  lbu         $v1, 0x8($t0)
    ctx->pc = 0x1a11acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1a11b0: 0x14670035  bne         $v1, $a3, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A11B0u;
    {
        const bool branch_taken_0x1a11b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a11b0) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A11B8u;
    // 0x1a11b8: 0x91030009  lbu         $v1, 0x9($t0)
    ctx->pc = 0x1a11b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 9)));
    // 0x1a11bc: 0x14660032  bne         $v1, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x1A11BCu;
    {
        const bool branch_taken_0x1a11bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1a11bc) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A11C4u;
    // 0x1a11c4: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A11C4u;
    {
        const bool branch_taken_0x1a11c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a11c4) {
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A11CCu;
    // 0x1a11cc: 0x14ec0004  bne         $a3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A11CCu;
    {
        const bool branch_taken_0x1a11cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        if (branch_taken_0x1a11cc) {
            ctx->pc = 0x1A11E0u;
            goto label_1a11e0;
        }
    }
    ctx->pc = 0x1A11D4u;
    // 0x1a11d4: 0x10cb000e  beq         $a2, $t3, . + 4 + (0xE << 2)
    ctx->pc = 0x1A11D4u;
    {
        const bool branch_taken_0x1a11d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x1a11d4) {
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A11DCu;
    // 0x1a11dc: 0x0  nop
    ctx->pc = 0x1a11dcu;
    // NOP
label_1a11e0:
    // 0x1a11e0: 0x14ea0003  bne         $a3, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A11E0u;
    {
        const bool branch_taken_0x1a11e0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a11e0) {
            ctx->pc = 0x1A11F0u;
            goto label_1a11f0;
        }
    }
    ctx->pc = 0x1A11E8u;
    // 0x1a11e8: 0x10c90009  beq         $a2, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A11E8u;
    {
        const bool branch_taken_0x1a11e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a11e8) {
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A11F0u;
label_1a11f0:
    // 0x1a11f0: 0x14ea0003  bne         $a3, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A11F0u;
    {
        const bool branch_taken_0x1a11f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x1a11f0) {
            ctx->pc = 0x1A1200u;
            goto label_1a1200;
        }
    }
    ctx->pc = 0x1A11F8u;
    // 0x1a11f8: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A11F8u;
    {
        const bool branch_taken_0x1a11f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a11f8) {
            ctx->pc = 0x1A1210u;
            goto label_1a1210;
        }
    }
    ctx->pc = 0x1A1200u;
label_1a1200:
    // 0x1a1200: 0x9104000a  lbu         $a0, 0xA($t0)
    ctx->pc = 0x1a1200u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x1a1204: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1a1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a1208: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A1208u;
    {
        const bool branch_taken_0x1a1208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1208) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A1210u;
label_1a1210:
    // 0x1a1210: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a1210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1214: 0x9103000b  lbu         $v1, 0xB($t0)
    ctx->pc = 0x1a1214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x1a1218: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A1218u;
    {
        const bool branch_taken_0x1a1218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1218) {
            ctx->pc = 0x1A1288u;
            goto label_1a1288;
        }
    }
    ctx->pc = 0x1A1220u;
    // 0x1a1220: 0x8e130020  lw          $s3, 0x20($s0)
    ctx->pc = 0x1a1220u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a1224: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x1a1224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1a1228: 0x25120010  addiu       $s2, $t0, 0x10
    ctx->pc = 0x1a1228u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1a122c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A122Cu;
    {
        const bool branch_taken_0x1a122c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A122Cu;
        // 0x1a1230: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a122c) {
            ctx->pc = 0x1A1280u;
            goto label_1a1280;
        }
    }
    ctx->pc = 0x1A1234u;
    // 0x1a1234: 0x0  nop
    ctx->pc = 0x1a1234u;
    // NOP
label_1a1238:
    // 0x1a1238: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1a123c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1a123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a1240: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a1240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1244: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x1a1244u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1a1248: 0xc049522  jal         func_125488
    ctx->pc = 0x1A1248u;
    SET_GPR_U32(ctx, 31, 0x1A1250u);
    ctx->pc = 0x1A124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1248u;
    // 0x1a124c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A1248u, 0x1A1250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1250u;
label_1a1250:
    // 0x1a1250: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1a1250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1a1254: 0x2542821  addu        $a1, $s2, $s4
    ctx->pc = 0x1a1254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x1a1258: 0xc049522  jal         func_125488
    ctx->pc = 0x1A1258u;
    SET_GPR_U32(ctx, 31, 0x1A1260u);
    ctx->pc = 0x1A125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1258u;
    // 0x1a125c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x1A1258u, 0x1A1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1260u;
label_1a1260:
    // 0x1a1260: 0x141840  sll         $v1, $s4, 1
    ctx->pc = 0x1a1260u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1a1264: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a1264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1a1268: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x1a1268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1a126c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1a1270: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1a1270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a1274: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1A1274u;
    {
        const bool branch_taken_0x1a1274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1274u;
        // 0x1a1278: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1274) {
            ctx->pc = 0x1A1238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1238;
        }
    }
    ctx->pc = 0x1A127Cu;
    // 0x1a127c: 0x0  nop
    ctx->pc = 0x1a127cu;
    // NOP
label_1a1280:
    // 0x1a1280: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A1280u;
    {
        const bool branch_taken_0x1a1280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1280) {
            ctx->pc = 0x1A12D0u;
            goto label_1a12d0;
        }
    }
    ctx->pc = 0x1A1288u;
label_1a1288:
    // 0x1a1288: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a128c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1a128cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1a1290: 0x24680010  addiu       $t0, $v1, 0x10
    ctx->pc = 0x1a1290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1a1294: 0x0  nop
    ctx->pc = 0x1a1294u;
    // NOP
label_1a1298:
    // 0x1a1298: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1a1298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1a129c: 0x1a3082a  slt         $at, $t5, $v1
    ctx->pc = 0x1a129cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a12a0: 0x1020ffbd  beqz        $at, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1A12A0u;
    {
        const bool branch_taken_0x1a12a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a0) {
            ctx->pc = 0x1A1198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1198;
        }
    }
    ctx->pc = 0x1A12A8u;
    // 0x1a12a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A12A8u;
    {
        const bool branch_taken_0x1a12a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a12a8) {
            ctx->pc = 0x1A12D0u;
            goto label_1a12d0;
        }
    }
    ctx->pc = 0x1A12B0u;
label_1a12b0:
    // 0x1a12b0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x1a12b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x1a12b4: 0x942d29e8  lhu         $t5, 0x29E8($at)
    ctx->pc = 0x1a12b4u;
    SET_GPR_ZE32(ctx, 13, (uint16_t)FAST_READ16(0x8129E8u));
    // 0x1a12b8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1a12b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a12bc: 0x24050f1d  addiu       $a1, $zero, 0xF1D
    ctx->pc = 0x1a12bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3869));
    // 0x1a12c0: 0x24090f1c  addiu       $t1, $zero, 0xF1C
    ctx->pc = 0x1a12c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3868));
    // 0x1a12c4: 0x240b0f07  addiu       $t3, $zero, 0xF07
    ctx->pc = 0x1a12c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3847));
    // 0x1a12c8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1A12C8u;
    {
        const bool branch_taken_0x1a12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12C8u;
        // 0x1a12cc: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a12c8) {
            ctx->pc = 0x1A1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1298;
        }
    }
    ctx->pc = 0x1A12D0u;
label_1a12d0:
    // 0x1a12d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a12d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a12d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a12d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a12d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a12d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a12dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a12dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a12e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a12e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a12e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a12e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a12e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A12E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A12E8u;
        // 0x1a12ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A12E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A12F0u;
}
