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

// Function: sub_00298F50
// Address: 0x298f50 - 0x2997f8
void sub_00298F50_0x298f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F50_0x298f50");
#endif

    switch (ctx->pc) {
        case 0x298f70u: goto label_298f70;
        case 0x2992c8u: goto label_2992c8;
        case 0x299318u: goto label_299318;
        case 0x299360u: goto label_299360;
        case 0x299728u: goto label_299728;
        case 0x299788u: goto label_299788;
        case 0x2997e0u: goto label_2997e0;
        default: break;
    }

    ctx->pc = 0x298f50u;

    // 0x298f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298f54: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x298f58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298f5c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x298f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x298f60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298f64: 0x8f858960  lw          $a1, -0x76A0($gp)
    ctx->pc = 0x298f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
    // 0x298f68: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x298F68u;
    SET_GPR_U32(ctx, 31, 0x298F70u);
    ctx->pc = 0x298F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298F68u;
    // 0x298f6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x298F68u, 0x298F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298F70u;
label_298f70:
    // 0x298f70: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x298F70u;
    {
        const bool branch_taken_0x298f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f70) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298F78u;
    // 0x298f78: 0x93848954  lbu         $a0, -0x76AC($gp)
    ctx->pc = 0x298f78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x298f7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x298f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x298f80: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x298F80u;
    {
        const bool branch_taken_0x298f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x298f80) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298F88u;
    // 0x298f88: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x298f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x298f8c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x298f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x298f90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298F90u;
    {
        const bool branch_taken_0x298f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298f90) {
            ctx->pc = 0x298FA8u;
            goto label_298fa8;
        }
    }
    ctx->pc = 0x298F98u;
    // 0x298f98: 0x9783881c  lhu         $v1, -0x77E4($gp)
    ctx->pc = 0x298f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936604)));
    // 0x298f9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298F9Cu;
    {
        const bool branch_taken_0x298f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298f9c) {
            ctx->pc = 0x298FC0u;
            goto label_298fc0;
        }
    }
    ctx->pc = 0x298FA4u;
    // 0x298fa4: 0x0  nop
    ctx->pc = 0x298fa4u;
    // NOP
label_298fa8:
    // 0x298fa8: 0x93848958  lbu         $a0, -0x76A8($gp)
    ctx->pc = 0x298fa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x298fac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298fb0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x298FB0u;
    {
        const bool branch_taken_0x298fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x298fb0) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298FB8u;
    // 0x298fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298FB8u;
    {
        const bool branch_taken_0x298fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FB8u;
        // 0x298fbc: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fb8) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298FC0u;
label_298fc0:
    // 0x298fc0: 0x93848958  lbu         $a0, -0x76A8($gp)
    ctx->pc = 0x298fc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x298fc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x298fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298fc8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FC8u;
    {
        const bool branch_taken_0x298fc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x298FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FC8u;
        // 0x298fcc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fc8) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298FD0u;
    // 0x298fd0: 0xa3838958  sb          $v1, -0x76A8($gp)
    ctx->pc = 0x298fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 3));
    // 0x298fd4: 0x0  nop
    ctx->pc = 0x298fd4u;
    // NOP
label_298fd8:
    // 0x298fd8: 0x9783895c  lhu         $v1, -0x76A4($gp)
    ctx->pc = 0x298fd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x298fdc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x298FDCu;
    {
        const bool branch_taken_0x298fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298fdc) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x298fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x298fe8: 0xa783895c  sh          $v1, -0x76A4($gp)
    ctx->pc = 0x298fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936924), (uint16_t)GPR_U32(ctx, 3));
    // 0x298fec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x298fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x298ff0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x298FF0u;
    {
        const bool branch_taken_0x298ff0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x298ff0) {
            ctx->pc = 0x299000u;
            goto label_299000;
        }
    }
    ctx->pc = 0x298FF8u;
    // 0x298ff8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ffc: 0xa3838958  sb          $v1, -0x76A8($gp)
    ctx->pc = 0x298ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 3));
