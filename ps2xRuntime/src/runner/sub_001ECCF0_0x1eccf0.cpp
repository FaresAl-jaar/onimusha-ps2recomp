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

// Function: sub_001ECCF0
// Address: 0x1eccf0 - 0x1ed0e8
void sub_001ECCF0_0x1eccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECCF0_0x1eccf0");
#endif

    switch (ctx->pc) {
        case 0x1ecd50u: goto label_1ecd50;
        case 0x1ecd70u: goto label_1ecd70;
        case 0x1ecd78u: goto label_1ecd78;
        case 0x1ecd84u: goto label_1ecd84;
        case 0x1ecd9cu: goto label_1ecd9c;
        case 0x1ecdbcu: goto label_1ecdbc;
        case 0x1ecdccu: goto label_1ecdcc;
        case 0x1ecdd8u: goto label_1ecdd8;
        case 0x1ece30u: goto label_1ece30;
        case 0x1ece40u: goto label_1ece40;
        case 0x1ece54u: goto label_1ece54;
        case 0x1eceb8u: goto label_1eceb8;
        case 0x1ecf34u: goto label_1ecf34;
        case 0x1ecf48u: goto label_1ecf48;
        case 0x1ecf5cu: goto label_1ecf5c;
        case 0x1ecf70u: goto label_1ecf70;
        case 0x1ecf84u: goto label_1ecf84;
        case 0x1ecfb8u: goto label_1ecfb8;
        case 0x1ecfe8u: goto label_1ecfe8;
        case 0x1ecffcu: goto label_1ecffc;
        case 0x1ed038u: goto label_1ed038;
        case 0x1ed068u: goto label_1ed068;
        case 0x1ed094u: goto label_1ed094;
        case 0x1ed0a0u: goto label_1ed0a0;
        case 0x1ed0b8u: goto label_1ed0b8;
        default: break;
    }

    ctx->pc = 0x1eccf0u;

    // 0x1eccf0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1eccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1eccf4: 0x24027ffe  addiu       $v0, $zero, 0x7FFE
    ctx->pc = 0x1eccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32766));
    // 0x1eccf8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1eccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1eccfc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1eccfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1ecd00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ecd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ecd04: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1ecd04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1ecd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1ecd0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1ecd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1ecd10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ecd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ecd14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ecd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ecd18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ecd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ecd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ecd20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ecd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd24: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1ecd24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ecd28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECD28u;
    {
        const bool branch_taken_0x1ecd28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD28u;
        // 0x1ecd2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd28) {
            ctx->pc = 0x1ECD38u;
            goto label_1ecd38;
        }
    }
    ctx->pc = 0x1ECD30u;
    // 0x1ecd30: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x1ECD30u;
    {
        const bool branch_taken_0x1ecd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD30u;
        // 0x1ecd34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd30) {
            ctx->pc = 0x1ED0C0u;
            goto label_1ed0c0;
        }
    }
    ctx->pc = 0x1ECD38u;
label_1ecd38:
    // 0x1ecd38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECD38u;
    {
        const bool branch_taken_0x1ecd38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD38u;
        // 0x1ecd3c: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd38) {
            ctx->pc = 0x1ECD48u;
            goto label_1ecd48;
        }
    }
    ctx->pc = 0x1ECD40u;
    // 0x1ecd40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECD40u;
    {
        const bool branch_taken_0x1ecd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECD40u;
        // 0x1ecd44: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecd40) {
            ctx->pc = 0x1ECD58u;
            goto label_1ecd58;
        }
    }
    ctx->pc = 0x1ECD48u;
label_1ecd48:
    // 0x1ecd48: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x1ECD48u;
    SET_GPR_U32(ctx, 31, 0x1ECD50u);
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x1ECD48u, 0x1ECD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD50u;
label_1ecd50:
    // 0x1ecd50: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1ecd50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ecd54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ecd58:
    // 0x1ecd58: 0x92450038  lbu         $a1, 0x38($s2)
    ctx->pc = 0x1ecd58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ecd5c: 0x92460039  lbu         $a2, 0x39($s2)
    ctx->pc = 0x1ecd5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 57)));
    // 0x1ecd60: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ecd60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ecd64: 0x92480080  lbu         $t0, 0x80($s2)
    ctx->pc = 0x1ecd64u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ecd68: 0xc07454c  jal         func_1D1530
    ctx->pc = 0x1ECD68u;
    SET_GPR_U32(ctx, 31, 0x1ECD70u);
    ctx->pc = 0x1ECD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD68u;
    // 0x1ecd6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1530u, 0x1ECD68u, 0x1ECD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD70u;
