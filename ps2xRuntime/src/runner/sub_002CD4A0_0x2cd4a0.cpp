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

// Function: sub_002CD4A0
// Address: 0x2cd4a0 - 0x2cd89c
void sub_002CD4A0_0x2cd4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD4A0_0x2cd4a0");
#endif

    switch (ctx->pc) {
        case 0x2cd4a0u: goto label_2cd4a0;
        case 0x2cd4a4u: goto label_2cd4a4;
        case 0x2cd4a8u: goto label_2cd4a8;
        case 0x2cd4acu: goto label_2cd4ac;
        case 0x2cd4b0u: goto label_2cd4b0;
        case 0x2cd4b4u: goto label_2cd4b4;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4bcu: goto label_2cd4bc;
        case 0x2cd4c0u: goto label_2cd4c0;
        case 0x2cd4c4u: goto label_2cd4c4;
        case 0x2cd4c8u: goto label_2cd4c8;
        case 0x2cd4ccu: goto label_2cd4cc;
        case 0x2cd4d0u: goto label_2cd4d0;
        case 0x2cd4d4u: goto label_2cd4d4;
        case 0x2cd4d8u: goto label_2cd4d8;
        case 0x2cd4dcu: goto label_2cd4dc;
        case 0x2cd4e0u: goto label_2cd4e0;
        case 0x2cd4e4u: goto label_2cd4e4;
        case 0x2cd4e8u: goto label_2cd4e8;
        case 0x2cd4ecu: goto label_2cd4ec;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd4f4u: goto label_2cd4f4;
        case 0x2cd4f8u: goto label_2cd4f8;
        case 0x2cd4fcu: goto label_2cd4fc;
        case 0x2cd500u: goto label_2cd500;
        case 0x2cd504u: goto label_2cd504;
        case 0x2cd508u: goto label_2cd508;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd510u: goto label_2cd510;
        case 0x2cd514u: goto label_2cd514;
        case 0x2cd518u: goto label_2cd518;
        case 0x2cd51cu: goto label_2cd51c;
        case 0x2cd520u: goto label_2cd520;
        case 0x2cd524u: goto label_2cd524;
        case 0x2cd528u: goto label_2cd528;
        case 0x2cd52cu: goto label_2cd52c;
        case 0x2cd530u: goto label_2cd530;
        case 0x2cd534u: goto label_2cd534;
        case 0x2cd538u: goto label_2cd538;
        case 0x2cd53cu: goto label_2cd53c;
        case 0x2cd540u: goto label_2cd540;
        case 0x2cd544u: goto label_2cd544;
        case 0x2cd548u: goto label_2cd548;
        case 0x2cd54cu: goto label_2cd54c;
        case 0x2cd550u: goto label_2cd550;
        case 0x2cd554u: goto label_2cd554;
        case 0x2cd558u: goto label_2cd558;
        case 0x2cd55cu: goto label_2cd55c;
        case 0x2cd560u: goto label_2cd560;
        case 0x2cd564u: goto label_2cd564;
        case 0x2cd568u: goto label_2cd568;
        case 0x2cd56cu: goto label_2cd56c;
        case 0x2cd570u: goto label_2cd570;
        case 0x2cd574u: goto label_2cd574;
        case 0x2cd578u: goto label_2cd578;
        case 0x2cd57cu: goto label_2cd57c;
        case 0x2cd580u: goto label_2cd580;
        case 0x2cd584u: goto label_2cd584;
        case 0x2cd588u: goto label_2cd588;
        case 0x2cd58cu: goto label_2cd58c;
        case 0x2cd590u: goto label_2cd590;
        case 0x2cd594u: goto label_2cd594;
        case 0x2cd598u: goto label_2cd598;
        case 0x2cd59cu: goto label_2cd59c;
        case 0x2cd5a0u: goto label_2cd5a0;
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5a8u: goto label_2cd5a8;
        case 0x2cd5acu: goto label_2cd5ac;
        case 0x2cd5b0u: goto label_2cd5b0;
        case 0x2cd5b4u: goto label_2cd5b4;
        case 0x2cd5b8u: goto label_2cd5b8;
        case 0x2cd5bcu: goto label_2cd5bc;
        case 0x2cd5c0u: goto label_2cd5c0;
        case 0x2cd5c4u: goto label_2cd5c4;
        case 0x2cd5c8u: goto label_2cd5c8;
        case 0x2cd5ccu: goto label_2cd5cc;
        case 0x2cd5d0u: goto label_2cd5d0;
        case 0x2cd5d4u: goto label_2cd5d4;
        case 0x2cd5d8u: goto label_2cd5d8;
        case 0x2cd5dcu: goto label_2cd5dc;
        case 0x2cd5e0u: goto label_2cd5e0;
        case 0x2cd5e4u: goto label_2cd5e4;
        case 0x2cd5e8u: goto label_2cd5e8;
        case 0x2cd5ecu: goto label_2cd5ec;
        case 0x2cd5f0u: goto label_2cd5f0;
        case 0x2cd5f4u: goto label_2cd5f4;
        case 0x2cd5f8u: goto label_2cd5f8;
        case 0x2cd5fcu: goto label_2cd5fc;
        case 0x2cd600u: goto label_2cd600;
        case 0x2cd604u: goto label_2cd604;
        case 0x2cd608u: goto label_2cd608;
        case 0x2cd60cu: goto label_2cd60c;
        case 0x2cd610u: goto label_2cd610;
        case 0x2cd614u: goto label_2cd614;
        case 0x2cd618u: goto label_2cd618;
        case 0x2cd61cu: goto label_2cd61c;
        case 0x2cd620u: goto label_2cd620;
        case 0x2cd624u: goto label_2cd624;
        case 0x2cd628u: goto label_2cd628;
        case 0x2cd62cu: goto label_2cd62c;
        case 0x2cd630u: goto label_2cd630;
        case 0x2cd634u: goto label_2cd634;
        case 0x2cd638u: goto label_2cd638;
        case 0x2cd63cu: goto label_2cd63c;
        case 0x2cd640u: goto label_2cd640;
        case 0x2cd644u: goto label_2cd644;
        case 0x2cd648u: goto label_2cd648;
        case 0x2cd64cu: goto label_2cd64c;
        case 0x2cd650u: goto label_2cd650;
        case 0x2cd654u: goto label_2cd654;
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd65cu: goto label_2cd65c;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd664u: goto label_2cd664;
        case 0x2cd668u: goto label_2cd668;
        case 0x2cd66cu: goto label_2cd66c;
        case 0x2cd670u: goto label_2cd670;
        case 0x2cd674u: goto label_2cd674;
        case 0x2cd678u: goto label_2cd678;
        case 0x2cd67cu: goto label_2cd67c;
        case 0x2cd680u: goto label_2cd680;
        case 0x2cd684u: goto label_2cd684;
        case 0x2cd688u: goto label_2cd688;
        case 0x2cd68cu: goto label_2cd68c;
        case 0x2cd690u: goto label_2cd690;
        case 0x2cd694u: goto label_2cd694;
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd69cu: goto label_2cd69c;
        case 0x2cd6a0u: goto label_2cd6a0;
        case 0x2cd6a4u: goto label_2cd6a4;
        case 0x2cd6a8u: goto label_2cd6a8;
        case 0x2cd6acu: goto label_2cd6ac;
        case 0x2cd6b0u: goto label_2cd6b0;
        case 0x2cd6b4u: goto label_2cd6b4;
        case 0x2cd6b8u: goto label_2cd6b8;
        case 0x2cd6bcu: goto label_2cd6bc;
        case 0x2cd6c0u: goto label_2cd6c0;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6c8u: goto label_2cd6c8;
        case 0x2cd6ccu: goto label_2cd6cc;
        case 0x2cd6d0u: goto label_2cd6d0;
        case 0x2cd6d4u: goto label_2cd6d4;
        case 0x2cd6d8u: goto label_2cd6d8;
        case 0x2cd6dcu: goto label_2cd6dc;
        case 0x2cd6e0u: goto label_2cd6e0;
        case 0x2cd6e4u: goto label_2cd6e4;
        case 0x2cd6e8u: goto label_2cd6e8;
        case 0x2cd6ecu: goto label_2cd6ec;
        case 0x2cd6f0u: goto label_2cd6f0;
        case 0x2cd6f4u: goto label_2cd6f4;
        case 0x2cd6f8u: goto label_2cd6f8;
        case 0x2cd6fcu: goto label_2cd6fc;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd704u: goto label_2cd704;
        case 0x2cd708u: goto label_2cd708;
        case 0x2cd70cu: goto label_2cd70c;
        case 0x2cd710u: goto label_2cd710;
        case 0x2cd714u: goto label_2cd714;
        case 0x2cd718u: goto label_2cd718;
        case 0x2cd71cu: goto label_2cd71c;
        case 0x2cd720u: goto label_2cd720;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd728u: goto label_2cd728;
        case 0x2cd72cu: goto label_2cd72c;
        case 0x2cd730u: goto label_2cd730;
        case 0x2cd734u: goto label_2cd734;
        case 0x2cd738u: goto label_2cd738;
        case 0x2cd73cu: goto label_2cd73c;
        case 0x2cd740u: goto label_2cd740;
        case 0x2cd744u: goto label_2cd744;
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd74cu: goto label_2cd74c;
        case 0x2cd750u: goto label_2cd750;
        case 0x2cd754u: goto label_2cd754;
        case 0x2cd758u: goto label_2cd758;
        case 0x2cd75cu: goto label_2cd75c;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd764u: goto label_2cd764;
        case 0x2cd768u: goto label_2cd768;
        case 0x2cd76cu: goto label_2cd76c;
        case 0x2cd770u: goto label_2cd770;
        case 0x2cd774u: goto label_2cd774;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd77cu: goto label_2cd77c;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd784u: goto label_2cd784;
        case 0x2cd788u: goto label_2cd788;
        case 0x2cd78cu: goto label_2cd78c;
        case 0x2cd790u: goto label_2cd790;
        case 0x2cd794u: goto label_2cd794;
        case 0x2cd798u: goto label_2cd798;
        case 0x2cd79cu: goto label_2cd79c;
        case 0x2cd7a0u: goto label_2cd7a0;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7a8u: goto label_2cd7a8;
        case 0x2cd7acu: goto label_2cd7ac;
        case 0x2cd7b0u: goto label_2cd7b0;
        case 0x2cd7b4u: goto label_2cd7b4;
        case 0x2cd7b8u: goto label_2cd7b8;
        case 0x2cd7bcu: goto label_2cd7bc;
        case 0x2cd7c0u: goto label_2cd7c0;
        case 0x2cd7c4u: goto label_2cd7c4;
        case 0x2cd7c8u: goto label_2cd7c8;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d0u: goto label_2cd7d0;
        case 0x2cd7d4u: goto label_2cd7d4;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd7dcu: goto label_2cd7dc;
        case 0x2cd7e0u: goto label_2cd7e0;
        case 0x2cd7e4u: goto label_2cd7e4;
        case 0x2cd7e8u: goto label_2cd7e8;
        case 0x2cd7ecu: goto label_2cd7ec;
        case 0x2cd7f0u: goto label_2cd7f0;
        case 0x2cd7f4u: goto label_2cd7f4;
        case 0x2cd7f8u: goto label_2cd7f8;
        case 0x2cd7fcu: goto label_2cd7fc;
        case 0x2cd800u: goto label_2cd800;
        case 0x2cd804u: goto label_2cd804;
        case 0x2cd808u: goto label_2cd808;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd810u: goto label_2cd810;
        case 0x2cd814u: goto label_2cd814;
        case 0x2cd818u: goto label_2cd818;
        case 0x2cd81cu: goto label_2cd81c;
        case 0x2cd820u: goto label_2cd820;
        case 0x2cd824u: goto label_2cd824;
        case 0x2cd828u: goto label_2cd828;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd830u: goto label_2cd830;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd838u: goto label_2cd838;
        case 0x2cd83cu: goto label_2cd83c;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd844u: goto label_2cd844;
        case 0x2cd848u: goto label_2cd848;
        case 0x2cd84cu: goto label_2cd84c;
        case 0x2cd850u: goto label_2cd850;
        case 0x2cd854u: goto label_2cd854;
        case 0x2cd858u: goto label_2cd858;
        case 0x2cd85cu: goto label_2cd85c;
        case 0x2cd860u: goto label_2cd860;
        case 0x2cd864u: goto label_2cd864;
        case 0x2cd868u: goto label_2cd868;
        case 0x2cd86cu: goto label_2cd86c;
        case 0x2cd870u: goto label_2cd870;
        case 0x2cd874u: goto label_2cd874;
        case 0x2cd878u: goto label_2cd878;
        case 0x2cd87cu: goto label_2cd87c;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd884u: goto label_2cd884;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd88cu: goto label_2cd88c;
        case 0x2cd890u: goto label_2cd890;
        case 0x2cd894u: goto label_2cd894;
        case 0x2cd898u: goto label_2cd898;
        default: break;
    }

    ctx->pc = 0x2cd4a0u;

