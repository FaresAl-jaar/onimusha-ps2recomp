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

// Function: sub_0022B660
// Address: 0x22b660 - 0x22b94c
void sub_0022B660_0x22b660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B660_0x22b660");
#endif

    switch (ctx->pc) {
        case 0x22b660u: goto label_22b660;
        case 0x22b664u: goto label_22b664;
        case 0x22b668u: goto label_22b668;
        case 0x22b66cu: goto label_22b66c;
        case 0x22b670u: goto label_22b670;
        case 0x22b674u: goto label_22b674;
        case 0x22b678u: goto label_22b678;
        case 0x22b67cu: goto label_22b67c;
        case 0x22b680u: goto label_22b680;
        case 0x22b684u: goto label_22b684;
        case 0x22b688u: goto label_22b688;
        case 0x22b68cu: goto label_22b68c;
        case 0x22b690u: goto label_22b690;
        case 0x22b694u: goto label_22b694;
        case 0x22b698u: goto label_22b698;
        case 0x22b69cu: goto label_22b69c;
        case 0x22b6a0u: goto label_22b6a0;
        case 0x22b6a4u: goto label_22b6a4;
        case 0x22b6a8u: goto label_22b6a8;
        case 0x22b6acu: goto label_22b6ac;
        case 0x22b6b0u: goto label_22b6b0;
        case 0x22b6b4u: goto label_22b6b4;
        case 0x22b6b8u: goto label_22b6b8;
        case 0x22b6bcu: goto label_22b6bc;
        case 0x22b6c0u: goto label_22b6c0;
        case 0x22b6c4u: goto label_22b6c4;
        case 0x22b6c8u: goto label_22b6c8;
        case 0x22b6ccu: goto label_22b6cc;
        case 0x22b6d0u: goto label_22b6d0;
        case 0x22b6d4u: goto label_22b6d4;
        case 0x22b6d8u: goto label_22b6d8;
        case 0x22b6dcu: goto label_22b6dc;
        case 0x22b6e0u: goto label_22b6e0;
        case 0x22b6e4u: goto label_22b6e4;
        case 0x22b6e8u: goto label_22b6e8;
        case 0x22b6ecu: goto label_22b6ec;
        case 0x22b6f0u: goto label_22b6f0;
        case 0x22b6f4u: goto label_22b6f4;
        case 0x22b6f8u: goto label_22b6f8;
        case 0x22b6fcu: goto label_22b6fc;
        case 0x22b700u: goto label_22b700;
        case 0x22b704u: goto label_22b704;
        case 0x22b708u: goto label_22b708;
        case 0x22b70cu: goto label_22b70c;
        case 0x22b710u: goto label_22b710;
        case 0x22b714u: goto label_22b714;
        case 0x22b718u: goto label_22b718;
        case 0x22b71cu: goto label_22b71c;
        case 0x22b720u: goto label_22b720;
        case 0x22b724u: goto label_22b724;
        case 0x22b728u: goto label_22b728;
        case 0x22b72cu: goto label_22b72c;
        case 0x22b730u: goto label_22b730;
        case 0x22b734u: goto label_22b734;
        case 0x22b738u: goto label_22b738;
        case 0x22b73cu: goto label_22b73c;
        case 0x22b740u: goto label_22b740;
        case 0x22b744u: goto label_22b744;
        case 0x22b748u: goto label_22b748;
        case 0x22b74cu: goto label_22b74c;
        case 0x22b750u: goto label_22b750;
        case 0x22b754u: goto label_22b754;
        case 0x22b758u: goto label_22b758;
        case 0x22b75cu: goto label_22b75c;
        case 0x22b760u: goto label_22b760;
        case 0x22b764u: goto label_22b764;
        case 0x22b768u: goto label_22b768;
        case 0x22b76cu: goto label_22b76c;
        case 0x22b770u: goto label_22b770;
        case 0x22b774u: goto label_22b774;
        case 0x22b778u: goto label_22b778;
        case 0x22b77cu: goto label_22b77c;
        case 0x22b780u: goto label_22b780;
        case 0x22b784u: goto label_22b784;
        case 0x22b788u: goto label_22b788;
        case 0x22b78cu: goto label_22b78c;
        case 0x22b790u: goto label_22b790;
        case 0x22b794u: goto label_22b794;
        case 0x22b798u: goto label_22b798;
        case 0x22b79cu: goto label_22b79c;
        case 0x22b7a0u: goto label_22b7a0;
        case 0x22b7a4u: goto label_22b7a4;
        case 0x22b7a8u: goto label_22b7a8;
        case 0x22b7acu: goto label_22b7ac;
        case 0x22b7b0u: goto label_22b7b0;
        case 0x22b7b4u: goto label_22b7b4;
        case 0x22b7b8u: goto label_22b7b8;
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b7c0u: goto label_22b7c0;
        case 0x22b7c4u: goto label_22b7c4;
        case 0x22b7c8u: goto label_22b7c8;
        case 0x22b7ccu: goto label_22b7cc;
        case 0x22b7d0u: goto label_22b7d0;
        case 0x22b7d4u: goto label_22b7d4;
        case 0x22b7d8u: goto label_22b7d8;
        case 0x22b7dcu: goto label_22b7dc;
        case 0x22b7e0u: goto label_22b7e0;
        case 0x22b7e4u: goto label_22b7e4;
        case 0x22b7e8u: goto label_22b7e8;
        case 0x22b7ecu: goto label_22b7ec;
        case 0x22b7f0u: goto label_22b7f0;
        case 0x22b7f4u: goto label_22b7f4;
        case 0x22b7f8u: goto label_22b7f8;
        case 0x22b7fcu: goto label_22b7fc;
        case 0x22b800u: goto label_22b800;
        case 0x22b804u: goto label_22b804;
        case 0x22b808u: goto label_22b808;
        case 0x22b80cu: goto label_22b80c;
        case 0x22b810u: goto label_22b810;
        case 0x22b814u: goto label_22b814;
        case 0x22b818u: goto label_22b818;
        case 0x22b81cu: goto label_22b81c;
        case 0x22b820u: goto label_22b820;
        case 0x22b824u: goto label_22b824;
        case 0x22b828u: goto label_22b828;
        case 0x22b82cu: goto label_22b82c;
        case 0x22b830u: goto label_22b830;
        case 0x22b834u: goto label_22b834;
        case 0x22b838u: goto label_22b838;
        case 0x22b83cu: goto label_22b83c;
        case 0x22b840u: goto label_22b840;
        case 0x22b844u: goto label_22b844;
        case 0x22b848u: goto label_22b848;
        case 0x22b84cu: goto label_22b84c;
        case 0x22b850u: goto label_22b850;
        case 0x22b854u: goto label_22b854;
        case 0x22b858u: goto label_22b858;
        case 0x22b85cu: goto label_22b85c;
        case 0x22b860u: goto label_22b860;
        case 0x22b864u: goto label_22b864;
        case 0x22b868u: goto label_22b868;
        case 0x22b86cu: goto label_22b86c;
        case 0x22b870u: goto label_22b870;
        case 0x22b874u: goto label_22b874;
        case 0x22b878u: goto label_22b878;
        case 0x22b87cu: goto label_22b87c;
        case 0x22b880u: goto label_22b880;
        case 0x22b884u: goto label_22b884;
        case 0x22b888u: goto label_22b888;
        case 0x22b88cu: goto label_22b88c;
        case 0x22b890u: goto label_22b890;
        case 0x22b894u: goto label_22b894;
        case 0x22b898u: goto label_22b898;
        case 0x22b89cu: goto label_22b89c;
        case 0x22b8a0u: goto label_22b8a0;
        case 0x22b8a4u: goto label_22b8a4;
        case 0x22b8a8u: goto label_22b8a8;
        case 0x22b8acu: goto label_22b8ac;
        case 0x22b8b0u: goto label_22b8b0;
        case 0x22b8b4u: goto label_22b8b4;
        case 0x22b8b8u: goto label_22b8b8;
        case 0x22b8bcu: goto label_22b8bc;
        case 0x22b8c0u: goto label_22b8c0;
        case 0x22b8c4u: goto label_22b8c4;
        case 0x22b8c8u: goto label_22b8c8;
        case 0x22b8ccu: goto label_22b8cc;
        case 0x22b8d0u: goto label_22b8d0;
        case 0x22b8d4u: goto label_22b8d4;
        case 0x22b8d8u: goto label_22b8d8;
        case 0x22b8dcu: goto label_22b8dc;
        case 0x22b8e0u: goto label_22b8e0;
        case 0x22b8e4u: goto label_22b8e4;
        case 0x22b8e8u: goto label_22b8e8;
        case 0x22b8ecu: goto label_22b8ec;
        case 0x22b8f0u: goto label_22b8f0;
        case 0x22b8f4u: goto label_22b8f4;
        case 0x22b8f8u: goto label_22b8f8;
        case 0x22b8fcu: goto label_22b8fc;
        case 0x22b900u: goto label_22b900;
        case 0x22b904u: goto label_22b904;
        case 0x22b908u: goto label_22b908;
        case 0x22b90cu: goto label_22b90c;
        case 0x22b910u: goto label_22b910;
        case 0x22b914u: goto label_22b914;
        case 0x22b918u: goto label_22b918;
        case 0x22b91cu: goto label_22b91c;
        case 0x22b920u: goto label_22b920;
        case 0x22b924u: goto label_22b924;
        case 0x22b928u: goto label_22b928;
        case 0x22b92cu: goto label_22b92c;
        case 0x22b930u: goto label_22b930;
        case 0x22b934u: goto label_22b934;
        case 0x22b938u: goto label_22b938;
        case 0x22b93cu: goto label_22b93c;
        case 0x22b940u: goto label_22b940;
        case 0x22b944u: goto label_22b944;
        case 0x22b948u: goto label_22b948;
        default: break;
    }

    ctx->pc = 0x22b660u;

