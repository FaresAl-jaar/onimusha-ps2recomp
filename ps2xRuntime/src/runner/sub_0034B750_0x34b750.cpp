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

// Function: sub_0034B750
// Address: 0x34b750 - 0x34b988
void sub_0034B750_0x34b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B750_0x34b750");
#endif

    switch (ctx->pc) {
        case 0x34b750u: goto label_34b750;
        case 0x34b754u: goto label_34b754;
        case 0x34b758u: goto label_34b758;
        case 0x34b75cu: goto label_34b75c;
        case 0x34b760u: goto label_34b760;
        case 0x34b764u: goto label_34b764;
        case 0x34b768u: goto label_34b768;
        case 0x34b76cu: goto label_34b76c;
        case 0x34b770u: goto label_34b770;
        case 0x34b774u: goto label_34b774;
        case 0x34b778u: goto label_34b778;
        case 0x34b77cu: goto label_34b77c;
        case 0x34b780u: goto label_34b780;
        case 0x34b784u: goto label_34b784;
        case 0x34b788u: goto label_34b788;
        case 0x34b78cu: goto label_34b78c;
        case 0x34b790u: goto label_34b790;
        case 0x34b794u: goto label_34b794;
        case 0x34b798u: goto label_34b798;
        case 0x34b79cu: goto label_34b79c;
        case 0x34b7a0u: goto label_34b7a0;
        case 0x34b7a4u: goto label_34b7a4;
        case 0x34b7a8u: goto label_34b7a8;
        case 0x34b7acu: goto label_34b7ac;
        case 0x34b7b0u: goto label_34b7b0;
        case 0x34b7b4u: goto label_34b7b4;
        case 0x34b7b8u: goto label_34b7b8;
        case 0x34b7bcu: goto label_34b7bc;
        case 0x34b7c0u: goto label_34b7c0;
        case 0x34b7c4u: goto label_34b7c4;
        case 0x34b7c8u: goto label_34b7c8;
        case 0x34b7ccu: goto label_34b7cc;
        case 0x34b7d0u: goto label_34b7d0;
        case 0x34b7d4u: goto label_34b7d4;
        case 0x34b7d8u: goto label_34b7d8;
        case 0x34b7dcu: goto label_34b7dc;
        case 0x34b7e0u: goto label_34b7e0;
        case 0x34b7e4u: goto label_34b7e4;
        case 0x34b7e8u: goto label_34b7e8;
        case 0x34b7ecu: goto label_34b7ec;
        case 0x34b7f0u: goto label_34b7f0;
        case 0x34b7f4u: goto label_34b7f4;
        case 0x34b7f8u: goto label_34b7f8;
        case 0x34b7fcu: goto label_34b7fc;
        case 0x34b800u: goto label_34b800;
        case 0x34b804u: goto label_34b804;
        case 0x34b808u: goto label_34b808;
        case 0x34b80cu: goto label_34b80c;
        case 0x34b810u: goto label_34b810;
        case 0x34b814u: goto label_34b814;
        case 0x34b818u: goto label_34b818;
        case 0x34b81cu: goto label_34b81c;
        case 0x34b820u: goto label_34b820;
        case 0x34b824u: goto label_34b824;
        case 0x34b828u: goto label_34b828;
        case 0x34b82cu: goto label_34b82c;
        case 0x34b830u: goto label_34b830;
        case 0x34b834u: goto label_34b834;
        case 0x34b838u: goto label_34b838;
        case 0x34b83cu: goto label_34b83c;
        case 0x34b840u: goto label_34b840;
        case 0x34b844u: goto label_34b844;
        case 0x34b848u: goto label_34b848;
        case 0x34b84cu: goto label_34b84c;
        case 0x34b850u: goto label_34b850;
        case 0x34b854u: goto label_34b854;
        case 0x34b858u: goto label_34b858;
        case 0x34b85cu: goto label_34b85c;
        case 0x34b860u: goto label_34b860;
        case 0x34b864u: goto label_34b864;
        case 0x34b868u: goto label_34b868;
        case 0x34b86cu: goto label_34b86c;
        case 0x34b870u: goto label_34b870;
        case 0x34b874u: goto label_34b874;
        case 0x34b878u: goto label_34b878;
        case 0x34b87cu: goto label_34b87c;
        case 0x34b880u: goto label_34b880;
        case 0x34b884u: goto label_34b884;
        case 0x34b888u: goto label_34b888;
        case 0x34b88cu: goto label_34b88c;
        case 0x34b890u: goto label_34b890;
        case 0x34b894u: goto label_34b894;
        case 0x34b898u: goto label_34b898;
        case 0x34b89cu: goto label_34b89c;
        case 0x34b8a0u: goto label_34b8a0;
        case 0x34b8a4u: goto label_34b8a4;
        case 0x34b8a8u: goto label_34b8a8;
        case 0x34b8acu: goto label_34b8ac;
        case 0x34b8b0u: goto label_34b8b0;
        case 0x34b8b4u: goto label_34b8b4;
        case 0x34b8b8u: goto label_34b8b8;
        case 0x34b8bcu: goto label_34b8bc;
        case 0x34b8c0u: goto label_34b8c0;
        case 0x34b8c4u: goto label_34b8c4;
        case 0x34b8c8u: goto label_34b8c8;
        case 0x34b8ccu: goto label_34b8cc;
        case 0x34b8d0u: goto label_34b8d0;
        case 0x34b8d4u: goto label_34b8d4;
        case 0x34b8d8u: goto label_34b8d8;
        case 0x34b8dcu: goto label_34b8dc;
        case 0x34b8e0u: goto label_34b8e0;
        case 0x34b8e4u: goto label_34b8e4;
        case 0x34b8e8u: goto label_34b8e8;
        case 0x34b8ecu: goto label_34b8ec;
        case 0x34b8f0u: goto label_34b8f0;
        case 0x34b8f4u: goto label_34b8f4;
        case 0x34b8f8u: goto label_34b8f8;
        case 0x34b8fcu: goto label_34b8fc;
        case 0x34b900u: goto label_34b900;
        case 0x34b904u: goto label_34b904;
        case 0x34b908u: goto label_34b908;
        case 0x34b90cu: goto label_34b90c;
        case 0x34b910u: goto label_34b910;
        case 0x34b914u: goto label_34b914;
        case 0x34b918u: goto label_34b918;
        case 0x34b91cu: goto label_34b91c;
        case 0x34b920u: goto label_34b920;
        case 0x34b924u: goto label_34b924;
        case 0x34b928u: goto label_34b928;
        case 0x34b92cu: goto label_34b92c;
        case 0x34b930u: goto label_34b930;
        case 0x34b934u: goto label_34b934;
        case 0x34b938u: goto label_34b938;
        case 0x34b93cu: goto label_34b93c;
        case 0x34b940u: goto label_34b940;
        case 0x34b944u: goto label_34b944;
        case 0x34b948u: goto label_34b948;
        case 0x34b94cu: goto label_34b94c;
        case 0x34b950u: goto label_34b950;
        case 0x34b954u: goto label_34b954;
        case 0x34b958u: goto label_34b958;
        case 0x34b95cu: goto label_34b95c;
        case 0x34b960u: goto label_34b960;
        case 0x34b964u: goto label_34b964;
        case 0x34b968u: goto label_34b968;
        case 0x34b96cu: goto label_34b96c;
        case 0x34b970u: goto label_34b970;
        case 0x34b974u: goto label_34b974;
        case 0x34b978u: goto label_34b978;
        case 0x34b97cu: goto label_34b97c;
        case 0x34b980u: goto label_34b980;
        case 0x34b984u: goto label_34b984;
        default: break;
    }

    ctx->pc = 0x34b750u;