label_2cd4a0:
    // 0x2cd4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cd4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cd4a4:
    // 0x2cd4a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cd4a8:
    // 0x2cd4a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cd4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cd4ac:
    // 0x2cd4ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cd4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cd4b0:
    // 0x2cd4b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cd4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cd4b4:
    // 0x2cd4b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cd4b8:
    // 0x2cd4b8: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x2cd4b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_2cd4bc:
    // 0x2cd4bc: 0x108300be  beq         $a0, $v1, . + 4 + (0xBE << 2)
label_2cd4c0:
    if (ctx->pc == 0x2CD4C0u) {
        ctx->pc = 0x2CD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4BCu;
        // 0x2cd4c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD4C4u;
        goto label_2cd4c4;
    }
    ctx->pc = 0x2CD4BCu;
    {
        const bool branch_taken_0x2cd4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4BCu;
        // 0x2cd4c0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4bc) {
            ctx->pc = 0x2CD7B8u;
            goto label_2cd7b8;
        }
    }
    ctx->pc = 0x2CD4C4u;
label_2cd4c4:
    // 0x2cd4c4: 0x10830064  beq         $a0, $v1, . + 4 + (0x64 << 2)
label_2cd4c8:
    if (ctx->pc == 0x2CD4C8u) {
        ctx->pc = 0x2CD4CCu;
        goto label_2cd4cc;
    }
    ctx->pc = 0x2CD4C4u;
    {
        const bool branch_taken_0x2cd4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd4c4) {
            ctx->pc = 0x2CD658u;
            goto label_2cd658;
        }
    }
    ctx->pc = 0x2CD4CCu;
