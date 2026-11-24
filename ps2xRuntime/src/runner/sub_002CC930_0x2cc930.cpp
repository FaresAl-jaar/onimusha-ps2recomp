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

// Function: sub_002CC930
// Address: 0x2cc930 - 0x2ccd5c
void sub_002CC930_0x2cc930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC930_0x2cc930");
#endif

    switch (ctx->pc) {
        case 0x2cc9b8u: goto label_2cc9b8;
        case 0x2cc9ccu: goto label_2cc9cc;
        case 0x2cc9ecu: goto label_2cc9ec;
        case 0x2cca00u: goto label_2cca00;
        case 0x2cca10u: goto label_2cca10;
        case 0x2ccd08u: goto label_2ccd08;
        default: break;
    }

    ctx->pc = 0x2cc930u;

    // 0x2cc930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc934: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2cc934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2cc938: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cc93c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cc940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc944: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x2cc944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2cc948: 0x28610ff0  slti        $at, $v1, 0xFF0
    ctx->pc = 0x2cc948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4080) ? 1 : 0);
    // 0x2cc94c: 0x102000fe  beqz        $at, . + 4 + (0xFE << 2)
    ctx->pc = 0x2CC94Cu;
    {
        const bool branch_taken_0x2cc94c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC94Cu;
        // 0x2cc950: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc94c) {
            ctx->pc = 0x2CCD48u;
            goto label_2ccd48;
        }
    }
    ctx->pc = 0x2CC954u;
    // 0x2cc954: 0xdf828240  ld          $v0, -0x7DC0($gp)
    ctx->pc = 0x2cc954u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935104)));
    // 0x2cc958: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x2cc958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2cc95c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cc95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cc960: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2cc960u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2cc964: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2cc964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2cc968: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2cc968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2cc96c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC96Cu;
    {
        const bool branch_taken_0x2cc96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC96Cu;
        // 0x2cc970: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc96c) {
            ctx->pc = 0x2CC978u;
            goto label_2cc978;
        }
    }
    ctx->pc = 0x2CC974u;
    // 0x2cc974: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2cc974u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2cc978:
    // 0x2cc978: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2cc978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2cc97c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC97Cu;
    {
        const bool branch_taken_0x2cc97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc97c) {
            ctx->pc = 0x2CC988u;
            goto label_2cc988;
        }
    }
    ctx->pc = 0x2CC984u;
    // 0x2cc984: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2cc984u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2cc988:
    // 0x2cc988: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cc988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cc98c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x2cc98cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x2cc990: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2cc990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2cc994: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC994u;
    {
        const bool branch_taken_0x2cc994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc994) {
            ctx->pc = 0x2CC9A0u;
            goto label_2cc9a0;
        }
    }
    ctx->pc = 0x2CC99Cu;
    // 0x2cc99c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x2cc99cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2cc9a0:
    // 0x2cc9a0: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CC9A0u;
    {
        const bool branch_taken_0x2cc9a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC9A0u;
        // 0x2cc9a4: 0x3c040069  lui         $a0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc9a0) {
            ctx->pc = 0x2CC9D8u;
            goto label_2cc9d8;
        }
    }
    ctx->pc = 0x2CC9A8u;
    // 0x2cc9a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9ac: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2cc9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2cc9b0: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x2CC9B0u;
    SET_GPR_U32(ctx, 31, 0x2CC9B8u);
    ctx->pc = 0x2CC9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9B0u;
    // 0x2cc9b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x2CC9B0u, 0x2CC9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9B8u;
label_2cc9b8:
    // 0x2cc9b8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2cc9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2cc9bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc9c0: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2cc9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2cc9c4: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x2CC9C4u;
    SET_GPR_U32(ctx, 31, 0x2CC9CCu);
    ctx->pc = 0x2CC9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9C4u;
    // 0x2cc9c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x2CC9C4u, 0x2CC9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9CCu;
label_2cc9cc:
    // 0x2cc9cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2CC9CCu;
    {
        const bool branch_taken_0x2cc9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc9cc) {
            ctx->pc = 0x2CCA00u;
            goto label_2cca00;
        }
    }
    ctx->pc = 0x2CC9D4u;
    // 0x2cc9d4: 0x0  nop
    ctx->pc = 0x2cc9d4u;
    // NOP
