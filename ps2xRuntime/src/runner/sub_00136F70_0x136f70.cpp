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

// Function: sub_00136F70
// Address: 0x136f70 - 0x137210
void sub_00136F70_0x136f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136F70_0x136f70");
#endif

    switch (ctx->pc) {
        case 0x136fc4u: goto label_136fc4;
        case 0x136fd0u: goto label_136fd0;
        case 0x136fd8u: goto label_136fd8;
        case 0x13700cu: goto label_13700c;
        case 0x137028u: goto label_137028;
        case 0x137044u: goto label_137044;
        case 0x137060u: goto label_137060;
        case 0x137070u: goto label_137070;
        case 0x137078u: goto label_137078;
        case 0x1370acu: goto label_1370ac;
        case 0x1370d8u: goto label_1370d8;
        case 0x1370e8u: goto label_1370e8;
        case 0x1370f0u: goto label_1370f0;
        case 0x13711cu: goto label_13711c;
        case 0x137168u: goto label_137168;
        case 0x137180u: goto label_137180;
        case 0x137198u: goto label_137198;
        case 0x1371ccu: goto label_1371cc;
        case 0x1371d4u: goto label_1371d4;
        default: break;
    }

    ctx->pc = 0x136f70u;

    // 0x136f70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x136f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x136f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x136f78: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x136f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x136f7c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x136f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x136f80: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x136f80u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x136f84: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x136f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x136f88: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x136f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x136f8c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x136f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x136f90: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x136f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x136f94: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x136f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x136f98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x136f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x136f9c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x136f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x136fa0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x136fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x136fa4: 0x8fc2aa00  lw          $v0, -0x5600($fp)
    ctx->pc = 0x136fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x40AA00u));
    // 0x136fa8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x136FA8u;
    {
        const bool branch_taken_0x136fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x136FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FA8u;
        // 0x136fac: 0x3c17006b  lui         $s7, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fa8) {
            ctx->pc = 0x136FB8u;
            goto label_136fb8;
        }
    }
    ctx->pc = 0x136FB0u;
    // 0x136fb0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x136FB0u;
    {
        const bool branch_taken_0x136fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FB0u;
        // 0x136fb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fb0) {
            ctx->pc = 0x1371E0u;
            goto label_1371e0;
        }
    }
    ctx->pc = 0x136FB8u;
label_136fb8:
    // 0x136fb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x136fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fbc: 0xc044568  jal         func_1115A0
    ctx->pc = 0x136FBCu;
    SET_GPR_U32(ctx, 31, 0x136FC4u);
    ctx->pc = 0x136FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136FBCu;
    // 0x136fc0: 0xaee06700  sw          $zero, 0x6700($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 26368), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A0u, 0x136FBCu, 0x136FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136FC4u;
label_136fc4:
    // 0x136fc4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x136FC4u;
    {
        const bool branch_taken_0x136fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FC4u;
        // 0x136fc8: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fc4) {
            ctx->pc = 0x136FF4u;
            goto label_136ff4;
        }
    }
    ctx->pc = 0x136FCCu;
    // 0x136fcc: 0x0  nop
    ctx->pc = 0x136fccu;
    // NOP
label_136fd0:
    // 0x136fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x136fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136fd4: 0x0  nop
    ctx->pc = 0x136fd4u;
    // NOP
label_136fd8:
    // 0x136fd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136fdc: 0x0  nop
    ctx->pc = 0x136fdcu;
    // NOP
    // 0x136fe0: 0x0  nop
    ctx->pc = 0x136fe0u;
    // NOP
    // 0x136fe4: 0x0  nop
    ctx->pc = 0x136fe4u;
    // NOP
    // 0x136fe8: 0x0  nop
    ctx->pc = 0x136fe8u;
    // NOP
    // 0x136fec: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136FECu;
    {
        const bool branch_taken_0x136fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x136fec) {
            ctx->pc = 0x136FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136fd8;
        }
    }
    ctx->pc = 0x136FF4u;
