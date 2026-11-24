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

// Function: sub_0034A370
// Address: 0x34a370 - 0x34a830
void sub_0034A370_0x34a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034A370_0x34a370");
#endif

    switch (ctx->pc) {
        case 0x34a4b8u: goto label_34a4b8;
        case 0x34a4d8u: goto label_34a4d8;
        case 0x34a510u: goto label_34a510;
        case 0x34a540u: goto label_34a540;
        case 0x34a570u: goto label_34a570;
        case 0x34a58cu: goto label_34a58c;
        case 0x34a5dcu: goto label_34a5dc;
        case 0x34a5f0u: goto label_34a5f0;
        case 0x34a600u: goto label_34a600;
        case 0x34a618u: goto label_34a618;
        case 0x34a63cu: goto label_34a63c;
        case 0x34a660u: goto label_34a660;
        case 0x34a698u: goto label_34a698;
        case 0x34a6acu: goto label_34a6ac;
        case 0x34a6f4u: goto label_34a6f4;
        case 0x34a704u: goto label_34a704;
        case 0x34a714u: goto label_34a714;
        case 0x34a770u: goto label_34a770;
        case 0x34a818u: goto label_34a818;
        default: break;
    }

    ctx->pc = 0x34a370u;

    // 0x34a370: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x34a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x34a374: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x34a374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34a378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34a37c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x34a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x34a380: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x34a380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x34a384: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34a384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34a388: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x34a388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a38c: 0x90850521  lbu         $a1, 0x521($a0)
    ctx->pc = 0x34a38cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x34a390: 0x10a300cf  beq         $a1, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x34A390u;
    {
        const bool branch_taken_0x34a390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A390u;
        // 0x34a394: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a390) {
            ctx->pc = 0x34A6D0u;
            goto label_34a6d0;
        }
    }
    ctx->pc = 0x34A398u;
    // 0x34a398: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a39c: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x34A39Cu;
    {
        const bool branch_taken_0x34a39c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A39Cu;
        // 0x34a3a0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a39c) {
            ctx->pc = 0x34A4A8u;
            goto label_34a4a8;
        }
    }
    ctx->pc = 0x34A3A4u;
    // 0x34a3a4: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A3A4u;
    {
        const bool branch_taken_0x34a3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a3a4) {
            ctx->pc = 0x34A3F8u;
            goto label_34a3f8;
        }
    }
    ctx->pc = 0x34A3ACu;
    // 0x34a3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a3b0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34A3B0u;
    {
        const bool branch_taken_0x34a3b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34a3b0) {
            ctx->pc = 0x34A3D8u;
            goto label_34a3d8;
        }
    }
    ctx->pc = 0x34A3B8u;
    // 0x34a3b8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A3B8u;
    {
        const bool branch_taken_0x34a3b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a3b8) {
            ctx->pc = 0x34A3C8u;
            goto label_34a3c8;
        }
    }
    ctx->pc = 0x34A3C0u;
    // 0x34a3c0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x34A3C0u;
    {
        const bool branch_taken_0x34a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a3c0) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A3C8u;
label_34a3c8:
    // 0x34a3c8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x34a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x34a3cc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x34A3CCu;
    {
        const bool branch_taken_0x34a3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3CCu;
        // 0x34a3d0: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3cc) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A3D4u;
    // 0x34a3d4: 0x0  nop
    ctx->pc = 0x34a3d4u;
    // NOP
label_34a3d8:
    // 0x34a3d8: 0x86230526  lh          $v1, 0x526($s1)
    ctx->pc = 0x34a3d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1318)));
    // 0x34a3dc: 0xa6230512  sh          $v1, 0x512($s1)
    ctx->pc = 0x34a3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 3));
    // 0x34a3e0: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34a3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34a3e4: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34a3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3e8: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34a3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a3ec: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34a3ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34a3f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34a3f4: 0xa2230521  sb          $v1, 0x521($s1)
    ctx->pc = 0x34a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
