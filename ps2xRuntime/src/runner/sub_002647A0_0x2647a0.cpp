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

// Function: sub_002647A0
// Address: 0x2647a0 - 0x265010
void sub_002647A0_0x2647a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002647A0_0x2647a0");
#endif

    switch (ctx->pc) {
        case 0x2647f8u: goto label_2647f8;
        case 0x2649c4u: goto label_2649c4;
        case 0x264a7cu: goto label_264a7c;
        case 0x264a90u: goto label_264a90;
        case 0x264a98u: goto label_264a98;
        case 0x264aa4u: goto label_264aa4;
        case 0x264af0u: goto label_264af0;
        case 0x264db4u: goto label_264db4;
        case 0x264dd4u: goto label_264dd4;
        case 0x264de8u: goto label_264de8;
        case 0x264df0u: goto label_264df0;
        case 0x264dfcu: goto label_264dfc;
        case 0x264e48u: goto label_264e48;
        case 0x264eccu: goto label_264ecc;
        case 0x264ee4u: goto label_264ee4;
        case 0x264f90u: goto label_264f90;
        case 0x264fa4u: goto label_264fa4;
        default: break;
    }

    ctx->pc = 0x2647a0u;

    // 0x2647a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2647a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2647a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2647a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2647a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2647a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2647ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2647acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2647b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2647b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2647b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2647b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2647b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2647b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2647bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2647bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2647c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2647c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2647c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2647c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2647c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2647c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2647cc: 0x8f838860  lw          $v1, -0x77A0($gp)
    ctx->pc = 0x2647ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936672)));
    // 0x2647d0: 0x93828864  lbu         $v0, -0x779C($gp)
    ctx->pc = 0x2647d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936676)));
    // 0x2647d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2647d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2647d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2647D8u;
    {
        const bool branch_taken_0x2647d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647D8u;
        // 0x2647dc: 0xaf838860  sw          $v1, -0x77A0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647d8) {
            ctx->pc = 0x2647E8u;
            goto label_2647e8;
        }
    }
    ctx->pc = 0x2647E0u;
    // 0x2647e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2647e4: 0xa3828864  sb          $v0, -0x779C($gp)
    ctx->pc = 0x2647e4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936676), (uint8_t)GPR_U32(ctx, 2));
label_2647e8:
    // 0x2647e8: 0x3c11008c  lui         $s1, 0x8C
    ctx->pc = 0x2647e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)140 << 16));
    // 0x2647ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2647ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647f0: 0x2631f740  addiu       $s1, $s1, -0x8C0
    ctx->pc = 0x2647f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965056));
    // 0x2647f4: 0x0  nop
    ctx->pc = 0x2647f4u;
    // NOP
label_2647f8:
    // 0x2647f8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2647f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2647fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2647FCu;
    {
        const bool branch_taken_0x2647fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2647FCu;
        // 0x264800: 0xde370010  ld          $s7, 0x10($s1) (Delay Slot)
        SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647fc) {
            ctx->pc = 0x264810u;
            goto label_264810;
        }
    }
    ctx->pc = 0x264804u;
    // 0x264804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264808: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x264808u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x26480c: 0x0  nop
    ctx->pc = 0x26480cu;
    // NOP
label_264810:
    // 0x264810: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x264814: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x264814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x264818: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x26481c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x26481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x264820: 0x24425ab0  addiu       $v0, $v0, 0x5AB0
    ctx->pc = 0x264820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23216));
    // 0x264824: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x264824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x264828: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x264828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26482c: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x26482cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x264830: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x264830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x264834: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264838: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x264838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x26483c: 0x8e120458  lw          $s2, 0x458($s0)
    ctx->pc = 0x26483cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1112)));
    // 0x264840: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x264840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x264844: 0x2401827  not         $v1, $s2
    ctx->pc = 0x264844u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 18) | GPR_U64(ctx, 0)));
    // 0x264848: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26484c: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x26484cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x264850: 0x64f024  and         $fp, $v1, $a0
    ctx->pc = 0x264850u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x264854: 0x801827  not         $v1, $a0
    ctx->pc = 0x264854u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
    // 0x264858: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x264858u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x26485c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26485Cu;
    {
        const bool branch_taken_0x26485c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x264860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26485Cu;
        // 0x264860: 0x2439824  and         $s3, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26485c) {
            ctx->pc = 0x264868u;
            goto label_264868;
        }
    }
    ctx->pc = 0x264864u;
    // 0x264864: 0x36940001  ori         $s4, $s4, 0x1
    ctx->pc = 0x264864u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1);
label_264868:
    // 0x264868: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x264868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x26486c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26486Cu;
    {
        const bool branch_taken_0x26486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26486c) {
            ctx->pc = 0x264878u;
            goto label_264878;
        }
    }
    ctx->pc = 0x264874u;
    // 0x264874: 0x36940008  ori         $s4, $s4, 0x8
    ctx->pc = 0x264874u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
label_264878:
    // 0x264878: 0x326200f0  andi        $v0, $s3, 0xF0
    ctx->pc = 0x264878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)240);
    // 0x26487c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26487Cu;
    {
        const bool branch_taken_0x26487c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26487c) {
            ctx->pc = 0x264888u;
            goto label_264888;
        }
    }
    ctx->pc = 0x264884u;
    // 0x264884: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x264884u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_264888:
    // 0x264888: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x264888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
    // 0x26488c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26488Cu;
    {
        const bool branch_taken_0x26488c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26488c) {
            ctx->pc = 0x264898u;
            goto label_264898;
        }
    }
    ctx->pc = 0x264894u;
    // 0x264894: 0x36940020  ori         $s4, $s4, 0x20
    ctx->pc = 0x264894u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32);
