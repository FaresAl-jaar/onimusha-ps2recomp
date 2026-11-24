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

// Function: sub_001D0F90
// Address: 0x1d0f90 - 0x1d1154
void sub_001D0F90_0x1d0f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0F90_0x1d0f90");
#endif

    switch (ctx->pc) {
        case 0x1d0facu: goto label_1d0fac;
        default: break;
    }

    ctx->pc = 0x1d0f90u;

    // 0x1d0f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d0f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d0f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d0fa0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0fa4: 0xc0743e0  jal         func_1D0F80
    ctx->pc = 0x1D0FA4u;
    SET_GPR_U32(ctx, 31, 0x1D0FACu);
    ctx->pc = 0x1D0FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FA4u;
    // 0x1d0fa8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0F80u, 0x1D0FA4u, 0x1D0FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0FACu;
label_1d0fac:
    // 0x1d0fac: 0x94460004  lhu         $a2, 0x4($v0)
    ctx->pc = 0x1d0facu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d0fb0: 0x2e010006  sltiu       $at, $s0, 0x6
    ctx->pc = 0x1d0fb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d0fb4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d0fb8: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x1d0fb8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d0fbc: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x1d0fbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1d0fc0: 0xc44021  addu        $t0, $a2, $a0
    ctx->pc = 0x1d0fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1d0fc4: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
    ctx->pc = 0x1D0FC4u;
    {
        const bool branch_taken_0x1d0fc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FC4u;
        // 0x1d0fc8: 0xa33821  addu        $a3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0fc4) {
            ctx->pc = 0x1D1138u;
            goto label_1d1138;
        }
    }
    ctx->pc = 0x1D0FCCu;
    // 0x1d0fcc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1d0fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1d0fd0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d0fd4: 0x24845aa0  addiu       $a0, $a0, 0x5AA0
    ctx->pc = 0x1d0fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23200));
    // 0x1d0fd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d0fdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d0fe0: 0x600008  jr          $v1
    ctx->pc = 0x1D0FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0FE8u: goto label_1d0fe8;
            case 0x1D1020u: goto label_1d1020;
            case 0x1D1058u: goto label_1d1058;
            case 0x1D1090u: goto label_1d1090;
            case 0x1D10C8u: goto label_1d10c8;
            case 0x1D1100u: goto label_1d1100;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0FE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0FE8u;