label_2cc9d8:
    // 0x2cc9d8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2cc9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2cc9dc: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2cc9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2cc9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc9e4: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x2CC9E4u;
    SET_GPR_U32(ctx, 31, 0x2CC9ECu);
    ctx->pc = 0x2CC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9E4u;
    // 0x2cc9e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x2CC9E4u, 0x2CC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC9ECu;
label_2cc9ec:
    // 0x2cc9ec: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x2cc9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x2cc9f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cc9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cc9f4: 0x24845ab0  addiu       $a0, $a0, 0x5AB0
    ctx->pc = 0x2cc9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23216));
    // 0x2cc9f8: 0xc04c79c  jal         func_131E70
    ctx->pc = 0x2CC9F8u;
    SET_GPR_U32(ctx, 31, 0x2CCA00u);
    ctx->pc = 0x2CC9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC9F8u;
    // 0x2cc9fc: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E70u, 0x2CC9F8u, 0x2CCA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCA00u;
label_2cca00:
    // 0x2cca00: 0x93848a6c  lbu         $a0, -0x7594($gp)
    ctx->pc = 0x2cca00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937196)));
    // 0x2cca04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cca04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cca08: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x2cca08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2cca0c: 0x0  nop
    ctx->pc = 0x2cca0cu;
    // NOP
label_2cca10:
    // 0x2cca10: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cca14: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCA14u;
    {
        const bool branch_taken_0x2cca14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cca14) {
            ctx->pc = 0x2CCA30u;
            goto label_2cca30;
        }
    }
    ctx->pc = 0x2CCA1Cu;
    // 0x2cca1c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x2cca1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cca20: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCA20u;
    {
        const bool branch_taken_0x2cca20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cca20) {
            ctx->pc = 0x2CCA30u;
            goto label_2cca30;
        }
    }
    ctx->pc = 0x2CCA28u;
    // 0x2cca28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CCA28u;
    {
        const bool branch_taken_0x2cca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA28u;
        // 0x2cca2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca28) {
            ctx->pc = 0x2CCA40u;
            goto label_2cca40;
        }
    }
    ctx->pc = 0x2CCA30u;
label_2cca30:
    // 0x2cca30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cca30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cca34: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x2cca34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cca38: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CCA38u;
    {
        const bool branch_taken_0x2cca38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA38u;
        // 0x2cca3c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca38) {
            ctx->pc = 0x2CCA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cca10;
        }
    }
    ctx->pc = 0x2CCA40u;
label_2cca40:
    // 0x2cca40: 0x6000003  bltz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCA40u;
    {
        const bool branch_taken_0x2cca40 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2CCA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA40u;
        // 0x2cca44: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca40) {
            ctx->pc = 0x2CCA50u;
            goto label_2cca50;
        }
    }
    ctx->pc = 0x2CCA48u;
    // 0x2cca48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCA48u;
    {
        const bool branch_taken_0x2cca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA48u;
        // 0x2cca4c: 0xa0306c1c  sb          $s0, 0x6C1C($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 27676), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca48) {
            ctx->pc = 0x2CCA58u;
            goto label_2cca58;
        }
    }
    ctx->pc = 0x2CCA50u;
label_2cca50:
    // 0x2cca50: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cca54: 0xa0206c1c  sb          $zero, 0x6C1C($at)
    ctx->pc = 0x2cca54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
label_2cca58:
    // 0x2cca58: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cca5c: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2cca5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2cca60: 0x27838a54  addiu       $v1, $gp, -0x75AC
    ctx->pc = 0x2cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937172));
    // 0x2cca64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cca64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cca68: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2cca68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cca6c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCA6Cu;
    {
        const bool branch_taken_0x2cca6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA6Cu;
        // 0x2cca70: 0xa3838a6c  sb          $v1, -0x7594($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937196), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca6c) {
            ctx->pc = 0x2CCA80u;
            goto label_2cca80;
        }
    }
    ctx->pc = 0x2CCA74u;
    // 0x2cca74: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cca78: 0xa0206c1c  sb          $zero, 0x6C1C($at)
    ctx->pc = 0x2cca78u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8D6C1Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x8D6C1Cu, _value); } while (0);
    // 0x2cca7c: 0x0  nop
    ctx->pc = 0x2cca7cu;
    // NOP
