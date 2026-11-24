#include <cstdio>
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

// Function: sub_003A4450
// Address: 0x3a4450 - 0x3a4c30
void sub_003A4450_0x3a4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4450_0x3a4450");
#endif

    switch (ctx->pc) {
        case 0x3a44f8u: goto label_3a44f8;
        case 0x3a4540u: goto label_3a4540;
        case 0x3a4570u: goto label_3a4570;
        case 0x3a45b8u: goto label_3a45b8;
        case 0x3a45e8u: goto label_3a45e8;
        case 0x3a4630u: goto label_3a4630;
        case 0x3a4658u: goto label_3a4658;
        case 0x3a46a0u: goto label_3a46a0;
        case 0x3a46c8u: goto label_3a46c8;
        case 0x3a4710u: goto label_3a4710;
        case 0x3a4738u: goto label_3a4738;
        case 0x3a4780u: goto label_3a4780;
        case 0x3a47a8u: goto label_3a47a8;
        case 0x3a47f0u: goto label_3a47f0;
        case 0x3a48e8u: goto label_3a48e8;
        case 0x3a48f8u: goto label_3a48f8;
        case 0x3a4908u: goto label_3a4908;
        case 0x3a4918u: goto label_3a4918;
        case 0x3a4920u: goto label_3a4920;
        case 0x3a4930u: goto label_3a4930;
        case 0x3a4938u: goto label_3a4938;
        case 0x3a4940u: goto label_3a4940;
        case 0x3a4950u: goto label_3a4950;
        case 0x3a4958u: goto label_3a4958;
        case 0x3a4998u: goto label_3a4998;
        case 0x3a49dcu: goto label_3a49dc;
        case 0x3a4ab4u: goto label_3a4ab4;
        case 0x3a4ac8u: goto label_3a4ac8;
        case 0x3a4af0u: goto label_3a4af0;
        case 0x3a4b0cu: goto label_3a4b0c;
        case 0x3a4b18u: goto label_3a4b18;
        case 0x3a4bfcu: goto label_3a4bfc;
        case 0x3a4c0cu: goto label_3a4c0c;
        default: break;
    }

    ctx->pc = 0x3a4450u;

    // 0x3a4450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4454: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a4454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a4458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a445c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a4460: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a4460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3a4464: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3a4464u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3a4468: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x3a4468u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x3a446c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a446cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a4470: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3a4470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3a4474: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x3a4474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x3a4478: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3a4478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3a447c: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x3a447cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA20u));
    // 0x3a4480: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3a4480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    { static uint64_t last[4]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[4]={(uint64_t)(READ32(0x923340u)),(uint64_t)(READ32(0x923344u)),(uint64_t)(READ32(0x923348u)),(uint64_t)(READ32(0x923384u)),}; bool chg=first; for(int i=0;i<4;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<60) { ++lines; first=false; for(int i=0;i<4;++i) last[i]=cur[i]; fprintf(stderr,"[px mcchk] hit=%u " "w0=0x%llx w1=0x%llx w2=0x%llx w46=0x%llx" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2],(unsigned long long)cur[3]); } }
    // 0x3a4484: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a4484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a4488: 0x10620191  beq         $v1, $v0, . + 4 + (0x191 << 2)
    ctx->pc = 0x3A4488u;
    {
        const bool branch_taken_0x3a4488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4488u;
        // 0x3a448c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4488) {
            ctx->pc = 0x3A4AD0u;
            goto label_3a4ad0;
        }
    }
    ctx->pc = 0x3A4490u;
    // 0x3a4490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a4490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4494: 0x10620142  beq         $v1, $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x3A4494u;
    {
        const bool branch_taken_0x3a4494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a4494) {
            ctx->pc = 0x3A49A0u;
            goto label_3a49a0;
        }
    }
    ctx->pc = 0x3A449Cu;
    // 0x3a449c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A449Cu;
    {
        const bool branch_taken_0x3a449c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a449c) {
            ctx->pc = 0x3A44B0u;
            goto label_3a44b0;
        }
    }
    ctx->pc = 0x3A44A4u;
    // 0x3a44a4: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x3A44A4u;
    {
        const bool branch_taken_0x3a44a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a44a4) {
            ctx->pc = 0x3A4C18u;
            goto label_3a4c18;
        }
    }
    ctx->pc = 0x3A44ACu;
    // 0x3a44ac: 0x0  nop
    ctx->pc = 0x3a44acu;
    // NOP
