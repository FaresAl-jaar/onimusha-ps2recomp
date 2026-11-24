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

// Function: sub_003E4450
// Address: 0x3e4450 - 0x3e4cf8
void sub_003E4450_0x3e4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4450_0x3e4450");
#endif

    switch (ctx->pc) {
        case 0x3e44a4u: goto label_3e44a4;
        case 0x3e44d8u: goto label_3e44d8;
        case 0x3e44e4u: goto label_3e44e4;
        case 0x3e44f0u: goto label_3e44f0;
        case 0x3e4508u: goto label_3e4508;
        case 0x3e4624u: goto label_3e4624;
        case 0x3e4630u: goto label_3e4630;
        case 0x3e4684u: goto label_3e4684;
        case 0x3e4690u: goto label_3e4690;
        case 0x3e46e4u: goto label_3e46e4;
        case 0x3e46f0u: goto label_3e46f0;
        case 0x3e4744u: goto label_3e4744;
        case 0x3e4750u: goto label_3e4750;
        case 0x3e47a4u: goto label_3e47a4;
        case 0x3e47b0u: goto label_3e47b0;
        case 0x3e4810u: goto label_3e4810;
        case 0x3e4844u: goto label_3e4844;
        case 0x3e4850u: goto label_3e4850;
        case 0x3e4870u: goto label_3e4870;
        case 0x3e48a0u: goto label_3e48a0;
        case 0x3e48fcu: goto label_3e48fc;
        case 0x3e4930u: goto label_3e4930;
        case 0x3e493cu: goto label_3e493c;
        case 0x3e495cu: goto label_3e495c;
        case 0x3e4a80u: goto label_3e4a80;
        case 0x3e4aacu: goto label_3e4aac;
        case 0x3e4ab8u: goto label_3e4ab8;
        case 0x3e4aecu: goto label_3e4aec;
        case 0x3e4b20u: goto label_3e4b20;
        case 0x3e4b2cu: goto label_3e4b2c;
        case 0x3e4b94u: goto label_3e4b94;
        case 0x3e4bb8u: goto label_3e4bb8;
        case 0x3e4c64u: goto label_3e4c64;
        case 0x3e4c80u: goto label_3e4c80;
        default: break;
    }

    ctx->pc = 0x3e4450u;

    // 0x3e4450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e4450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e4454: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e445c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e4460: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e4460u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e4464: 0x30634008  andi        $v1, $v1, 0x4008
    ctx->pc = 0x3e4464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16392);
    // 0x3e4468: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3E4468u;
    {
        const bool branch_taken_0x3e4468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4468u;
        // 0x3e446c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4468) {
            ctx->pc = 0x3E4510u;
            goto label_3e4510;
        }
    }
    ctx->pc = 0x3E4470u;
    // 0x3e4470: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4474: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4478: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e447c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4480: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e4480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e4484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4488: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e4488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e448c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e448cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4494: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4494u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4498: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4498u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e449c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E449Cu;
    SET_GPR_U32(ctx, 31, 0x3E44A4u);
    ctx->pc = 0x3E44A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E449Cu;
    // 0x3e44a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E449Cu, 0x3E44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44A4u;
label_3e44a4:
    // 0x3e44a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e44a8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e44ac: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e44acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e44b0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e44b4: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e44b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e44b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e44b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44bc: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e44bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e44c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e44c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e44c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e44c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e44ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44d0: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E44D0u;
    SET_GPR_U32(ctx, 31, 0x3E44D8u);
    ctx->pc = 0x3E44D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E44D0u;
    // 0x3e44d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E44D0u, 0x3E44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44D8u;
label_3e44d8:
    // 0x3e44d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e44d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e44dc: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E44DCu;
    SET_GPR_U32(ctx, 31, 0x3E44E4u);
    ctx->pc = 0x3E44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E44DCu;
    // 0x3e44e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E44DCu, 0x3E44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44E4u;
label_3e44e4:
    // 0x3e44e4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e44e8: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3E44E8u;
    SET_GPR_U32(ctx, 31, 0x3E44F0u);
    ctx->pc = 0x3E44ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E44E8u;
    // 0x3e44ec: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3E44E8u, 0x3E44F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E44F0u;