label_34b750:
    // 0x34b750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_34b754:
    // 0x34b754: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34b754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34b758:
    // 0x34b758: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_34b75c:
    // 0x34b75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34b760:
    // 0x34b760: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_34b764:
    // 0x34b764: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x34b764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
label_34b768:
    // 0x34b768: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_34b76c:
    // 0x34b76c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_34b770:
    // 0x34b770: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x34b770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
label_34b774:
    // 0x34b774: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_34b778:
    // 0x34b778: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x34b778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_34b77c:
    // 0x34b77c: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x34b77cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_34b780:
    // 0x34b780: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x34b780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
label_34b784:
    // 0x34b784: 0x8c8506cc  lw          $a1, 0x6CC($a0)
    ctx->pc = 0x34b784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
label_34b788:
    // 0x34b788: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x34b788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
label_34b78c:
    // 0x34b78c: 0xac8506cc  sw          $a1, 0x6CC($a0)
    ctx->pc = 0x34b78cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 5));
label_34b790:
    // 0x34b790: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x34b790u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
label_34b794:
    // 0x34b794: 0x10a3004c  beq         $a1, $v1, . + 4 + (0x4C << 2)
label_34b798:
    if (ctx->pc == 0x34B798u) {
        ctx->pc = 0x34B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B794u;
        // 0x34b798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B79Cu;
        goto label_34b79c;
    }
    ctx->pc = 0x34B794u;
    {
        const bool branch_taken_0x34b794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B794u;
        // 0x34b798: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b794) {
            ctx->pc = 0x34B8C8u;
            goto label_34b8c8;
        }
    }
    ctx->pc = 0x34B79Cu;
