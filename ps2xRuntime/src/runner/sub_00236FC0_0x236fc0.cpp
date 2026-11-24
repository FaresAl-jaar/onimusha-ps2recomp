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

// Function: sub_00236FC0
// Address: 0x236fc0 - 0x2370c8
void sub_00236FC0_0x236fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236FC0_0x236fc0");
#endif

    switch (ctx->pc) {
        case 0x236fc0u: goto label_236fc0;
        case 0x236fc4u: goto label_236fc4;
        case 0x236fc8u: goto label_236fc8;
        case 0x236fccu: goto label_236fcc;
        case 0x236fd0u: goto label_236fd0;
        case 0x236fd4u: goto label_236fd4;
        case 0x236fd8u: goto label_236fd8;
        case 0x236fdcu: goto label_236fdc;
        case 0x236fe0u: goto label_236fe0;
        case 0x236fe4u: goto label_236fe4;
        case 0x236fe8u: goto label_236fe8;
        case 0x236fecu: goto label_236fec;
        case 0x236ff0u: goto label_236ff0;
        case 0x236ff4u: goto label_236ff4;
        case 0x236ff8u: goto label_236ff8;
        case 0x236ffcu: goto label_236ffc;
        case 0x237000u: goto label_237000;
        case 0x237004u: goto label_237004;
        case 0x237008u: goto label_237008;
        case 0x23700cu: goto label_23700c;
        case 0x237010u: goto label_237010;
        case 0x237014u: goto label_237014;
        case 0x237018u: goto label_237018;
        case 0x23701cu: goto label_23701c;
        case 0x237020u: goto label_237020;
        case 0x237024u: goto label_237024;
        case 0x237028u: goto label_237028;
        case 0x23702cu: goto label_23702c;
        case 0x237030u: goto label_237030;
        case 0x237034u: goto label_237034;
        case 0x237038u: goto label_237038;
        case 0x23703cu: goto label_23703c;
        case 0x237040u: goto label_237040;
        case 0x237044u: goto label_237044;
        case 0x237048u: goto label_237048;
        case 0x23704cu: goto label_23704c;
        case 0x237050u: goto label_237050;
        case 0x237054u: goto label_237054;
        case 0x237058u: goto label_237058;
        case 0x23705cu: goto label_23705c;
        case 0x237060u: goto label_237060;
        case 0x237064u: goto label_237064;
        case 0x237068u: goto label_237068;
        case 0x23706cu: goto label_23706c;
        case 0x237070u: goto label_237070;
        case 0x237074u: goto label_237074;
        case 0x237078u: goto label_237078;
        case 0x23707cu: goto label_23707c;
        case 0x237080u: goto label_237080;
        case 0x237084u: goto label_237084;
        case 0x237088u: goto label_237088;
        case 0x23708cu: goto label_23708c;
        case 0x237090u: goto label_237090;
        case 0x237094u: goto label_237094;
        case 0x237098u: goto label_237098;
        case 0x23709cu: goto label_23709c;
        case 0x2370a0u: goto label_2370a0;
        case 0x2370a4u: goto label_2370a4;
        case 0x2370a8u: goto label_2370a8;
        case 0x2370acu: goto label_2370ac;
        case 0x2370b0u: goto label_2370b0;
        case 0x2370b4u: goto label_2370b4;
        case 0x2370b8u: goto label_2370b8;
        case 0x2370bcu: goto label_2370bc;
        case 0x2370c0u: goto label_2370c0;
        case 0x2370c4u: goto label_2370c4;
        default: break;
    }

    ctx->pc = 0x236fc0u;

label_236fc0:
    // 0x236fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x236fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_236fc4:
    // 0x236fc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_236fc8:
    // 0x236fc8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x236fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_236fcc:
    // 0x236fcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x236fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_236fd0:
    // 0x236fd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x236fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_236fd4:
    // 0x236fd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x236fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_236fd8:
    // 0x236fd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x236fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_236fdc:
    // 0x236fdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x236fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_236fe0:
    // 0x236fe0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x236fe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236fe4:
    // 0x236fe4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x236fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_236fe8:
    // 0x236fe8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x236fe8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_236fec:
    // 0x236fec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x236fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_236ff0:
    // 0x236ff0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x236ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_236ff4:
    // 0x236ff4: 0xc08e2aa  jal         func_238AA8
label_236ff8:
    if (ctx->pc == 0x236FF8u) {
        ctx->pc = 0x236FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236FF4u;
        // 0x236ff8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236FFCu;
        goto label_236ffc;
    }
    ctx->pc = 0x236FF4u;
    SET_GPR_U32(ctx, 31, 0x236FFCu);
    ctx->pc = 0x236FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236FF4u;
    // 0x236ff8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AA8u, 0x236FF4u, 0x236FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236FFCu;