label_3e44f0:
    // 0x3e44f0: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x3e44f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e44f4: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x3e44f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e44f8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3e44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e44fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3e4500: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E4500u;
    SET_GPR_U32(ctx, 31, 0x3E4508u);
    ctx->pc = 0x3E4504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4500u;
    // 0x3e4504: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E4500u, 0x3E4508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4508u;
label_3e4508:
    // 0x3e4508: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x3E4508u;
    {
        const bool branch_taken_0x3e4508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4508) {
            ctx->pc = 0x3E4CE8u;
            goto label_3e4ce8;
        }
    }
    ctx->pc = 0x3E4510u;
label_3e4510:
    // 0x3e4510: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3e4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3e4514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e4514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e4518: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3e4518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x3e451c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3e451cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3e4520: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3e4520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3e4524: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x3e4524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x3e4528: 0x82050058  lb          $a1, 0x58($s0)
    ctx->pc = 0x3e4528u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e452c: 0x28a10005  slti        $at, $a1, 0x5
    ctx->pc = 0x3e452cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e4530: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E4530u;
    {
        const bool branch_taken_0x3e4530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4530u;
        // 0x3e4534: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4530) {
            ctx->pc = 0x3E45B0u;
            goto label_3e45b0;
        }
    }
    ctx->pc = 0x3E4538u;
    // 0x3e4538: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3e4538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3e453c: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x3e453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x3e4540: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x3e4540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x3e4544: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e4548: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3E4548u;
    {
        const bool branch_taken_0x3e4548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4548u;
        // 0x3e454c: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4548) {
            ctx->pc = 0x3E4578u;
            goto label_3e4578;
        }
    }
    ctx->pc = 0x3E4550u;
    // 0x3e4550: 0x3c0480b0  lui         $a0, 0x80B0
    ctx->pc = 0x3e4550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32944 << 16));
    // 0x3e4554: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e4554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e4558: 0x3485b0b0  ori         $a1, $a0, 0xB0B0
    ctx->pc = 0x3e4558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45232);
    // 0x3e455c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3e455cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3e4560: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e4560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e4564: 0x2463ef34  addiu       $v1, $v1, -0x10CC
    ctx->pc = 0x3e4564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962996));
    // 0x3e4568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e4568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e456c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3E456Cu;
    {
        const bool branch_taken_0x3e456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E456Cu;
        // 0x3e4570: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e456c) {
            ctx->pc = 0x3E45B0u;
            goto label_3e45b0;
        }
    }
    ctx->pc = 0x3E4574u;
    // 0x3e4574: 0x0  nop
    ctx->pc = 0x3e4574u;
    // NOP
label_3e4578:
    // 0x3e4578: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x3e4578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x3e457c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x3e457cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x3e4580: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e4584: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E4584u;
    {
        const bool branch_taken_0x3e4584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4584u;
        // 0x3e4588: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4584) {
            ctx->pc = 0x3E45B0u;
            goto label_3e45b0;
        }
    }
    ctx->pc = 0x3E458Cu;
    // 0x3e458c: 0x3c0480b0  lui         $a0, 0x80B0
    ctx->pc = 0x3e458cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32944 << 16));
    // 0x3e4590: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e4590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e4594: 0x3485b0b0  ori         $a1, $a0, 0xB0B0
    ctx->pc = 0x3e4594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45232);
    // 0x3e4598: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x3e4598u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3e459c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e459cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e45a0: 0x2463ef4c  addiu       $v1, $v1, -0x10B4
    ctx->pc = 0x3e45a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963020));
    // 0x3e45a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e45a8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3e45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x3e45ac: 0x0  nop
    ctx->pc = 0x3e45acu;
    // NOP
label_3e45b0:
    // 0x3e45b0: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e45b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e45b4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3e45b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e45b8: 0x10200163  beqz        $at, . + 4 + (0x163 << 2)
    ctx->pc = 0x3E45B8u;
    {
        const bool branch_taken_0x3e45b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E45B8u;
        // 0x3e45bc: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e45b8) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E45C0u;
    // 0x3e45c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e45c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3e45c4: 0x24844970  addiu       $a0, $a0, 0x4970
    ctx->pc = 0x3e45c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18800));
    // 0x3e45c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e45cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e45d0: 0x600008  jr          $v1
    ctx->pc = 0x3E45D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3E45D8u: goto label_3e45d8;
            case 0x3E4638u: goto label_3e4638;
            case 0x3E4698u: goto label_3e4698;
            case 0x3E46F8u: goto label_3e46f8;
            case 0x3E4758u: goto label_3e4758;
            case 0x3E47B8u: goto label_3e47b8;
            case 0x3E48A8u: goto label_3e48a8;
            case 0x3E4A90u: goto label_3e4a90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E45D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3E45D8u;
