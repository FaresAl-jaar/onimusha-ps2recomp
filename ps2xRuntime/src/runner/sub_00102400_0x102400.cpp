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

// Function: sub_00102400
// Address: 0x102400 - 0x1026b8
void sub_00102400_0x102400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102400_0x102400");
#endif

    switch (ctx->pc) {
        case 0x102510u: goto label_102510;
        case 0x102590u: goto label_102590;
        case 0x102608u: goto label_102608;
        case 0x102688u: goto label_102688;
        default: break;
    }

    ctx->pc = 0x102400u;

    // 0x102400: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x102404: 0x9c860224  lwu         $a2, 0x224($a0)
    ctx->pc = 0x102404u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x102408: 0x8c880228  lw          $t0, 0x228($a0)
    ctx->pc = 0x102408u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x10240c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x10240cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102410: 0x304a0040  andi        $t2, $v0, 0x40
    ctx->pc = 0x102410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x102414: 0x11400016  beqz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x102414u;
    {
        const bool branch_taken_0x102414 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x102418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102414u;
        // 0x102418: 0x9c890220  lwu         $t1, 0x220($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102414) {
            ctx->pc = 0x102470u;
            goto label_102470;
        }
    }
    ctx->pc = 0x10241Cu;
    // 0x10241c: 0x9c850234  lwu         $a1, 0x234($a0)
    ctx->pc = 0x10241cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x102420: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x102420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x102424: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x102424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x102428: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x102428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x10242c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x10242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x102430: 0x70023389  pcpyld      $a2, $zero, $v0
    ctx->pc = 0x102430u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x102434: 0x81138  dsll        $v0, $t0, 4
    ctx->pc = 0x102434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 4);
    // 0x102438: 0x558b8  dsll        $t3, $a1, 2
    ctx->pc = 0x102438u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << 2);
    // 0x10243c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x10243cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102440: 0x6563000f  daddiu      $v1, $t3, 0xF
    ctx->pc = 0x102440u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)15);
    // 0x102444: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x102444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x102448: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x102448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x10244c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x10244cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x102450: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x102450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x102454: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x102454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x102458: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x102458u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x10245c: 0xc2102d  daddu       $v0, $a2, $v0
    ctx->pc = 0x10245cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
    // 0x102460: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x102460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x102464u;
    {
        const bool branch_taken_0x102464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102464u;
        // 0x102468: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102464) {
            ctx->pc = 0x102490u;
            goto label_102490;
        }
    }
    ctx->pc = 0x10246Cu;
    // 0x10246c: 0x0  nop
    ctx->pc = 0x10246cu;
    // NOP
label_102470:
    // 0x102470: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x102470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x102474: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x102474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x102478: 0x81138  dsll        $v0, $t0, 4
    ctx->pc = 0x102478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 4);
    // 0x10247c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x10247cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x102480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x102480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x102484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x102488: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x102488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x10248c: 0xc23821  addu        $a3, $a2, $v0
    ctx->pc = 0x10248cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_102490:
    // 0x102490: 0x8c860230  lw          $a2, 0x230($a0)
    ctx->pc = 0x102490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x102494: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x102494u;
    {
        const bool branch_taken_0x102494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x102494) {
            ctx->pc = 0x1024A0u;
            goto label_1024a0;
        }
    }
    ctx->pc = 0x10249Cu;
    // 0x10249c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x10249cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1024a0:
    // 0x1024a0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1024A0u;
    {
        const bool branch_taken_0x1024a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024A0u;
        // 0x1024a4: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024a0) {
            ctx->pc = 0x1024B8u;
            goto label_1024b8;
        }
    }
    ctx->pc = 0x1024A8u;
    // 0x1024a8: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1024ac: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x1024acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1024b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1024B0u;
    {
        const bool branch_taken_0x1024b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024B0u;
        // 0x1024b4: 0x7c860200  sq          $a2, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024b0) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024B8u;
label_1024b8:
    // 0x1024b8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1024b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1024bc: 0x15060006  bne         $t0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1024BCu;
    {
        const bool branch_taken_0x1024bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x1024bc) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024C4u;
    // 0x1024c4: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1024c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1024c8: 0x6508ffff  daddiu      $t0, $t0, -0x1
    ctx->pc = 0x1024c8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4294967295);
    // 0x1024cc: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x1024ccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1024d0: 0x7c860200  sq          $a2, 0x200($a0)
    ctx->pc = 0x1024d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 6));
    // 0x1024d4: 0x0  nop
    ctx->pc = 0x1024d4u;
    // NOP