label_299000:
    // 0x299000: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x299000u;
    {
        const bool branch_taken_0x299000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x299000) {
            ctx->pc = 0x299030u;
            goto label_299030;
        }
    }
    ctx->pc = 0x299008u;
    // 0x299008: 0x93848958  lbu         $a0, -0x76A8($gp)
    ctx->pc = 0x299008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936920)));
    // 0x29900c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29900cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299010: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x299010u;
    {
        const bool branch_taken_0x299010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x299010) {
            ctx->pc = 0x299030u;
            goto label_299030;
        }
    }
    ctx->pc = 0x299018u;
    // 0x299018: 0x93838954  lbu         $v1, -0x76AC($gp)
    ctx->pc = 0x299018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x29901c: 0x106000da  beqz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x29901Cu;
    {
        const bool branch_taken_0x29901c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29901c) {
            ctx->pc = 0x299388u;
            goto label_299388;
        }
    }
    ctx->pc = 0x299024u;
    // 0x299024: 0x144000d8  bnez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x299024u;
    {
        const bool branch_taken_0x299024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299024) {
            ctx->pc = 0x299388u;
            goto label_299388;
        }
    }
    ctx->pc = 0x29902Cu;
    // 0x29902c: 0x0  nop
    ctx->pc = 0x29902cu;
    // NOP