label_3e45d8:
    // 0x3e45d8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e45d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e45dc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e45e0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e45e4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e45e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e45e8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e45e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e45ec: 0x10600156  beqz        $v1, . + 4 + (0x156 << 2)
    ctx->pc = 0x3E45ECu;
    {
        const bool branch_taken_0x3e45ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e45ec) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E45F4u;
    // 0x3e45f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e45f8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e45fc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e45fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4600: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4604: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e460c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e460cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4610: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4614: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4618: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4618u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e461c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E461Cu;
    SET_GPR_U32(ctx, 31, 0x3E4624u);
    ctx->pc = 0x3E4620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E461Cu;
    // 0x3e4620: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E461Cu, 0x3E4624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4624u;
label_3e4624:
    // 0x3e4624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4628: 0xc0f9e98  jal         func_3E7A60
    ctx->pc = 0x3E4628u;
    SET_GPR_U32(ctx, 31, 0x3E4630u);
    ctx->pc = 0x3E462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4628u;
    // 0x3e462c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A60u, 0x3E4628u, 0x3E4630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4630u;
label_3e4630:
    // 0x3e4630: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x3E4630u;
    {
        const bool branch_taken_0x3e4630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4630) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4638u;
label_3e4638:
    // 0x3e4638: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e463c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e463cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e4640: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e4640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e4644: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e4644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e4648: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e464c: 0x1060013e  beqz        $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x3E464Cu;
    {
        const bool branch_taken_0x3e464c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e464c) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4654u;
    // 0x3e4654: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4658: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e465c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4660: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4664: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4668: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e466c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e466cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4678: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4678u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e467c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E467Cu;
    SET_GPR_U32(ctx, 31, 0x3E4684u);
    ctx->pc = 0x3E4680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E467Cu;
    // 0x3e4680: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E467Cu, 0x3E4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4684u;
label_3e4684:
    // 0x3e4684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4688: 0xc0f9e98  jal         func_3E7A60
    ctx->pc = 0x3E4688u;
    SET_GPR_U32(ctx, 31, 0x3E4690u);
    ctx->pc = 0x3E468Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4688u;
    // 0x3e468c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A60u, 0x3E4688u, 0x3E4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4690u;
label_3e4690:
    // 0x3e4690: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x3E4690u;
    {
        const bool branch_taken_0x3e4690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4690) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4698u;
label_3e4698:
    // 0x3e4698: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e469c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e469cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e46a0: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e46a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e46a4: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e46a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e46a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e46a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e46ac: 0x10600126  beqz        $v1, . + 4 + (0x126 << 2)
    ctx->pc = 0x3E46ACu;
    {
        const bool branch_taken_0x3e46ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46ac) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E46B4u;
    // 0x3e46b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e46b8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e46b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e46bc: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e46bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e46c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e46c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e46c4: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e46c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e46c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e46c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e46ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e46d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e46d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e46d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46dc: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E46DCu;
    SET_GPR_U32(ctx, 31, 0x3E46E4u);
    ctx->pc = 0x3E46E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E46DCu;
    // 0x3e46e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E46DCu, 0x3E46E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46E4u;
label_3e46e4:
    // 0x3e46e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e46e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e46e8: 0xc0f9e98  jal         func_3E7A60
    ctx->pc = 0x3E46E8u;
    SET_GPR_U32(ctx, 31, 0x3E46F0u);
    ctx->pc = 0x3E46ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E46E8u;
    // 0x3e46ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A60u, 0x3E46E8u, 0x3E46F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E46F0u;
label_3e46f0:
    // 0x3e46f0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x3E46F0u;
    {
        const bool branch_taken_0x3e46f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e46f0) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E46F8u;
label_3e46f8:
    // 0x3e46f8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e46fc: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e4700: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e4700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e4704: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e4704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e4708: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e470c: 0x1060010e  beqz        $v1, . + 4 + (0x10E << 2)
    ctx->pc = 0x3E470Cu;
    {
        const bool branch_taken_0x3e470c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e470c) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4714u;
    // 0x3e4714: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4718: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e471c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4720: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4724: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e472c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e472cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4730: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4730u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4734: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4734u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4738: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4738u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e473c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E473Cu;
    SET_GPR_U32(ctx, 31, 0x3E4744u);
    ctx->pc = 0x3E4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E473Cu;
    // 0x3e4740: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E473Cu, 0x3E4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4744u;