label_34b79c:
    // 0x34b79c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34b79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b7a0:
    // 0x34b7a0: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
label_34b7a4:
    if (ctx->pc == 0x34B7A4u) {
        ctx->pc = 0x34B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7A0u;
        // 0x34b7a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B7A8u;
        goto label_34b7a8;
    }
    ctx->pc = 0x34B7A0u;
    {
        const bool branch_taken_0x34b7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x34B7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7A0u;
        // 0x34b7a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b7a0) {
            ctx->pc = 0x34B898u;
            goto label_34b898;
        }
    }
    ctx->pc = 0x34B7A8u;
label_34b7a8:
    // 0x34b7a8: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_34b7ac:
    if (ctx->pc == 0x34B7ACu) {
        ctx->pc = 0x34B7B0u;
        goto label_34b7b0;
    }
    ctx->pc = 0x34B7A8u;
    {
        const bool branch_taken_0x34b7a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b7a8) {
            ctx->pc = 0x34B828u;
            goto label_34b828;
        }
    }
    ctx->pc = 0x34B7B0u;
label_34b7b0:
    // 0x34b7b0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_34b7b4:
    if (ctx->pc == 0x34B7B4u) {
        ctx->pc = 0x34B7B8u;
        goto label_34b7b8;
    }
    ctx->pc = 0x34B7B0u;
    {
        const bool branch_taken_0x34b7b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7b0) {
            ctx->pc = 0x34B7C0u;
            goto label_34b7c0;
        }
    }
    ctx->pc = 0x34B7B8u;
label_34b7b8:
    // 0x34b7b8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_34b7bc:
    if (ctx->pc == 0x34B7BCu) {
        ctx->pc = 0x34B7C0u;
        goto label_34b7c0;
    }
    ctx->pc = 0x34B7B8u;
    {
        const bool branch_taken_0x34b7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b7b8) {
            ctx->pc = 0x34B978u;
            goto label_34b978;
        }
    }
    ctx->pc = 0x34B7C0u;
label_34b7c0:
    // 0x34b7c0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x34b7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
label_34b7c4:
    // 0x34b7c4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x34b7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
label_34b7c8:
    // 0x34b7c8: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x34b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_34b7cc:
    // 0x34b7cc: 0xa60207f2  sh          $v0, 0x7F2($s0)
    ctx->pc = 0x34b7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 2));
label_34b7d0:
    // 0x34b7d0: 0x3c028004  lui         $v0, 0x8004
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32772 << 16));
label_34b7d4:
    // 0x34b7d4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x34b7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
label_34b7d8:
    // 0x34b7d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x34b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_34b7dc:
    // 0x34b7dc: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x34b7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
label_34b7e0:
    // 0x34b7e0: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x34b7e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34b7e4:
    // 0x34b7e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34b7e8:
    // 0x34b7e8: 0xc0d2ed8  jal         func_34BB60
label_34b7ec:
    if (ctx->pc == 0x34B7ECu) {
        ctx->pc = 0x34B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7E8u;
        // 0x34b7ec: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B7F0u;
        goto label_34b7f0;
    }
    ctx->pc = 0x34B7E8u;
    SET_GPR_U32(ctx, 31, 0x34B7F0u);
    ctx->pc = 0x34B7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7E8u;
    // 0x34b7ec: 0xa2020821  sb          $v0, 0x821($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB60u, 0x34B7E8u, 0x34B7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7F0u;