label_264898:
    // 0x264898: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x264898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x26489c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26489Cu;
    {
        const bool branch_taken_0x26489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26489c) {
            ctx->pc = 0x2648A8u;
            goto label_2648a8;
        }
    }
    ctx->pc = 0x2648A4u;
    // 0x2648a4: 0x36940040  ori         $s4, $s4, 0x40
    ctx->pc = 0x2648a4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)64);
label_2648a8:
    // 0x2648a8: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x2648a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
    // 0x2648ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648ACu;
    {
        const bool branch_taken_0x2648ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648ac) {
            ctx->pc = 0x2648B8u;
            goto label_2648b8;
        }
    }
    ctx->pc = 0x2648B4u;
    // 0x2648b4: 0x36940080  ori         $s4, $s4, 0x80
    ctx->pc = 0x2648b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)128);
label_2648b8:
    // 0x2648b8: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x2648b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x2648bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648BCu;
    {
        const bool branch_taken_0x2648bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648bc) {
            ctx->pc = 0x2648C8u;
            goto label_2648c8;
        }
    }
    ctx->pc = 0x2648C4u;
    // 0x2648c4: 0x36940100  ori         $s4, $s4, 0x100
    ctx->pc = 0x2648c4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)256);
label_2648c8:
    // 0x2648c8: 0x32621000  andi        $v0, $s3, 0x1000
    ctx->pc = 0x2648c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4096);
    // 0x2648cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648CCu;
    {
        const bool branch_taken_0x2648cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648cc) {
            ctx->pc = 0x2648D8u;
            goto label_2648d8;
        }
    }
    ctx->pc = 0x2648D4u;
    // 0x2648d4: 0x36940200  ori         $s4, $s4, 0x200
    ctx->pc = 0x2648d4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)512);
label_2648d8:
    // 0x2648d8: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x2648d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x2648dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2648DCu;
    {
        const bool branch_taken_0x2648dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648DCu;
        // 0x2648e0: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648dc) {
            ctx->pc = 0x2648F0u;
            goto label_2648f0;
        }
    }
    ctx->pc = 0x2648E4u;
    // 0x2648e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648E4u;
    {
        const bool branch_taken_0x2648e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2648e4) {
            ctx->pc = 0x2648F0u;
            goto label_2648f0;
        }
    }
    ctx->pc = 0x2648ECu;
    // 0x2648ec: 0x36940400  ori         $s4, $s4, 0x400
    ctx->pc = 0x2648ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1024);
label_2648f0:
    // 0x2648f0: 0x32422000  andi        $v0, $s2, 0x2000
    ctx->pc = 0x2648f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x2648f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2648F4u;
    {
        const bool branch_taken_0x2648f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648F4u;
        // 0x2648f8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648f4) {
            ctx->pc = 0x264900u;
            goto label_264900;
        }
    }
    ctx->pc = 0x2648FCu;
    // 0x2648fc: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2648fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_264900:
    // 0x264900: 0x32622000  andi        $v0, $s3, 0x2000
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
    // 0x264904: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264904u;
    {
        const bool branch_taken_0x264904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264904u;
        // 0x264908: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264904) {
            ctx->pc = 0x264910u;
            goto label_264910;
        }
    }
    ctx->pc = 0x26490Cu;
    // 0x26490c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x26490cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_264910:
    // 0x264910: 0x33c22000  andi        $v0, $fp, 0x2000
    ctx->pc = 0x264910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)8192);
    // 0x264914: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264914u;
    {
        const bool branch_taken_0x264914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264914u;
        // 0x264918: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264914) {
            ctx->pc = 0x264920u;
            goto label_264920;
        }
    }
    ctx->pc = 0x26491Cu;
    // 0x26491c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x26491cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_264920:
    // 0x264920: 0x32764000  andi        $s6, $s3, 0x4000
    ctx->pc = 0x264920u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16384);
    // 0x264924: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x264924u;
    {
        const bool branch_taken_0x264924 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x264928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264924u;
        // 0x264928: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264924) {
            ctx->pc = 0x264930u;
            goto label_264930;
        }
    }
    ctx->pc = 0x26492Cu;
    // 0x26492c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x26492cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_264930:
    // 0x264930: 0x92020470  lbu         $v0, 0x470($s0)
    ctx->pc = 0x264930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1136)));
    // 0x264934: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264934u;
    {
        const bool branch_taken_0x264934 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x264938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264934u;
        // 0x264938: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264934) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x26493Cu;
    // 0x26493c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26493cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264940u;
    {
        const bool branch_taken_0x264940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264940u;
        // 0x264944: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264940) {
            ctx->pc = 0x264960u;
            goto label_264960;
        }
    }
    ctx->pc = 0x264948u;
label_264948:
    // 0x264948: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26494c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26494cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x264950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264954: 0x0  nop
    ctx->pc = 0x264954u;
    // NOP
    // 0x264958: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x264958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26495c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26495cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_264960:
    // 0x264960: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x264964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264968: 0x0  nop
    ctx->pc = 0x264968u;
    // NOP
    // 0x26496c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26496cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264970: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x264970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x264974: 0x92020471  lbu         $v0, 0x471($s0)
    ctx->pc = 0x264974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1137)));
    // 0x264978: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264978u;
    {
        const bool branch_taken_0x264978 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x26497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264978u;
        // 0x26497c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264978) {
            ctx->pc = 0x26498Cu;
            goto label_26498c;
        }
    }
    ctx->pc = 0x264980u;
    // 0x264980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264984: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264984u;
    {
        const bool branch_taken_0x264984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264984u;
        // 0x264988: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264984) {
            ctx->pc = 0x2649A4u;
            goto label_2649a4;
        }
    }
    ctx->pc = 0x26498Cu;