label_3e4744:
    // 0x3e4744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4748: 0xc0f9e98  jal         func_3E7A60
    ctx->pc = 0x3E4748u;
    SET_GPR_U32(ctx, 31, 0x3E4750u);
    ctx->pc = 0x3E474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4748u;
    // 0x3e474c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A60u, 0x3E4748u, 0x3E4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4750u;
label_3e4750:
    // 0x3e4750: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x3E4750u;
    {
        const bool branch_taken_0x3e4750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4750) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4758u;
label_3e4758:
    // 0x3e4758: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e475c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e475cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e4760: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x3e4760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x3e4764: 0x346300a0  ori         $v1, $v1, 0xA0
    ctx->pc = 0x3e4764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)160);
    // 0x3e4768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e476c: 0x106000f6  beqz        $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x3E476Cu;
    {
        const bool branch_taken_0x3e476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e476c) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4774u;
    // 0x3e4774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4778: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e477c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e477cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4780: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4784: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4788: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e478c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e478cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4794: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4798: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e479c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E479Cu;
    SET_GPR_U32(ctx, 31, 0x3E47A4u);
    ctx->pc = 0x3E47A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E479Cu;
    // 0x3e47a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E479Cu, 0x3E47A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47A4u;
label_3e47a4:
    // 0x3e47a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e47a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47a8: 0xc0f9e98  jal         func_3E7A60
    ctx->pc = 0x3E47A8u;
    SET_GPR_U32(ctx, 31, 0x3E47B0u);
    ctx->pc = 0x3E47ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E47A8u;
    // 0x3e47ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A60u, 0x3E47A8u, 0x3E47B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E47B0u;
label_3e47b0:
    // 0x3e47b0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x3E47B0u;
    {
        const bool branch_taken_0x3e47b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e47b0) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E47B8u;