label_22b660:
    // 0x22b660: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22b660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_22b664:
    // 0x22b664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b668:
    // 0x22b668: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x22b668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_22b66c:
    // 0x22b66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22b66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b670:
    // 0x22b670: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x22b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_22b674:
    // 0x22b674: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22b674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22b678:
    // 0x22b678: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x22b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_22b67c:
    // 0x22b67c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x22b67cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22b680:
    // 0x22b680: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x22b680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_22b684:
    // 0x22b684: 0x2613000c  addiu       $s3, $s0, 0xC
    ctx->pc = 0x22b684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_22b688:
    // 0x22b688: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x22b688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_22b68c:
    // 0x22b68c: 0x26140018  addiu       $s4, $s0, 0x18
    ctx->pc = 0x22b68cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_22b690:
    // 0x22b690: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x22b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_22b694:
    // 0x22b694: 0x2615000d  addiu       $s5, $s0, 0xD
    ctx->pc = 0x22b694u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_22b698:
    // 0x22b698: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x22b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_22b69c:
    // 0x22b69c: 0x2616000e  addiu       $s6, $s0, 0xE
    ctx->pc = 0x22b69cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_22b6a0:
    // 0x22b6a0: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x22b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_22b6a4:
    // 0x22b6a4: 0x26170010  addiu       $s7, $s0, 0x10
    ctx->pc = 0x22b6a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_22b6a8:
    // 0x22b6a8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_22b6ac:
    // 0x22b6ac: 0x261e000f  addiu       $fp, $s0, 0xF
    ctx->pc = 0x22b6acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_22b6b0:
    // 0x22b6b0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x22b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_22b6b4:
    // 0x22b6b4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x22b6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_22b6b8:
    // 0x22b6b8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x22b6b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_22b6bc:
    // 0x22b6bc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x22b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_22b6c0:
    // 0x22b6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b6c4:
    // 0x22b6c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b6c8:
    // 0x22b6c8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x22b6c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22b6cc:
    // 0x22b6cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x22b6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22b6d0:
    // 0x22b6d0: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x22b6d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_22b6d4:
    // 0x22b6d4: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x22b6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22b6d8:
    // 0x22b6d8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x22b6d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b6dc:
    // 0x22b6dc: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x22b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_22b6e0:
    // 0x22b6e0: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x22b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_22b6e4:
    // 0x22b6e4: 0xc08b5da  jal         func_22D768