label_3a44b0:
    // 0x3a44b0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3a44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a44b4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a44b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a44b8: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x3a44b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x3a44bc: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x3a44bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44c0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x3a44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3a44c4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a44c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44c8: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x3a44c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x3a44cc: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a44ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a44d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3a44d4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a44d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44d8: 0x24a599e0  addiu       $a1, $a1, -0x6620
    ctx->pc = 0x3a44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941152));
    // 0x3a44dc: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x3a44dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a44e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a44e4: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x3a44e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44e8: 0xa603001a  sh          $v1, 0x1A($s0)
    ctx->pc = 0x3a44e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a44ec: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x3a44ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a44f0: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x3a44f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44f4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3a44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_3a44f8:
    // 0x3a44f8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a44f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a44fc: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a44fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4500: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a4504: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a4504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a4508: 0x2c820088  sltiu       $v0, $a0, 0x88
    ctx->pc = 0x3a4508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3a450c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a450cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4510: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a4510u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4514: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a4514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a4518: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a4518u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a451c: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a451cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4520: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3a4520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3a4524: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a4524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4528: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x3a4528u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a452c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A452Cu;
    {
        const bool branch_taken_0x3a452c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A452Cu;
        // 0x3a4530: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a452c) {
            ctx->pc = 0x3A44F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a44f8;
        }
    }
    ctx->pc = 0x3A4534u;
    // 0x3a4534: 0x2c810090  sltiu       $at, $a0, 0x90
    ctx->pc = 0x3a4534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a4538: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4538u;
    {
        const bool branch_taken_0x3a4538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4538) {
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4540u;
label_3a4540:
    // 0x3a4540: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a4540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4544: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3a4544u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4548: 0x2c820090  sltiu       $v0, $a0, 0x90
    ctx->pc = 0x3a4548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a454c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a454cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a4550: 0x0  nop
    ctx->pc = 0x3a4550u;
    // NOP
    // 0x3a4554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4554u;
    {
        const bool branch_taken_0x3a4554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4554) {
            ctx->pc = 0x3A4540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4540;
        }
    }
    ctx->pc = 0x3A455Cu;
    // 0x3a455c: 0x0  nop
    ctx->pc = 0x3a455cu;
    // NOP
label_3a4560:
    // 0x3a4560: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a4560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a4564: 0x24639a70  addiu       $v1, $v1, -0x6590
    ctx->pc = 0x3a4564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941296));
    // 0x3a4568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a456c: 0x0  nop
    ctx->pc = 0x3a456cu;
    // NOP
label_3a4570:
    // 0x3a4570: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4574: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4574u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4578: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a4578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a457c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4580: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a4580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a4584: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4588: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a458c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a458cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4590: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4594: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4594u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4598: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a459c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a459cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a45a0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a45a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a45a4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A45A4u;
    {
        const bool branch_taken_0x3a45a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A45A4u;
        // 0x3a45a8: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a45a4) {
            ctx->pc = 0x3A4570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4570;
        }
    }
    ctx->pc = 0x3A45ACu;
    // 0x3a45ac: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a45acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a45b0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A45B0u;
    {
        const bool branch_taken_0x3a45b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a45b0) {
            ctx->pc = 0x3A45D8u;
            goto label_3a45d8;
        }
    }
    ctx->pc = 0x3A45B8u;
label_3a45b8:
    // 0x3a45b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a45bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a45bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a45c0: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a45c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a45c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a45c8: 0x0  nop
    ctx->pc = 0x3a45c8u;
    // NOP
    // 0x3a45cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A45CCu;
    {
        const bool branch_taken_0x3a45cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a45cc) {
            ctx->pc = 0x3A45B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a45b8;
        }
    }
    ctx->pc = 0x3A45D4u;
    // 0x3a45d4: 0x0  nop
    ctx->pc = 0x3a45d4u;
    // NOP
label_3a45d8:
    // 0x3a45d8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x3a45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x3a45dc: 0x24639da0  addiu       $v1, $v1, -0x6260
    ctx->pc = 0x3a45dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942112));
    // 0x3a45e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a45e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a45e4: 0x0  nop
    ctx->pc = 0x3a45e4u;
    // NOP
label_3a45e8:
    // 0x3a45e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a45e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a45ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a45ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a45f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a45f4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a45f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a45f8: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3a45f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3a45fc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a45fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4600: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4604: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4608: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4608u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a460c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a460cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4610: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4614: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4614u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4618: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a461c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A461Cu;
    {
        const bool branch_taken_0x3a461c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A461Cu;
        // 0x3a4620: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a461c) {
            ctx->pc = 0x3A45E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a45e8;
        }
    }
    ctx->pc = 0x3A4624u;
    // 0x3a4624: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3a4624u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a4628: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4628u;
    {
        const bool branch_taken_0x3a4628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4628) {
            ctx->pc = 0x3A4650u;
            goto label_3a4650;
        }
    }
    ctx->pc = 0x3A4630u;
