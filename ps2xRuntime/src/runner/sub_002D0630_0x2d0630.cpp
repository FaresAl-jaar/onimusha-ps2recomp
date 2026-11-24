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

// Function: sub_002D0630
// Address: 0x2d0630 - 0x2d0918
void sub_002D0630_0x2d0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0630_0x2d0630");
#endif

    switch (ctx->pc) {
        case 0x2d0630u: goto label_2d0630;
        case 0x2d0634u: goto label_2d0634;
        case 0x2d0638u: goto label_2d0638;
        case 0x2d063cu: goto label_2d063c;
        case 0x2d0640u: goto label_2d0640;
        case 0x2d0644u: goto label_2d0644;
        case 0x2d0648u: goto label_2d0648;
        case 0x2d064cu: goto label_2d064c;
        case 0x2d0650u: goto label_2d0650;
        case 0x2d0654u: goto label_2d0654;
        case 0x2d0658u: goto label_2d0658;
        case 0x2d065cu: goto label_2d065c;
        case 0x2d0660u: goto label_2d0660;
        case 0x2d0664u: goto label_2d0664;
        case 0x2d0668u: goto label_2d0668;
        case 0x2d066cu: goto label_2d066c;
        case 0x2d0670u: goto label_2d0670;
        case 0x2d0674u: goto label_2d0674;
        case 0x2d0678u: goto label_2d0678;
        case 0x2d067cu: goto label_2d067c;
        case 0x2d0680u: goto label_2d0680;
        case 0x2d0684u: goto label_2d0684;
        case 0x2d0688u: goto label_2d0688;
        case 0x2d068cu: goto label_2d068c;
        case 0x2d0690u: goto label_2d0690;
        case 0x2d0694u: goto label_2d0694;
        case 0x2d0698u: goto label_2d0698;
        case 0x2d069cu: goto label_2d069c;
        case 0x2d06a0u: goto label_2d06a0;
        case 0x2d06a4u: goto label_2d06a4;
        case 0x2d06a8u: goto label_2d06a8;
        case 0x2d06acu: goto label_2d06ac;
        case 0x2d06b0u: goto label_2d06b0;
        case 0x2d06b4u: goto label_2d06b4;
        case 0x2d06b8u: goto label_2d06b8;
        case 0x2d06bcu: goto label_2d06bc;
        case 0x2d06c0u: goto label_2d06c0;
        case 0x2d06c4u: goto label_2d06c4;
        case 0x2d06c8u: goto label_2d06c8;
        case 0x2d06ccu: goto label_2d06cc;
        case 0x2d06d0u: goto label_2d06d0;
        case 0x2d06d4u: goto label_2d06d4;
        case 0x2d06d8u: goto label_2d06d8;
        case 0x2d06dcu: goto label_2d06dc;
        case 0x2d06e0u: goto label_2d06e0;
        case 0x2d06e4u: goto label_2d06e4;
        case 0x2d06e8u: goto label_2d06e8;
        case 0x2d06ecu: goto label_2d06ec;
        case 0x2d06f0u: goto label_2d06f0;
        case 0x2d06f4u: goto label_2d06f4;
        case 0x2d06f8u: goto label_2d06f8;
        case 0x2d06fcu: goto label_2d06fc;
        case 0x2d0700u: goto label_2d0700;
        case 0x2d0704u: goto label_2d0704;
        case 0x2d0708u: goto label_2d0708;
        case 0x2d070cu: goto label_2d070c;
        case 0x2d0710u: goto label_2d0710;
        case 0x2d0714u: goto label_2d0714;
        case 0x2d0718u: goto label_2d0718;
        case 0x2d071cu: goto label_2d071c;
        case 0x2d0720u: goto label_2d0720;
        case 0x2d0724u: goto label_2d0724;
        case 0x2d0728u: goto label_2d0728;
        case 0x2d072cu: goto label_2d072c;
        case 0x2d0730u: goto label_2d0730;
        case 0x2d0734u: goto label_2d0734;
        case 0x2d0738u: goto label_2d0738;
        case 0x2d073cu: goto label_2d073c;
        case 0x2d0740u: goto label_2d0740;
        case 0x2d0744u: goto label_2d0744;
        case 0x2d0748u: goto label_2d0748;
        case 0x2d074cu: goto label_2d074c;
        case 0x2d0750u: goto label_2d0750;
        case 0x2d0754u: goto label_2d0754;
        case 0x2d0758u: goto label_2d0758;
        case 0x2d075cu: goto label_2d075c;
        case 0x2d0760u: goto label_2d0760;
        case 0x2d0764u: goto label_2d0764;
        case 0x2d0768u: goto label_2d0768;
        case 0x2d076cu: goto label_2d076c;
        case 0x2d0770u: goto label_2d0770;
        case 0x2d0774u: goto label_2d0774;
        case 0x2d0778u: goto label_2d0778;
        case 0x2d077cu: goto label_2d077c;
        case 0x2d0780u: goto label_2d0780;
        case 0x2d0784u: goto label_2d0784;
        case 0x2d0788u: goto label_2d0788;
        case 0x2d078cu: goto label_2d078c;
        case 0x2d0790u: goto label_2d0790;
        case 0x2d0794u: goto label_2d0794;
        case 0x2d0798u: goto label_2d0798;
        case 0x2d079cu: goto label_2d079c;
        case 0x2d07a0u: goto label_2d07a0;
        case 0x2d07a4u: goto label_2d07a4;
        case 0x2d07a8u: goto label_2d07a8;
        case 0x2d07acu: goto label_2d07ac;
        case 0x2d07b0u: goto label_2d07b0;
        case 0x2d07b4u: goto label_2d07b4;
        case 0x2d07b8u: goto label_2d07b8;
        case 0x2d07bcu: goto label_2d07bc;
        case 0x2d07c0u: goto label_2d07c0;
        case 0x2d07c4u: goto label_2d07c4;
        case 0x2d07c8u: goto label_2d07c8;
        case 0x2d07ccu: goto label_2d07cc;
        case 0x2d07d0u: goto label_2d07d0;
        case 0x2d07d4u: goto label_2d07d4;
        case 0x2d07d8u: goto label_2d07d8;
        case 0x2d07dcu: goto label_2d07dc;
        case 0x2d07e0u: goto label_2d07e0;
        case 0x2d07e4u: goto label_2d07e4;
        case 0x2d07e8u: goto label_2d07e8;
        case 0x2d07ecu: goto label_2d07ec;
        case 0x2d07f0u: goto label_2d07f0;
        case 0x2d07f4u: goto label_2d07f4;
        case 0x2d07f8u: goto label_2d07f8;
        case 0x2d07fcu: goto label_2d07fc;
        case 0x2d0800u: goto label_2d0800;
        case 0x2d0804u: goto label_2d0804;
        case 0x2d0808u: goto label_2d0808;
        case 0x2d080cu: goto label_2d080c;
        case 0x2d0810u: goto label_2d0810;
        case 0x2d0814u: goto label_2d0814;
        case 0x2d0818u: goto label_2d0818;
        case 0x2d081cu: goto label_2d081c;
        case 0x2d0820u: goto label_2d0820;
        case 0x2d0824u: goto label_2d0824;
        case 0x2d0828u: goto label_2d0828;
        case 0x2d082cu: goto label_2d082c;
        case 0x2d0830u: goto label_2d0830;
        case 0x2d0834u: goto label_2d0834;
        case 0x2d0838u: goto label_2d0838;
        case 0x2d083cu: goto label_2d083c;
        case 0x2d0840u: goto label_2d0840;
        case 0x2d0844u: goto label_2d0844;
        case 0x2d0848u: goto label_2d0848;
        case 0x2d084cu: goto label_2d084c;
        case 0x2d0850u: goto label_2d0850;
        case 0x2d0854u: goto label_2d0854;
        case 0x2d0858u: goto label_2d0858;
        case 0x2d085cu: goto label_2d085c;
        case 0x2d0860u: goto label_2d0860;
        case 0x2d0864u: goto label_2d0864;
        case 0x2d0868u: goto label_2d0868;
        case 0x2d086cu: goto label_2d086c;
        case 0x2d0870u: goto label_2d0870;
        case 0x2d0874u: goto label_2d0874;
        case 0x2d0878u: goto label_2d0878;
        case 0x2d087cu: goto label_2d087c;
        case 0x2d0880u: goto label_2d0880;
        case 0x2d0884u: goto label_2d0884;
        case 0x2d0888u: goto label_2d0888;
        case 0x2d088cu: goto label_2d088c;
        case 0x2d0890u: goto label_2d0890;
        case 0x2d0894u: goto label_2d0894;
        case 0x2d0898u: goto label_2d0898;
        case 0x2d089cu: goto label_2d089c;
        case 0x2d08a0u: goto label_2d08a0;
        case 0x2d08a4u: goto label_2d08a4;
        case 0x2d08a8u: goto label_2d08a8;
        case 0x2d08acu: goto label_2d08ac;
        case 0x2d08b0u: goto label_2d08b0;
        case 0x2d08b4u: goto label_2d08b4;
        case 0x2d08b8u: goto label_2d08b8;
        case 0x2d08bcu: goto label_2d08bc;
        case 0x2d08c0u: goto label_2d08c0;
        case 0x2d08c4u: goto label_2d08c4;
        case 0x2d08c8u: goto label_2d08c8;
        case 0x2d08ccu: goto label_2d08cc;
        case 0x2d08d0u: goto label_2d08d0;
        case 0x2d08d4u: goto label_2d08d4;
        case 0x2d08d8u: goto label_2d08d8;
        case 0x2d08dcu: goto label_2d08dc;
        case 0x2d08e0u: goto label_2d08e0;
        case 0x2d08e4u: goto label_2d08e4;
        case 0x2d08e8u: goto label_2d08e8;
        case 0x2d08ecu: goto label_2d08ec;
        case 0x2d08f0u: goto label_2d08f0;
        case 0x2d08f4u: goto label_2d08f4;
        case 0x2d08f8u: goto label_2d08f8;
        case 0x2d08fcu: goto label_2d08fc;
        case 0x2d0900u: goto label_2d0900;
        case 0x2d0904u: goto label_2d0904;
        case 0x2d0908u: goto label_2d0908;
        case 0x2d090cu: goto label_2d090c;
        case 0x2d0910u: goto label_2d0910;
        case 0x2d0914u: goto label_2d0914;
        default: break;
    }

    ctx->pc = 0x2d0630u;

