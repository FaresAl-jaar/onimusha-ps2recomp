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

// Function: sub_003AA3C0
// Address: 0x3aa3c0 - 0x3aa548
void sub_003AA3C0_0x3aa3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA3C0_0x3aa3c0");
#endif

    ctx->pc = 0x3aa3c0u;

    // 0x3aa3c0: 0x80870007  lb          $a3, 0x7($a0)
    ctx->pc = 0x3aa3c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x3aa3c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3aa3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3aa3c8: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3aa3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x3aa3cc: 0x24638e38  addiu       $v1, $v1, -0x71C8
    ctx->pc = 0x3aa3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938168));
    // 0x3aa3d0: 0x24a58e40  addiu       $a1, $a1, -0x71C0
    ctx->pc = 0x3aa3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938176));
    // 0x3aa3d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aa3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3aa3d8: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x3aa3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3aa3dc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x3aa3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3aa3e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3aa3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3aa3e4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3aa3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x3aa3e8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3aa3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3aa3ec: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3aa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3aa3f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3aa3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3aa3f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3aa3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aa3f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA3F8u;
    {
        const bool branch_taken_0x3aa3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA3F8u;
        // 0x3aa3fc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa3f8) {
            ctx->pc = 0x3AA408u;
            goto label_3aa408;
        }
    }
    ctx->pc = 0x3AA400u;
    // 0x3aa400: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x3aa400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3aa404: 0x0  nop
    ctx->pc = 0x3aa404u;
    // NOP
label_3aa408:
    // 0x3aa408: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aa408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa40c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA40Cu;
    {
        const bool branch_taken_0x3aa40c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA40Cu;
        // 0x3aa410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa40c) {
            ctx->pc = 0x3AA420u;
            goto label_3aa420;
        }
    }
    ctx->pc = 0x3AA414u;
    // 0x3aa414: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3AA414u;
    {
        const bool branch_taken_0x3aa414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa414) {
            ctx->pc = 0x3AA540u;
            goto label_3aa540;
        }
    }
    ctx->pc = 0x3AA41Cu;
    // 0x3aa41c: 0x0  nop
    ctx->pc = 0x3aa41cu;
    // NOP
label_3aa420:
    // 0x3aa420: 0x4a10045  bgez        $a1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3AA420u;
    {
        const bool branch_taken_0x3aa420 = (GPR_S64(ctx, 5) >= 0);
        if (branch_taken_0x3aa420) {
            ctx->pc = 0x3AA538u;
            goto label_3aa538;
        }
    }
    ctx->pc = 0x3AA428u;
    // 0x3aa428: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x3aa428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa430: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x3aa430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa434: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3aa434u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3aa438: 0xa082000a  sb          $v0, 0xA($a0)
    ctx->pc = 0x3aa438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x3aa43c: 0x84820012  lh          $v0, 0x12($a0)
    ctx->pc = 0x3aa43cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3aa440: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3AA440u;
    {
        const bool branch_taken_0x3aa440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA440u;
        // 0x3aa444: 0x28a2fff6  slti        $v0, $a1, -0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa440) {
            ctx->pc = 0x3AA470u;
            goto label_3aa470;
        }
    }
    ctx->pc = 0x3AA448u;
    // 0x3aa448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AA448u;
    {
        const bool branch_taken_0x3aa448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aa448) {
            ctx->pc = 0x3AA460u;
            goto label_3aa460;
        }
    }
    ctx->pc = 0x3AA450u;
    // 0x3aa450: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3aa450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3aa454: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AA454u;
    {
        const bool branch_taken_0x3aa454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aa454) {
            ctx->pc = 0x3AA470u;
            goto label_3aa470;
        }
    }
    ctx->pc = 0x3AA45Cu;
    // 0x3aa45c: 0x0  nop
    ctx->pc = 0x3aa45cu;
    // NOP
label_3aa460:
    // 0x3aa460: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3aa460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3aa464: 0xa4820014  sh          $v0, 0x14($a0)
    ctx->pc = 0x3aa464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3aa468: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3AA468u;
    {
        const bool branch_taken_0x3aa468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA468u;
        // 0x3aa46c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa468) {
            ctx->pc = 0x3AA540u;
            goto label_3aa540;
        }
    }
    ctx->pc = 0x3AA470u;
label_3aa470:
    // 0x3aa470: 0x28a1fff6  slti        $at, $a1, -0xA
    ctx->pc = 0x3aa470u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967286) ? 1 : 0);
    // 0x3aa474: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA474u;
    {
        const bool branch_taken_0x3aa474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA474u;
        // 0x3aa478: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa474) {
            ctx->pc = 0x3AA488u;
            goto label_3aa488;
        }
    }
    ctx->pc = 0x3AA47Cu;
    // 0x3aa47c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3aa47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3aa480: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3AA480u;
    {
        const bool branch_taken_0x3aa480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA480u;
        // 0x3aa484: 0xa4830014  sh          $v1, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa480) {
            ctx->pc = 0x3AA540u;
            goto label_3aa540;
        }
    }
    ctx->pc = 0x3AA488u;