label_3a4630:
    // 0x3a4630: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a4630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4634: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4638: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3a4638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a463c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4640: 0x0  nop
    ctx->pc = 0x3a4640u;
    // NOP
    // 0x3a4644: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4644u;
    {
        const bool branch_taken_0x3a4644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4644) {
            ctx->pc = 0x3A4630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4630;
        }
    }
    ctx->pc = 0x3A464Cu;
    // 0x3a464c: 0x0  nop
    ctx->pc = 0x3a464cu;
    // NOP
label_3a4650:
    // 0x3a4650: 0x26030100  addiu       $v1, $s0, 0x100
    ctx->pc = 0x3a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x3a4654: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4658:
    // 0x3a4658: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a465c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a465cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4660: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a4660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a4664: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4668: 0x2c820088  sltiu       $v0, $a0, 0x88
    ctx->pc = 0x3a4668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x3a466c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a466cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4670: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4674: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4678: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a467c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a467cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4680: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4684: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4688: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a468c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A468Cu;
    {
        const bool branch_taken_0x3a468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A468Cu;
        // 0x3a4690: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a468c) {
            ctx->pc = 0x3A4658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4658;
        }
    }
    ctx->pc = 0x3A4694u;
    // 0x3a4694: 0x2c810090  sltiu       $at, $a0, 0x90
    ctx->pc = 0x3a4694u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a4698: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4698u;
    {
        const bool branch_taken_0x3a4698 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4698) {
            ctx->pc = 0x3A46C0u;
            goto label_3a46c0;
        }
    }
    ctx->pc = 0x3A46A0u;
label_3a46a0:
    // 0x3a46a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a46a4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a46a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46a8: 0x2c820090  sltiu       $v0, $a0, 0x90
    ctx->pc = 0x3a46a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)144) ? 1 : 0);
    // 0x3a46ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a46acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a46b0: 0x0  nop
    ctx->pc = 0x3a46b0u;
    // NOP
    // 0x3a46b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A46B4u;
    {
        const bool branch_taken_0x3a46b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a46b4) {
            ctx->pc = 0x3A46A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a46a0;
        }
    }
    ctx->pc = 0x3A46BCu;
    // 0x3a46bc: 0x0  nop
    ctx->pc = 0x3a46bcu;
    // NOP
label_3a46c0:
    // 0x3a46c0: 0x26030190  addiu       $v1, $s0, 0x190
    ctx->pc = 0x3a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x3a46c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a46c8:
    // 0x3a46c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a46c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a46ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a46d4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a46d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a46d8: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a46d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a46dc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a46dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46e0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a46e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a46e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a46e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46ec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a46ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46f0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a46f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a46f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a46f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a46fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A46FCu;
    {
        const bool branch_taken_0x3a46fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A46FCu;
        // 0x3a4700: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a46fc) {
            ctx->pc = 0x3A46C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a46c8;
        }
    }
    ctx->pc = 0x3A4704u;
    // 0x3a4704: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a4704u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a4708: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4708u;
    {
        const bool branch_taken_0x3a4708 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4708) {
            ctx->pc = 0x3A4730u;
            goto label_3a4730;
        }
    }
    ctx->pc = 0x3A4710u;
label_3a4710:
    // 0x3a4710: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a4710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4714: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4714u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4718: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a4718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a471c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4720: 0x0  nop
    ctx->pc = 0x3a4720u;
    // NOP
    // 0x3a4724: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4724u;
    {
        const bool branch_taken_0x3a4724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4724) {
            ctx->pc = 0x3A4710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4710;
        }
    }
    ctx->pc = 0x3A472Cu;
    // 0x3a472c: 0x0  nop
    ctx->pc = 0x3a472cu;
    // NOP
label_3a4730:
    // 0x3a4730: 0x260304c0  addiu       $v1, $s0, 0x4C0
    ctx->pc = 0x3a4730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1216));
    // 0x3a4734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a4734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4738:
    // 0x3a4738: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4738u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a473c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a473cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4740: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a4740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a4744: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4748: 0x2c820328  sltiu       $v0, $a0, 0x328
    ctx->pc = 0x3a4748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)808) ? 1 : 0);
    // 0x3a474c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a474cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4750: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4750u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4754: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4758: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4758u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a475c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a475cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4760: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a4764: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4768: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a4768u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a476c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A476Cu;
    {
        const bool branch_taken_0x3a476c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A476Cu;
        // 0x3a4770: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a476c) {
            ctx->pc = 0x3A4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4738;
        }
    }
    ctx->pc = 0x3A4774u;
    // 0x3a4774: 0x2c810330  sltiu       $at, $a0, 0x330
    ctx->pc = 0x3a4774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a4778: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4778u;
    {
        const bool branch_taken_0x3a4778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4778) {
            ctx->pc = 0x3A47A0u;
            goto label_3a47a0;
        }
    }
    ctx->pc = 0x3A4780u;
