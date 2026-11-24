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

// Function: sub_00240508
// Address: 0x240508 - 0x2406ac
void sub_00240508_0x240508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240508_0x240508");
#endif

    switch (ctx->pc) {
        case 0x2405a8u: goto label_2405a8;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405e0u: goto label_2405e0;
        case 0x240688u: goto label_240688;
        default: break;
    }

    ctx->pc = 0x240508u;

    // 0x240508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24050c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24050cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240514: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x240514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x240518: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x240518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24051c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x240520: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x240520u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x240528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24052c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x24052cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x240530: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x240530u;
    {
        const bool branch_taken_0x240530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x240534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240530u;
        // 0x240534: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240530) {
            ctx->pc = 0x240540u;
            goto label_240540;
        }
    }
    ctx->pc = 0x240538u;
    // 0x240538: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x240538u;
    {
        const bool branch_taken_0x240538 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240538u;
        // 0x24053c: 0x2a823000  slti        $v0, $s4, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12288) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240538) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x240540u;
label_240540:
    // 0x240540: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x240540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x240544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240548: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240548u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24054c: 0x2484b9f8  addiu       $a0, $a0, -0x4608
    ctx->pc = 0x24054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949368));
    // 0x240550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x240554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240558: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x240558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24055c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24055cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240564: 0x808baa4  j           func_22EA90
    ctx->pc = 0x240564u;
    ctx->pc = 0x240568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240564u;
    // 0x240568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x24056Cu;
    // 0x24056c: 0x0  nop
    ctx->pc = 0x24056cu;
    // NOP
label_240570:
    // 0x240570: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x240570u;
    {
        const bool branch_taken_0x240570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240570u;
        // 0x240574: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240570) {
            ctx->pc = 0x2405A0u;
            goto label_2405a0;
        }
    }
    ctx->pc = 0x240578u;
    // 0x240578: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x240578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24057c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24057cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240580: 0x2484ba20  addiu       $a0, $a0, -0x45E0
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949408));
    // 0x240584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240588: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x240588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24058c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24058cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240590: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x240590u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240598: 0x808baa4  j           func_22EA90
    ctx->pc = 0x240598u;
    ctx->pc = 0x24059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240598u;
    // 0x24059c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x2405A0u;
label_2405a0:
    // 0x2405a0: 0xc08e6f4  jal         func_239BD0
    ctx->pc = 0x2405A0u;
    SET_GPR_U32(ctx, 31, 0x2405A8u);
    ctx->pc = 0x2405A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A0u;
    // 0x2405a4: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239BD0u, 0x2405A0u, 0x2405A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405A8u;
label_2405a8:
    // 0x2405a8: 0xc0901ac  jal         func_2406B0
    ctx->pc = 0x2405A8u;
    SET_GPR_U32(ctx, 31, 0x2405B0u);
    ctx->pc = 0x2405ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A8u;
    // 0x2405ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2406B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2406B0u, 0x2405A8u, 0x2405B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B0u;
label_2405b0:
    // 0x2405b0: 0xc090aec  jal         func_242BB0
    ctx->pc = 0x2405B0u;
    SET_GPR_U32(ctx, 31, 0x2405B8u);
    ctx->pc = 0x242BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242BB0u, 0x2405B0u, 0x2405B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B8u;
label_2405b8:
    // 0x2405b8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2405bc: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2405bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2405c0: 0xc08d1f6  jal         func_2347D8
    ctx->pc = 0x2405C0u;
    SET_GPR_U32(ctx, 31, 0x2405C8u);
    ctx->pc = 0x2405C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405C0u;
    // 0x2405c4: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2347D8u, 0x2405C0u, 0x2405C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405C8u;
label_2405c8:
    // 0x2405c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2405c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2405ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2405d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2405d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405d4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2405d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405d8: 0xc090b22  jal         func_242C88
    ctx->pc = 0x2405D8u;
    SET_GPR_U32(ctx, 31, 0x2405E0u);
    ctx->pc = 0x2405DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405D8u;
    // 0x2405dc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C88u, 0x2405D8u, 0x2405E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405E0u;