label_236ffc:
    // 0x236ffc: 0x260707ff  addiu       $a3, $s0, 0x7FF
    ctx->pc = 0x236ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_237000:
    // 0x237000: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x237000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_237004:
    // 0x237004: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x237004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237008:
    // 0x237008: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x237008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
label_23700c:
    // 0x23700c: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x23700cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_237010:
    // 0x237010: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x237010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_237014:
    // 0x237014: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x237014u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_237018:
    // 0x237018: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x237018u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_23701c:
    // 0x23701c: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x23701cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_237020:
    // 0x237020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237024:
    // 0x237024: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x237024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_237028:
    // 0x237028: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23702c:
    // 0x23702c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x23702cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_237030:
    // 0x237030: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x237030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_237034:
    // 0x237034: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237038:
    // 0x237038: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x237038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_23703c:
    // 0x23703c: 0xae67002c  sw          $a3, 0x2C($s3)
    ctx->pc = 0x23703cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 7));
label_237040:
    // 0x237040: 0xae66005c  sw          $a2, 0x5C($s3)
    ctx->pc = 0x237040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 6));
label_237044:
    // 0x237044: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x237044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_237048:
    // 0x237048: 0xa2750001  sb          $s5, 0x1($s3)
    ctx->pc = 0x237048u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_23704c:
    // 0x23704c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x23704cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_237050:
    // 0x237050: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x237050u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_237054:
    // 0x237054: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x237054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
label_237058:
    // 0x237058: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x237058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_23705c:
    // 0x23705c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_237060:
    if (ctx->pc == 0x237060u) {
        ctx->pc = 0x237060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23705Cu;
        // 0x237060: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237064u;
        goto label_237064;
    }
    ctx->pc = 0x23705Cu;
    {
        const bool branch_taken_0x23705c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x237060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23705Cu;
        // 0x237060: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23705c) {
            ctx->pc = 0x23709Cu;
            goto label_23709c;
        }
    }
    ctx->pc = 0x237064u;
label_237064:
    // 0x237064: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237068:
    // 0x237068: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x237068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_23706c:
    // 0x23706c: 0x40f809  jalr        $v0
label_237070:
    if (ctx->pc == 0x237070u) {
        ctx->pc = 0x237074u;
        goto label_237074;
    }
    ctx->pc = 0x23706Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23706Cu, 0x237074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x237074u;
label_237074:
    // 0x237074: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x237074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_237078:
    // 0x237078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23707c:
    // 0x23707c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237080:
    // 0x237080: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x237080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_237084:
    // 0x237084: 0x40f809  jalr        $v0
label_237088:
    if (ctx->pc == 0x237088u) {
        ctx->pc = 0x237088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237084u;
        // 0x237088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23708Cu;
        goto label_23708c;
    }
    ctx->pc = 0x237084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23708Cu);
        ctx->pc = 0x237088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237084u;
        // 0x237088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237084u, 0x23708Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23708Cu;
label_23708c:
    // 0x23708c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x23708cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_237090:
    // 0x237090: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x237090u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
label_237094:
    // 0x237094: 0xae700040  sw          $s0, 0x40($s3)
    ctx->pc = 0x237094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 16));
label_237098:
    // 0x237098: 0xae700018  sw          $s0, 0x18($s3)
    ctx->pc = 0x237098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 16));
label_23709c:
    // 0x23709c: 0xa2750000  sb          $s5, 0x0($s3)
    ctx->pc = 0x23709cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_2370a0:
    // 0x2370a0: 0xa2600044  sb          $zero, 0x44($s3)
    ctx->pc = 0x2370a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 68), (uint8_t)GPR_U32(ctx, 0));
label_2370a4:
    // 0x2370a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2370a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2370a8:
    // 0x2370a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2370a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2370ac:
    // 0x2370ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2370acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2370b0:
    // 0x2370b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2370b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2370b4:
    // 0x2370b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2370b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2370b8:
    // 0x2370b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2370b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2370bc:
    // 0x2370bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2370bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2370c0:
    // 0x2370c0: 0x808e2b0  j           func_238AC0
label_2370c4:
    if (ctx->pc == 0x2370C4u) {
        ctx->pc = 0x2370C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2370C0u;
        // 0x2370c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2370C8u;
        goto label_fallthrough_0x2370c0;
    }
    ctx->pc = 0x2370C0u;
    ctx->pc = 0x2370C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2370C0u;
    // 0x2370c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AC0u;
    sub_00238AC0_0x238ac0(rdram, ctx, runtime); return;
label_fallthrough_0x2370c0:
    ctx->pc = 0x2370C8u;
}