label_3a4780:
    // 0x3a4780: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a4780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a4784: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a4784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4788: 0x2c820330  sltiu       $v0, $a0, 0x330
    ctx->pc = 0x3a4788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)816) ? 1 : 0);
    // 0x3a478c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4790: 0x0  nop
    ctx->pc = 0x3a4790u;
    // NOP
    // 0x3a4794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4794u;
    {
        const bool branch_taken_0x3a4794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4794) {
            ctx->pc = 0x3A4780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4780;
        }
    }
    ctx->pc = 0x3A479Cu;
    // 0x3a479c: 0x0  nop
    ctx->pc = 0x3a479cu;
    // NOP
label_3a47a0:
    // 0x3a47a0: 0x260307f0  addiu       $v1, $s0, 0x7F0
    ctx->pc = 0x3a47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2032));
    // 0x3a47a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a47a8:
    // 0x3a47a8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a47a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47ac: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a47acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a47b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3a47b4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a47b8: 0x2c825ea8  sltiu       $v0, $a0, 0x5EA8
    ctx->pc = 0x3a47b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24232) ? 1 : 0);
    // 0x3a47bc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a47bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a47c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47c4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a47c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a47c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47cc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a47ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x3a47d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3a47d4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a47d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47d8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3a47d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47dc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A47DCu;
    {
        const bool branch_taken_0x3a47dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47DCu;
        // 0x3a47e0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47dc) {
            ctx->pc = 0x3A47A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a47a8;
        }
    }
    ctx->pc = 0x3A47E4u;
    // 0x3a47e4: 0x2c815eb0  sltiu       $at, $a0, 0x5EB0
    ctx->pc = 0x3a47e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a47e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A47E8u;
    {
        const bool branch_taken_0x3a47e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a47e8) {
            ctx->pc = 0x3A4810u;
            goto label_3a4810;
        }
    }
    ctx->pc = 0x3A47F0u;
label_3a47f0:
    // 0x3a47f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a47f4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3a47f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a47f8: 0x2c825eb0  sltiu       $v0, $a0, 0x5EB0
    ctx->pc = 0x3a47f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24240) ? 1 : 0);
    // 0x3a47fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a4800: 0x0  nop
    ctx->pc = 0x3a4800u;
    // NOP
    // 0x3a4804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A4804u;
    {
        const bool branch_taken_0x3a4804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4804) {
            ctx->pc = 0x3A47F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a47f0;
        }
    }
    ctx->pc = 0x3A480Cu;
    // 0x3a480c: 0x0  nop
    ctx->pc = 0x3a480cu;
    // NOP
label_3a4810:
    // 0x3a4810: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4814: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a4814u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a4818: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x3a4818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x3a481c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a481cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a4820: 0x3c03eff0  lui         $v1, 0xEFF0
    ctx->pc = 0x3a4820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61424 << 16));
    // 0x3a4824: 0x344cffff  ori         $t4, $v0, 0xFFFF
    ctx->pc = 0x3a4824u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4828: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a4828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a482c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a482cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4830: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4834: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x3a4834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x3a4838: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x3a4838u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a483c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a483cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4840: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3a4840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3a4844: 0x8c2bcec8  lw          $t3, -0x3138($at)
    ctx->pc = 0x3a4844u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CEC8u));
    // 0x3a4848: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a4848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a484c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a4850: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4854: 0x8c2acecc  lw          $t2, -0x3134($at)
    ctx->pc = 0x3a4854u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a4858: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a485c: 0x8c29ced0  lw          $t1, -0x3130($at)
    ctx->pc = 0x3a485cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a4860: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4864: 0x8c28ced8  lw          $t0, -0x3128($at)
    ctx->pc = 0x3a4864u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a4868: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a486c: 0xac25ceb8  sw          $a1, -0x3148($at)
    ctx->pc = 0x3a486cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a4870: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4874: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a4874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a4878: 0xac23cec4  sw          $v1, -0x313C($at)
    ctx->pc = 0x3a4878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a487c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a487cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4880: 0x8c2dcec4  lw          $t5, -0x313C($at)
    ctx->pc = 0x3a4880u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a4884: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4888: 0x1ac6024  and         $t4, $t5, $t4
    ctx->pc = 0x3a4888u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
    // 0x3a488c: 0x8c27cedc  lw          $a3, -0x3124($at)
    ctx->pc = 0x3a488cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954716)));
    // 0x3a4890: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4894: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3a4894u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a4898: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a489c: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x3a489cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x3a48a0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a48a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a48a4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a48a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a48a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a48a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a48ac: 0xac2ccec4  sw          $t4, -0x313C($at)
    ctx->pc = 0x3a48acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954692), GPR_U32(ctx, 12));
    // 0x3a48b0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a48b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a48b4: 0x8c2ccec4  lw          $t4, -0x313C($at)
    ctx->pc = 0x3a48b4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a48b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a48b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a48bc: 0xac26cebc  sw          $a2, -0x3144($at)
    ctx->pc = 0x3a48bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEBCu, _value); } while (0);
    // 0x3a48c0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a48c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a48c4: 0xac22ceb8  sw          $v0, -0x3148($at)
    ctx->pc = 0x3a48c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a48c8: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x3a48c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x3a48cc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a48ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a48d0: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3a48d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3a48d4: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x3a48d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3a48d8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3a48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3a48dc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3a48dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3a48e0: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A48E0u;
    SET_GPR_U32(ctx, 31, 0x3A48E8u);
    ctx->pc = 0x3A48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A48E0u;
    // 0x3a48e4: 0xac22cec0  sw          $v0, -0x3140($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A48E0u, 0x3A48E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A48E8u;