label_1ecd70:
    // 0x1ecd70: 0xc074570  jal         func_1D15C0
    ctx->pc = 0x1ECD70u;
    SET_GPR_U32(ctx, 31, 0x1ECD78u);
    ctx->pc = 0x1ECD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD70u;
    // 0x1ecd74: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15C0u, 0x1ECD70u, 0x1ECD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD78u;
label_1ecd78:
    // 0x1ecd78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ecd78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd7c: 0xc07457c  jal         func_1D15F0
    ctx->pc = 0x1ECD7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECD84u);
    ctx->pc = 0x1ECD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD7Cu;
    // 0x1ecd80: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15F0u, 0x1ECD7Cu, 0x1ECD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD84u;
label_1ecd84:
    // 0x1ecd84: 0x92480032  lbu         $t0, 0x32($s2)
    ctx->pc = 0x1ecd84u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1ecd88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ecd88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecd8c: 0x26440090  addiu       $a0, $s2, 0x90
    ctx->pc = 0x1ecd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x1ecd90: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ecd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecd94: 0xc074458  jal         func_1D1160
    ctx->pc = 0x1ECD94u;
    SET_GPR_U32(ctx, 31, 0x1ECD9Cu);
    ctx->pc = 0x1ECD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECD94u;
    // 0x1ecd98: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1160u, 0x1ECD94u, 0x1ECD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECD9Cu;
label_1ecd9c:
    // 0x1ecd9c: 0x92450033  lbu         $a1, 0x33($s2)
    ctx->pc = 0x1ecd9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ecda0: 0xc64c0040  lwc1        $f12, 0x40($s2)
    ctx->pc = 0x1ecda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecda4: 0xc64d0044  lwc1        $f13, 0x44($s2)
    ctx->pc = 0x1ecda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ecda8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ecda8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdac: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ecdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecdb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ecdb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdb4: 0xc074b10  jal         func_1D2C40
    ctx->pc = 0x1ECDB4u;
    SET_GPR_U32(ctx, 31, 0x1ECDBCu);
    ctx->pc = 0x1ECDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDB4u;
    // 0x1ecdb8: 0x34440080  ori         $a0, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2C40u, 0x1ECDB4u, 0x1ECDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDBCu;
label_1ecdbc:
    // 0x1ecdbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdc0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1ecdc4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1ECDC4u;
    SET_GPR_U32(ctx, 31, 0x1ECDCCu);
    ctx->pc = 0x1ECDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDC4u;
    // 0x1ecdc8: 0x26460070  addiu       $a2, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1ECDC4u, 0x1ECDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDCCu;
label_1ecdcc:
    // 0x1ecdcc: 0x8645003c  lh          $a1, 0x3C($s2)
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1ecdd0: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x1ECDD0u;
    SET_GPR_U32(ctx, 31, 0x1ECDD8u);
    ctx->pc = 0x1ECDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDD0u;
    // 0x1ecdd4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x1ECDD0u, 0x1ECDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDD8u;
label_1ecdd8:
    // 0x1ecdd8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ecdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ecddc: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ecddcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ecde0: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x1ecde0u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x1ecde4: 0x27aa0130  addiu       $t2, $sp, 0x130
    ctx->pc = 0x1ecde4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1ecde8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ecdec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ecdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecdf0: 0x24a56c20  addiu       $a1, $a1, 0x6C20
    ctx->pc = 0x1ecdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27680));
    // 0x1ecdf4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x1ecdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1ecdf8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ecdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ecdfc: 0x7fa90100  sq          $t1, 0x100($sp)
    ctx->pc = 0x1ecdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 9));
    // 0x1ece00: 0x78285c30  lq          $t0, 0x5C30($at)
    ctx->pc = 0x1ece00u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x665C30u));
    // 0x1ece04: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ece08: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x1ece08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
    // 0x1ece0c: 0x78275c40  lq          $a3, 0x5C40($at)
    ctx->pc = 0x1ece0cu;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x665C40u));
    // 0x1ece10: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x1ece14: 0x7fa70120  sq          $a3, 0x120($sp)
    ctx->pc = 0x1ece14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 7));
    // 0x1ece18: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x1ece18u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x1ece1c: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ece1cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ece20: 0x7ba30180  lq          $v1, 0x180($sp)
    ctx->pc = 0x1ece20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1ece24: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x1ece24u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x1ece28: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ECE28u;
    SET_GPR_U32(ctx, 31, 0x1ECE30u);
    ctx->pc = 0x1ECE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE28u;
    // 0x1ece2c: 0xafa2013c  sw          $v0, 0x13C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ECE28u, 0x1ECE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE30u;