label_299030:
    // 0x299030: 0x93848954  lbu         $a0, -0x76AC($gp)
    ctx->pc = 0x299030u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936916)));
    // 0x299034: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x299034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x299038: 0x108300c7  beq         $a0, $v1, . + 4 + (0xC7 << 2)
    ctx->pc = 0x299038u;
    {
        const bool branch_taken_0x299038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299038u;
        // 0x29903c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299038) {
            ctx->pc = 0x299358u;
            goto label_299358;
        }
    }
    ctx->pc = 0x299040u;
    // 0x299040: 0x1083009b  beq         $a0, $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x299040u;
    {
        const bool branch_taken_0x299040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x299040) {
            ctx->pc = 0x2992B0u;
            goto label_2992b0;
        }
    }
    ctx->pc = 0x299048u;
    // 0x299048: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x299048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29904c: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x29904Cu;
    {
        const bool branch_taken_0x29904c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x299050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29904Cu;
        // 0x299050: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29904c) {
            ctx->pc = 0x2991A0u;
            goto label_2991a0;
        }
    }
    ctx->pc = 0x299054u;
    // 0x299054: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x299054u;
    {
        const bool branch_taken_0x299054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x299054) {
            ctx->pc = 0x299070u;
            goto label_299070;
        }
    }
    ctx->pc = 0x29905Cu;
    // 0x29905c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29905cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299060: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299060u;
    {
        const bool branch_taken_0x299060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x299060) {
            ctx->pc = 0x299070u;
            goto label_299070;
        }
    }
    ctx->pc = 0x299068u;
    // 0x299068: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x299068u;
    {
        const bool branch_taken_0x299068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299068) {
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x299070u;
label_299070:
    // 0x299070: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299074: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x299074u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299078: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x299078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x29907c: 0x346cffff  ori         $t4, $v1, 0xFFFF
    ctx->pc = 0x29907cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x299080: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x299080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x299084: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x299084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x299088: 0x34aaffff  ori         $t2, $a1, 0xFFFF
    ctx->pc = 0x299088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x29908c: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x29908cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x299090: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x299090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x299094: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299098: 0x9487c  dsll32      $t1, $t1, 1
    ctx->pc = 0x299098u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 1));
    // 0x29909c: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x29909cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2990a0: 0x9487e  dsrl32      $t1, $t1, 1
    ctx->pc = 0x2990a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 1));
    // 0x2990a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990a8: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x2990a8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2990ac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990b0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2990b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2990b4: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x2990b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2990b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990bc: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2990bcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2990c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990c4: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x2990c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x2990c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990cc: 0xac29ced0  sw          $t1, -0x3130($at)
    ctx->pc = 0x2990ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2990d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2990d4: 0x34a9ffff  ori         $t1, $a1, 0xFFFF
    ctx->pc = 0x2990d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2990d8: 0x8c2dced0  lw          $t5, -0x3130($at)
    ctx->pc = 0x2990d8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2990dc: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x2990dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2990e0: 0x3c07fdff  lui         $a3, 0xFDFF
    ctx->pc = 0x2990e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65023 << 16));
    // 0x2990e4: 0x3c06feff  lui         $a2, 0xFEFF
    ctx->pc = 0x2990e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65279 << 16));
    // 0x2990e8: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x2990e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2990ec: 0x34c7ffff  ori         $a3, $a2, 0xFFFF
    ctx->pc = 0x2990ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2990f0: 0x3c06dfff  lui         $a2, 0xDFFF
    ctx->pc = 0x2990f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57343 << 16));
    // 0x2990f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2990f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2990f8: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x2990f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x2990fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2990fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299100: 0xac2cced0  sw          $t4, -0x3130($at)
    ctx->pc = 0x299100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299104: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299108: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x299108u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29910c: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x29910cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x299110: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299114: 0xac2bced0  sw          $t3, -0x3130($at)
    ctx->pc = 0x299114u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299118: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29911c: 0x8c2bced0  lw          $t3, -0x3130($at)
    ctx->pc = 0x29911cu;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299120: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x299120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x299124: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299128: 0xac2aced0  sw          $t2, -0x3130($at)
    ctx->pc = 0x299128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29912c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299130: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x299130u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299134: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x299134u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x299138: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29913c: 0xac29ced0  sw          $t1, -0x3130($at)
    ctx->pc = 0x29913cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299140: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299144: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299148: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x299148u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x29914c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29914cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299150: 0xac28ced0  sw          $t0, -0x3130($at)
    ctx->pc = 0x299150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299154: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299158: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x299158u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29915c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x29915cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x299160: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299164: 0xac27ced0  sw          $a3, -0x3130($at)
    ctx->pc = 0x299164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299168: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29916c: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x29916cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299170: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x299170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x299174: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299178: 0xac26ced0  sw          $a2, -0x3130($at)
    ctx->pc = 0x299178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29917c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299180: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x299180u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299184: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x299184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x299188: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29918c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x29918cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x299190: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x299190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x299194: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x299194u;
    {
        const bool branch_taken_0x299194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299194u;
        // 0x299198: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299194) {
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x29919Cu;
    // 0x29919c: 0x0  nop
    ctx->pc = 0x29919cu;
    // NOP
label_2991a0:
    // 0x2991a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2991a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2991a4: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2991a8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x2991a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x2991ac: 0x346bffff  ori         $t3, $v1, 0xFFFF
    ctx->pc = 0x2991acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2991b0: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2991b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x2991b4: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x2991b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x2991b8: 0x346affff  ori         $t2, $v1, 0xFFFF
    ctx->pc = 0x2991b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2991bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2991c0: 0x9607c  dsll32      $t4, $t1, 1
    ctx->pc = 0x2991c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) << (32 + 1));
    // 0x2991c4: 0x8c28cec4  lw          $t0, -0x313C($at)
    ctx->pc = 0x2991c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954692)));
    // 0x2991c8: 0x34a9ffff  ori         $t1, $a1, 0xFFFF
    ctx->pc = 0x2991c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2991cc: 0xc607e  dsrl32      $t4, $t4, 1
    ctx->pc = 0x2991ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 1));
    // 0x2991d0: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2991d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2991d4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2991d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2991d8: 0x8c27cec8  lw          $a3, -0x3138($at)
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x2991dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2991dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2991e0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2991e4: 0x8c26cecc  lw          $a2, -0x3134($at)
    ctx->pc = 0x2991e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CECCu));
    // 0x2991e8: 0x34a8ffff  ori         $t0, $a1, 0xFFFF
    ctx->pc = 0x2991e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2991ec: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2991ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2991f0: 0xc72825  or          $a1, $a2, $a3
    ctx->pc = 0x2991f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2991f4: 0x8c24ced8  lw          $a0, -0x3128($at)
    ctx->pc = 0x2991f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CED8u));
    // 0x2991f8: 0x3c07fdff  lui         $a3, 0xFDFF
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65023 << 16));
    // 0x2991fc: 0x3c06dfff  lui         $a2, 0xDFFF
    ctx->pc = 0x2991fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57343 << 16));
    // 0x299200: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x299200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x299204: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x299204u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x299208: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29920c: 0x8c23cedc  lw          $v1, -0x3124($at)
    ctx->pc = 0x29920cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x299210: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299214: 0xac2cced0  sw          $t4, -0x3130($at)
    ctx->pc = 0x299214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299218: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29921c: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x29921cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299220: 0x18b5824  and         $t3, $t4, $t3
    ctx->pc = 0x299220u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & GPR_U64(ctx, 11));
    // 0x299224: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299228: 0xac2bced0  sw          $t3, -0x3130($at)
    ctx->pc = 0x299228u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29922c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29922cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299230: 0x8c2bced0  lw          $t3, -0x3130($at)
    ctx->pc = 0x299230u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299234: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x299238: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29923c: 0xac2aced0  sw          $t2, -0x3130($at)
    ctx->pc = 0x29923cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299240: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299244: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x299244u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299248: 0x1494824  and         $t1, $t2, $t1
    ctx->pc = 0x299248u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 9));
    // 0x29924c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299250: 0xac29ced0  sw          $t1, -0x3130($at)
    ctx->pc = 0x299250u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299254: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299258: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x299258u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29925c: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x29925cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x299260: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299264: 0xac28ced0  sw          $t0, -0x3130($at)
    ctx->pc = 0x299264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299268: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29926c: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x29926cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299270: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x299270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x299274: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299278: 0xac27ced0  sw          $a3, -0x3130($at)
    ctx->pc = 0x299278u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29927c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29927cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299280: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x299280u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299284: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x299284u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x299288: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29928c: 0xac26ced0  sw          $a2, -0x3130($at)
    ctx->pc = 0x29928cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299290: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299294: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x299294u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299298: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x299298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29929c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29929cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2992a0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2992a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2992a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2992a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2992a8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2992A8u;
    {
        const bool branch_taken_0x2992a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992A8u;
        // 0x2992ac: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992a8) {
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x2992B0u;
label_2992b0:
    // 0x2992b0: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x2992b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x2992b4: 0x8c25f680  lw          $a1, -0x980($at)
    ctx->pc = 0x2992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8BF680u));
    // 0x2992b8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2992b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2992bc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2992BCu;
    {
        const bool branch_taken_0x2992bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2992bc) {
            ctx->pc = 0x299300u;
            goto label_299300;
        }
    }
    ctx->pc = 0x2992C4u;
    // 0x2992c4: 0x0  nop
    ctx->pc = 0x2992c4u;
    // NOP
