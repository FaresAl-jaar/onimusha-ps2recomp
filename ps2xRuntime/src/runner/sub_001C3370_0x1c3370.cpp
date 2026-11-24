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

// Function: sub_001C3370
// Address: 0x1c3370 - 0x1c36dc
void sub_001C3370_0x1c3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3370_0x1c3370");
#endif

    switch (ctx->pc) {
        case 0x1c339cu: goto label_1c339c;
        case 0x1c33b4u: goto label_1c33b4;
        case 0x1c33d8u: goto label_1c33d8;
        case 0x1c34f4u: goto label_1c34f4;
        case 0x1c34fcu: goto label_1c34fc;
        case 0x1c3518u: goto label_1c3518;
        case 0x1c3534u: goto label_1c3534;
        case 0x1c3574u: goto label_1c3574;
        case 0x1c357cu: goto label_1c357c;
        case 0x1c35a8u: goto label_1c35a8;
        case 0x1c35b8u: goto label_1c35b8;
        case 0x1c35c8u: goto label_1c35c8;
        case 0x1c35d8u: goto label_1c35d8;
        case 0x1c35f8u: goto label_1c35f8;
        case 0x1c3640u: goto label_1c3640;
        case 0x1c3654u: goto label_1c3654;
        case 0x1c3678u: goto label_1c3678;
        case 0x1c368cu: goto label_1c368c;
        case 0x1c36a4u: goto label_1c36a4;
        default: break;
    }

    ctx->pc = 0x1c3370u;

    // 0x1c3370: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x1c3370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
    // 0x1c3374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c3378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c337c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c337cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c3380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c3384: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1c3384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c3388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c338c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c3394: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1C3394u;
    SET_GPR_U32(ctx, 31, 0x1C339Cu);
    ctx->pc = 0x1C3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3394u;
    // 0x1c3398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1C3394u, 0x1C339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C339Cu;
label_1c339c:
    // 0x1c339c: 0x92027844  lbu         $v0, 0x7844($s0)
    ctx->pc = 0x1c339cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30788)));
    // 0x1c33a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C33A0u;
    {
        const bool branch_taken_0x1c33a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c33a0) {
            ctx->pc = 0x1C33B8u;
            goto label_1c33b8;
        }
    }
    ctx->pc = 0x1C33A8u;
    // 0x1c33a8: 0x8e0578b4  lw          $a1, 0x78B4($s0)
    ctx->pc = 0x1c33a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30900)));
    // 0x1c33ac: 0xc06fffc  jal         func_1BFFF0
    ctx->pc = 0x1C33ACu;
    SET_GPR_U32(ctx, 31, 0x1C33B4u);
    ctx->pc = 0x1C33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C33ACu;
    // 0x1c33b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFFF0u, 0x1C33ACu, 0x1C33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C33B4u;
label_1c33b4:
    // 0x1c33b4: 0x0  nop
    ctx->pc = 0x1c33b4u;
    // NOP
label_1c33b8:
    // 0x1c33b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c33b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c33bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c33c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c33c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c33c8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1c33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c33cc: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1c33ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1c33d0: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x1c33d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
    // 0x1c33d4: 0x0  nop
    ctx->pc = 0x1c33d4u;
    // NOP
