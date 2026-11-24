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

// Function: sub_003123C0
// Address: 0x3123c0 - 0x314ad8
void sub_003123C0_0x3123c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003123C0_0x3123c0");
#endif

    switch (ctx->pc) {
        case 0x3123f0u: goto label_3123f0;
        case 0x312418u: goto label_312418;
        case 0x312560u: goto label_312560;
        case 0x312658u: goto label_312658;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126f0u: goto label_3126f0;
        case 0x312730u: goto label_312730;
        case 0x31298cu: goto label_31298c;
        case 0x3129c0u: goto label_3129c0;
        case 0x312a28u: goto label_312a28;
        case 0x312bdcu: goto label_312bdc;
        case 0x312d38u: goto label_312d38;
        case 0x312fc4u: goto label_312fc4;
        case 0x312fe4u: goto label_312fe4;
        case 0x313188u: goto label_313188;
        case 0x3131fcu: goto label_3131fc;
        case 0x313228u: goto label_313228;
        case 0x313550u: goto label_313550;
        case 0x313580u: goto label_313580;
        case 0x313700u: goto label_313700;
        case 0x3138b0u: goto label_3138b0;
        case 0x313be0u: goto label_313be0;
        case 0x313d20u: goto label_313d20;
        case 0x313ed0u: goto label_313ed0;
        case 0x314218u: goto label_314218;
        case 0x3142a8u: goto label_3142a8;
        case 0x3142c0u: goto label_3142c0;
        case 0x3143c8u: goto label_3143c8;
        case 0x3144e8u: goto label_3144e8;
        case 0x314600u: goto label_314600;
        case 0x314718u: goto label_314718;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147c4u: goto label_3147c4;
        case 0x3148b0u: goto label_3148b0;
        case 0x314a68u: goto label_314a68;
        default: break;
    }

    ctx->pc = 0x3123c0u;

    // 0x3123c0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3123c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x3123c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3123c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3123c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3123c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x3123cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3123ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3123d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3123d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x3123d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3123d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3123d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3123d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3123dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3123dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3123e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3123e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3123e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3123e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3123e8: 0xc0c5e7c  jal         func_3179F0
    ctx->pc = 0x3123E8u;
    SET_GPR_U32(ctx, 31, 0x3123F0u);
    ctx->pc = 0x3123ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123E8u;
    // 0x3123ec: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3179F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3179F0u, 0x3123E8u, 0x3123F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123F0u;
label_3123f0:
    // 0x3123f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3123f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3123f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123f8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x3123f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x3123fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3123fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x312400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312404: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x312404u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312408: 0x2442dbd0  addiu       $v0, $v0, -0x2430
    ctx->pc = 0x312408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958032));
    // 0x31240c: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x31240cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x312410: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x312410u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x312414: 0x0  nop
    ctx->pc = 0x312414u;
    // NOP
label_312418:
    // 0x312418: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x312418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31241c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x31241cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x312420: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x312420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x312424: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x312424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x312428: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x312428u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x31242c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x31242cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x312430: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x312430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x312434: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x312434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x312438: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x312438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x31243c: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x31243cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x312440: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x312440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x312444: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x312444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x312448: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x312448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x31244c: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x31244cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x312450: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x312450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x312454: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x312454u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x312458: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x312458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x31245c: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x31245cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x312460: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x312460u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x312464: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x312464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x312468: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x312468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x31246c: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x31246cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x312470: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x312470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x312474: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x312474u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x312478: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x312478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x31247c: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x31247cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x312480: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x312480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x312484: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x312484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x312488: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x312488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x31248c: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x31248cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x312490: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x312490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x312494: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x312494u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x312498: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x312498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x31249c: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x31249cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x3124a0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x3124a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x3124a4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x3124a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3124a8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3124a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3124ac: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x3124acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x3124b0: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x3124b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x3124b4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x3124b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3124b8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x3124b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3124bc: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x3124bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x3124c0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x3124c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x3124c4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x3124c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3124c8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3124cc: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x3124ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x3124d0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x3124d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x3124d4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x3124d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3124d8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x3124d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3124dc: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x3124dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x3124e0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x3124e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x3124e4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x3124e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x3124e8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x3124e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x3124ec: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x3124ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x3124f0: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x3124f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x3124f4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x3124f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3124f8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x3124f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x3124fc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3124fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x312500: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x312500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x312504: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x312504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x312508: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x312508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x31250c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x31250cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x312510: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x312510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x312514: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x312514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x312518: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x312518u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x31251c: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x31251Cu;
    {
        const bool branch_taken_0x31251c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x312520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31251Cu;
        // 0x312520: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31251c) {
            ctx->pc = 0x312418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312418;
        }
    }
    ctx->pc = 0x312524u;
    // 0x312524: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x312524u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x312528: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x312528u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31252c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x31252cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312530: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x312530u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312534: 0x2508dfd0  addiu       $t0, $t0, -0x2030
    ctx->pc = 0x312534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959056));
    // 0x312538: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x312538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x31253c: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x31253cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x312540: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x312540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x312544: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x312544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x312548: 0x3c030500  lui         $v1, 0x500
    ctx->pc = 0x312548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1280 << 16));
    // 0x31254c: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x31254cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x312550: 0x3c120700  lui         $s2, 0x700
    ctx->pc = 0x312550u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1792 << 16));
    // 0x312554: 0x3c0e0800  lui         $t6, 0x800
    ctx->pc = 0x312554u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)2048 << 16));
    // 0x312558: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x312558u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x31255c: 0x0  nop
    ctx->pc = 0x31255cu;
    // NOP
label_312560:
    // 0x312560: 0x12a6021  addu        $t4, $t1, $t2
    ctx->pc = 0x312560u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x312564: 0xad0c0000  sw          $t4, 0x0($t0)
    ctx->pc = 0x312564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 12));
    // 0x312568: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x312568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x31256c: 0x256c0001  addiu       $t4, $t3, 0x1
    ctx->pc = 0x31256cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x312570: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x312570u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x312574: 0x256c0002  addiu       $t4, $t3, 0x2
    ctx->pc = 0x312574u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x312578: 0x25ef7fff  addiu       $t7, $t7, 0x7FFF
    ctx->pc = 0x312578u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32767));
    // 0x31257c: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x31257cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x312580: 0x25ef0081  addiu       $t7, $t7, 0x81
    ctx->pc = 0x312580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 129));
    // 0x312584: 0x258c7fff  addiu       $t4, $t4, 0x7FFF
    ctx->pc = 0x312584u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32767));
    // 0x312588: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x312588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x31258c: 0x258c0081  addiu       $t4, $t4, 0x81
    ctx->pc = 0x31258cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 129));
    // 0x312590: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x312590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x312594: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x312594u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x312598: 0xad0f0004  sw          $t7, 0x4($t0)
    ctx->pc = 0x312598u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 15));
    // 0x31259c: 0x1866021  addu        $t4, $t4, $a2
    ctx->pc = 0x31259cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x3125a0: 0xad0c0008  sw          $t4, 0x8($t0)
    ctx->pc = 0x3125a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 12));
    // 0x3125a4: 0x256c0003  addiu       $t4, $t3, 0x3
    ctx->pc = 0x3125a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x3125a8: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x3125a8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3125ac: 0x256c0004  addiu       $t4, $t3, 0x4
    ctx->pc = 0x3125acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3125b0: 0x25ef7fff  addiu       $t7, $t7, 0x7FFF
    ctx->pc = 0x3125b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32767));
    // 0x3125b4: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x3125b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3125b8: 0x25ef0081  addiu       $t7, $t7, 0x81
    ctx->pc = 0x3125b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 129));
    // 0x3125bc: 0x258c7fff  addiu       $t4, $t4, 0x7FFF
    ctx->pc = 0x3125bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32767));
    // 0x3125c0: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x3125c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x3125c4: 0x258c0081  addiu       $t4, $t4, 0x81
    ctx->pc = 0x3125c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 129));
    // 0x3125c8: 0x1e57821  addu        $t7, $t7, $a1
    ctx->pc = 0x3125c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x3125cc: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x3125ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x3125d0: 0xad0f000c  sw          $t7, 0xC($t0)
    ctx->pc = 0x3125d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 15));
    // 0x3125d4: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x3125d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x3125d8: 0xad0c0010  sw          $t4, 0x10($t0)
    ctx->pc = 0x3125d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 12));
    // 0x3125dc: 0x256c0005  addiu       $t4, $t3, 0x5
    ctx->pc = 0x3125dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 5));
    // 0x3125e0: 0xc7c00  sll         $t7, $t4, 16
    ctx->pc = 0x3125e0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3125e4: 0x256c0006  addiu       $t4, $t3, 0x6
    ctx->pc = 0x3125e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 6));
    // 0x3125e8: 0x25ef7fff  addiu       $t7, $t7, 0x7FFF
    ctx->pc = 0x3125e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32767));
    // 0x3125ec: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x3125ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3125f0: 0x25ef0081  addiu       $t7, $t7, 0x81
    ctx->pc = 0x3125f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 129));
    // 0x3125f4: 0x258c7fff  addiu       $t4, $t4, 0x7FFF
    ctx->pc = 0x3125f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32767));
    // 0x3125f8: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x3125f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x3125fc: 0x258c0081  addiu       $t4, $t4, 0x81
    ctx->pc = 0x3125fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 129));
    // 0x312600: 0x1e37821  addu        $t7, $t7, $v1
    ctx->pc = 0x312600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x312604: 0x18a6021  addu        $t4, $t4, $t2
    ctx->pc = 0x312604u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x312608: 0xad0f0014  sw          $t7, 0x14($t0)
    ctx->pc = 0x312608u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 15));
    // 0x31260c: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x31260cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x312610: 0xad0c0018  sw          $t4, 0x18($t0)
    ctx->pc = 0x312610u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 12));
    // 0x312614: 0x256c0007  addiu       $t4, $t3, 0x7
    ctx->pc = 0x312614u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 7));
    // 0x312618: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x312618u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x31261c: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x31261cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x312620: 0x258c7fff  addiu       $t4, $t4, 0x7FFF
    ctx->pc = 0x312620u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32767));
    // 0x312624: 0x258f0081  addiu       $t7, $t4, 0x81
    ctx->pc = 0x312624u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), 129));
    // 0x312628: 0x1ea7821  addu        $t7, $t7, $t2
    ctx->pc = 0x312628u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 10)));
    // 0x31262c: 0x2d6c0100  sltiu       $t4, $t3, 0x100
    ctx->pc = 0x31262cu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x312630: 0x1f27821  addu        $t7, $t7, $s2
    ctx->pc = 0x312630u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x312634: 0x14e5021  addu        $t2, $t2, $t6
    ctx->pc = 0x312634u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x312638: 0xad0f001c  sw          $t7, 0x1C($t0)
    ctx->pc = 0x312638u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 15));
    // 0x31263c: 0x1580ffc8  bnez        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x31263Cu;
    {
        const bool branch_taken_0x31263c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x312640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31263Cu;
        // 0x312640: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31263c) {
            ctx->pc = 0x312560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312560;
        }
    }
    ctx->pc = 0x312644u;
    // 0x312644: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x312644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x312648: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31264c: 0x2484e3d0  addiu       $a0, $a0, -0x1C30
    ctx->pc = 0x31264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960080));
    // 0x312650: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x312650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x312654: 0x0  nop
    ctx->pc = 0x312654u;
    // NOP
label_312658:
    // 0x312658: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x312658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x31265c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31265cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x312660: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x312660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x312664: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x312664u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x312668: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x312668u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31266c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x31266cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x312670: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x312670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x312674: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x312674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x312678: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x312678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x31267c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x31267cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x312680: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x312680u;
    {
        const bool branch_taken_0x312680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312680u;
        // 0x312684: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312680) {
            ctx->pc = 0x312658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312658;
        }
    }
    ctx->pc = 0x312688u;
    // 0x312688: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x312688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x31268c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x31268cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x312690: 0xac20e3d0  sw          $zero, -0x1C30($at)
    ctx->pc = 0x312690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EE3D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EE3D0u, _value); } while (0);
    // 0x312694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x312694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312698: 0x2463e3d4  addiu       $v1, $v1, -0x1C2C
    ctx->pc = 0x312698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960084));
    // 0x31269c: 0x0  nop
    ctx->pc = 0x31269cu;
    // NOP
label_3126a0:
    // 0x3126a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3126a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3126a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3126a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3126a8: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x3126a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x3126ac: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3126acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3126b0: 0x2882000e  slti        $v0, $a0, 0xE
    ctx->pc = 0x3126b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3126b4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3126b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3126b8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3126b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x3126bc: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3126bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x3126c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3126C0u;
    {
        const bool branch_taken_0x3126c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3126C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126C0u;
        // 0x3126c4: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126c0) {
            ctx->pc = 0x3126A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3126a0;
        }
    }
    ctx->pc = 0x3126C8u;
    // 0x3126c8: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x3126c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x3126cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3126ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3126d0: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x3126d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
    // 0x3126d4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3126d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3126d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3126d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3126dc: 0x240400dc  addiu       $a0, $zero, 0xDC
    ctx->pc = 0x3126dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x3126e0: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x3126e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x3126e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3126e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3126e8: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x3126e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
    // 0x3126ec: 0x0  nop
    ctx->pc = 0x3126ecu;
    // NOP
label_3126f0:
    // 0x3126f0: 0x2482ff24  addiu       $v0, $a0, -0xDC
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967076));
    // 0x3126f4: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x3126f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x3126f8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3126F8u;
    {
        const bool branch_taken_0x3126f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3126f8) {
            ctx->pc = 0x312704u;
            goto label_312704;
        }
    }
    ctx->pc = 0x312700u;
    // 0x312700: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x312700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_312704:
    // 0x312704: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x312704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x312708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31270c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31270cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x312710: 0x2484000b  addiu       $a0, $a0, 0xB
    ctx->pc = 0x312710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11));
    // 0x312714: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x312714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x312718: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x312718u;
    {
        const bool branch_taken_0x312718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312718u;
        // 0x31271c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312718) {
            ctx->pc = 0x3126F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3126f0;
        }
    }
    ctx->pc = 0x312720u;
    // 0x312720: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x312720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312724: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x312724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x312728: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x312728u;
    SET_GPR_U32(ctx, 31, 0x312730u);
    ctx->pc = 0x31272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312728u;
    // 0x31272c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x312728u, 0x312730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312730u;
label_312730:
    // 0x312730: 0xaf828b0c  sw          $v0, -0x74F4($gp)
    ctx->pc = 0x312730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937356), GPR_U32(ctx, 2));
    // 0x312734: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x312734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x312738: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x312738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x31273c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x31273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x312740: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x312740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x312744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x312744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x312748: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x312748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31274c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x31274cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312750: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x312750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x312754: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x312754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x312758: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x312758u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
    // 0x31275c: 0x34640080  ori         $a0, $v1, 0x80
    ctx->pc = 0x31275cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x312760: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x312760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x312764: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x312764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312768: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x312768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x31276c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x31276cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x312770: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x312770u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x312774: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x312774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x312778: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x312778u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x31277c: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x31277cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x312780: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x312780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x312784: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x312788: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x312788u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x31278c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x31278cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x312790: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x312790u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x312794: 0x34681001  ori         $t0, $v1, 0x1001
    ctx->pc = 0x312794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
    // 0x312798: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x312798u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x31279c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x31279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3127a0: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x3127a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x3127a4: 0x24037900  addiu       $v1, $zero, 0x7900
    ctx->pc = 0x3127a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x3127a8: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3127a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3127ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3127acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3127b0: 0xfc480000  sd          $t0, 0x0($v0)
    ctx->pc = 0x3127b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x3127b4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3127b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3127b8: 0x24037000  addiu       $v1, $zero, 0x7000
    ctx->pc = 0x3127b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x3127bc: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x3127bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x3127c0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3127c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x3127c4: 0x24080109  addiu       $t0, $zero, 0x109
    ctx->pc = 0x3127c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x3127c8: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x3127c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x3127cc: 0x3c077900  lui         $a3, 0x7900
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30976 << 16));
    // 0x3127d0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3127d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3127d4: 0x34e97000  ori         $t1, $a3, 0x7000
    ctx->pc = 0x3127d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28672);
    // 0x3127d8: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x3127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x3127dc: 0x34eb8000  ori         $t3, $a3, 0x8000
    ctx->pc = 0x3127dcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x3127e0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3127e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3127e4: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x3127e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3127e8: 0xfc480000  sd          $t0, 0x0($v0)
    ctx->pc = 0x3127e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 8));
    // 0x3127ec: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3127ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3127f0: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x3127f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x3127f4: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x3127f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3127f8: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x3127f8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x3127fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x3127fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x312800: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x312800u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x312804: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x312804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x312808: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x31280c: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x31280cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x312810: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x312810u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x312814: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x312814u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x312818: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x312818u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x31281c: 0x3c0700df  lui         $a3, 0xDF
    ctx->pc = 0x31281cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)223 << 16));
    // 0x312820: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x312824: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x312824u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x312828: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x312828u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x31282c: 0x3c0701ff  lui         $a3, 0x1FF
    ctx->pc = 0x31282cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)511 << 16));
    // 0x312830: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x312830u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x312834: 0xe84825  or          $t1, $a3, $t0
    ctx->pc = 0x312834u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x312838: 0x8c2af014  lw          $t2, -0xFEC($at)
    ctx->pc = 0x312838u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x31283c: 0x3c070005  lui         $a3, 0x5
    ctx->pc = 0x31283cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)5 << 16));
    // 0x312840: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x312840u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x312844: 0x34e717fd  ori         $a3, $a3, 0x17FD
    ctx->pc = 0x312844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6141);
    // 0x312848: 0xdd4a0020  ld          $t2, 0x20($t2)
    ctx->pc = 0x312848u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x31284c: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x31284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x312850: 0xfc4a0010  sd          $t2, 0x10($v0)
    ctx->pc = 0x312850u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 10));
    // 0x312854: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x312854u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x312858: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x31285c: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x31285cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x312860: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x312860u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x312864: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x312864u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x312868: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x312868u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x31286c: 0x8c24f014  lw          $a0, -0xFEC($at)
    ctx->pc = 0x31286cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81F014u));
    // 0x312870: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x312874: 0xdc840040  ld          $a0, 0x40($a0)
    ctx->pc = 0x312874u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x312878: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x312878u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x31287c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x31287cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x312880: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x312880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312884: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x312884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312888: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x312888u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x31288c: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x31288cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x312890: 0x30a7000f  andi        $a3, $a1, 0xF
    ctx->pc = 0x312890u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x312894: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x312894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x312898: 0x10a60011  beq         $a1, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x312898u;
    {
        const bool branch_taken_0x312898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x31289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312898u;
        // 0x31289c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312898) {
            ctx->pc = 0x3128E0u;
            goto label_3128e0;
        }
    }
    ctx->pc = 0x3128A0u;
    // 0x3128a0: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3128A0u;
    {
        const bool branch_taken_0x3128a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3128a0) {
            ctx->pc = 0x3128B8u;
            goto label_3128b8;
        }
    }
    ctx->pc = 0x3128A8u;
    // 0x3128a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3128A8u;
    {
        const bool branch_taken_0x3128a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3128a8) {
            ctx->pc = 0x3128B8u;
            goto label_3128b8;
        }
    }
    ctx->pc = 0x3128B0u;
    // 0x3128b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3128B0u;
    {
        const bool branch_taken_0x3128b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3128b0) {
            ctx->pc = 0x312918u;
            goto label_312918;
        }
    }
    ctx->pc = 0x3128B8u;