label_1ece30:
    // 0x1ece30: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece34: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1ece34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1ece38: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ECE38u;
    SET_GPR_U32(ctx, 31, 0x1ECE40u);
    ctx->pc = 0x1ECE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE38u;
    // 0x1ece3c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ECE38u, 0x1ECE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE40u;
label_1ece40:
    // 0x1ece40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ece40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ece44: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ece44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ece48: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ece48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ece4c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1ECE4Cu;
    SET_GPR_U32(ctx, 31, 0x1ECE54u);
    ctx->pc = 0x1ECE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE4Cu;
    // 0x1ece50: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1ECE4Cu, 0x1ECE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECE54u;
label_1ece54:
    // 0x1ece54: 0x7a430050  lq          $v1, 0x50($s2)
    ctx->pc = 0x1ece54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ece58: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ece5c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ece5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ece60: 0x162c3c  dsll32      $a1, $s6, 16
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 16));
    // 0x1ece64: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ece64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ece68: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1ece68u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1ece6c: 0x7c230040  sq          $v1, 0x40($at)
    ctx->pc = 0x1ece6cu;
    WRITE128(ADD32(GPR_U32(ctx, 1), 64), GPR_VEC(ctx, 3));
    // 0x1ece70: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x1ece70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1ece74: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ece74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ece78: 0x7c220050  sq          $v0, 0x50($at)
    ctx->pc = 0x1ece78u;
    runtime->Store128(rdram, ctx, 0x70000050u, GPR_VEC(ctx, 2));
    // 0x1ece7c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ece7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ece80: 0x8c22004c  lw          $v0, 0x4C($at)
    ctx->pc = 0x1ece80u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000004Cu)); // MMIO: 0x7000004c
    // 0x1ece84: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1ece84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ece88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ece88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ece8c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ece8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ece90: 0xac22004c  sw          $v0, 0x4C($at)
    ctx->pc = 0x1ece90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 76), GPR_U32(ctx, 2));
    // 0x1ece94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ece94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ece98: 0x8c22005c  lw          $v0, 0x5C($at)
    ctx->pc = 0x1ece98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x7000005Cu)); // MMIO: 0x7000005c
    // 0x1ece9c: 0x70451018  mult1       $v0, $v0, $a1
    ctx->pc = 0x1ece9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ecea0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1ecea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecea4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1ecea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ecea8: 0xac22005c  sw          $v0, 0x5C($at)
    ctx->pc = 0x1ecea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 92), GPR_U32(ctx, 2));
    // 0x1eceac: 0x92450031  lbu         $a1, 0x31($s2)
    ctx->pc = 0x1eceacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1eceb0: 0xc078604  jal         func_1E1810
    ctx->pc = 0x1ECEB0u;
    SET_GPR_U32(ctx, 31, 0x1ECEB8u);
    ctx->pc = 0x1ECEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECEB0u;
    // 0x1eceb4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1810u, 0x1ECEB0u, 0x1ECEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECEB8u;
label_1eceb8:
    // 0x1eceb8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1eceb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ecebc: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x1ecebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
    // 0x1ecec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ecec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ecec4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1ECEC4u;
    {
        const bool branch_taken_0x1ecec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecec4) {
            ctx->pc = 0x1ED008u;
            goto label_1ed008;
        }
    }
    ctx->pc = 0x1ECECCu;
    // 0x1ececc: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x1ececcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eced0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1eced0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1eced4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eced4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eced8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1eced8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecedc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ecedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ecee0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ecee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecee4: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x1ecee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1ecee8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eceec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eceecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecef0: 0x0  nop
    ctx->pc = 0x1ecef0u;
    // NOP
    // 0x1ecef4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecef4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecef8: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ecef8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ecefc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ecefcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ecf00: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ecf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ecf04: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x1ecf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ecf08: 0x8662000a  lh          $v0, 0xA($s3)
    ctx->pc = 0x1ecf08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ecf0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ecf0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecf10: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1ecf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1ecf14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ecf14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecf18: 0x0  nop
    ctx->pc = 0x1ecf18u;
    // NOP
    // 0x1ecf1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecf20: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1ecf20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1ecf24: 0x0  nop
    ctx->pc = 0x1ecf24u;
    // NOP
    // 0x1ecf28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ecf28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ecf2c: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ECF2Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF34u);
    ctx->pc = 0x1ECF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF2Cu;
    // 0x1ecf30: 0xe7a000a4  swc1        $f0, 0xA4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ECF2Cu, 0x1ECF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF34u;