label_34a3f8:
    // 0x34a3f8: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34a3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34a3fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A3FCu;
    {
        const bool branch_taken_0x34a3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A3FCu;
        // 0x34a400: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a3fc) {
            ctx->pc = 0x34A410u;
            goto label_34a410;
        }
    }
    ctx->pc = 0x34A404u;
    // 0x34a404: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34A404u;
    {
        const bool branch_taken_0x34a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a404) {
            ctx->pc = 0x34A490u;
            goto label_34a490;
        }
    }
    ctx->pc = 0x34A40Cu;
    // 0x34a40c: 0x0  nop
    ctx->pc = 0x34a40cu;
    // NOP
label_34a410:
    // 0x34a410: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34a410u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a414: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34a414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34a418: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34a41c: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a41cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a420: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34a420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34a424: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34A424u;
    {
        const bool branch_taken_0x34a424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a424) {
            ctx->pc = 0x34A460u;
            goto label_34a460;
        }
    }
    ctx->pc = 0x34A42Cu;
    // 0x34a42c: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34a42cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a430: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34a430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34a434: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A434u;
    {
        const bool branch_taken_0x34a434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A434u;
        // 0x34a438: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a434) {
            ctx->pc = 0x34A488u;
            goto label_34a488;
        }
    }
    ctx->pc = 0x34A43Cu;
    // 0x34a43c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a440: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34a440u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a444: 0x0  nop
    ctx->pc = 0x34a444u;
    // NOP
    // 0x34a448: 0x0  nop
    ctx->pc = 0x34a448u;
    // NOP
    // 0x34a44c: 0x2010  mfhi        $a0
    ctx->pc = 0x34a44cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34a450: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a450u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34A454u;
    {
        const bool branch_taken_0x34a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A454u;
        // 0x34a458: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a454) {
            ctx->pc = 0x34A488u;
            goto label_34a488;
        }
    }
    ctx->pc = 0x34A45Cu;
    // 0x34a45c: 0x0  nop
    ctx->pc = 0x34a45cu;
    // NOP
label_34a460:
    // 0x34a460: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34a460u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a464: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34a464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34a468: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A468u;
    {
        const bool branch_taken_0x34a468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a468) {
            ctx->pc = 0x34A488u;
            goto label_34a488;
        }
    }
    ctx->pc = 0x34A470u;
    // 0x34a470: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a478: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34a478u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a47c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A47Cu;
    {
        const bool branch_taken_0x34a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A47Cu;
        // 0x34a480: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a47c) {
            ctx->pc = 0x34A490u;
            goto label_34a490;
        }
    }
    ctx->pc = 0x34A484u;
    // 0x34a484: 0x0  nop
    ctx->pc = 0x34a484u;
    // NOP
label_34a488:
    // 0x34a488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a48c: 0x0  nop
    ctx->pc = 0x34a48cu;
    // NOP
label_34a490:
    // 0x34a490: 0x146000e1  bnez        $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x34A490u;
    {
        const bool branch_taken_0x34a490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a490) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A498u;
    // 0x34a498: 0x92230521  lbu         $v1, 0x521($s1)
    ctx->pc = 0x34a498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34a49c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x34a4a0: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x34A4A0u;
    {
        const bool branch_taken_0x34a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4A0u;
        // 0x34a4a4: 0xa2230521  sb          $v1, 0x521($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4a0) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A4A8u;
label_34a4a8:
    // 0x34a4a8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A4A8u;
    {
        const bool branch_taken_0x34a4a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4A8u;
        // 0x34a4ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4a8) {
            ctx->pc = 0x34A4C0u;
            goto label_34a4c0;
        }
    }
    ctx->pc = 0x34A4B0u;
    // 0x34a4b0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34A4B0u;
    SET_GPR_U32(ctx, 31, 0x34A4B8u);
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34A4B0u, 0x34A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A4B8u;
label_34a4b8:
    // 0x34a4b8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x34A4B8u;
    {
        const bool branch_taken_0x34a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a4b8) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A4C0u;