label_3128b8:
    // 0x3128b8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3128b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3128bc: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3128c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3128C0u;
    {
        const bool branch_taken_0x3128c0 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3128C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C0u;
        // 0x3128c4: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128c0) {
            ctx->pc = 0x3128D0u;
            goto label_3128d0;
        }
    }
    ctx->pc = 0x3128C8u;
    // 0x3128c8: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x3128c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3128cc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3128ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_3128d0:
    // 0x3128d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3128d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3128d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3128D4u;
    {
        const bool branch_taken_0x3128d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3128D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128D4u;
        // 0x3128d8: 0x3091ffff  andi        $s1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128d4) {
            ctx->pc = 0x312918u;
            goto label_312918;
        }
    }
    ctx->pc = 0x3128DCu;
    // 0x3128dc: 0x0  nop
    ctx->pc = 0x3128dcu;
    // NOP
label_3128e0:
    // 0x3128e0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3128e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3128e4: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x3128e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3128e8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3128E8u;
    {
        const bool branch_taken_0x3128e8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128E8u;
        // 0x3128ec: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128e8) {
            ctx->pc = 0x3128F8u;
            goto label_3128f8;
        }
    }
    ctx->pc = 0x3128F0u;
    // 0x3128f0: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x3128f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3128f4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3128f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_3128f8:
    // 0x3128f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3128f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3128fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3128fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x312900: 0x87001b  divu        $zero, $a0, $a3
    ctx->pc = 0x312900u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x312904: 0x0  nop
    ctx->pc = 0x312904u;
    // NOP
    // 0x312908: 0x0  nop
    ctx->pc = 0x312908u;
    // NOP
    // 0x31290c: 0x2012  mflo        $a0
    ctx->pc = 0x31290cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x312910: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x312910u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x312914: 0x0  nop
    ctx->pc = 0x312914u;
    // NOP
label_312918:
    // 0x312918: 0x3224ffff  andi        $a0, $s1, 0xFFFF
    ctx->pc = 0x312918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x31291c: 0x34858000  ori         $a1, $a0, 0x8000
    ctx->pc = 0x31291cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x312920: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x312920u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x312924: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x312928: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x312928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x31292c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31292cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x312930: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312930u;
    {
        const bool branch_taken_0x312930 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312930u;
        // 0x312934: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312930) {
            ctx->pc = 0x312940u;
            goto label_312940;
        }
    }
    ctx->pc = 0x312938u;
    // 0x312938: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x312938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x31293c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x31293cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_312940:
    // 0x312940: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x312940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x312944: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x312944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x312948: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x312948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x31294c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31294cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x312950: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x312950u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x312954: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x312954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x312958: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x312958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31295c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31295Cu;
    {
        const bool branch_taken_0x31295c = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x312960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31295Cu;
        // 0x312960: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31295c) {
            ctx->pc = 0x31296Cu;
            goto label_31296c;
        }
    }
    ctx->pc = 0x312964u;
    // 0x312964: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x312964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x312968: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312968u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_31296c:
    // 0x31296c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x31296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312970: 0x24051010  addiu       $a1, $zero, 0x1010
    ctx->pc = 0x312970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x312974: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x312974u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x312978: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x31297c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312980: 0xaf828b18  sw          $v0, -0x74E8($gp)
    ctx->pc = 0x312980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937368), GPR_U32(ctx, 2));
    // 0x312984: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x312984u;
    SET_GPR_U32(ctx, 31, 0x31298Cu);
    ctx->pc = 0x312988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312984u;
    // 0x312988: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x312984u, 0x31298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31298Cu;
label_31298c:
    // 0x31298c: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x31298cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x312990: 0xaf828b14  sw          $v0, -0x74EC($gp)
    ctx->pc = 0x312990u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937364), GPR_U32(ctx, 2));
    // 0x312994: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x312994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312998: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x312998u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31299c: 0x240353d3  addiu       $v1, $zero, 0x53D3
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21459));
    // 0x3129a0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3129a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x3129a4: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x3129a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x3129a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3129a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129ac: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x3129acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x3129b0: 0x24130790  addiu       $s3, $zero, 0x790
    ctx->pc = 0x3129b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x3129b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3129b8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3129b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3129bc: 0x24110792  addiu       $s1, $zero, 0x792
    ctx->pc = 0x3129bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
label_3129c0:
    // 0x3129c0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x3129c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x3129c4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x3129c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3129c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3129c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3129cc: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x3129ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x3129d0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3129d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3129d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3129d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3129d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3129d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3129dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3129dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3129e0: 0x44c38  dsll        $t1, $a0, 16
    ctx->pc = 0x3129e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 16);
    // 0x3129e4: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x3129e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x3129e8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x3129e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x3129ec: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x3129ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3129f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3129f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3129f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3129f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3129f8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3129f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3129fc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3129fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312a00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312a04: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x312a04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x312a08: 0x240e0700  addiu       $t6, $zero, 0x700
    ctx->pc = 0x312a08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x312a0c: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x312a0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x312a10: 0x240c0708  addiu       $t4, $zero, 0x708
    ctx->pc = 0x312a10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
    // 0x312a14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x312a14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312a18: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x312a18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x312a1c: 0x32f80001  andi        $t8, $s7, 0x1
    ctx->pc = 0x312a1cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x312a20: 0x33438  dsll        $a2, $v1, 16
    ctx->pc = 0x312a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << 16);
    // 0x312a24: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x312a24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
label_312a28:
    // 0x312a28: 0x13000019  beqz        $t8, . + 4 + (0x19 << 2)
    ctx->pc = 0x312A28u;
    {
        const bool branch_taken_0x312a28 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A28u;
        // 0x312a2c: 0xf1900  sll         $v1, $t7, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a28) {
            ctx->pc = 0x312A90u;
            goto label_312a90;
        }
    }
    ctx->pc = 0x312A30u;
    // 0x312a30: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x312a34: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x312a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312a38: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312a3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x312a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312a40: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312a44: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312a48: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x312a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x312a4c: 0x692825  or          $a1, $v1, $t1
    ctx->pc = 0x312a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x312a50: 0xd1900  sll         $v1, $t5, 4
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x312a54: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x312a54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x312a58: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x312a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312a5c: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x312a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x312a60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x312a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312a64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312a68: 0x672025  or          $a0, $v1, $a3
    ctx->pc = 0x312a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x312a6c: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x312a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x312a70: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x312a70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x312a74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x312a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312a78: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312a7c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x312a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x312a80: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x312a80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x312a84: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x312A84u;
    {
        const bool branch_taken_0x312a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A84u;
        // 0x312a88: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a84) {
            ctx->pc = 0x312AF0u;
            goto label_312af0;
        }
    }
    ctx->pc = 0x312A8Cu;
    // 0x312a8c: 0x0  nop
    ctx->pc = 0x312a8cu;
    // NOP
label_312a90:
    // 0x312a90: 0xb1900  sll         $v1, $t3, 4
    ctx->pc = 0x312a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x312a94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x312a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312a98: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x312a98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x312a9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x312a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312aa0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312aa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312aa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312aa8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312aa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312aac: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x312aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x312ab0: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x312ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x312ab4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x312ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x312ab8: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x312ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x312abc: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x312abcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x312ac0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x312ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x312ac4: 0xc2100  sll         $a0, $t4, 4
    ctx->pc = 0x312ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x312ac8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x312ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x312acc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312ad0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x312ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x312ad4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312ad8: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x312ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x312adc: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x312adcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
    // 0x312ae0: 0x861825  or          $v1, $a0, $a2
    ctx->pc = 0x312ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x312ae4: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x312ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x312ae8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x312ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x312aec: 0x0  nop
    ctx->pc = 0x312aecu;
    // NOP
label_312af0:
    // 0x312af0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x312af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x312af4: 0x2ea30008  sltiu       $v1, $s5, 0x8
    ctx->pc = 0x312af4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x312af8: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x312af8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x312afc: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x312afcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x312b00: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x312b00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x312b04: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x312b04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x312b08: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x312b08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x312b0c: 0x1460ffc6  bnez        $v1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x312B0Cu;
    {
        const bool branch_taken_0x312b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B0Cu;
        // 0x312b10: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b0c) {
            ctx->pc = 0x312A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312a28;
        }
    }
    ctx->pc = 0x312B14u;
    // 0x312b14: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x312b14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x312b18: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x312b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x312b1c: 0x2ee30010  sltiu       $v1, $s7, 0x10
    ctx->pc = 0x312b1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x312b20: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x312b24: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x312b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x312b28: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x312B28u;
    {
        const bool branch_taken_0x312b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B28u;
        // 0x312b2c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b28) {
            ctx->pc = 0x3129C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3129c0;
        }
    }
    ctx->pc = 0x312B30u;
    // 0x312b30: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x312b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312b34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x312b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312b38: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x312b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x312b3c: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x312b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x312b40: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x312b40u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x312b44: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x312b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x312b48: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x312B48u;
    {
        const bool branch_taken_0x312b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x312B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B48u;
        // 0x312b4c: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b48) {
            ctx->pc = 0x312B90u;
            goto label_312b90;
        }
    }
    ctx->pc = 0x312B50u;
    // 0x312b50: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x312b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312b54: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312B54u;
    {
        const bool branch_taken_0x312b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x312b54) {
            ctx->pc = 0x312B70u;
            goto label_312b70;
        }
    }
    ctx->pc = 0x312B5Cu;
    // 0x312b5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x312B5Cu;
    {
        const bool branch_taken_0x312b5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b5c) {
            ctx->pc = 0x312B70u;
            goto label_312b70;
        }
    }
    ctx->pc = 0x312B64u;
    // 0x312b64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x312B64u;
    {
        const bool branch_taken_0x312b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b64) {
            ctx->pc = 0x312BC0u;
            goto label_312bc0;
        }
    }
    ctx->pc = 0x312B6Cu;
    // 0x312b6c: 0x0  nop
    ctx->pc = 0x312b6cu;
    // NOP
label_312b70:
    // 0x312b70: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x312b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312b74: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312B74u;
    {
        const bool branch_taken_0x312b74 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B74u;
        // 0x312b78: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b74) {
            ctx->pc = 0x312B84u;
            goto label_312b84;
        }
    }
    ctx->pc = 0x312B7Cu;
    // 0x312b7c: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312b80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312b80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312b84:
    // 0x312b84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312b88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x312B88u;
    {
        const bool branch_taken_0x312b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B88u;
        // 0x312b8c: 0x305effff  andi        $fp, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b88) {
            ctx->pc = 0x312BC0u;
            goto label_312bc0;
        }
    }
    ctx->pc = 0x312B90u;
label_312b90:
    // 0x312b90: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x312b90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x312b94: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312B94u;
    {
        const bool branch_taken_0x312b94 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B94u;
        // 0x312b98: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b94) {
            ctx->pc = 0x312BA4u;
            goto label_312ba4;
        }
    }
    ctx->pc = 0x312B9Cu;
    // 0x312b9c: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312ba0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312ba0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312ba4:
    // 0x312ba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312ba8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312bac: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x312bacu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x312bb0: 0x0  nop
    ctx->pc = 0x312bb0u;
    // NOP
    // 0x312bb4: 0x0  nop
    ctx->pc = 0x312bb4u;
    // NOP
    // 0x312bb8: 0x1012  mflo        $v0
    ctx->pc = 0x312bb8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x312bbc: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x312bbcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_312bc0:
    // 0x312bc0: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x312bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x312bc4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x312bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x312bc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x312bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312bcc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x312bccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x312bd0: 0x24051740  addiu       $a1, $zero, 0x1740
    ctx->pc = 0x312bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5952));
    // 0x312bd4: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x312BD4u;
    SET_GPR_U32(ctx, 31, 0x312BDCu);
    ctx->pc = 0x312BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BD4u;
    // 0x312bd8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x312BD4u, 0x312BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BDCu;
label_312bdc:
    // 0x312bdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x312bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x312be0: 0xaf828b10  sw          $v0, -0x74F0($gp)
    ctx->pc = 0x312be0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937360), GPR_U32(ctx, 2));
    // 0x312be4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x312be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x312be8: 0x4503c  dsll32      $t2, $a0, 0
    ctx->pc = 0x312be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312bec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x312becu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x312bf0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x312bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x312bf4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x312bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x312bf8: 0x34841d2c  ori         $a0, $a0, 0x1D2C
    ctx->pc = 0x312bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7468);
    // 0x312bfc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312c00: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x312c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x312c04: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x312c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x312c08: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x312c08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312c0c: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x312c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x312c10: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x312c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x312c14: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x312c14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x312c18: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x312c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x312c1c: 0xfc6a0010  sd          $t2, 0x10($v1)
    ctx->pc = 0x312c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 10));
    // 0x312c20: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x312c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x312c24: 0xfc660018  sd          $a2, 0x18($v1)
    ctx->pc = 0x312c24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 6));
    // 0x312c28: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x312c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312c2c: 0xaf858b30  sw          $a1, -0x74D0($gp)
    ctx->pc = 0x312c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 5));
    // 0x312c30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312c34: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x312c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x312c38: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x312c38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x312c3c: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x312c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x312c40: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x312c40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312c44: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x312c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x312c48: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x312c48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x312c4c: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x312c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x312c50: 0x24050052  addiu       $a1, $zero, 0x52
    ctx->pc = 0x312c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x312c54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312c58: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x312c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x312c5c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x312c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x312c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312c64: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x312c64u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x312c68: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x312c68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x312c6c: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x312c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x312c70: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x312c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312c74: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312c78: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x312c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x312c7c: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x312c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x312c80: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x312c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x312c84: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x312c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x312c88: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x312C88u;
    {
        const bool branch_taken_0x312c88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x312C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C88u;
        // 0x312c8c: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c88) {
            ctx->pc = 0x312CD0u;
            goto label_312cd0;
        }
    }
    ctx->pc = 0x312C90u;
    // 0x312c90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x312c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312c94: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312C94u;
    {
        const bool branch_taken_0x312c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x312c94) {
            ctx->pc = 0x312CB0u;
            goto label_312cb0;
        }
    }
    ctx->pc = 0x312C9Cu;
    // 0x312c9c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312C9Cu;
    {
        const bool branch_taken_0x312c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312c9c) {
            ctx->pc = 0x312CB0u;
            goto label_312cb0;
        }
    }
    ctx->pc = 0x312CA4u;
    // 0x312ca4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x312CA4u;
    {
        const bool branch_taken_0x312ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312ca4) {
            ctx->pc = 0x312D00u;
            goto label_312d00;
        }
    }
    ctx->pc = 0x312CACu;
    // 0x312cac: 0x0  nop
    ctx->pc = 0x312cacu;
    // NOP
label_312cb0:
    // 0x312cb0: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x312cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x312cb4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312CB4u;
    {
        const bool branch_taken_0x312cb4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CB4u;
        // 0x312cb8: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cb4) {
            ctx->pc = 0x312CC4u;
            goto label_312cc4;
        }
    }
    ctx->pc = 0x312CBCu;
    // 0x312cbc: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312cc0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312cc4:
    // 0x312cc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312cc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x312CC8u;
    {
        const bool branch_taken_0x312cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CC8u;
        // 0x312ccc: 0xa7a201a0  sh          $v0, 0x1A0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 416), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cc8) {
            ctx->pc = 0x312D00u;
            goto label_312d00;
        }
    }
    ctx->pc = 0x312CD0u;
label_312cd0:
    // 0x312cd0: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x312cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x312cd4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312CD4u;
    {
        const bool branch_taken_0x312cd4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312CD4u;
        // 0x312cd8: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cd4) {
            ctx->pc = 0x312CE4u;
            goto label_312ce4;
        }
    }
    ctx->pc = 0x312CDCu;
    // 0x312cdc: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312ce0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312ce4:
    // 0x312ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312ce8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312cec: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x312cecu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x312cf0: 0x0  nop
    ctx->pc = 0x312cf0u;
    // NOP
    // 0x312cf4: 0x0  nop
    ctx->pc = 0x312cf4u;
    // NOP
    // 0x312cf8: 0x1012  mflo        $v0
    ctx->pc = 0x312cf8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x312cfc: 0xa7a201a0  sh          $v0, 0x1A0($sp)
    ctx->pc = 0x312cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 416), (uint16_t)GPR_U32(ctx, 2));
label_312d00:
    // 0x312d00: 0x97a201a0  lhu         $v0, 0x1A0($sp)
    ctx->pc = 0x312d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x312d04: 0x3c041800  lui         $a0, 0x1800
    ctx->pc = 0x312d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6144 << 16));
    // 0x312d08: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x312d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x312d0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312d10: 0x24a5dbd0  addiu       $a1, $a1, -0x2430
    ctx->pc = 0x312d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958032));
    // 0x312d14: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x312d14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x312d18: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x312d18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x312d1c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x312d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x312d20: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x312d20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x312d24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x312d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d28: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x312d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x312d2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312d30: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x312d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x312d34: 0x0  nop
    ctx->pc = 0x312d34u;
    // NOP