label_3e47b8:
    // 0x3e47b8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3e47b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3e47bc: 0x9024fc8c  lbu         $a0, -0x374($at)
    ctx->pc = 0x3e47bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x3e47c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e47c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e47c4: 0x108300e0  beq         $a0, $v1, . + 4 + (0xE0 << 2)
    ctx->pc = 0x3E47C4u;
    {
        const bool branch_taken_0x3e47c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3E47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E47C4u;
        // 0x3e47c8: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e47c4) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E47CCu;
    // 0x3e47cc: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3e47ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961704)));
    // 0x3e47d0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3e47d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3e47d4: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x3E47D4u;
    {
        const bool branch_taken_0x3e47d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e47d4) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E47DCu;
    // 0x3e47dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e47dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e47e0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e47e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e47e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e47e8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e47e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e47ec: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e47ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e47f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e47f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47f4: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e47f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e47f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e47f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e47fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e47fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4800: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4800u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4804: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4804u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4808: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4808u;
    SET_GPR_U32(ctx, 31, 0x3E4810u);
    ctx->pc = 0x3E480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4808u;
    // 0x3e480c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4808u, 0x3E4810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4810u;
label_3e4810:
    // 0x3e4810: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4814: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4818: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e481c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4820: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3e4820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3e4824: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4828: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e4828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e482c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e482cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4834: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4838: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e483c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E483Cu;
    SET_GPR_U32(ctx, 31, 0x3E4844u);
    ctx->pc = 0x3E4840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E483Cu;
    // 0x3e4840: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E483Cu, 0x3E4844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4844u;
label_3e4844:
    // 0x3e4844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4848: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E4848u;
    SET_GPR_U32(ctx, 31, 0x3E4850u);
    ctx->pc = 0x3E484Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4848u;
    // 0x3e484c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E4848u, 0x3E4850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4850u;
label_3e4850:
    // 0x3e4850: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4854: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e4854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e4858: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e4858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e485c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e485cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4864: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4864u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4868: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E4868u;
    SET_GPR_U32(ctx, 31, 0x3E4870u);
    ctx->pc = 0x3E486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4868u;
    // 0x3e486c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E4868u, 0x3E4870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4870u;
label_3e4870:
    // 0x3e4870: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e4870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e4874: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x3e4874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x3e4878: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x3e4878u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e487c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e487cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e4880: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4884: 0xa203005a  sb          $v1, 0x5A($s0)
    ctx->pc = 0x3e4884u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4888: 0xa202005c  sb          $v0, 0x5C($s0)
    ctx->pc = 0x3e4888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e488c: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x3e488cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x3e4890: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x3e4890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3e4894: 0xa202005b  sb          $v0, 0x5B($s0)
    ctx->pc = 0x3e4894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e4898: 0xc0ce5d0  jal         func_339740
    ctx->pc = 0x3E4898u;
    SET_GPR_U32(ctx, 31, 0x3E48A0u);
    ctx->pc = 0x3E489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4898u;
    // 0x3e489c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339740u, 0x3E4898u, 0x3E48A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48A0u;
label_3e48a0:
    // 0x3e48a0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3E48A0u;
    {
        const bool branch_taken_0x3e48a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48a0) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E48A8u;
label_3e48a8:
    // 0x3e48a8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e48a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e48ac: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e48acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e48b0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3e48b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3e48b4: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3E48B4u;
    {
        const bool branch_taken_0x3e48b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48b4) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E48BCu;
    // 0x3e48bc: 0x82030050  lb          $v1, 0x50($s0)
    ctx->pc = 0x3e48bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3e48c0: 0x106000a1  beqz        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3E48C0u;
    {
        const bool branch_taken_0x3e48c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e48c0) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E48C8u;
    // 0x3e48c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e48cc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e48d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e48d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e48d4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e48d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e48d8: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3e48d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3e48dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e48dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48e0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e48e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e48e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e48e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e48e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e48ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e48f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e48f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E48F4u;
    SET_GPR_U32(ctx, 31, 0x3E48FCu);
    ctx->pc = 0x3E48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E48F4u;
    // 0x3e48f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E48F4u, 0x3E48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E48FCu;
label_3e48fc:
    // 0x3e48fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4900: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4904: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4908: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e490c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x3e490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x3e4910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4914: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e4914u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e4918: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e491c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e491cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4928: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4928u;
    SET_GPR_U32(ctx, 31, 0x3E4930u);
    ctx->pc = 0x3E492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4928u;
    // 0x3e492c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4928u, 0x3E4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4930u;
label_3e4930:
    // 0x3e4930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4934: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E4934u;
    SET_GPR_U32(ctx, 31, 0x3E493Cu);
    ctx->pc = 0x3E4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4934u;
    // 0x3e4938: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E4934u, 0x3E493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E493Cu;
label_3e493c:
    // 0x3e493c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e493cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4940: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e4940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e4944: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x3e4944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
    // 0x3e4948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e494c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e494cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4954: 0xc063cd0  jal         func_18F340
    ctx->pc = 0x3E4954u;
    SET_GPR_U32(ctx, 31, 0x3E495Cu);
    ctx->pc = 0x3E4958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4954u;
    // 0x3e4958: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F340u, 0x3E4954u, 0x3E495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E495Cu;
label_3e495c:
    // 0x3e495c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3e4960: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4964: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e4964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3e4968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e496c: 0xa202005a  sb          $v0, 0x5A($s0)
    ctx->pc = 0x3e496cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 2));
    // 0x3e4970: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e4970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3e4974: 0xa204005c  sb          $a0, 0x5C($s0)
    ctx->pc = 0x3e4974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4978: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3e497c: 0xa204005b  sb          $a0, 0x5B($s0)
    ctx->pc = 0x3e497cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 4));
    // 0x3e4980: 0x2463f1a4  addiu       $v1, $v1, -0xE5C
    ctx->pc = 0x3e4980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963620));
    // 0x3e4984: 0xa2000083  sb          $zero, 0x83($s0)
    ctx->pc = 0x3e4984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4988: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e498c: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x3e498cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4990: 0x2442f1a6  addiu       $v0, $v0, -0xE5A
    ctx->pc = 0x3e4990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963622));
    // 0x3e4994: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x3e4994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4998: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3e4998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3e499c: 0xa2000087  sb          $zero, 0x87($s0)
    ctx->pc = 0x3e499cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e49a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e49a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e49a4: 0x82080083  lb          $t0, 0x83($s0)
    ctx->pc = 0x3e49a4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e49a8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3e49a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e49ac: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x3e49acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3e49b0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3e49b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3e49b4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x3e49b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x3e49b8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e49b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e49bc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e49bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e49c0: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x3e49c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x3e49c4: 0xa423f7e4  sh          $v1, -0x81C($at)
    ctx->pc = 0x3e49c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965220), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e49c8: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e49c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e49cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e49ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e49d0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3e49d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e49d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e49d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e49d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e49dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e49e0: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e49e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e49e4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3e49e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3e49e8: 0xa423f7e6  sh          $v1, -0x81A($at)
    ctx->pc = 0x3e49e8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965222), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e49ec: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e49ecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e49f0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e49f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e49f4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3e49f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e49f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e49fc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e49fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e4a00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e4a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e4a04: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e4a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e4a08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4a0c: 0xa423f906  sh          $v1, -0x6FA($at)
    ctx->pc = 0x3e4a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965510), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e4a10: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e4a10u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e4a14: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4a18: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3e4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e4a1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e4a20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e4a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e4a24: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e4a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e4a28: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e4a28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e4a2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4a30: 0xa423f91e  sh          $v1, -0x6E2($at)
    ctx->pc = 0x3e4a30u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965534), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e4a34: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e4a34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e4a38: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4a3c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3e4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e4a40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e4a44: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e4a44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e4a48: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3e4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e4a4c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x3e4a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e4a50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4a54: 0xa423f936  sh          $v1, -0x6CA($at)
    ctx->pc = 0x3e4a54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965558), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e4a58: 0x82070083  lb          $a3, 0x83($s0)
    ctx->pc = 0x3e4a58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 131)));
    // 0x3e4a5c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3e4a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3e4a60: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3e4a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3e4a64: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3e4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3e4a68: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3e4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3e4a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e4a70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x3e4a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e4a74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e4a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e4a78: 0xc049590  jal         func_125640
    ctx->pc = 0x3E4A78u;
    SET_GPR_U32(ctx, 31, 0x3E4A80u);
    ctx->pc = 0x3E4A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4A78u;
    // 0x3e4a7c: 0xa422f94e  sh          $v0, -0x6B2($at) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294965582), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x3E4A78u, 0x3E4A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4A80u;