label_2992c8:
    // 0x2992c8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2992c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2992cc: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x2992ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2992d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2992D0u;
    {
        const bool branch_taken_0x2992d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2992D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992D0u;
        // 0x2992d4: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992d0) {
            ctx->pc = 0x2992E0u;
            goto label_2992e0;
        }
    }
    ctx->pc = 0x2992D8u;
    // 0x2992d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2992d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992dc: 0x0  nop
    ctx->pc = 0x2992dcu;
    // NOP
label_2992e0:
    // 0x2992e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2992E0u;
    {
        const bool branch_taken_0x2992e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2992e0) {
            ctx->pc = 0x2992F0u;
            goto label_2992f0;
        }
    }
    ctx->pc = 0x2992E8u;
    // 0x2992e8: 0xa0a007d6  sb          $zero, 0x7D6($a1)
    ctx->pc = 0x2992e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2006), (uint8_t)GPR_U32(ctx, 0));
    // 0x2992ec: 0x0  nop
    ctx->pc = 0x2992ecu;
    // NOP
label_2992f0:
    // 0x2992f0: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2992f4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2992f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2992f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2992F8u;
    {
        const bool branch_taken_0x2992f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2992f8) {
            ctx->pc = 0x2992C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2992c8;
        }
    }
    ctx->pc = 0x299300u;
label_299300:
    // 0x299300: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x299300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x299304: 0x8c252410  lw          $a1, 0x2410($at)
    ctx->pc = 0x299304u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8D2410u));
    // 0x299308: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x299308u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29930c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x29930Cu;
    {
        const bool branch_taken_0x29930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29930c) {
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x299314u;
    // 0x299314: 0x0  nop
    ctx->pc = 0x299314u;
    // NOP
label_299318:
    // 0x299318: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x299318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x29931c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x29931cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x299320: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x299320u;
    {
        const bool branch_taken_0x299320 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x299324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299320u;
        // 0x299324: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299320) {
            ctx->pc = 0x299330u;
            goto label_299330;
        }
    }
    ctx->pc = 0x299328u;
    // 0x299328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29932c: 0x0  nop
    ctx->pc = 0x29932cu;
    // NOP
label_299330:
    // 0x299330: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299330u;
    {
        const bool branch_taken_0x299330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x299330) {
            ctx->pc = 0x299340u;
            goto label_299340;
        }
    }
    ctx->pc = 0x299338u;
    // 0x299338: 0xa0a007d6  sb          $zero, 0x7D6($a1)
    ctx->pc = 0x299338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2006), (uint8_t)GPR_U32(ctx, 0));
    // 0x29933c: 0x0  nop
    ctx->pc = 0x29933cu;
    // NOP
label_299340:
    // 0x299340: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x299340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x299344: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x299344u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299348: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x299348u;
    {
        const bool branch_taken_0x299348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299348) {
            ctx->pc = 0x299318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299318;
        }
    }
    ctx->pc = 0x299350u;
    // 0x299350: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299350u;
    {
        const bool branch_taken_0x299350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299350) {
            ctx->pc = 0x299360u;
            goto label_299360;
        }
    }
    ctx->pc = 0x299358u;
label_299358:
    // 0x299358: 0xc0acb4c  jal         func_2B2D30
    ctx->pc = 0x299358u;
    SET_GPR_U32(ctx, 31, 0x299360u);
    ctx->pc = 0x2B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2D30u, 0x299358u, 0x299360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299360u;