label_3a48e8:
    // 0x3a48e8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a48ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a48f0: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A48F0u;
    SET_GPR_U32(ctx, 31, 0x3A48F8u);
    ctx->pc = 0x3A48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A48F0u;
    // 0x3a48f4: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A48F0u, 0x3A48F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A48F8u;
label_3a48f8:
    // 0x3a48f8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a48fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a48fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a4900: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A4900u;
    SET_GPR_U32(ctx, 31, 0x3A4908u);
    ctx->pc = 0x3A4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4900u;
    // 0x3a4904: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A4900u, 0x3A4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4908u;
label_3a4908:
    // 0x3a4908: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a4908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a490c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a490cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a4910: 0xc04ca14  jal         func_132850
    ctx->pc = 0x3A4910u;
    SET_GPR_U32(ctx, 31, 0x3A4918u);
    ctx->pc = 0x3A4914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4910u;
    // 0x3a4914: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132850u, 0x3A4910u, 0x3A4918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4918u;
label_3a4918:
    // 0x3a4918: 0xc0eb6ac  jal         func_3ADAB0
    ctx->pc = 0x3A4918u;
    SET_GPR_U32(ctx, 31, 0x3A4920u);
    ctx->pc = 0x3A491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4918u;
    // 0x3a491c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAB0u, 0x3A4918u, 0x3A4920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4920u;
label_3a4920:
    // 0x3a4920: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x3a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x3a4924: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x3a4924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3a4928: 0xc052ec4  jal         func_14BB10
    ctx->pc = 0x3A4928u;
    SET_GPR_U32(ctx, 31, 0x3A4930u);
    ctx->pc = 0x3A492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4928u;
    // 0x3a492c: 0x24842620  addiu       $a0, $a0, 0x2620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB10u, 0x3A4928u, 0x3A4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4930u;
label_3a4930:
    // 0x3a4930: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A4930u;
    SET_GPR_U32(ctx, 31, 0x3A4938u);
    ctx->pc = 0x3A4934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4930u;
    // 0x3a4934: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A4930u, 0x3A4938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4938u;
label_3a4938:
    // 0x3a4938: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A4938u;
    {
        const bool branch_taken_0x3a4938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4938) {
            ctx->pc = 0x3A4960u;
            goto label_3a4960;
        }
    }
    ctx->pc = 0x3A4940u;
label_3a4940:
    // 0x3a4940: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a4940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a4944: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x3a4944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x3a4948: 0xc04c918  jal         func_132460
    ctx->pc = 0x3A4948u;
    SET_GPR_U32(ctx, 31, 0x3A4950u);
    ctx->pc = 0x3A494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4948u;
    // 0x3a494c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132460u, 0x3A4948u, 0x3A4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4950u;
label_3a4950:
    // 0x3a4950: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x3A4950u;
    SET_GPR_U32(ctx, 31, 0x3A4958u);
    ctx->pc = 0x3A4954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4950u;
    // 0x3a4954: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x3A4950u, 0x3A4958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4958u;
label_3a4958:
    // 0x3a4958: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A4958u;
    {
        const bool branch_taken_0x3a4958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4958) {
            ctx->pc = 0x3A4940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a4940;
        }
    }
    ctx->pc = 0x3A4960u;