label_2cd4cc:
    // 0x2cd4cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd4d0:
    // 0x2cd4d0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_2cd4d4:
    if (ctx->pc == 0x2CD4D4u) {
        ctx->pc = 0x2CD4D8u;
        goto label_2cd4d8;
    }
    ctx->pc = 0x2CD4D0u;
    {
        const bool branch_taken_0x2cd4d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cd4d0) {
            ctx->pc = 0x2CD4F0u;
            goto label_2cd4f0;
        }
    }
    ctx->pc = 0x2CD4D8u;
label_2cd4d8:
    // 0x2cd4d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cd4dc:
    if (ctx->pc == 0x2CD4DCu) {
        ctx->pc = 0x2CD4E0u;
        goto label_2cd4e0;
    }
    ctx->pc = 0x2CD4D8u;
    {
        const bool branch_taken_0x2cd4d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4d8) {
            ctx->pc = 0x2CD4E8u;
            goto label_2cd4e8;
        }
    }
    ctx->pc = 0x2CD4E0u;
label_2cd4e0:
    // 0x2cd4e0: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2cd4e4:
    if (ctx->pc == 0x2CD4E4u) {
        ctx->pc = 0x2CD4E8u;
        goto label_2cd4e8;
    }
    ctx->pc = 0x2CD4E0u;
    {
        const bool branch_taken_0x2cd4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4e0) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD4E8u;
label_2cd4e8:
    // 0x2cd4e8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2cd4ec:
    if (ctx->pc == 0x2CD4ECu) {
        ctx->pc = 0x2CD4F0u;
        goto label_2cd4f0;
    }
    ctx->pc = 0x2CD4E8u;
    {
        const bool branch_taken_0x2cd4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd4e8) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD4F0u;
label_2cd4f0:
    // 0x2cd4f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cd4f4:
    // 0x2cd4f4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2cd4f8:
    // 0x2cd4f8: 0xc07cce0  jal         func_1F3380
label_2cd4fc:
    if (ctx->pc == 0x2CD4FCu) {
        ctx->pc = 0x2CD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4F8u;
        // 0x2cd4fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD500u;
        goto label_2cd500;
    }
    ctx->pc = 0x2CD4F8u;
    SET_GPR_U32(ctx, 31, 0x2CD500u);
    ctx->pc = 0x2CD4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD4F8u;
    // 0x2cd4fc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2CD4F8u, 0x2CD500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD500u;
label_2cd500:
    // 0x2cd500: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2cd504:
    if (ctx->pc == 0x2CD504u) {
        ctx->pc = 0x2CD508u;
        goto label_2cd508;
    }
    ctx->pc = 0x2CD500u;
    {
        const bool branch_taken_0x2cd500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd500) {
            ctx->pc = 0x2CD520u;
            goto label_2cd520;
        }
    }
    ctx->pc = 0x2CD508u;
label_2cd508:
    // 0x2cd508: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
label_2cd50c:
    if (ctx->pc == 0x2CD50Cu) {
        ctx->pc = 0x2CD510u;
        goto label_2cd510;
    }
    ctx->pc = 0x2CD508u;
    {
        const bool branch_taken_0x2cd508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd508) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD510u;
label_2cd510:
    // 0x2cd510: 0x8c4329c0  lw          $v1, 0x29C0($v0)
    ctx->pc = 0x2cd510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
label_2cd514:
    // 0x2cd514: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2cd514u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2cd518:
    // 0x2cd518: 0x146000db  bnez        $v1, . + 4 + (0xDB << 2)
label_2cd51c:
    if (ctx->pc == 0x2CD51Cu) {
        ctx->pc = 0x2CD520u;
        goto label_2cd520;
    }
    ctx->pc = 0x2CD518u;
    {
        const bool branch_taken_0x2cd518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd518) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD520u;