label_299360:
    // 0x299360: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x299360u;
    {
        const bool branch_taken_0x299360 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x299360) {
            ctx->pc = 0x299378u;
            goto label_299378;
        }
    }
    ctx->pc = 0x299368u;
    // 0x299368: 0xa3808954  sb          $zero, -0x76AC($gp)
    ctx->pc = 0x299368u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936916), (uint8_t)GPR_U32(ctx, 0));
    // 0x29936c: 0xaf808960  sw          $zero, -0x76A0($gp)
    ctx->pc = 0x29936cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 0));
    // 0x299370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299370u;
    {
        const bool branch_taken_0x299370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299370u;
        // 0x299374: 0xa3808958  sb          $zero, -0x76A8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299370) {
            ctx->pc = 0x299380u;
            goto label_299380;
        }
    }
    ctx->pc = 0x299378u;
label_299378:
    // 0x299378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x299378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29937c: 0xa3838958  sb          $v1, -0x76A8($gp)
    ctx->pc = 0x29937cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 3));
label_299380:
    // 0x299380: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x299380u;
    {
        const bool branch_taken_0x299380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x299380) {
            ctx->pc = 0x2997E8u;
            goto label_2997e8;
        }
    }
    ctx->pc = 0x299388u;
label_299388:
    // 0x299388: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x299388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29938c: 0x14850116  bne         $a0, $a1, . + 4 + (0x116 << 2)
    ctx->pc = 0x29938Cu;
    {
        const bool branch_taken_0x29938c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x29938c) {
            ctx->pc = 0x2997E8u;
            goto label_2997e8;
        }
    }
    ctx->pc = 0x299394u;
    // 0x299394: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x299394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x299398: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x299398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29939c: 0x1083010e  beq         $a0, $v1, . + 4 + (0x10E << 2)
    ctx->pc = 0x29939Cu;
    {
        const bool branch_taken_0x29939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x29939c) {
            ctx->pc = 0x2997D8u;
            goto label_2997d8;
        }
    }
    ctx->pc = 0x2993A4u;
    // 0x2993a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2993a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2993a8: 0x108300d9  beq         $a0, $v1, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2993A8u;
    {
        const bool branch_taken_0x2993a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2993ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993A8u;
        // 0x2993ac: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993a8) {
            ctx->pc = 0x299710u;
            goto label_299710;
        }
    }
    ctx->pc = 0x2993B0u;
    // 0x2993b0: 0x1083009d  beq         $a0, $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x2993B0u;
    {
        const bool branch_taken_0x2993b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2993b0) {
            ctx->pc = 0x299628u;
            goto label_299628;
        }
    }
    ctx->pc = 0x2993B8u;
    // 0x2993b8: 0x1085004b  beq         $a0, $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2993B8u;
    {
        const bool branch_taken_0x2993b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2993BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2993B8u;
        // 0x2993bc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2993b8) {
            ctx->pc = 0x2994E8u;
            goto label_2994e8;
        }
    }
    ctx->pc = 0x2993C0u;
    // 0x2993c0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2993C0u;
    {
        const bool branch_taken_0x2993c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2993c0) {
            ctx->pc = 0x2993D0u;
            goto label_2993d0;
        }
    }
    ctx->pc = 0x2993C8u;
    // 0x2993c8: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2993C8u;
    {
        const bool branch_taken_0x2993c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2993c8) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x2993D0u;