label_312d38:
    // 0x312d38: 0x823026  xor         $a2, $a0, $v0
    ctx->pc = 0x312d38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x312d3c: 0x30c90002  andi        $t1, $a2, 0x2
    ctx->pc = 0x312d3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312d40: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x312d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x312d44: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x312d44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x312d48: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x312d48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x312d4c: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x312d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x312d50: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312d54: 0x884026  xor         $t0, $a0, $t0
    ctx->pc = 0x312d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 8));
    // 0x312d58: 0x30c90002  andi        $t1, $a2, 0x2
    ctx->pc = 0x312d58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312d5c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x312d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x312d60: 0x93040  sll         $a2, $t1, 1
    ctx->pc = 0x312d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x312d64: 0x1263025  or          $a2, $t1, $a2
    ctx->pc = 0x312d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x312d68: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x312d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x312d6c: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312d6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312d70: 0x790b0000  lq          $t3, 0x0($t0)
    ctx->pc = 0x312d70u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x312d74: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x312d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x312d78: 0x24890002  addiu       $t1, $a0, 0x2
    ctx->pc = 0x312d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x312d7c: 0xa65021  addu        $t2, $a1, $a2
    ctx->pc = 0x312d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x312d80: 0x24870003  addiu       $a3, $a0, 0x3
    ctx->pc = 0x312d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x312d84: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x312d84u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x312d88: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x312d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x312d8c: 0x1263026  xor         $a2, $t1, $a2
    ctx->pc = 0x312d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 6));
    // 0x312d90: 0x30cc0002  andi        $t4, $a2, 0x2
    ctx->pc = 0x312d90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312d94: 0xc4040  sll         $t0, $t4, 1
    ctx->pc = 0x312d94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x312d98: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x312d98u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x312d9c: 0x1884025  or          $t0, $t4, $t0
    ctx->pc = 0x312d9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | GPR_U64(ctx, 8));
    // 0x312da0: 0x7c6b0000  sq          $t3, 0x0($v1)
    ctx->pc = 0x312da0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 11));
    // 0x312da4: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x312da4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x312da8: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312dac: 0x79490000  lq          $t1, 0x0($t2)
    ctx->pc = 0x312dacu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x312db0: 0x30cb0002  andi        $t3, $a2, 0x2
    ctx->pc = 0x312db0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312db4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x312db4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x312db8: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x312db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x312dbc: 0x1663025  or          $a2, $t3, $a2
    ctx->pc = 0x312dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x312dc0: 0xe63826  xor         $a3, $a3, $a2
    ctx->pc = 0x312dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312dc4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x312dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x312dc8: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x312dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x312dcc: 0xa85021  addu        $t2, $a1, $t0
    ctx->pc = 0x312dccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x312dd0: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x312dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x312dd4: 0x794a0000  lq          $t2, 0x0($t2)
    ctx->pc = 0x312dd4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x312dd8: 0x83042  srl         $a2, $t0, 1
    ctx->pc = 0x312dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x312ddc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312de0: 0x1063026  xor         $a2, $t0, $a2
    ctx->pc = 0x312de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x312de4: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x312de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x312de8: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x312de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312dec: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x312decu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x312df0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x312df0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x312df4: 0x1064026  xor         $t0, $t0, $a2
    ctx->pc = 0x312df4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 6));
    // 0x312df8: 0x24870005  addiu       $a3, $a0, 0x5
    ctx->pc = 0x312df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x312dfc: 0x7c6a0000  sq          $t2, 0x0($v1)
    ctx->pc = 0x312dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 10));
    // 0x312e00: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x312e00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x312e04: 0x792c0000  lq          $t4, 0x0($t1)
    ctx->pc = 0x312e04u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x312e08: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x312e08u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x312e0c: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312e10: 0xa85821  addu        $t3, $a1, $t0
    ctx->pc = 0x312e10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x312e14: 0x30c80002  andi        $t0, $a2, 0x2
    ctx->pc = 0x312e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312e18: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x312e18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x312e1c: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x312e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x312e20: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312e20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312e24: 0x63900  sll         $a3, $a2, 4
    ctx->pc = 0x312e24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x312e28: 0x24890006  addiu       $t1, $a0, 0x6
    ctx->pc = 0x312e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x312e2c: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x312e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x312e30: 0x7c6c0010  sq          $t4, 0x10($v1)
    ctx->pc = 0x312e30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 12));
    // 0x312e34: 0x1263026  xor         $a2, $t1, $a2
    ctx->pc = 0x312e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 6));
    // 0x312e38: 0xa75021  addu        $t2, $a1, $a3
    ctx->pc = 0x312e38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x312e3c: 0x30cd0002  andi        $t5, $a2, 0x2
    ctx->pc = 0x312e3cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312e40: 0x24870007  addiu       $a3, $a0, 0x7
    ctx->pc = 0x312e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x312e44: 0xd4040  sll         $t0, $t5, 1
    ctx->pc = 0x312e44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x312e48: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x312e48u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x312e4c: 0x1a84025  or          $t0, $t5, $t0
    ctx->pc = 0x312e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x312e50: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312e54: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x312e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x312e58: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312e5c: 0x79690000  lq          $t1, 0x0($t3)
    ctx->pc = 0x312e5cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x312e60: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x312e60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x312e64: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x312e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x312e68: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x312e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x312e6c: 0x7c690000  sq          $t1, 0x0($v1)
    ctx->pc = 0x312e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 9));
    // 0x312e70: 0x30cb0002  andi        $t3, $a2, 0x2
    ctx->pc = 0x312e70u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x312e74: 0x79490000  lq          $t1, 0x0($t2)
    ctx->pc = 0x312e74u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x312e78: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x312e78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x312e7c: 0x1663025  or          $a2, $t3, $a2
    ctx->pc = 0x312e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x312e80: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x312e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x312e84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x312e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x312e88: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x312e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x312e8c: 0x2c860040  sltiu       $a2, $a0, 0x40
    ctx->pc = 0x312e8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x312e90: 0x7c690010  sq          $t1, 0x10($v1)
    ctx->pc = 0x312e90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 9));
    // 0x312e94: 0x79080000  lq          $t0, 0x0($t0)
    ctx->pc = 0x312e94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x312e98: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312e9c: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x312e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x312ea0: 0x78e70000  lq          $a3, 0x0($a3)
    ctx->pc = 0x312ea0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312ea4: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x312ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x312ea8: 0x14c0ffa3  bnez        $a2, . + 4 + (-0x5D << 2)
    ctx->pc = 0x312EA8u;
    {
        const bool branch_taken_0x312ea8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x312EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EA8u;
        // 0x312eac: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ea8) {
            ctx->pc = 0x312D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312d38;
        }
    }
    ctx->pc = 0x312EB0u;
    // 0x312eb0: 0x8f868b30  lw          $a2, -0x74D0($gp)
    ctx->pc = 0x312eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x312eb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x312eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312eb8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x312eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x312ebc: 0x42f02  srl         $a1, $a0, 28
    ctx->pc = 0x312ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 28));
    // 0x312ec0: 0x42682  srl         $a0, $a0, 26
    ctx->pc = 0x312ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 26));
    // 0x312ec4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x312ec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x312ec8: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x312EC8u;
    {
        const bool branch_taken_0x312ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x312ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EC8u;
        // 0x312ecc: 0x30a5000f  andi        $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ec8) {
            ctx->pc = 0x312F10u;
            goto label_312f10;
        }
    }
    ctx->pc = 0x312ED0u;
    // 0x312ed0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x312ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x312ed4: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x312ED4u;
    {
        const bool branch_taken_0x312ed4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x312ed4) {
            ctx->pc = 0x312EF0u;
            goto label_312ef0;
        }
    }
    ctx->pc = 0x312EDCu;
    // 0x312edc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312EDCu;
    {
        const bool branch_taken_0x312edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312edc) {
            ctx->pc = 0x312EF0u;
            goto label_312ef0;
        }
    }
    ctx->pc = 0x312EE4u;
    // 0x312ee4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x312EE4u;
    {
        const bool branch_taken_0x312ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312ee4) {
            ctx->pc = 0x312F40u;
            goto label_312f40;
        }
    }
    ctx->pc = 0x312EECu;
    // 0x312eec: 0x0  nop
    ctx->pc = 0x312eecu;
    // NOP
label_312ef0:
    // 0x312ef0: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x312ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x312ef4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312EF4u;
    {
        const bool branch_taken_0x312ef4 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EF4u;
        // 0x312ef8: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ef4) {
            ctx->pc = 0x312F04u;
            goto label_312f04;
        }
    }
    ctx->pc = 0x312EFCu;
    // 0x312efc: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312f00: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312f00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312f04:
    // 0x312f04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312f08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x312F08u;
    {
        const bool branch_taken_0x312f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F08u;
        // 0x312f0c: 0xa7a20190  sh          $v0, 0x190($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f08) {
            ctx->pc = 0x312F40u;
            goto label_312f40;
        }
    }
    ctx->pc = 0x312F10u;
label_312f10:
    // 0x312f10: 0x662023  subu        $a0, $v1, $a2
    ctx->pc = 0x312f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x312f14: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312F14u;
    {
        const bool branch_taken_0x312f14 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x312F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F14u;
        // 0x312f18: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f14) {
            ctx->pc = 0x312F24u;
            goto label_312f24;
        }
    }
    ctx->pc = 0x312F1Cu;
    // 0x312f1c: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x312f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x312f20: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x312f20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_312f24:
    // 0x312f24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x312f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x312f28: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x312f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x312f2c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x312f2cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x312f30: 0x0  nop
    ctx->pc = 0x312f30u;
    // NOP
    // 0x312f34: 0x0  nop
    ctx->pc = 0x312f34u;
    // NOP
    // 0x312f38: 0x1012  mflo        $v0
    ctx->pc = 0x312f38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x312f3c: 0xa7a20190  sh          $v0, 0x190($sp)
    ctx->pc = 0x312f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 400), (uint16_t)GPR_U32(ctx, 2));
label_312f40:
    // 0x312f40: 0x97a20190  lhu         $v0, 0x190($sp)
    ctx->pc = 0x312f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x312f44: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x312f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x312f48: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x312f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x312f4c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x312f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x312f50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x312f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312f54: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x312f54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x312f58: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x312f58u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x312f5c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x312f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x312f60: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x312f60u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x312f64: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x312f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x312f68: 0xaf838b30  sw          $v1, -0x74D0($gp)
    ctx->pc = 0x312f68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 3));
    // 0x312f6c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x312f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x312f70: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x312f70u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x312f74: 0x34461001  ori         $a2, $v0, 0x1001
    ctx->pc = 0x312f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x312f78: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x312f78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x312f7c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x312f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x312f80: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312f84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x312f88: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x312f88u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x312f8c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x312f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x312f90: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x312f90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x312f94: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x312f94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312f98: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x312f98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x312f9c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x312f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x312fa0: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x312fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x312fa4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x312fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x312fa8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x312fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x312fac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x312facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x312fb0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x312fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x312fb4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x312fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x312fb8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x312fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x312fbc: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x312FBCu;
    SET_GPR_U32(ctx, 31, 0x312FC4u);
    ctx->pc = 0x312FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FBCu;
    // 0x312fc0: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x312FBCu, 0x312FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FC4u;
label_312fc4:
    // 0x312fc4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x312fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312fc8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312fcc: 0x3c020134  lui         $v0, 0x134
    ctx->pc = 0x312fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)308 << 16));
    // 0x312fd0: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x312fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x312fd4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x312fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x312fd8: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x312fd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x312fdc: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x312FDCu;
    SET_GPR_U32(ctx, 31, 0x312FE4u);
    ctx->pc = 0x312FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312FDCu;
    // 0x312fe0: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x312FDCu, 0x312FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312FE4u;
label_312fe4:
    // 0x312fe4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x312fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312fe8: 0x24060116  addiu       $a2, $zero, 0x116
    ctx->pc = 0x312fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x312fec: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x312fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x312ff0: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x312ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x312ff4: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x312ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x312ff8: 0x3442a58c  ori         $v0, $v0, 0xA58C
    ctx->pc = 0x312ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42380);
    // 0x312ffc: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x312ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x313000: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x313000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313004: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x313004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x313008: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31300c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313010: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x313010u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x313014: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x313014u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x313018: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31301c: 0x3c0200df  lui         $v0, 0xDF
    ctx->pc = 0x31301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)223 << 16));
    // 0x313020: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x313020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313024: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x313024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x313028: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x313028u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x31302c: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x31302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x313030: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x313030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313034: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x313034u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x313038: 0xfc600018  sd          $zero, 0x18($v1)
    ctx->pc = 0x313038u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 0));
    // 0x31303c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313040: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x313044: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x313044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313048: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x313048u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x31304c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31304cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x313050: 0x3402fd02  ori         $v0, $zero, 0xFD02
    ctx->pc = 0x313050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64770);
    // 0x313054: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x313054u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x313058: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x313058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31305c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313060: 0x34443f7f  ori         $a0, $v0, 0x3F7F
    ctx->pc = 0x313060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16255);
    // 0x313064: 0x863025  or          $a2, $a0, $a2
    ctx->pc = 0x313064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x313068: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x313068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x31306c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313070: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x313070u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x313074: 0x24027000  addiu       $v0, $zero, 0x7000
    ctx->pc = 0x313074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x313078: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x313078u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x31307c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x31307cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x313080: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x313084: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x313084u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x313088: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x313088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31308c: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x31308cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x313090: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313094: 0x8f828b30  lw          $v0, -0x74D0($gp)
    ctx->pc = 0x313094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x313098: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x313098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x31309c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x31309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3130a0: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x3130a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x3130a4: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x3130a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x3130a8: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x3130a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x3130ac: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3130ACu;
    {
        const bool branch_taken_0x3130ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130ACu;
        // 0x3130b0: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130ac) {
            ctx->pc = 0x3130F0u;
            goto label_3130f0;
        }
    }
    ctx->pc = 0x3130B4u;
    // 0x3130b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3130b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3130b8: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3130B8u;
    {
        const bool branch_taken_0x3130b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3130b8) {
            ctx->pc = 0x3130D0u;
            goto label_3130d0;
        }
    }
    ctx->pc = 0x3130C0u;
    // 0x3130c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3130C0u;
    {
        const bool branch_taken_0x3130c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130c0) {
            ctx->pc = 0x3130D0u;
            goto label_3130d0;
        }
    }
    ctx->pc = 0x3130C8u;
    // 0x3130c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3130C8u;
    {
        const bool branch_taken_0x3130c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3130c8) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x3130D0u;
label_3130d0:
    // 0x3130d0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3130d4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3130D4u;
    {
        const bool branch_taken_0x3130d4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130D4u;
        // 0x3130d8: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130d4) {
            ctx->pc = 0x3130E4u;
            goto label_3130e4;
        }
    }
    ctx->pc = 0x3130DCu;
    // 0x3130dc: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x3130dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3130e0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3130e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_3130e4:
    // 0x3130e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3130e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3130e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3130E8u;
    {
        const bool branch_taken_0x3130e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3130ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130E8u;
        // 0x3130ec: 0xa7a40180  sh          $a0, 0x180($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 384), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130e8) {
            ctx->pc = 0x313120u;
            goto label_313120;
        }
    }
    ctx->pc = 0x3130F0u;
label_3130f0:
    // 0x3130f0: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3130f4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3130F4u;
    {
        const bool branch_taken_0x3130f4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3130F4u;
        // 0x3130f8: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3130f4) {
            ctx->pc = 0x313104u;
            goto label_313104;
        }
    }
    ctx->pc = 0x3130FCu;
    // 0x3130fc: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x3130fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313100: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313100u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313104:
    // 0x313104: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313108: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x313108u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31310c: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x31310cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x313110: 0x0  nop
    ctx->pc = 0x313110u;
    // NOP
    // 0x313114: 0x0  nop
    ctx->pc = 0x313114u;
    // NOP
    // 0x313118: 0x2012  mflo        $a0
    ctx->pc = 0x313118u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x31311c: 0xa7a40180  sh          $a0, 0x180($sp)
    ctx->pc = 0x31311cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 384), (uint16_t)GPR_U32(ctx, 4));
label_313120:
    // 0x313120: 0x97a40180  lhu         $a0, 0x180($sp)
    ctx->pc = 0x313120u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x313124: 0x80202d  daddu       $a0, $a0, $zero
    ctx->pc = 0x313124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313128: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x313128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x31312c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x31312cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x313130: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x313134: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x313134u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313138: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313138u;
    {
        const bool branch_taken_0x313138 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x31313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313138u;
        // 0x31313c: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313138) {
            ctx->pc = 0x313148u;
            goto label_313148;
        }
    }
    ctx->pc = 0x313140u;
    // 0x313140: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x313140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x313144: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x313144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_313148:
    // 0x313148: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x313148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31314c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31314cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x313150: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x313150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x313154: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x313154u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x313158: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x313158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31315c: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x31315cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313160: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313160u;
    {
        const bool branch_taken_0x313160 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x313164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313160u;
        // 0x313164: 0x41103  sra         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313160) {
            ctx->pc = 0x313170u;
            goto label_313170;
        }
    }
    ctx->pc = 0x313168u;
    // 0x313168: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x31316c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x31316cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_313170:
    // 0x313170: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313178: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x313178u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x31317c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31317cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313184: 0x0  nop
    ctx->pc = 0x313184u;
    // NOP
label_313188:
    // 0x313188: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x313188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31318c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x31318cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x313190: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x313190u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313194: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x313194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x313198: 0x24e20080  addiu       $v0, $a3, 0x80
    ctx->pc = 0x313198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x31319c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x31319cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3131a0: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3131a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3131a4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3131a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3131a8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3131a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3131ac: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x3131acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x3131b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3131b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3131b4: 0x601821  addu        $v1, $v1, $zero
    ctx->pc = 0x3131b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x3131b8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3131b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3131bc: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x3131bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x3131c0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3131c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3131c4: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x3131c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x3131c8: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x3131c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3131cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3131ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3131d0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3131d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3131d4: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x3131d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3131d8: 0xfc6a0018  sd          $t2, 0x18($v1)
    ctx->pc = 0x3131d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 10));
    // 0x3131dc: 0xaf898b30  sw          $t1, -0x74D0($gp)
    ctx->pc = 0x3131dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 9));
    // 0x3131e0: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x3131e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3131e4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3131e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3131e8: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x3131e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3131ec: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3131ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x3131f0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x3131f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3131f4: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3131F4u;
    SET_GPR_U32(ctx, 31, 0x3131FCu);
    ctx->pc = 0x3131F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3131F4u;
    // 0x3131f8: 0xfc620008  sd          $v0, 0x8($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3131F4u, 0x3131FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3131FCu;
label_3131fc:
    // 0x3131fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3131fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x313200: 0x24c21000  addiu       $v0, $a2, 0x1000
    ctx->pc = 0x313200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4096));
    // 0x313204: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x313204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x313208: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x313208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31320c: 0x44eb8  dsll        $t1, $a0, 26
    ctx->pc = 0x31320cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << 26);
    // 0x313210: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x313210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x313214: 0x3c020134  lui         $v0, 0x134
    ctx->pc = 0x313214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)308 << 16));
    // 0x313218: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x31321c: 0x240401c0  addiu       $a0, $zero, 0x1C0
    ctx->pc = 0x31321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x313220: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x313220u;
    SET_GPR_U32(ctx, 31, 0x313228u);
    ctx->pc = 0x313224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313220u;
    // 0x313224: 0x494825  or          $t1, $v0, $t1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x313220u, 0x313228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313228u;
label_313228:
    // 0x313228: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x313228u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31322c: 0x3c042003  lui         $a0, 0x2003
    ctx->pc = 0x31322cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8195 << 16));
    // 0x313230: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x313230u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x313234: 0x3484a58c  ori         $a0, $a0, 0xA58C
    ctx->pc = 0x313234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)42380);
    // 0x313238: 0x847b8  dsll        $t0, $t0, 30
    ctx->pc = 0x313238u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 30);
    // 0x31323c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313240: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x313240u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x313244: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x313244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x313248: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x313248u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x31324c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x31324cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313250: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x313250u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x313254: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x313254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313258: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x313258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31325c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x313260: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x313260u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x313264: 0x95702  srl         $t2, $t1, 28
    ctx->pc = 0x313264u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 28));
    // 0x313268: 0x94e82  srl         $t1, $t1, 26
    ctx->pc = 0x313268u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
    // 0x31326c: 0x31290003  andi        $t1, $t1, 0x3
    ctx->pc = 0x31326cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
    // 0x313270: 0x11280011  beq         $t1, $t0, . + 4 + (0x11 << 2)
    ctx->pc = 0x313270u;
    {
        const bool branch_taken_0x313270 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        ctx->pc = 0x313274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313270u;
        // 0x313274: 0x314a000f  andi        $t2, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313270) {
            ctx->pc = 0x3132B8u;
            goto label_3132b8;
        }
    }
    ctx->pc = 0x313278u;
    // 0x313278: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x313278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31327c: 0x11280006  beq         $t1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31327Cu;
    {
        const bool branch_taken_0x31327c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x31327c) {
            ctx->pc = 0x313298u;
            goto label_313298;
        }
    }
    ctx->pc = 0x313284u;
    // 0x313284: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x313284u;
    {
        const bool branch_taken_0x313284 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x313284) {
            ctx->pc = 0x313298u;
            goto label_313298;
        }
    }
    ctx->pc = 0x31328Cu;
    // 0x31328c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31328Cu;
    {
        const bool branch_taken_0x31328c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31328c) {
            ctx->pc = 0x3132E8u;
            goto label_3132e8;
        }
    }
    ctx->pc = 0x313294u;
    // 0x313294: 0x0  nop
    ctx->pc = 0x313294u;
    // NOP