label_2405e0:
    // 0x2405e0: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x2405e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x2405e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2405e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2405e8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x2405e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x2405ec: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x2405f0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x2405f4: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x2405f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x2405f8: 0x3c070024  lui         $a3, 0x24
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)36 << 16));
    // 0x2405fc: 0x248b0788  addiu       $t3, $a0, 0x788
    ctx->pc = 0x2405fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 1928));
    // 0x240600: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x240600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240604: 0x244906d8  addiu       $t1, $v0, 0x6D8
    ctx->pc = 0x240604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1752));
    // 0x240608: 0x246a07a0  addiu       $t2, $v1, 0x7A0
    ctx->pc = 0x240608u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1952));
    // 0x24060c: 0x24a50770  addiu       $a1, $a1, 0x770
    ctx->pc = 0x24060cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1904));
    // 0x240610: 0x24c62e58  addiu       $a2, $a2, 0x2E58
    ctx->pc = 0x240610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11864));
    // 0x240614: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x240614u;
    {
        const bool branch_taken_0x240614 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x240618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240614u;
        // 0x240618: 0x24e73380  addiu       $a3, $a3, 0x3380 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240614) {
            ctx->pc = 0x240648u;
            goto label_240648;
        }
    }
    ctx->pc = 0x24061Cu;
    // 0x24061c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x240620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240628: 0x2484ba50  addiu       $a0, $a0, -0x45B0
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949456));
    // 0x24062c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24062cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x240630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240634: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x240634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240638: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x240638u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24063c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24063cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x240640: 0x808baa4  j           func_22EA90
    ctx->pc = 0x240640u;
    ctx->pc = 0x240644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240640u;
    // 0x240644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x240648u;
label_240648:
    // 0x240648: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24064c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x240650: 0xaea800b4  sw          $t0, 0xB4($s5)
    ctx->pc = 0x240650u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 8));
    // 0x240654: 0xac498f94  sw          $t1, -0x706C($v0)
    ctx->pc = 0x240654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x4C8F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C8F94u, _value); } while (0);
    // 0x240658: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x240658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x24065c: 0xac6ab0dc  sw          $t2, -0x4F24($v1)
    ctx->pc = 0x24065cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x4BB0DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0DCu, _value); } while (0);
    // 0x240660: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x240664: 0xac4bb0d8  sw          $t3, -0x4F28($v0)
    ctx->pc = 0x240664u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x4BB0D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0D8u, _value); } while (0);
    // 0x240668: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x240668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x24066c: 0xac65b0d4  sw          $a1, -0x4F2C($v1)
    ctx->pc = 0x24066cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4BB0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0D4u, _value); } while (0);
    // 0x240670: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x240670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x240674: 0xac46b0d0  sw          $a2, -0x4F30($v0)
    ctx->pc = 0x240674u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4BB0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB0D0u, _value); } while (0);
    // 0x240678: 0xac67b2f0  sw          $a3, -0x4D10($v1)
    ctx->pc = 0x240678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x4BB2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BB2F0u, _value); } while (0);
    // 0x24067c: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x24067cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x240680: 0xc090c80  jal         func_243200
    ctx->pc = 0x240680u;
    SET_GPR_U32(ctx, 31, 0x240688u);
    ctx->pc = 0x240684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240680u;
    // 0x240684: 0x8e450050  lw          $a1, 0x50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243200u, 0x240680u, 0x240688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240688u;
label_240688:
    // 0x240688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24068c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24068cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240690: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x240690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240694: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x240694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240698: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x240698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24069c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x24069cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2406a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2406a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2406a4: 0x808d1fc  j           func_2347F0
    ctx->pc = 0x2406A4u;
    ctx->pc = 0x2406A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2406A4u;
    // 0x2406a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2347F0u;
    sub_002347F0_0x2347f0(rdram, ctx, runtime); return;
    ctx->pc = 0x2406ACu;
}