label_3a4960:
    // 0x3a4960: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4964: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a4964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3a4968: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a4968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a496c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a496cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a4970: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4974: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a4974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a4978: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a497c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a497cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a4980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4984: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x3a4984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a4988: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3a4988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a498c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a498cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4990: 0xc063c70  jal         func_18F1C0
    ctx->pc = 0x3A4990u;
    SET_GPR_U32(ctx, 31, 0x3A4998u);
    ctx->pc = 0x3A4994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4990u;
    // 0x3a4994: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F1C0u, 0x3A4990u, 0x3A4998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4998u;
label_3a4998:
    // 0x3a4998: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3A4998u;
    {
        const bool branch_taken_0x3a4998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4998) {
            ctx->pc = 0x3A4C18u;
            goto label_3a4c18;
        }
    }
    ctx->pc = 0x3A49A0u;
label_3a49a0:
    // 0x3a49a0: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x3a49a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x3a49a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A49A4u;
    {
        const bool branch_taken_0x3a49a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a49a4) {
            ctx->pc = 0x3A49B8u;
            goto label_3a49b8;
        }
    }
    ctx->pc = 0x3A49ACu;
    // 0x3a49ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a49b0: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x3a49b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a49b4: 0x0  nop
    ctx->pc = 0x3a49b4u;
    // NOP
label_3a49b8:
    // 0x3a49b8: 0x3c01006c  lui         $at, 0x6C
    ctx->pc = 0x3a49b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)108 << 16));
    // 0x3a49bc: 0x90228c11  lbu         $v0, -0x73EF($at)
    ctx->pc = 0x3a49bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B8C11u));
    // 0x3a49c0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A49C0u;
    {
        const bool branch_taken_0x3a49c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a49c0) {
            ctx->pc = 0x3A4AA0u;
            goto label_3a4aa0;
        }
    }
    ctx->pc = 0x3A49C8u;
    // 0x3a49c8: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x3a49c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a49cc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3a49ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x3a49d0: 0x24848c10  addiu       $a0, $a0, -0x73F0
    ctx->pc = 0x3a49d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937616));
    // 0x3a49d4: 0xc052754  jal         func_149D50
    ctx->pc = 0x3A49D4u;
    SET_GPR_U32(ctx, 31, 0x3A49DCu);
    ctx->pc = 0x3A49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A49D4u;
    // 0x3a49d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149D50u, 0x3A49D4u, 0x3A49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A49DCu;
label_3a49dc:
    // 0x3a49dc: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3a49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3a49e0: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A49E0u;
    {
        const bool branch_taken_0x3a49e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A49E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49E0u;
        // 0x3a49e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49e0) {
            ctx->pc = 0x3A4A38u;
            goto label_3a4a38;
        }
    }
    ctx->pc = 0x3A49E8u;
    // 0x3a49e8: 0x10450013  beq         $v0, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A49E8u;
    {
        const bool branch_taken_0x3a49e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a49e8) {
            ctx->pc = 0x3A4A38u;
            goto label_3a4a38;
        }
    }
    ctx->pc = 0x3A49F0u;
    // 0x3a49f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A49F0u;
    {
        const bool branch_taken_0x3a49f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A49F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A49F0u;
        // 0x3a49f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a49f0) {
            ctx->pc = 0x3A4A08u;
            goto label_3a4a08;
        }
    }
    ctx->pc = 0x3A49F8u;
    // 0x3a49f8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A49F8u;
    {
        const bool branch_taken_0x3a49f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a49f8) {
            ctx->pc = 0x3A4A08u;
            goto label_3a4a08;
        }
    }
    ctx->pc = 0x3A4A00u;
    // 0x3a4a00: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3A4A00u;
    {
        const bool branch_taken_0x3a4a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4a00) {
            ctx->pc = 0x3A4A68u;
            goto label_3a4a68;
        }
    }
    ctx->pc = 0x3A4A08u;
label_3a4a08:
    // 0x3a4a08: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a4a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a4a0c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a4a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a4a10: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a4a14: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a4a18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4a2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3A4A2Cu;
    {
        const bool branch_taken_0x3a4a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A2Cu;
        // 0x3a4a30: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a2c) {
            ctx->pc = 0x3A4A90u;
            goto label_3a4a90;
        }
    }
    ctx->pc = 0x3A4A34u;
    // 0x3a4a34: 0x0  nop
    ctx->pc = 0x3a4a34u;
    // NOP