label_2d0630:
    // 0x2d0630: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d0634:
    // 0x2d0634: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2d0634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_2d0638:
    // 0x2d0638: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d0638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2d063c:
    // 0x2d063c: 0x24420b8c  addiu       $v0, $v0, 0xB8C
    ctx->pc = 0x2d063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2956));
label_2d0640:
    // 0x2d0640: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d0640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d0644:
    // 0x2d0644: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d0644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2d0648:
    // 0x2d0648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d0648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d064c:
    // 0x2d064c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d064cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2d0650:
    // 0x2d0650: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2d0650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_2d0654:
    // 0x2d0654: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2d0654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d0658:
    // 0x2d0658: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2d0658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d065c:
    // 0x2d065c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d065cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d0660:
    // 0x2d0660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d0664:
    // 0x2d0664: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2d0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d0668:
    // 0x2d0668: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x2d0668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_2d066c:
    // 0x2d066c: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x2d066cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
label_2d0670:
    // 0x2d0670: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2d0670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2d0674:
    // 0x2d0674: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2d0674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2d0678:
    // 0x2d0678: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2d0678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_2d067c:
    // 0x2d067c: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2d067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2d0680:
    // 0x2d0680: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x2d0680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_2d0684:
    // 0x2d0684: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2d0684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_2d0688:
    // 0x2d0688: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2d0688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2d068c:
    // 0x2d068c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2d068cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_2d0690:
    // 0x2d0690: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2d0690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_2d0694:
    // 0x2d0694: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2d0694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2d0698:
    // 0x2d0698: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2d0698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_2d069c:
    // 0x2d069c: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2d069cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_2d06a0:
    // 0x2d06a0: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x2d06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