label_26498c:
    // 0x26498c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26498cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264990: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264994: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x264994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264998: 0x0  nop
    ctx->pc = 0x264998u;
    // NOP
    // 0x26499c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26499cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2649a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2649a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2649a4:
    // 0x2649a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2649a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2649a8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2649a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2649ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2649acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2649b0: 0x0  nop
    ctx->pc = 0x2649b0u;
    // NOP
    // 0x2649b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2649b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2649b8: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x2649b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2649bc: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x2649BCu;
    SET_GPR_U32(ctx, 31, 0x2649C4u);
    ctx->pc = 0x2649C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2649BCu;
    // 0x2649c0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x2649BCu, 0x2649C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649C4u;
label_2649c4:
    // 0x2649c4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2649c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2649c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2649c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2649cc: 0x0  nop
    ctx->pc = 0x2649ccu;
    // NOP
    // 0x2649d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2649d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2649d4: 0x45010048  bc1t        . + 4 + (0x48 << 2)
    ctx->pc = 0x2649D4u;
    {
        const bool branch_taken_0x2649d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2649d4) {
            ctx->pc = 0x264AF8u;
            goto label_264af8;
        }
    }
    ctx->pc = 0x2649DCu;
    // 0x2649dc: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x2649dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2649e0: 0x30432000  andi        $v1, $v0, 0x2000
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2649e4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2649E4u;
    {
        const bool branch_taken_0x2649e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2649E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649E4u;
        // 0x2649e8: 0x36942000  ori         $s4, $s4, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649e4) {
            ctx->pc = 0x264A18u;
            goto label_264a18;
        }
    }
    ctx->pc = 0x2649ECu;
    // 0x2649ec: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2649ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2649f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2649f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2649f4: 0x0  nop
    ctx->pc = 0x2649f4u;
    // NOP
    // 0x2649f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2649f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2649fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2649FCu;
    {
        const bool branch_taken_0x2649fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2649fc) {
            ctx->pc = 0x264A10u;
            goto label_264a10;
        }
    }
    ctx->pc = 0x264A04u;
    // 0x264a04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x264A04u;
    {
        const bool branch_taken_0x264a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A04u;
        // 0x264a08: 0x36948000  ori         $s4, $s4, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a04) {
            ctx->pc = 0x264A18u;
            goto label_264a18;
        }
    }
    ctx->pc = 0x264A0Cu;
    // 0x264a0c: 0x0  nop
    ctx->pc = 0x264a0cu;
    // NOP
label_264a10:
    // 0x264a10: 0x36944000  ori         $s4, $s4, 0x4000
    ctx->pc = 0x264a10u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16384);
    // 0x264a14: 0x0  nop
    ctx->pc = 0x264a14u;
    // NOP
label_264a18:
    // 0x264a18: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x264a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
    // 0x264a1c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x264A1Cu;
    {
        const bool branch_taken_0x264a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264a1c) {
            ctx->pc = 0x264A70u;
            goto label_264a70;
        }
    }
    ctx->pc = 0x264A24u;
    // 0x264a24: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x264A24u;
    {
        const bool branch_taken_0x264a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A24u;
        // 0x264a28: 0x27a200a8  addiu       $v0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a24) {
            ctx->pc = 0x264A70u;
            goto label_264a70;
        }
    }
    ctx->pc = 0x264A2Cu;
    // 0x264a2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x264a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x264a30: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x264a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x264a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264a38: 0x0  nop
    ctx->pc = 0x264a38u;
    // NOP
    // 0x264a3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x264a3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264a40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x264A40u;
    {
        const bool branch_taken_0x264a40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x264a40) {
            ctx->pc = 0x264A50u;
            goto label_264a50;
        }
    }
    ctx->pc = 0x264A48u;
    // 0x264a48: 0x36940002  ori         $s4, $s4, 0x2
    ctx->pc = 0x264a48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
    // 0x264a4c: 0x0  nop
    ctx->pc = 0x264a4cu;
    // NOP
label_264a50:
    // 0x264a50: 0x3c02c280  lui         $v0, 0xC280
    ctx->pc = 0x264a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49792 << 16));
    // 0x264a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264a58: 0x0  nop
    ctx->pc = 0x264a58u;
    // NOP
    // 0x264a5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x264a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264a60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x264A60u;
    {
        const bool branch_taken_0x264a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264a60) {
            ctx->pc = 0x264A70u;
            goto label_264a70;
        }
    }
    ctx->pc = 0x264A68u;
    // 0x264a68: 0x36940004  ori         $s4, $s4, 0x4
    ctx->pc = 0x264a68u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
    // 0x264a6c: 0x0  nop
    ctx->pc = 0x264a6cu;
    // NOP
label_264a70:
    // 0x264a70: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x264a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x264a74: 0xc04b946  jal         func_12E518
    ctx->pc = 0x264A74u;
    SET_GPR_U32(ctx, 31, 0x264A7Cu);
    ctx->pc = 0x264A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A74u;
    // 0x264a78: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x264A74u, 0x264A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A7Cu;
label_264a7c:
    // 0x264a7c: 0x3c03bff0  lui         $v1, 0xBFF0
    ctx->pc = 0x264a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49136 << 16));
    // 0x264a80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264a84: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x264a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264a88: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x264A88u;
    SET_GPR_U32(ctx, 31, 0x264A90u);
    ctx->pc = 0x264A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A88u;
    // 0x264a8c: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x264A88u, 0x264A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A90u;