label_22b6e8:
    if (ctx->pc == 0x22B6E8u) {
        ctx->pc = 0x22B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6E4u;
        // 0x22b6e8: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6ECu;
        goto label_22b6ec;
    }
    ctx->pc = 0x22B6E4u;
    SET_GPR_U32(ctx, 31, 0x22B6ECu);
    ctx->pc = 0x22B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B6E4u;
    // 0x22b6e8: 0xafb70008  sw          $s7, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D768u, 0x22B6E4u, 0x22B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B6ECu;
label_22b6ec:
    // 0x22b6ec: 0x440008b  bltz        $v0, . + 4 + (0x8B << 2)
label_22b6f0:
    if (ctx->pc == 0x22B6F0u) {
        ctx->pc = 0x22B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ECu;
        // 0x22b6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B6F4u;
        goto label_22b6f4;
    }
    ctx->pc = 0x22B6ECu;
    {
        const bool branch_taken_0x22b6ec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6ECu;
        // 0x22b6f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6ec) {
            ctx->pc = 0x22B91Cu;
            goto label_22b91c;
        }
    }
    ctx->pc = 0x22B6F4u;
label_22b6f4:
    // 0x22b6f4: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x22b6f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_22b6f8:
    // 0x22b6f8: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x22b6f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_22b6fc:
    // 0x22b6fc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_22b700:
    if (ctx->pc == 0x22B700u) {
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6FCu;
        // 0x22b700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B704u;
        goto label_22b704;
    }
    ctx->pc = 0x22B6FCu;
    {
        const bool branch_taken_0x22b6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6FCu;
        // 0x22b700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b6fc) {
            ctx->pc = 0x22B7E8u;
            goto label_22b7e8;
        }
    }
    ctx->pc = 0x22B704u;