label_2cca80:
    // 0x2cca80: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cca80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2cca84: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2cca84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2cca88: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2cca88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2cca8c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCA8Cu;
    {
        const bool branch_taken_0x2cca8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCA8Cu;
        // 0x2cca90: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cca8c) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCA94u;
    // 0x2cca94: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2cca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x2cca98: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x2cca98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2cca9c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CCA9Cu;
    {
        const bool branch_taken_0x2cca9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cca9c) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCAA4u;
    // 0x2ccaa4: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2ccaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x2ccaa8: 0x24030b40  addiu       $v1, $zero, 0xB40
    ctx->pc = 0x2ccaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2880));
    // 0x2ccaac: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2ccaacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x2ccab0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2CCAB0u;
    {
        const bool branch_taken_0x2ccab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ccab0) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCAB8u;
    // 0x2ccab8: 0x93848a54  lbu         $a0, -0x75AC($gp)
    ctx->pc = 0x2ccab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x2ccabc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ccabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ccac0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CCAC0u;
    {
        const bool branch_taken_0x2ccac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CCAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAC0u;
        // 0x2ccac4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccac0) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCAC8u;
    // 0x2ccac8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCAC8u;
    {
        const bool branch_taken_0x2ccac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ccac8) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCAD0u;
    // 0x2ccad0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2ccad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2ccad4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCAD4u;
    {
        const bool branch_taken_0x2ccad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CCAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCAD4u;
        // 0x2ccad8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccad4) {
            ctx->pc = 0x2CCAE8u;
            goto label_2ccae8;
        }
    }
    ctx->pc = 0x2CCADCu;
    // 0x2ccadc: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2ccadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x2ccae0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x2ccae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x2ccae4: 0x0  nop
    ctx->pc = 0x2ccae4u;
    // NOP
label_2ccae8:
    // 0x2ccae8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccaec: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2ccaecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccaf0: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ccaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ccaf4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ccaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccaf8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2ccaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x2ccafc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ccafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ccb00: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2ccb00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ccb04: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x2CCB04u;
    {
        const bool branch_taken_0x2ccb04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCB04u;
        // 0x2ccb08: 0xac2595b4  sw          $a1, -0x6A4C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccb04) {
            ctx->pc = 0x2CCBA0u;
            goto label_2ccba0;
        }
    }
    ctx->pc = 0x2CCB0Cu;
    // 0x2ccb0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccb10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccb14: 0xa0a40640  sb          $a0, 0x640($a1)
    ctx->pc = 0x2ccb14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1600), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ccb18: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x2ccb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2ccb1c: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2ccb1cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccb20: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x2ccb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x2ccb24: 0x3485999a  ori         $a1, $a0, 0x999A
    ctx->pc = 0x2ccb24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2ccb28: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x2ccb28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ccb2c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2ccb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2ccb30: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2ccb30u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ccb34: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccb38: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2ccb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ccb3c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2ccb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccb40: 0xa0e80641  sb          $t0, 0x641($a3)
    ctx->pc = 0x2ccb40u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1601), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ccb44: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2ccb44u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccb48: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2ccb48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ccb4c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccb50: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2ccb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ccb54: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2ccb54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccb58: 0x8d0700e0  lw          $a3, 0xE0($t0)
    ctx->pc = 0x2ccb58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x2ccb5c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2ccb5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2ccb60: 0xad0600e0  sw          $a2, 0xE0($t0)
    ctx->pc = 0x2ccb60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 6));
    // 0x2ccb64: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x2ccb64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ccb68: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2ccb68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ccb6c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccb70: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2ccb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ccb74: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2ccb74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ccb78: 0xacc500e8  sw          $a1, 0xE8($a2)
    ctx->pc = 0x2ccb78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 5));
    // 0x2ccb7c: 0xacc506c0  sw          $a1, 0x6C0($a2)
    ctx->pc = 0x2ccb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1728), GPR_U32(ctx, 5));
    // 0x2ccb80: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2ccb80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccb84: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ccb84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccb88: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ccb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ccb8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2ccb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccb90: 0x8ca30148  lw          $v1, 0x148($a1)
    ctx->pc = 0x2ccb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2ccb94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2ccb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ccb98: 0xaca30148  sw          $v1, 0x148($a1)
    ctx->pc = 0x2ccb98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 3));
    // 0x2ccb9c: 0x0  nop
    ctx->pc = 0x2ccb9cu;
    // NOP