label_34b7f0:
    // 0x34b7f0: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x34b7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34b7f4:
    // 0x34b7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b7f8:
    // 0x34b7f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x34b7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34b7fc:
    // 0x34b7fc: 0x320f809  jalr        $t9
label_34b800:
    if (ctx->pc == 0x34B800u) {
        ctx->pc = 0x34B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7FCu;
        // 0x34b800: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B804u;
        goto label_34b804;
    }
    ctx->pc = 0x34B7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B804u);
        ctx->pc = 0x34B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B7FCu;
        // 0x34b800: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B7FCu, 0x34B804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B804u;
label_34b804:
    // 0x34b804: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x34b804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_34b808:
    // 0x34b808: 0x24637a78  addiu       $v1, $v1, 0x7A78
    ctx->pc = 0x34b808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
label_34b80c:
    // 0x34b80c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x34b80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34b810:
    // 0x34b810: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x34b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b814:
    // 0x34b814: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34b814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b818:
    // 0x34b818: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x34b818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_34b81c:
    // 0x34b81c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x34b81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_34b820:
    // 0x34b820: 0x10000055  b           . + 4 + (0x55 << 2)
label_34b824:
    if (ctx->pc == 0x34B824u) {
        ctx->pc = 0x34B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B820u;
        // 0x34b824: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B828u;
        goto label_34b828;
    }
    ctx->pc = 0x34B820u;
    {
        const bool branch_taken_0x34b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B820u;
        // 0x34b824: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b820) {
            ctx->pc = 0x34B978u;
            goto label_34b978;
        }
    }
    ctx->pc = 0x34B828u;
label_34b828:
    // 0x34b828: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x34b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_34b82c:
    // 0x34b82c: 0x944200c4  lhu         $v0, 0xC4($v0)
    ctx->pc = 0x34b82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 196)));
label_34b830:
    // 0x34b830: 0x2841001e  slti        $at, $v0, 0x1E
    ctx->pc = 0x34b830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_34b834:
    // 0x34b834: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_34b838:
    if (ctx->pc == 0x34B838u) {
        ctx->pc = 0x34B83Cu;
        goto label_34b83c;
    }
    ctx->pc = 0x34B834u;
    {
        const bool branch_taken_0x34b834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b834) {
            ctx->pc = 0x34B860u;
            goto label_34b860;
        }
    }
    ctx->pc = 0x34B83Cu;
label_34b83c:
    // 0x34b83c: 0xc0d2ed8  jal         func_34BB60
label_34b840:
    if (ctx->pc == 0x34B840u) {
        ctx->pc = 0x34B844u;
        goto label_34b844;
    }
    ctx->pc = 0x34B83Cu;
    SET_GPR_U32(ctx, 31, 0x34B844u);
    ctx->pc = 0x34BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BB60u, 0x34B83Cu, 0x34B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B844u;
label_34b844:
    // 0x34b844: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x34b844u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_34b848:
    // 0x34b848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b84c:
    // 0x34b84c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x34b84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_34b850:
    // 0x34b850: 0x320f809  jalr        $t9
label_34b854:
    if (ctx->pc == 0x34B854u) {
        ctx->pc = 0x34B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B850u;
        // 0x34b854: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B858u;
        goto label_34b858;
    }
    ctx->pc = 0x34B850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B858u);
        ctx->pc = 0x34B854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B850u;
        // 0x34b854: 0x26052b20  addiu       $a1, $s0, 0x2B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B850u, 0x34B858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34B858u;
label_34b858:
    // 0x34b858: 0x10000047  b           . + 4 + (0x47 << 2)
label_34b85c:
    if (ctx->pc == 0x34B85Cu) {
        ctx->pc = 0x34B860u;
        goto label_34b860;
    }
    ctx->pc = 0x34B858u;
    {
        const bool branch_taken_0x34b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b858) {
            ctx->pc = 0x34B978u;
            goto label_34b978;
        }
    }
    ctx->pc = 0x34B860u;
label_34b860:
    // 0x34b860: 0xc0d2e64  jal         func_34B990
label_34b864:
    if (ctx->pc == 0x34B864u) {
        ctx->pc = 0x34B868u;
        goto label_34b868;
    }
    ctx->pc = 0x34B860u;
    SET_GPR_U32(ctx, 31, 0x34B868u);
    ctx->pc = 0x34B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B990u, 0x34B860u, 0x34B868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B868u;