label_2d06a4:
    // 0x2d06a4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2d06a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2d06a8:
    // 0x2d06a8: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x2d06a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
label_2d06ac:
    // 0x2d06ac: 0x90822b58  lbu         $v0, 0x2B58($a0)
    ctx->pc = 0x2d06acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11096)));
label_2d06b0:
    // 0x2d06b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d06b4:
    if (ctx->pc == 0x2D06B4u) {
        ctx->pc = 0x2D06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06B0u;
        // 0x2d06b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06B8u;
        goto label_2d06b8;
    }
    ctx->pc = 0x2D06B0u;
    {
        const bool branch_taken_0x2d06b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06B0u;
        // 0x2d06b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06b0) {
            ctx->pc = 0x2D06C0u;
            goto label_2d06c0;
        }
    }
    ctx->pc = 0x2D06B8u;
label_2d06b8:
    // 0x2d06b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d06b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2d06bc:
    // 0x2d06bc: 0xa2222b58  sb          $v0, 0x2B58($s1)
    ctx->pc = 0x2d06bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11096), (uint8_t)GPR_U32(ctx, 2));
label_2d06c0:
    // 0x2d06c0: 0x96230786  lhu         $v1, 0x786($s1)
    ctx->pc = 0x2d06c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1926)));
label_2d06c4:
    // 0x2d06c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d06c8:
    // 0x2d06c8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2d06cc:
    if (ctx->pc == 0x2D06CCu) {
        ctx->pc = 0x2D06D0u;
        goto label_2d06d0;
    }
    ctx->pc = 0x2D06C8u;
    {
        const bool branch_taken_0x2d06c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d06c8) {
            ctx->pc = 0x2D06E8u;
            goto label_2d06e8;
        }
    }
    ctx->pc = 0x2D06D0u;
label_2d06d0:
    // 0x2d06d0: 0x92222b5b  lbu         $v0, 0x2B5B($s1)
    ctx->pc = 0x2d06d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11099)));
label_2d06d4:
    // 0x2d06d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2d06d8:
    if (ctx->pc == 0x2D06D8u) {
        ctx->pc = 0x2D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D4u;
        // 0x2d06d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06DCu;
        goto label_2d06dc;
    }
    ctx->pc = 0x2D06D4u;
    {
        const bool branch_taken_0x2d06d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06D4u;
        // 0x2d06d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06d4) {
            ctx->pc = 0x2D06E8u;
            goto label_2d06e8;
        }
    }
    ctx->pc = 0x2D06DCu;
label_2d06dc:
    // 0x2d06dc: 0xc0b3bb0  jal         func_2CEEC0