label_2ccba0:
    // 0x2ccba0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccba4: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2ccba4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccba8: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2ccba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2ccbac: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2ccbacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2ccbb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2ccbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ccbb4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2ccbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ccbb8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2ccbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ccbbc: 0x10c00048  beqz        $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x2CCBBCu;
    {
        const bool branch_taken_0x2ccbbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccbbc) {
            ctx->pc = 0x2CCCE0u;
            goto label_2ccce0;
        }
    }
    ctx->pc = 0x2CCBC4u;
    // 0x2ccbc4: 0x1620001e  bnez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CCBC4u;
    {
        const bool branch_taken_0x2ccbc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCBC4u;
        // 0x2ccbc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccbc4) {
            ctx->pc = 0x2CCC40u;
            goto label_2ccc40;
        }
    }
    ctx->pc = 0x2CCBCCu;
    // 0x2ccbcc: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x2ccbccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x2ccbd0: 0xa0c50640  sb          $a1, 0x640($a2)
    ctx->pc = 0x2ccbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1600), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ccbd4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccbd8: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2ccbd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccbdc: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x2ccbdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x2ccbe0: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2ccbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2ccbe4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccbe8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ccbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccbec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ccbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ccbf0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2ccbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ccbf4: 0xa0a00641  sb          $zero, 0x641($a1)
    ctx->pc = 0x2ccbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1601), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ccbf8: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2ccbf8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ccbfc: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2ccbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc00: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccc04: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ccc04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccc08: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2ccc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ccc0c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2ccc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ccc10: 0x8cc500e0  lw          $a1, 0xE0($a2)
    ctx->pc = 0x2ccc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x2ccc14: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x2ccc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x2ccc18: 0xacc500e0  sw          $a1, 0xE0($a2)
    ctx->pc = 0x2ccc18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 224), GPR_U32(ctx, 5));
    // 0x2ccc1c: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2ccc1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ccc20: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2ccc20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc24: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ccc24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccc28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ccc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ccc2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2ccc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ccc30: 0xac6400e8  sw          $a0, 0xE8($v1)
    ctx->pc = 0x2ccc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 4));
    // 0x2ccc34: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CCC34u;
    {
        const bool branch_taken_0x2ccc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCC34u;
        // 0x2ccc38: 0xac6406c0  sw          $a0, 0x6C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1728), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccc34) {
            ctx->pc = 0x2CCCE0u;
            goto label_2ccce0;
        }
    }
    ctx->pc = 0x2CCC3Cu;
    // 0x2ccc3c: 0x0  nop
    ctx->pc = 0x2ccc3cu;
    // NOP