label_3e4a80:
    // 0x3e4a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e4a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e4a84: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3E4A84u;
    {
        const bool branch_taken_0x3e4a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4A84u;
        // 0x3e4a88: 0xa2030080  sb          $v1, 0x80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4a84) {
            ctx->pc = 0x3E4CE8u;
            goto label_3e4ce8;
        }
    }
    ctx->pc = 0x3E4A8Cu;
    // 0x3e4a8c: 0x0  nop
    ctx->pc = 0x3e4a8cu;
    // NOP
label_3e4a90:
    // 0x3e4a90: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4a94: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x3e4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3e4a98: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x3e4a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x3e4a9c: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3E4A9Cu;
    {
        const bool branch_taken_0x3e4a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4a9c) {
            ctx->pc = 0x3E4B48u;
            goto label_3e4b48;
        }
    }
    ctx->pc = 0x3E4AA4u;
    // 0x3e4aa4: 0xc0fa10c  jal         func_3E8430
    ctx->pc = 0x3E4AA4u;
    SET_GPR_U32(ctx, 31, 0x3E4AACu);
    ctx->pc = 0x3E8430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8430u, 0x3E4AA4u, 0x3E4AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AACu;
label_3e4aac:
    // 0x3e4aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ab0: 0xc0f9e88  jal         func_3E7A20
    ctx->pc = 0x3E4AB0u;
    SET_GPR_U32(ctx, 31, 0x3E4AB8u);
    ctx->pc = 0x3E4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AB0u;
    // 0x3e4ab4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7A20u, 0x3E4AB0u, 0x3E4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AB8u;
label_3e4ab8:
    // 0x3e4ab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4abc: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4ac0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4ac4: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4ac8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3e4ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3e4acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ad0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e4ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e4ad4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4ad4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ad8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4ad8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4adc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ae0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4ae0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ae4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4AE4u;
    SET_GPR_U32(ctx, 31, 0x3E4AECu);
    ctx->pc = 0x3E4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4AE4u;
    // 0x3e4ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4AE4u, 0x3E4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4AECu;
label_3e4aec:
    // 0x3e4aec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4af0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4af4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4af8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4afc: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3e4b00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b04: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3e4b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3e4b08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4b08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4b10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4b14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b18: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4B18u;
    SET_GPR_U32(ctx, 31, 0x3E4B20u);
    ctx->pc = 0x3E4B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B18u;
    // 0x3e4b1c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4B18u, 0x3E4B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B20u;
