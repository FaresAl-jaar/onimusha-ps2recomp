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

// Function: sub_003B4F30
// Address: 0x3b4f30 - 0x3b5078
void sub_003B4F30_0x3b4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4F30_0x3b4f30");
#endif

    switch (ctx->pc) {
        case 0x3b4f84u: goto label_3b4f84;
        case 0x3b4f98u: goto label_3b4f98;
        case 0x3b4fc0u: goto label_3b4fc0;
        case 0x3b4fd0u: goto label_3b4fd0;
        case 0x3b5018u: goto label_3b5018;
        case 0x3b5028u: goto label_3b5028;
        case 0x3b5034u: goto label_3b5034;
        case 0x3b503cu: goto label_3b503c;
        case 0x3b5060u: goto label_3b5060;
        default: break;
    }

    ctx->pc = 0x3b4f30u;

    // 0x3b4f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b4f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4f44: 0x9084000b  lbu         $a0, 0xB($a0)
    ctx->pc = 0x3b4f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3b4f48: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B4F48u;
    {
        const bool branch_taken_0x3b4f48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b4f48) {
            ctx->pc = 0x3B4F90u;
            goto label_3b4f90;
        }
    }
    ctx->pc = 0x3B4F50u;
    // 0x3b4f50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4F50u;
    {
        const bool branch_taken_0x3b4f50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f50) {
            ctx->pc = 0x3B4F60u;
            goto label_3b4f60;
        }
    }
    ctx->pc = 0x3B4F58u;
    // 0x3b4f58: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3B4F58u;
    {
        const bool branch_taken_0x3b4f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f58) {
            ctx->pc = 0x3B5068u;
            goto label_3b5068;
        }
    }
    ctx->pc = 0x3B4F60u;
label_3b4f60:
    // 0x3b4f60: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b4f64: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3b4f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b4f68: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4f6c: 0x9022feea  lbu         $v0, -0x116($at)
    ctx->pc = 0x3b4f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x92FEEAu));
    // 0x3b4f70: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x3b4f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x3b4f74: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x3b4f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x3b4f78: 0x3c010093  lui         $at, 0x93
    ctx->pc = 0x3b4f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
    // 0x3b4f7c: 0xc0550b0  jal         func_1542C0
    ctx->pc = 0x3B4F7Cu;
    SET_GPR_U32(ctx, 31, 0x3B4F84u);
    ctx->pc = 0x3B4F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F7Cu;
    // 0x3b4f80: 0xa022feea  sb          $v0, -0x116($at) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294967018), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1542C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542C0u, 0x3B4F7Cu, 0x3B4F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F84u;
label_3b4f84:
    // 0x3b4f84: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B4F84u;
    {
        const bool branch_taken_0x3b4f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4f84) {
            ctx->pc = 0x3B5068u;
            goto label_3b5068;
        }
    }
    ctx->pc = 0x3B4F8Cu;
    // 0x3b4f8c: 0x0  nop
    ctx->pc = 0x3b4f8cu;
    // NOP
label_3b4f90:
    // 0x3b4f90: 0xc05551c  jal         func_155470
    ctx->pc = 0x3B4F90u;
    SET_GPR_U32(ctx, 31, 0x3B4F98u);
    ctx->pc = 0x3B4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4F90u;
    // 0x3b4f94: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155470u, 0x3B4F90u, 0x3B4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4F98u;
label_3b4f98:
    // 0x3b4f98: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x3B4F98u;
    {
        const bool branch_taken_0x3b4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4F98u;
        // 0x3b4f9c: 0x3c010093  lui         $at, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)147 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4f98) {
            ctx->pc = 0x3B5068u;
            goto label_3b5068;
        }
    }
    ctx->pc = 0x3B4FA0u;
    // 0x3b4fa0: 0x9023ff2c  lbu         $v1, -0xD4($at)
    ctx->pc = 0x3b4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967084)));
    // 0x3b4fa4: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3b4fa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b4fa8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3b4fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3b4fac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3b4fb0: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3B4FB0u;
    {
        const bool branch_taken_0x3b4fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4FB0u;
        // 0x3b4fb4: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4fb0) {
            ctx->pc = 0x3B5068u;
            goto label_3b5068;
        }
    }
    ctx->pc = 0x3B4FB8u;
    // 0x3b4fb8: 0xc0550b4  jal         func_1542D0
    ctx->pc = 0x3B4FB8u;
    SET_GPR_U32(ctx, 31, 0x3B4FC0u);
    ctx->pc = 0x1542D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1542D0u, 0x3B4FB8u, 0x3B4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FC0u;
label_3b4fc0:
    // 0x3b4fc0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3b4fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b4fc4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4fc8: 0xc05e390  jal         func_178E40
    ctx->pc = 0x3B4FC8u;
    SET_GPR_U32(ctx, 31, 0x3B4FD0u);
    ctx->pc = 0x3B4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4FC8u;
    // 0x3b4fcc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x3B4FC8u, 0x3B4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4FD0u;
label_3b4fd0:
    // 0x3b4fd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4fd4: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x3b4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x3b4fd8: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3b4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b4fdc: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3b4fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b4fe0: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3b4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3b4fe4: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b4fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b4fec: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3b4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3b4ff0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3b4ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3b4ff4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3b4ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3b4ff8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b4ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b4ffc: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3b4ffcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3b5000: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b5000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5004: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3b5004u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b5008: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b5008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b500c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5010: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3B5010u;
    SET_GPR_U32(ctx, 31, 0x3B5018u);
    ctx->pc = 0x3B5014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5010u;
    // 0x3b5014: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3B5010u, 0x3B5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5018u;
label_3b5018:
    // 0x3b5018: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3b5018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3b501c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3b501cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3b5020: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3B5020u;
    SET_GPR_U32(ctx, 31, 0x3B5028u);
    ctx->pc = 0x3B5024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5020u;
    // 0x3b5024: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3B5020u, 0x3B5028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5028u;
label_3b5028:
    // 0x3b5028: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5028u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b502c: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3B502Cu;
    SET_GPR_U32(ctx, 31, 0x3B5034u);
    ctx->pc = 0x3B5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B502Cu;
    // 0x3b5030: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3B502Cu, 0x3B5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5034u;
label_3b5034:
    // 0x3b5034: 0xc09c438  jal         func_2710E0
    ctx->pc = 0x3B5034u;
    SET_GPR_U32(ctx, 31, 0x3B503Cu);
    ctx->pc = 0x2710E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2710E0u, 0x3B5034u, 0x3B503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B503Cu;
label_3b503c:
    // 0x3b503c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b503cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5040: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3b5040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3b5044: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3b5044u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b5048: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b5048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b504c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b504cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b5054: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b5054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b5058: 0xc0ed608  jal         func_3B5820
    ctx->pc = 0x3B5058u;
    SET_GPR_U32(ctx, 31, 0x3B5060u);
    ctx->pc = 0x3B505Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5058u;
    // 0x3b505c: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5820u, 0x3B5058u, 0x3B5060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5060u;
label_3b5060:
    // 0x3b5060: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x3b5060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b5064: 0x0  nop
    ctx->pc = 0x3b5064u;
    // NOP
label_3b5068:
    // 0x3b5068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b5068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b506c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b506cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b5070: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5070u;
        // 0x3b5074: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5078u;
}