label_34a4c0:
    // 0x34a4c0: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x34a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x34a4c4: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x34A4C4u;
    {
        const bool branch_taken_0x34a4c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A4C4u;
        // 0x34a4c8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a4c4) {
            ctx->pc = 0x34A520u;
            goto label_34a520;
        }
    }
    ctx->pc = 0x34A4CCu;
    // 0x34a4cc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x34a4ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a4d0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34A4D0u;
    SET_GPR_U32(ctx, 31, 0x34A4D8u);
    ctx->pc = 0x34A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A4D0u;
    // 0x34a4d4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34A4D0u, 0x34A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A4D8u;
label_34a4d8:
    // 0x34a4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A4D8u;
    {
        const bool branch_taken_0x34a4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a4d8) {
            ctx->pc = 0x34A4E8u;
            goto label_34a4e8;
        }
    }
    ctx->pc = 0x34A4E0u;
    // 0x34a4e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a4e4: 0x0  nop
    ctx->pc = 0x34a4e4u;
    // NOP
label_34a4e8:
    // 0x34a4e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A4E8u;
    {
        const bool branch_taken_0x34a4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a4e8) {
            ctx->pc = 0x34A508u;
            goto label_34a508;
        }
    }
    ctx->pc = 0x34A4F0u;
    // 0x34a4f0: 0x8c4229c0  lw          $v0, 0x29C0($v0)
    ctx->pc = 0x34a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x34a4f4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x34a4f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34a4f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A4F8u;
    {
        const bool branch_taken_0x34a4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a4f8) {
            ctx->pc = 0x34A508u;
            goto label_34a508;
        }
    }
    ctx->pc = 0x34A500u;
    // 0x34a500: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a504: 0x0  nop
    ctx->pc = 0x34a504u;
    // NOP
label_34a508:
    // 0x34a508: 0xc097864  jal         func_25E190
    ctx->pc = 0x34A508u;
    SET_GPR_U32(ctx, 31, 0x34A510u);
    ctx->pc = 0x34A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A508u;
    // 0x34a50c: 0x8e240518  lw          $a0, 0x518($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E190u, 0x34A508u, 0x34A510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A510u;
label_34a510:
    // 0x34a510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A510u;
    {
        const bool branch_taken_0x34a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a510) {
            ctx->pc = 0x34A528u;
            goto label_34a528;
        }
    }
    ctx->pc = 0x34A518u;
    // 0x34a518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34A518u;
    {
        const bool branch_taken_0x34a518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A518u;
        // 0x34a51c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a518) {
            ctx->pc = 0x34A528u;
            goto label_34a528;
        }
    }
    ctx->pc = 0x34A520u;
label_34a520:
    // 0x34a520: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34a520u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a524: 0x0  nop
    ctx->pc = 0x34a524u;
    // NOP
label_34a528:
    // 0x34a528: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x34A528u;
    {
        const bool branch_taken_0x34a528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a528) {
            ctx->pc = 0x34A580u;
            goto label_34a580;
        }
    }
    ctx->pc = 0x34A530u;
    // 0x34a530: 0x8e250518  lw          $a1, 0x518($s1)
    ctx->pc = 0x34a530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1304)));
    // 0x34a534: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x34a534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x34a538: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x34A538u;
    SET_GPR_U32(ctx, 31, 0x34A540u);
    ctx->pc = 0x34A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A538u;
    // 0x34a53c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34A538u, 0x34A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A540u;
label_34a540:
    // 0x34a540: 0x90430733  lbu         $v1, 0x733($v0)
    ctx->pc = 0x34a540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1843)));
    // 0x34a544: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x34a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34a548: 0x8c46004c  lw          $a2, 0x4C($v0)
    ctx->pc = 0x34a548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x34a54c: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x34a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34a550: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x34a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x34a554: 0x90a50730  lbu         $a1, 0x730($a1)
    ctx->pc = 0x34a554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1840)));
    // 0x34a558: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34a558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34a55c: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x34a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x34a560: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x34a560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x34a564: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x34a564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x34a568: 0xc041442  jal         func_105108
    ctx->pc = 0x34A568u;
    SET_GPR_U32(ctx, 31, 0x34A570u);
    ctx->pc = 0x34A56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A568u;
    // 0x34a56c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x34A568u, 0x34A570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A570u;