label_1ecf34:
    // 0x1ecf34: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ecf34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecf38: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ecf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ecf3c: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x1ecf3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ecf40: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ECF40u;
    SET_GPR_U32(ctx, 31, 0x1ECF48u);
    ctx->pc = 0x1ECF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF40u;
    // 0x1ecf44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ECF40u, 0x1ECF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF48u;
label_1ecf48:
    // 0x1ecf48: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ecf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecf4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ecf4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ecf50: 0x34440020  ori         $a0, $v0, 0x20
    ctx->pc = 0x1ecf50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1ecf54: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ECF54u;
    SET_GPR_U32(ctx, 31, 0x1ECF5Cu);
    ctx->pc = 0x1ECF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF54u;
    // 0x1ecf58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ECF54u, 0x1ECF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF5Cu;
label_1ecf5c:
    // 0x1ecf5c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1ecf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecf60: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1ecf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ecf64: 0x34440030  ori         $a0, $v0, 0x30
    ctx->pc = 0x1ecf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
    // 0x1ecf68: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1ECF68u;
    SET_GPR_U32(ctx, 31, 0x1ECF70u);
    ctx->pc = 0x1ECF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF68u;
    // 0x1ecf6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1ECF68u, 0x1ECF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF70u;
label_1ecf70:
    // 0x1ecf70: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ecf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ecf74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ecf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecf78: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ecf78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ecf7c: 0xc078624  jal         func_1E1890
    ctx->pc = 0x1ECF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECF84u);
    ctx->pc = 0x1ECF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECF7Cu;
    // 0x1ecf80: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1890u, 0x1ECF7Cu, 0x1ECF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECF84u;
label_1ecf84:
    // 0x1ecf84: 0x924b0037  lbu         $t3, 0x37($s2)
    ctx->pc = 0x1ecf84u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x1ecf88: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ecf88u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ecf8c: 0x154b000c  bne         $t2, $t3, . + 4 + (0xC << 2)
    ctx->pc = 0x1ECF8Cu;
    {
        const bool branch_taken_0x1ecf8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1ECF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECF8Cu;
        // 0x1ecf90: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecf8c) {
            ctx->pc = 0x1ECFC0u;
            goto label_1ecfc0;
        }
    }
    ctx->pc = 0x1ECF94u;
    // 0x1ecf94: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ecf94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecf98: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ecf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ecf9c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ecf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecfa0: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ecfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ecfa4: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ecfa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ecfa8: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ecfa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ecfac: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ecfacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ecfb0: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1ECFB0u;
    SET_GPR_U32(ctx, 31, 0x1ECFB8u);
    ctx->pc = 0x1ECFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFB0u;
    // 0x1ecfb4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1ECFB0u, 0x1ECFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFB8u;
label_1ecfb8:
    // 0x1ecfb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ECFB8u;
    {
        const bool branch_taken_0x1ecfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFB8u;
        // 0x1ecfbc: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecfb8) {
            ctx->pc = 0x1ECFF0u;
            goto label_1ecff0;
        }
    }
    ctx->pc = 0x1ECFC0u;
label_1ecfc0:
    // 0x1ecfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecfc4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ecfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ecfc8: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ecfc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ecfcc: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ecfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ecfd0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ecfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ecfd4: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ecfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ecfd8: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ecfd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ecfdc: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ecfdcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ecfe0: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1ECFE0u;
    SET_GPR_U32(ctx, 31, 0x1ECFE8u);
    ctx->pc = 0x1ECFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFE0u;
    // 0x1ecfe4: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1ECFE0u, 0x1ECFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFE8u;
label_1ecfe8:
    // 0x1ecfe8: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ecfe8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ecfec: 0x0  nop
    ctx->pc = 0x1ecfecu;
    // NOP
label_1ecff0:
    // 0x1ecff0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ecff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ecff4: 0xc07864c  jal         func_1E1930
    ctx->pc = 0x1ECFF4u;
    SET_GPR_U32(ctx, 31, 0x1ECFFCu);
    ctx->pc = 0x1ECFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECFF4u;
    // 0x1ecff8: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1930u, 0x1ECFF4u, 0x1ECFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECFFCu;
label_1ecffc:
    // 0x1ecffc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1ECFFCu;
    {
        const bool branch_taken_0x1ecffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECFFCu;
        // 0x1ed000: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecffc) {
            ctx->pc = 0x1ED070u;
            goto label_1ed070;
        }
    }
    ctx->pc = 0x1ED004u;
    // 0x1ed004: 0x0  nop
    ctx->pc = 0x1ed004u;
    // NOP
