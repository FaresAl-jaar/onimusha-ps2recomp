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

// Function: sub_003A7FA0
// Address: 0x3a7fa0 - 0x3a8130
void sub_003A7FA0_0x3a7fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7FA0_0x3a7fa0");
#endif

    switch (ctx->pc) {
        case 0x3a7ff4u: goto label_3a7ff4;
        case 0x3a8008u: goto label_3a8008;
        case 0x3a8020u: goto label_3a8020;
        case 0x3a8058u: goto label_3a8058;
        case 0x3a8060u: goto label_3a8060;
        case 0x3a8068u: goto label_3a8068;
        case 0x3a8070u: goto label_3a8070;
        case 0x3a80a4u: goto label_3a80a4;
        case 0x3a80b8u: goto label_3a80b8;
        case 0x3a80ecu: goto label_3a80ec;
        default: break;
    }

    ctx->pc = 0x3a7fa0u;

    // 0x3a7fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7fa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a7fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a7fac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a7facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3a7fb0: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x3a7fb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3a7fb4: 0x10a30050  beq         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A7FB4u;
    {
        const bool branch_taken_0x3a7fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FB4u;
        // 0x3a7fb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fb4) {
            ctx->pc = 0x3A80F8u;
            goto label_3a80f8;
        }
    }
    ctx->pc = 0x3A7FBCu;
    // 0x3a7fbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a7fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7fc0: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A7FC0u;
    {
        const bool branch_taken_0x3a7fc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7FC0u;
        // 0x3a7fc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7fc0) {
            ctx->pc = 0x3A8080u;
            goto label_3a8080;
        }
    }
    ctx->pc = 0x3A7FC8u;
    // 0x3a7fc8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A7FC8u;
    {
        const bool branch_taken_0x3a7fc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a7fc8) {
            ctx->pc = 0x3A8018u;
            goto label_3a8018;
        }
    }
    ctx->pc = 0x3A7FD0u;
    // 0x3a7fd0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7FD0u;
    {
        const bool branch_taken_0x3a7fd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7fd0) {
            ctx->pc = 0x3A7FE0u;
            goto label_3a7fe0;
        }
    }
    ctx->pc = 0x3A7FD8u;
    // 0x3a7fd8: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x3A7FD8u;
    {
        const bool branch_taken_0x3a7fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7fd8) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A7FE0u;
label_3a7fe0:
    // 0x3a7fe0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3a7fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a7fe4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a7fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a7fe8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a7fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a7fec: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A7FECu;
    SET_GPR_U32(ctx, 31, 0x3A7FF4u);
    ctx->pc = 0x3A7FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7FECu;
    // 0x3a7ff0: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A7FECu, 0x3A7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7FF4u;
label_3a7ff4:
    // 0x3a7ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7ff8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x3a7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3a7ffc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x3a7ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x3a8000: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A8000u;
    SET_GPR_U32(ctx, 31, 0x3A8008u);
    ctx->pc = 0x3A8004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8000u;
    // 0x3a8004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A8000u, 0x3A8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8008u;
label_3a8008:
    // 0x3a8008: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a800c: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x3a800cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a8010: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3A8010u;
    {
        const bool branch_taken_0x3a8010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8010u;
        // 0x3a8014: 0xa200004e  sb          $zero, 0x4E($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8010) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A8018u;
label_3a8018:
    // 0x3a8018: 0xc0eacec  jal         func_3AB3B0
    ctx->pc = 0x3A8018u;
    SET_GPR_U32(ctx, 31, 0x3A8020u);
    ctx->pc = 0x3AB3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB3B0u, 0x3A8018u, 0x3A8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8020u;
label_3a8020:
    // 0x3a8020: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3A8020u;
    {
        const bool branch_taken_0x3a8020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8020) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A8028u;
    // 0x3a8028: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a8028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a802c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a8030: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a8030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a8034: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x3a8034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3a8038: 0x28410063  slti        $at, $v0, 0x63
    ctx->pc = 0x3a8038u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)99) ? 1 : 0);
    // 0x3a803c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A803Cu;
    {
        const bool branch_taken_0x3a803c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a803c) {
            ctx->pc = 0x3A8050u;
            goto label_3a8050;
        }
    }
    ctx->pc = 0x3A8044u;
    // 0x3a8044: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a8044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a8048: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x3a8048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a804c: 0x0  nop
    ctx->pc = 0x3a804cu;
    // NOP