label_34a570:
    // 0x34a570: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x34a570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34a574: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34A574u;
    {
        const bool branch_taken_0x34a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A574u;
        // 0x34a578: 0x7e220550  sq          $v0, 0x550($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a574) {
            ctx->pc = 0x34A600u;
            goto label_34a600;
        }
    }
    ctx->pc = 0x34A57Cu;
    // 0x34a57c: 0x0  nop
    ctx->pc = 0x34a57cu;
    // NOP
label_34a580:
    // 0x34a580: 0x9224056a  lbu         $a0, 0x56A($s1)
    ctx->pc = 0x34a580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1386)));
    // 0x34a584: 0xc0970c4  jal         func_25C310
    ctx->pc = 0x34A584u;
    SET_GPR_U32(ctx, 31, 0x34A58Cu);
    ctx->pc = 0x34A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A584u;
    // 0x34a588: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C310u, 0x34A584u, 0x34A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A58Cu;
label_34a58c:
    // 0x34a58c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A58Cu;
    {
        const bool branch_taken_0x34a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a58c) {
            ctx->pc = 0x34A5A0u;
            goto label_34a5a0;
        }
    }
    ctx->pc = 0x34A594u;
    // 0x34a594: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x34a594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x34a598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x34A598u;
    {
        const bool branch_taken_0x34a598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A598u;
        // 0x34a59c: 0x7e220550  sq          $v0, 0x550($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a598) {
            ctx->pc = 0x34A600u;
            goto label_34a600;
        }
    }
    ctx->pc = 0x34A5A0u;
label_34a5a0:
    // 0x34a5a0: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x34a5a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x34a5a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x34a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x34a5a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34a5ac: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x34a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x34a5b0: 0x7e230550  sq          $v1, 0x550($s1)
    ctx->pc = 0x34a5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1360), GPR_VEC(ctx, 3));
    // 0x34a5b4: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x34a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x34a5b8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x34a5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34a5bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a5c0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x34a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x34a5c4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x34a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x34a5c8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x34a5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x34a5cc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x34a5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x34a5d0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x34a5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x34a5d4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x34A5D4u;
    SET_GPR_U32(ctx, 31, 0x34A5DCu);
    ctx->pc = 0x34A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A5D4u;
    // 0x34a5d8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x34A5D4u, 0x34A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5DCu;
label_34a5dc:
    // 0x34a5dc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x34a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x34a5e0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x34a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34a5e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34a5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34a5e8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x34A5E8u;
    SET_GPR_U32(ctx, 31, 0x34A5F0u);
    ctx->pc = 0x34A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A5E8u;
    // 0x34a5ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x34A5E8u, 0x34A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A5F0u;
label_34a5f0:
    // 0x34a5f0: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x34a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x34a5f4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x34a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34a5f8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x34A5F8u;
    SET_GPR_U32(ctx, 31, 0x34A600u);
    ctx->pc = 0x34A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A5F8u;
    // 0x34a5fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x34A5F8u, 0x34A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A600u;
label_34a600:
    // 0x34a600: 0x7a220550  lq          $v0, 0x550($s1)
    ctx->pc = 0x34a600u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x34a604: 0x26240550  addiu       $a0, $s1, 0x550
    ctx->pc = 0x34a604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x34a608: 0x27a500bc  addiu       $a1, $sp, 0xBC
    ctx->pc = 0x34a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x34a60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a610: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x34A610u;
    SET_GPR_U32(ctx, 31, 0x34A618u);
    ctx->pc = 0x34A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A610u;
    // 0x34a614: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x34A610u, 0x34A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A618u;