label_1d0fe8:
    // 0x1d0fe8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1d0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1d0fec: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1d0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1d0ff0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d0ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d0ff4: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x1d0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x1d0ff8: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x1d0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x1d0ffc: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d0ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d1000: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x1d1000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x1d1004: 0xae270024  sw          $a3, 0x24($s1)
    ctx->pc = 0x1d1004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    // 0x1d1008: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d1008u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d100c: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x1d100cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x1d1010: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x1d1010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x1d1014: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1D1014u;
    {
        const bool branch_taken_0x1d1014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1014u;
        // 0x1d1018: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1014) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D101Cu;
    // 0x1d101c: 0x0  nop
    ctx->pc = 0x1d101cu;
    // NOP
label_1d1020:
    // 0x1d1020: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1d1020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1d1024: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x1d1024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x1d1028: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d1028u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d102c: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x1d102cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x1d1030: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x1d1030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x1d1034: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d1034u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d1038: 0xae280020  sw          $t0, 0x20($s1)
    ctx->pc = 0x1d1038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
    // 0x1d103c: 0xae270024  sw          $a3, 0x24($s1)
    ctx->pc = 0x1d103cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    // 0x1d1040: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d1040u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d1044: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x1d1044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x1d1048: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x1d1048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
    // 0x1d104c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1D104Cu;
    {
        const bool branch_taken_0x1d104c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D104Cu;
        // 0x1d1050: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d104c) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D1054u;
    // 0x1d1054: 0x0  nop
    ctx->pc = 0x1d1054u;
    // NOP
label_1d1058:
    // 0x1d1058: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x1d1058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x1d105c: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x1d105cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x1d1060: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d1060u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d1064: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x1d1064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x1d1068: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x1d1068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
    // 0x1d106c: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d106cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d1070: 0xae280020  sw          $t0, 0x20($s1)
    ctx->pc = 0x1d1070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
    // 0x1d1074: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1d1074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1d1078: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d1078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d107c: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x1d107cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x1d1080: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x1d1080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
    // 0x1d1084: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D1084u;
    {
        const bool branch_taken_0x1d1084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1084u;
        // 0x1d1088: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1084) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D108Cu;
    // 0x1d108c: 0x0  nop
    ctx->pc = 0x1d108cu;
    // NOP
label_1d1090:
    // 0x1d1090: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x1d1090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x1d1094: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1d1094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1d1098: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d1098u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d109c: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x1d109cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x1d10a0: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x1d10a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
    // 0x1d10a4: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d10a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d10a8: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x1d10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x1d10ac: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1d10acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1d10b0: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d10b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d10b4: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x1d10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x1d10b8: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x1d10b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x1d10bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D10BCu;
    {
        const bool branch_taken_0x1d10bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10BCu;
        // 0x1d10c0: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10bc) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D10C4u;
    // 0x1d10c4: 0x0  nop
    ctx->pc = 0x1d10c4u;
    // NOP
label_1d10c8:
    // 0x1d10c8: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x1d10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x1d10cc: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1d10ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x1d10d0: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d10d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d10d4: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x1d10d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x1d10d8: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x1d10d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x1d10dc: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d10dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d10e0: 0xae280020  sw          $t0, 0x20($s1)
    ctx->pc = 0x1d10e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
    // 0x1d10e4: 0xae270024  sw          $a3, 0x24($s1)
    ctx->pc = 0x1d10e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
    // 0x1d10e8: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d10e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d10ec: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x1d10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x1d10f0: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x1d10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x1d10f4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D10F4u;
    {
        const bool branch_taken_0x1d10f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D10F4u;
        // 0x1d10f8: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d10f4) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D10FCu;
    // 0x1d10fc: 0x0  nop
    ctx->pc = 0x1d10fcu;
    // NOP
label_1d1100:
    // 0x1d1100: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1d1100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x1d1104: 0xae270004  sw          $a3, 0x4($s1)
    ctx->pc = 0x1d1104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
    // 0x1d1108: 0xfe200008  sd          $zero, 0x8($s1)
    ctx->pc = 0x1d1108u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 0));
    // 0x1d110c: 0xae280010  sw          $t0, 0x10($s1)
    ctx->pc = 0x1d110cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 8));
    // 0x1d1110: 0xae270014  sw          $a3, 0x14($s1)
    ctx->pc = 0x1d1110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 7));
    // 0x1d1114: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1d1114u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1d1118: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x1d1118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
    // 0x1d111c: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1d111cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1d1120: 0xfe200028  sd          $zero, 0x28($s1)
    ctx->pc = 0x1d1120u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 0));
    // 0x1d1124: 0xae280030  sw          $t0, 0x30($s1)
    ctx->pc = 0x1d1124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 8));
    // 0x1d1128: 0xae250034  sw          $a1, 0x34($s1)
    ctx->pc = 0x1d1128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 5));
    // 0x1d112c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D112Cu;
    {
        const bool branch_taken_0x1d112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D112Cu;
        // 0x1d1130: 0xfe200038  sd          $zero, 0x38($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d112c) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D1134u;
    // 0x1d1134: 0x0  nop
    ctx->pc = 0x1d1134u;
    // NOP
label_1d1138:
    // 0x1d1138: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D1138u;
    {
        const bool branch_taken_0x1d1138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1138u;
        // 0x1d113c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1138) {
            ctx->pc = 0x1D1140u;
            goto label_1d1140;
        }
    }
    ctx->pc = 0x1D1140u;
label_1d1140:
    // 0x1d1140: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1144: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1148: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d114c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D114Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D114Cu;
        // 0x1d1150: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D114Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1154u;
}