label_22b704:
    // 0x22b704: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_22b708:
    // 0x22b708: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_22b70c:
    if (ctx->pc == 0x22B70Cu) {
        ctx->pc = 0x22B70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B708u;
        // 0x22b70c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B710u;
        goto label_22b710;
    }
    ctx->pc = 0x22B708u;
    {
        const bool branch_taken_0x22b708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b708) {
            ctx->pc = 0x22B70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B708u;
            // 0x22b70c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B730u;
            goto label_22b730;
        }
    }
    ctx->pc = 0x22B710u;
label_22b710:
    // 0x22b710: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x22b710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_22b714:
    // 0x22b714: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x22b714u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_22b718:
    // 0x22b718: 0x2484a1c0  addiu       $a0, $a0, -0x5E40
    ctx->pc = 0x22b718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943168));
label_22b71c:
    // 0x22b71c: 0xc08bac2  jal         func_22EB08
label_22b720:
    if (ctx->pc == 0x22B720u) {
        ctx->pc = 0x22B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B71Cu;
        // 0x22b720: 0x24a5a1e0  addiu       $a1, $a1, -0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B724u;
        goto label_22b724;
    }
    ctx->pc = 0x22B71Cu;
    SET_GPR_U32(ctx, 31, 0x22B724u);
    ctx->pc = 0x22B720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B71Cu;
    // 0x22b720: 0x24a5a1e0  addiu       $a1, $a1, -0x5E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB08u, 0x22B71Cu, 0x22B724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B724u;
label_22b724:
    // 0x22b724: 0x1000007d  b           . + 4 + (0x7D << 2)
label_22b728:
    if (ctx->pc == 0x22B728u) {
        ctx->pc = 0x22B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B724u;
        // 0x22b728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B72Cu;
        goto label_22b72c;
    }
    ctx->pc = 0x22B724u;
    {
        const bool branch_taken_0x22b724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B724u;
        // 0x22b728: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b724) {
            ctx->pc = 0x22B91Cu;
            goto label_22b91c;
        }
    }
    ctx->pc = 0x22B72Cu;
label_22b72c:
    // 0x22b72c: 0x0  nop
    ctx->pc = 0x22b72cu;
    // NOP
label_22b730:
    // 0x22b730: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x22b730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_22b734:
    // 0x22b734: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x22b734u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_22b738:
    // 0x22b738: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x22b738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22b73c:
    // 0x22b73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b740:
    // 0x22b740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b744:
    // 0x22b744: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x22b744u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_22b748:
    // 0x22b748: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x22b748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_22b74c:
    // 0x22b74c: 0x27a70043  addiu       $a3, $sp, 0x43
    ctx->pc = 0x22b74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
label_22b750:
    // 0x22b750: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_22b754:
    // 0x22b754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22b754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22b758:
    // 0x22b758: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x22b758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_22b75c:
    // 0x22b75c: 0xa3c20000  sb          $v0, 0x0($fp)
    ctx->pc = 0x22b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 2));
label_22b760:
    // 0x22b760: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x22b760u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
label_22b764:
    // 0x22b764: 0xa6080098  sh          $t0, 0x98($s0)
    ctx->pc = 0x22b764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 8));
label_22b768:
    // 0x22b768: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x22b768u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_22b76c:
    // 0x22b76c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x22b76cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_22b770:
    // 0x22b770: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x22b770u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_22b774:
    // 0x22b774: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x22b774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_22b778:
    // 0x22b778: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x22b778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_22b77c:
    // 0x22b77c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x22b77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_22b780:
    // 0x22b780: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x22b780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_22b784:
    // 0x22b784: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x22b784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_22b788:
    // 0x22b788: 0xc08b63a  jal         func_22D8E8