label_3a4a38:
    // 0x3a4a38: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a4a38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a4a3c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a4a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a4a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4a44: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a4a48: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a4a4c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a4a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a54: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a58: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4a60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A4A60u;
    {
        const bool branch_taken_0x3a4a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4A60u;
        // 0x3a4a64: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4a60) {
            ctx->pc = 0x3A4A90u;
            goto label_3a4a90;
        }
    }
    ctx->pc = 0x3A4A68u;
label_3a4a68:
    // 0x3a4a68: 0x9204000b  lbu         $a0, 0xB($s0)
    ctx->pc = 0x3a4a68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a4a6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3a4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3a4a70: 0x24428e98  addiu       $v0, $v0, -0x7168
    ctx->pc = 0x3a4a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938264));
    // 0x3a4a74: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a4a78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3a4a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a4a84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a4a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a4a88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a4a8c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3a4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3a4a90:
    // 0x3a4a90: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x3a4a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3a4a94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a4a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3a4a98: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x3a4a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a4a9c: 0x0  nop
    ctx->pc = 0x3a4a9cu;
    // NOP
label_3a4aa0:
    // 0x3a4aa0: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x3a4aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3a4aa4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4AA4u;
    {
        const bool branch_taken_0x3a4aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4AA4u;
        // 0x3a4aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4aa4) {
            ctx->pc = 0x3A4AC0u;
            goto label_3a4ac0;
        }
    }
    ctx->pc = 0x3A4AACu;
    // 0x3a4aac: 0xc0e930c  jal         func_3A4C30
    ctx->pc = 0x3A4AACu;
    SET_GPR_U32(ctx, 31, 0x3A4AB4u);
    ctx->pc = 0x3A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4C30u, 0x3A4AACu, 0x3A4AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4AB4u;
label_3a4ab4:
    // 0x3a4ab4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3A4AB4u;
    {
        const bool branch_taken_0x3a4ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ab4) {
            ctx->pc = 0x3A4C18u;
            goto label_3a4c18;
        }
    }
    ctx->pc = 0x3A4ABCu;
    // 0x3a4abc: 0x0  nop
    ctx->pc = 0x3a4abcu;
    // NOP
label_3a4ac0:
    // 0x3a4ac0: 0xc0ea47c  jal         func_3A91F0
    ctx->pc = 0x3A4AC0u;
    SET_GPR_U32(ctx, 31, 0x3A4AC8u);
    ctx->pc = 0x3A4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4AC0u;
    // 0x3a4ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A91F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A91F0u, 0x3A4AC0u, 0x3A4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4AC8u;
label_3a4ac8:
    // 0x3a4ac8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3A4AC8u;
    {
        const bool branch_taken_0x3a4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ac8) {
            ctx->pc = 0x3A4C18u;
            goto label_3a4c18;
        }
    }
    ctx->pc = 0x3A4AD0u;
label_3a4ad0:
    // 0x3a4ad0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3a4ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3a4ad4: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3a4ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3a4ad8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a4ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a4adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a4adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ae0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a4ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ae4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a4ae4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4ae8: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3A4AE8u;
    SET_GPR_U32(ctx, 31, 0x3A4AF0u);
    ctx->pc = 0x3A4AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4AE8u;
    // 0x3a4aec: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3A4AE8u, 0x3A4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4AF0u;
label_3a4af0:
    // 0x3a4af0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a4af0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4af4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a4af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a4af8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a4af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4afc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3a4b00: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a4b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a4b04: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3A4B04u;
    SET_GPR_U32(ctx, 31, 0x3A4B0Cu);
    ctx->pc = 0x3A4B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4B04u;
    // 0x3a4b08: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3A4B04u, 0x3A4B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B0Cu;
label_3a4b0c:
    // 0x3a4b0c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3a4b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3a4b10: 0xc095128  jal         func_2544A0
    ctx->pc = 0x3A4B10u;
    SET_GPR_U32(ctx, 31, 0x3A4B18u);
    ctx->pc = 0x3A4B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4B10u;
    // 0x3a4b14: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x3A4B10u, 0x3A4B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4B18u;