label_1c33d8:
    // 0x1c33d8: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1c33d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c33dc: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1c33dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1c33e0: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x1c33e0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1c33e4: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1c33e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c33e8: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c33e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c33ec: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1c33ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1c33f0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1c33f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1c33f4: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c33f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c33f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1c33f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1c33fc: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x1c33fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1c3400: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c3400u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c3404: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c3404u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c3408: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c3408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c340c: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x1c340cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1c3410: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1c3410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1c3414: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c3414u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c3418: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c3418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c341c: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x1c341cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1c3420: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c3420u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c3424: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c3424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c3428: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c3428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c342c: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x1c342cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1c3430: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1c3430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1c3434: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c3434u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c3438: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c3438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c343c: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x1c343cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x1c3440: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c3440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c3444: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c3444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c3448: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c3448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c344c: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x1c344cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1c3450: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1c3450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1c3454: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c3454u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c3458: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c3458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c345c: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x1c345cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1c3460: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c3460u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c3464: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c3464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c3468: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c3468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c346c: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x1c346cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1c3470: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1c3470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1c3474: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c3474u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c3478: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c3478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c347c: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x1c347cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1c3480: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c3480u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c3484: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c3484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c3488: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c3488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c348c: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x1c348cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1c3490: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1c3490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1c3494: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c3494u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c3498: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c3498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c349c: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x1c349cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x1c34a0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c34a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c34a4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c34a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c34a8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c34a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c34ac: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x1c34acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1c34b0: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x1c34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x1c34b4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1c34b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1c34b8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1c34b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1c34bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1c34bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1c34c0: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x1c34c4: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1c34c8: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1c34c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1c34cc: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1c34ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1c34d0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1c34d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1c34d4: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x1c34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x1c34d8: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x1c34d8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c34dc: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1C34DCu;
    {
        const bool branch_taken_0x1c34dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34DCu;
        // 0x1c34e0: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34dc) {
            ctx->pc = 0x1C33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c33d8;
        }
    }
    ctx->pc = 0x1C34E4u;
    // 0x1c34e4: 0x8e0578d0  lw          $a1, 0x78D0($s0)
    ctx->pc = 0x1c34e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30928)));
    // 0x1c34e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34ec: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1C34ECu;
    SET_GPR_U32(ctx, 31, 0x1C34F4u);
    ctx->pc = 0x1C34F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34ECu;
    // 0x1c34f0: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1C34ECu, 0x1C34F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34F4u;
label_1c34f4:
    // 0x1c34f4: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1C34F4u;
    SET_GPR_U32(ctx, 31, 0x1C34FCu);
    ctx->pc = 0x1C34F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C34F4u;
    // 0x1c34f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1C34F4u, 0x1C34FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C34FCu;
label_1c34fc:
    // 0x1c34fc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c34fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3504: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c3504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c3508: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1c3508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1c350c: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x1c350cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1c3510: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C3510u;
    SET_GPR_U32(ctx, 31, 0x1C3518u);
    ctx->pc = 0x1C3514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3510u;
    // 0x1c3514: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C3510u, 0x1C3518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3518u;
label_1c3518:
    // 0x1c3518: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c351c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3520: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3524: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1c3528: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1c3528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1c352c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1C352Cu;
    SET_GPR_U32(ctx, 31, 0x1C3534u);
    ctx->pc = 0x1C3530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C352Cu;
    // 0x1c3530: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1C352Cu, 0x1C3534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3534u;
label_1c3534:
    // 0x1c3534: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c3534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3538: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c353c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1c3540: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c3540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c3544: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1c3544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1c3548: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c354c: 0x712025  or          $a0, $v1, $s1
    ctx->pc = 0x1c354cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1c3550: 0x9e0378d0  lwu         $v1, 0x78D0($s0)
    ctx->pc = 0x1c3550u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 30928)));
    // 0x1c3554: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1c3554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1c3558: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1c3558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1c355c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c355cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3560: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c3560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3564: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1c3564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1c3568: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1c3568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1c356c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C356Cu;
    SET_GPR_U32(ctx, 31, 0x1C3574u);
    ctx->pc = 0x1C3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C356Cu;
    // 0x1c3570: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C356Cu, 0x1C3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3574u;
label_1c3574:
    // 0x1c3574: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1C3574u;
    SET_GPR_U32(ctx, 31, 0x1C357Cu);
    ctx->pc = 0x1C3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3574u;
    // 0x1c3578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1C3574u, 0x1C357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C357Cu;
label_1c357c:
    // 0x1c357c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1c357cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3584: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1c3584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1c3588: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1c358c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3590: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c3590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c3594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3598: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1c3598u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1c359c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1c359cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1c35a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C35A0u;
    SET_GPR_U32(ctx, 31, 0x1C35A8u);
    ctx->pc = 0x1C35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35A0u;
    // 0x1c35a4: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C35A0u, 0x1C35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35A8u;
label_1c35a8:
    // 0x1c35a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35ac: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1c35acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c35b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C35B0u;
    SET_GPR_U32(ctx, 31, 0x1C35B8u);
    ctx->pc = 0x1C35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35B0u;
    // 0x1c35b4: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C35B0u, 0x1C35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35B8u;
