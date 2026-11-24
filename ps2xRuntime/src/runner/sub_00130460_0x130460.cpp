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

// Function: sub_00130460
// Address: 0x130460 - 0x13061c
void sub_00130460_0x130460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130460_0x130460");
#endif

    switch (ctx->pc) {
        case 0x1304b0u: goto label_1304b0;
        case 0x1304d0u: goto label_1304d0;
        case 0x1304fcu: goto label_1304fc;
        case 0x13051cu: goto label_13051c;
        case 0x13054cu: goto label_13054c;
        case 0x13056cu: goto label_13056c;
        case 0x1305a0u: goto label_1305a0;
        case 0x1305c0u: goto label_1305c0;
        case 0x1305f0u: goto label_1305f0;
        case 0x130610u: goto label_130610;
        default: break;
    }

    ctx->pc = 0x130460u;

    // 0x130460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130464: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13046c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x13046cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x130470: 0x8c23cee0  lw          $v1, -0x3120($at)
    ctx->pc = 0x130470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEE0u));
    // 0x130474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x130474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x130478: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x130478u;
    {
        const bool branch_taken_0x130478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130478u;
        // 0x13047c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130478) {
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x130480u;
    // 0x130480: 0x8c25ceb8  lw          $a1, -0x3148($at)
    ctx->pc = 0x130480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x130484: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x130484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x130488: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x130488u;
    {
        const bool branch_taken_0x130488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130488u;
        // 0x13048c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130488) {
            ctx->pc = 0x130570u;
            goto label_130570;
        }
    }
    ctx->pc = 0x130490u;
    // 0x130490: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x130490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x130494: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x130494u;
    {
        const bool branch_taken_0x130494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130494u;
        // 0x130498: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130494) {
            ctx->pc = 0x1304D0u;
            goto label_1304d0;
        }
    }
    ctx->pc = 0x13049Cu;
    // 0x13049c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x13049cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1304a0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1304a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1304a4: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1304a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1304a8: 0xc04ca60  jal         func_132980
    ctx->pc = 0x1304A8u;
    SET_GPR_U32(ctx, 31, 0x1304B0u);
    ctx->pc = 0x1304ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304A8u;
    // 0x1304ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x1304A8u, 0x1304B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304B0u;
label_1304b0:
    // 0x1304b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1304b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304b4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1304B4u;
    {
        const bool branch_taken_0x1304b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1304b4) {
            ctx->pc = 0x1304D0u;
            goto label_1304d0;
        }
    }
    ctx->pc = 0x1304BCu;
    // 0x1304bc: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x1304bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1304c0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1304c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1304c4: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1304c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1304c8: 0xc061c60  jal         func_187180
    ctx->pc = 0x1304C8u;
    SET_GPR_U32(ctx, 31, 0x1304D0u);
    ctx->pc = 0x1304CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304C8u;
    // 0x1304cc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1304C8u, 0x1304D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304D0u;
label_1304d0:
    // 0x1304d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1304d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1304d4: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x1304d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x1304d8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1304d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1304dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1304dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1304e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1304E0u;
    {
        const bool branch_taken_0x1304e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1304E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304E0u;
        // 0x1304e4: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1304e0) {
            ctx->pc = 0x130520u;
            goto label_130520;
        }
    }
    ctx->pc = 0x1304E8u;
    // 0x1304e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1304e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1304ec: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1304ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1304f0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1304f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1304f4: 0xc04ca60  jal         func_132980
    ctx->pc = 0x1304F4u;
    SET_GPR_U32(ctx, 31, 0x1304FCu);
    ctx->pc = 0x1304F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304F4u;
    // 0x1304f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x1304F4u, 0x1304FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1304FCu;
label_1304fc:
    // 0x1304fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1304fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130500: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130500u;
    {
        const bool branch_taken_0x130500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130500) {
            ctx->pc = 0x130520u;
            goto label_130520;
        }
    }
    ctx->pc = 0x130508u;
    // 0x130508: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x130508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x13050c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x13050cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130510: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x130510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x130514: 0xc061c60  jal         func_187180
    ctx->pc = 0x130514u;
    SET_GPR_U32(ctx, 31, 0x13051Cu);
    ctx->pc = 0x130518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130514u;
    // 0x130518: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x130514u, 0x13051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13051Cu;
label_13051c:
    // 0x13051c: 0x0  nop
    ctx->pc = 0x13051cu;
    // NOP