label_313298:
    // 0x313298: 0x644823  subu        $t1, $v1, $a0
    ctx->pc = 0x313298u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31329c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31329Cu;
    {
        const bool branch_taken_0x31329c = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x3132A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31329Cu;
        // 0x3132a0: 0x94103  sra         $t0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31329c) {
            ctx->pc = 0x3132ACu;
            goto label_3132ac;
        }
    }
    ctx->pc = 0x3132A4u;
    // 0x3132a4: 0x2528000f  addiu       $t0, $t1, 0xF
    ctx->pc = 0x3132a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x3132a8: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x3132a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
label_3132ac:
    // 0x3132ac: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3132acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3132b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3132B0u;
    {
        const bool branch_taken_0x3132b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3132B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132B0u;
        // 0x3132b4: 0x3110ffff  andi        $s0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132b0) {
            ctx->pc = 0x3132E8u;
            goto label_3132e8;
        }
    }
    ctx->pc = 0x3132B8u;
label_3132b8:
    // 0x3132b8: 0x644823  subu        $t1, $v1, $a0
    ctx->pc = 0x3132b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3132bc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3132BCu;
    {
        const bool branch_taken_0x3132bc = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x3132C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132BCu;
        // 0x3132c0: 0x94103  sra         $t0, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132bc) {
            ctx->pc = 0x3132CCu;
            goto label_3132cc;
        }
    }
    ctx->pc = 0x3132C4u;
    // 0x3132c4: 0x2528000f  addiu       $t0, $t1, 0xF
    ctx->pc = 0x3132c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x3132c8: 0x84103  sra         $t0, $t0, 4
    ctx->pc = 0x3132c8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 4));
label_3132cc:
    // 0x3132cc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3132ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3132d0: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3132d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3132d4: 0x10a001b  divu        $zero, $t0, $t2
    ctx->pc = 0x3132d4u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x3132d8: 0x0  nop
    ctx->pc = 0x3132d8u;
    // NOP
    // 0x3132dc: 0x0  nop
    ctx->pc = 0x3132dcu;
    // NOP
    // 0x3132e0: 0x4012  mflo        $t0
    ctx->pc = 0x3132e0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x3132e4: 0x3110ffff  andi        $s0, $t0, 0xFFFF
    ctx->pc = 0x3132e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_3132e8:
    // 0x3132e8: 0x3208ffff  andi        $t0, $s0, 0xFFFF
    ctx->pc = 0x3132e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3132ec: 0x35088000  ori         $t0, $t0, 0x8000
    ctx->pc = 0x3132ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32768);
    // 0x3132f0: 0xa4880000  sh          $t0, 0x0($a0)
    ctx->pc = 0x3132f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x3132f4: 0x8f898b2c  lw          $t1, -0x74D4($gp)
    ctx->pc = 0x3132f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3132f8: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x3132f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3132fc: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3132FCu;
    {
        const bool branch_taken_0x3132fc = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x313300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3132FCu;
        // 0x313300: 0x82103  sra         $a0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3132fc) {
            ctx->pc = 0x31330Cu;
            goto label_31330c;
        }
    }
    ctx->pc = 0x313304u;
    // 0x313304: 0x2504000f  addiu       $a0, $t0, 0xF
    ctx->pc = 0x313304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x313308: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313308u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_31330c:
    // 0x31330c: 0x2488ffff  addiu       $t0, $a0, -0x1
    ctx->pc = 0x31330cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313310: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x313310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x313314: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x313314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x313318: 0xad24000c  sw          $a0, 0xC($t1)
    ctx->pc = 0x313318u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 4));
    // 0x31331c: 0x8f8a8b28  lw          $t2, -0x74D8($gp)
    ctx->pc = 0x31331cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x313320: 0x6a4023  subu        $t0, $v1, $t2
    ctx->pc = 0x313320u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x313324: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313324u;
    {
        const bool branch_taken_0x313324 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x313328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313324u;
        // 0x313328: 0x82103  sra         $a0, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313324) {
            ctx->pc = 0x313334u;
            goto label_313334;
        }
    }
    ctx->pc = 0x31332Cu;
    // 0x31332c: 0x2504000f  addiu       $a0, $t0, 0xF
    ctx->pc = 0x31332cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x313330: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313330u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313334:
    // 0x313334: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313338: 0x3c093000  lui         $t1, 0x3000
    ctx->pc = 0x313338u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)12288 << 16));
    // 0x31333c: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x31333cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x313340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x313340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x313344: 0x8f8a8b18  lw          $t2, -0x74E8($gp)
    ctx->pc = 0x313344u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937368)));
    // 0x313348: 0x3c085000  lui         $t0, 0x5000
    ctx->pc = 0x313348u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20480 << 16));
    // 0x31334c: 0x2ca40038  sltiu       $a0, $a1, 0x38
    ctx->pc = 0x31334cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)56) ? 1 : 0);
    // 0x313350: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x313350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x313354: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x313354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x313358: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x313358u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x31335c: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x31335cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x313360: 0x8f898b14  lw          $t1, -0x74EC($gp)
    ctx->pc = 0x313360u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937364)));
    // 0x313364: 0xac690004  sw          $t1, 0x4($v1)
    ctx->pc = 0x313364u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 9));
    // 0x313368: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x313368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x31336c: 0x8f898b18  lw          $t1, -0x74E8($gp)
    ctx->pc = 0x31336cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937368)));
    // 0x313370: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x313370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x313374: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x313374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x313378: 0x1480ff83  bnez        $a0, . + 4 + (-0x7D << 2)
    ctx->pc = 0x313378u;
    {
        const bool branch_taken_0x313378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313378u;
        // 0x31337c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313378) {
            ctx->pc = 0x313188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313188;
        }
    }
    ctx->pc = 0x313380u;
    // 0x313380: 0x3c056000  lui         $a1, 0x6000
    ctx->pc = 0x313380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24576 << 16));
    // 0x313384: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x313384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x313388: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x313388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x31338c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31338cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313390: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x313390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x313394: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x313394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x313398: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x313398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x31339c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3133a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3133a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3133a4: 0x348717fd  ori         $a3, $a0, 0x17FD
    ctx->pc = 0x3133a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6141);
    // 0x3133a8: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x3133a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x3133ac: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x3133acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3133b0: 0x601821  addu        $v1, $v1, $zero
    ctx->pc = 0x3133b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
    // 0x3133b4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3133b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x3133b8: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x3133b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x3133bc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3133bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3133c0: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x3133c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x3133c4: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3133c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3133c8: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x3133c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x3133cc: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x3133ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3133d0: 0xaf848b30  sw          $a0, -0x74D0($gp)
    ctx->pc = 0x3133d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 4));
    // 0x3133d4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3133d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3133d8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x3133d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x3133dc: 0x240b004c  addiu       $t3, $zero, 0x4C
    ctx->pc = 0x3133dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3133e0: 0xfc680008  sd          $t0, 0x8($v1)
    ctx->pc = 0x3133e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 8));
    // 0x3133e4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x3133e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3133e8: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x3133e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x3133ec: 0x24090061  addiu       $t1, $zero, 0x61
    ctx->pc = 0x3133ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3133f0: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x3133f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x3133f4: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x3133f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
    // 0x3133f8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3133f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3133fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x3133fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313400: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x313400u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x313404: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x313408: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x313408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x31340c: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x31340cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x313410: 0x8c2cf014  lw          $t4, -0xFEC($at)
    ctx->pc = 0x313410u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x313414: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x313414u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x313418: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x313418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31341c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x31341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x313420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313424: 0xdd8c0020  ld          $t4, 0x20($t4)
    ctx->pc = 0x313424u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x313428: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x313428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31342c: 0xfc6c0010  sd          $t4, 0x10($v1)
    ctx->pc = 0x31342cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 12));
    // 0x313430: 0xfc6b0018  sd          $t3, 0x18($v1)
    ctx->pc = 0x313430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 11));
    // 0x313434: 0x8c2bf014  lw          $t3, -0xFEC($at)
    ctx->pc = 0x313434u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x81F014u));
    // 0x313438: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31343c: 0xdd6b0040  ld          $t3, 0x40($t3)
    ctx->pc = 0x31343cu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x313440: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x313440u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x313444: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x313444u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x313448: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x313448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x31344c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x31344cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x313450: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x313454: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x313454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x313458: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x313458u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x31345c: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x31345cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x313460: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x313460u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x313464: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x313464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x313468: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x313468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31346c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x31346cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x313470: 0x63f02  srl         $a3, $a2, 28
    ctx->pc = 0x313470u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x313474: 0x63682  srl         $a2, $a2, 26
    ctx->pc = 0x313474u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 26));
    // 0x313478: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x313478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x31347c: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x31347Cu;
    {
        const bool branch_taken_0x31347c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x313480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31347Cu;
        // 0x313480: 0x30e7000f  andi        $a3, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31347c) {
            ctx->pc = 0x3134C0u;
            goto label_3134c0;
        }
    }
    ctx->pc = 0x313484u;
    // 0x313484: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x313484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313488: 0x10c50005  beq         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x313488u;
    {
        const bool branch_taken_0x313488 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x313488) {
            ctx->pc = 0x3134A0u;
            goto label_3134a0;
        }
    }
    ctx->pc = 0x313490u;
    // 0x313490: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x313490u;
    {
        const bool branch_taken_0x313490 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x313490) {
            ctx->pc = 0x3134A0u;
            goto label_3134a0;
        }
    }
    ctx->pc = 0x313498u;
    // 0x313498: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x313498u;
    {
        const bool branch_taken_0x313498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313498) {
            ctx->pc = 0x3134F0u;
            goto label_3134f0;
        }
    }
    ctx->pc = 0x3134A0u;
label_3134a0:
    // 0x3134a0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3134a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3134a4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3134A4u;
    {
        const bool branch_taken_0x3134a4 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3134A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134A4u;
        // 0x3134a8: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134a4) {
            ctx->pc = 0x3134B4u;
            goto label_3134b4;
        }
    }
    ctx->pc = 0x3134ACu;
    // 0x3134ac: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x3134acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x3134b0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x3134b0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_3134b4:
    // 0x3134b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3134b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3134b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3134B8u;
    {
        const bool branch_taken_0x3134b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3134BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134B8u;
        // 0x3134bc: 0xa7a50170  sh          $a1, 0x170($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 368), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134b8) {
            ctx->pc = 0x3134F0u;
            goto label_3134f0;
        }
    }
    ctx->pc = 0x3134C0u;
label_3134c0:
    // 0x3134c0: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3134c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3134c4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3134C4u;
    {
        const bool branch_taken_0x3134c4 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3134C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3134C4u;
        // 0x3134c8: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3134c4) {
            ctx->pc = 0x3134D4u;
            goto label_3134d4;
        }
    }
    ctx->pc = 0x3134CCu;
    // 0x3134cc: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x3134ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x3134d0: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x3134d0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_3134d4:
    // 0x3134d4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3134d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3134d8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3134d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3134dc: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x3134dcu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3134e0: 0x0  nop
    ctx->pc = 0x3134e0u;
    // NOP
    // 0x3134e4: 0x0  nop
    ctx->pc = 0x3134e4u;
    // NOP
    // 0x3134e8: 0x2812  mflo        $a1
    ctx->pc = 0x3134e8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3134ec: 0xa7a50170  sh          $a1, 0x170($sp)
    ctx->pc = 0x3134ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 368), (uint16_t)GPR_U32(ctx, 5));
label_3134f0:
    // 0x3134f0: 0x97a50170  lhu         $a1, 0x170($sp)
    ctx->pc = 0x3134f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3134f4: 0xa0282d  daddu       $a1, $a1, $zero
    ctx->pc = 0x3134f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3134f8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x3134f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x3134fc: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x3134fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x313500: 0x8f868b2c  lw          $a2, -0x74D4($gp)
    ctx->pc = 0x313500u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x313504: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x313504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x313508: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313508u;
    {
        const bool branch_taken_0x313508 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x31350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313508u;
        // 0x31350c: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313508) {
            ctx->pc = 0x313518u;
            goto label_313518;
        }
    }
    ctx->pc = 0x313510u;
    // 0x313510: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313514: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313514u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313518:
    // 0x313518: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x313518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31351c: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x31351cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x313520: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x313520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x313524: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x313524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x313528: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x313528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x31352c: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x31352cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x313530: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313530u;
    {
        const bool branch_taken_0x313530 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x313534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313530u;
        // 0x313534: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313530) {
            ctx->pc = 0x313540u;
            goto label_313540;
        }
    }
    ctx->pc = 0x313538u;
    // 0x313538: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x313538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x31353c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x31353cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_313540:
    // 0x313540: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x313540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x313544: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x313544u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313548: 0x1000054d  b           . + 4 + (0x54D << 2)
    ctx->pc = 0x313548u;
    {
        const bool branch_taken_0x313548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313548u;
        // 0x31354c: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313548) {
            ctx->pc = 0x314A80u;
            goto label_314a80;
        }
    }
    ctx->pc = 0x313550u;
label_313550:
    // 0x313550: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x313550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x313554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x313554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313558: 0x94540000  lhu         $s4, 0x0($v0)
    ctx->pc = 0x313558u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31355c: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x31355cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x313560: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x313560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x313564: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x313564u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x313568: 0x24420056  addiu       $v0, $v0, 0x56
    ctx->pc = 0x313568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 86));
    // 0x31356c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31356cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x313570: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x313570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x313574: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x313574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x313578: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x313578u;
    SET_GPR_U32(ctx, 31, 0x313580u);
    ctx->pc = 0x31357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313578u;
    // 0x31357c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x313578u, 0x313580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313580u;
label_313580:
    // 0x313580: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x313580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x313584: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x313584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x313588: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x313588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x31358c: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x31358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x313590: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x313590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x313594: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x313594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x313598: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x31359c: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x31359cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3135a0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3135a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3135a4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3135a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3135a8: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x3135a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
    // 0x3135ac: 0x24060061  addiu       $a2, $zero, 0x61
    ctx->pc = 0x3135acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3135b0: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x3135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x3135b4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3135b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3135b8: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x3135b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x3135bc: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x3135bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3135c0: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x3135c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x3135c4: 0x240c004f  addiu       $t4, $zero, 0x4F
    ctx->pc = 0x3135c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3135c8: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x3135c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x3135cc: 0x144042  srl         $t0, $s4, 1
    ctx->pc = 0x3135ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x3135d0: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x3135d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3135d4: 0xaf878b30  sw          $a3, -0x74D0($gp)
    ctx->pc = 0x3135d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 7));
    // 0x3135d8: 0x688023  subu        $s0, $v1, $t0
    ctx->pc = 0x3135d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x3135dc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3135dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3135e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3135e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3135e4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x3135e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x3135e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3135e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3135ec: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x3135ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x3135f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3135f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3135f4: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x3135f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x3135f8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3135f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3135fc: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x3135fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x313600: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x313600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313604: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x313604u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x313608: 0xffa400e0  sd          $a0, 0xE0($sp)
    ctx->pc = 0x313608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 4));
    // 0x31360c: 0x240a0048  addiu       $t2, $zero, 0x48
    ctx->pc = 0x31360cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x313610: 0x142182  srl         $a0, $s4, 6
    ctx->pc = 0x313610u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), 6));
    // 0x313614: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x313614u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x313618: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x313618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31361c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313620: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x313620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x313624: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x313624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x313628: 0xffa400a0  sd          $a0, 0xA0($sp)
    ctx->pc = 0x313628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 4));
    // 0x31362c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x31362cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313630: 0xdfa400e0  ld          $a0, 0xE0($sp)
    ctx->pc = 0x313630u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x313634: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x313634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x313638: 0x2407001b  addiu       $a3, $zero, 0x1B
    ctx->pc = 0x313638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x31363c: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x31363cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x313640: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313640u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313644: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x313644u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x313648: 0xdfa400a0  ld          $a0, 0xA0($sp)
    ctx->pc = 0x313648u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31364c: 0x2942818  mult        $a1, $s4, $s4
    ctx->pc = 0x31364cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x313650: 0x52ac2  srl         $a1, $a1, 11
    ctx->pc = 0x313650u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 11));
    // 0x313654: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x313654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x313658: 0x4ac38  dsll        $s5, $a0, 16
    ctx->pc = 0x313658u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) << 16);
    // 0x31365c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x31365cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x313660: 0x36a40084  ori         $a0, $s5, 0x84
    ctx->pc = 0x313660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)132);
    // 0x313664: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x313664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x313668: 0xffa400d0  sd          $a0, 0xD0($sp)
    ctx->pc = 0x313668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 4));
    // 0x31366c: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x31366cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313670: 0x3c043a00  lui         $a0, 0x3A00
    ctx->pc = 0x313670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14848 << 16));
    // 0x313674: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x313674u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x313678: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x313678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31367c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313680: 0xffa400c0  sd          $a0, 0xC0($sp)
    ctx->pc = 0x313680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 4));
    // 0x313684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x313684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313688: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313688u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x31368c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31368cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313690: 0xfc4c0008  sd          $t4, 0x8($v0)
    ctx->pc = 0x313690u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 12));
    // 0x313694: 0xfc4b0010  sd          $t3, 0x10($v0)
    ctx->pc = 0x313694u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 11));
    // 0x313698: 0xfc4a0018  sd          $t2, 0x18($v0)
    ctx->pc = 0x313698u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 10));
    // 0x31369c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3136a0: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x3136a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x3136a4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x3136a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x3136a8: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x3136a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x3136ac: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x3136acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x3136b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3136b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3136b4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x3136b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x3136b8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3136b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3136bc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x3136BCu;
    {
        const bool branch_taken_0x3136bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3136C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3136BCu;
        // 0x3136c0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3136bc) {
            ctx->pc = 0x313750u;
            goto label_313750;
        }
    }
    ctx->pc = 0x3136C4u;
    // 0x3136c4: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x3136c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x3136c8: 0x2685ffff  addiu       $a1, $s4, -0x1
    ctx->pc = 0x3136c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3136cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x3136ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3136d0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3136d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3136d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3136d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3136d8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x3136d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3136dc: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x3136dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x3136e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3136e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3136e4: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x3136e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3136e8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x3136e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3136ec: 0x71c38  dsll        $v1, $a3, 16
    ctx->pc = 0x3136ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << 16);
    // 0x3136f0: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3136f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3136f4: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x3136f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3136f8: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x3136f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3136fc: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x3136fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_313700:
    // 0x313700: 0x24c7001f  addiu       $a3, $a2, 0x1F
    ctx->pc = 0x313700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x313704: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x313704u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x313708: 0x6383c  dsll32      $a3, $a2, 0
    ctx->pc = 0x313708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 0));
    // 0x31370c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x31370cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x313710: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x313710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x313714: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x313714u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x313718: 0xeb5825  or          $t3, $a3, $t3
    ctx->pc = 0x313718u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x31371c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31371cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x313720: 0xab5825  or          $t3, $a1, $t3
    ctx->pc = 0x313720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x313724: 0xd4382b  sltu        $a3, $a2, $s4
    ctx->pc = 0x313724u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x313728: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x313728u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x31372c: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x31372cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x313730: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313730u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313734: 0xfc490018  sd          $t1, 0x18($v0)
    ctx->pc = 0x313734u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 9));
    // 0x313738: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x31373c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x31373cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x313740: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x313740u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x313744: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x313744u;
    {
        const bool branch_taken_0x313744 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x313748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313744u;
        // 0x313748: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313744) {
            ctx->pc = 0x313700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313700;
        }
    }
    ctx->pc = 0x31374Cu;
    // 0x31374c: 0x0  nop
    ctx->pc = 0x31374cu;
    // NOP