label_2993d0:
    // 0x2993d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2993d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2993d4: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x2993d4u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2993d8: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x2993d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x2993dc: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x2993dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x2993e0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x2993e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x2993e4: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2993e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x2993e8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2993ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2993ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2993f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2993f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2993f4: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x2993f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x2993f8: 0x8c28cec0  lw          $t0, -0x3140($at)
    ctx->pc = 0x2993f8u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2993fc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2993fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299400: 0xac29ced0  sw          $t1, -0x3130($at)
    ctx->pc = 0x299400u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299404: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299408: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x299408u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29940c: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x29940cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x299410: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299414: 0xac28cec0  sw          $t0, -0x3140($at)
    ctx->pc = 0x299414u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299418: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x299418u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x29941c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29941cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299420: 0xac27ced0  sw          $a3, -0x3130($at)
    ctx->pc = 0x299420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299424: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299428: 0x8c27cec0  lw          $a3, -0x3140($at)
    ctx->pc = 0x299428u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x29942c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29942cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299430: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x299430u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299434: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x299434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x299438: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29943c: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x29943cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299440: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x299440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x299444: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299448: 0xac26ced0  sw          $a2, -0x3130($at)
    ctx->pc = 0x299448u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29944c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299450: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x299450u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x299454: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299458: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x299458u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29945c: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29945cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x299460: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299464: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x299464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299468: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x299468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x29946c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29946cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299470: 0xac25ced0  sw          $a1, -0x3130($at)
    ctx->pc = 0x299470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299474: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299478: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x299478u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x29947c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29947cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299480: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x299480u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299484: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x299484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x299488: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29948c: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x29948cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299490: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x299490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x299494: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299498: 0xac24ced0  sw          $a0, -0x3130($at)
    ctx->pc = 0x299498u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29949c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29949cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994a0: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2994a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2994a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994a8: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2994ac: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2994acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2994b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994b4: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x2994b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2994b8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2994b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2994bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994c0: 0xac23ced0  sw          $v1, -0x3130($at)
    ctx->pc = 0x2994c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2994c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994c8: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2994c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2994cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994d0: 0x8c23ced0  lw          $v1, -0x3130($at)
    ctx->pc = 0x2994d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2994d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2994d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2994d8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994dc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x2994DCu;
    {
        const bool branch_taken_0x2994dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2994DCu;
        // 0x2994e0: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2994dc) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x2994E4u;
    // 0x2994e4: 0x0  nop
    ctx->pc = 0x2994e4u;
    // NOP
label_2994e8:
    // 0x2994e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2994e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2994ec: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x2994ecu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2994f0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2994f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2994f4: 0x3c0a0400  lui         $t2, 0x400
    ctx->pc = 0x2994f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1024 << 16));
    // 0x2994f8: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2994f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2994fc: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x2994fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
    // 0x299500: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x299500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x299504: 0x87858200  lh          $a1, -0x7E00($gp)
    ctx->pc = 0x299504u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935040)));
    // 0x299508: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x299508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x29950c: 0x93848202  lbu         $a0, -0x7DFE($gp)
    ctx->pc = 0x29950cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935042)));
    // 0x299510: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299514: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x299514u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x299518: 0x8c2bcec0  lw          $t3, -0x3140($at)
    ctx->pc = 0x299518u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x29951c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299520: 0xac2cced0  sw          $t4, -0x3130($at)
    ctx->pc = 0x299520u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299524: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299528: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x299528u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29952c: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x29952cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x299530: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299534: 0xac2bcec0  sw          $t3, -0x3140($at)
    ctx->pc = 0x299534u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299538: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x299538u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x29953c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299540: 0xac2aced0  sw          $t2, -0x3130($at)
    ctx->pc = 0x299540u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299544: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299548: 0x8c2acec0  lw          $t2, -0x3140($at)
    ctx->pc = 0x299548u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x29954c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299550: 0x8c2bced0  lw          $t3, -0x3130($at)
    ctx->pc = 0x299550u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299554: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x299554u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x299558: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29955c: 0xac2acec0  sw          $t2, -0x3140($at)
    ctx->pc = 0x29955cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299560: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x299560u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x299564: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299568: 0xac29ced0  sw          $t1, -0x3130($at)
    ctx->pc = 0x299568u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29956c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29956cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299570: 0x8c29cec0  lw          $t1, -0x3140($at)
    ctx->pc = 0x299570u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x299574: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299578: 0x8c2aced0  lw          $t2, -0x3130($at)
    ctx->pc = 0x299578u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CED0u));
    // 0x29957c: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x29957cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x299580: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299584: 0xac29cec0  sw          $t1, -0x3140($at)
    ctx->pc = 0x299584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299588: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x299588u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x29958c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299590: 0xac28ced0  sw          $t0, -0x3130($at)
    ctx->pc = 0x299590u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299594: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299598: 0x8c28cec0  lw          $t0, -0x3140($at)
    ctx->pc = 0x299598u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x29959c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29959cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995a0: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x2995a0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2995a4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x2995a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x2995a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995ac: 0xac28cec0  sw          $t0, -0x3140($at)
    ctx->pc = 0x2995acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2995b0: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x2995b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x2995b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995b8: 0xac27ced0  sw          $a3, -0x3130($at)
    ctx->pc = 0x2995b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2995bc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995c0: 0x8c28cec0  lw          $t0, -0x3140($at)
    ctx->pc = 0x2995c0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2995c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995c8: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x2995c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2995cc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x2995ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x2995d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995d4: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x2995d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2995d8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x2995d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2995dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995e0: 0xa0c40002  sb          $a0, 0x2($a2)
    ctx->pc = 0x2995e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2995e4: 0x904608e8  lbu         $a2, 0x8E8($v0)
    ctx->pc = 0x2995e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2280)));
    // 0x2995e8: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2995e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2995ec: 0xdd3021  addu        $a2, $a2, $sp
    ctx->pc = 0x2995ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2995f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2995f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2995f4: 0x90c6002c  lbu         $a2, 0x2C($a2)
    ctx->pc = 0x2995f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2995f8: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2995f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2995fc: 0xc31806  srlv        $v1, $v1, $a2
    ctx->pc = 0x2995fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x299600: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x299600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x299604: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299608: 0xac23ced0  sw          $v1, -0x3130($at)
    ctx->pc = 0x299608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x29960c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29960cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299610: 0x8c23ced0  lw          $v1, -0x3130($at)
    ctx->pc = 0x299610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299614: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x299614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299618: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29961c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x29961Cu;
    {
        const bool branch_taken_0x29961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29961Cu;
        // 0x299620: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29961c) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x299624u;
    // 0x299624: 0x0  nop
    ctx->pc = 0x299624u;
    // NOP
label_299628:
    // 0x299628: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29962c: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x29962cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299630: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x299630u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x299634: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x299634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x299638: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x299638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x29963c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x29963cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x299640: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x299644: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299648: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x299648u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x29964c: 0x8c27cec0  lw          $a3, -0x3140($at)
    ctx->pc = 0x29964cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x299650: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299654: 0xac28ced0  sw          $t0, -0x3130($at)
    ctx->pc = 0x299654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299658: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29965c: 0x8c28ced0  lw          $t0, -0x3130($at)
    ctx->pc = 0x29965cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299660: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x299660u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x299664: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299668: 0xac27cec0  sw          $a3, -0x3140($at)
    ctx->pc = 0x299668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x29966c: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x29966cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x299670: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299674: 0xac26ced0  sw          $a2, -0x3130($at)
    ctx->pc = 0x299674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x299678: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29967c: 0x8c26cec0  lw          $a2, -0x3140($at)
    ctx->pc = 0x29967cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x299680: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299684: 0x8c27ced0  lw          $a3, -0x3130($at)
    ctx->pc = 0x299684u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299688: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x299688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29968c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x29968cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299690: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x299690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x299694: 0xe52825  or          $a1, $a3, $a1
    ctx->pc = 0x299694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x299698: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x29969c: 0xac25ced0  sw          $a1, -0x3130($at)
    ctx->pc = 0x29969cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2996a0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996a4: 0x8c25cec0  lw          $a1, -0x3140($at)
    ctx->pc = 0x2996a4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2996a8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996ac: 0x8c26ced0  lw          $a2, -0x3130($at)
    ctx->pc = 0x2996acu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2996b0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x2996b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2996b4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996b8: 0xac25cec0  sw          $a1, -0x3140($at)
    ctx->pc = 0x2996b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2996bc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x2996bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x2996c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996c4: 0xac24ced0  sw          $a0, -0x3130($at)
    ctx->pc = 0x2996c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2996c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996cc: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2996ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2996d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996d4: 0x8c25ced0  lw          $a1, -0x3130($at)
    ctx->pc = 0x2996d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x81CED0u));
    // 0x2996d8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2996d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2996dc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996e0: 0xac24cec0  sw          $a0, -0x3140($at)
    ctx->pc = 0x2996e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x2996e4: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x2996e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2996e8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996ec: 0xac23ced0  sw          $v1, -0x3130($at)
    ctx->pc = 0x2996ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CED0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CED0u, _value); } while (0);
    // 0x2996f0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996f4: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2996f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2996f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2996f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2996fc: 0x8c23ced0  lw          $v1, -0x3130($at)
    ctx->pc = 0x2996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CED0u));
    // 0x299700: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x299700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299704: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x299704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x299708: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x299708u;
    {
        const bool branch_taken_0x299708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299708u;
        // 0x29970c: 0xac23cec0  sw          $v1, -0x3140($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299708) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x299710u;
label_299710:
    // 0x299710: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x299710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x299714: 0x8c26f680  lw          $a2, -0x980($at)
    ctx->pc = 0x299714u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8BF680u));
    // 0x299718: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x299718u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29971c: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29971Cu;
    {
        const bool branch_taken_0x29971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29971Cu;
        // 0x299720: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29971c) {
            ctx->pc = 0x299770u;
            goto label_299770;
        }
    }
    ctx->pc = 0x299724u;
    // 0x299724: 0x0  nop
    ctx->pc = 0x299724u;
    // NOP