label_264a90:
    // 0x264a90: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x264A90u;
    SET_GPR_U32(ctx, 31, 0x264A98u);
    ctx->pc = 0x264A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A90u;
    // 0x264a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x264A90u, 0x264A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A98u;
label_264a98:
    // 0x264a98: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x264a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264a9c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x264A9Cu;
    SET_GPR_U32(ctx, 31, 0x264AA4u);
    ctx->pc = 0x264AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A9Cu;
    // 0x264aa0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x264A9Cu, 0x264AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AA4u;
label_264aa4:
    // 0x264aa4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x264aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x264aa8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x264aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x264aac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x264aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264ab0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x264ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x264ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264ab8: 0x0  nop
    ctx->pc = 0x264ab8u;
    // NOP
    // 0x264abc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x264abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x264ac0: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x264ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x264ac4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x264ac4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x264ac8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264ac8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x264acc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x264accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x264ad0: 0x0  nop
    ctx->pc = 0x264ad0u;
    // NOP
    // 0x264ad4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x264ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x264ad8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x264ad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x264adc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x264ae0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x264ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264ae4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264ae8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264AE8u;
    SET_GPR_U32(ctx, 31, 0x264AF0u);
    ctx->pc = 0x264AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264AE8u;
    // 0x264aec: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264AE8u, 0x264AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264AF0u;
label_264af0:
    // 0x264af0: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x264af0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x264af4: 0x0  nop
    ctx->pc = 0x264af4u;
    // NOP
label_264af8:
    // 0x264af8: 0xfe340018  sd          $s4, 0x18($s1)
    ctx->pc = 0x264af8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 20));
    // 0x264afc: 0x32420800  andi        $v0, $s2, 0x800
    ctx->pc = 0x264afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2048);
    // 0x264b00: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264B00u;
    {
        const bool branch_taken_0x264b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B00u;
        // 0x264b04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b00) {
            ctx->pc = 0x264B28u;
            goto label_264b28;
        }
    }
    ctx->pc = 0x264B08u;
    // 0x264b08: 0x32622000  andi        $v0, $s3, 0x2000
    ctx->pc = 0x264b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
    // 0x264b0c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264B0Cu;
    {
        const bool branch_taken_0x264b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B0Cu;
        // 0x264b10: 0x36940060  ori         $s4, $s4, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b0c) {
            ctx->pc = 0x264B38u;
            goto label_264b38;
        }
    }
    ctx->pc = 0x264B14u;
    // 0x264b14: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x264b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x264b18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264b1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x264B1Cu;
    {
        const bool branch_taken_0x264b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B1Cu;
        // 0x264b20: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b1c) {
            ctx->pc = 0x264B38u;
            goto label_264b38;
        }
    }
    ctx->pc = 0x264B24u;
    // 0x264b24: 0x0  nop
    ctx->pc = 0x264b24u;
    // NOP
label_264b28:
    // 0x264b28: 0x32622000  andi        $v0, $s3, 0x2000
    ctx->pc = 0x264b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8192);
    // 0x264b2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264B2Cu;
    {
        const bool branch_taken_0x264b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b2c) {
            ctx->pc = 0x264B38u;
            goto label_264b38;
        }
    }
    ctx->pc = 0x264B34u;
    // 0x264b34: 0x36940008  ori         $s4, $s4, 0x8
    ctx->pc = 0x264b34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8);
label_264b38:
    // 0x264b38: 0x32420400  andi        $v0, $s2, 0x400
    ctx->pc = 0x264b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1024);
    // 0x264b3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264B3Cu;
    {
        const bool branch_taken_0x264b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b3c) {
            ctx->pc = 0x264B48u;
            goto label_264b48;
        }
    }
    ctx->pc = 0x264B44u;
    // 0x264b44: 0x36940080  ori         $s4, $s4, 0x80
    ctx->pc = 0x264b44u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)128);
label_264b48:
    // 0x264b48: 0x32628000  andi        $v0, $s3, 0x8000
    ctx->pc = 0x264b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32768);
    // 0x264b4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264B4Cu;
    {
        const bool branch_taken_0x264b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b4c) {
            ctx->pc = 0x264B58u;
            goto label_264b58;
        }
    }
    ctx->pc = 0x264B54u;
    // 0x264b54: 0x36940002  ori         $s4, $s4, 0x2
    ctx->pc = 0x264b54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2);
label_264b58:
    // 0x264b58: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x264B58u;
    {
        const bool branch_taken_0x264b58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x264B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264B58u;
        // 0x264b5c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264b58) {
            ctx->pc = 0x264B68u;
            goto label_264b68;
        }
    }
    ctx->pc = 0x264B60u;
    // 0x264b60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264b64: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x264b64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_264b68:
    // 0x264b68: 0x32631000  andi        $v1, $s3, 0x1000
    ctx->pc = 0x264b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4096);
    // 0x264b6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x264B6Cu;
    {
        const bool branch_taken_0x264b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b6c) {
            ctx->pc = 0x264B78u;
            goto label_264b78;
        }
    }
    ctx->pc = 0x264B74u;
    // 0x264b74: 0x36940010  ori         $s4, $s4, 0x10
    ctx->pc = 0x264b74u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16);
label_264b78:
    // 0x264b78: 0x32444000  andi        $a0, $s2, 0x4000
    ctx->pc = 0x264b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
    // 0x264b7c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264B7Cu;
    {
        const bool branch_taken_0x264b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b7c) {
            ctx->pc = 0x264B88u;
            goto label_264b88;
        }
    }
    ctx->pc = 0x264B84u;
    // 0x264b84: 0x36940004  ori         $s4, $s4, 0x4
    ctx->pc = 0x264b84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4);