label_22b78c:
    if (ctx->pc == 0x22B78Cu) {
        ctx->pc = 0x22B78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B788u;
        // 0x22b78c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B790u;
        goto label_22b790;
    }
    ctx->pc = 0x22B788u;
    SET_GPR_U32(ctx, 31, 0x22B790u);
    ctx->pc = 0x22B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B788u;
    // 0x22b78c: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8E8u, 0x22B788u, 0x22B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B790u;
label_22b790:
    // 0x22b790: 0x4400036  bltz        $v0, . + 4 + (0x36 << 2)
label_22b794:
    if (ctx->pc == 0x22B794u) {
        ctx->pc = 0x22B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B790u;
        // 0x22b794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B798u;
        goto label_22b798;
    }
    ctx->pc = 0x22B790u;
    {
        const bool branch_taken_0x22b790 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B790u;
        // 0x22b794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b790) {
            ctx->pc = 0x22B86Cu;
            goto label_22b86c;
        }
    }
    ctx->pc = 0x22B798u;
label_22b798:
    // 0x22b798: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x22b798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22b79c:
    // 0x22b79c: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x22b79cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_22b7a0:
    // 0x22b7a0: 0x27a80032  addiu       $t0, $sp, 0x32
    ctx->pc = 0x22b7a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 50));
label_22b7a4:
    // 0x22b7a4: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x22b7a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_22b7a8:
    // 0x22b7a8: 0x27a90034  addiu       $t1, $sp, 0x34
    ctx->pc = 0x22b7a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_22b7ac:
    // 0x22b7ac: 0x27aa0036  addiu       $t2, $sp, 0x36
    ctx->pc = 0x22b7acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 54));
label_22b7b0:
    // 0x22b7b0: 0xc08af92  jal         func_22BE48
label_22b7b4:
    if (ctx->pc == 0x22B7B4u) {
        ctx->pc = 0x22B7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B0u;
        // 0x22b7b4: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7B8u;
        goto label_22b7b8;
    }
    ctx->pc = 0x22B7B0u;
    SET_GPR_U32(ctx, 31, 0x22B7B8u);
    ctx->pc = 0x22B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7B0u;
    // 0x22b7b4: 0xa7a00030  sh          $zero, 0x30($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE48u, 0x22B7B0u, 0x22B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7B8u;
label_22b7b8:
    // 0x22b7b8: 0x4400058  bltz        $v0, . + 4 + (0x58 << 2)
label_22b7bc:
    if (ctx->pc == 0x22B7BCu) {
        ctx->pc = 0x22B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B8u;
        // 0x22b7bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7C0u;
        goto label_22b7c0;
    }
    ctx->pc = 0x22B7B8u;
    {
        const bool branch_taken_0x22b7b8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7B8u;
        // 0x22b7bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7b8) {
            ctx->pc = 0x22B91Cu;
            goto label_22b91c;
        }
    }
    ctx->pc = 0x22B7C0u;
label_22b7c0:
    // 0x22b7c0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_22b7c4:
    // 0x22b7c4: 0x8c42b2f0  lw          $v0, -0x4D10($v0)
    ctx->pc = 0x22b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947568)));
label_22b7c8:
    // 0x22b7c8: 0x50400047  beql        $v0, $zero, . + 4 + (0x47 << 2)
label_22b7cc:
    if (ctx->pc == 0x22B7CCu) {
        ctx->pc = 0x22B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7C8u;
        // 0x22b7cc: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7D0u;
        goto label_22b7d0;
    }
    ctx->pc = 0x22B7C8u;
    {
        const bool branch_taken_0x22b7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7c8) {
            ctx->pc = 0x22B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B7C8u;
            // 0x22b7cc: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B8E8u;
            goto label_22b8e8;
        }
    }
    ctx->pc = 0x22B7D0u;
label_22b7d0:
    // 0x22b7d0: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x22b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_22b7d4:
    // 0x22b7d4: 0x40f809  jalr        $v0
label_22b7d8:
    if (ctx->pc == 0x22B7D8u) {
        ctx->pc = 0x22B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7D4u;
        // 0x22b7d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7DCu;
        goto label_22b7dc;
    }
    ctx->pc = 0x22B7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B7DCu);
        ctx->pc = 0x22B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7D4u;
        // 0x22b7d8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B7D4u, 0x22B7DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B7DCu;