label_2cd520:
    // 0x2cd520: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2cd520u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_2cd524:
    // 0x2cd524: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2cd524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_2cd528:
    // 0x2cd528: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2cd528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
label_2cd52c:
    // 0x2cd52c: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2cd52cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_2cd530:
    // 0x2cd530: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_2cd534:
    if (ctx->pc == 0x2CD534u) {
        ctx->pc = 0x2CD538u;
        goto label_2cd538;
    }
    ctx->pc = 0x2CD530u;
    {
        const bool branch_taken_0x2cd530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd530) {
            ctx->pc = 0x2CD550u;
            goto label_2cd550;
        }
    }
    ctx->pc = 0x2CD538u;
label_2cd538:
    // 0x2cd538: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2cd538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2cd53c:
    // 0x2cd53c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x2cd53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_2cd540:
    // 0x2cd540: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2cd544:
    if (ctx->pc == 0x2CD544u) {
        ctx->pc = 0x2CD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD540u;
        // 0x2cd544: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD548u;
        goto label_2cd548;
    }
    ctx->pc = 0x2CD540u;
    {
        const bool branch_taken_0x2cd540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD540u;
        // 0x2cd544: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd540) {
            ctx->pc = 0x2CD550u;
            goto label_2cd550;
        }
    }
    ctx->pc = 0x2CD548u;
label_2cd548:
    // 0x2cd548: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2cd548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_2cd54c:
    // 0x2cd54c: 0x0  nop
    ctx->pc = 0x2cd54cu;
    // NOP
label_2cd550:
    // 0x2cd550: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x2cd550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
label_2cd554:
    // 0x2cd554: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x2cd554u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 27332)));
label_2cd558:
    // 0x2cd558: 0x2403028c  addiu       $v1, $zero, 0x28C
    ctx->pc = 0x2cd558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 652));
label_2cd55c:
    // 0x2cd55c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_2cd560:
    if (ctx->pc == 0x2CD560u) {
        ctx->pc = 0x2CD564u;
        goto label_2cd564;
    }
    ctx->pc = 0x2CD55Cu;
    {
        const bool branch_taken_0x2cd55c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd55c) {
            ctx->pc = 0x2CD580u;
            goto label_2cd580;
        }
    }
    ctx->pc = 0x2CD564u;
label_2cd564:
    // 0x2cd564: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2cd564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2cd568:
    // 0x2cd568: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x2cd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_2cd56c:
    // 0x2cd56c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2cd570:
    if (ctx->pc == 0x2CD570u) {
        ctx->pc = 0x2CD574u;
        goto label_2cd574;
    }
    ctx->pc = 0x2CD56Cu;
    {
        const bool branch_taken_0x2cd56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cd56c) {
            ctx->pc = 0x2CD580u;
            goto label_2cd580;
        }
    }
    ctx->pc = 0x2CD574u;
label_2cd574:
    // 0x2cd574: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2cd574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2cd578:
    // 0x2cd578: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2cd578u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_2cd57c:
    // 0x2cd57c: 0x0  nop
    ctx->pc = 0x2cd57cu;
    // NOP
label_2cd580:
    // 0x2cd580: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x2cd580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2cd584:
    // 0x2cd584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2cd588:
    if (ctx->pc == 0x2CD588u) {
        ctx->pc = 0x2CD58Cu;
        goto label_2cd58c;
    }
    ctx->pc = 0x2CD584u;
    {
        const bool branch_taken_0x2cd584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd584) {
            ctx->pc = 0x2CD5A0u;
            goto label_2cd5a0;
        }
    }
    ctx->pc = 0x2CD58Cu;
label_2cd58c:
    // 0x2cd58c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cd58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cd590:
    // 0x2cd590: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2cd590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2cd594:
    // 0x2cd594: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2cd594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
label_2cd598:
    // 0x2cd598: 0xc0ce640  jal         func_339900
label_2cd59c:
    if (ctx->pc == 0x2CD59Cu) {
        ctx->pc = 0x2CD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD598u;
        // 0x2cd59c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5A0u;
        goto label_2cd5a0;
    }
    ctx->pc = 0x2CD598u;
    SET_GPR_U32(ctx, 31, 0x2CD5A0u);
    ctx->pc = 0x2CD59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD598u;
    // 0x2cd59c: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339900u, 0x2CD598u, 0x2CD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD5A0u;
label_2cd5a0:
    // 0x2cd5a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2cd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2cd5a4:
    // 0x2cd5a4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cd5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cd5a8:
    // 0x2cd5a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cd5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cd5ac:
    // 0x2cd5ac: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2cd5b0:
    // 0x2cd5b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd5b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cd5b4:
    // 0x2cd5b4: 0x0  nop
    ctx->pc = 0x2cd5b4u;
    // NOP
label_2cd5b8:
    // 0x2cd5b8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cd5b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2cd5bc:
    // 0x2cd5bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd5bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cd5c0:
    // 0x2cd5c0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2cd5c4:
    if (ctx->pc == 0x2CD5C4u) {
        ctx->pc = 0x2CD5C8u;
        goto label_2cd5c8;
    }
    ctx->pc = 0x2CD5C0u;
    {
        const bool branch_taken_0x2cd5c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd5c0) {
            ctx->pc = 0x2CD5D8u;
            goto label_2cd5d8;
        }
    }
    ctx->pc = 0x2CD5C8u;
label_2cd5c8:
    // 0x2cd5c8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd5c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cd5cc:
    // 0x2cd5cc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cd5ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2cd5d0:
    // 0x2cd5d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2cd5d4:
    if (ctx->pc == 0x2CD5D4u) {
        ctx->pc = 0x2CD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5D0u;
        // 0x2cd5d4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5D8u;
        goto label_2cd5d8;
    }
    ctx->pc = 0x2CD5D0u;
    {
        const bool branch_taken_0x2cd5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5D0u;
        // 0x2cd5d4: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd5d0) {
            ctx->pc = 0x2CD5F4u;
            goto label_2cd5f4;
        }
    }
    ctx->pc = 0x2CD5D8u;