label_1ed008:
    // 0x1ed008: 0x924b0037  lbu         $t3, 0x37($s2)
    ctx->pc = 0x1ed008u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 55)));
    // 0x1ed00c: 0x924a0033  lbu         $t2, 0x33($s2)
    ctx->pc = 0x1ed00cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1ed010: 0x154b000b  bne         $t2, $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x1ED010u;
    {
        const bool branch_taken_0x1ed010 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 11));
        ctx->pc = 0x1ED014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED010u;
        // 0x1ed014: 0x3c077000  lui         $a3, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed010) {
            ctx->pc = 0x1ED040u;
            goto label_1ed040;
        }
    }
    ctx->pc = 0x1ED018u;
    // 0x1ed018: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed01c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed020: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed024: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed028: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed02c: 0x34e90050  ori         $t1, $a3, 0x50
    ctx->pc = 0x1ed02cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    // 0x1ed030: 0xc076090  jal         func_1D8240
    ctx->pc = 0x1ED030u;
    SET_GPR_U32(ctx, 31, 0x1ED038u);
    ctx->pc = 0x1ED034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED030u;
    // 0x1ed034: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8240u, 0x1ED030u, 0x1ED038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED038u;
label_1ed038:
    // 0x1ed038: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ED038u;
    {
        const bool branch_taken_0x1ed038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED038u;
        // 0x1ed03c: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed038) {
            ctx->pc = 0x1ED070u;
            goto label_1ed070;
        }
    }
    ctx->pc = 0x1ED040u;
label_1ed040:
    // 0x1ed040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ed040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed044: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1ed044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1ed048: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x1ed048u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x1ed04c: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ed04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ed050: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1ed050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ed054: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1ed054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1ed058: 0x34e60080  ori         $a2, $a3, 0x80
    ctx->pc = 0x1ed058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)128);
    // 0x1ed05c: 0x34e80040  ori         $t0, $a3, 0x40
    ctx->pc = 0x1ed05cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x1ed060: 0xc07616c  jal         func_1D85B0
    ctx->pc = 0x1ED060u;
    SET_GPR_U32(ctx, 31, 0x1ED068u);
    ctx->pc = 0x1ED064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED060u;
    // 0x1ed064: 0x34e90050  ori         $t1, $a3, 0x50 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)80);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D85B0u, 0x1ED060u, 0x1ED068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED068u;
label_1ed068:
    // 0x1ed068: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed068u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed06c: 0x0  nop
    ctx->pc = 0x1ed06cu;
    // NOP
label_1ed070:
    // 0x1ed070: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ED070u;
    {
        const bool branch_taken_0x1ed070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED070u;
        // 0x1ed074: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed070) {
            ctx->pc = 0x1ED080u;
            goto label_1ed080;
        }
    }
    ctx->pc = 0x1ED078u;
    // 0x1ed078: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1ED078u;
    {
        const bool branch_taken_0x1ed078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed078) {
            ctx->pc = 0x1ED0C0u;
            goto label_1ed0c0;
        }
    }
    ctx->pc = 0x1ED080u;
label_1ed080:
    // 0x1ed080: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ed080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ed084: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ed084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ed088: 0x24a56a20  addiu       $a1, $a1, 0x6A20
    ctx->pc = 0x1ed088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    // 0x1ed08c: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x1ED08Cu;
    SET_GPR_U32(ctx, 31, 0x1ED094u);
    ctx->pc = 0x1ED090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED08Cu;
    // 0x1ed090: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x1ED08Cu, 0x1ED094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED094u;
label_1ed094:
    // 0x1ed094: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ed094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed098: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x1ED098u;
    SET_GPR_U32(ctx, 31, 0x1ED0A0u);
    ctx->pc = 0x1ED09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED098u;
    // 0x1ed09c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x1ED098u, 0x1ED0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0A0u;
label_1ed0a0:
    // 0x1ed0a0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x1ed0a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ed0a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ed0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0a8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1ed0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ed0ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ed0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0b0: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x1ED0B0u;
    SET_GPR_U32(ctx, 31, 0x1ED0B8u);
    ctx->pc = 0x1ED0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED0B0u;
    // 0x1ed0b4: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x1ED0B0u, 0x1ED0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED0B8u;
label_1ed0b8:
    // 0x1ed0b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed0bc: 0x0  nop
    ctx->pc = 0x1ed0bcu;
    // NOP
label_1ed0c0:
    // 0x1ed0c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ed0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ed0c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1ed0c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ed0c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1ed0c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ed0cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1ed0ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ed0d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ed0d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed0d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ed0d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed0d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ed0d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed0dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ed0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED0E0u;
        // 0x1ed0e4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED0E8u;
}