label_22b7dc:
    // 0x22b7dc: 0x10000042  b           . + 4 + (0x42 << 2)
label_22b7e0:
    if (ctx->pc == 0x22B7E0u) {
        ctx->pc = 0x22B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7DCu;
        // 0x22b7e0: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7E4u;
        goto label_22b7e4;
    }
    ctx->pc = 0x22B7DCu;
    {
        const bool branch_taken_0x22b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7DCu;
        // 0x22b7e0: 0x8202000e  lb          $v0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7dc) {
            ctx->pc = 0x22B8E8u;
            goto label_22b8e8;
        }
    }
    ctx->pc = 0x22B7E4u;
label_22b7e4:
    // 0x22b7e4: 0x0  nop
    ctx->pc = 0x22b7e4u;
    // NOP
label_22b7e8:
    // 0x22b7e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b7ec:
    // 0x22b7ec: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_22b7f0:
    // 0x22b7f0: 0xc08b63a  jal         func_22D8E8
label_22b7f4:
    if (ctx->pc == 0x22B7F4u) {
        ctx->pc = 0x22B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F0u;
        // 0x22b7f4: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B7F8u;
        goto label_22b7f8;
    }
    ctx->pc = 0x22B7F0u;
    SET_GPR_U32(ctx, 31, 0x22B7F8u);
    ctx->pc = 0x22B7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B7F0u;
    // 0x22b7f4: 0x27a70043  addiu       $a3, $sp, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8E8u, 0x22B7F0u, 0x22B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7F8u;
label_22b7f8:
    // 0x22b7f8: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
label_22b7fc:
    if (ctx->pc == 0x22B7FCu) {
        ctx->pc = 0x22B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F8u;
        // 0x22b7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B800u;
        goto label_22b800;
    }
    ctx->pc = 0x22B7F8u;
    {
        const bool branch_taken_0x22b7f8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B7F8u;
        // 0x22b7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b7f8) {
            ctx->pc = 0x22B86Cu;
            goto label_22b86c;
        }
    }
    ctx->pc = 0x22B800u;
label_22b800:
    // 0x22b800: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x22b800u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_22b804:
    // 0x22b804: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x22b804u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
label_22b808:
    // 0x22b808: 0x27a80044  addiu       $t0, $sp, 0x44
    ctx->pc = 0x22b808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_22b80c:
    // 0x22b80c: 0x93a60043  lbu         $a2, 0x43($sp)
    ctx->pc = 0x22b80cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
label_22b810:
    // 0x22b810: 0x27a90046  addiu       $t1, $sp, 0x46
    ctx->pc = 0x22b810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_22b814:
    // 0x22b814: 0xc08af92  jal         func_22BE48
label_22b818:
    if (ctx->pc == 0x22B818u) {
        ctx->pc = 0x22B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B814u;
        // 0x22b818: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B81Cu;
        goto label_22b81c;
    }
    ctx->pc = 0x22B814u;
    SET_GPR_U32(ctx, 31, 0x22B81Cu);
    ctx->pc = 0x22B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B814u;
    // 0x22b818: 0x27aa0048  addiu       $t2, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE48u, 0x22B814u, 0x22B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B81Cu;
label_22b81c:
    // 0x22b81c: 0x440ffc1  bltz        $v0, . + 4 + (-0x3F << 2)
label_22b820:
    if (ctx->pc == 0x22B820u) {
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B824u;
        goto label_22b824;
    }
    ctx->pc = 0x22B81Cu;
    {
        const bool branch_taken_0x22b81c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B81Cu;
        // 0x22b820: 0x2613001c  addiu       $s3, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b81c) {
            ctx->pc = 0x22B724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22b724;
        }
    }
    ctx->pc = 0x22B824u;
label_22b824:
    // 0x22b824: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22b828:
    // 0x22b828: 0x87a50044  lh          $a1, 0x44($sp)
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_22b82c:
    // 0x22b82c: 0x87a60046  lh          $a2, 0x46($sp)
    ctx->pc = 0x22b82cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_22b830:
    // 0x22b830: 0xc08f908  jal         func_23E420
label_22b834:
    if (ctx->pc == 0x22B834u) {
        ctx->pc = 0x22B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B830u;
        // 0x22b834: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B838u;
        goto label_22b838;
    }
    ctx->pc = 0x22B830u;
    SET_GPR_U32(ctx, 31, 0x22B838u);
    ctx->pc = 0x22B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B830u;
    // 0x22b834: 0x87a70048  lh          $a3, 0x48($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E420u, 0x22B830u, 0x22B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B838u;