label_1024d8:
    // 0x1024d8: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x1024d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1024dc: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1024dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1024e0: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1024e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1024e4: 0x65900  sll         $t3, $a2, 4
    ctx->pc = 0x1024e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1024e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1024e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024ec: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1024ECu;
    {
        const bool branch_taken_0x1024ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024ECu;
        // 0x1024f0: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024ec) {
            ctx->pc = 0x1025B8u;
            goto label_1025b8;
        }
    }
    ctx->pc = 0x1024F4u;
    // 0x1024f4: 0x240bfff8  addiu       $t3, $zero, -0x8
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1024f8: 0x2d010009  sltiu       $at, $t0, 0x9
    ctx->pc = 0x1024f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1024fc: 0x700b5b89  pcpyld      $t3, $zero, $t3
    ctx->pc = 0x1024fcu;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
    // 0x102500: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x102500u;
    {
        const bool branch_taken_0x102500 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x102504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102500u;
        // 0x102504: 0x10b702d  daddu       $t6, $t0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102500) {
            ctx->pc = 0x102578u;
            goto label_102578;
        }
    }
    ctx->pc = 0x102508u;
    // 0x102508: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x102508u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10250c: 0x0  nop
    ctx->pc = 0x10250cu;
    // NOP
label_102510:
    // 0x102510: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x102510u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102514: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x102514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x102518: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x102518u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10251c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x10251cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x102520: 0x16e582b  sltu        $t3, $t3, $t6
    ctx->pc = 0x102520u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x102524: 0x7dac0120  sq          $t4, 0x120($t5)
    ctx->pc = 0x102524u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 288), GPR_VEC(ctx, 12));
    // 0x102528: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x102528u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10252c: 0x7dac0130  sq          $t4, 0x130($t5)
    ctx->pc = 0x10252cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 304), GPR_VEC(ctx, 12));
    // 0x102530: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x102530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x102534: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x102534u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102538: 0x7dac0140  sq          $t4, 0x140($t5)
    ctx->pc = 0x102538u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 320), GPR_VEC(ctx, 12));
    // 0x10253c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x10253cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x102540: 0x7dac0150  sq          $t4, 0x150($t5)
    ctx->pc = 0x102540u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 336), GPR_VEC(ctx, 12));
    // 0x102544: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x102544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x102548: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x102548u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10254c: 0x7dac0160  sq          $t4, 0x160($t5)
    ctx->pc = 0x10254cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 352), GPR_VEC(ctx, 12));
    // 0x102550: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x102550u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x102554: 0x7dac0170  sq          $t4, 0x170($t5)
    ctx->pc = 0x102554u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 368), GPR_VEC(ctx, 12));
    // 0x102558: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x102558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x10255c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x10255cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102560: 0x7dac0180  sq          $t4, 0x180($t5)
    ctx->pc = 0x102560u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 384), GPR_VEC(ctx, 12));
    // 0x102564: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x102564u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x102568: 0x7dac0190  sq          $t4, 0x190($t5)
    ctx->pc = 0x102568u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 400), GPR_VEC(ctx, 12));
    // 0x10256c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x10256cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x102570: 0x1560ffe7  bnez        $t3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x102570u;
    {
        const bool branch_taken_0x102570 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x102574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102570u;
        // 0x102574: 0x25ad0080  addiu       $t5, $t5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102570) {
            ctx->pc = 0x102510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102510;
        }
    }
    ctx->pc = 0x102578u;
label_102578:
    // 0x102578: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x102578u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10257c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x10257cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x102580: 0x168082b  sltu        $at, $t3, $t0
    ctx->pc = 0x102580u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x102584: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x102584u;
    {
        const bool branch_taken_0x102584 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102584u;
        // 0x102588: 0x65900  sll         $t3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102584) {
            ctx->pc = 0x1025B8u;
            goto label_1025b8;
        }
    }
    ctx->pc = 0x10258Cu;
    // 0x10258c: 0x8b6821  addu        $t5, $a0, $t3
    ctx->pc = 0x10258cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_102590:
    // 0x102590: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x102590u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x102594: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x102594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102598: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x102598u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x10259c: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x10259cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1025a0: 0x168582b  sltu        $t3, $t3, $t0
    ctx->pc = 0x1025a0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1025a4: 0x7dac0120  sq          $t4, 0x120($t5)
    ctx->pc = 0x1025a4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 288), GPR_VEC(ctx, 12));
    // 0x1025a8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1025a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1025ac: 0x1560fff8  bnez        $t3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1025ACu;
    {
        const bool branch_taken_0x1025ac = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025ACu;
        // 0x1025b0: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025ac) {
            ctx->pc = 0x102590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102590;
        }
    }
    ctx->pc = 0x1025B4u;
    // 0x1025b4: 0x0  nop
    ctx->pc = 0x1025b4u;
    // NOP