label_2cd5d8:
    // 0x2cd5d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd5d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cd5dc:
    // 0x2cd5dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cd5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2cd5e0:
    // 0x2cd5e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd5e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cd5e4:
    // 0x2cd5e4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cd5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2cd5e8:
    // 0x2cd5e8: 0x0  nop
    ctx->pc = 0x2cd5e8u;
    // NOP
label_2cd5ec:
    // 0x2cd5ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2cd5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2cd5f0:
    // 0x2cd5f0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2cd5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2cd5f4:
    // 0x2cd5f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2cd5f8:
    // 0x2cd5f8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2cd5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_2cd5fc:
    // 0x2cd5fc: 0xc0b2bc0  jal         func_2CAF00
label_2cd600:
    if (ctx->pc == 0x2CD600u) {
        ctx->pc = 0x2CD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5FCu;
        // 0x2cd600: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD604u;
        goto label_2cd604;
    }
    ctx->pc = 0x2CD5FCu;
    SET_GPR_U32(ctx, 31, 0x2CD604u);
    ctx->pc = 0x2CD600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD5FCu;
    // 0x2cd600: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAF00u, 0x2CD5FCu, 0x2CD604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD604u;
label_2cd604:
    // 0x2cd604: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2cd604u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd608:
    // 0x2cd608: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_2cd60c:
    if (ctx->pc == 0x2CD60Cu) {
        ctx->pc = 0x2CD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD608u;
        // 0x2cd60c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD610u;
        goto label_2cd610;
    }
    ctx->pc = 0x2CD608u;
    {
        const bool branch_taken_0x2cd608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD608u;
        // 0x2cd60c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd608) {
            ctx->pc = 0x2CD638u;
            goto label_2cd638;
        }
    }
    ctx->pc = 0x2CD610u;
label_2cd610:
    // 0x2cd610: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2cd614:
    if (ctx->pc == 0x2CD614u) {
        ctx->pc = 0x2CD618u;
        goto label_2cd618;
    }
    ctx->pc = 0x2CD610u;
    {
        const bool branch_taken_0x2cd610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cd610) {
            ctx->pc = 0x2CD620u;
            goto label_2cd620;
        }
    }
    ctx->pc = 0x2CD618u;
label_2cd618:
    // 0x2cd618: 0xa0402ab0  sb          $zero, 0x2AB0($v0)
    ctx->pc = 0x2cd618u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10928), (uint8_t)GPR_U32(ctx, 0));
label_2cd61c:
    // 0x2cd61c: 0x0  nop
    ctx->pc = 0x2cd61cu;
    // NOP
label_2cd620:
    // 0x2cd620: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x2cd620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2cd624:
    // 0x2cd624: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2cd624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2cd628:
    // 0x2cd628: 0x0  nop
    ctx->pc = 0x2cd628u;
    // NOP
label_2cd62c:
    // 0x2cd62c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_2cd630:
    if (ctx->pc == 0x2CD630u) {
        ctx->pc = 0x2CD634u;
        goto label_2cd634;
    }
    ctx->pc = 0x2CD62Cu;
    {
        const bool branch_taken_0x2cd62c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd62c) {
            ctx->pc = 0x2CD610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd610;
        }
    }
    ctx->pc = 0x2CD634u;
label_2cd634:
    // 0x2cd634: 0x0  nop
    ctx->pc = 0x2cd634u;
    // NOP
label_2cd638:
    // 0x2cd638: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2cd638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_2cd63c:
    // 0x2cd63c: 0x2484b7f0  addiu       $a0, $a0, -0x4810
    ctx->pc = 0x2cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
label_2cd640:
    // 0x2cd640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd644:
    // 0x2cd644: 0xc0bafdc  jal         func_2EBF70
label_2cd648:
    if (ctx->pc == 0x2CD648u) {
        ctx->pc = 0x2CD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD644u;
        // 0x2cd648: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD64Cu;
        goto label_2cd64c;
    }
    ctx->pc = 0x2CD644u;
    SET_GPR_U32(ctx, 31, 0x2CD64Cu);
    ctx->pc = 0x2CD648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD644u;
    // 0x2cd648: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF70u, 0x2CD644u, 0x2CD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD64Cu;
label_2cd64c:
    // 0x2cd64c: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2cd650:
    if (ctx->pc == 0x2CD650u) {
        ctx->pc = 0x2CD654u;
        goto label_2cd654;
    }
    ctx->pc = 0x2CD64Cu;
    {
        const bool branch_taken_0x2cd64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd64c) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD654u;
label_2cd654:
    // 0x2cd654: 0x0  nop
    ctx->pc = 0x2cd654u;
    // NOP
label_2cd658:
    // 0x2cd658: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cd658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cd65c:
    // 0x2cd65c: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2cd65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
label_2cd660:
    // 0x2cd660: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x2cd660u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959104), (uint8_t)GPR_U32(ctx, 2));
label_2cd664:
    // 0x2cd664: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2cd664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd668:
    // 0x2cd668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2cd66c:
    if (ctx->pc == 0x2CD66Cu) {
        ctx->pc = 0x2CD670u;
        goto label_2cd670;
    }
    ctx->pc = 0x2CD668u;
    {
        const bool branch_taken_0x2cd668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd668) {
            ctx->pc = 0x2CD678u;
            goto label_2cd678;
        }
    }
    ctx->pc = 0x2CD670u;
label_2cd670:
    // 0x2cd670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cd670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2cd674:
    // 0x2cd674: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2cd674u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_2cd678:
    // 0x2cd678: 0x3c048f30  lui         $a0, 0x8F30
    ctx->pc = 0x2cd678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36656 << 16));
label_2cd67c:
    // 0x2cd67c: 0xc0b2d24  jal         func_2CB490
label_2cd680:
    if (ctx->pc == 0x2CD680u) {
        ctx->pc = 0x2CD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD67Cu;
        // 0x2cd680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD684u;
        goto label_2cd684;
    }
    ctx->pc = 0x2CD67Cu;
    SET_GPR_U32(ctx, 31, 0x2CD684u);
    ctx->pc = 0x2CD680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD67Cu;
    // 0x2cd680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB490u, 0x2CD67Cu, 0x2CD684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD684u;