label_22b838:
    // 0x22b838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b83c:
    // 0x22b83c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b840:
    // 0x22b840: 0xc08b61a  jal         func_22D868
label_22b844:
    if (ctx->pc == 0x22B844u) {
        ctx->pc = 0x22B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B840u;
        // 0x22b844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B848u;
        goto label_22b848;
    }
    ctx->pc = 0x22B840u;
    SET_GPR_U32(ctx, 31, 0x22B848u);
    ctx->pc = 0x22B844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B840u;
    // 0x22b844: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D868u, 0x22B840u, 0x22B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B848u;
label_22b848:
    // 0x22b848: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_22b84c:
    if (ctx->pc == 0x22B84Cu) {
        ctx->pc = 0x22B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B848u;
        // 0x22b84c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B850u;
        goto label_22b850;
    }
    ctx->pc = 0x22B848u;
    {
        const bool branch_taken_0x22b848 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x22B84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B848u;
        // 0x22b84c: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b848) {
            ctx->pc = 0x22B86Cu;
            goto label_22b86c;
        }
    }
    ctx->pc = 0x22B850u;
label_22b850:
    // 0x22b850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b854:
    // 0x22b854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b858:
    // 0x22b858: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x22b858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22b85c:
    // 0x22b85c: 0xc08b658  jal         func_22D960
label_22b860:
    if (ctx->pc == 0x22B860u) {
        ctx->pc = 0x22B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B85Cu;
        // 0x22b860: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B864u;
        goto label_22b864;
    }
    ctx->pc = 0x22B85Cu;
    SET_GPR_U32(ctx, 31, 0x22B864u);
    ctx->pc = 0x22B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B85Cu;
    // 0x22b860: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D960u, 0x22B85Cu, 0x22B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B864u;
label_22b864:
    // 0x22b864: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_22b868:
    if (ctx->pc == 0x22B868u) {
        ctx->pc = 0x22B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B864u;
        // 0x22b868: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B86Cu;
        goto label_22b86c;
    }
    ctx->pc = 0x22B864u;
    {
        const bool branch_taken_0x22b864 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x22b864) {
            ctx->pc = 0x22B868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B864u;
            // 0x22b868: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B878u;
            goto label_22b878;
        }
    }
    ctx->pc = 0x22B86Cu;
label_22b86c:
    // 0x22b86c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_22b870:
    if (ctx->pc == 0x22B870u) {
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B874u;
        goto label_22b874;
    }
    ctx->pc = 0x22B86Cu;
    {
        const bool branch_taken_0x22b86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B86Cu;
        // 0x22b870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b86c) {
            ctx->pc = 0x22B91Cu;
            goto label_22b91c;
        }
    }
    ctx->pc = 0x22B874u;
label_22b874:
    // 0x22b874: 0x0  nop
    ctx->pc = 0x22b874u;
    // NOP
label_22b878:
    // 0x22b878: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x22b878u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_22b87c:
    // 0x22b87c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22b880:
    // 0x22b880: 0xc08f8ea  jal         func_23E3A8
label_22b884:
    if (ctx->pc == 0x22B884u) {
        ctx->pc = 0x22B884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B880u;
        // 0x22b884: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B888u;
        goto label_22b888;
    }
    ctx->pc = 0x22B880u;
    SET_GPR_U32(ctx, 31, 0x22B888u);
    ctx->pc = 0x22B884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B880u;
    // 0x22b884: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E3A8u, 0x22B880u, 0x22B888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B888u;
label_22b888:
    // 0x22b888: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x22b888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22b88c:
    // 0x22b88c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x22b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_22b890:
    // 0x22b890: 0xc08f8f4  jal         func_23E3D0
label_22b894:
    if (ctx->pc == 0x22B894u) {
        ctx->pc = 0x22B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B890u;
        // 0x22b894: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B898u;
        goto label_22b898;
    }
    ctx->pc = 0x22B890u;
    SET_GPR_U32(ctx, 31, 0x22B898u);
    ctx->pc = 0x22B894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B890u;
    // 0x22b894: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E3D0u, 0x22B890u, 0x22B898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B898u;
label_22b898:
    // 0x22b898: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x22b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
label_22b89c:
    // 0x22b89c: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x22b89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_22b8a0:
    // 0x22b8a0: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x22b8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_22b8a4:
    // 0x22b8a4: 0x26080026  addiu       $t0, $s0, 0x26
    ctx->pc = 0x22b8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 38));