label_299728:
    // 0x299728: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x299728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x29972c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x29972cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x299730: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x299730u;
    {
        const bool branch_taken_0x299730 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x299734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299730u;
        // 0x299734: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299730) {
            ctx->pc = 0x299740u;
            goto label_299740;
        }
    }
    ctx->pc = 0x299738u;
    // 0x299738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29973c: 0x0  nop
    ctx->pc = 0x29973cu;
    // NOP
label_299740:
    // 0x299740: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x299740u;
    {
        const bool branch_taken_0x299740 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x299740) {
            ctx->pc = 0x299760u;
            goto label_299760;
        }
    }
    ctx->pc = 0x299748u;
    // 0x299748: 0x90c5000a  lbu         $a1, 0xA($a2)
    ctx->pc = 0x299748u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x29974c: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x29974cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x299750: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299750u;
    {
        const bool branch_taken_0x299750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x299750) {
            ctx->pc = 0x299760u;
            goto label_299760;
        }
    }
    ctx->pc = 0x299758u;
    // 0x299758: 0xa0c307d6  sb          $v1, 0x7D6($a2)
    ctx->pc = 0x299758u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2006), (uint8_t)GPR_U32(ctx, 3));
    // 0x29975c: 0x0  nop
    ctx->pc = 0x29975cu;
    // NOP