label_2ccc40:
    // 0x2ccc40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ccc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ccc44: 0xa0c40640  sb          $a0, 0x640($a2)
    ctx->pc = 0x2ccc44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1600), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ccc48: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccc4c: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2ccc4cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2ccc50: 0x3c043f99  lui         $a0, 0x3F99
    ctx->pc = 0x2ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16281 << 16));
    // 0x2ccc54: 0x3485999a  ori         $a1, $a0, 0x999A
    ctx->pc = 0x2ccc54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39322);
    // 0x2ccc58: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x2ccc58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2ccc5c: 0x2406fff7  addiu       $a2, $zero, -0x9
    ctx->pc = 0x2ccc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2ccc60: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x2ccc60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x2ccc64: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x2ccc64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc68: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccc6c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2ccc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ccc70: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2ccc70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ccc74: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x2ccc74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccc78: 0xa0e80641  sb          $t0, 0x641($a3)
    ctx->pc = 0x2ccc78u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1601), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ccc7c: 0x90276c1c  lbu         $a3, 0x6C1C($at)
    ctx->pc = 0x2ccc7cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ccc80: 0x38e70001  xori        $a3, $a3, 0x1
    ctx->pc = 0x2ccc80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x2ccc84: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2ccc88: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2ccc88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ccc8c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x2ccc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ccc90: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2ccc90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccc94: 0x8d0700e0  lw          $a3, 0xE0($t0)
    ctx->pc = 0x2ccc94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 224)));
    // 0x2ccc98: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2ccc98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2ccc9c: 0xad0600e0  sw          $a2, 0xE0($t0)
    ctx->pc = 0x2ccc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 224), GPR_U32(ctx, 6));
    // 0x2ccca0: 0x90266c1c  lbu         $a2, 0x6C1C($at)
    ctx->pc = 0x2ccca0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2ccca4: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x2ccca4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x2ccca8: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2ccca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2cccac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2cccacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cccb0: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cccb4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2cccb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cccb8: 0xacc500e8  sw          $a1, 0xE8($a2)
    ctx->pc = 0x2cccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 5));
    // 0x2cccbc: 0xacc506c0  sw          $a1, 0x6C0($a2)
    ctx->pc = 0x2cccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1728), GPR_U32(ctx, 5));
    // 0x2cccc0: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x2cccc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2cccc4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x2cccc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x2cccc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2cccc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ccccc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cccd0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cccd4: 0x8ca30148  lw          $v1, 0x148($a1)
    ctx->pc = 0x2cccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x2cccd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2cccd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2cccdc: 0xaca30148  sw          $v1, 0x148($a1)
    ctx->pc = 0x2cccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 3));
label_2ccce0:
    // 0x2ccce0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2ccce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2ccce4: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x2ccce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x2ccce8: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x2ccce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2cccec: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CCCECu;
    {
        const bool branch_taken_0x2cccec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCCECu;
        // 0x2cccf0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cccec) {
            ctx->pc = 0x2CCD48u;
            goto label_2ccd48;
        }
    }
    ctx->pc = 0x2CCCF4u;
    // 0x2cccf4: 0x278785f8  addiu       $a3, $gp, -0x7A08
    ctx->pc = 0x2cccf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936056));
    // 0x2cccf8: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2cccfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccd00: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2ccd00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2ccd04: 0x0  nop
    ctx->pc = 0x2ccd04u;
    // NOP
label_2ccd08:
    // 0x2ccd08: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ccd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd0c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2CCD0Cu;
    {
        const bool branch_taken_0x2ccd0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccd0c) {
            ctx->pc = 0x2CCD38u;
            goto label_2ccd38;
        }
    }
    ctx->pc = 0x2CCD14u;
    // 0x2ccd14: 0xa0660640  sb          $a2, 0x640($v1)
    ctx->pc = 0x2ccd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1600), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ccd18: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ccd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd1c: 0xa0600641  sb          $zero, 0x641($v1)
    ctx->pc = 0x2ccd1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1601), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ccd20: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2ccd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd24: 0x8ca300e0  lw          $v1, 0xE0($a1)
    ctx->pc = 0x2ccd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
    // 0x2ccd28: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2ccd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2ccd2c: 0xaca300e0  sw          $v1, 0xE0($a1)
    ctx->pc = 0x2ccd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 3));
    // 0x2ccd30: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2ccd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2ccd34: 0xac6400e8  sw          $a0, 0xE8($v1)
    ctx->pc = 0x2ccd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 4));
label_2ccd38:
    // 0x2ccd38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ccd38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2ccd3c: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x2ccd3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ccd40: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2CCD40u;
    {
        const bool branch_taken_0x2ccd40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD40u;
        // 0x2ccd44: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccd40) {
            ctx->pc = 0x2CCD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ccd08;
        }
    }
    ctx->pc = 0x2CCD48u;
label_2ccd48:
    // 0x2ccd48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ccd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccd4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ccd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ccd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccd54: 0x3e00008  jr          $ra
    ctx->pc = 0x2CCD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CCD54u;
        // 0x2ccd58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CCD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CCD5Cu;
}