label_264b88:
    // 0x264b88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264B88u;
    {
        const bool branch_taken_0x264b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b88) {
            ctx->pc = 0x264BA8u;
            goto label_264ba8;
        }
    }
    ctx->pc = 0x264B90u;
    // 0x264b90: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x264b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x264b94: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x264b94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x264b98: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x264B98u;
    {
        const bool branch_taken_0x264b98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x264b98) {
            ctx->pc = 0x264BA8u;
            goto label_264ba8;
        }
    }
    ctx->pc = 0x264BA0u;
    // 0x264ba0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x264ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x264ba4: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x264ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
label_264ba8:
    // 0x264ba8: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x264ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x264bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264BACu;
    {
        const bool branch_taken_0x264bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bac) {
            ctx->pc = 0x264BC0u;
            goto label_264bc0;
        }
    }
    ctx->pc = 0x264BB4u;
    // 0x264bb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x264bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x264bb8: 0xa2230023  sb          $v1, 0x23($s1)
    ctx->pc = 0x264bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x264bbc: 0x0  nop
    ctx->pc = 0x264bbcu;
    // NOP
label_264bc0:
    // 0x264bc0: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x264bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x264bc4: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x264bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x264bc8: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x264BC8u;
    {
        const bool branch_taken_0x264bc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x264BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264BC8u;
        // 0x264bcc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264bc8) {
            ctx->pc = 0x264BF0u;
            goto label_264bf0;
        }
    }
    ctx->pc = 0x264BD0u;
    // 0x264bd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264bd4: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x264bd4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x264bd8: 0x2e31824  and         $v1, $s7, $v1
    ctx->pc = 0x264bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & GPR_U64(ctx, 3));
    // 0x264bdc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264BDCu;
    {
        const bool branch_taken_0x264bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264bdc) {
            ctx->pc = 0x264BF0u;
            goto label_264bf0;
        }
    }
    ctx->pc = 0x264BE4u;
    // 0x264be4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x264be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x264be8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x264be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264bec: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x264becu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
label_264bf0:
    // 0x264bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264BF0u;
    {
        const bool branch_taken_0x264bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264bf0) {
            ctx->pc = 0x264C00u;
            goto label_264c00;
        }
    }
    ctx->pc = 0x264BF8u;
    // 0x264bf8: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
    ctx->pc = 0x264BF8u;
    {
        const bool branch_taken_0x264bf8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x264bf8) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C00u;
label_264c00:
    // 0x264c00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264C00u;
    {
        const bool branch_taken_0x264c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c00) {
            ctx->pc = 0x264C20u;
            goto label_264c20;
        }
    }
    ctx->pc = 0x264C08u;
    // 0x264c08: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x264C08u;
    {
        const bool branch_taken_0x264c08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C08u;
        // 0x264c0c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c08) {
            ctx->pc = 0x264C20u;
            goto label_264c20;
        }
    }
    ctx->pc = 0x264C10u;
    // 0x264c10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264c14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x264C14u;
    {
        const bool branch_taken_0x264c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C14u;
        // 0x264c18: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c14) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C1Cu;
    // 0x264c1c: 0x0  nop
    ctx->pc = 0x264c1cu;
    // NOP
label_264c20:
    // 0x264c20: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x264c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x264c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264C24u;
    {
        const bool branch_taken_0x264c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C24u;
        // 0x264c28: 0x32428000  andi        $v0, $s2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c24) {
            ctx->pc = 0x264C48u;
            goto label_264c48;
        }
    }
    ctx->pc = 0x264C2Cu;
    // 0x264c2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264C2Cu;
    {
        const bool branch_taken_0x264c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c2c) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C34u;
    // 0x264c34: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264C34u;
    {
        const bool branch_taken_0x264c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C34u;
        // 0x264c38: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c34) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C3Cu;
    // 0x264c3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264c40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264C40u;
    {
        const bool branch_taken_0x264c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264C40u;
        // 0x264c44: 0x282a025  or          $s4, $s4, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264c40) {
            ctx->pc = 0x264C50u;
            goto label_264c50;
        }
    }
    ctx->pc = 0x264C48u;
label_264c48:
    // 0x264c48: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x264c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x264c4c: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x264c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_264c50:
    // 0x264c50: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x264c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x264c54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264C54u;
    {
        const bool branch_taken_0x264c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c54) {
            ctx->pc = 0x264C68u;
            goto label_264c68;
        }
    }
    ctx->pc = 0x264C5Cu;
    // 0x264c5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264c60: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x264c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x264c64: 0x0  nop
    ctx->pc = 0x264c64u;
    // NOP
label_264c68:
    // 0x264c68: 0x33c28000  andi        $v0, $fp, 0x8000
    ctx->pc = 0x264c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32768);
    // 0x264c6c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x264C6Cu;
    {
        const bool branch_taken_0x264c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264c6c) {
            ctx->pc = 0x264CF0u;
            goto label_264cf0;
        }
    }
    ctx->pc = 0x264C74u;
    // 0x264c74: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x264c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x264c78: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x264c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x264c7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x264c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x264c80: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x264c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x264c84: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x264c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x264c88: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x264c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x264c8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x264c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264c94: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x264c94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x264c98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x264c98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x264c9c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x264c9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264ca0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x264CA0u;
    {
        const bool branch_taken_0x264ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x264CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CA0u;
        // 0x264ca4: 0x92240020  lbu         $a0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ca0) {
            ctx->pc = 0x264CB8u;
            goto label_264cb8;
        }
    }
    ctx->pc = 0x264CA8u;
    // 0x264ca8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264ca8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x264cac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x264cacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x264cb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x264CB0u;
    {
        const bool branch_taken_0x264cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CB0u;
        // 0x264cb4: 0x64082b  sltu        $at, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cb0) {
            ctx->pc = 0x264CD4u;
            goto label_264cd4;
        }
    }
    ctx->pc = 0x264CB8u;