label_22b8a8:
    // 0x22b8a8: 0x26090028  addiu       $t1, $s0, 0x28
    ctx->pc = 0x22b8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_22b8ac:
    // 0x22b8ac: 0x260a002c  addiu       $t2, $s0, 0x2C
    ctx->pc = 0x22b8acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_22b8b0:
    // 0x22b8b0: 0x260b0030  addiu       $t3, $s0, 0x30
    ctx->pc = 0x22b8b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_22b8b4:
    // 0x22b8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b8b8:
    // 0x22b8b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b8bc:
    // 0x22b8bc: 0xc08b6d8  jal         func_22DB60
label_22b8c0:
    if (ctx->pc == 0x22B8C0u) {
        ctx->pc = 0x22B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8BCu;
        // 0x22b8c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8C4u;
        goto label_22b8c4;
    }
    ctx->pc = 0x22B8BCu;
    SET_GPR_U32(ctx, 31, 0x22B8C4u);
    ctx->pc = 0x22B8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8BCu;
    // 0x22b8c0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DB60u, 0x22B8BCu, 0x22B8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8C4u;
label_22b8c4:
    // 0x22b8c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b8c8:
    // 0x22b8c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b8cc:
    // 0x22b8cc: 0x260600cc  addiu       $a2, $s0, 0xCC
    ctx->pc = 0x22b8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
label_22b8d0:
    // 0x22b8d0: 0x260700d0  addiu       $a3, $s0, 0xD0
    ctx->pc = 0x22b8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_22b8d4:
    // 0x22b8d4: 0x260800e0  addiu       $t0, $s0, 0xE0
    ctx->pc = 0x22b8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_22b8d8:
    // 0x22b8d8: 0xc08b770  jal         func_22DDC0
label_22b8dc:
    if (ctx->pc == 0x22B8DCu) {
        ctx->pc = 0x22B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B8D8u;
        // 0x22b8dc: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B8E0u;
        goto label_22b8e0;
    }
    ctx->pc = 0x22B8D8u;
    SET_GPR_U32(ctx, 31, 0x22B8E0u);
    ctx->pc = 0x22B8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B8D8u;
    // 0x22b8dc: 0x260900e2  addiu       $t1, $s0, 0xE2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 226));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DDC0u, 0x22B8D8u, 0x22B8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B8E0u;
label_22b8e0:
    // 0x22b8e0: 0xa6000098  sh          $zero, 0x98($s0)
    ctx->pc = 0x22b8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 0));
label_22b8e4:
    // 0x22b8e4: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x22b8e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_22b8e8:
    // 0x22b8e8: 0x8203000f  lb          $v1, 0xF($s0)
    ctx->pc = 0x22b8e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
label_22b8ec:
    // 0x22b8ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x22b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_22b8f0:
    // 0x22b8f0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x22b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_22b8f4:
    // 0x22b8f4: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x22b8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_22b8f8:
    // 0x22b8f8: 0x8e070044  lw          $a3, 0x44($s0)
    ctx->pc = 0x22b8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_22b8fc:
    // 0x22b8fc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x22b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_22b900:
    // 0x22b900: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x22b900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_22b904:
    // 0x22b904: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x22b904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_22b908:
    // 0x22b908: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x22b908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
label_22b90c:
    // 0x22b90c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x22b90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_22b910:
    // 0x22b910: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x22b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_22b914:
    // 0x22b914: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x22b914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_22b918:
    // 0x22b918: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x22b918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_22b91c:
    // 0x22b91c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x22b91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22b920:
    // 0x22b920: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x22b920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_22b924:
    // 0x22b924: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x22b924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22b928:
    // 0x22b928: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x22b928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_22b92c:
    // 0x22b92c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x22b92cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22b930:
    // 0x22b930: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x22b930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_22b934:
    // 0x22b934: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x22b934u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_22b938:
    // 0x22b938: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x22b938u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_22b93c:
    // 0x22b93c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22b93cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_22b940:
    // 0x22b940: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x22b940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_22b944:
    // 0x22b944: 0x3e00008  jr          $ra
label_22b948:
    if (ctx->pc == 0x22B948u) {
        ctx->pc = 0x22B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B944u;
        // 0x22b948: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B94Cu;
        goto label_fallthrough_0x22b944;
    }
    ctx->pc = 0x22B944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B944u;
        // 0x22b948: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b944:
    ctx->pc = 0x22B94Cu;
}