label_34b868:
    // 0x34b868: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x34b868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_34b86c:
    // 0x34b86c: 0x2463c250  addiu       $v1, $v1, -0x3DB0
    ctx->pc = 0x34b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951504));
label_34b870:
    // 0x34b870: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x34b870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_34b874:
    // 0x34b874: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x34b874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34b878:
    // 0x34b878: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34b878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34b87c:
    // 0x34b87c: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x34b87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
label_34b880:
    // 0x34b880: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x34b880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
label_34b884:
    // 0x34b884: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x34b884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
label_34b888:
    // 0x34b888: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34b888u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34b88c:
    // 0x34b88c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34b890:
    // 0x34b890: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x34b890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_34b894:
    // 0x34b894: 0x0  nop
    ctx->pc = 0x34b894u;
    // NOP
label_34b898:
    // 0x34b898: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x34b898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
label_34b89c:
    // 0x34b89c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_34b8a0:
    if (ctx->pc == 0x34B8A0u) {
        ctx->pc = 0x34B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B89Cu;
        // 0x34b8a0: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B8A4u;
        goto label_34b8a4;
    }
    ctx->pc = 0x34B89Cu;
    {
        const bool branch_taken_0x34b89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B89Cu;
        // 0x34b8a0: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b89c) {
            ctx->pc = 0x34B978u;
            goto label_34b978;
        }
    }
    ctx->pc = 0x34B8A4u;
label_34b8a4:
    // 0x34b8a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34b8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b8a8:
    // 0x34b8a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b8a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b8ac:
    // 0x34b8ac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34b8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b8b0:
    // 0x34b8b0: 0xc09f9a4  jal         func_27E690
label_34b8b4:
    if (ctx->pc == 0x34B8B4u) {
        ctx->pc = 0x34B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B8B0u;
        // 0x34b8b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B8B8u;
        goto label_34b8b8;
    }
    ctx->pc = 0x34B8B0u;
    SET_GPR_U32(ctx, 31, 0x34B8B8u);
    ctx->pc = 0x34B8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8B0u;
    // 0x34b8b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x34B8B0u, 0x34B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B8u;
label_34b8b8:
    // 0x34b8b8: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x34b8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34b8bc:
    // 0x34b8bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_34b8c0:
    // 0x34b8c0: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x34b8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
label_34b8c4:
    // 0x34b8c4: 0x0  nop
    ctx->pc = 0x34b8c4u;
    // NOP
label_34b8c8:
    // 0x34b8c8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x34b8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_34b8cc:
    // 0x34b8cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34b8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34b8d0:
    // 0x34b8d0: 0xc0969ac  jal         func_25A6B0
label_34b8d4:
    if (ctx->pc == 0x34B8D4u) {
        ctx->pc = 0x34B8D8u;
        goto label_34b8d8;
    }
    ctx->pc = 0x34B8D0u;
    SET_GPR_U32(ctx, 31, 0x34B8D8u);
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x34B8D0u, 0x34B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8D8u;
label_34b8d8:
    // 0x34b8d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x34b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_34b8dc:
    // 0x34b8dc: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_34b8e0:
    // 0x34b8e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34b8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34b8e4:
    // 0x34b8e4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x34b8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_34b8e8:
    // 0x34b8e8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x34b8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
label_34b8ec:
    // 0x34b8ec: 0xa7a0002c  sh          $zero, 0x2C($sp)
    ctx->pc = 0x34b8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 44), (uint16_t)GPR_U32(ctx, 0));
label_34b8f0:
    // 0x34b8f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34b8f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_34b8f4:
    // 0x34b8f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x34b8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_34b8f8:
    // 0x34b8f8: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x34b8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_34b8fc:
    // 0x34b8fc: 0xa3a2002e  sb          $v0, 0x2E($sp)
    ctx->pc = 0x34b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 46), (uint8_t)GPR_U32(ctx, 2));
label_34b900:
    // 0x34b900: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x34b900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_34b904:
    // 0x34b904: 0x8e052b60  lw          $a1, 0x2B60($s0)
    ctx->pc = 0x34b904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11104)));
label_34b908:
    // 0x34b908: 0xc07cce0  jal         func_1F3380