label_2d06e0:
    if (ctx->pc == 0x2D06E0u) {
        ctx->pc = 0x2D06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06DCu;
        // 0x2d06e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06E4u;
        goto label_2d06e4;
    }
    ctx->pc = 0x2D06DCu;
    SET_GPR_U32(ctx, 31, 0x2D06E4u);
    ctx->pc = 0x2D06E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06DCu;
    // 0x2d06e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEEC0u, 0x2D06DCu, 0x2D06E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06E4u;
label_2d06e4:
    // 0x2d06e4: 0x0  nop
    ctx->pc = 0x2d06e4u;
    // NOP
label_2d06e8:
    // 0x2d06e8: 0xc0a4d3c  jal         func_2934F0
label_2d06ec:
    if (ctx->pc == 0x2D06ECu) {
        ctx->pc = 0x2D06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06E8u;
        // 0x2d06ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D06F0u;
        goto label_2d06f0;
    }
    ctx->pc = 0x2D06E8u;
    SET_GPR_U32(ctx, 31, 0x2D06F0u);
    ctx->pc = 0x2D06ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D06E8u;
    // 0x2d06ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2934F0u, 0x2D06E8u, 0x2D06F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D06F0u;
label_2d06f0:
    // 0x2d06f0: 0x9223065c  lbu         $v1, 0x65C($s1)
    ctx->pc = 0x2d06f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
label_2d06f4:
    // 0x2d06f4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2d06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2d06f8:
    // 0x2d06f8: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_2d06fc:
    if (ctx->pc == 0x2D06FCu) {
        ctx->pc = 0x2D06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06F8u;
        // 0x2d06fc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0700u;
        goto label_2d0700;
    }
    ctx->pc = 0x2D06F8u;
    {
        const bool branch_taken_0x2d06f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D06F8u;
        // 0x2d06fc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d06f8) {
            ctx->pc = 0x2D07D0u;
            goto label_2d07d0;
        }
    }
    ctx->pc = 0x2D0700u;
label_2d0700:
    // 0x2d0700: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_2d0704:
    if (ctx->pc == 0x2D0704u) {
        ctx->pc = 0x2D0708u;
        goto label_2d0708;
    }
    ctx->pc = 0x2D0700u;
    {
        const bool branch_taken_0x2d0700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0700) {
            ctx->pc = 0x2D07B0u;
            goto label_2d07b0;
        }
    }
    ctx->pc = 0x2D0708u;
label_2d0708:
    // 0x2d0708: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2d0708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2d070c:
    // 0x2d070c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_2d0710:
    if (ctx->pc == 0x2D0710u) {
        ctx->pc = 0x2D0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D070Cu;
        // 0x2d0710: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0714u;
        goto label_2d0714;
    }
    ctx->pc = 0x2D070Cu;
    {
        const bool branch_taken_0x2d070c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D070Cu;
        // 0x2d0710: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d070c) {
            ctx->pc = 0x2D0788u;
            goto label_2d0788;
        }
    }
    ctx->pc = 0x2D0714u;
label_2d0714:
    // 0x2d0714: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_2d0718:
    if (ctx->pc == 0x2D0718u) {
        ctx->pc = 0x2D071Cu;
        goto label_2d071c;
    }
    ctx->pc = 0x2D0714u;
    {
        const bool branch_taken_0x2d0714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0714) {
            ctx->pc = 0x2D0770u;
            goto label_2d0770;
        }
    }
    ctx->pc = 0x2D071Cu;
label_2d071c:
    // 0x2d071c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d071cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d0720:
    // 0x2d0720: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_2d0724:
    if (ctx->pc == 0x2D0724u) {
        ctx->pc = 0x2D0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0720u;
        // 0x2d0724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0728u;
        goto label_2d0728;
    }
    ctx->pc = 0x2D0720u;
    {
        const bool branch_taken_0x2d0720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0720u;
        // 0x2d0724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0720) {
            ctx->pc = 0x2D0750u;
            goto label_2d0750;
        }
    }
    ctx->pc = 0x2D0728u;
label_2d0728:
    // 0x2d0728: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2d072c:
    if (ctx->pc == 0x2D072Cu) {
        ctx->pc = 0x2D0730u;
        goto label_2d0730;
    }
    ctx->pc = 0x2D0728u;
    {
        const bool branch_taken_0x2d0728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d0728) {
            ctx->pc = 0x2D0738u;
            goto label_2d0738;
        }
    }
    ctx->pc = 0x2D0730u;
label_2d0730:
    // 0x2d0730: 0x10000035  b           . + 4 + (0x35 << 2)
label_2d0734:
    if (ctx->pc == 0x2D0734u) {
        ctx->pc = 0x2D0738u;
        goto label_2d0738;
    }
    ctx->pc = 0x2D0730u;
    {
        const bool branch_taken_0x2d0730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0730) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D0738u;
label_2d0738:
    // 0x2d0738: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d0738u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d073c:
    // 0x2d073c: 0xc0b3ce0  jal         func_2CF380