label_136ff4:
    // 0x136ff4: 0x26304248  addiu       $s0, $s1, 0x4248
    ctx->pc = 0x136ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16968));
    // 0x136ff8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x136ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x136ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137000: 0x34a51300  ori         $a1, $a1, 0x1300
    ctx->pc = 0x137000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4864);
    // 0x137004: 0xc044752  jal         func_111D48
    ctx->pc = 0x137004u;
    SET_GPR_U32(ctx, 31, 0x13700Cu);
    ctx->pc = 0x137008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137004u;
    // 0x137008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x137004u, 0x13700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13700Cu;
label_13700c:
    // 0x13700c: 0x440005a  bltz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x13700Cu;
    {
        const bool branch_taken_0x13700c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x137010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13700Cu;
        // 0x137010: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13700c) {
            ctx->pc = 0x137178u;
            goto label_137178;
        }
    }
    ctx->pc = 0x137014u;
    // 0x137014: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x137014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x137018: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x137018u;
    {
        const bool branch_taken_0x137018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137018u;
        // 0x13701c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137018) {
            ctx->pc = 0x136FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136fd0;
        }
    }
    ctx->pc = 0x137020u;
    // 0x137020: 0xc04dbc6  jal         func_136F18
    ctx->pc = 0x137020u;
    SET_GPR_U32(ctx, 31, 0x137028u);
    ctx->pc = 0x136F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F18u, 0x137020u, 0x137028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137028u;
label_137028:
    // 0x137028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13702c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x13702cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x137030: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
    // 0x137034: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x137034u;
    {
        const bool branch_taken_0x137034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x137038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137034u;
        // 0x137038: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137034) {
            ctx->pc = 0x137068u;
            goto label_137068;
        }
    }
    ctx->pc = 0x13703Cu;
    // 0x13703c: 0xc044332  jal         func_110CC8
    ctx->pc = 0x13703Cu;
    SET_GPR_U32(ctx, 31, 0x137044u);
    ctx->pc = 0x137040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13703Cu;
    // 0x137040: 0x24844658  addiu       $a0, $a0, 0x4658 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x13703Cu, 0x137044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137044u;
label_137044:
    // 0x137044: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x137044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x137048: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x137048u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x13704c: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x13704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    // 0x137050: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x137050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x137054: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x137054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x137058: 0xc044332  jal         func_110CC8
    ctx->pc = 0x137058u;
    SET_GPR_U32(ctx, 31, 0x137060u);
    ctx->pc = 0x13705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137058u;
    // 0x13705c: 0x103a03  sra         $a3, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110CC8u, 0x137058u, 0x137060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137060u;
label_137060:
    // 0x137060: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x137060u;
    {
        const bool branch_taken_0x137060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137060u;
        // 0x137064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137060) {
            ctx->pc = 0x1371E0u;
            goto label_1371e0;
        }
    }
    ctx->pc = 0x137068u;
label_137068:
    // 0x137068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x137068u;
    {
        const bool branch_taken_0x137068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137068u;
        // 0x13706c: 0x3c11006b  lui         $s1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137068) {
            ctx->pc = 0x137094u;
            goto label_137094;
        }
    }
    ctx->pc = 0x137070u;
label_137070:
    // 0x137070: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x137070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x137074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x137074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_137078:
    // 0x137078: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x137078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13707c: 0x0  nop
    ctx->pc = 0x13707cu;
    // NOP
    // 0x137080: 0x0  nop
    ctx->pc = 0x137080u;
    // NOP
    // 0x137084: 0x0  nop
    ctx->pc = 0x137084u;
    // NOP
    // 0x137088: 0x0  nop
    ctx->pc = 0x137088u;
    // NOP
    // 0x13708c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13708Cu;
    {
        const bool branch_taken_0x13708c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13708c) {
            ctx->pc = 0x137078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137078;
        }
    }
    ctx->pc = 0x137094u;