label_313750:
    // 0x313750: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x313750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x313754: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313758: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x313758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x31375c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x31375cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x313760: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x313760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313764: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313764u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313768: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x313768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x31376c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x31376cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313770: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x313770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x313774: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313774u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313778: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x313778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x31377c: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x31377cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313780: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x313780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x313784: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313788: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x313788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x31378c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x31378cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313790: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x313790u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313794: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x313794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x313798: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x313798u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x31379c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x31379cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3137a0: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x3137a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x3137a4: 0x34631d2c  ori         $v1, $v1, 0x1D2C
    ctx->pc = 0x3137a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7468);
    // 0x3137a8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3137a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3137ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3137acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3137b0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3137b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x3137b4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3137b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3137b8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x3137b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x3137bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3137c0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x3137c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3137c4: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x3137c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x3137c8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3137c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3137cc: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x3137ccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x3137d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3137d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3137d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3137d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3137d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3137dc: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x3137dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3137e0: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x3137e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x3137e4: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x3137e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3137e8: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x3137e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x3137ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3137ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3137f0: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x3137f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x3137f4: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x3137f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x3137f8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3137f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3137fc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x313800: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x313804: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x313808: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x313808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x31380c: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31380Cu;
    {
        const bool branch_taken_0x31380c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x313810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31380Cu;
        // 0x313810: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31380c) {
            ctx->pc = 0x313850u;
            goto label_313850;
        }
    }
    ctx->pc = 0x313814u;
    // 0x313814: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313818: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x313818u;
    {
        const bool branch_taken_0x313818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x313818) {
            ctx->pc = 0x313830u;
            goto label_313830;
        }
    }
    ctx->pc = 0x313820u;
    // 0x313820: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313820u;
    {
        const bool branch_taken_0x313820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313820) {
            ctx->pc = 0x313830u;
            goto label_313830;
        }
    }
    ctx->pc = 0x313828u;
    // 0x313828: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x313828u;
    {
        const bool branch_taken_0x313828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313828) {
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313830u;
label_313830:
    // 0x313830: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313830u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313834: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313834u;
    {
        const bool branch_taken_0x313834 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313834u;
        // 0x313838: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313834) {
            ctx->pc = 0x313844u;
            goto label_313844;
        }
    }
    ctx->pc = 0x31383Cu;
    // 0x31383c: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x31383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313840: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313840u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313844:
    // 0x313844: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313848: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x313848u;
    {
        const bool branch_taken_0x313848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313848u;
        // 0x31384c: 0xa7a40160  sh          $a0, 0x160($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313848) {
            ctx->pc = 0x313880u;
            goto label_313880;
        }
    }
    ctx->pc = 0x313850u;
label_313850:
    // 0x313850: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313850u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313854: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313854u;
    {
        const bool branch_taken_0x313854 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313854u;
        // 0x313858: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313854) {
            ctx->pc = 0x313864u;
            goto label_313864;
        }
    }
    ctx->pc = 0x31385Cu;
    // 0x31385c: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x31385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313860: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313860u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313864:
    // 0x313864: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313868: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x313868u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x31386c: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x31386cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x313870: 0x0  nop
    ctx->pc = 0x313870u;
    // NOP
    // 0x313874: 0x0  nop
    ctx->pc = 0x313874u;
    // NOP
    // 0x313878: 0x2012  mflo        $a0
    ctx->pc = 0x313878u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x31387c: 0xa7a40160  sh          $a0, 0x160($sp)
    ctx->pc = 0x31387cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 4));
label_313880:
    // 0x313880: 0x97a40160  lhu         $a0, 0x160($sp)
    ctx->pc = 0x313880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x313884: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x313884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x313888: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x313888u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x31388c: 0x3c031800  lui         $v1, 0x1800
    ctx->pc = 0x31388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6144 << 16));
    // 0x313890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x313890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313894: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x313894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313898: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x313898u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x31389c: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x31389cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3138a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3138a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3138a4: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x3138a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x3138a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3138a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3138ac: 0x0  nop
    ctx->pc = 0x3138acu;
    // NOP
label_3138b0:
    // 0x3138b0: 0x832826  xor         $a1, $a0, $v1
    ctx->pc = 0x3138b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x3138b4: 0x30a80002  andi        $t0, $a1, 0x2
    ctx->pc = 0x3138b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3138b8: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x3138b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3138bc: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x3138bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3138c0: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x3138c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x3138c4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3138c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3138c8: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x3138c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x3138cc: 0x30a80002  andi        $t0, $a1, 0x2
    ctx->pc = 0x3138ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3138d0: 0x873826  xor         $a3, $a0, $a3
    ctx->pc = 0x3138d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
    // 0x3138d4: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x3138d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3138d8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x3138d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x3138dc: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x3138dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x3138e0: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x3138e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x3138e4: 0xc52826  xor         $a1, $a2, $a1
    ctx->pc = 0x3138e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 5));
    // 0x3138e8: 0x248a0002  addiu       $t2, $a0, 0x2
    ctx->pc = 0x3138e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x3138ec: 0x78e60000  lq          $a2, 0x0($a3)
    ctx->pc = 0x3138ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3138f0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3138f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3138f4: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3138f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x3138f8: 0x24880003  addiu       $t0, $a0, 0x3
    ctx->pc = 0x3138f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3138fc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3138fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x313900: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x313900u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x313904: 0xa3842  srl         $a3, $t2, 1
    ctx->pc = 0x313904u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x313908: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x313908u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31390c: 0x1473826  xor         $a3, $t2, $a3
    ctx->pc = 0x31390cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
    // 0x313910: 0x30eb0002  andi        $t3, $a3, 0x2
    ctx->pc = 0x313910u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x313914: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x313914u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x313918: 0x83842  srl         $a3, $t0, 1
    ctx->pc = 0x313918u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x31391c: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x31391cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x313920: 0x1073826  xor         $a3, $t0, $a3
    ctx->pc = 0x313920u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x313924: 0x1494826  xor         $t1, $t2, $t1
    ctx->pc = 0x313924u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 9));
    // 0x313928: 0x248b0006  addiu       $t3, $a0, 0x6
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x31392c: 0x248a0004  addiu       $t2, $a0, 0x4
    ctx->pc = 0x31392cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x313930: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x313930u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x313934: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x313934u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x313938: 0x30e90002  andi        $t1, $a3, 0x2
    ctx->pc = 0x313938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x31393c: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x31393cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x313940: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x313940u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x313944: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313948: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x313948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x31394c: 0x1074026  xor         $t0, $t0, $a3
    ctx->pc = 0x31394cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 7));
    // 0x313950: 0x84900  sll         $t1, $t0, 4
    ctx->pc = 0x313950u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x313954: 0xa3842  srl         $a3, $t2, 1
    ctx->pc = 0x313954u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x313958: 0x1474026  xor         $t0, $t2, $a3
    ctx->pc = 0x313958u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 7));
    // 0x31395c: 0x2693021  addu        $a2, $s3, $t1
    ctx->pc = 0x31395cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
    // 0x313960: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x313960u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313964: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x313964u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x313968: 0x24890005  addiu       $t1, $a0, 0x5
    ctx->pc = 0x313968u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x31396c: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x31396cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313970: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x313970u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x313974: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x313974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x313978: 0x1454026  xor         $t0, $t2, $a1
    ctx->pc = 0x313978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 5));
    // 0x31397c: 0x92842  srl         $a1, $t1, 1
    ctx->pc = 0x31397cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x313980: 0x85100  sll         $t2, $t0, 4
    ctx->pc = 0x313980u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x313984: 0x1254026  xor         $t0, $t1, $a1
    ctx->pc = 0x313984u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 5));
    // 0x313988: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x313988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x31398c: 0x26a2821  addu        $a1, $s3, $t2
    ctx->pc = 0x31398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
    // 0x313990: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x313990u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313994: 0x1074025  or          $t0, $t0, $a3
    ctx->pc = 0x313994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x313998: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x313998u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31399c: 0x1283026  xor         $a2, $t1, $t0
    ctx->pc = 0x31399cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x3139a0: 0x7c470010  sq          $a3, 0x10($v0)
    ctx->pc = 0x3139a0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 7));
    // 0x3139a4: 0xb4042  srl         $t0, $t3, 1
    ctx->pc = 0x3139a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x3139a8: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x3139a8u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3139ac: 0x1684026  xor         $t0, $t3, $t0
    ctx->pc = 0x3139acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 8));
    // 0x3139b0: 0x24890007  addiu       $t1, $a0, 0x7
    ctx->pc = 0x3139b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x3139b4: 0x310c0002  andi        $t4, $t0, 0x2
    ctx->pc = 0x3139b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x3139b8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3139b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3139bc: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x3139bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x3139c0: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x3139c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x3139c4: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x3139c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x3139c8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3139c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3139cc: 0x16a5026  xor         $t2, $t3, $t2
    ctx->pc = 0x3139ccu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x3139d0: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x3139d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x3139d4: 0xa2900  sll         $a1, $t2, 4
    ctx->pc = 0x3139d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3139d8: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x3139d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x3139dc: 0x310a0002  andi        $t2, $t0, 0x2
    ctx->pc = 0x3139dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x3139e0: 0x2663021  addu        $a2, $s3, $a2
    ctx->pc = 0x3139e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x3139e4: 0xa4040  sll         $t0, $t2, 1
    ctx->pc = 0x3139e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x3139e8: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3139e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x3139ec: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x3139ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x3139f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3139f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3139f4: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x3139f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x3139f8: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x3139f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x3139fc: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x3139fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x313a00: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x313a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x313a04: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x313a04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x313a08: 0x2c860040  sltiu       $a2, $a0, 0x40
    ctx->pc = 0x313a08u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x313a0c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x313a0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313a10: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313a14: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x313a14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x313a18: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x313a18u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x313a1c: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x313a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x313a20: 0x14c0ffa3  bnez        $a2, . + 4 + (-0x5D << 2)
    ctx->pc = 0x313A20u;
    {
        const bool branch_taken_0x313a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x313A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A20u;
        // 0x313a24: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a20) {
            ctx->pc = 0x3138B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3138b0;
        }
    }
    ctx->pc = 0x313A28u;
    // 0x313a28: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x313a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x313a2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x313a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313a30: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x313a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x313a34: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x313a34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x313a38: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x313a38u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x313a3c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x313a3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x313a40: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x313A40u;
    {
        const bool branch_taken_0x313a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x313A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A40u;
        // 0x313a44: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a40) {
            ctx->pc = 0x313A88u;
            goto label_313a88;
        }
    }
    ctx->pc = 0x313A48u;
    // 0x313a48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313a4c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313A4Cu;
    {
        const bool branch_taken_0x313a4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x313a4c) {
            ctx->pc = 0x313A68u;
            goto label_313a68;
        }
    }
    ctx->pc = 0x313A54u;
    // 0x313a54: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x313A54u;
    {
        const bool branch_taken_0x313a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a54) {
            ctx->pc = 0x313A68u;
            goto label_313a68;
        }
    }
    ctx->pc = 0x313A5Cu;
    // 0x313a5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x313A5Cu;
    {
        const bool branch_taken_0x313a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313a5c) {
            ctx->pc = 0x313AB8u;
            goto label_313ab8;
        }
    }
    ctx->pc = 0x313A64u;
    // 0x313a64: 0x0  nop
    ctx->pc = 0x313a64u;
    // NOP
label_313a68:
    // 0x313a68: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313a6c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313A6Cu;
    {
        const bool branch_taken_0x313a6c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A6Cu;
        // 0x313a70: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a6c) {
            ctx->pc = 0x313A7Cu;
            goto label_313a7c;
        }
    }
    ctx->pc = 0x313A74u;
    // 0x313a74: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313a78: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313a78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313a7c:
    // 0x313a7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313a80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x313A80u;
    {
        const bool branch_taken_0x313a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A80u;
        // 0x313a84: 0xa7a40150  sh          $a0, 0x150($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a80) {
            ctx->pc = 0x313AB8u;
            goto label_313ab8;
        }
    }
    ctx->pc = 0x313A88u;
label_313a88:
    // 0x313a88: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313a88u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313a8c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313A8Cu;
    {
        const bool branch_taken_0x313a8c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313A8Cu;
        // 0x313a90: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313a8c) {
            ctx->pc = 0x313A9Cu;
            goto label_313a9c;
        }
    }
    ctx->pc = 0x313A94u;
    // 0x313a94: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313a98: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313a98u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313a9c:
    // 0x313a9c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313aa0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x313aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313aa4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x313aa4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x313aa8: 0x0  nop
    ctx->pc = 0x313aa8u;
    // NOP
    // 0x313aac: 0x0  nop
    ctx->pc = 0x313aacu;
    // NOP
    // 0x313ab0: 0x2012  mflo        $a0
    ctx->pc = 0x313ab0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x313ab4: 0xa7a40150  sh          $a0, 0x150($sp)
    ctx->pc = 0x313ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 336), (uint16_t)GPR_U32(ctx, 4));
label_313ab8:
    // 0x313ab8: 0x97a40150  lhu         $a0, 0x150($sp)
    ctx->pc = 0x313ab8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x313abc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x313abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x313ac0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x313ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x313ac4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x313ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x313ac8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313ac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313acc: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313accu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313ad0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x313ad4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x313ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x313ad8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x313ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313adc: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x313adcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x313ae0: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x313ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x313ae4: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x313ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313ae8: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x313ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x313aec: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313af0: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x313af4: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x313af8: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x313afc: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x313afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x313b00: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x313B00u;
    {
        const bool branch_taken_0x313b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x313B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B00u;
        // 0x313b04: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b00) {
            ctx->pc = 0x313B48u;
            goto label_313b48;
        }
    }
    ctx->pc = 0x313B08u;
    // 0x313b08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313b0c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313B0Cu;
    {
        const bool branch_taken_0x313b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x313b0c) {
            ctx->pc = 0x313B28u;
            goto label_313b28;
        }
    }
    ctx->pc = 0x313B14u;
    // 0x313b14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x313B14u;
    {
        const bool branch_taken_0x313b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b14) {
            ctx->pc = 0x313B28u;
            goto label_313b28;
        }
    }
    ctx->pc = 0x313B1Cu;
    // 0x313b1c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x313B1Cu;
    {
        const bool branch_taken_0x313b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313b1c) {
            ctx->pc = 0x313B78u;
            goto label_313b78;
        }
    }
    ctx->pc = 0x313B24u;
    // 0x313b24: 0x0  nop
    ctx->pc = 0x313b24u;
    // NOP
label_313b28:
    // 0x313b28: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313b28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313b2c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313B2Cu;
    {
        const bool branch_taken_0x313b2c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B2Cu;
        // 0x313b30: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b2c) {
            ctx->pc = 0x313B3Cu;
            goto label_313b3c;
        }
    }
    ctx->pc = 0x313B34u;
    // 0x313b34: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313b38: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313b38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313b3c:
    // 0x313b3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313b40: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x313B40u;
    {
        const bool branch_taken_0x313b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B40u;
        // 0x313b44: 0xa7a40140  sh          $a0, 0x140($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b40) {
            ctx->pc = 0x313B78u;
            goto label_313b78;
        }
    }
    ctx->pc = 0x313B48u;
label_313b48:
    // 0x313b48: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313b4c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313B4Cu;
    {
        const bool branch_taken_0x313b4c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B4Cu;
        // 0x313b50: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b4c) {
            ctx->pc = 0x313B5Cu;
            goto label_313b5c;
        }
    }
    ctx->pc = 0x313B54u;
    // 0x313b54: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313b58: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313b58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313b5c:
    // 0x313b5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313b60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x313b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313b64: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x313b64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x313b68: 0x0  nop
    ctx->pc = 0x313b68u;
    // NOP
    // 0x313b6c: 0x0  nop
    ctx->pc = 0x313b6cu;
    // NOP
    // 0x313b70: 0x2012  mflo        $a0
    ctx->pc = 0x313b70u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x313b74: 0xa7a40140  sh          $a0, 0x140($sp)
    ctx->pc = 0x313b74u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 320), (uint16_t)GPR_U32(ctx, 4));
label_313b78:
    // 0x313b78: 0x97a40140  lhu         $a0, 0x140($sp)
    ctx->pc = 0x313b78u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x313b7c: 0x80202d  daddu       $a0, $a0, $zero
    ctx->pc = 0x313b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b80: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x313b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x313b84: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x313b84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x313b88: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x313b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x313b8c: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x313b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x313b90: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x313B90u;
    {
        const bool branch_taken_0x313b90 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x313B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B90u;
        // 0x313b94: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b90) {
            ctx->pc = 0x313BA0u;
            goto label_313ba0;
        }
    }
    ctx->pc = 0x313B98u;
    // 0x313b98: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x313b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x313b9c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x313b9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_313ba0:
    // 0x313ba0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x313ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x313ba4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x313ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x313ba8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x313ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x313bac: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x313bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x313bb0: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x313bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x313bb4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x313bb8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313BB8u;
    {
        const bool branch_taken_0x313bb8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x313BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BB8u;
        // 0x313bbc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bb8) {
            ctx->pc = 0x313BC8u;
            goto label_313bc8;
        }
    }
    ctx->pc = 0x313BC0u;
    // 0x313bc0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x313bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x313bc4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x313bc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_313bc8:
    // 0x313bc8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x313bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x313bcc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313bd0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x313bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x313bd4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x313bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x313bd8: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x313BD8u;
    SET_GPR_U32(ctx, 31, 0x313BE0u);
    ctx->pc = 0x313BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BD8u;
    // 0x313bdc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x313BD8u, 0x313BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BE0u;