label_34b90c:
    if (ctx->pc == 0x34B90Cu) {
        ctx->pc = 0x34B90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B908u;
        // 0x34b90c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B910u;
        goto label_34b910;
    }
    ctx->pc = 0x34B908u;
    SET_GPR_U32(ctx, 31, 0x34B910u);
    ctx->pc = 0x34B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B908u;
    // 0x34b90c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x34B908u, 0x34B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B910u;
label_34b910:
    // 0x34b910: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_34b914:
    if (ctx->pc == 0x34B914u) {
        ctx->pc = 0x34B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B910u;
        // 0x34b914: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B918u;
        goto label_34b918;
    }
    ctx->pc = 0x34B910u;
    {
        const bool branch_taken_0x34b910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B910u;
        // 0x34b914: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b910) {
            ctx->pc = 0x34B940u;
            goto label_34b940;
        }
    }
    ctx->pc = 0x34B918u;
label_34b918:
    // 0x34b918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b91c:
    // 0x34b91c: 0xa3a3002f  sb          $v1, 0x2F($sp)
    ctx->pc = 0x34b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 3));
label_34b920:
    // 0x34b920: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34b920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b924:
    // 0x34b924: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34b924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34b928:
    // 0x34b928: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x34b928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34b92c:
    // 0x34b92c: 0xc09fcf4  jal         func_27F3D0
label_34b930:
    if (ctx->pc == 0x34B930u) {
        ctx->pc = 0x34B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B92Cu;
        // 0x34b930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B934u;
        goto label_34b934;
    }
    ctx->pc = 0x34B92Cu;
    SET_GPR_U32(ctx, 31, 0x34B934u);
    ctx->pc = 0x34B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B92Cu;
    // 0x34b930: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x34B92Cu, 0x34B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B934u;
label_34b934:
    // 0x34b934: 0x1000000a  b           . + 4 + (0xA << 2)
label_34b938:
    if (ctx->pc == 0x34B938u) {
        ctx->pc = 0x34B93Cu;
        goto label_34b93c;
    }
    ctx->pc = 0x34B934u;
    {
        const bool branch_taken_0x34b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b934) {
            ctx->pc = 0x34B960u;
            goto label_34b960;
        }
    }
    ctx->pc = 0x34B93Cu;
label_34b93c:
    // 0x34b93c: 0x0  nop
    ctx->pc = 0x34b93cu;
    // NOP
label_34b940:
    // 0x34b940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b944:
    // 0x34b944: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34b944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34b948:
    // 0x34b948: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x34b948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_34b94c:
    // 0x34b94c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34b94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34b950:
    // 0x34b950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34b950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34b954:
    // 0x34b954: 0xc09fcf4  jal         func_27F3D0
label_34b958:
    if (ctx->pc == 0x34B958u) {
        ctx->pc = 0x34B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B954u;
        // 0x34b958: 0xa3a0002f  sb          $zero, 0x2F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B95Cu;
        goto label_34b95c;
    }
    ctx->pc = 0x34B954u;
    SET_GPR_U32(ctx, 31, 0x34B95Cu);
    ctx->pc = 0x34B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B954u;
    // 0x34b958: 0xa3a0002f  sb          $zero, 0x2F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 47), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F3D0u, 0x34B954u, 0x34B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B95Cu;
label_34b95c:
    // 0x34b95c: 0x0  nop
    ctx->pc = 0x34b95cu;
    // NOP
label_34b960:
    // 0x34b960: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x34b960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_34b964:
    // 0x34b964: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x34b964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_34b968:
    // 0x34b968: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x34b968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
label_34b96c:
    // 0x34b96c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34b96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34b970:
    // 0x34b970: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x34b970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_34b974:
    // 0x34b974: 0x0  nop
    ctx->pc = 0x34b974u;
    // NOP
label_34b978:
    // 0x34b978: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b97c:
    // 0x34b97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b980:
    // 0x34b980: 0x3e00008  jr          $ra
label_34b984:
    if (ctx->pc == 0x34B984u) {
        ctx->pc = 0x34B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B980u;
        // 0x34b984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34B988u;
        goto label_fallthrough_0x34b980;
    }
    ctx->pc = 0x34B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B980u;
        // 0x34b984: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x34b980:
    ctx->pc = 0x34B988u;
}