label_2d0740:
    if (ctx->pc == 0x2D0740u) {
        ctx->pc = 0x2D0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D073Cu;
        // 0x2d0740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0744u;
        goto label_2d0744;
    }
    ctx->pc = 0x2D073Cu;
    SET_GPR_U32(ctx, 31, 0x2D0744u);
    ctx->pc = 0x2D0740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D073Cu;
    // 0x2d0740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF380u, 0x2D073Cu, 0x2D0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0744u;
label_2d0744:
    // 0x2d0744: 0x10000030  b           . + 4 + (0x30 << 2)
label_2d0748:
    if (ctx->pc == 0x2D0748u) {
        ctx->pc = 0x2D074Cu;
        goto label_2d074c;
    }
    ctx->pc = 0x2D0744u;
    {
        const bool branch_taken_0x2d0744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0744) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D074Cu;
label_2d074c:
    // 0x2d074c: 0x0  nop
    ctx->pc = 0x2d074cu;
    // NOP
label_2d0750:
    // 0x2d0750: 0xc0b3c90  jal         func_2CF240
label_2d0754:
    if (ctx->pc == 0x2D0754u) {
        ctx->pc = 0x2D0754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0750u;
        // 0x2d0754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0758u;
        goto label_2d0758;
    }
    ctx->pc = 0x2D0750u;
    SET_GPR_U32(ctx, 31, 0x2D0758u);
    ctx->pc = 0x2D0754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0750u;
    // 0x2d0754: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF240u, 0x2D0750u, 0x2D0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0758u;
label_2d0758:
    // 0x2d0758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d075c:
    // 0x2d075c: 0xc0b3ce0  jal         func_2CF380
label_2d0760:
    if (ctx->pc == 0x2D0760u) {
        ctx->pc = 0x2D0760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D075Cu;
        // 0x2d0760: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0764u;
        goto label_2d0764;
    }
    ctx->pc = 0x2D075Cu;
    SET_GPR_U32(ctx, 31, 0x2D0764u);
    ctx->pc = 0x2D0760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D075Cu;
    // 0x2d0760: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF380u, 0x2D075Cu, 0x2D0764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0764u;
label_2d0764:
    // 0x2d0764: 0x10000028  b           . + 4 + (0x28 << 2)
label_2d0768:
    if (ctx->pc == 0x2D0768u) {
        ctx->pc = 0x2D076Cu;
        goto label_2d076c;
    }
    ctx->pc = 0x2D0764u;
    {
        const bool branch_taken_0x2d0764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0764) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D076Cu;
label_2d076c:
    // 0x2d076c: 0x0  nop
    ctx->pc = 0x2d076cu;
    // NOP
label_2d0770:
    // 0x2d0770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0774:
    // 0x2d0774: 0xc0b3ce0  jal         func_2CF380
label_2d0778:
    if (ctx->pc == 0x2D0778u) {
        ctx->pc = 0x2D0778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0774u;
        // 0x2d0778: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D077Cu;
        goto label_2d077c;
    }
    ctx->pc = 0x2D0774u;
    SET_GPR_U32(ctx, 31, 0x2D077Cu);
    ctx->pc = 0x2D0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0774u;
    // 0x2d0778: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF380u, 0x2D0774u, 0x2D077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D077Cu;
label_2d077c:
    // 0x2d077c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2d0780:
    if (ctx->pc == 0x2D0780u) {
        ctx->pc = 0x2D0784u;
        goto label_2d0784;
    }
    ctx->pc = 0x2D077Cu;
    {
        const bool branch_taken_0x2d077c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d077c) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D0784u;
label_2d0784:
    // 0x2d0784: 0x0  nop
    ctx->pc = 0x2d0784u;
    // NOP
label_2d0788:
    // 0x2d0788: 0xc0b3c90  jal         func_2CF240
label_2d078c:
    if (ctx->pc == 0x2D078Cu) {
        ctx->pc = 0x2D078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0788u;
        // 0x2d078c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0790u;
        goto label_2d0790;
    }
    ctx->pc = 0x2D0788u;
    SET_GPR_U32(ctx, 31, 0x2D0790u);
    ctx->pc = 0x2D078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0788u;
    // 0x2d078c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF240u, 0x2D0788u, 0x2D0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0790u;
label_2d0790:
    // 0x2d0790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d0794:
    // 0x2d0794: 0xc0b3ce0  jal         func_2CF380
label_2d0798:
    if (ctx->pc == 0x2D0798u) {
        ctx->pc = 0x2D0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0794u;
        // 0x2d0798: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D079Cu;
        goto label_2d079c;
    }
    ctx->pc = 0x2D0794u;
    SET_GPR_U32(ctx, 31, 0x2D079Cu);
    ctx->pc = 0x2D0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0794u;
    // 0x2d0798: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF380u, 0x2D0794u, 0x2D079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D079Cu;
label_2d079c:
    // 0x2d079c: 0xc0b3e44  jal         func_2CF910