label_3e4b20:
    // 0x3e4b20: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3e4b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3e4b24: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x3E4B24u;
    SET_GPR_U32(ctx, 31, 0x3E4B2Cu);
    ctx->pc = 0x3E4B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B24u;
    // 0x3e4b28: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x3E4B24u, 0x3E4B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B2Cu;
label_3e4b2c:
    // 0x3e4b2c: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x3e4b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4b30: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x3e4b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4b34: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3e4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3e4b38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e4b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e4b3c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3E4B3Cu;
    {
        const bool branch_taken_0x3e4b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4B3Cu;
        // 0x3e4b40: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4b3c) {
            ctx->pc = 0x3E4CE8u;
            goto label_3e4ce8;
        }
    }
    ctx->pc = 0x3E4B44u;
    // 0x3e4b44: 0x0  nop
    ctx->pc = 0x3e4b44u;
    // NOP
label_3e4b48:
    // 0x3e4b48: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3e4b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3e4b4c: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x3e4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3e4b50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3e4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3e4b54: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x3e4b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x3e4b58: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e4b5c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3E4B5Cu;
    {
        const bool branch_taken_0x3e4b5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4b5c) {
            ctx->pc = 0x3E4C20u;
            goto label_3e4c20;
        }
    }
    ctx->pc = 0x3E4B64u;
    // 0x3e4b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4b68: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4b6c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4b70: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4b74: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4b78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4b84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4b88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4b8c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4B8Cu;
    SET_GPR_U32(ctx, 31, 0x3E4B94u);
    ctx->pc = 0x3E4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4B8Cu;
    // 0x3e4b90: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4B8Cu, 0x3E4B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4B94u;
label_3e4b94:
    // 0x3e4b94: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e4b94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4b98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4b9c: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4ba0: 0x82070058  lb          $a3, 0x58($s0)
    ctx->pc = 0x3e4ba0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4ba4: 0x82060059  lb          $a2, 0x59($s0)
    ctx->pc = 0x3e4ba4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
    // 0x3e4ba8: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x3e4ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3e4bac: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E4BACu;
    {
        const bool branch_taken_0x3e4bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4BACu;
        // 0x3e4bb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4bac) {
            ctx->pc = 0x3E4BF0u;
            goto label_3e4bf0;
        }
    }
    ctx->pc = 0x3E4BB4u;
    // 0x3e4bb4: 0x0  nop
    ctx->pc = 0x3e4bb4u;
    // NOP
label_3e4bb8:
    // 0x3e4bb8: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x3e4bb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4bbc: 0xe41804  sllv        $v1, $a0, $a3
    ctx->pc = 0x3e4bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x3e4bc0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3e4bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3e4bc4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E4BC4u;
    {
        const bool branch_taken_0x3e4bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4bc4) {
            ctx->pc = 0x3E4BF0u;
            goto label_3e4bf0;
        }
    }
    ctx->pc = 0x3E4BCCu;
    // 0x3e4bcc: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e4bccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4bd0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e4bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e4bd4: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4bd8: 0x82070058  lb          $a3, 0x58($s0)
    ctx->pc = 0x3e4bd8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4bdc: 0x82060059  lb          $a2, 0x59($s0)
    ctx->pc = 0x3e4bdcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
    // 0x3e4be0: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x3e4be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3e4be4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3E4BE4u;
    {
        const bool branch_taken_0x3e4be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4be4) {
            ctx->pc = 0x3E4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4bb8;
        }
    }
    ctx->pc = 0x3E4BECu;
    // 0x3e4bec: 0x0  nop
    ctx->pc = 0x3e4becu;
    // NOP
label_3e4bf0:
    // 0x3e4bf0: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x3e4bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3e4bf4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E4BF4u;
    {
        const bool branch_taken_0x3e4bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4BF4u;
        // 0x3e4bf8: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4bf4) {
            ctx->pc = 0x3E4C00u;
            goto label_3e4c00;
        }
    }
    ctx->pc = 0x3E4BFCu;
    // 0x3e4bfc: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