label_313be0:
    // 0x313be0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x313be0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x313be4: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x313be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x313be8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x313be8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x313bec: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x313becu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x313bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x313bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x313bf4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x313bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x313bf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x313bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x313bfc: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x313bfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313c00: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x313c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x313c04: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x313c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x313c08: 0xaf828b28  sw          $v0, -0x74D8($gp)
    ctx->pc = 0x313c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 2));
    // 0x313c0c: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x313c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x313c10: 0x401021  addu        $v0, $v0, $zero
    ctx->pc = 0x313c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x313c14: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x313c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x313c18: 0xaf828b2c  sw          $v0, -0x74D4($gp)
    ctx->pc = 0x313c18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 2));
    // 0x313c1c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x313c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x313c20: 0xfc480010  sd          $t0, 0x10($v0)
    ctx->pc = 0x313c20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 8));
    // 0x313c24: 0x24090019  addiu       $t1, $zero, 0x19
    ctx->pc = 0x313c24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x313c28: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x313c28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x313c2c: 0x240b004d  addiu       $t3, $zero, 0x4D
    ctx->pc = 0x313c2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x313c30: 0xaf868b30  sw          $a2, -0x74D0($gp)
    ctx->pc = 0x313c30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 6));
    // 0x313c34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313c38: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x313c38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x313c3c: 0x340affff  ori         $t2, $zero, 0xFFFF
    ctx->pc = 0x313c3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x313c40: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x313c40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x313c44: 0x2408004f  addiu       $t0, $zero, 0x4F
    ctx->pc = 0x313c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x313c48: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313c48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313c4c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x313c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x313c50: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x313c50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313c54: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x313c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x313c58: 0xdfa300e0  ld          $v1, 0xE0($sp)
    ctx->pc = 0x313c58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x313c5c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313c60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x313c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x313c64: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x313c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x313c68: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x313c68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x313c6c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x313c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x313c70: 0xfc490008  sd          $t1, 0x8($v0)
    ctx->pc = 0x313c70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 9));
    // 0x313c74: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x313c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x313c78: 0xdfa900d0  ld          $t1, 0xD0($sp)
    ctx->pc = 0x313c78u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x313c7c: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x313c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x313c80: 0xa4c38  dsll        $t1, $t2, 16
    ctx->pc = 0x313c80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) << 16);
    // 0x313c84: 0xfc4b0018  sd          $t3, 0x18($v0)
    ctx->pc = 0x313c84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 11));
    // 0x313c88: 0x352bffff  ori         $t3, $t1, 0xFFFF
    ctx->pc = 0x313c88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x313c8c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313c90: 0xdfa900c0  ld          $t1, 0xC0($sp)
    ctx->pc = 0x313c90u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x313c94: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313c98: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x313c98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x313c9c: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x313c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x313ca0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x313ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ca4: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x313ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x313ca8: 0xfc460018  sd          $a2, 0x18($v0)
    ctx->pc = 0x313ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 6));
    // 0x313cac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313cb0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x313cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x313cb4: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x313cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x313cb8: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313cbc: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x313cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313cc0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313cc4: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x313cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x313cc8: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x313cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x313ccc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x313CCCu;
    {
        const bool branch_taken_0x313ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CCCu;
        // 0x313cd0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ccc) {
            ctx->pc = 0x313D70u;
            goto label_313d70;
        }
    }
    ctx->pc = 0x313CD4u;
    // 0x313cd4: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x313cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x313cd8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x313cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x313cdc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x313cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313ce0: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x313ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313ce4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x313ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x313ce8: 0x2141821  addu        $v1, $s0, $s4
    ctx->pc = 0x313ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x313cec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x313cecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x313cf0: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x313cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x313cf4: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x313cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x313cf8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x313cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x313cfc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x313cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x313d00: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x313d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313d04: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x313d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x313d08: 0x61c38  dsll        $v1, $a2, 16
    ctx->pc = 0x313d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << 16);
    // 0x313d0c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x313d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x313d10: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x313d10u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x313d14: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x313d14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x313d18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x313d1c: 0x0  nop
    ctx->pc = 0x313d1cu;
    // NOP
label_313d20:
    // 0x313d20: 0x2526001f  addiu       $a2, $t1, 0x1F
    ctx->pc = 0x313d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
    // 0x313d24: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x313d24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x313d28: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x313d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
    // 0x313d2c: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x313d2cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x313d30: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x313d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x313d34: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x313d34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x313d38: 0xcb5825  or          $t3, $a2, $t3
    ctx->pc = 0x313d38u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x313d3c: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x313d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x313d40: 0xab5825  or          $t3, $a1, $t3
    ctx->pc = 0x313d40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x313d44: 0x134302b  sltu        $a2, $t1, $s4
    ctx->pc = 0x313d44u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x313d48: 0xfc4b0000  sd          $t3, 0x0($v0)
    ctx->pc = 0x313d48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 11));
    // 0x313d4c: 0xfc4a0008  sd          $t2, 0x8($v0)
    ctx->pc = 0x313d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 10));
    // 0x313d50: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313d50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313d54: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x313d54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x313d58: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313d5c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x313d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x313d60: 0xfc470008  sd          $a3, 0x8($v0)
    ctx->pc = 0x313d60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 7));
    // 0x313d64: 0x14c0ffee  bnez        $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x313D64u;
    {
        const bool branch_taken_0x313d64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x313D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D64u;
        // 0x313d68: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d64) {
            ctx->pc = 0x313D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313d20;
        }
    }
    ctx->pc = 0x313D6Cu;
    // 0x313d6c: 0x0  nop
    ctx->pc = 0x313d6cu;
    // NOP
label_313d70:
    // 0x313d70: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x313d74: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313d78: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x313d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x313d7c: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x313d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x313d80: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x313d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x313d84: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313d84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313d88: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x313d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x313d8c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x313d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313d90: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x313d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x313d94: 0xfc440010  sd          $a0, 0x10($v0)
    ctx->pc = 0x313d94u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 4));
    // 0x313d98: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x313d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x313d9c: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x313d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313da0: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x313da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x313da4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313da8: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x313da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x313dac: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313dacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313db0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x313db0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313db4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x313db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x313db8: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x313db8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x313dbc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x313dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x313dc0: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x313dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x313dc4: 0x34631d2c  ori         $v1, $v1, 0x1D2C
    ctx->pc = 0x313dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7468);
    // 0x313dc8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x313dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x313dcc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313dd0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313dd4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x313dd8: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x313dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313ddc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x313ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x313de0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x313de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x313de4: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x313de4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x313de8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x313de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313dec: 0xfc450018  sd          $a1, 0x18($v0)
    ctx->pc = 0x313decu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 5));
    // 0x313df0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x313df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x313df4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313df8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x313df8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x313dfc: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x313dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x313e00: 0xfc440008  sd          $a0, 0x8($v0)
    ctx->pc = 0x313e00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
    // 0x313e04: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x313e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x313e08: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x313e08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x313e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x313e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313e10: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x313e10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x313e14: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x313e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x313e18: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313e1c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x313e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x313e20: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x313e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x313e24: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x313e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x313e28: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x313e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x313e2c: 0x10a40010  beq         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x313E2Cu;
    {
        const bool branch_taken_0x313e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x313E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E2Cu;
        // 0x313e30: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e2c) {
            ctx->pc = 0x313E70u;
            goto label_313e70;
        }
    }
    ctx->pc = 0x313E34u;
    // 0x313e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x313e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x313e38: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x313E38u;
    {
        const bool branch_taken_0x313e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x313e38) {
            ctx->pc = 0x313E50u;
            goto label_313e50;
        }
    }
    ctx->pc = 0x313E40u;
    // 0x313e40: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313E40u;
    {
        const bool branch_taken_0x313e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e40) {
            ctx->pc = 0x313E50u;
            goto label_313e50;
        }
    }
    ctx->pc = 0x313E48u;
    // 0x313e48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x313E48u;
    {
        const bool branch_taken_0x313e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e48) {
            ctx->pc = 0x313EA0u;
            goto label_313ea0;
        }
    }
    ctx->pc = 0x313E50u;
label_313e50:
    // 0x313e50: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313e50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313e54: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313E54u;
    {
        const bool branch_taken_0x313e54 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E54u;
        // 0x313e58: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e54) {
            ctx->pc = 0x313E64u;
            goto label_313e64;
        }
    }
    ctx->pc = 0x313E5Cu;
    // 0x313e5c: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313e60: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313e60u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313e64:
    // 0x313e64: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313e68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x313E68u;
    {
        const bool branch_taken_0x313e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E68u;
        // 0x313e6c: 0xa7a40130  sh          $a0, 0x130($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e68) {
            ctx->pc = 0x313EA0u;
            goto label_313ea0;
        }
    }
    ctx->pc = 0x313E70u;
label_313e70:
    // 0x313e70: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x313e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313e74: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x313E74u;
    {
        const bool branch_taken_0x313e74 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x313E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E74u;
        // 0x313e78: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e74) {
            ctx->pc = 0x313E84u;
            goto label_313e84;
        }
    }
    ctx->pc = 0x313E7Cu;
    // 0x313e7c: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x313e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x313e80: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x313e80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_313e84:
    // 0x313e84: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x313e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x313e88: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x313e88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313e8c: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x313e8cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x313e90: 0x0  nop
    ctx->pc = 0x313e90u;
    // NOP
    // 0x313e94: 0x0  nop
    ctx->pc = 0x313e94u;
    // NOP
    // 0x313e98: 0x2012  mflo        $a0
    ctx->pc = 0x313e98u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x313e9c: 0xa7a40130  sh          $a0, 0x130($sp)
    ctx->pc = 0x313e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 304), (uint16_t)GPR_U32(ctx, 4));
label_313ea0:
    // 0x313ea0: 0x97a40130  lhu         $a0, 0x130($sp)
    ctx->pc = 0x313ea0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x313ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ea8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313eac: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x313eacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x313eb0: 0x3c041800  lui         $a0, 0x1800
    ctx->pc = 0x313eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)6144 << 16));
    // 0x313eb4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x313eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x313eb8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x313eb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x313ebc: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x313ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x313ec0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x313ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x313ec4: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x313ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x313ec8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x313ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x313ecc: 0x0  nop
    ctx->pc = 0x313eccu;
    // NOP
label_313ed0:
    // 0x313ed0: 0xe61826  xor         $v1, $a3, $a2
    ctx->pc = 0x313ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x313ed4: 0x30680002  andi        $t0, $v1, 0x2
    ctx->pc = 0x313ed4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x313ed8: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x313edc: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x313edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313ee0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x313ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x313ee4: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x313ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x313ee8: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x313ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x313eec: 0x30680002  andi        $t0, $v1, 0x2
    ctx->pc = 0x313eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x313ef0: 0xe52826  xor         $a1, $a3, $a1
    ctx->pc = 0x313ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
    // 0x313ef4: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x313ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313ef8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x313ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x313efc: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x313efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x313f00: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x313f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x313f04: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x313f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x313f08: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x313f08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x313f0c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x313f0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x313f10: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x313f10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x313f14: 0x2445021  addu        $t2, $s2, $a0
    ctx->pc = 0x313f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x313f18: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x313f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x313f1c: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x313f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x313f20: 0x1242026  xor         $a0, $t1, $a0
    ctx->pc = 0x313f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x313f24: 0x308b0002  andi        $t3, $a0, 0x2
    ctx->pc = 0x313f24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x313f28: 0xb4040  sll         $t0, $t3, 1
    ctx->pc = 0x313f28u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x313f2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x313f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x313f30: 0x1684025  or          $t0, $t3, $t0
    ctx->pc = 0x313f30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x313f34: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x313f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x313f38: 0x24e50003  addiu       $a1, $a3, 0x3
    ctx->pc = 0x313f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x313f3c: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x313f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x313f40: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x313f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x313f44: 0xa42026  xor         $a0, $a1, $a0
    ctx->pc = 0x313f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x313f48: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x313f48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x313f4c: 0x2484821  addu        $t1, $s2, $t0
    ctx->pc = 0x313f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x313f50: 0x24eb0006  addiu       $t3, $a3, 0x6
    ctx->pc = 0x313f50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x313f54: 0x24e80004  addiu       $t0, $a3, 0x4
    ctx->pc = 0x313f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x313f58: 0x308a0002  andi        $t2, $a0, 0x2
    ctx->pc = 0x313f58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x313f5c: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x313f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x313f60: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x313f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x313f64: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313f68: 0x1442025  or          $a0, $t2, $a0
    ctx->pc = 0x313f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x313f6c: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x313f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
    // 0x313f70: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x313f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x313f74: 0x82042  srl         $a0, $t0, 1
    ctx->pc = 0x313f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x313f78: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x313f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x313f7c: 0x1042026  xor         $a0, $t0, $a0
    ctx->pc = 0x313f7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x313f80: 0x79250000  lq          $a1, 0x0($t1)
    ctx->pc = 0x313f80u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x313f84: 0x30890002  andi        $t1, $a0, 0x2
    ctx->pc = 0x313f84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x313f88: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x313f88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x313f8c: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x313f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x313f90: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x313f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x313f94: 0x1044026  xor         $t0, $t0, $a0
    ctx->pc = 0x313f94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 4));
    // 0x313f98: 0x24e90005  addiu       $t1, $a3, 0x5
    ctx->pc = 0x313f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x313f9c: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x313f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x313fa0: 0x85100  sll         $t2, $t0, 4
    ctx->pc = 0x313fa0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x313fa4: 0x1244026  xor         $t0, $t1, $a0
    ctx->pc = 0x313fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x313fa8: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x313fa8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x313fac: 0x24a2021  addu        $a0, $s2, $t2
    ctx->pc = 0x313facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 10)));
    // 0x313fb0: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x313fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x313fb4: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x313fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x313fb8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x313fb8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x313fbc: 0x1281826  xor         $v1, $t1, $t0
    ctx->pc = 0x313fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x313fc0: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x313fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x313fc4: 0xb4042  srl         $t0, $t3, 1
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
    // 0x313fc8: 0x24e90007  addiu       $t1, $a3, 0x7
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x313fcc: 0x1684026  xor         $t0, $t3, $t0
    ctx->pc = 0x313fccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 8));
    // 0x313fd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x313fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x313fd4: 0x310c0002  andi        $t4, $t0, 0x2
    ctx->pc = 0x313fd4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x313fd8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x313fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x313fdc: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x313fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x313fe0: 0x94042  srl         $t0, $t1, 1
    ctx->pc = 0x313fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x313fe4: 0x18a5025  or          $t2, $t4, $t2
    ctx->pc = 0x313fe4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x313fe8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x313fec: 0x16a2826  xor         $a1, $t3, $t2
    ctx->pc = 0x313fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 10));
    // 0x313ff0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x313ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x313ff4: 0x788a0000  lq          $t2, 0x0($a0)
    ctx->pc = 0x313ff4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x313ff8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x313ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x313ffc: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x313ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x314000: 0x1282026  xor         $a0, $t1, $t0
    ctx->pc = 0x314000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x314004: 0x7c4a0000  sq          $t2, 0x0($v0)
    ctx->pc = 0x314004u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 10));
    // 0x314008: 0x30880002  andi        $t0, $a0, 0x2
    ctx->pc = 0x314008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x31400c: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x314010: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x314010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x314014: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x314014u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x314018: 0x1242026  xor         $a0, $t1, $a0
    ctx->pc = 0x314018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 4));
    // 0x31401c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31401cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314020: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x314020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x314024: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x314024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x314028: 0x2ce30040  sltiu       $v1, $a3, 0x40
    ctx->pc = 0x314028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x31402c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x31402cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x314030: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x314030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x314034: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x314034u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x314038: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x314038u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31403c: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x31403cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x314040: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x314040u;
    {
        const bool branch_taken_0x314040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314040u;
        // 0x314044: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314040) {
            ctx->pc = 0x313ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313ed0;
        }
    }
    ctx->pc = 0x314048u;
    // 0x314048: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x314048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31404c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31404cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314050: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x314050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x314054: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x314054u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x314058: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x314058u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x31405c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x31405cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x314060: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x314060u;
    {
        const bool branch_taken_0x314060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x314064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314060u;
        // 0x314064: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314060) {
            ctx->pc = 0x3140A8u;
            goto label_3140a8;
        }
    }
    ctx->pc = 0x314068u;
    // 0x314068: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x314068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31406c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31406Cu;
    {
        const bool branch_taken_0x31406c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x31406c) {
            ctx->pc = 0x314088u;
            goto label_314088;
        }
    }
    ctx->pc = 0x314074u;
    // 0x314074: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314074u;
    {
        const bool branch_taken_0x314074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314074) {
            ctx->pc = 0x314088u;
            goto label_314088;
        }
    }
    ctx->pc = 0x31407Cu;
    // 0x31407c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31407Cu;
    {
        const bool branch_taken_0x31407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31407c) {
            ctx->pc = 0x3140D8u;
            goto label_3140d8;
        }
    }
    ctx->pc = 0x314084u;
    // 0x314084: 0x0  nop
    ctx->pc = 0x314084u;
    // NOP
label_314088:
    // 0x314088: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x314088u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31408c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31408Cu;
    {
        const bool branch_taken_0x31408c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x314090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31408Cu;
        // 0x314090: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31408c) {
            ctx->pc = 0x31409Cu;
            goto label_31409c;
        }
    }
    ctx->pc = 0x314094u;
    // 0x314094: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x314094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x314098: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x314098u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_31409c:
    // 0x31409c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31409cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3140a0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3140A0u;
    {
        const bool branch_taken_0x3140a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3140A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140A0u;
        // 0x3140a4: 0xa7a40120  sh          $a0, 0x120($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140a0) {
            ctx->pc = 0x3140D8u;
            goto label_3140d8;
        }
    }
    ctx->pc = 0x3140A8u;
label_3140a8:
    // 0x3140a8: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x3140a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3140ac: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3140ACu;
    {
        const bool branch_taken_0x3140ac = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x3140B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3140ACu;
        // 0x3140b0: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3140ac) {
            ctx->pc = 0x3140BCu;
            goto label_3140bc;
        }
    }
    ctx->pc = 0x3140B4u;
    // 0x3140b4: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x3140b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x3140b8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3140b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_3140bc:
    // 0x3140bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3140bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3140c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3140c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3140c4: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x3140c4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x3140c8: 0x0  nop
    ctx->pc = 0x3140c8u;
    // NOP
    // 0x3140cc: 0x0  nop
    ctx->pc = 0x3140ccu;
    // NOP
    // 0x3140d0: 0x2012  mflo        $a0
    ctx->pc = 0x3140d0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3140d4: 0xa7a40120  sh          $a0, 0x120($sp)
    ctx->pc = 0x3140d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 288), (uint16_t)GPR_U32(ctx, 4));