label_2cd684:
    // 0x2cd684: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2cd688:
    // 0x2cd688: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2cd688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2cd68c:
    // 0x2cd68c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2cd68cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_2cd690:
    // 0x2cd690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cd690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2cd694:
    // 0x2cd694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2cd698:
    // 0x2cd698: 0xc098b0c  jal         func_262C30
label_2cd69c:
    if (ctx->pc == 0x2CD69Cu) {
        ctx->pc = 0x2CD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD698u;
        // 0x2cd69c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6A0u;
        goto label_2cd6a0;
    }
    ctx->pc = 0x2CD698u;
    SET_GPR_U32(ctx, 31, 0x2CD6A0u);
    ctx->pc = 0x2CD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD698u;
    // 0x2cd69c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262C30u, 0x2CD698u, 0x2CD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6A0u;
label_2cd6a0:
    // 0x2cd6a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2cd6a4:
    // 0x2cd6a4: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
label_2cd6a8:
    // 0x2cd6a8: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x2cd6a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
label_2cd6ac:
    // 0x2cd6ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cd6b0:
    // 0x2cd6b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cd6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cd6b4:
    // 0x2cd6b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cd6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cd6b8:
    // 0x2cd6b8: 0x8c6329c0  lw          $v1, 0x29C0($v1)
    ctx->pc = 0x2cd6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10688)));
label_2cd6bc:
    // 0x2cd6bc: 0x90640004  lbu         $a0, 0x4($v1)
    ctx->pc = 0x2cd6bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2cd6c0:
    // 0x2cd6c0: 0x28810064  slti        $at, $a0, 0x64
    ctx->pc = 0x2cd6c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2cd6c4:
    // 0x2cd6c4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_2cd6c8:
    if (ctx->pc == 0x2CD6C8u) {
        ctx->pc = 0x2CD6CCu;
        goto label_2cd6cc;
    }
    ctx->pc = 0x2CD6C4u;
    {
        const bool branch_taken_0x2cd6c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6c4) {
            ctx->pc = 0x2CD778u;
            goto label_2cd778;
        }
    }
    ctx->pc = 0x2CD6CCu;
label_2cd6cc:
    // 0x2cd6cc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2cd6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2cd6d0:
    // 0x2cd6d0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2cd6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_2cd6d4:
    // 0x2cd6d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cd6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2cd6d8:
    // 0x2cd6d8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2cd6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_2cd6dc:
    // 0x2cd6dc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x2cd6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2cd6e0:
    // 0x2cd6e0: 0x24630d04  addiu       $v1, $v1, 0xD04
    ctx->pc = 0x2cd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3332));
label_2cd6e4:
    // 0x2cd6e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cd6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd6e8:
    // 0x2cd6e8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cd6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2cd6ec:
    // 0x2cd6ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cd6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2cd6f0:
    // 0x2cd6f0: 0xc096974  jal         func_25A5D0
label_2cd6f4:
    if (ctx->pc == 0x2CD6F4u) {
        ctx->pc = 0x2CD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6F0u;
        // 0x2cd6f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6F8u;
        goto label_2cd6f8;
    }
    ctx->pc = 0x2CD6F0u;
    SET_GPR_U32(ctx, 31, 0x2CD6F8u);
    ctx->pc = 0x2CD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD6F0u;
    // 0x2cd6f4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2CD6F0u, 0x2CD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD6F8u;
label_2cd6f8:
    // 0x2cd6f8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_2cd6fc:
    if (ctx->pc == 0x2CD6FCu) {
        ctx->pc = 0x2CD700u;
        goto label_2cd700;
    }
    ctx->pc = 0x2CD6F8u;
    {
        const bool branch_taken_0x2cd6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6f8) {
            ctx->pc = 0x2CD778u;
            goto label_2cd778;
        }
    }
    ctx->pc = 0x2CD700u;
label_2cd700:
    // 0x2cd700: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2cd700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2cd704:
    // 0x2cd704: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x2cd704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2cd708:
    // 0x2cd708: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2cd708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2cd70c:
    // 0x2cd70c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2cd70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_2cd710:
    // 0x2cd710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2cd714:
    // 0x2cd714: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2cd714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2cd718:
    // 0x2cd718: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x2cd718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_2cd71c:
    // 0x2cd71c: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x2cd71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cd720:
    // 0x2cd720: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2cd720u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2cd724:
    // 0x2cd724: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2cd724u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cd728:
    // 0x2cd728: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2cd72c:
    if (ctx->pc == 0x2CD72Cu) {
        ctx->pc = 0x2CD730u;
        goto label_2cd730;
    }
    ctx->pc = 0x2CD728u;
    {
        const bool branch_taken_0x2cd728 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd728) {
            ctx->pc = 0x2CD740u;
            goto label_2cd740;
        }
    }
    ctx->pc = 0x2CD730u;
label_2cd730:
    // 0x2cd730: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd730u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cd734:
    // 0x2cd734: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2cd734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2cd738:
    // 0x2cd738: 0x10000008  b           . + 4 + (0x8 << 2)
label_2cd73c:
    if (ctx->pc == 0x2CD73Cu) {
        ctx->pc = 0x2CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD738u;
        // 0x2cd73c: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD740u;
        goto label_2cd740;
    }
    ctx->pc = 0x2CD738u;
    {
        const bool branch_taken_0x2cd738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD738u;
        // 0x2cd73c: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd738) {
            ctx->pc = 0x2CD75Cu;
            goto label_2cd75c;
        }
    }
    ctx->pc = 0x2CD740u;
label_2cd740:
    // 0x2cd740: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cd740u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2cd744:
    // 0x2cd744: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2cd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2cd748:
    // 0x2cd748: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cd748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2cd74c:
    // 0x2cd74c: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x2cd74cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2cd750:
    // 0x2cd750: 0x0  nop
    ctx->pc = 0x2cd750u;
    // NOP
label_2cd754:
    // 0x2cd754: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2cd754u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2cd758:
    // 0x2cd758: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2cd758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_2cd75c:
    // 0x2cd75c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2cd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2cd760:
    // 0x2cd760: 0xc096974  jal         func_25A5D0