label_3e4c00:
    // 0x3e4c00: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3e4c04: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e4c08: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4c0c: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e4c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e4c10: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e4c14: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e4c18: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3E4C18u;
    {
        const bool branch_taken_0x3e4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C18u;
        // 0x3e4c1c: 0xa2030054  sb          $v1, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4c18) {
            ctx->pc = 0x3E4CE8u;
            goto label_3e4ce8;
        }
    }
    ctx->pc = 0x3E4C20u;
label_3e4c20:
    // 0x3e4c20: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3e4c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3e4c24: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e4c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e4c28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3e4c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3e4c2c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3E4C2Cu;
    {
        const bool branch_taken_0x3e4c2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e4c2c) {
            ctx->pc = 0x3E4CE8u;
            goto label_3e4ce8;
        }
    }
    ctx->pc = 0x3E4C34u;
    // 0x3e4c34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e4c38: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3e4c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3e4c3c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3e4c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3e4c40: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3e4c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3e4c44: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3e4c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3e4c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e4c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e4c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e4c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3e4c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3e4c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4c5c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3E4C5Cu;
    SET_GPR_U32(ctx, 31, 0x3E4C64u);
    ctx->pc = 0x3E4C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4C5Cu;
    // 0x3e4c60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3E4C5Cu, 0x3E4C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4C64u;
label_3e4c64:
    // 0x3e4c64: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e4c64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4c68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e4c6c: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4c70: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e4c70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4c74: 0x28c10007  slti        $at, $a2, 0x7
    ctx->pc = 0x3e4c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3e4c78: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x3E4C78u;
    {
        const bool branch_taken_0x3e4c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4C78u;
        // 0x3e4c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4c78) {
            ctx->pc = 0x3E4CB0u;
            goto label_3e4cb0;
        }
    }
    ctx->pc = 0x3E4C80u;
label_3e4c80:
    // 0x3e4c80: 0x86050008  lh          $a1, 0x8($s0)
    ctx->pc = 0x3e4c80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3e4c84: 0xc41804  sllv        $v1, $a0, $a2
    ctx->pc = 0x3e4c84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x3e4c88: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3e4c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3e4c8c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E4C8Cu;
    {
        const bool branch_taken_0x3e4c8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4c8c) {
            ctx->pc = 0x3E4CB0u;
            goto label_3e4cb0;
        }
    }
    ctx->pc = 0x3E4C94u;
    // 0x3e4c94: 0x82030058  lb          $v1, 0x58($s0)
    ctx->pc = 0x3e4c94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e4c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3e4c9c: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4ca0: 0x82060058  lb          $a2, 0x58($s0)
    ctx->pc = 0x3e4ca0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x3e4ca4: 0x28c30007  slti        $v1, $a2, 0x7
    ctx->pc = 0x3e4ca4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x3e4ca8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E4CA8u;
    {
        const bool branch_taken_0x3e4ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4ca8) {
            ctx->pc = 0x3E4C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4c80;
        }
    }
    ctx->pc = 0x3E4CB0u;
label_3e4cb0:
    // 0x3e4cb0: 0x28c10008  slti        $at, $a2, 0x8
    ctx->pc = 0x3e4cb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3e4cb4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E4CB4u;
    {
        const bool branch_taken_0x3e4cb4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4cb4) {
            ctx->pc = 0x3E4CC8u;
            goto label_3e4cc8;
        }
    }
    ctx->pc = 0x3E4CBCu;
    // 0x3e4cbc: 0x82030059  lb          $v1, 0x59($s0)
    ctx->pc = 0x3e4cbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
    // 0x3e4cc0: 0xa2030058  sb          $v1, 0x58($s0)
    ctx->pc = 0x3e4cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4cc4: 0x0  nop
    ctx->pc = 0x3e4cc4u;
    // NOP
label_3e4cc8:
    // 0x3e4cc8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x3e4cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x3e4ccc: 0x3c038090  lui         $v1, 0x8090
    ctx->pc = 0x3e4cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32912 << 16));
    // 0x3e4cd0: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x3e4cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e4cd4: 0x34649090  ori         $a0, $v1, 0x9090
    ctx->pc = 0x3e4cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37008);
    // 0x3e4cd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3e4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3e4cdc: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3e4cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
    // 0x3e4ce0: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x3e4ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e4ce4: 0x0  nop
    ctx->pc = 0x3e4ce4u;
    // NOP
label_3e4ce8:
    // 0x3e4ce8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e4cec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e4cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e4cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4CF0u;
        // 0x3e4cf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4CF8u;
}