label_137094:
    // 0x137094: 0x26304298  addiu       $s0, $s1, 0x4298
    ctx->pc = 0x137094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 17048));
    // 0x137098: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x137098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13709c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13709cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370a0: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x1370a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x1370a4: 0xc044752  jal         func_111D48
    ctx->pc = 0x1370A4u;
    SET_GPR_U32(ctx, 31, 0x1370ACu);
    ctx->pc = 0x1370A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1370A4u;
    // 0x1370a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x1370A4u, 0x1370ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1370ACu;
label_1370ac:
    // 0x1370ac: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1370ACu;
    {
        const bool branch_taken_0x1370ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1370B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370ACu;
        // 0x1370b0: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370ac) {
            ctx->pc = 0x137178u;
            goto label_137178;
        }
    }
    ctx->pc = 0x1370B4u;
    // 0x1370b4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1370b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1370b8: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1370B8u;
    {
        const bool branch_taken_0x1370b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370B8u;
        // 0x1370bc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370b8) {
            ctx->pc = 0x137070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137070;
        }
    }
    ctx->pc = 0x1370C0u;
    // 0x1370c0: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1370c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1370c4: 0x245642c0  addiu       $s6, $v0, 0x42C0
    ctx->pc = 0x1370c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 17088));
    // 0x1370c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1370c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370cc: 0x3673131e  ori         $s3, $s3, 0x131E
    ctx->pc = 0x1370ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4894);
    // 0x1370d0: 0x26d50024  addiu       $s5, $s6, 0x24
    ctx->pc = 0x1370d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x1370d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1370d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1370d8:
    // 0x1370d8: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1370d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1370dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1370DCu;
    {
        const bool branch_taken_0x1370dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1370E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370DCu;
        // 0x1370e0: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370dc) {
            ctx->pc = 0x13710Cu;
            goto label_13710c;
        }
    }
    ctx->pc = 0x1370E4u;
    // 0x1370e4: 0x0  nop
    ctx->pc = 0x1370e4u;
    // NOP
label_1370e8:
    // 0x1370e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1370ec: 0x0  nop
    ctx->pc = 0x1370ecu;
    // NOP
label_1370f0:
    // 0x1370f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1370f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1370f4: 0x0  nop
    ctx->pc = 0x1370f4u;
    // NOP
    // 0x1370f8: 0x0  nop
    ctx->pc = 0x1370f8u;
    // NOP
    // 0x1370fc: 0x0  nop
    ctx->pc = 0x1370fcu;
    // NOP
    // 0x137100: 0x0  nop
    ctx->pc = 0x137100u;
    // NOP
    // 0x137104: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x137104u;
    {
        const bool branch_taken_0x137104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x137104) {
            ctx->pc = 0x1370F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1370f0;
        }
    }
    ctx->pc = 0x13710Cu;
label_13710c:
    // 0x13710c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x13710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x137110: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x137110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x137114: 0xc044752  jal         func_111D48
    ctx->pc = 0x137114u;
    SET_GPR_U32(ctx, 31, 0x13711Cu);
    ctx->pc = 0x137118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137114u;
    // 0x137118: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D48u, 0x137114u, 0x13711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13711Cu;
label_13711c:
    // 0x13711c: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13711Cu;
    {
        const bool branch_taken_0x13711c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x137120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13711Cu;
        // 0x137120: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13711c) {
            ctx->pc = 0x137178u;
            goto label_137178;
        }
    }
    ctx->pc = 0x137124u;
    // 0x137124: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x137124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x137128: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x137128u;
    {
        const bool branch_taken_0x137128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137128u;
        // 0x13712c: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137128) {
            ctx->pc = 0x1370E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1370e8;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x137130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x137134: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x137134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x137138: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x137138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13713c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x13713Cu;
    {
        const bool branch_taken_0x13713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13713Cu;
        // 0x137140: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13713c) {
            ctx->pc = 0x1370D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1370d8;
        }
    }
    ctx->pc = 0x137144u;
    // 0x137144: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x137144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x137148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x137148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13714c: 0x244246b0  addiu       $v0, $v0, 0x46B0
    ctx->pc = 0x13714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18096));
    // 0x137150: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x137150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x137154: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x137154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x137158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13715c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x13715cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x137160: 0xc0437f8  jal         func_10DFE0
    ctx->pc = 0x137160u;
    SET_GPR_U32(ctx, 31, 0x137168u);
    ctx->pc = 0x137164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137160u;
    // 0x137164: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DFE0u, 0x137160u, 0x137168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137168u;