label_1c35b8:
    // 0x1c35b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c35bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C35C0u;
    SET_GPR_U32(ctx, 31, 0x1C35C8u);
    ctx->pc = 0x1C35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35C0u;
    // 0x1c35c4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C35C0u, 0x1C35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35C8u;
label_1c35c8:
    // 0x1c35c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c35c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c35ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c35d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C35D0u;
    SET_GPR_U32(ctx, 31, 0x1C35D8u);
    ctx->pc = 0x1C35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35D0u;
    // 0x1c35d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C35D0u, 0x1C35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35D8u;
label_1c35d8:
    // 0x1c35d8: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1c35d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1c35dc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c35dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c35e0: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1c35e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c35e4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C35E4u;
    {
        const bool branch_taken_0x1c35e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35E4u;
        // 0x1c35e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35e4) {
            ctx->pc = 0x1C36C0u;
            goto label_1c36c0;
        }
    }
    ctx->pc = 0x1C35ECu;
    // 0x1c35ec: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c35f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c35f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c35f4: 0x0  nop
    ctx->pc = 0x1c35f4u;
    // NOP
label_1c35f8:
    // 0x1c35f8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1c35f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1c35fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c35fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3600: 0x9e0678c0  lwu         $a2, 0x78C0($s0)
    ctx->pc = 0x1c3600u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 30912)));
    // 0x1c3604: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1c3604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1c3608: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1c3608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1c360c: 0x8e0278c4  lw          $v0, 0x78C4($s0)
    ctx->pc = 0x1c360cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30916)));
    // 0x1c3610: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1c3610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1c3614: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1c3614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1c3618: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1c361c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3620: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1c3620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1c3624: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1c3624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1c3628: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c362c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c362cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1c3630: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1c3634: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c3634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c3638: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3638u;
    SET_GPR_U32(ctx, 31, 0x1C3640u);
    ctx->pc = 0x1C363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3638u;
    // 0x1c363c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3638u, 0x1C3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3640u;
label_1c3640:
    // 0x1c3640: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c3640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c3644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3648: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c364c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C364Cu;
    SET_GPR_U32(ctx, 31, 0x1C3654u);
    ctx->pc = 0x1C3650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C364Cu;
    // 0x1c3650: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C364Cu, 0x1C3654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3654u;
label_1c3654:
    // 0x1c3654: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c3654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3658: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1c3658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1c365c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1c365cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1c3660: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1c3660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1c3664: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c366c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c3670: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3670u;
    SET_GPR_U32(ctx, 31, 0x1C3678u);
    ctx->pc = 0x1C3674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3670u;
    // 0x1c3674: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3670u, 0x1C3678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3678u;
label_1c3678:
    // 0x1c3678: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1c3678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1c367c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c367cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3680: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c3680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3684: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C3684u;
    SET_GPR_U32(ctx, 31, 0x1C368Cu);
    ctx->pc = 0x1C3688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3684u;
    // 0x1c3688: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C3684u, 0x1C368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C368Cu;
label_1c368c:
    // 0x1c368c: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1c368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1c3690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3694: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1c3694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1c3698: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c3698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c369c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1C369Cu;
    SET_GPR_U32(ctx, 31, 0x1C36A4u);
    ctx->pc = 0x1C36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C369Cu;
    // 0x1c36a0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1C369Cu, 0x1C36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C36A4u;
label_1c36a4:
    // 0x1c36a4: 0x8e0378c8  lw          $v1, 0x78C8($s0)
    ctx->pc = 0x1c36a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30920)));
    // 0x1c36a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c36a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c36ac: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x1c36acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x1c36b0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1c36b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1c36b4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1c36b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c36b8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1C36B8u;
    {
        const bool branch_taken_0x1c36b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C36BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36B8u;
        // 0x1c36bc: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36b8) {
            ctx->pc = 0x1C35F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c35f8;
        }
    }
    ctx->pc = 0x1C36C0u;
label_1c36c0:
    // 0x1c36c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c36c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c36c4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c36c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c36c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c36c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c36cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c36ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c36d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c36d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c36d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C36D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C36D4u;
        // 0x1c36d8: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C36D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C36DCu;
}