label_2d07a0:
    if (ctx->pc == 0x2D07A0u) {
        ctx->pc = 0x2D07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D079Cu;
        // 0x2d07a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07A4u;
        goto label_2d07a4;
    }
    ctx->pc = 0x2D079Cu;
    SET_GPR_U32(ctx, 31, 0x2D07A4u);
    ctx->pc = 0x2D07A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D079Cu;
    // 0x2d07a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF910u, 0x2D079Cu, 0x2D07A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07A4u;
label_2d07a4:
    // 0x2d07a4: 0x10000018  b           . + 4 + (0x18 << 2)
label_2d07a8:
    if (ctx->pc == 0x2D07A8u) {
        ctx->pc = 0x2D07ACu;
        goto label_2d07ac;
    }
    ctx->pc = 0x2D07A4u;
    {
        const bool branch_taken_0x2d07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07a4) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D07ACu;
label_2d07ac:
    // 0x2d07ac: 0x0  nop
    ctx->pc = 0x2d07acu;
    // NOP
label_2d07b0:
    // 0x2d07b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d07b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d07b4:
    // 0x2d07b4: 0xc0b3ce0  jal         func_2CF380
label_2d07b8:
    if (ctx->pc == 0x2D07B8u) {
        ctx->pc = 0x2D07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07B4u;
        // 0x2d07b8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07BCu;
        goto label_2d07bc;
    }
    ctx->pc = 0x2D07B4u;
    SET_GPR_U32(ctx, 31, 0x2D07BCu);
    ctx->pc = 0x2D07B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07B4u;
    // 0x2d07b8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF380u, 0x2D07B4u, 0x2D07BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07BCu;
label_2d07bc:
    // 0x2d07bc: 0xc0b3df8  jal         func_2CF7E0
label_2d07c0:
    if (ctx->pc == 0x2D07C0u) {
        ctx->pc = 0x2D07C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07BCu;
        // 0x2d07c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D07C4u;
        goto label_2d07c4;
    }
    ctx->pc = 0x2D07BCu;
    SET_GPR_U32(ctx, 31, 0x2D07C4u);
    ctx->pc = 0x2D07C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07BCu;
    // 0x2d07c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E0u, 0x2D07BCu, 0x2D07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D07C4u;
label_2d07c4:
    // 0x2d07c4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2d07c8:
    if (ctx->pc == 0x2D07C8u) {
        ctx->pc = 0x2D07CCu;
        goto label_2d07cc;
    }
    ctx->pc = 0x2D07C4u;
    {
        const bool branch_taken_0x2d07c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d07c4) {
            ctx->pc = 0x2D0808u;
            goto label_2d0808;
        }
    }
    ctx->pc = 0x2D07CCu;
label_2d07cc:
    // 0x2d07cc: 0x0  nop
    ctx->pc = 0x2d07ccu;
    // NOP
label_2d07d0:
    // 0x2d07d0: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2d07d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2d07d4:
    // 0x2d07d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2d07d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2d07d8:
    // 0x2d07d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2d07d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_2d07dc:
    // 0x2d07dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d07dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2d07e0:
    // 0x2d07e0: 0x24630b8c  addiu       $v1, $v1, 0xB8C
    ctx->pc = 0x2d07e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2956));
label_2d07e4:
    // 0x2d07e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d07e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d07e8:
    // 0x2d07e8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2d07e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d07ec:
    // 0x2d07ec: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2d07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d07f0:
    // 0x2d07f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2d07f4:
    // 0x2d07f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d07f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d07f8:
    // 0x2d07f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d07f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d07fc:
    // 0x2d07fc: 0xc0b3ec4  jal         func_2CFB10
label_2d0800:
    if (ctx->pc == 0x2D0800u) {
        ctx->pc = 0x2D0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D07FCu;
        // 0x2d0800: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0804u;
        goto label_2d0804;
    }
    ctx->pc = 0x2D07FCu;
    SET_GPR_U32(ctx, 31, 0x2D0804u);
    ctx->pc = 0x2D0800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D07FCu;
    // 0x2d0800: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFB10u, 0x2D07FCu, 0x2D0804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0804u;
label_2d0804:
    // 0x2d0804: 0x0  nop
    ctx->pc = 0x2d0804u;
    // NOP
label_2d0808:
    // 0x2d0808: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2d080c:
    if (ctx->pc == 0x2D080Cu) {
        ctx->pc = 0x2D080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0808u;
        // 0x2d080c: 0x26222b40  addiu       $v0, $s1, 0x2B40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0810u;
        goto label_2d0810;
    }
    ctx->pc = 0x2D0808u;
    {
        const bool branch_taken_0x2d0808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0808u;
        // 0x2d080c: 0x26222b40  addiu       $v0, $s1, 0x2B40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 11072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0808) {
            ctx->pc = 0x2D0818u;
            goto label_2d0818;
        }
    }
    ctx->pc = 0x2D0810u;
label_2d0810:
    // 0x2d0810: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x2d0810u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_2d0814:
    // 0x2d0814: 0x0  nop
    ctx->pc = 0x2d0814u;
    // NOP