label_264cb8:
    // 0x264cb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x264cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264cbc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x264cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x264cc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264cc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x264cc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x264cc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x264cc8: 0x0  nop
    ctx->pc = 0x264cc8u;
    // NOP
    // 0x264ccc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264cd0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x264cd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_264cd4:
    // 0x264cd4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x264CD4u;
    {
        const bool branch_taken_0x264cd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x264CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264CD4u;
        // 0x264cd8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264cd4) {
            ctx->pc = 0x264CE8u;
            goto label_264ce8;
        }
    }
    ctx->pc = 0x264CDCu;
    // 0x264cdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264ce0: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x264ce0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x264ce4: 0x0  nop
    ctx->pc = 0x264ce4u;
    // NOP
label_264ce8:
    // 0x264ce8: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x264ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x264cec: 0x0  nop
    ctx->pc = 0x264cecu;
    // NOP
label_264cf0:
    // 0x264cf0: 0x32428000  andi        $v0, $s2, 0x8000
    ctx->pc = 0x264cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x264cf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264CF4u;
    {
        const bool branch_taken_0x264cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264cf4) {
            ctx->pc = 0x264D18u;
            goto label_264d18;
        }
    }
    ctx->pc = 0x264CFCu;
    // 0x264cfc: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x264cfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x264d00: 0x284100ff  slti        $at, $v0, 0xFF
    ctx->pc = 0x264d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x264d04: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x264D04u;
    {
        const bool branch_taken_0x264d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d04) {
            ctx->pc = 0x264D20u;
            goto label_264d20;
        }
    }
    ctx->pc = 0x264D0Cu;
    // 0x264d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x264d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x264d10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264D10u;
    {
        const bool branch_taken_0x264d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D10u;
        // 0x264d14: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d10) {
            ctx->pc = 0x264D20u;
            goto label_264d20;
        }
    }
    ctx->pc = 0x264D18u;
label_264d18:
    // 0x264d18: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x264d18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x264d1c: 0x0  nop
    ctx->pc = 0x264d1cu;
    // NOP
label_264d20:
    // 0x264d20: 0x92020472  lbu         $v0, 0x472($s0)
    ctx->pc = 0x264d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1138)));
    // 0x264d24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264D24u;
    {
        const bool branch_taken_0x264d24 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x264D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D24u;
        // 0x264d28: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d24) {
            ctx->pc = 0x264D38u;
            goto label_264d38;
        }
    }
    ctx->pc = 0x264D2Cu;
    // 0x264d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264d30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264D30u;
    {
        const bool branch_taken_0x264d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D30u;
        // 0x264d34: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d30) {
            ctx->pc = 0x264D50u;
            goto label_264d50;
        }
    }
    ctx->pc = 0x264D38u;
label_264d38:
    // 0x264d38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264d3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264d40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x264d40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264d44: 0x0  nop
    ctx->pc = 0x264d44u;
    // NOP
    // 0x264d48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x264d48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264d4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x264d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_264d50:
    // 0x264d50: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x264d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x264d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264d58: 0x0  nop
    ctx->pc = 0x264d58u;
    // NOP
    // 0x264d5c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264d60: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x264d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x264d64: 0x92020473  lbu         $v0, 0x473($s0)
    ctx->pc = 0x264d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1139)));
    // 0x264d68: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264D68u;
    {
        const bool branch_taken_0x264d68 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x264D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D68u;
        // 0x264d6c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d68) {
            ctx->pc = 0x264D7Cu;
            goto label_264d7c;
        }
    }
    ctx->pc = 0x264D70u;
    // 0x264d70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264d74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264D74u;
    {
        const bool branch_taken_0x264d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264D74u;
        // 0x264d78: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264d74) {
            ctx->pc = 0x264D94u;
            goto label_264d94;
        }
    }
    ctx->pc = 0x264D7Cu;
label_264d7c:
    // 0x264d7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264d80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x264d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x264d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x264d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264d88: 0x0  nop
    ctx->pc = 0x264d88u;
    // NOP
    // 0x264d8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x264d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264d90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x264d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_264d94:
    // 0x264d94: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x264d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x264d98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x264d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x264d9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264d9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264da0: 0x0  nop
    ctx->pc = 0x264da0u;
    // NOP
    // 0x264da4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x264da4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x264da8: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x264da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x264dac: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x264DACu;
    SET_GPR_U32(ctx, 31, 0x264DB4u);
    ctx->pc = 0x264DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DACu;
    // 0x264db0: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x264DACu, 0x264DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DB4u;
label_264db4:
    // 0x264db4: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x264db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x264db8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264dbc: 0x0  nop
    ctx->pc = 0x264dbcu;
    // NOP
    // 0x264dc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x264dc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264dc4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x264DC4u;
    {
        const bool branch_taken_0x264dc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x264DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DC4u;
        // 0x264dc8: 0x27a200a8  addiu       $v0, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dc4) {
            ctx->pc = 0x264E68u;
            goto label_264e68;
        }
    }
    ctx->pc = 0x264DCCu;
    // 0x264dcc: 0xc04b946  jal         func_12E518
    ctx->pc = 0x264DCCu;
    SET_GPR_U32(ctx, 31, 0x264DD4u);
    ctx->pc = 0x264DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DCCu;
    // 0x264dd0: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x264DCCu, 0x264DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DD4u;
