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

// Function: sub_00249408
// Address: 0x249408 - 0x249550
void sub_00249408_0x249408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249408_0x249408");
#endif

    switch (ctx->pc) {
        case 0x249450u: goto label_249450;
        case 0x249468u: goto label_249468;
        case 0x249490u: goto label_249490;
        case 0x2494d4u: goto label_2494d4;
        case 0x24950cu: goto label_24950c;
        case 0x249518u: goto label_249518;
        default: break;
    }

    ctx->pc = 0x249408u;

    // 0x249408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24940c: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x24940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x249410: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x249410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249414: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x249414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249418: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x249418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24941c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24941cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249420: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x249420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x249424: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x249424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24942c: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x24942cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x249430: 0x24446480  addiu       $a0, $v0, 0x6480
    ctx->pc = 0x249430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25728));
    // 0x249434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249438: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x249438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24943c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x24943cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249448: 0xc049590  jal         func_125640
    ctx->pc = 0x249448u;
    SET_GPR_U32(ctx, 31, 0x249450u);
    ctx->pc = 0x24944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249448u;
    // 0x24944c: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x249448u, 0x249450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249450u;
label_249450:
    // 0x249450: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x249450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x249454: 0x8c620b40  lw          $v0, 0xB40($v1)
    ctx->pc = 0x249454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4D0B40u));
    // 0x249458: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x249458u;
    {
        const bool branch_taken_0x249458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249458) {
            ctx->pc = 0x249468u;
            goto label_249468;
        }
    }
    ctx->pc = 0x249460u;
    // 0x249460: 0xc092420  jal         func_249080
    ctx->pc = 0x249460u;
    SET_GPR_U32(ctx, 31, 0x249468u);
    ctx->pc = 0x249080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249080u, 0x249460u, 0x249468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249468u;
label_249468:
    // 0x249468: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x249468u;
    {
        const bool branch_taken_0x249468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x249468) {
            ctx->pc = 0x249488u;
            goto label_249488;
        }
    }
    ctx->pc = 0x249470u;
    // 0x249470: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x249470u;
    {
        const bool branch_taken_0x249470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x249470) {
            ctx->pc = 0x249488u;
            goto label_249488;
        }
    }
    ctx->pc = 0x249478u;
    // 0x249478: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x249478u;
    {
        const bool branch_taken_0x249478 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x249478) {
            ctx->pc = 0x249488u;
            goto label_249488;
        }
    }
    ctx->pc = 0x249480u;
    // 0x249480: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249480u;
    {
        const bool branch_taken_0x249480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x249480) {
            ctx->pc = 0x249490u;
            goto label_249490;
        }
    }
    ctx->pc = 0x249488u;
label_249488:
    // 0x249488: 0xc092420  jal         func_249080
    ctx->pc = 0x249488u;
    SET_GPR_U32(ctx, 31, 0x249490u);
    ctx->pc = 0x249080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249080u, 0x249488u, 0x249490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249490u;
label_249490:
    // 0x249490: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x249490u;
    {
        const bool branch_taken_0x249490 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x249494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249490u;
        // 0x249494: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249490) {
            ctx->pc = 0x24952Cu;
            goto label_24952c;
        }
    }
    ctx->pc = 0x249498u;
    // 0x249498: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x249498u;
    {
        const bool branch_taken_0x249498 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249498u;
        // 0x24949c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249498) {
            ctx->pc = 0x2494B0u;
            goto label_2494b0;
        }
    }
    ctx->pc = 0x2494A0u;
    // 0x2494a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2494a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2494A4u;
    {
        const bool branch_taken_0x2494a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494A4u;
        // 0x2494a8: 0x2484d160  addiu       $a0, $a0, -0x2EA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494a4) {
            ctx->pc = 0x2494CCu;
            goto label_2494cc;
        }
    }
    ctx->pc = 0x2494ACu;
    // 0x2494ac: 0x0  nop
    ctx->pc = 0x2494acu;
    // NOP
label_2494b0:
    // 0x2494b0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2494B0u;
    {
        const bool branch_taken_0x2494b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494B0u;
        // 0x2494b4: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494b0) {
            ctx->pc = 0x2494C4u;
            goto label_2494c4;
        }
    }
    ctx->pc = 0x2494B8u;
    // 0x2494b8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2494B8u;
    {
        const bool branch_taken_0x2494b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2494BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494B8u;
        // 0x2494bc: 0x26b00009  addiu       $s0, $s5, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494b8) {
            ctx->pc = 0x2494E0u;
            goto label_2494e0;
        }
    }
    ctx->pc = 0x2494C0u;
    // 0x2494c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2494c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_2494c4:
    // 0x2494c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2494c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494c8: 0x2484d190  addiu       $a0, $a0, -0x2E70
    ctx->pc = 0x2494c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955408));
label_2494cc:
    // 0x2494cc: 0xc08d460  jal         func_235180
    ctx->pc = 0x2494CCu;
    SET_GPR_U32(ctx, 31, 0x2494D4u);
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x2494CCu, 0x2494D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2494D4u;
label_2494d4:
    // 0x2494d4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2494D4u;
    {
        const bool branch_taken_0x2494d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2494D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2494D4u;
        // 0x2494d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2494d4) {
            ctx->pc = 0x24952Cu;
            goto label_24952c;
        }
    }
    ctx->pc = 0x2494DCu;
    // 0x2494dc: 0x0  nop
    ctx->pc = 0x2494dcu;
    // NOP
label_2494e0:
    // 0x2494e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2494e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494e4: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x2494e4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2494e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2494e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494ec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2494ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2494f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2494f4: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2494F4u;
    {
        const bool branch_taken_0x2494f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2494f4) {
            ctx->pc = 0x2494F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2494F4u;
            // 0x2494f8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2494FCu;
            goto label_2494fc;
        }
    }
    ctx->pc = 0x2494FCu;
label_2494fc:
    // 0x2494fc: 0x8812  mflo        $s1
    ctx->pc = 0x2494fcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x249500: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x249500u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249504: 0xc0922c2  jal         func_248B08
    ctx->pc = 0x249504u;
    SET_GPR_U32(ctx, 31, 0x24950Cu);
    ctx->pc = 0x249508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249504u;
    // 0x249508: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B08u, 0x249504u, 0x24950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24950Cu;
label_24950c:
    // 0x24950c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24950cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249510: 0xc09238a  jal         func_248E28
    ctx->pc = 0x249510u;
    SET_GPR_U32(ctx, 31, 0x249518u);
    ctx->pc = 0x249514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249510u;
    // 0x249514: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E28u, 0x249510u, 0x249518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249518u;
label_249518:
    // 0x249518: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x249518u;
    {
        const bool branch_taken_0x249518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x249518) {
            ctx->pc = 0x24951Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249518u;
            // 0x24951c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x249520u;
            goto label_249520;
        }
    }
    ctx->pc = 0x249520u;
label_249520:
    // 0x249520: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x249520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x249524: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x249524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x249528: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x249528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_24952c:
    // 0x24952c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24952cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249534: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249534u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249538: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249538u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24953c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x24953cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249540: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x249540u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x249544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x249548: 0x3e00008  jr          $ra
    ctx->pc = 0x249548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249548u;
        // 0x24954c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249550u;
}