label_3aa488:
    // 0x3aa488: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x3aa488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
    // 0x3aa48c: 0x10a20026  beq         $a1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3AA48Cu;
    {
        const bool branch_taken_0x3aa48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA48Cu;
        // 0x3aa490: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa48c) {
            ctx->pc = 0x3AA528u;
            goto label_3aa528;
        }
    }
    ctx->pc = 0x3AA494u;
    // 0x3aa494: 0x10a20020  beq         $a1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3AA494u;
    {
        const bool branch_taken_0x3aa494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aa494) {
            ctx->pc = 0x3AA518u;
            goto label_3aa518;
        }
    }
    ctx->pc = 0x3AA49Cu;
    // 0x3aa49c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3aa49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3aa4a0: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AA4A0u;
    {
        const bool branch_taken_0x3aa4a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4A0u;
        // 0x3aa4a4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4a0) {
            ctx->pc = 0x3AA508u;
            goto label_3aa508;
        }
    }
    ctx->pc = 0x3AA4A8u;
    // 0x3aa4a8: 0x10a2000f  beq         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3AA4A8u;
    {
        const bool branch_taken_0x3aa4a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aa4a8) {
            ctx->pc = 0x3AA4E8u;
            goto label_3aa4e8;
        }
    }
    ctx->pc = 0x3AA4B0u;
    // 0x3aa4b0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3aa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3aa4b4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA4B4u;
    {
        const bool branch_taken_0x3aa4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3aa4b4) {
            ctx->pc = 0x3AA4C8u;
            goto label_3aa4c8;
        }
    }
    ctx->pc = 0x3AA4BCu;
    // 0x3aa4bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3AA4BCu;
    {
        const bool branch_taken_0x3aa4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aa4bc) {
            ctx->pc = 0x3AA530u;
            goto label_3aa530;
        }
    }
    ctx->pc = 0x3AA4C4u;
    // 0x3aa4c4: 0x0  nop
    ctx->pc = 0x3aa4c4u;
    // NOP
label_3aa4c8:
    // 0x3aa4c8: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3aa4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3aa4cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa4d0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA4D0u;
    {
        const bool branch_taken_0x3aa4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4D0u;
        // 0x3aa4d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4d0) {
            ctx->pc = 0x3AA4DCu;
            goto label_3aa4dc;
        }
    }
    ctx->pc = 0x3AA4D8u;
    // 0x3aa4d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aa4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aa4dc:
    // 0x3aa4dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3AA4DCu;
    {
        const bool branch_taken_0x3aa4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4DCu;
        // 0x3aa4e0: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4dc) {
            ctx->pc = 0x3AA530u;
            goto label_3aa530;
        }
    }
    ctx->pc = 0x3AA4E4u;
    // 0x3aa4e4: 0x0  nop
    ctx->pc = 0x3aa4e4u;
    // NOP
label_3aa4e8:
    // 0x3aa4e8: 0x90830006  lbu         $v1, 0x6($a0)
    ctx->pc = 0x3aa4e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3aa4ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa4f0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AA4F0u;
    {
        const bool branch_taken_0x3aa4f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AA4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4F0u;
        // 0x3aa4f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4f0) {
            ctx->pc = 0x3AA4FCu;
            goto label_3aa4fc;
        }
    }
    ctx->pc = 0x3AA4F8u;
    // 0x3aa4f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3aa4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3aa4fc:
    // 0x3aa4fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3AA4FCu;
    {
        const bool branch_taken_0x3aa4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA4FCu;
        // 0x3aa500: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa4fc) {
            ctx->pc = 0x3AA530u;
            goto label_3aa530;
        }
    }
    ctx->pc = 0x3AA504u;
    // 0x3aa504: 0x0  nop
    ctx->pc = 0x3aa504u;
    // NOP
label_3aa508:
    // 0x3aa508: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3aa508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3aa50c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AA50Cu;
    {
        const bool branch_taken_0x3aa50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA50Cu;
        // 0x3aa510: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa50c) {
            ctx->pc = 0x3AA530u;
            goto label_3aa530;
        }
    }
    ctx->pc = 0x3AA514u;
    // 0x3aa514: 0x0  nop
    ctx->pc = 0x3aa514u;
    // NOP
label_3aa518:
    // 0x3aa518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aa518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aa51c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AA51Cu;
    {
        const bool branch_taken_0x3aa51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA51Cu;
        // 0x3aa520: 0xa4820014  sh          $v0, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa51c) {
            ctx->pc = 0x3AA530u;
            goto label_3aa530;
        }
    }
    ctx->pc = 0x3AA524u;
    // 0x3aa524: 0x0  nop
    ctx->pc = 0x3aa524u;
    // NOP
label_3aa528:
    // 0x3aa528: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3aa528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3aa52c: 0xa4820014  sh          $v0, 0x14($a0)
    ctx->pc = 0x3aa52cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 2));
label_3aa530:
    // 0x3aa530: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3AA530u;
    {
        const bool branch_taken_0x3aa530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA530u;
        // 0x3aa534: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa530) {
            ctx->pc = 0x3AA540u;
            goto label_3aa540;
        }
    }
    ctx->pc = 0x3AA538u;
label_3aa538:
    // 0x3aa538: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aa538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa53c: 0x0  nop
    ctx->pc = 0x3aa53cu;
    // NOP
label_3aa540:
    // 0x3aa540: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA548u;
}