label_34a618:
    // 0x34a618: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34A618u;
    {
        const bool branch_taken_0x34a618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a618) {
            ctx->pc = 0x34A630u;
            goto label_34a630;
        }
    }
    ctx->pc = 0x34A620u;
    // 0x34a620: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x34a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34a624: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34A624u;
    {
        const bool branch_taken_0x34a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A624u;
        // 0x34a628: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a624) {
            ctx->pc = 0x34A648u;
            goto label_34a648;
        }
    }
    ctx->pc = 0x34A62Cu;
    // 0x34a62c: 0x0  nop
    ctx->pc = 0x34a62cu;
    // NOP
label_34a630:
    // 0x34a630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a634: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34A634u;
    SET_GPR_U32(ctx, 31, 0x34A63Cu);
    ctx->pc = 0x34A638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A634u;
    // 0x34a638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34A634u, 0x34A63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A63Cu;
label_34a63c:
    // 0x34a63c: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x34A63Cu;
    {
        const bool branch_taken_0x34a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a63c) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A644u;
    // 0x34a644: 0x0  nop
    ctx->pc = 0x34a644u;
    // NOP
label_34a648:
    // 0x34a648: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34A648u;
    {
        const bool branch_taken_0x34a648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a648) {
            ctx->pc = 0x34A6A0u;
            goto label_34a6a0;
        }
    }
    ctx->pc = 0x34A650u;
    // 0x34a650: 0x9224053b  lbu         $a0, 0x53B($s1)
    ctx->pc = 0x34a650u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1339)));
    // 0x34a654: 0x9225052e  lbu         $a1, 0x52E($s1)
    ctx->pc = 0x34a654u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34a658: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x34A658u;
    SET_GPR_U32(ctx, 31, 0x34A660u);
    ctx->pc = 0x34A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A658u;
    // 0x34a65c: 0x26260020  addiu       $a2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x34A658u, 0x34A660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A660u;
label_34a660:
    // 0x34a660: 0xae220560  sw          $v0, 0x560($s1)
    ctx->pc = 0x34a660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1376), GPR_U32(ctx, 2));
    // 0x34a664: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x34a664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x34a668: 0x9223052e  lbu         $v1, 0x52E($s1)
    ctx->pc = 0x34a668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1326)));
    // 0x34a66c: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x34a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x34a670: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x34a670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x34a674: 0x34450500  ori         $a1, $v0, 0x500
    ctx->pc = 0x34a674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x34a678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34a678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a67c: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x34a67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34a680: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34a680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x34a684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x34a688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a68c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x34a68cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a690: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x34A690u;
    SET_GPR_U32(ctx, 31, 0x34A698u);
    ctx->pc = 0x34A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A690u;
    // 0x34a694: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x34A690u, 0x34A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A698u;
label_34a698:
    // 0x34a698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x34A698u;
    {
        const bool branch_taken_0x34a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a698) {
            ctx->pc = 0x34A6B0u;
            goto label_34a6b0;
        }
    }
    ctx->pc = 0x34A6A0u;
label_34a6a0:
    // 0x34a6a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a6a4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34A6A4u;
    SET_GPR_U32(ctx, 31, 0x34A6ACu);
    ctx->pc = 0x34A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6A4u;
    // 0x34a6a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34A6A4u, 0x34A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A6ACu;
label_34a6ac:
    // 0x34a6ac: 0x0  nop
    ctx->pc = 0x34a6acu;
    // NOP