label_2d0818:
    // 0x2d0818: 0x8e2206ac  lw          $v0, 0x6AC($s1)
    ctx->pc = 0x2d0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
label_2d081c:
    // 0x2d081c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2d081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2d0820:
    // 0x2d0820: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2d0824:
    if (ctx->pc == 0x2D0824u) {
        ctx->pc = 0x2D0828u;
        goto label_2d0828;
    }
    ctx->pc = 0x2D0820u;
    {
        const bool branch_taken_0x2d0820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0820) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D0828u;
label_2d0828:
    // 0x2d0828: 0x92222b59  lbu         $v0, 0x2B59($s1)
    ctx->pc = 0x2d0828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11097)));
label_2d082c:
    // 0x2d082c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2d0830:
    if (ctx->pc == 0x2D0830u) {
        ctx->pc = 0x2D0834u;
        goto label_2d0834;
    }
    ctx->pc = 0x2D082Cu;
    {
        const bool branch_taken_0x2d082c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d082c) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D0834u;
label_2d0834:
    // 0x2d0834: 0x8e2229c0  lw          $v0, 0x29C0($s1)
    ctx->pc = 0x2d0834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
label_2d0838:
    // 0x2d0838: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2d0838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2d083c:
    // 0x2d083c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_2d0840:
    if (ctx->pc == 0x2D0840u) {
        ctx->pc = 0x2D0844u;
        goto label_2d0844;
    }
    ctx->pc = 0x2D083Cu;
    {
        const bool branch_taken_0x2d083c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d083c) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D0844u;
label_2d0844:
    // 0x2d0844: 0x96220286  lhu         $v0, 0x286($s1)
    ctx->pc = 0x2d0844u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 646)));
label_2d0848:
    // 0x2d0848: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x2d0848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_2d084c:
    // 0x2d084c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2d0850:
    if (ctx->pc == 0x2D0850u) {
        ctx->pc = 0x2D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D084Cu;
        // 0x2d0850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0854u;
        goto label_2d0854;
    }
    ctx->pc = 0x2D084Cu;
    {
        const bool branch_taken_0x2d084c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D084Cu;
        // 0x2d0850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d084c) {
            ctx->pc = 0x2D08A0u;
            goto label_2d08a0;
        }
    }
    ctx->pc = 0x2D0854u;
label_2d0854:
    // 0x2d0854: 0xc096fb8  jal         func_25BEE0
label_2d0858:
    if (ctx->pc == 0x2D0858u) {
        ctx->pc = 0x2D085Cu;
        goto label_2d085c;
    }
    ctx->pc = 0x2D0854u;
    SET_GPR_U32(ctx, 31, 0x2D085Cu);
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x2D0854u, 0x2D085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D085Cu;
label_2d085c:
    // 0x2d085c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0860:
    // 0x2d0860: 0x922508e8  lbu         $a1, 0x8E8($s1)
    ctx->pc = 0x2d0860u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2280)));
label_2d0864:
    // 0x2d0864: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2d0868:
    // 0x2d0868: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x2d0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2d086c:
    // 0x2d086c: 0xc0a8fa0  jal         func_2A3E80
label_2d0870:
    if (ctx->pc == 0x2D0870u) {
        ctx->pc = 0x2D0870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D086Cu;
        // 0x2d0870: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0874u;
        goto label_2d0874;
    }
    ctx->pc = 0x2D086Cu;
    SET_GPR_U32(ctx, 31, 0x2D0874u);
    ctx->pc = 0x2D0870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D086Cu;
    // 0x2d0870: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3E80u, 0x2D086Cu, 0x2D0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0874u;
label_2d0874:
    // 0x2d0874: 0x8e3904d4  lw          $t9, 0x4D4($s1)
    ctx->pc = 0x2d0874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1236)));
label_2d0878:
    // 0x2d0878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d0878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d087c:
    // 0x2d087c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d087cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0880:
    // 0x2d0880: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2d0880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2d0884:
    // 0x2d0884: 0x320f809  jalr        $t9
label_2d0888:
    if (ctx->pc == 0x2D0888u) {
        ctx->pc = 0x2D0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0884u;
        // 0x2d0888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D088Cu;
        goto label_2d088c;
    }
    ctx->pc = 0x2D0884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D088Cu);
        ctx->pc = 0x2D0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0884u;
        // 0x2d0888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0884u, 0x2D088Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D088Cu;
label_2d088c:
    // 0x2d088c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d0890:
    // 0x2d0890: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d0890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d0894:
    // 0x2d0894: 0xa6230786  sh          $v1, 0x786($s1)
    ctx->pc = 0x2d0894u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1926), (uint16_t)GPR_U32(ctx, 3));
label_2d0898:
    // 0x2d0898: 0xa2222b09  sb          $v0, 0x2B09($s1)
    ctx->pc = 0x2d0898u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11017), (uint8_t)GPR_U32(ctx, 2));
label_2d089c:
    // 0x2d089c: 0x0  nop
    ctx->pc = 0x2d089cu;
    // NOP