label_1025b8:
    // 0x1025b8: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x1025b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1025bc: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x1025bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1025c0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1025c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1025c4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1025c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1025c8: 0x11400039  beqz        $t2, . + 4 + (0x39 << 2)
    ctx->pc = 0x1025C8u;
    {
        const bool branch_taken_0x1025c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025C8u;
        // 0x1025cc: 0xac860014  sw          $a2, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025c8) {
            ctx->pc = 0x1026B0u;
            goto label_1026b0;
        }
    }
    ctx->pc = 0x1025D0u;
    // 0x1025d0: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1025d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1025d4: 0x5082b  sltu        $at, $zero, $a1
    ctx->pc = 0x1025d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1025d8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1025d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1025dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1025dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1025e0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1025e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1025e4: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1025E4u;
    {
        const bool branch_taken_0x1025e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1025E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025E4u;
        // 0x1025e8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025e4) {
            ctx->pc = 0x1026B0u;
            goto label_1026b0;
        }
    }
    ctx->pc = 0x1025ECu;
    // 0x1025ec: 0x2406fff8  addiu       $a2, $zero, -0x8
    ctx->pc = 0x1025ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1025f0: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x1025f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1025f4: 0x70063389  pcpyld      $a2, $zero, $a2
    ctx->pc = 0x1025f4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1025f8: 0x1420001d  bnez        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1025F8u;
    {
        const bool branch_taken_0x1025f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1025F8u;
        // 0x1025fc: 0xa6502d  daddu       $t2, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1025f8) {
            ctx->pc = 0x102670u;
            goto label_102670;
        }
    }
    ctx->pc = 0x102600u;
    // 0x102600: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x102600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102604: 0x0  nop
    ctx->pc = 0x102604u;
    // NOP
label_102608:
    // 0x102608: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x102608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10260c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x10260cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x102610: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x102610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102614: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x102614u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x102618: 0xca302b  sltu        $a2, $a2, $t2
    ctx->pc = 0x102618u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x10261c: 0xad270288  sw          $a3, 0x288($t1)
    ctx->pc = 0x10261cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 648), GPR_U32(ctx, 7));
    // 0x102620: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x102620u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102624: 0xad27028c  sw          $a3, 0x28C($t1)
    ctx->pc = 0x102624u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 652), GPR_U32(ctx, 7));
    // 0x102628: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x102628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x10262c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x10262cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102630: 0xad270290  sw          $a3, 0x290($t1)
    ctx->pc = 0x102630u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 656), GPR_U32(ctx, 7));
    // 0x102634: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x102634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102638: 0xad270294  sw          $a3, 0x294($t1)
    ctx->pc = 0x102638u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 660), GPR_U32(ctx, 7));
    // 0x10263c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10263cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x102640: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x102640u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102644: 0xad270298  sw          $a3, 0x298($t1)
    ctx->pc = 0x102644u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 664), GPR_U32(ctx, 7));
    // 0x102648: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x102648u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10264c: 0xad27029c  sw          $a3, 0x29C($t1)
    ctx->pc = 0x10264cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 668), GPR_U32(ctx, 7));
    // 0x102650: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x102650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x102654: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x102654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102658: 0xad2702a0  sw          $a3, 0x2A0($t1)
    ctx->pc = 0x102658u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 672), GPR_U32(ctx, 7));
    // 0x10265c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x10265cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102660: 0xad2702a4  sw          $a3, 0x2A4($t1)
    ctx->pc = 0x102660u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 676), GPR_U32(ctx, 7));
    // 0x102664: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x102664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x102668: 0x14c0ffe7  bnez        $a2, . + 4 + (-0x19 << 2)
    ctx->pc = 0x102668u;
    {
        const bool branch_taken_0x102668 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102668u;
        // 0x10266c: 0x25290020  addiu       $t1, $t1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102668) {
            ctx->pc = 0x102608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102608;
        }
    }
    ctx->pc = 0x102670u;
label_102670:
    // 0x102670: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x102670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102674: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x102674u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x102678: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x102678u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10267c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x10267Cu;
    {
        const bool branch_taken_0x10267c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10267Cu;
        // 0x102680: 0x83080  sll         $a2, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10267c) {
            ctx->pc = 0x1026B0u;
            goto label_1026b0;
        }
    }
    ctx->pc = 0x102684u;
    // 0x102684: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x102684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_102688:
    // 0x102688: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x102688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10268c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10268cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x102690: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x102690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102694: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x102694u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x102698: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x102698u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x10269c: 0xace60288  sw          $a2, 0x288($a3)
    ctx->pc = 0x10269cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 648), GPR_U32(ctx, 6));
    // 0x1026a0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1026a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1026a4: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1026A4u;
    {
        const bool branch_taken_0x1026a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1026A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1026A4u;
        // 0x1026a8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1026a4) {
            ctx->pc = 0x102688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102688;
        }
    }
    ctx->pc = 0x1026ACu;
    // 0x1026ac: 0x0  nop
    ctx->pc = 0x1026acu;
    // NOP
label_1026b0:
    // 0x1026b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1026B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1026B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1026B8u;
}