label_299760:
    // 0x299760: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x299760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x299764: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x299764u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x299768: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x299768u;
    {
        const bool branch_taken_0x299768 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x299768) {
            ctx->pc = 0x299728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299728;
        }
    }
    ctx->pc = 0x299770u;
label_299770:
    // 0x299770: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x299770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x299774: 0x8c262410  lw          $a2, 0x2410($at)
    ctx->pc = 0x299774u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8D2410u));
    // 0x299778: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x299778u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29977c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29977Cu;
    {
        const bool branch_taken_0x29977c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29977Cu;
        // 0x299780: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29977c) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x299784u;
    // 0x299784: 0x0  nop
    ctx->pc = 0x299784u;
    // NOP
label_299788:
    // 0x299788: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x29978c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x29978cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x299790: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x299790u;
    {
        const bool branch_taken_0x299790 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x299794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299790u;
        // 0x299794: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299790) {
            ctx->pc = 0x2997A0u;
            goto label_2997a0;
        }
    }
    ctx->pc = 0x299798u;
    // 0x299798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29979c: 0x0  nop
    ctx->pc = 0x29979cu;
    // NOP
label_2997a0:
    // 0x2997a0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2997A0u;
    {
        const bool branch_taken_0x2997a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2997a0) {
            ctx->pc = 0x2997C0u;
            goto label_2997c0;
        }
    }
    ctx->pc = 0x2997A8u;
    // 0x2997a8: 0x90c5000a  lbu         $a1, 0xA($a2)
    ctx->pc = 0x2997a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x2997ac: 0x9044000a  lbu         $a0, 0xA($v0)
    ctx->pc = 0x2997acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2997b0: 0x10a40003  beq         $a1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2997B0u;
    {
        const bool branch_taken_0x2997b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2997b0) {
            ctx->pc = 0x2997C0u;
            goto label_2997c0;
        }
    }
    ctx->pc = 0x2997B8u;
    // 0x2997b8: 0xa0c307d6  sb          $v1, 0x7D6($a2)
    ctx->pc = 0x2997b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2006), (uint8_t)GPR_U32(ctx, 3));
    // 0x2997bc: 0x0  nop
    ctx->pc = 0x2997bcu;
    // NOP
label_2997c0:
    // 0x2997c0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x2997c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2997c4: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2997c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2997c8: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2997C8u;
    {
        const bool branch_taken_0x2997c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2997c8) {
            ctx->pc = 0x299788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299788;
        }
    }
    ctx->pc = 0x2997D0u;
    // 0x2997d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2997D0u;
    {
        const bool branch_taken_0x2997d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2997d0) {
            ctx->pc = 0x2997E0u;
            goto label_2997e0;
        }
    }
    ctx->pc = 0x2997D8u;
label_2997d8:
    // 0x2997d8: 0xc0acb04  jal         func_2B2C10
    ctx->pc = 0x2997D8u;
    SET_GPR_U32(ctx, 31, 0x2997E0u);
    ctx->pc = 0x2997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997D8u;
    // 0x2997dc: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C10u, 0x2997D8u, 0x2997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997E0u;
label_2997e0:
    // 0x2997e0: 0xa3808958  sb          $zero, -0x76A8($gp)
    ctx->pc = 0x2997e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936920), (uint8_t)GPR_U32(ctx, 0));
    // 0x2997e4: 0x0  nop
    ctx->pc = 0x2997e4u;
    // NOP
label_2997e8:
    // 0x2997e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2997e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2997ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2997ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2997f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2997F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2997F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997F0u;
        // 0x2997f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2997F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2997F8u;
}
