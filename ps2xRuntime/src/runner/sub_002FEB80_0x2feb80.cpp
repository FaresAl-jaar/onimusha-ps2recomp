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

// Function: sub_002FEB80
// Address: 0x2feb80 - 0x2fec9c
void sub_002FEB80_0x2feb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FEB80_0x2feb80");
#endif

    switch (ctx->pc) {
        case 0x2feba8u: goto label_2feba8;
        case 0x2febb4u: goto label_2febb4;
        case 0x2febc4u: goto label_2febc4;
        case 0x2febd8u: goto label_2febd8;
        case 0x2fec30u: goto label_2fec30;
        case 0x2fec48u: goto label_2fec48;
        case 0x2fec5cu: goto label_2fec5c;
        case 0x2fec7cu: goto label_2fec7c;
        default: break;
    }

    ctx->pc = 0x2feb80u;

    // 0x2feb80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2feb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2feb84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2feb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2feb88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2feb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2feb8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2feb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2feb90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2feb90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2feb94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2feb94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2feb98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2feb9c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2feb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2feba0: 0xc09d4d4  jal         func_275350
    ctx->pc = 0x2FEBA0u;
    SET_GPR_U32(ctx, 31, 0x2FEBA8u);
    ctx->pc = 0x2FEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBA0u;
    // 0x2feba4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275350u, 0x2FEBA0u, 0x2FEBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBA8u;
label_2feba8:
    // 0x2feba8: 0x8e450190  lw          $a1, 0x190($s2)
    ctx->pc = 0x2feba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x2febac: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x2FEBACu;
    SET_GPR_U32(ctx, 31, 0x2FEBB4u);
    ctx->pc = 0x2FEBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBACu;
    // 0x2febb0: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x2FEBACu, 0x2FEBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBB4u;
label_2febb4:
    // 0x2febb4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2febb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2febb8: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x2febb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2febbc: 0xc09d524  jal         func_275490
    ctx->pc = 0x2FEBBCu;
    SET_GPR_U32(ctx, 31, 0x2FEBC4u);
    ctx->pc = 0x2FEBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBBCu;
    // 0x2febc0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FEBBCu, 0x2FEBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBC4u;
label_2febc4:
    // 0x2febc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2febc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2febc8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEBC8u;
    {
        const bool branch_taken_0x2febc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBC8u;
        // 0x2febcc: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febc8) {
            ctx->pc = 0x2FEBE0u;
            goto label_2febe0;
        }
    }
    ctx->pc = 0x2FEBD0u;
    // 0x2febd0: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2FEBD0u;
    SET_GPR_U32(ctx, 31, 0x2FEBD8u);
    ctx->pc = 0x2FEBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEBD0u;
    // 0x2febd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEBD0u, 0x2FEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEBD8u;
label_2febd8:
    // 0x2febd8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2FEBD8u;
    {
        const bool branch_taken_0x2febd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2febd8) {
            ctx->pc = 0x2FEC80u;
            goto label_2fec80;
        }
    }
    ctx->pc = 0x2FEBE0u;
label_2febe0:
    // 0x2febe0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2febe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2febe4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2febe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2febe8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FEBE8u;
    {
        const bool branch_taken_0x2febe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FEBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBE8u;
        // 0x2febec: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febe8) {
            ctx->pc = 0x2FEC28u;
            goto label_2fec28;
        }
    }
    ctx->pc = 0x2FEBF0u;
    // 0x2febf0: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FEBF0u;
    {
        const bool branch_taken_0x2febf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2febf0) {
            ctx->pc = 0x2FEC20u;
            goto label_2fec20;
        }
    }
    ctx->pc = 0x2FEBF8u;
    // 0x2febf8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2febf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2febfc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FEBFCu;
    {
        const bool branch_taken_0x2febfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FEC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEBFCu;
        // 0x2fec00: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2febfc) {
            ctx->pc = 0x2FEC20u;
            goto label_2fec20;
        }
    }
    ctx->pc = 0x2FEC04u;
    // 0x2fec04: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FEC04u;
    {
        const bool branch_taken_0x2fec04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fec04) {
            ctx->pc = 0x2FEC20u;
            goto label_2fec20;
        }
    }
    ctx->pc = 0x2FEC0Cu;
    // 0x2fec0c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fec10: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEC10u;
    {
        const bool branch_taken_0x2fec10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fec10) {
            ctx->pc = 0x2FEC20u;
            goto label_2fec20;
        }
    }
    ctx->pc = 0x2FEC18u;
    // 0x2fec18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FEC18u;
    {
        const bool branch_taken_0x2fec18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fec18) {
            ctx->pc = 0x2FEC28u;
            goto label_2fec28;
        }
    }
    ctx->pc = 0x2FEC20u;
label_2fec20:
    // 0x2fec20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fec20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fec24: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2fec24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2fec28:
    // 0x2fec28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fec28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec2c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2fec2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fec30:
    // 0x2fec30: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x2fec30u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2fec34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2fec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2fec38: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FEC38u;
    {
        const bool branch_taken_0x2fec38 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FEC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC38u;
        // 0x2fec3c: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec38) {
            ctx->pc = 0x2FEC60u;
            goto label_2fec60;
        }
    }
    ctx->pc = 0x2FEC40u;
    // 0x2fec40: 0xc09d524  jal         func_275490
    ctx->pc = 0x2FEC40u;
    SET_GPR_U32(ctx, 31, 0x2FEC48u);
    ctx->pc = 0x2FEC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC40u;
    // 0x2fec44: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275490u, 0x2FEC40u, 0x2FEC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC48u;
label_2fec48:
    // 0x2fec48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FEC48u;
    {
        const bool branch_taken_0x2fec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC48u;
        // 0x2fec4c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec48) {
            ctx->pc = 0x2FEC60u;
            goto label_2fec60;
        }
    }
    ctx->pc = 0x2FEC50u;
    // 0x2fec50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fec54: 0xc0bdb8c  jal         func_2F6E30
    ctx->pc = 0x2FEC54u;
    SET_GPR_U32(ctx, 31, 0x2FEC5Cu);
    ctx->pc = 0x2FEC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC54u;
    // 0x2fec58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6E30u, 0x2FEC54u, 0x2FEC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC5Cu;
label_2fec5c:
    // 0x2fec5c: 0x0  nop
    ctx->pc = 0x2fec5cu;
    // NOP
label_2fec60:
    // 0x2fec60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fec60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fec64: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2fec64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2fec68: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FEC68u;
    {
        const bool branch_taken_0x2fec68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC68u;
        // 0x2fec6c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fec68) {
            ctx->pc = 0x2FEC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fec30;
        }
    }
    ctx->pc = 0x2FEC70u;
    // 0x2fec70: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x2fec70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2fec74: 0xc09d4d8  jal         func_275360
    ctx->pc = 0x2FEC74u;
    SET_GPR_U32(ctx, 31, 0x2FEC7Cu);
    ctx->pc = 0x2FEC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FEC74u;
    // 0x2fec78: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275360u, 0x2FEC74u, 0x2FEC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FEC7Cu;
label_2fec7c:
    // 0x2fec7c: 0x0  nop
    ctx->pc = 0x2fec7cu;
    // NOP
label_2fec80:
    // 0x2fec80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fec84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fec84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fec88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fec88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fec8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fec8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fec90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fec90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fec94: 0x3e00008  jr          $ra
    ctx->pc = 0x2FEC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FEC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FEC94u;
        // 0x2fec98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FEC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FEC9Cu;
}