label_3a8050:
    // 0x3a8050: 0xc0eaef8  jal         func_3ABBE0
    ctx->pc = 0x3A8050u;
    SET_GPR_U32(ctx, 31, 0x3A8058u);
    ctx->pc = 0x3A8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8050u;
    // 0x3a8054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABBE0u, 0x3A8050u, 0x3A8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8058u;
label_3a8058:
    // 0x3a8058: 0xc0eaf18  jal         func_3ABC60
    ctx->pc = 0x3A8058u;
    SET_GPR_U32(ctx, 31, 0x3A8060u);
    ctx->pc = 0x3A805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8058u;
    // 0x3a805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABC60u, 0x3A8058u, 0x3A8060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8060u;
label_3a8060:
    // 0x3a8060: 0xc0eaf40  jal         func_3ABD00
    ctx->pc = 0x3A8060u;
    SET_GPR_U32(ctx, 31, 0x3A8068u);
    ctx->pc = 0x3A8064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8060u;
    // 0x3a8064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABD00u, 0x3A8060u, 0x3A8068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8068u;
label_3a8068:
    // 0x3a8068: 0xc0eaf78  jal         func_3ABDE0
    ctx->pc = 0x3A8068u;
    SET_GPR_U32(ctx, 31, 0x3A8070u);
    ctx->pc = 0x3A806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8068u;
    // 0x3a806c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABDE0u, 0x3A8068u, 0x3A8070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8070u;
label_3a8070:
    // 0x3a8070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8074: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3A8074u;
    {
        const bool branch_taken_0x3a8074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8074u;
        // 0x3a8078: 0xa203005b  sb          $v1, 0x5B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8074) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A807Cu;
    // 0x3a807c: 0x0  nop
    ctx->pc = 0x3a807cu;
    // NOP
label_3a8080:
    // 0x3a8080: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a8080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a8084: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A8084u;
    {
        const bool branch_taken_0x3a8084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8084u;
        // 0x3a8088: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8084) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A808Cu;
    // 0x3a808c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a808cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a8090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8094: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a8094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8098: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a8098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a809c: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A809Cu;
    SET_GPR_U32(ctx, 31, 0x3A80A4u);
    ctx->pc = 0x3A80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A809Cu;
    // 0x3a80a0: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A809Cu, 0x3A80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80A4u;
label_3a80a4:
    // 0x3a80a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a80a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80a8: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x3a80a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x3a80ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3a80acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a80b0: 0xc0eb608  jal         func_3AD820
    ctx->pc = 0x3A80B0u;
    SET_GPR_U32(ctx, 31, 0x3A80B8u);
    ctx->pc = 0x3A80B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80B0u;
    // 0x3a80b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD820u, 0x3A80B0u, 0x3A80B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80B8u;
label_3a80b8:
    // 0x3a80b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a80bc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a80bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a80c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3a80c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3a80c4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3a80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3a80c8: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x3a80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x3a80cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a80ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80d0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3a80d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3a80d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a80d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a80d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a80dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a80e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80e4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3A80E4u;
    SET_GPR_U32(ctx, 31, 0x3A80ECu);
    ctx->pc = 0x3A80E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80E4u;
    // 0x3a80e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3A80E4u, 0x3A80ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80ECu;
label_3a80ec:
    // 0x3a80ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A80ECu;
    {
        const bool branch_taken_0x3a80ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A80F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80ECu;
        // 0x3a80f0: 0xa6000012  sh          $zero, 0x12($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a80ec) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A80F4u;
    // 0x3a80f4: 0x0  nop
    ctx->pc = 0x3a80f4u;
    // NOP
label_3a80f8:
    // 0x3a80f8: 0x86030016  lh          $v1, 0x16($s0)
    ctx->pc = 0x3a80f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a80fc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A80FCu;
    {
        const bool branch_taken_0x3a80fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80FCu;
        // 0x3a8100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a80fc) {
            ctx->pc = 0x3A8120u;
            goto label_3a8120;
        }
    }
    ctx->pc = 0x3A8104u;
    // 0x3a8104: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a8108: 0xa2040001  sb          $a0, 0x1($s0)
    ctx->pc = 0x3a8108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a810c: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x3a810cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8110: 0x82030008  lb          $v1, 0x8($s0)
    ctx->pc = 0x3a8110u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a8114: 0xa2030059  sb          $v1, 0x59($s0)
    ctx->pc = 0x3a8114u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a8118: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x3a8118u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x3a811c: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3a811cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
label_3a8120:
    // 0x3a8120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a8120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8124: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a8124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8128: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8128u;
        // 0x3a812c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8130u;
}