label_130520:
    // 0x130520: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130524: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x130524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x130528: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x130528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x13052c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13052cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130530: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x130530u;
    {
        const bool branch_taken_0x130530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130530u;
        // 0x130534: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130530) {
            ctx->pc = 0x130570u;
            goto label_130570;
        }
    }
    ctx->pc = 0x130538u;
    // 0x130538: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x130538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13053c: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x13053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x130540: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x130540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x130544: 0xc04ca60  jal         func_132980
    ctx->pc = 0x130544u;
    SET_GPR_U32(ctx, 31, 0x13054Cu);
    ctx->pc = 0x130548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130544u;
    // 0x130548: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x130544u, 0x13054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13054Cu;
label_13054c:
    // 0x13054c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13054cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130550: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x130550u;
    {
        const bool branch_taken_0x130550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130550) {
            ctx->pc = 0x130570u;
            goto label_130570;
        }
    }
    ctx->pc = 0x130558u;
    // 0x130558: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x130558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x13055c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x13055cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130560: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x130560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x130564: 0xc061c60  jal         func_187180
    ctx->pc = 0x130564u;
    SET_GPR_U32(ctx, 31, 0x13056Cu);
    ctx->pc = 0x130568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130564u;
    // 0x130568: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x130564u, 0x13056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13056Cu;
label_13056c:
    // 0x13056c: 0x0  nop
    ctx->pc = 0x13056cu;
    // NOP
label_130570:
    // 0x130570: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x130570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x130574: 0x8c24ceb8  lw          $a0, -0x3148($at)
    ctx->pc = 0x130574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x130578: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x130578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x13057c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13057cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x130580: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x130580u;
    {
        const bool branch_taken_0x130580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130580) {
            ctx->pc = 0x1305C8u;
            goto label_1305c8;
        }
    }
    ctx->pc = 0x130588u;
    // 0x130588: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x130588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x13058c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x130590: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x130590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x130594: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x130594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x130598: 0xc04ca60  jal         func_132980
    ctx->pc = 0x130598u;
    SET_GPR_U32(ctx, 31, 0x1305A0u);
    ctx->pc = 0x13059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130598u;
    // 0x13059c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x130598u, 0x1305A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305A0u;
label_1305a0:
    // 0x1305a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1305a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305a4: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1305A4u;
    {
        const bool branch_taken_0x1305a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305a4) {
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x1305ACu;
    // 0x1305ac: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x1305acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1305b0: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1305b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1305b4: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x1305b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x1305b8: 0xc061c60  jal         func_187180
    ctx->pc = 0x1305B8u;
    SET_GPR_U32(ctx, 31, 0x1305C0u);
    ctx->pc = 0x1305BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305B8u;
    // 0x1305bc: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x1305B8u, 0x1305C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305C0u;
label_1305c0:
    // 0x1305c0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1305C0u;
    {
        const bool branch_taken_0x1305c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305c0) {
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x1305C8u;
label_1305c8:
    // 0x1305c8: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1305c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1305cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1305ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1305d0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1305D0u;
    {
        const bool branch_taken_0x1305d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305d0) {
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x1305D8u;
    // 0x1305d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1305d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1305dc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1305dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1305e0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x1305e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x1305e4: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1305e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1305e8: 0xc04ca60  jal         func_132980
    ctx->pc = 0x1305E8u;
    SET_GPR_U32(ctx, 31, 0x1305F0u);
    ctx->pc = 0x1305ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305E8u;
    // 0x1305ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132980u, 0x1305E8u, 0x1305F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1305F0u;
label_1305f0:
    // 0x1305f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1305f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1305F4u;
    {
        const bool branch_taken_0x1305f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1305f4) {
            ctx->pc = 0x130610u;
            goto label_130610;
        }
    }
    ctx->pc = 0x1305FCu;
    // 0x1305fc: 0x8fa6001c  lw          $a2, 0x1C($sp)
    ctx->pc = 0x1305fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x130600: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x130600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x130604: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x130604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x130608: 0xc061c60  jal         func_187180
    ctx->pc = 0x130608u;
    SET_GPR_U32(ctx, 31, 0x130610u);
    ctx->pc = 0x13060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130608u;
    // 0x13060c: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187180u, 0x130608u, 0x130610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130610u;
label_130610:
    // 0x130610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130614: 0x3e00008  jr          $ra
    ctx->pc = 0x130614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130614u;
        // 0x130618: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13061Cu;
}