label_2cd764:
    if (ctx->pc == 0x2CD764u) {
        ctx->pc = 0x2CD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD760u;
        // 0x2cd764: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD768u;
        goto label_2cd768;
    }
    ctx->pc = 0x2CD760u;
    SET_GPR_U32(ctx, 31, 0x2CD768u);
    ctx->pc = 0x2CD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD760u;
    // 0x2cd764: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5D0u, 0x2CD760u, 0x2CD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD768u;
label_2cd768:
    // 0x2cd768: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x2cd768u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2cd76c:
    // 0x2cd76c: 0x10000046  b           . + 4 + (0x46 << 2)
label_2cd770:
    if (ctx->pc == 0x2CD770u) {
        ctx->pc = 0x2CD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD76Cu;
        // 0x2cd770: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD774u;
        goto label_2cd774;
    }
    ctx->pc = 0x2CD76Cu;
    {
        const bool branch_taken_0x2cd76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD76Cu;
        // 0x2cd770: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd76c) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD774u;
label_2cd774:
    // 0x2cd774: 0x0  nop
    ctx->pc = 0x2cd774u;
    // NOP
label_2cd778:
    // 0x2cd778: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x2cd778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_2cd77c:
    // 0x2cd77c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2cd780:
    if (ctx->pc == 0x2CD780u) {
        ctx->pc = 0x2CD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD77Cu;
        // 0x2cd780: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD784u;
        goto label_2cd784;
    }
    ctx->pc = 0x2CD77Cu;
    {
        const bool branch_taken_0x2cd77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD77Cu;
        // 0x2cd780: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd77c) {
            ctx->pc = 0x2CD7A0u;
            goto label_2cd7a0;
        }
    }
    ctx->pc = 0x2CD784u;
label_2cd784:
    // 0x2cd784: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2cd784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
label_2cd788:
    // 0x2cd788: 0x902540a4  lbu         $a1, 0x40A4($at)
    ctx->pc = 0x2cd788u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16548)));
label_2cd78c:
    // 0x2cd78c: 0xc0ce31c  jal         func_338C70
label_2cd790:
    if (ctx->pc == 0x2CD790u) {
        ctx->pc = 0x2CD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD78Cu;
        // 0x2cd790: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD794u;
        goto label_2cd794;
    }
    ctx->pc = 0x2CD78Cu;
    SET_GPR_U32(ctx, 31, 0x2CD794u);
    ctx->pc = 0x2CD790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD78Cu;
    // 0x2cd790: 0x24843fb0  addiu       $a0, $a0, 0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338C70u, 0x2CD78Cu, 0x2CD794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD794u;
label_2cd794:
    // 0x2cd794: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_2cd798:
    if (ctx->pc == 0x2CD798u) {
        ctx->pc = 0x2CD79Cu;
        goto label_2cd79c;
    }
    ctx->pc = 0x2CD794u;
    {
        const bool branch_taken_0x2cd794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd794) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD79Cu;
label_2cd79c:
    // 0x2cd79c: 0x0  nop
    ctx->pc = 0x2cd79cu;
    // NOP
label_2cd7a0:
    // 0x2cd7a0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2cd7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2cd7a4:
    // 0x2cd7a4: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
label_2cd7a8:
    if (ctx->pc == 0x2CD7A8u) {
        ctx->pc = 0x2CD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7A4u;
        // 0x2cd7a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7ACu;
        goto label_2cd7ac;
    }
    ctx->pc = 0x2CD7A4u;
    {
        const bool branch_taken_0x2cd7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7A4u;
        // 0x2cd7a8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7a4) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD7ACu;
label_2cd7ac:
    // 0x2cd7ac: 0x10000036  b           . + 4 + (0x36 << 2)
label_2cd7b0:
    if (ctx->pc == 0x2CD7B0u) {
        ctx->pc = 0x2CD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7ACu;
        // 0x2cd7b0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7B4u;
        goto label_2cd7b4;
    }
    ctx->pc = 0x2CD7ACu;
    {
        const bool branch_taken_0x2cd7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7ACu;
        // 0x2cd7b0: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7ac) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD7B4u;
label_2cd7b4:
    // 0x2cd7b4: 0x0  nop
    ctx->pc = 0x2cd7b4u;
    // NOP
label_2cd7b8:
    // 0x2cd7b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2cd7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cd7bc:
    // 0x2cd7bc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2cd7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_2cd7c0:
    // 0x2cd7c0: 0xc07cce0  jal         func_1F3380
label_2cd7c4:
    if (ctx->pc == 0x2CD7C4u) {
        ctx->pc = 0x2CD7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7C0u;
        // 0x2cd7c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7C8u;
        goto label_2cd7c8;
    }
    ctx->pc = 0x2CD7C0u;
    SET_GPR_U32(ctx, 31, 0x2CD7C8u);
    ctx->pc = 0x2CD7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7C0u;
    // 0x2cd7c4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2CD7C0u, 0x2CD7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7C8u;
label_2cd7c8:
    // 0x2cd7c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2cd7cc:
    if (ctx->pc == 0x2CD7CCu) {
        ctx->pc = 0x2CD7D0u;
        goto label_2cd7d0;
    }
    ctx->pc = 0x2CD7C8u;
    {
        const bool branch_taken_0x2cd7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7c8) {
            ctx->pc = 0x2CD800u;
            goto label_2cd800;
        }
    }
    ctx->pc = 0x2CD7D0u;
label_2cd7d0:
    // 0x2cd7d0: 0x944429de  lhu         $a0, 0x29DE($v0)
    ctx->pc = 0x2cd7d0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10718)));
label_2cd7d4:
    // 0x2cd7d4: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2cd7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2cd7d8:
    // 0x2cd7d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2cd7dc:
    if (ctx->pc == 0x2CD7DCu) {
        ctx->pc = 0x2CD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7D8u;
        // 0x2cd7dc: 0x3083fffb  andi        $v1, $a0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD7E0u;
        goto label_2cd7e0;
    }
    ctx->pc = 0x2CD7D8u;
    {
        const bool branch_taken_0x2cd7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7D8u;
        // 0x2cd7dc: 0x3083fffb  andi        $v1, $a0, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd7d8) {
            ctx->pc = 0x2CD7E8u;
            goto label_2cd7e8;
        }
    }
    ctx->pc = 0x2CD7E0u;