label_34a6b0:
    // 0x34a6b0: 0x86220528  lh          $v0, 0x528($s1)
    ctx->pc = 0x34a6b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1320)));
    // 0x34a6b4: 0xa6220512  sh          $v0, 0x512($s1)
    ctx->pc = 0x34a6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x34a6b8: 0xa6200510  sh          $zero, 0x510($s1)
    ctx->pc = 0x34a6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x34a6bc: 0xa2200514  sb          $zero, 0x514($s1)
    ctx->pc = 0x34a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a6c0: 0xa2200515  sb          $zero, 0x515($s1)
    ctx->pc = 0x34a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a6c4: 0x92220521  lbu         $v0, 0x521($s1)
    ctx->pc = 0x34a6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1313)));
    // 0x34a6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x34a6cc: 0xa2220521  sb          $v0, 0x521($s1)
    ctx->pc = 0x34a6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1313), (uint8_t)GPR_U32(ctx, 2));
label_34a6d0:
    // 0x34a6d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x34a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x34a6d4: 0x34438885  ori         $v1, $v0, 0x8885
    ctx->pc = 0x34a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x34a6d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x34a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x34a6dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34a6e0: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x34a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x34a6e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x34a6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34a6e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34a6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34a6ec: 0xc07681c  jal         func_1DA070
    ctx->pc = 0x34A6ECu;
    SET_GPR_U32(ctx, 31, 0x34A6F4u);
    ctx->pc = 0x34A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6ECu;
    // 0x34a6f0: 0x262600a0  addiu       $a2, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA070u, 0x34A6ECu, 0x34A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A6F4u;
label_34a6f4:
    // 0x34a6f4: 0x8e260560  lw          $a2, 0x560($s1)
    ctx->pc = 0x34a6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1376)));
    // 0x34a6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a6fc: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x34A6FCu;
    SET_GPR_U32(ctx, 31, 0x34A704u);
    ctx->pc = 0x34A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A6FCu;
    // 0x34a700: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x34A6FCu, 0x34A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A704u;
label_34a704:
    // 0x34a704: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A704u;
    {
        const bool branch_taken_0x34a704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A704u;
        // 0x34a708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a704) {
            ctx->pc = 0x34A718u;
            goto label_34a718;
        }
    }
    ctx->pc = 0x34A70Cu;
    // 0x34a70c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34A70Cu;
    SET_GPR_U32(ctx, 31, 0x34A714u);
    ctx->pc = 0x34A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A70Cu;
    // 0x34a710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34A70Cu, 0x34A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A714u;
label_34a714:
    // 0x34a714: 0x0  nop
    ctx->pc = 0x34a714u;
    // NOP
label_34a718:
    // 0x34a718: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34a71c: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x34a71cu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x34a720: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x34a720u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34a724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a728: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34a72c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34a72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34a730: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34a730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34a734: 0x7fa90070  sq          $t1, 0x70($sp)
    ctx->pc = 0x34a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 9));
    // 0x34a738: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x34a738u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x34a73c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34a73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34a740: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x34a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
    // 0x34a744: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x34a744u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x34a748: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x34a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x34a74c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x34a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x34a750: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x34a750u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x34a754: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34a754u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34a758: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x34a758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34a75c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x34a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x34a760: 0x92260568  lbu         $a2, 0x568($s1)
    ctx->pc = 0x34a760u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x34a764: 0xc62c0564  lwc1        $f12, 0x564($s1)
    ctx->pc = 0x34a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34a768: 0xc0c0900  jal         func_302400
    ctx->pc = 0x34A768u;
    SET_GPR_U32(ctx, 31, 0x34A770u);
    ctx->pc = 0x34A76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A768u;
    // 0x34a76c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x34A768u, 0x34A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A770u;
label_34a770:
    // 0x34a770: 0x92230515  lbu         $v1, 0x515($s1)
    ctx->pc = 0x34a770u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1301)));
    // 0x34a774: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34A774u;
    {
        const bool branch_taken_0x34a774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A774u;
        // 0x34a778: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a774) {
            ctx->pc = 0x34A788u;
            goto label_34a788;
        }
    }
    ctx->pc = 0x34A77Cu;
    // 0x34a77c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34A77Cu;
    {
        const bool branch_taken_0x34a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a77c) {
            ctx->pc = 0x34A808u;
            goto label_34a808;
        }
    }
    ctx->pc = 0x34A784u;
    // 0x34a784: 0x0  nop
    ctx->pc = 0x34a784u;
    // NOP