label_3140d8:
    // 0x3140d8: 0x97a40120  lhu         $a0, 0x120($sp)
    ctx->pc = 0x3140d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3140dc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3140dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3140e0: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3140e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3140e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3140e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3140e8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3140e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3140ec: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3140ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x3140f0: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3140f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3140f4: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3140f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3140f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3140f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3140fc: 0xaf828b30  sw          $v0, -0x74D0($gp)
    ctx->pc = 0x3140fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 2));
    // 0x314100: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x314100u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
    // 0x314104: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x314104u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x314108: 0x8f838b30  lw          $v1, -0x74D0($gp)
    ctx->pc = 0x314108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31410c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x31410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x314110: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x314110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x314114: 0x53702  srl         $a2, $a1, 28
    ctx->pc = 0x314114u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 28));
    // 0x314118: 0x52e82  srl         $a1, $a1, 26
    ctx->pc = 0x314118u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 26));
    // 0x31411c: 0x30a50003  andi        $a1, $a1, 0x3
    ctx->pc = 0x31411cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x314120: 0x10a40011  beq         $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x314120u;
    {
        const bool branch_taken_0x314120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x314124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314120u;
        // 0x314124: 0x30c6000f  andi        $a2, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314120) {
            ctx->pc = 0x314168u;
            goto label_314168;
        }
    }
    ctx->pc = 0x314128u;
    // 0x314128: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x314128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31412c: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31412Cu;
    {
        const bool branch_taken_0x31412c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x31412c) {
            ctx->pc = 0x314148u;
            goto label_314148;
        }
    }
    ctx->pc = 0x314134u;
    // 0x314134: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x314134u;
    {
        const bool branch_taken_0x314134 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x314134) {
            ctx->pc = 0x314148u;
            goto label_314148;
        }
    }
    ctx->pc = 0x31413Cu;
    // 0x31413c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31413Cu;
    {
        const bool branch_taken_0x31413c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31413c) {
            ctx->pc = 0x314198u;
            goto label_314198;
        }
    }
    ctx->pc = 0x314144u;
    // 0x314144: 0x0  nop
    ctx->pc = 0x314144u;
    // NOP
label_314148:
    // 0x314148: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x314148u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31414c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31414Cu;
    {
        const bool branch_taken_0x31414c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x314150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31414Cu;
        // 0x314150: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31414c) {
            ctx->pc = 0x31415Cu;
            goto label_31415c;
        }
    }
    ctx->pc = 0x314154u;
    // 0x314154: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x314154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x314158: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x314158u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_31415c:
    // 0x31415c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x314160: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x314160u;
    {
        const bool branch_taken_0x314160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314160u;
        // 0x314164: 0xa7a40110  sh          $a0, 0x110($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314160) {
            ctx->pc = 0x314198u;
            goto label_314198;
        }
    }
    ctx->pc = 0x314168u;
label_314168:
    // 0x314168: 0x432823  subu        $a1, $v0, $v1
    ctx->pc = 0x314168u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31416c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31416Cu;
    {
        const bool branch_taken_0x31416c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x314170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31416Cu;
        // 0x314170: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31416c) {
            ctx->pc = 0x31417Cu;
            goto label_31417c;
        }
    }
    ctx->pc = 0x314174u;
    // 0x314174: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x314174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x314178: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x314178u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_31417c:
    // 0x31417c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x314180: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x314180u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x314184: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x314184u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x314188: 0x0  nop
    ctx->pc = 0x314188u;
    // NOP
    // 0x31418c: 0x0  nop
    ctx->pc = 0x31418cu;
    // NOP
    // 0x314190: 0x2012  mflo        $a0
    ctx->pc = 0x314190u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x314194: 0xa7a40110  sh          $a0, 0x110($sp)
    ctx->pc = 0x314194u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 272), (uint16_t)GPR_U32(ctx, 4));
label_314198:
    // 0x314198: 0x97a40110  lhu         $a0, 0x110($sp)
    ctx->pc = 0x314198u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x31419c: 0x80202d  daddu       $a0, $a0, $zero
    ctx->pc = 0x31419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141a0: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x3141a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x3141a4: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x3141a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3141a8: 0x8f858b2c  lw          $a1, -0x74D4($gp)
    ctx->pc = 0x3141a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x3141ac: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3141acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3141b0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3141B0u;
    {
        const bool branch_taken_0x3141b0 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3141B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141B0u;
        // 0x3141b4: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141b0) {
            ctx->pc = 0x3141C0u;
            goto label_3141c0;
        }
    }
    ctx->pc = 0x3141B8u;
    // 0x3141b8: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x3141b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x3141bc: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x3141bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_3141c0:
    // 0x3141c0: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3141c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3141c4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3141c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3141c8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3141c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3141cc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x3141ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x3141d0: 0x8f848b28  lw          $a0, -0x74D8($gp)
    ctx->pc = 0x3141d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x3141d4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x3141d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3141d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3141D8u;
    {
        const bool branch_taken_0x3141d8 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3141DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3141D8u;
        // 0x3141dc: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3141d8) {
            ctx->pc = 0x3141E8u;
            goto label_3141e8;
        }
    }
    ctx->pc = 0x3141E0u;
    // 0x3141e0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x3141e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3141e4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3141e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3141e8:
    // 0x3141e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3141e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3141ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3141ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3141f0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x3141f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3141f4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x3141f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x3141f8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x3141f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3141fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3141fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314200: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x314200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x314204: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x314204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x314208: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x314208u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x31420c: 0x24420017  addiu       $v0, $v0, 0x17
    ctx->pc = 0x31420cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23));
    // 0x314210: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x314210u;
    SET_GPR_U32(ctx, 31, 0x314218u);
    ctx->pc = 0x314214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314210u;
    // 0x314214: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x314210u, 0x314218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314218u;
label_314218:
    // 0x314218: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x314218u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31421c: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x31421cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x314220: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x314220u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x314224: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x314224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314228: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x314228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x31422c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x31422cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x314230: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x314230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x314234: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x314234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x314238: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314238u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31423c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x31423cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x314240: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x314240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x314244: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x314244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x314248: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x314248u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31424c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x31424cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x314250: 0xaf838b28  sw          $v1, -0x74D8($gp)
    ctx->pc = 0x314250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 3));
    // 0x314254: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x314254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x314258: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x314258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x31425c: 0xaf838b2c  sw          $v1, -0x74D4($gp)
    ctx->pc = 0x31425cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 3));
    // 0x314260: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x314260u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x314264: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314268: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x314268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x31426c: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x31426cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x314270: 0xfc690018  sd          $t1, 0x18($v1)
    ctx->pc = 0x314270u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 9));
    // 0x314274: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x314274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314278: 0xaf868b30  sw          $a2, -0x74D0($gp)
    ctx->pc = 0x314278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 6));
    // 0x31427c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314280: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x314280u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x314284: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x314284u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x314288: 0x2a23025  or          $a2, $s5, $v0
    ctx->pc = 0x314288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x31428c: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x31428cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x314290: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x314290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314294: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x314294u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x314298: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314298u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x31429c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142a0: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3142A0u;
    SET_GPR_U32(ctx, 31, 0x3142A8u);
    ctx->pc = 0x3142A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142A0u;
    // 0x3142a4: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3142A0u, 0x3142A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142A8u;
label_3142a8:
    // 0x3142a8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3142a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3142ac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3142acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3142b0: 0x34a21080  ori         $v0, $a1, 0x1080
    ctx->pc = 0x3142b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4224);
    // 0x3142b4: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x3142b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x3142b8: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3142B8u;
    SET_GPR_U32(ctx, 31, 0x3142C0u);
    ctx->pc = 0x3142BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3142B8u;
    // 0x3142bc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3142B8u, 0x3142C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3142C0u;
label_3142c0:
    // 0x3142c0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3142c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3142c4: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x3142c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3142c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3142c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3142cc: 0x3c022003  lui         $v0, 0x2003
    ctx->pc = 0x3142ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8195 << 16));
    // 0x3142d0: 0x427b8  dsll        $a0, $a0, 30
    ctx->pc = 0x3142d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 30);
    // 0x3142d4: 0x3442a58c  ori         $v0, $v0, 0xA58C
    ctx->pc = 0x3142d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42380);
    // 0x3142d8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3142d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3142dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3142dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3142e0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x3142e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3142e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3142e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142e8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x3142e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x3142ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3142ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3142f0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3142f4: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x3142f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x3142f8: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x3142f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x3142fc: 0x24047000  addiu       $a0, $zero, 0x7000
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x314300: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x314300u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x314304: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x314304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x314308: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314308u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x31430c: 0x24027900  addiu       $v0, $zero, 0x7900
    ctx->pc = 0x31430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30976));
    // 0x314310: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314314: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x314314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314318: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x314318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x31431c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x31431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x314320: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x314320u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x314324: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x314324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x314328: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x314328u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x31432c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x31432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x314330: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x314330u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x314334: 0x24020116  addiu       $v0, $zero, 0x116
    ctx->pc = 0x314334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x314338: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x314338u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x31433c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314340: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x314340u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x314344: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x314344u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x314348: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x314348u;
    {
        const bool branch_taken_0x314348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314348u;
        // 0x31434c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314348) {
            ctx->pc = 0x314428u;
            goto label_314428;
        }
    }
    ctx->pc = 0x314350u;
    // 0x314350: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x314350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x314354: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x314354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314358: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x314358u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31435c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31435cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314360: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x314360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x314364: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314368: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x314368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x31436c: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x31436cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x314370: 0xe24025  or          $t0, $a3, $v0
    ctx->pc = 0x314370u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x314374: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x314374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x314378: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x314378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31437c: 0x26820790  addiu       $v0, $s4, 0x790
    ctx->pc = 0x31437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x314380: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x314380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314384: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x314388: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x314388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x31438c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31438cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314390: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314394: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x314394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x314398: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x314398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31439c: 0x2683c  dsll32      $t5, $v0, 0
    ctx->pc = 0x31439cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3143a0: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x3143a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3143a4: 0x700d1389  pcpyld      $v0, $zero, $t5
    ctx->pc = 0x3143a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 13)));
    // 0x3143a8: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x3143a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3143ac: 0x3c0b7900  lui         $t3, 0x7900
    ctx->pc = 0x3143acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)30976 << 16));
    // 0x3143b0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3143b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3143b4: 0x356b7000  ori         $t3, $t3, 0x7000
    ctx->pc = 0x3143b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)28672);
    // 0x3143b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3143bc: 0x16d5825  or          $t3, $t3, $t5
    ctx->pc = 0x3143bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 13));
    // 0x3143c0: 0x240c000d  addiu       $t4, $zero, 0xD
    ctx->pc = 0x3143c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3143c4: 0x700b6b89  pcpyld      $t5, $zero, $t3
    ctx->pc = 0x3143c4u;
    SET_GPR_VEC(ctx, 13, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
label_3143c8:
    // 0x3143c8: 0x254b001f  addiu       $t3, $t2, 0x1F
    ctx->pc = 0x3143c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x3143cc: 0xb703c  dsll32      $t6, $t3, 0
    ctx->pc = 0x3143ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3143d0: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x3143d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x3143d4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x3143d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x3143d8: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x3143d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x3143dc: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x3143dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x3143e0: 0x16e7025  or          $t6, $t3, $t6
    ctx->pc = 0x3143e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) | GPR_U64(ctx, 14));
    // 0x3143e4: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x3143e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x3143e8: 0x12e7025  or          $t6, $t1, $t6
    ctx->pc = 0x3143e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
    // 0x3143ec: 0x154582b  sltu        $t3, $t2, $s4
    ctx->pc = 0x3143ecu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3143f0: 0xfc6e0000  sd          $t6, 0x0($v1)
    ctx->pc = 0x3143f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 14));
    // 0x3143f4: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x3143f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x3143f8: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x3143f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x3143fc: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x3143fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314400: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314404: 0xfc6d0000  sd          $t5, 0x0($v1)
    ctx->pc = 0x314404u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 13));
    // 0x314408: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x314408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x31440c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x31440cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x314410: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314414: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314418: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x314418u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x31441c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x31441cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x314420: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314420u;
    {
        const bool branch_taken_0x314420 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x314424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314420u;
        // 0x314424: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314420) {
            ctx->pc = 0x3143C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3143c8;
        }
    }
    ctx->pc = 0x314428u;
label_314428:
    // 0x314428: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x314428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31442c: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x31442cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x314430: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x314430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x314434: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x314434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314438: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x314438u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31443c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x31443cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x314440: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x314440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x314444: 0x24020156  addiu       $v0, $zero, 0x156
    ctx->pc = 0x314444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x314448: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x314448u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x31444c: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x31444cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x314450: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x314450u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314454: 0xfc600018  sd          $zero, 0x18($v1)
    ctx->pc = 0x314454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 0));
    // 0x314458: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x314458u;
    {
        const bool branch_taken_0x314458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314458u;
        // 0x31445c: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314458) {
            ctx->pc = 0x314548u;
            goto label_314548;
        }
    }
    ctx->pc = 0x314460u;
    // 0x314460: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x314460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314464: 0x144100  sll         $t0, $s4, 4
    ctx->pc = 0x314464u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x314468: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31446c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31446cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314470: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x314470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x314474: 0x4543c  dsll32      $t2, $a0, 16
    ctx->pc = 0x314474u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 16));
    // 0x314478: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x314478u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31447c: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x31447cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x314480: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x314480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x314484: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x314488: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x314488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31448c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31448cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x314490: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x314490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x314494: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x314494u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314498: 0xc44825  or          $t1, $a2, $a0
    ctx->pc = 0x314498u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x31449c: 0x26840790  addiu       $a0, $s4, 0x790
    ctx->pc = 0x31449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x3144a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3144a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3144a4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3144a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3144a8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3144a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3144ac: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3144acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3144b0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3144b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3144b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3144b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3144b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3144b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3144bc: 0x1022025  or          $a0, $t0, $v0
    ctx->pc = 0x3144bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x3144c0: 0x70061389  pcpyld      $v0, $zero, $a2
    ctx->pc = 0x3144c0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x3144c4: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x3144c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3144c8: 0x3c0c7900  lui         $t4, 0x7900
    ctx->pc = 0x3144c8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)30976 << 16));
    // 0x3144cc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3144ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3144d0: 0x358e7000  ori         $t6, $t4, 0x7000
    ctx->pc = 0x3144d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)28672);
    // 0x3144d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3144d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3144d8: 0x1c63025  or          $a2, $t6, $a2
    ctx->pc = 0x3144d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 6));
    // 0x3144dc: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x3144dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3144e0: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x3144e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3144e4: 0x70067389  pcpyld      $t6, $zero, $a2
    ctx->pc = 0x3144e4u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_3144e8:
    // 0x3144e8: 0x2566001f  addiu       $a2, $t3, 0x1F
    ctx->pc = 0x3144e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 31));
    // 0x3144ec: 0x6783c  dsll32      $t7, $a2, 0
    ctx->pc = 0x3144ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3144f0: 0xb303c  dsll32      $a2, $t3, 0
    ctx->pc = 0x3144f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 0));
    // 0x3144f4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x3144f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x3144f8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3144f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3144fc: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x3144fcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x314500: 0xcf7825  or          $t7, $a2, $t7
    ctx->pc = 0x314500u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 6) | GPR_U64(ctx, 15));
    // 0x314504: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x314504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x314508: 0x14f7825  or          $t7, $t2, $t7
    ctx->pc = 0x314508u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x31450c: 0x174302b  sltu        $a2, $t3, $s4
    ctx->pc = 0x31450cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x314510: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x314510u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x314514: 0xfc670008  sd          $a3, 0x8($v1)
    ctx->pc = 0x314514u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
    // 0x314518: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x314518u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x31451c: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x31451cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314520: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314524: 0xfc6e0000  sd          $t6, 0x0($v1)
    ctx->pc = 0x314524u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 14));
    // 0x314528: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x314528u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x31452c: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x31452cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x314530: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314530u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314534: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314538: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x314538u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x31453c: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x31453cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x314540: 0x14c0ffe9  bnez        $a2, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314540u;
    {
        const bool branch_taken_0x314540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x314544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314540u;
        // 0x314544: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314540) {
            ctx->pc = 0x3144E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3144e8;
        }
    }
    ctx->pc = 0x314548u;
label_314548:
    // 0x314548: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x314548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x31454c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31454cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314550: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x314550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x314554: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x314554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x314558: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x314558u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31455c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x31455cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314560: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x314560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x314564: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x314564u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x314568: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x314568u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x31456c: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x31456Cu;
    {
        const bool branch_taken_0x31456c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31456Cu;
        // 0x314570: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31456c) {
            ctx->pc = 0x314660u;
            goto label_314660;
        }
    }
    ctx->pc = 0x314574u;
    // 0x314574: 0x2684ffff  addiu       $a0, $s4, -0x1
    ctx->pc = 0x314574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314578: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x314578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x31457c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31457cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314580: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x314580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x314584: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x314584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314588: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31458c: 0x4543c  dsll32      $t2, $a0, 16
    ctx->pc = 0x31458cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) << (32 + 16));
    // 0x314590: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x314590u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x314594: 0x62438  dsll        $a0, $a2, 16
    ctx->pc = 0x314594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 16);
    // 0x314598: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x314598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x31459c: 0xc44825  or          $t1, $a2, $a0
    ctx->pc = 0x31459cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3145a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3145a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3145a4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3145a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3145a8: 0x26820790  addiu       $v0, $s4, 0x790
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x3145ac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3145acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3145b0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3145b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3145b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3145b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3145b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3145bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3145bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3145c0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x3145c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3145c4: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x3145c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x3145c8: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x3145c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3145cc: 0x70071389  pcpyld      $v0, $zero, $a3
    ctx->pc = 0x3145ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3145d0: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x3145d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3145d4: 0x3c0c7900  lui         $t4, 0x7900
    ctx->pc = 0x3145d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)30976 << 16));
    // 0x3145d8: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3145dc: 0x358e7000  ori         $t6, $t4, 0x7000
    ctx->pc = 0x3145dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)28672);
    // 0x3145e0: 0x34440010  ori         $a0, $v0, 0x10
    ctx->pc = 0x3145e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3145e4: 0x1c73825  or          $a3, $t6, $a3
    ctx->pc = 0x3145e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) | GPR_U64(ctx, 7));
    // 0x3145e8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3145e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3145ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3145ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3145f0: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x3145f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3145f4: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x3145f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3145f8: 0x70077389  pcpyld      $t6, $zero, $a3
    ctx->pc = 0x3145f8u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x3145fc: 0x0  nop
    ctx->pc = 0x3145fcu;
    // NOP
label_314600:
    // 0x314600: 0x2567001f  addiu       $a3, $t3, 0x1F
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 31));
    // 0x314604: 0x7783c  dsll32      $t7, $a3, 0
    ctx->pc = 0x314604u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) << (32 + 0));
    // 0x314608: 0xb383c  dsll32      $a3, $t3, 0
    ctx->pc = 0x314608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) << (32 + 0));
    // 0x31460c: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x31460cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x314610: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x314610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x314614: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x314614u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x314618: 0xef7825  or          $t7, $a3, $t7
    ctx->pc = 0x314618u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x31461c: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x314620: 0x14f7825  or          $t7, $t2, $t7
    ctx->pc = 0x314620u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 10) | GPR_U64(ctx, 15));
    // 0x314624: 0x174382b  sltu        $a3, $t3, $s4
    ctx->pc = 0x314624u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x314628: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x314628u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x31462c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x31462cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x314630: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x314630u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x314634: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314634u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314638: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x31463c: 0xfc6e0000  sd          $t6, 0x0($v1)
    ctx->pc = 0x31463cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 14));
    // 0x314640: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x314640u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x314644: 0xfc690010  sd          $t1, 0x10($v1)
    ctx->pc = 0x314644u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 9));
    // 0x314648: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314648u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x31464c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31464cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314650: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x314650u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x314654: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x314654u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x314658: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314658u;
    {
        const bool branch_taken_0x314658 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x31465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314658u;
        // 0x31465c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314658) {
            ctx->pc = 0x314600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314600;
        }
    }
    ctx->pc = 0x314660u;