label_2cd7e0:
    // 0x2cd7e0: 0xa44329de  sh          $v1, 0x29DE($v0)
    ctx->pc = 0x2cd7e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 10718), (uint16_t)GPR_U32(ctx, 3));
label_2cd7e4:
    // 0x2cd7e4: 0x0  nop
    ctx->pc = 0x2cd7e4u;
    // NOP
label_2cd7e8:
    // 0x2cd7e8: 0x8c4406ac  lw          $a0, 0x6AC($v0)
    ctx->pc = 0x2cd7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
label_2cd7ec:
    // 0x2cd7ec: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2cd7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2cd7f0:
    // 0x2cd7f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2cd7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2cd7f4:
    // 0x2cd7f4: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_2cd7f8:
    if (ctx->pc == 0x2CD7F8u) {
        ctx->pc = 0x2CD7FCu;
        goto label_2cd7fc;
    }
    ctx->pc = 0x2CD7F4u;
    {
        const bool branch_taken_0x2cd7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7f4) {
            ctx->pc = 0x2CD888u;
            goto label_2cd888;
        }
    }
    ctx->pc = 0x2CD7FCu;
label_2cd7fc:
    // 0x2cd7fc: 0x0  nop
    ctx->pc = 0x2cd7fcu;
    // NOP
label_2cd800:
    // 0x2cd800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cd800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2cd804:
    // 0x2cd804: 0x3c01008e  lui         $at, 0x8E
    ctx->pc = 0x2cd804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)142 << 16));
label_2cd808:
    // 0x2cd808: 0xa022e000  sb          $v0, -0x2000($at)
    ctx->pc = 0x2cd808u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294959104), (uint8_t)GPR_U32(ctx, 2));
label_2cd80c:
    // 0x2cd80c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cd80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cd810:
    // 0x2cd810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2cd814:
    if (ctx->pc == 0x2CD814u) {
        ctx->pc = 0x2CD818u;
        goto label_2cd818;
    }
    ctx->pc = 0x2CD810u;
    {
        const bool branch_taken_0x2cd810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd810) {
            ctx->pc = 0x2CD828u;
            goto label_2cd828;
        }
    }
    ctx->pc = 0x2CD818u;
label_2cd818:
    // 0x2cd818: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2cd818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cd81c:
    // 0x2cd81c: 0x40f809  jalr        $v0
label_2cd820:
    if (ctx->pc == 0x2CD820u) {
        ctx->pc = 0x2CD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD81Cu;
        // 0x2cd820: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD824u;
        goto label_2cd824;
    }
    ctx->pc = 0x2CD81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CD824u);
        ctx->pc = 0x2CD820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD81Cu;
        // 0x2cd820: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD81Cu, 0x2CD824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CD824u;
label_2cd824:
    // 0x2cd824: 0x0  nop
    ctx->pc = 0x2cd824u;
    // NOP
label_2cd828:
    // 0x2cd828: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2cd828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2cd82c:
    // 0x2cd82c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cd82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2cd830:
    // 0x2cd830: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x2cd830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_2cd834:
    // 0x2cd834: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x2cd834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
label_2cd838:
    // 0x2cd838: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cd838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2cd83c:
    // 0x2cd83c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2cd840:
    // 0x2cd840: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2cd840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
label_2cd844:
    // 0x2cd844: 0xc0ed20c  jal         func_3B4830
label_2cd848:
    if (ctx->pc == 0x2CD848u) {
        ctx->pc = 0x2CD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD844u;
        // 0x2cd848: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD84Cu;
        goto label_2cd84c;
    }
    ctx->pc = 0x2CD844u;
    SET_GPR_U32(ctx, 31, 0x2CD84Cu);
    ctx->pc = 0x2CD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD844u;
    // 0x2cd848: 0xac22cebc  sw          $v0, -0x3144($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954684), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4830u, 0x2CD844u, 0x2CD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD84Cu;
label_2cd84c:
    // 0x2cd84c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2cd850:
    // 0x2cd850: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x2cd850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
label_2cd854:
    // 0x2cd854: 0xac206ce4  sw          $zero, 0x6CE4($at)
    ctx->pc = 0x2cd854u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27876), GPR_U32(ctx, 0));
label_2cd858:
    // 0x2cd858: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x2cd858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_2cd85c:
    // 0x2cd85c: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2cd860:
    // 0x2cd860: 0x2484b7f0  addiu       $a0, $a0, -0x4810
    ctx->pc = 0x2cd860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948848));
label_2cd864:
    // 0x2cd864: 0x8c236ccc  lw          $v1, 0x6CCC($at)
    ctx->pc = 0x2cd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27852)));
label_2cd868:
    // 0x2cd868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cd868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cd86c:
    // 0x2cd86c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2cd86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2cd870:
    // 0x2cd870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2cd870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2cd874:
    // 0x2cd874: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2cd874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
label_2cd878:
    // 0x2cd878: 0xc0bafdc  jal         func_2EBF70
label_2cd87c:
    if (ctx->pc == 0x2CD87Cu) {
        ctx->pc = 0x2CD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD878u;
        // 0x2cd87c: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD880u;
        goto label_2cd880;
    }
    ctx->pc = 0x2CD878u;
    SET_GPR_U32(ctx, 31, 0x2CD880u);
    ctx->pc = 0x2CD87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD878u;
    // 0x2cd87c: 0xac226ccc  sw          $v0, 0x6CCC($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 27852), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF70u, 0x2CD878u, 0x2CD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD880u;
label_2cd880:
    // 0x2cd880: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2cd880u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_2cd884:
    // 0x2cd884: 0x0  nop
    ctx->pc = 0x2cd884u;
    // NOP
label_2cd888:
    // 0x2cd888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cd888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cd88c:
    // 0x2cd88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cd88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd890:
    // 0x2cd890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cd890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cd894:
    // 0x2cd894: 0x3e00008  jr          $ra
label_2cd898:
    if (ctx->pc == 0x2CD898u) {
        ctx->pc = 0x2CD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD894u;
        // 0x2cd898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD89Cu;
        goto label_fallthrough_0x2cd894;
    }
    ctx->pc = 0x2CD894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD894u;
        // 0x2cd898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cd894:
    ctx->pc = 0x2CD89Cu;
}