label_34a788:
    // 0x34a788: 0x86240510  lh          $a0, 0x510($s1)
    ctx->pc = 0x34a788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a78c: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x34a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x34a790: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x34a794: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a794u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a798: 0x86240512  lh          $a0, 0x512($s1)
    ctx->pc = 0x34a798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1298)));
    // 0x34a79c: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34A79Cu;
    {
        const bool branch_taken_0x34a79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x34a79c) {
            ctx->pc = 0x34A7D8u;
            goto label_34a7d8;
        }
    }
    ctx->pc = 0x34A7A4u;
    // 0x34a7a4: 0x86250510  lh          $a1, 0x510($s1)
    ctx->pc = 0x34a7a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a7a8: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x34a7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x34a7ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x34A7ACu;
    {
        const bool branch_taken_0x34a7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7ACu;
        // 0x34a7b0: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7ac) {
            ctx->pc = 0x34A800u;
            goto label_34a800;
        }
    }
    ctx->pc = 0x34A7B4u;
    // 0x34a7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a7b8: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x34a7b8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34a7bc: 0x0  nop
    ctx->pc = 0x34a7bcu;
    // NOP
    // 0x34a7c0: 0x0  nop
    ctx->pc = 0x34a7c0u;
    // NOP
    // 0x34a7c4: 0x2010  mfhi        $a0
    ctx->pc = 0x34a7c4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34a7c8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a7cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34A7CCu;
    {
        const bool branch_taken_0x34a7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7CCu;
        // 0x34a7d0: 0xa2230514  sb          $v1, 0x514($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7cc) {
            ctx->pc = 0x34A800u;
            goto label_34a800;
        }
    }
    ctx->pc = 0x34A7D4u;
    // 0x34a7d4: 0x0  nop
    ctx->pc = 0x34a7d4u;
    // NOP
label_34a7d8:
    // 0x34a7d8: 0x86230510  lh          $v1, 0x510($s1)
    ctx->pc = 0x34a7d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1296)));
    // 0x34a7dc: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x34a7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x34a7e0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34A7E0u;
    {
        const bool branch_taken_0x34a7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x34a7e0) {
            ctx->pc = 0x34A800u;
            goto label_34a800;
        }
    }
    ctx->pc = 0x34A7E8u;
    // 0x34a7e8: 0xa6240510  sh          $a0, 0x510($s1)
    ctx->pc = 0x34a7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x34a7ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a7f0: 0xa2230515  sb          $v1, 0x515($s1)
    ctx->pc = 0x34a7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a7f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34A7F4u;
    {
        const bool branch_taken_0x34a7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A7F4u;
        // 0x34a7f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a7f4) {
            ctx->pc = 0x34A808u;
            goto label_34a808;
        }
    }
    ctx->pc = 0x34A7FCu;
    // 0x34a7fc: 0x0  nop
    ctx->pc = 0x34a7fcu;
    // NOP
label_34a800:
    // 0x34a800: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a804: 0x0  nop
    ctx->pc = 0x34a804u;
    // NOP
label_34a808:
    // 0x34a808: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34A808u;
    {
        const bool branch_taken_0x34a808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A808u;
        // 0x34a80c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34a808) {
            ctx->pc = 0x34A818u;
            goto label_34a818;
        }
    }
    ctx->pc = 0x34A810u;
    // 0x34a810: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x34A810u;
    SET_GPR_U32(ctx, 31, 0x34A818u);
    ctx->pc = 0x34A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34A810u;
    // 0x34a814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x34A810u, 0x34A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A818u;
label_34a818:
    // 0x34a818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34a81c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x34a81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34a820: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x34a820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34a824: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34a824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34a828: 0x3e00008  jr          $ra
    ctx->pc = 0x34A828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34A828u;
        // 0x34a82c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34A828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34A830u;
}