label_264dd4:
    // 0x264dd4: 0x3c03bff0  lui         $v1, 0xBFF0
    ctx->pc = 0x264dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49136 << 16));
    // 0x264dd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x264dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ddc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x264ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x264de0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x264DE0u;
    SET_GPR_U32(ctx, 31, 0x264DE8u);
    ctx->pc = 0x264DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DE0u;
    // 0x264de4: 0x70022389  pcpyld      $a0, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x264DE0u, 0x264DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DE8u;
label_264de8:
    // 0x264de8: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x264DE8u;
    SET_GPR_U32(ctx, 31, 0x264DF0u);
    ctx->pc = 0x264DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DE8u;
    // 0x264dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x264DE8u, 0x264DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DF0u;
label_264df0:
    // 0x264df0: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x264df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264df4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x264DF4u;
    SET_GPR_U32(ctx, 31, 0x264DFCu);
    ctx->pc = 0x264DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DF4u;
    // 0x264df8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x264DF4u, 0x264DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DFCu;
label_264dfc:
    // 0x264dfc: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x264dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x264e00: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x264e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x264e04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x264e04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x264e08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x264e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x264e0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264e10: 0x0  nop
    ctx->pc = 0x264e10u;
    // NOP
    // 0x264e14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x264e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x264e18: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x264e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x264e1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x264e1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x264e20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x264e20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x264e24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x264e24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x264e28: 0x0  nop
    ctx->pc = 0x264e28u;
    // NOP
    // 0x264e2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x264e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x264e30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x264e30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x264e34: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x264e38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x264e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264e3c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264e3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264e40: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264E40u;
    SET_GPR_U32(ctx, 31, 0x264E48u);
    ctx->pc = 0x264E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264E40u;
    // 0x264e44: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264E40u, 0x264E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E48u;
label_264e48:
    // 0x264e48: 0xa6220008  sh          $v0, 0x8($s1)
    ctx->pc = 0x264e48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x264e4c: 0x32e20400  andi        $v0, $s7, 0x400
    ctx->pc = 0x264e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1024);
    // 0x264e50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264E50u;
    {
        const bool branch_taken_0x264e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E50u;
        // 0x264e54: 0x36940400  ori         $s4, $s4, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e50) {
            ctx->pc = 0x264E78u;
            goto label_264e78;
        }
    }
    ctx->pc = 0x264E58u;
    // 0x264e58: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x264e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x264e5c: 0x36941000  ori         $s4, $s4, 0x1000
    ctx->pc = 0x264e5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4096);
    // 0x264e60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x264E60u;
    {
        const bool branch_taken_0x264e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E60u;
        // 0x264e64: 0xa222000a  sb          $v0, 0xA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e60) {
            ctx->pc = 0x264E78u;
            goto label_264e78;
        }
    }
    ctx->pc = 0x264E68u;
label_264e68:
    // 0x264e68: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x264e68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264e6c: 0x36940800  ori         $s4, $s4, 0x800
    ctx->pc = 0x264e6cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)2048);
    // 0x264e70: 0x2442ffe1  addiu       $v0, $v0, -0x1F
    ctx->pc = 0x264e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967265));
    // 0x264e74: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x264e74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_264e78:
    // 0x264e78: 0x32e21000  andi        $v0, $s7, 0x1000
    ctx->pc = 0x264e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4096);
    // 0x264e7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264E7Cu;
    {
        const bool branch_taken_0x264e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e7c) {
            ctx->pc = 0x264EA0u;
            goto label_264ea0;
        }
    }
    ctx->pc = 0x264E84u;
    // 0x264e84: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x264e84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x264e88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264E88u;
    {
        const bool branch_taken_0x264e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264e88) {
            ctx->pc = 0x264EA0u;
            goto label_264ea0;
        }
    }
    ctx->pc = 0x264E90u;
    // 0x264e90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x264e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x264e94: 0x36941000  ori         $s4, $s4, 0x1000
    ctx->pc = 0x264e94u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)4096);
    // 0x264e98: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x264e98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x264e9c: 0x0  nop
    ctx->pc = 0x264e9cu;
    // NOP
label_264ea0:
    // 0x264ea0: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264ea4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x264EA4u;
    {
        const bool branch_taken_0x264ea4 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x264ea4) {
            ctx->pc = 0x264EB0u;
            goto label_264eb0;
        }
    }
    ctx->pc = 0x264EACu;
    // 0x264eac: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x264eacu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_264eb0:
    // 0x264eb0: 0x92030472  lbu         $v1, 0x472($s0)
    ctx->pc = 0x264eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1138)));
    // 0x264eb4: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x264eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x264eb8: 0x26160473  addiu       $s6, $s0, 0x473
    ctx->pc = 0x264eb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 1139));
    // 0x264ebc: 0x92120473  lbu         $s2, 0x473($s0)
    ctx->pc = 0x264ebcu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1139)));
    // 0x264ec0: 0x26130472  addiu       $s3, $s0, 0x472
    ctx->pc = 0x264ec0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1138));
    // 0x264ec4: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x264EC4u;
    SET_GPR_U32(ctx, 31, 0x264ECCu);
    ctx->pc = 0x264EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264EC4u;
    // 0x264ec8: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x264EC4u, 0x264ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264ECCu;
label_264ecc:
    // 0x264ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264ed0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x264ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x264ed4: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x264ed4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x264ed8: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x264ed8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x264edc: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x264EDCu;
    SET_GPR_U32(ctx, 31, 0x264EE4u);
    ctx->pc = 0x264EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264EDCu;
    // 0x264ee0: 0x622023  subu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x264EDCu, 0x264EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264EE4u;