label_314660:
    // 0x314660: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x314660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x314664: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314668: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x314668u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x31466c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x31466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x314670: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x314670u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314674: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x314674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x314678: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x314678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x31467c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x31467cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x314680: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x314680u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x314684: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x314684u;
    {
        const bool branch_taken_0x314684 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314684u;
        // 0x314688: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314684) {
            ctx->pc = 0x314778u;
            goto label_314778;
        }
    }
    ctx->pc = 0x31468Cu;
    // 0x31468c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x31468cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x314690: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x314690u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x314694: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x314694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x314698: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x314698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x31469c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31469cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3146a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3146a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3146a4: 0x44c3c  dsll32      $t1, $a0, 16
    ctx->pc = 0x3146a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3146a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3146a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3146ac: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x3146acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x3146b0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3146b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3146b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3146b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3146b8: 0x444025  or          $t0, $v0, $a0
    ctx->pc = 0x3146b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3146bc: 0x26820700  addiu       $v0, $s4, 0x700
    ctx->pc = 0x3146bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1792));
    // 0x3146c0: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3146c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3146c4: 0x26820790  addiu       $v0, $s4, 0x790
    ctx->pc = 0x3146c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1936));
    // 0x3146c8: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3146c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3146cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3146ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3146d0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3146d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3146d4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3146d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3146d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3146d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3146dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3146dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3146e0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3146e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3146e4: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x3146e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3146e8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3146e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3146ec: 0x700c1389  pcpyld      $v0, $zero, $t4
    ctx->pc = 0x3146ecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 12)));
    // 0x3146f0: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x3146f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3146f4: 0x3c0b7900  lui         $t3, 0x7900
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)30976 << 16));
    // 0x3146f8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3146f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3146fc: 0x356b7000  ori         $t3, $t3, 0x7000
    ctx->pc = 0x3146fcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)28672);
    // 0x314700: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x314700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x314704: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x314704u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x314708: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x314708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31470c: 0x240d000d  addiu       $t5, $zero, 0xD
    ctx->pc = 0x31470cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x314710: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x314710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x314714: 0x700b7389  pcpyld      $t6, $zero, $t3
    ctx->pc = 0x314714u;
    SET_GPR_VEC(ctx, 14, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 11)));
label_314718:
    // 0x314718: 0x254b001f  addiu       $t3, $t2, 0x1F
    ctx->pc = 0x314718u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x31471c: 0xb783c  dsll32      $t7, $t3, 0
    ctx->pc = 0x31471cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) << (32 + 0));
    // 0x314720: 0xa583c  dsll32      $t3, $t2, 0
    ctx->pc = 0x314720u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) << (32 + 0));
    // 0x314724: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x314724u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x314728: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x314728u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x31472c: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x31472cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x314730: 0x16f7825  or          $t7, $t3, $t7
    ctx->pc = 0x314730u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 11) | GPR_U64(ctx, 15));
    // 0x314734: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x314734u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x314738: 0x12f7825  or          $t7, $t1, $t7
    ctx->pc = 0x314738u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x31473c: 0x154582b  sltu        $t3, $t2, $s4
    ctx->pc = 0x31473cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x314740: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x314740u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x314744: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x314744u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x314748: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x314748u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x31474c: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x31474cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314750: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314754: 0xfc6e0000  sd          $t6, 0x0($v1)
    ctx->pc = 0x314754u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 14));
    // 0x314758: 0xfc6d0008  sd          $t5, 0x8($v1)
    ctx->pc = 0x314758u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 13));
    // 0x31475c: 0xfc680010  sd          $t0, 0x10($v1)
    ctx->pc = 0x31475cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 8));
    // 0x314760: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314760u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x314764: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314768: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x314768u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x31476c: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x31476cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x314770: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314770u;
    {
        const bool branch_taken_0x314770 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x314774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314770u;
        // 0x314774: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314770) {
            ctx->pc = 0x314718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314718;
        }
    }
    ctx->pc = 0x314778u;
label_314778:
    // 0x314778: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x314778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31477c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x31477cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x314780: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x314780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314784: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x314784u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x314788: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x314788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31478c: 0xfc620010  sd          $v0, 0x10($v1)
    ctx->pc = 0x31478cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
    // 0x314790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x314790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314794: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x314794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x314798: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x314798u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x31479c: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x31479Cu;
    SET_GPR_U32(ctx, 31, 0x3147A4u);
    ctx->pc = 0x3147A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31479Cu;
    // 0x3147a0: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x31479Cu, 0x3147A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147A4u;
label_3147a4:
    // 0x3147a4: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3147a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3147a8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3147a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3147ac: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3147acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3147b0: 0x34421080  ori         $v0, $v0, 0x1080
    ctx->pc = 0x3147b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4224);
    // 0x3147b4: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x3147b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
    // 0x3147b8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3147b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3147bc: 0xc0c40b8  jal         func_3102E0
    ctx->pc = 0x3147BCu;
    SET_GPR_U32(ctx, 31, 0x3147C4u);
    ctx->pc = 0x3147C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147BCu;
    // 0x3147c0: 0x463825  or          $a3, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3102E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3102E0u, 0x3147BCu, 0x3147C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147C4u;
label_3147c4:
    // 0x3147c4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3147c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3147c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3147c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3147cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3147ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3147d0: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x3147d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3147d4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3147d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3147d8: 0x14082b  sltu        $at, $zero, $s4
    ctx->pc = 0x3147d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3147dc: 0x527b8  dsll        $a0, $a1, 30
    ctx->pc = 0x3147dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 30);
    // 0x3147e0: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x3147e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x3147e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3147e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3147e8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3147e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x3147ec: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x3147ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x3147f0: 0x34840084  ori         $a0, $a0, 0x84
    ctx->pc = 0x3147f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)132);
    // 0x3147f4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x3147f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x3147f8: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x3147f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x3147fc: 0x2a42025  or          $a0, $s5, $a0
    ctx->pc = 0x3147fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) | GPR_U64(ctx, 4));
    // 0x314800: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x314800u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x314804: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x314804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314808: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x314808u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x31480c: 0x24040116  addiu       $a0, $zero, 0x116
    ctx->pc = 0x31480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x314810: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x314814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314818: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x314818u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x31481c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x31481cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x314820: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x314820u;
    {
        const bool branch_taken_0x314820 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x314824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314820u;
        // 0x314824: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314820) {
            ctx->pc = 0x314910u;
            goto label_314910;
        }
    }
    ctx->pc = 0x314828u;
    // 0x314828: 0x144040  sll         $t0, $s4, 1
    ctx->pc = 0x314828u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x31482c: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x31482cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x314830: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x314830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x314834: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x314838: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x314838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31483c: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x31483cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314840: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x314840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x314844: 0x25040790  addiu       $a0, $t0, 0x790
    ctx->pc = 0x314844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1936));
    // 0x314848: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x314848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x31484c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31484cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x314850: 0x142940  sll         $a1, $s4, 5
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x314854: 0x26880708  addiu       $t0, $s4, 0x708
    ctx->pc = 0x314854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 1800));
    // 0x314858: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x314858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x31485c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31485cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314860: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x314860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x314864: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x314868: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x314868u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31486c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x31486cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x314870: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x314870u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x314874: 0x9483e  dsrl32      $t1, $t1, 0
    ctx->pc = 0x314874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x314878: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x314878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31487c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31487cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x314880: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x314880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x314884: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x314884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x314888: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x314888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x31488c: 0x3c080008  lui         $t0, 0x8
    ctx->pc = 0x31488cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8 << 16));
    // 0x314890: 0x240e0040  addiu       $t6, $zero, 0x40
    ctx->pc = 0x314890u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314894: 0x350d0008  ori         $t5, $t0, 0x8
    ctx->pc = 0x314894u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x314898: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x314898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31489c: 0x3c087900  lui         $t0, 0x7900
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30976 << 16));
    // 0x3148a0: 0x240a000d  addiu       $t2, $zero, 0xD
    ctx->pc = 0x3148a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3148a4: 0x350b7080  ori         $t3, $t0, 0x7080
    ctx->pc = 0x3148a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)28800);
    // 0x3148a8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x3148a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3148ac: 0x0  nop
    ctx->pc = 0x3148acu;
    // NOP
label_3148b0:
    // 0x3148b0: 0x24e8001f  addiu       $t0, $a3, 0x1F
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x3148b4: 0x8783c  dsll32      $t7, $t0, 0
    ctx->pc = 0x3148b4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3148b8: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x3148b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3148bc: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x3148bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x3148c0: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3148c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3148c4: 0xf7c38  dsll        $t7, $t7, 16
    ctx->pc = 0x3148c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 16);
    // 0x3148c8: 0x10f7825  or          $t7, $t0, $t7
    ctx->pc = 0x3148c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x3148cc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x3148ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x3148d0: 0x1e67825  or          $t7, $t7, $a2
    ctx->pc = 0x3148d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x3148d4: 0xf4402b  sltu        $t0, $a3, $s4
    ctx->pc = 0x3148d4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3148d8: 0xfc6f0000  sd          $t7, 0x0($v1)
    ctx->pc = 0x3148d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 15));
    // 0x3148dc: 0xfc6e0008  sd          $t6, 0x8($v1)
    ctx->pc = 0x3148dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 14));
    // 0x3148e0: 0xfc6d0010  sd          $t5, 0x10($v1)
    ctx->pc = 0x3148e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 13));
    // 0x3148e4: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x3148e4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x3148e8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3148e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3148ec: 0xfc6b0000  sd          $t3, 0x0($v1)
    ctx->pc = 0x3148ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 11));
    // 0x3148f0: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x3148f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x3148f4: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x3148f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x3148f8: 0xfc6c0018  sd          $t4, 0x18($v1)
    ctx->pc = 0x3148f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 12));
    // 0x3148fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3148fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314900: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x314900u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x314904: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x314904u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x314908: 0x1500ffe9  bnez        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x314908u;
    {
        const bool branch_taken_0x314908 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x31490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314908u;
        // 0x31490c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314908) {
            ctx->pc = 0x3148B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3148b0;
        }
    }
    ctx->pc = 0x314910u;
label_314910:
    // 0x314910: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x314914: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x314914u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x314918: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x314918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x31491c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x314920: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x314920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x314924: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x314924u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x314928: 0x3c0400df  lui         $a0, 0xDF
    ctx->pc = 0x314928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)223 << 16));
    // 0x31492c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x31492cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x314930: 0x3c0401ff  lui         $a0, 0x1FF
    ctx->pc = 0x314930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)511 << 16));
    // 0x314934: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x314934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x314938: 0xfc650010  sd          $a1, 0x10($v1)
    ctx->pc = 0x314938u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 5));
    // 0x31493c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x314940: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x314940u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x314944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x314944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314948: 0x8c27f014  lw          $a3, -0xFEC($at)
    ctx->pc = 0x314948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963220)));
    // 0x31494c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31494cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314950: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x314950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x314954: 0xdce70020  ld          $a3, 0x20($a3)
    ctx->pc = 0x314954u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x314958: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x314958u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x31495c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x31495cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x314960: 0xfc600010  sd          $zero, 0x10($v1)
    ctx->pc = 0x314960u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 0));
    // 0x314964: 0xfc640018  sd          $a0, 0x18($v1)
    ctx->pc = 0x314964u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 4));
    // 0x314968: 0x8f848b30  lw          $a0, -0x74D0($gp)
    ctx->pc = 0x314968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x31496c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x314970: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x314970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x314974: 0x63f02  srl         $a3, $a2, 28
    ctx->pc = 0x314974u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x314978: 0x63682  srl         $a2, $a2, 26
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 26));
    // 0x31497c: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x31497cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x314980: 0x10c50011  beq         $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x314980u;
    {
        const bool branch_taken_0x314980 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x314984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314980u;
        // 0x314984: 0x30e7000f  andi        $a3, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314980) {
            ctx->pc = 0x3149C8u;
            goto label_3149c8;
        }
    }
    ctx->pc = 0x314988u;
    // 0x314988: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x314988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31498c: 0x10c50006  beq         $a2, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31498Cu;
    {
        const bool branch_taken_0x31498c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x31498c) {
            ctx->pc = 0x3149A8u;
            goto label_3149a8;
        }
    }
    ctx->pc = 0x314994u;
    // 0x314994: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x314994u;
    {
        const bool branch_taken_0x314994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x314994) {
            ctx->pc = 0x3149A8u;
            goto label_3149a8;
        }
    }
    ctx->pc = 0x31499Cu;
    // 0x31499c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x31499Cu;
    {
        const bool branch_taken_0x31499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31499c) {
            ctx->pc = 0x3149F8u;
            goto label_3149f8;
        }
    }
    ctx->pc = 0x3149A4u;
    // 0x3149a4: 0x0  nop
    ctx->pc = 0x3149a4u;
    // NOP
label_3149a8:
    // 0x3149a8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3149a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3149ac: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3149ACu;
    {
        const bool branch_taken_0x3149ac = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3149B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149ACu;
        // 0x3149b0: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149ac) {
            ctx->pc = 0x3149BCu;
            goto label_3149bc;
        }
    }
    ctx->pc = 0x3149B4u;
    // 0x3149b4: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x3149b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x3149b8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x3149b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_3149bc:
    // 0x3149bc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3149bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3149c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3149C0u;
    {
        const bool branch_taken_0x3149c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C0u;
        // 0x3149c4: 0xa7a50100  sh          $a1, 0x100($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149c0) {
            ctx->pc = 0x3149F8u;
            goto label_3149f8;
        }
    }
    ctx->pc = 0x3149C8u;
label_3149c8:
    // 0x3149c8: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x3149c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3149cc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3149CCu;
    {
        const bool branch_taken_0x3149cc = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x3149D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149CCu;
        // 0x3149d0: 0x62903  sra         $a1, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149cc) {
            ctx->pc = 0x3149DCu;
            goto label_3149dc;
        }
    }
    ctx->pc = 0x3149D4u;
    // 0x3149d4: 0x24c5000f  addiu       $a1, $a2, 0xF
    ctx->pc = 0x3149d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x3149d8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x3149d8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
label_3149dc:
    // 0x3149dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3149dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3149e0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3149e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3149e4: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x3149e4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x3149e8: 0x0  nop
    ctx->pc = 0x3149e8u;
    // NOP
    // 0x3149ec: 0x0  nop
    ctx->pc = 0x3149ecu;
    // NOP
    // 0x3149f0: 0x2812  mflo        $a1
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x3149f4: 0xa7a50100  sh          $a1, 0x100($sp)
    ctx->pc = 0x3149f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 5));
label_3149f8:
    // 0x3149f8: 0x97a50100  lhu         $a1, 0x100($sp)
    ctx->pc = 0x3149f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3149fc: 0xa0282d  daddu       $a1, $a1, $zero
    ctx->pc = 0x3149fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a00: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x314a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x314a04: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x314a04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x314a08: 0x8f868b2c  lw          $a2, -0x74D4($gp)
    ctx->pc = 0x314a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x314a0c: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x314a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x314a10: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314A10u;
    {
        const bool branch_taken_0x314a10 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x314A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A10u;
        // 0x314a14: 0x52103  sra         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a10) {
            ctx->pc = 0x314A20u;
            goto label_314a20;
        }
    }
    ctx->pc = 0x314A18u;
    // 0x314a18: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x314a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x314a1c: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x314a1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_314a20:
    // 0x314a20: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x314a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x314a24: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x314a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x314a28: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x314a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x314a2c: 0xacc4000c  sw          $a0, 0xC($a2)
    ctx->pc = 0x314a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
    // 0x314a30: 0x8f858b28  lw          $a1, -0x74D8($gp)
    ctx->pc = 0x314a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
    // 0x314a34: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x314a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x314a38: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314A38u;
    {
        const bool branch_taken_0x314a38 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x314A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A38u;
        // 0x314a3c: 0x41903  sra         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a38) {
            ctx->pc = 0x314A48u;
            goto label_314a48;
        }
    }
    ctx->pc = 0x314A40u;
    // 0x314a40: 0x2483000f  addiu       $v1, $a0, 0xF
    ctx->pc = 0x314a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x314a44: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x314a44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_314a48:
    // 0x314a48: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x314a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x314a4c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x314a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x314a50: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x314a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x314a54: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x314a54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x314a58: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x314a5c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x314a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x314a60: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x314a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x314a64: 0xa4a40000  sh          $a0, 0x0($a1)
    ctx->pc = 0x314a64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 4));
label_314a68:
    // 0x314a68: 0x2ee30002  sltiu       $v1, $s7, 0x2
    ctx->pc = 0x314a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x314a6c: 0x1460fab8  bnez        $v1, . + 4 + (-0x548 << 2)
    ctx->pc = 0x314A6Cu;
    {
        const bool branch_taken_0x314a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314a6c) {
            ctx->pc = 0x313550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313550;
        }
    }
    ctx->pc = 0x314A74u;
    // 0x314a74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x314A74u;
    {
        const bool branch_taken_0x314a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x314a74) {
            ctx->pc = 0x314AA8u;
            goto label_314aa8;
        }
    }
    ctx->pc = 0x314A7Cu;
    // 0x314a7c: 0x0  nop
    ctx->pc = 0x314a7cu;
    // NOP
label_314a80:
    // 0x314a80: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x314a80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x314a84: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x314a84u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x314a88: 0x278382bc  addiu       $v1, $gp, -0x7D44
    ctx->pc = 0x314a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935228));
    // 0x314a8c: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x314a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x314a90: 0x2673dbd0  addiu       $s3, $s3, -0x2430
    ctx->pc = 0x314a90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958032));
    // 0x314a94: 0x2652dfd0  addiu       $s2, $s2, -0x2030
    ctx->pc = 0x314a94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959056));
    // 0x314a98: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x314a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x314a9c: 0x2631dbc0  addiu       $s1, $s1, -0x2440
    ctx->pc = 0x314a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958016));
    // 0x314aa0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x314AA0u;
    {
        const bool branch_taken_0x314aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AA0u;
        // 0x314aa4: 0x279e8b20  addiu       $fp, $gp, -0x74E0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314aa0) {
            ctx->pc = 0x314A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314a68;
        }
    }
    ctx->pc = 0x314AA8u;
label_314aa8:
    // 0x314aa8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x314aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314aac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x314aacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x314ab0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x314ab0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x314ab4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x314ab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314ab8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x314ab8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314abc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x314abcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x314ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x314ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x314accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x314AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AD0u;
        // 0x314ad4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314AD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314AD8u;
}