label_3a4b18:
    // 0x3a4b18: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b1c: 0x3c02100f  lui         $v0, 0x100F
    ctx->pc = 0x3a4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4111 << 16));
    // 0x3a4b20: 0x8c24cec4  lw          $a0, -0x313C($at)
    ctx->pc = 0x3a4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a4b24: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a4b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4b28: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x3a4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x3a4b2c: 0x2407efff  addiu       $a3, $zero, -0x1001
    ctx->pc = 0x3a4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x3a4b30: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x3a4b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4b34: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3a4b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a4b38: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x3a4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x3a4b3c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b40: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a4b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a4b44: 0x8c2ecec8  lw          $t6, -0x3138($at)
    ctx->pc = 0x3a4b44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954696)));
    // 0x3a4b48: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x3a4b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4b4c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x3a4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x3a4b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4b54: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b58: 0x8c2dcecc  lw          $t5, -0x3134($at)
    ctx->pc = 0x3a4b58u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x81CECCu));
    // 0x3a4b5c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b60: 0x8c2cced0  lw          $t4, -0x3130($at)
    ctx->pc = 0x3a4b60u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x81CED0u));
    // 0x3a4b64: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b68: 0x8c2bced8  lw          $t3, -0x3128($at)
    ctx->pc = 0x3a4b68u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81CED8u));
    // 0x3a4b6c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b70: 0x8c2acedc  lw          $t2, -0x3124($at)
    ctx->pc = 0x3a4b70u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x81CEDCu));
    // 0x3a4b74: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b78: 0xac24cec4  sw          $a0, -0x313C($at)
    ctx->pc = 0x3a4b78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x81CEC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC4u, _value); } while (0);
    // 0x3a4b7c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b80: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a4b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b84: 0x8c2fcec4  lw          $t7, -0x313C($at)
    ctx->pc = 0x3a4b84u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x81CEC4u));
    // 0x3a4b88: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x3a4b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x3a4b8c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4b90: 0x1ee7025  or          $t6, $t7, $t6
    ctx->pc = 0x3a4b90u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x3a4b94: 0x8c29cebc  lw          $t1, -0x3144($at)
    ctx->pc = 0x3a4b94u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a4b98: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x3a4b98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x3a4b9c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4ba0: 0x1284024  and         $t0, $t1, $t0
    ctx->pc = 0x3a4ba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & GPR_U64(ctx, 8));
    // 0x3a4ba4: 0x8c26ceb8  lw          $a2, -0x3148($at)
    ctx->pc = 0x3a4ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3a4ba8: 0x18d4825  or          $t1, $t4, $t5
    ctx->pc = 0x3a4ba8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3a4bac: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bb0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x3a4bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3a4bb4: 0xac28cebc  sw          $t0, -0x3144($at)
    ctx->pc = 0x3a4bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 8));
    // 0x3a4bb8: 0x1693025  or          $a2, $t3, $t1
    ctx->pc = 0x3a4bb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x3a4bbc: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bc0: 0x1463025  or          $a2, $t2, $a2
    ctx->pc = 0x3a4bc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x3a4bc4: 0xac23ceb8  sw          $v1, -0x3148($at)
    ctx->pc = 0x3a4bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x81CEB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEB8u, _value); } while (0);
    // 0x3a4bc8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bcc: 0xac26cec0  sw          $a2, -0x3140($at)
    ctx->pc = 0x3a4bccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x81CEC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81CEC0u, _value); } while (0);
    // 0x3a4bd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bd4: 0x8c26cebc  lw          $a2, -0x3144($at)
    ctx->pc = 0x3a4bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3a4bd8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bdc: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x3a4bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3a4be0: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3a4be4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4be8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3a4be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a4bec: 0xac26cebc  sw          $a2, -0x3144($at)
    ctx->pc = 0x3a4becu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 6));
    // 0x3a4bf0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3a4bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3a4bf4: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A4BF4u;
    SET_GPR_U32(ctx, 31, 0x3A4BFCu);
    ctx->pc = 0x3A4BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4BF4u;
    // 0x3a4bf8: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A4BF4u, 0x3A4BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4BFCu;
label_3a4bfc:
    // 0x3a4bfc: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x3a4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x3a4c00: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3a4c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3a4c04: 0xc04ca38  jal         func_1328E0
    ctx->pc = 0x3A4C04u;
    SET_GPR_U32(ctx, 31, 0x3A4C0Cu);
    ctx->pc = 0x3A4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4C04u;
    // 0x3a4c08: 0x2484fe40  addiu       $a0, $a0, -0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1328E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1328E0u, 0x3A4C04u, 0x3A4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4C0Cu;
label_3a4c0c:
    // 0x3a4c0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4C0Cu;
    {
        const bool branch_taken_0x3a4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C0Cu;
        // 0x3a4c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c0c) {
            ctx->pc = 0x3A4C20u;
            goto label_3a4c20;
        }
    }
    ctx->pc = 0x3A4C14u;
    // 0x3a4c14: 0x0  nop
    ctx->pc = 0x3a4c14u;
    // NOP
label_3a4c18:
    // 0x3a4c18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a4c18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4c1c: 0x0  nop
    ctx->pc = 0x3a4c1cu;
    // NOP
label_3a4c20:
    // 0x3a4c20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a4c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a4c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4c28: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C28u;
        // 0x3a4c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4C30u;
}