label_264ee4:
    // 0x264ee4: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x264ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264ee8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x264ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x264eec: 0x420c2  srl         $a0, $a0, 3
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x264ef0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x264ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x264ef4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x264ef4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x264ef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264efc: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x264efcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x264f00: 0x92c40000  lbu         $a0, 0x0($s6)
    ctx->pc = 0x264f00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x264f04: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x264f04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x264f08: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x264f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x264f0c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x264f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x264f10: 0xa623000e  sh          $v1, 0xE($s1)
    ctx->pc = 0x264f10u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x264f14: 0x8623000c  lh          $v1, 0xC($s1)
    ctx->pc = 0x264f14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264f18: 0x2c6101f5  sltiu       $at, $v1, 0x1F5
    ctx->pc = 0x264f18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
    // 0x264f1c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x264F1Cu;
    {
        const bool branch_taken_0x264f1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x264f1c) {
            ctx->pc = 0x264F28u;
            goto label_264f28;
        }
    }
    ctx->pc = 0x264F24u;
    // 0x264f24: 0x36942000  ori         $s4, $s4, 0x2000
    ctx->pc = 0x264f24u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8192);
label_264f28:
    // 0x264f28: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x264f28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x264f2c: 0xfe340010  sd          $s4, 0x10($s1)
    ctx->pc = 0x264f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 20));
    // 0x264f30: 0x2ea30003  sltiu       $v1, $s5, 0x3
    ctx->pc = 0x264f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x264f34: 0x1460fe30  bnez        $v1, . + 4 + (-0x1D0 << 2)
    ctx->pc = 0x264F34u;
    {
        const bool branch_taken_0x264f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F34u;
        // 0x264f38: 0x26310028  addiu       $s1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f34) {
            ctx->pc = 0x2647F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2647f8;
        }
    }
    ctx->pc = 0x264F3Cu;
    // 0x264f3c: 0x93838864  lbu         $v1, -0x779C($gp)
    ctx->pc = 0x264f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936676)));
    // 0x264f40: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x264F40u;
    {
        const bool branch_taken_0x264f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F40u;
        // 0x264f44: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f40) {
            ctx->pc = 0x264FE0u;
            goto label_264fe0;
        }
    }
    ctx->pc = 0x264F48u;
    // 0x264f48: 0xdc23f750  ld          $v1, -0x8B0($at)
    ctx->pc = 0x264f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 1), 4294965072)));
    // 0x264f4c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x264f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x264f50: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x264F50u;
    {
        const bool branch_taken_0x264f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264f50) {
            ctx->pc = 0x264FC8u;
            goto label_264fc8;
        }
    }
    ctx->pc = 0x264F58u;
    // 0x264f58: 0x8f838860  lw          $v1, -0x77A0($gp)
    ctx->pc = 0x264f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936672)));
    // 0x264f5c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x264f5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x264f60: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x264F60u;
    {
        const bool branch_taken_0x264f60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F60u;
        // 0x264f64: 0x3c010069  lui         $at, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f60) {
            ctx->pc = 0x264FC8u;
            goto label_264fc8;
        }
    }
    ctx->pc = 0x264F68u;
    // 0x264f68: 0x8782885c  lh          $v0, -0x77A4($gp)
    ctx->pc = 0x264f68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x264f6c: 0x84236cc2  lh          $v1, 0x6CC2($at)
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 27842)));
    // 0x264f70: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x264f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x264f74: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x264f78: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x264f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x264f7c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x264f7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x264f80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x264f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264f84: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264f88: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x264F88u;
    SET_GPR_U32(ctx, 31, 0x264F90u);
    ctx->pc = 0x264F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F88u;
    // 0x264f8c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x264F88u, 0x264F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F90u;
label_264f90:
    // 0x264f90: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x264f90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264f94: 0x2404ffea  addiu       $a0, $zero, -0x16
    ctx->pc = 0x264f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
    // 0x264f98: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x264f98u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x264f9c: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x264F9Cu;
    SET_GPR_U32(ctx, 31, 0x264FA4u);
    ctx->pc = 0x264FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F9Cu;
    // 0x264fa0: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x264F9Cu, 0x264FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264FA4u;
label_264fa4:
    // 0x264fa4: 0x8783885c  lh          $v1, -0x77A4($gp)
    ctx->pc = 0x264fa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x264fa8: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x264fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x264fac: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x264facu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x264fb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264fb4: 0xa783885c  sh          $v1, -0x77A4($gp)
    ctx->pc = 0x264fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 3));
    // 0x264fb8: 0x8783885c  lh          $v1, -0x77A4($gp)
    ctx->pc = 0x264fb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936668)));
    // 0x264fbc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x264fc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264FC0u;
    {
        const bool branch_taken_0x264fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264FC0u;
        // 0x264fc4: 0xa783885c  sh          $v1, -0x77A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264fc0) {
            ctx->pc = 0x264FE0u;
            goto label_264fe0;
        }
    }
    ctx->pc = 0x264FC8u;
label_264fc8:
    // 0x264fc8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x264fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x264fcc: 0x84236cc2  lh          $v1, 0x6CC2($at)
    ctx->pc = 0x264fccu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x696CC2u));
    // 0x264fd0: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x264fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x264fd4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x264fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x264fd8: 0xa783885c  sh          $v1, -0x77A4($gp)
    ctx->pc = 0x264fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 3));
    // 0x264fdc: 0x0  nop
    ctx->pc = 0x264fdcu;
    // NOP
label_264fe0:
    // 0x264fe0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x264fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x264fe4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x264fe4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x264fe8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x264fe8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x264fec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x264fecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x264ff0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264ff0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264ff4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264ff4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264ff8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264ffc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265000: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x265000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265004: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x265004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265008: 0x3e00008  jr          $ra
    ctx->pc = 0x265008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265008u;
        // 0x26500c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265010u;
}