label_137168:
    // 0x137168: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137168u;
    {
        const bool branch_taken_0x137168 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x13716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137168u;
        // 0x13716c: 0xaee26700  sw          $v0, 0x6700($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137168) {
            ctx->pc = 0x137188u;
            goto label_137188;
        }
    }
    ctx->pc = 0x137170u;
    // 0x137170: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x137170u;
    {
        const bool branch_taken_0x137170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137170u;
        // 0x137174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137170) {
            ctx->pc = 0x1371E0u;
            goto label_1371e0;
        }
    }
    ctx->pc = 0x137178u;
label_137178:
    // 0x137178: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x137178u;
    SET_GPR_U32(ctx, 31, 0x137180u);
    ctx->pc = 0x13717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137178u;
    // 0x13717c: 0x24844640  addiu       $a0, $a0, 0x4640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x137178u, 0x137180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137180u;
label_137180:
    // 0x137180: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x137180u;
    {
        const bool branch_taken_0x137180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137180u;
        // 0x137184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137180) {
            ctx->pc = 0x1371E0u;
            goto label_1371e0;
        }
    }
    ctx->pc = 0x137188u;
label_137188:
    // 0x137188: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x137188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13718c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x13718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137190: 0x244266c0  addiu       $v0, $v0, 0x66C0
    ctx->pc = 0x137190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26304));
    // 0x137194: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x137194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_137198:
    // 0x137198: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x137198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13719c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1371a0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1371a4: 0x0  nop
    ctx->pc = 0x1371a4u;
    // NOP
    // 0x1371a8: 0x0  nop
    ctx->pc = 0x1371a8u;
    // NOP
    // 0x1371ac: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1371ACu;
    {
        const bool branch_taken_0x1371ac = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x1371ac) {
            ctx->pc = 0x137198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137198;
        }
    }
    ctx->pc = 0x1371B4u;
    // 0x1371b4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1371b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1371b8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1371b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1371bc: 0x26106640  addiu       $s0, $s0, 0x6640
    ctx->pc = 0x1371bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26176));
    // 0x1371c0: 0x248446c0  addiu       $a0, $a0, 0x46C0
    ctx->pc = 0x1371c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18112));
    // 0x1371c4: 0xc04dfc8  jal         func_137F20
    ctx->pc = 0x1371C4u;
    SET_GPR_U32(ctx, 31, 0x1371CCu);
    ctx->pc = 0x1371C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371C4u;
    // 0x1371c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137F20u, 0x1371C4u, 0x1371CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371CCu;
label_1371cc:
    // 0x1371cc: 0xc04dcae  jal         func_1372B8
    ctx->pc = 0x1371CCu;
    SET_GPR_U32(ctx, 31, 0x1371D4u);
    ctx->pc = 0x1371D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1371CCu;
    // 0x1371d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1372B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1372B8u, 0x1371CCu, 0x1371D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1371D4u;
label_1371d4:
    // 0x1371d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1371d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1371d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1371d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1371dc: 0xafc3aa00  sw          $v1, -0x5600($fp)
    ctx->pc = 0x1371dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4294945280), GPR_U32(ctx, 3));
label_1371e0:
    // 0x1371e0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1371e4: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1371e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1371e8: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1371e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1371ec: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1371ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1371f0: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1371f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1371f4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1371f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1371f8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1371f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1371fc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1371fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x137200: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x137200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137204: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x137204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137208: 0x3e00008  jr          $ra
    ctx->pc = 0x137208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137208u;
        // 0x13720c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137210u;
}