label_2d08a0:
    // 0x2d08a0: 0x92222b5b  lbu         $v0, 0x2B5B($s1)
    ctx->pc = 0x2d08a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11099)));
label_2d08a4:
    // 0x2d08a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2d08a8:
    if (ctx->pc == 0x2D08A8u) {
        ctx->pc = 0x2D08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08A4u;
        // 0x2d08a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08ACu;
        goto label_2d08ac;
    }
    ctx->pc = 0x2D08A4u;
    {
        const bool branch_taken_0x2d08a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08A4u;
        // 0x2d08a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d08a4) {
            ctx->pc = 0x2D08B8u;
            goto label_2d08b8;
        }
    }
    ctx->pc = 0x2D08ACu;
label_2d08ac:
    // 0x2d08ac: 0xc0b3bb0  jal         func_2CEEC0
label_2d08b0:
    if (ctx->pc == 0x2D08B0u) {
        ctx->pc = 0x2D08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08ACu;
        // 0x2d08b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08B4u;
        goto label_2d08b4;
    }
    ctx->pc = 0x2D08ACu;
    SET_GPR_U32(ctx, 31, 0x2D08B4u);
    ctx->pc = 0x2D08B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08ACu;
    // 0x2d08b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CEEC0u, 0x2D08ACu, 0x2D08B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08B4u;
label_2d08b4:
    // 0x2d08b4: 0x0  nop
    ctx->pc = 0x2d08b4u;
    // NOP
label_2d08b8:
    // 0x2d08b8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2d08b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_2d08bc:
    // 0x2d08bc: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2d08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
label_2d08c0:
    // 0x2d08c0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d08c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2d08c4:
    // 0x2d08c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d08c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d08c8:
    // 0x2d08c8: 0xc0414dc  jal         func_105370
label_2d08cc:
    if (ctx->pc == 0x2D08CCu) {
        ctx->pc = 0x2D08CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08C8u;
        // 0x2d08cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08D0u;
        goto label_2d08d0;
    }
    ctx->pc = 0x2D08C8u;
    SET_GPR_U32(ctx, 31, 0x2D08D0u);
    ctx->pc = 0x2D08CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08C8u;
    // 0x2d08cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D08C8u, 0x2D08D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08D0u;
label_2d08d0:
    // 0x2d08d0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d08d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2d08d4:
    // 0x2d08d4: 0x262600a0  addiu       $a2, $s1, 0xA0
    ctx->pc = 0x2d08d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_2d08d8:
    // 0x2d08d8: 0xc0414ca  jal         func_105328
label_2d08dc:
    if (ctx->pc == 0x2D08DCu) {
        ctx->pc = 0x2D08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08D8u;
        // 0x2d08dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08E0u;
        goto label_2d08e0;
    }
    ctx->pc = 0x2D08D8u;
    SET_GPR_U32(ctx, 31, 0x2D08E0u);
    ctx->pc = 0x2D08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08D8u;
    // 0x2d08dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2D08D8u, 0x2D08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08E0u;
label_2d08e0:
    // 0x2d08e0: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x2d08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2d08e4:
    // 0x2d08e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d08e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d08e8:
    // 0x2d08e8: 0xc096914  jal         func_25A450
label_2d08ec:
    if (ctx->pc == 0x2D08ECu) {
        ctx->pc = 0x2D08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08E8u;
        // 0x2d08ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D08F0u;
        goto label_2d08f0;
    }
    ctx->pc = 0x2D08E8u;
    SET_GPR_U32(ctx, 31, 0x2D08F0u);
    ctx->pc = 0x2D08ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08E8u;
    // 0x2d08ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A450u, 0x2D08E8u, 0x2D08F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D08F0u;
label_2d08f0:
    // 0x2d08f0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x2d08f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2d08f4:
    // 0x2d08f4: 0x26260090  addiu       $a2, $s1, 0x90
    ctx->pc = 0x2d08f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_2d08f8:
    // 0x2d08f8: 0xc0414ca  jal         func_105328
label_2d08fc:
    if (ctx->pc == 0x2D08FCu) {
        ctx->pc = 0x2D08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D08F8u;
        // 0x2d08fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0900u;
        goto label_2d0900;
    }
    ctx->pc = 0x2D08F8u;
    SET_GPR_U32(ctx, 31, 0x2D0900u);
    ctx->pc = 0x2D08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D08F8u;
    // 0x2d08fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2D08F8u, 0x2D0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0900u;
label_2d0900:
    // 0x2d0900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d0900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d0904:
    // 0x2d0904: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d0904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d0908:
    // 0x2d0908: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d0908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d090c:
    // 0x2d090c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d090cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d0910:
    // 0x2d0910: 0x3e00008  jr          $ra
label_2d0914:
    if (ctx->pc == 0x2D0914u) {
        ctx->pc = 0x2D0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0910u;
        // 0x2d0914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D0918u;
        goto label_fallthrough_0x2d0910;
    }
    ctx->pc = 0x2D0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0910u;
        // 0x2d0914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d0910:
    ctx->pc = 0x2D0918u;
}
