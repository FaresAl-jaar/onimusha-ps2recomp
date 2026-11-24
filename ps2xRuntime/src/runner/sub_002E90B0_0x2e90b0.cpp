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

// Function: sub_002E90B0
// Address: 0x2e90b0 - 0x2e97ec
void sub_002E90B0_0x2e90b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E90B0_0x2e90b0");
#endif

    switch (ctx->pc) {
        case 0x2e90f8u: goto label_2e90f8;
        case 0x2e91e0u: goto label_2e91e0;
        case 0x2e9348u: goto label_2e9348;
        case 0x2e9378u: goto label_2e9378;
        case 0x2e9388u: goto label_2e9388;
        case 0x2e9428u: goto label_2e9428;
        case 0x2e957cu: goto label_2e957c;
        case 0x2e97c0u: goto label_2e97c0;
        case 0x2e97d0u: goto label_2e97d0;
        case 0x2e97d8u: goto label_2e97d8;
        default: break;
    }

    ctx->pc = 0x2e90b0u;

    // 0x2e90b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e90b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e90b4: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2e90b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2e90b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e90b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e90bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2e90bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2e90c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e90c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e90c4: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x2e90c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2e90c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e90c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e90cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e90ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e90d0: 0xa4850236  sh          $a1, 0x236($a0)
    ctx->pc = 0x2e90d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 566), (uint16_t)GPR_U32(ctx, 5));
    // 0x2e90d4: 0x102001c0  beqz        $at, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x2E90D4u;
    {
        const bool branch_taken_0x2e90d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E90D4u;
        // 0x2e90d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90d4) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E90DCu;
    // 0x2e90dc: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2e90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2e90e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e90e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e90e4: 0x24847b90  addiu       $a0, $a0, 0x7B90
    ctx->pc = 0x2e90e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31632));
    // 0x2e90e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e90ec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e90ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e90f0: 0x600008  jr          $v1
    ctx->pc = 0x2E90F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E90F8u: goto label_2e90f8;
            case 0x2E91E0u: goto label_2e91e0;
            case 0x2E9388u: goto label_2e9388;
            case 0x2E9428u: goto label_2e9428;
            case 0x2E97C0u: goto label_2e97c0;
            case 0x2E97D8u: goto label_2e97d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E90F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E90F8u;
label_2e90f8:
    // 0x2e90f8: 0x2e020035  sltiu       $v0, $s0, 0x35
    ctx->pc = 0x2e90f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x2e90fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90FCu;
    {
        const bool branch_taken_0x2e90fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e90fc) {
            ctx->pc = 0x2E9108u;
            goto label_2e9108;
        }
    }
    ctx->pc = 0x2E9104u;
    // 0x2e9104: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e9104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9108:
    // 0x2e9108: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e910c: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e910cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9110: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9110u;
    {
        const bool branch_taken_0x2e9110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9110u;
        // 0x2e9114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9110) {
            ctx->pc = 0x2E9128u;
            goto label_2e9128;
        }
    }
    ctx->pc = 0x2E9118u;
    // 0x2e9118: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e911c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e911cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e9120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9124: 0x8c4206e4  lw          $v0, 0x6E4($v0)
    ctx->pc = 0x2e9124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1764)));
label_2e9128:
    // 0x2e9128: 0xae220240  sw          $v0, 0x240($s1)
    ctx->pc = 0x2e9128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
    // 0x2e912c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e912cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9130: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e9130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9134: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9134u;
    {
        const bool branch_taken_0x2e9134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9134) {
            ctx->pc = 0x2E9150u;
            goto label_2e9150;
        }
    }
    ctx->pc = 0x2E913Cu;
    // 0x2e913c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9140: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e9144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9148u;
    {
        const bool branch_taken_0x2e9148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9148u;
        // 0x2e914c: 0x8c4206e8  lw          $v0, 0x6E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9148) {
            ctx->pc = 0x2E9154u;
            goto label_2e9154;
        }
    }
    ctx->pc = 0x2E9150u;
label_2e9150:
    // 0x2e9150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9154:
    // 0x2e9154: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x2e9154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    // 0x2e9158: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e915c: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e915cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9160: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9160u;
    {
        const bool branch_taken_0x2e9160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9160) {
            ctx->pc = 0x2E917Cu;
            goto label_2e917c;
        }
    }
    ctx->pc = 0x2E9168u;
    // 0x2e9168: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e916c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e916cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e9170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9174u;
    {
        const bool branch_taken_0x2e9174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9174u;
        // 0x2e9178: 0x8c4206ec  lw          $v0, 0x6EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9174) {
            ctx->pc = 0x2E9180u;
            goto label_2e9180;
        }
    }
    ctx->pc = 0x2E917Cu;
label_2e917c:
    // 0x2e917c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e917cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9180:
    // 0x2e9180: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2e9180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x2e9184: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9188: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e9188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e918c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E918Cu;
    {
        const bool branch_taken_0x2e918c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e918c) {
            ctx->pc = 0x2E91A8u;
            goto label_2e91a8;
        }
    }
    ctx->pc = 0x2E9194u;
    // 0x2e9194: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9198: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e919c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e919cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e91a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91A0u;
    {
        const bool branch_taken_0x2e91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91A0u;
        // 0x2e91a4: 0x8c4206f0  lw          $v0, 0x6F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91a0) {
            ctx->pc = 0x2E91ACu;
            goto label_2e91ac;
        }
    }
    ctx->pc = 0x2E91A8u;
label_2e91a8:
    // 0x2e91a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e91a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e91ac:
    // 0x2e91ac: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x2e91acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x2e91b0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e91b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e91b4: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e91b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e91b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E91B8u;
    {
        const bool branch_taken_0x2e91b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e91b8) {
            ctx->pc = 0x2E91D4u;
            goto label_2e91d4;
        }
    }
    ctx->pc = 0x2E91C0u;
    // 0x2e91c0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e91c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e91c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e91c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e91c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e91cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91CCu;
    {
        const bool branch_taken_0x2e91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91CCu;
        // 0x2e91d0: 0x8c4206f4  lw          $v0, 0x6F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91cc) {
            ctx->pc = 0x2E91D8u;
            goto label_2e91d8;
        }
    }
    ctx->pc = 0x2E91D4u;
label_2e91d4:
    // 0x2e91d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e91d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e91d8:
    // 0x2e91d8: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x2e91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
    // 0x2e91dc: 0x0  nop
    ctx->pc = 0x2e91dcu;
    // NOP
label_2e91e0:
    // 0x2e91e0: 0x2e020035  sltiu       $v0, $s0, 0x35
    ctx->pc = 0x2e91e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x2e91e4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E91E4u;
    {
        const bool branch_taken_0x2e91e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e91e4) {
            ctx->pc = 0x2E91F0u;
            goto label_2e91f0;
        }
    }
    ctx->pc = 0x2E91ECu;
    // 0x2e91ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e91ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e91f0:
    // 0x2e91f0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e91f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e91f4: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e91f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E91F8u;
    {
        const bool branch_taken_0x2e91f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E91FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E91F8u;
        // 0x2e91fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e91f8) {
            ctx->pc = 0x2E9210u;
            goto label_2e9210;
        }
    }
    ctx->pc = 0x2E9200u;
    // 0x2e9200: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9204: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e9208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e920c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2e920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2e9210:
    // 0x2e9210: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x2e9210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x2e9214: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9218: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e9218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e921c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E921Cu;
    {
        const bool branch_taken_0x2e921c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E921Cu;
        // 0x2e9220: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e921c) {
            ctx->pc = 0x2E9234u;
            goto label_2e9234;
        }
    }
    ctx->pc = 0x2E9224u;
    // 0x2e9224: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9228: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e922c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9230: 0x8c4406e8  lw          $a0, 0x6E8($v0)
    ctx->pc = 0x2e9230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1768)));
label_2e9234:
    // 0x2e9234: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9234u;
    {
        const bool branch_taken_0x2e9234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9234u;
        // 0x2e9238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9234) {
            ctx->pc = 0x2E924Cu;
            goto label_2e924c;
        }
    }
    ctx->pc = 0x2E923Cu;
    // 0x2e923c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e923cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9240: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e9244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9248: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2e9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2e924c:
    // 0x2e924c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9250: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9254: 0xae220244  sw          $v0, 0x244($s1)
    ctx->pc = 0x2e9254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
    // 0x2e9258: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e9258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e925c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E925Cu;
    {
        const bool branch_taken_0x2e925c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e925c) {
            ctx->pc = 0x2E9278u;
            goto label_2e9278;
        }
    }
    ctx->pc = 0x2E9264u;
    // 0x2e9264: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9268: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e926c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9270: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9270u;
    {
        const bool branch_taken_0x2e9270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9270u;
        // 0x2e9274: 0x8c4406ec  lw          $a0, 0x6EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9270) {
            ctx->pc = 0x2E927Cu;
            goto label_2e927c;
        }
    }
    ctx->pc = 0x2E9278u;
label_2e9278:
    // 0x2e9278: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e927c:
    // 0x2e927c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E927Cu;
    {
        const bool branch_taken_0x2e927c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E927Cu;
        // 0x2e9280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e927c) {
            ctx->pc = 0x2E9294u;
            goto label_2e9294;
        }
    }
    ctx->pc = 0x2E9284u;
    // 0x2e9284: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9288: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e928c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9290: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x2e9290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_2e9294:
    // 0x2e9294: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e9294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9298: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e929c: 0xae22024c  sw          $v0, 0x24C($s1)
    ctx->pc = 0x2e929cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
    // 0x2e92a0: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e92a4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E92A4u;
    {
        const bool branch_taken_0x2e92a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92a4) {
            ctx->pc = 0x2E92C0u;
            goto label_2e92c0;
        }
    }
    ctx->pc = 0x2E92ACu;
    // 0x2e92ac: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e92acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e92b0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e92b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e92b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E92B8u;
    {
        const bool branch_taken_0x2e92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92B8u;
        // 0x2e92bc: 0x8c4406f0  lw          $a0, 0x6F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92b8) {
            ctx->pc = 0x2E92C4u;
            goto label_2e92c4;
        }
    }
    ctx->pc = 0x2E92C0u;
label_2e92c0:
    // 0x2e92c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e92c4:
    // 0x2e92c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E92C4u;
    {
        const bool branch_taken_0x2e92c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E92C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E92C4u;
        // 0x2e92c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e92c4) {
            ctx->pc = 0x2E92DCu;
            goto label_2e92dc;
        }
    }
    ctx->pc = 0x2E92CCu;
    // 0x2e92cc: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e92ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e92d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e92d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e92d8: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x2e92d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2e92dc:
    // 0x2e92dc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e92e0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e92e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e92e4: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2e92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2e92e8: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e92ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E92ECu;
    {
        const bool branch_taken_0x2e92ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e92ec) {
            ctx->pc = 0x2E9308u;
            goto label_2e9308;
        }
    }
    ctx->pc = 0x2E92F4u;
    // 0x2e92f4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e92f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e92f8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e92fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e92fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9300: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9300u;
    {
        const bool branch_taken_0x2e9300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9300u;
        // 0x2e9304: 0x8c4406f4  lw          $a0, 0x6F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9300) {
            ctx->pc = 0x2E930Cu;
            goto label_2e930c;
        }
    }
    ctx->pc = 0x2E9308u;
label_2e9308:
    // 0x2e9308: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e9308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e930c:
    // 0x2e930c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E930Cu;
    {
        const bool branch_taken_0x2e930c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E930Cu;
        // 0x2e9310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e930c) {
            ctx->pc = 0x2E9324u;
            goto label_2e9324;
        }
    }
    ctx->pc = 0x2E9314u;
    // 0x2e9314: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2e9314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2e9318: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e9318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2e931c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9320: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2e9320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2e9324:
    // 0x2e9324: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e9324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e9328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e9328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e932c: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x2e932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
    // 0x2e9330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e9330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9334: 0x96230274  lhu         $v1, 0x274($s1)
    ctx->pc = 0x2e9334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x2e9338: 0x978288b4  lhu         $v0, -0x774C($gp)
    ctx->pc = 0x2e9338u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x2e933c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2e933cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9340: 0xc0baff0  jal         func_2EBFC0
    ctx->pc = 0x2E9340u;
    SET_GPR_U32(ctx, 31, 0x2E9348u);
    ctx->pc = 0x2E9344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9340u;
    // 0x2e9344: 0xae220238  sw          $v0, 0x238($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBFC0u, 0x2E9340u, 0x2E9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9348u;
label_2e9348:
    // 0x2e9348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e934c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2e934cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2e9350: 0xae22026c  sw          $v0, 0x26C($s1)
    ctx->pc = 0x2e9350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 2));
    // 0x2e9354: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2e9354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2e9358: 0x3c020091  lui         $v0, 0x91
    ctx->pc = 0x2e9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)145 << 16));
    // 0x2e935c: 0x24423e5e  addiu       $v0, $v0, 0x3E5E
    ctx->pc = 0x2e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15966));
    // 0x2e9360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9364: 0x8e23026c  lw          $v1, 0x26C($s1)
    ctx->pc = 0x2e9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x2e9368: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2e9368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e936c: 0x96250236  lhu         $a1, 0x236($s1)
    ctx->pc = 0x2e936cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 566)));
    // 0x2e9370: 0xc0ce208  jal         func_338820
    ctx->pc = 0x2E9370u;
    SET_GPR_U32(ctx, 31, 0x2E9378u);
    ctx->pc = 0x2E9374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9370u;
    // 0x2e9374: 0x24843050  addiu       $a0, $a0, 0x3050 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x2E9370u, 0x2E9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9378u;
label_2e9378:
    // 0x2e9378: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2e9378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e937c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x2E937Cu;
    {
        const bool branch_taken_0x2e937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E937Cu;
        // 0x2e9380: 0xae23026c  sw          $v1, 0x26C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e937c) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E9384u;
    // 0x2e9384: 0x0  nop
    ctx->pc = 0x2e9384u;
    // NOP
label_2e9388:
    // 0x2e9388: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e938c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e938cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9390: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9390u;
    {
        const bool branch_taken_0x2e9390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9390) {
            ctx->pc = 0x2E93A0u;
            goto label_2e93a0;
        }
    }
    ctx->pc = 0x2E9398u;
    // 0x2e9398: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9398u;
    {
        const bool branch_taken_0x2e9398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9398u;
        // 0x2e939c: 0x8c420da4  lw          $v0, 0xDA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9398) {
            ctx->pc = 0x2E93A4u;
            goto label_2e93a4;
        }
    }
    ctx->pc = 0x2E93A0u;
label_2e93a0:
    // 0x2e93a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e93a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e93a4:
    // 0x2e93a4: 0xae220240  sw          $v0, 0x240($s1)
    ctx->pc = 0x2e93a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 2));
    // 0x2e93a8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e93a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e93ac: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e93acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e93b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E93B0u;
    {
        const bool branch_taken_0x2e93b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93b0) {
            ctx->pc = 0x2E93C0u;
            goto label_2e93c0;
        }
    }
    ctx->pc = 0x2E93B8u;
    // 0x2e93b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E93B8u;
    {
        const bool branch_taken_0x2e93b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93B8u;
        // 0x2e93bc: 0x8c420da8  lw          $v0, 0xDA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93b8) {
            ctx->pc = 0x2E93C4u;
            goto label_2e93c4;
        }
    }
    ctx->pc = 0x2E93C0u;
label_2e93c0:
    // 0x2e93c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e93c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e93c4:
    // 0x2e93c4: 0xae220248  sw          $v0, 0x248($s1)
    ctx->pc = 0x2e93c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
    // 0x2e93c8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e93c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e93cc: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e93d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E93D0u;
    {
        const bool branch_taken_0x2e93d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93d0) {
            ctx->pc = 0x2E93E0u;
            goto label_2e93e0;
        }
    }
    ctx->pc = 0x2E93D8u;
    // 0x2e93d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E93D8u;
    {
        const bool branch_taken_0x2e93d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93D8u;
        // 0x2e93dc: 0x8c420dac  lw          $v0, 0xDAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93d8) {
            ctx->pc = 0x2E93E4u;
            goto label_2e93e4;
        }
    }
    ctx->pc = 0x2E93E0u;
label_2e93e0:
    // 0x2e93e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e93e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e93e4:
    // 0x2e93e4: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2e93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x2e93e8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e93e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e93ec: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e93f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E93F0u;
    {
        const bool branch_taken_0x2e93f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e93f0) {
            ctx->pc = 0x2E9400u;
            goto label_2e9400;
        }
    }
    ctx->pc = 0x2E93F8u;
    // 0x2e93f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E93F8u;
    {
        const bool branch_taken_0x2e93f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E93F8u;
        // 0x2e93fc: 0x8c420db0  lw          $v0, 0xDB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e93f8) {
            ctx->pc = 0x2E9404u;
            goto label_2e9404;
        }
    }
    ctx->pc = 0x2E9400u;
label_2e9400:
    // 0x2e9400: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9404:
    // 0x2e9404: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x2e9404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
    // 0x2e9408: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e940c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e940cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9410: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9410u;
    {
        const bool branch_taken_0x2e9410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9410) {
            ctx->pc = 0x2E9420u;
            goto label_2e9420;
        }
    }
    ctx->pc = 0x2E9418u;
    // 0x2e9418: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9418u;
    {
        const bool branch_taken_0x2e9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9418u;
        // 0x2e941c: 0x8c420db4  lw          $v0, 0xDB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9418) {
            ctx->pc = 0x2E9424u;
            goto label_2e9424;
        }
    }
    ctx->pc = 0x2E9420u;
label_2e9420:
    // 0x2e9420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9424:
    // 0x2e9424: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x2e9424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_2e9428:
    // 0x2e9428: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e942c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9430u;
    {
        const bool branch_taken_0x2e9430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9430) {
            ctx->pc = 0x2E9440u;
            goto label_2e9440;
        }
    }
    ctx->pc = 0x2E9438u;
    // 0x2e9438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9438u;
    {
        const bool branch_taken_0x2e9438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9438u;
        // 0x2e943c: 0x8c420d80  lw          $v0, 0xD80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9438) {
            ctx->pc = 0x2E9444u;
            goto label_2e9444;
        }
    }
    ctx->pc = 0x2E9440u;
label_2e9440:
    // 0x2e9440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9444:
    // 0x2e9444: 0xae220238  sw          $v0, 0x238($s1)
    ctx->pc = 0x2e9444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 2));
    // 0x2e9448: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e944c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e944cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9450u;
    {
        const bool branch_taken_0x2e9450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9450) {
            ctx->pc = 0x2E9460u;
            goto label_2e9460;
        }
    }
    ctx->pc = 0x2E9458u;
    // 0x2e9458: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9458u;
    {
        const bool branch_taken_0x2e9458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9458u;
        // 0x2e945c: 0x8c420d84  lw          $v0, 0xD84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9458) {
            ctx->pc = 0x2E9464u;
            goto label_2e9464;
        }
    }
    ctx->pc = 0x2E9460u;
label_2e9460:
    // 0x2e9460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9464:
    // 0x2e9464: 0xae22023c  sw          $v0, 0x23C($s1)
    ctx->pc = 0x2e9464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    // 0x2e9468: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e946c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e946cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9470: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9470u;
    {
        const bool branch_taken_0x2e9470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9470u;
        // 0x2e9474: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9470) {
            ctx->pc = 0x2E947Cu;
            goto label_2e947c;
        }
    }
    ctx->pc = 0x2E9478u;
    // 0x2e9478: 0x8c430da8  lw          $v1, 0xDA8($v0)
    ctx->pc = 0x2e9478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3496)));
label_2e947c:
    // 0x2e947c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E947Cu;
    {
        const bool branch_taken_0x2e947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e947c) {
            ctx->pc = 0x2E948Cu;
            goto label_2e948c;
        }
    }
    ctx->pc = 0x2E9484u;
    // 0x2e9484: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9484u;
    {
        const bool branch_taken_0x2e9484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9484u;
        // 0x2e9488: 0x8c420d88  lw          $v0, 0xD88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9484) {
            ctx->pc = 0x2E9490u;
            goto label_2e9490;
        }
    }
    ctx->pc = 0x2E948Cu;
label_2e948c:
    // 0x2e948c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e948cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9490:
    // 0x2e9490: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9494: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9498: 0xae220244  sw          $v0, 0x244($s1)
    ctx->pc = 0x2e9498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 2));
    // 0x2e949c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e949cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e94a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E94A0u;
    {
        const bool branch_taken_0x2e94a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94a0) {
            ctx->pc = 0x2E94B0u;
            goto label_2e94b0;
        }
    }
    ctx->pc = 0x2E94A8u;
    // 0x2e94a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E94A8u;
    {
        const bool branch_taken_0x2e94a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94A8u;
        // 0x2e94ac: 0x8c430dac  lw          $v1, 0xDAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94a8) {
            ctx->pc = 0x2E94B4u;
            goto label_2e94b4;
        }
    }
    ctx->pc = 0x2E94B0u;
label_2e94b0:
    // 0x2e94b0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e94b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e94b4:
    // 0x2e94b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E94B4u;
    {
        const bool branch_taken_0x2e94b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94b4) {
            ctx->pc = 0x2E94C4u;
            goto label_2e94c4;
        }
    }
    ctx->pc = 0x2E94BCu;
    // 0x2e94bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E94BCu;
    {
        const bool branch_taken_0x2e94bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94BCu;
        // 0x2e94c0: 0x8c420d8c  lw          $v0, 0xD8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94bc) {
            ctx->pc = 0x2E94C8u;
            goto label_2e94c8;
        }
    }
    ctx->pc = 0x2E94C4u;
label_2e94c4:
    // 0x2e94c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e94c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e94c8:
    // 0x2e94c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e94cc: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e94ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e94d0: 0xae22024c  sw          $v0, 0x24C($s1)
    ctx->pc = 0x2e94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 2));
    // 0x2e94d4: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e94d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e94d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E94D8u;
    {
        const bool branch_taken_0x2e94d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94d8) {
            ctx->pc = 0x2E94E8u;
            goto label_2e94e8;
        }
    }
    ctx->pc = 0x2E94E0u;
    // 0x2e94e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E94E0u;
    {
        const bool branch_taken_0x2e94e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94E0u;
        // 0x2e94e4: 0x8c430db0  lw          $v1, 0xDB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94e0) {
            ctx->pc = 0x2E94ECu;
            goto label_2e94ec;
        }
    }
    ctx->pc = 0x2E94E8u;
label_2e94e8:
    // 0x2e94e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e94e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e94ec:
    // 0x2e94ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E94ECu;
    {
        const bool branch_taken_0x2e94ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e94ec) {
            ctx->pc = 0x2E94FCu;
            goto label_2e94fc;
        }
    }
    ctx->pc = 0x2E94F4u;
    // 0x2e94f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E94F4u;
    {
        const bool branch_taken_0x2e94f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E94F4u;
        // 0x2e94f8: 0x8c420d90  lw          $v0, 0xD90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e94f4) {
            ctx->pc = 0x2E9500u;
            goto label_2e9500;
        }
    }
    ctx->pc = 0x2E94FCu;
label_2e94fc:
    // 0x2e94fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e94fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9500:
    // 0x2e9500: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9504: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9508: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x2e9508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x2e950c: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e950cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9510u;
    {
        const bool branch_taken_0x2e9510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9510) {
            ctx->pc = 0x2E9520u;
            goto label_2e9520;
        }
    }
    ctx->pc = 0x2E9518u;
    // 0x2e9518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9518u;
    {
        const bool branch_taken_0x2e9518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9518u;
        // 0x2e951c: 0x8c430db4  lw          $v1, 0xDB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9518) {
            ctx->pc = 0x2E9524u;
            goto label_2e9524;
        }
    }
    ctx->pc = 0x2E9520u;
label_2e9520:
    // 0x2e9520: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9524:
    // 0x2e9524: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9524u;
    {
        const bool branch_taken_0x2e9524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9524) {
            ctx->pc = 0x2E9534u;
            goto label_2e9534;
        }
    }
    ctx->pc = 0x2E952Cu;
    // 0x2e952c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E952Cu;
    {
        const bool branch_taken_0x2e952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E952Cu;
        // 0x2e9530: 0x8c420d94  lw          $v0, 0xD94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e952c) {
            ctx->pc = 0x2E9538u;
            goto label_2e9538;
        }
    }
    ctx->pc = 0x2E9534u;
label_2e9534:
    // 0x2e9534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9538:
    // 0x2e9538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e953c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e953cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9540: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x2e9540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
    // 0x2e9544: 0x8c223054  lw          $v0, 0x3054($at)
    ctx->pc = 0x2e9544u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9548: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9548u;
    {
        const bool branch_taken_0x2e9548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9548) {
            ctx->pc = 0x2E9558u;
            goto label_2e9558;
        }
    }
    ctx->pc = 0x2E9550u;
    // 0x2e9550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9550u;
    {
        const bool branch_taken_0x2e9550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9550u;
        // 0x2e9554: 0x8c430db8  lw          $v1, 0xDB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9550) {
            ctx->pc = 0x2E955Cu;
            goto label_2e955c;
        }
    }
    ctx->pc = 0x2E9558u;
label_2e9558:
    // 0x2e9558: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9558u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e955c:
    // 0x2e955c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E955Cu;
    {
        const bool branch_taken_0x2e955c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e955c) {
            ctx->pc = 0x2E956Cu;
            goto label_2e956c;
        }
    }
    ctx->pc = 0x2E9564u;
    // 0x2e9564: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9564u;
    {
        const bool branch_taken_0x2e9564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9564u;
        // 0x2e9568: 0x8c420d98  lw          $v0, 0xD98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9564) {
            ctx->pc = 0x2E9570u;
            goto label_2e9570;
        }
    }
    ctx->pc = 0x2E956Cu;
label_2e956c:
    // 0x2e956c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e956cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9570:
    // 0x2e9570: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e9570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e9574: 0xc0d9044  jal         func_364110
    ctx->pc = 0x2E9574u;
    SET_GPR_U32(ctx, 31, 0x2E957Cu);
    ctx->pc = 0x2E9578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9574u;
    // 0x2e9578: 0xae220264  sw          $v0, 0x264($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364110u, 0x2E9574u, 0x2E957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E957Cu;
label_2e957c:
    // 0x2e957c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2e957cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9584: 0x14830094  bne         $a0, $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x2E9584u;
    {
        const bool branch_taken_0x2e9584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9584u;
        // 0x2e9588: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9584) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E958Cu;
    // 0x2e958c: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12372)));
    // 0x2e9590: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9590u;
    {
        const bool branch_taken_0x2e9590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9590u;
        // 0x2e9594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9590) {
            ctx->pc = 0x2E959Cu;
            goto label_2e959c;
        }
    }
    ctx->pc = 0x2E9598u;
    // 0x2e9598: 0x8c6506c0  lw          $a1, 0x6C0($v1)
    ctx->pc = 0x2e9598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1728)));
label_2e959c:
    // 0x2e959c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E959Cu;
    {
        const bool branch_taken_0x2e959c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E959Cu;
        // 0x2e95a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e959c) {
            ctx->pc = 0x2E95A8u;
            goto label_2e95a8;
        }
    }
    ctx->pc = 0x2E95A4u;
    // 0x2e95a4: 0x8c6406a0  lw          $a0, 0x6A0($v1)
    ctx->pc = 0x2e95a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1696)));
label_2e95a8:
    // 0x2e95a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E95A8u;
    {
        const bool branch_taken_0x2e95a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e95a8) {
            ctx->pc = 0x2E95B8u;
            goto label_2e95b8;
        }
    }
    ctx->pc = 0x2E95B0u;
    // 0x2e95b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E95B0u;
    {
        const bool branch_taken_0x2e95b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95B0u;
        // 0x2e95b4: 0x8c630680  lw          $v1, 0x680($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95b0) {
            ctx->pc = 0x2E95BCu;
            goto label_2e95bc;
        }
    }
    ctx->pc = 0x2E95B8u;
label_2e95b8:
    // 0x2e95b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e95b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e95bc:
    // 0x2e95bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e95c0: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e95c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e95c4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e95c8: 0xae230238  sw          $v1, 0x238($s1)
    ctx->pc = 0x2e95c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 3));
    // 0x2e95cc: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e95ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e95d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E95D0u;
    {
        const bool branch_taken_0x2e95d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e95d0) {
            ctx->pc = 0x2E95E0u;
            goto label_2e95e0;
        }
    }
    ctx->pc = 0x2E95D8u;
    // 0x2e95d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E95D8u;
    {
        const bool branch_taken_0x2e95d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95D8u;
        // 0x2e95dc: 0x8c630684  lw          $v1, 0x684($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95d8) {
            ctx->pc = 0x2E95E4u;
            goto label_2e95e4;
        }
    }
    ctx->pc = 0x2E95E0u;
label_2e95e0:
    // 0x2e95e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e95e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e95e4:
    // 0x2e95e4: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x2e95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x2e95e8: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e95e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e95ec: 0x8c253054  lw          $a1, 0x3054($at)
    ctx->pc = 0x2e95ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x913054u));
    // 0x2e95f0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E95F0u;
    {
        const bool branch_taken_0x2e95f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E95F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E95F0u;
        // 0x2e95f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e95f0) {
            ctx->pc = 0x2E95FCu;
            goto label_2e95fc;
        }
    }
    ctx->pc = 0x2E95F8u;
    // 0x2e95f8: 0x8ca406a4  lw          $a0, 0x6A4($a1)
    ctx->pc = 0x2e95f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1700)));
label_2e95fc:
    // 0x2e95fc: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x2e95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e9600: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2e9600u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e9604: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9604u;
    {
        const bool branch_taken_0x2e9604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9604) {
            ctx->pc = 0x2E9620u;
            goto label_2e9620;
        }
    }
    ctx->pc = 0x2E960Cu;
    // 0x2e960c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E960Cu;
    {
        const bool branch_taken_0x2e960c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E960Cu;
        // 0x2e9610: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e960c) {
            ctx->pc = 0x2E9618u;
            goto label_2e9618;
        }
    }
    ctx->pc = 0x2E9614u;
    // 0x2e9614: 0x8ca306a4  lw          $v1, 0x6A4($a1)
    ctx->pc = 0x2e9614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1700)));
label_2e9618:
    // 0x2e9618: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x2e9618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x2e961c: 0x0  nop
    ctx->pc = 0x2e961cu;
    // NOP
label_2e9620:
    // 0x2e9620: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9624: 0x8c253054  lw          $a1, 0x3054($at)
    ctx->pc = 0x2e9624u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9628: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9628u;
    {
        const bool branch_taken_0x2e9628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9628u;
        // 0x2e962c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9628) {
            ctx->pc = 0x2E9634u;
            goto label_2e9634;
        }
    }
    ctx->pc = 0x2E9630u;
    // 0x2e9630: 0x8ca406c4  lw          $a0, 0x6C4($a1)
    ctx->pc = 0x2e9630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1732)));
label_2e9634:
    // 0x2e9634: 0x8e23023c  lw          $v1, 0x23C($s1)
    ctx->pc = 0x2e9634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2e9638: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x2e9638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e963c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E963Cu;
    {
        const bool branch_taken_0x2e963c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e963c) {
            ctx->pc = 0x2E9658u;
            goto label_2e9658;
        }
    }
    ctx->pc = 0x2E9644u;
    // 0x2e9644: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9644u;
    {
        const bool branch_taken_0x2e9644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9644u;
        // 0x2e9648: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9644) {
            ctx->pc = 0x2E9650u;
            goto label_2e9650;
        }
    }
    ctx->pc = 0x2E964Cu;
    // 0x2e964c: 0x8ca306c4  lw          $v1, 0x6C4($a1)
    ctx->pc = 0x2e964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1732)));
label_2e9650:
    // 0x2e9650: 0xae23023c  sw          $v1, 0x23C($s1)
    ctx->pc = 0x2e9650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 3));
    // 0x2e9654: 0x0  nop
    ctx->pc = 0x2e9654u;
    // NOP
label_2e9658:
    // 0x2e9658: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e9658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e965c: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e965cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9660: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9660u;
    {
        const bool branch_taken_0x2e9660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9660u;
        // 0x2e9664: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9660) {
            ctx->pc = 0x2E966Cu;
            goto label_2e966c;
        }
    }
    ctx->pc = 0x2E9668u;
    // 0x2e9668: 0x8c680d68  lw          $t0, 0xD68($v1)
    ctx->pc = 0x2e9668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3432)));
label_2e966c:
    // 0x2e966c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E966Cu;
    {
        const bool branch_taken_0x2e966c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E966Cu;
        // 0x2e9670: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e966c) {
            ctx->pc = 0x2E9678u;
            goto label_2e9678;
        }
    }
    ctx->pc = 0x2E9674u;
    // 0x2e9674: 0x8c670d48  lw          $a3, 0xD48($v1)
    ctx->pc = 0x2e9674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3400)));
label_2e9678:
    // 0x2e9678: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9678u;
    {
        const bool branch_taken_0x2e9678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9678u;
        // 0x2e967c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9678) {
            ctx->pc = 0x2E9684u;
            goto label_2e9684;
        }
    }
    ctx->pc = 0x2E9680u;
    // 0x2e9680: 0x8c660d28  lw          $a2, 0xD28($v1)
    ctx->pc = 0x2e9680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3368)));
label_2e9684:
    // 0x2e9684: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9684u;
    {
        const bool branch_taken_0x2e9684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9684u;
        // 0x2e9688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9684) {
            ctx->pc = 0x2E9690u;
            goto label_2e9690;
        }
    }
    ctx->pc = 0x2E968Cu;
    // 0x2e968c: 0x8c6506c8  lw          $a1, 0x6C8($v1)
    ctx->pc = 0x2e968cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1736)));
label_2e9690:
    // 0x2e9690: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9690u;
    {
        const bool branch_taken_0x2e9690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9690u;
        // 0x2e9694: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9690) {
            ctx->pc = 0x2E969Cu;
            goto label_2e969c;
        }
    }
    ctx->pc = 0x2E9698u;
    // 0x2e9698: 0x8c6406a8  lw          $a0, 0x6A8($v1)
    ctx->pc = 0x2e9698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1704)));
label_2e969c:
    // 0x2e969c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E969Cu;
    {
        const bool branch_taken_0x2e969c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e969c) {
            ctx->pc = 0x2E96ACu;
            goto label_2e96ac;
        }
    }
    ctx->pc = 0x2E96A4u;
    // 0x2e96a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96A4u;
    {
        const bool branch_taken_0x2e96a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96A4u;
        // 0x2e96a8: 0x8c630688  lw          $v1, 0x688($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96a4) {
            ctx->pc = 0x2E96B0u;
            goto label_2e96b0;
        }
    }
    ctx->pc = 0x2E96ACu;
label_2e96ac:
    // 0x2e96ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e96acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e96b0:
    // 0x2e96b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e96b4: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e96b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e96b8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e96b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e96bc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e96c0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2e96c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e96c4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e96c8: 0xae230244  sw          $v1, 0x244($s1)
    ctx->pc = 0x2e96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 3));
    // 0x2e96cc: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e96d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E96D0u;
    {
        const bool branch_taken_0x2e96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e96d0) {
            ctx->pc = 0x2E96E0u;
            goto label_2e96e0;
        }
    }
    ctx->pc = 0x2E96D8u;
    // 0x2e96d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96D8u;
    {
        const bool branch_taken_0x2e96d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96D8u;
        // 0x2e96dc: 0x8c680d6c  lw          $t0, 0xD6C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96d8) {
            ctx->pc = 0x2E96E4u;
            goto label_2e96e4;
        }
    }
    ctx->pc = 0x2E96E0u;
label_2e96e0:
    // 0x2e96e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e96e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e96e4:
    // 0x2e96e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96E4u;
    {
        const bool branch_taken_0x2e96e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96E4u;
        // 0x2e96e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96e4) {
            ctx->pc = 0x2E96F0u;
            goto label_2e96f0;
        }
    }
    ctx->pc = 0x2E96ECu;
    // 0x2e96ec: 0x8c670d4c  lw          $a3, 0xD4C($v1)
    ctx->pc = 0x2e96ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3404)));
label_2e96f0:
    // 0x2e96f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96F0u;
    {
        const bool branch_taken_0x2e96f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96F0u;
        // 0x2e96f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96f0) {
            ctx->pc = 0x2E96FCu;
            goto label_2e96fc;
        }
    }
    ctx->pc = 0x2E96F8u;
    // 0x2e96f8: 0x8c660d2c  lw          $a2, 0xD2C($v1)
    ctx->pc = 0x2e96f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3372)));
label_2e96fc:
    // 0x2e96fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E96FCu;
    {
        const bool branch_taken_0x2e96fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E96FCu;
        // 0x2e9700: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e96fc) {
            ctx->pc = 0x2E9708u;
            goto label_2e9708;
        }
    }
    ctx->pc = 0x2E9704u;
    // 0x2e9704: 0x8c6506cc  lw          $a1, 0x6CC($v1)
    ctx->pc = 0x2e9704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1740)));
label_2e9708:
    // 0x2e9708: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9708u;
    {
        const bool branch_taken_0x2e9708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9708u;
        // 0x2e970c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9708) {
            ctx->pc = 0x2E9714u;
            goto label_2e9714;
        }
    }
    ctx->pc = 0x2E9710u;
    // 0x2e9710: 0x8c6406ac  lw          $a0, 0x6AC($v1)
    ctx->pc = 0x2e9710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
label_2e9714:
    // 0x2e9714: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9714u;
    {
        const bool branch_taken_0x2e9714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9714) {
            ctx->pc = 0x2E9724u;
            goto label_2e9724;
        }
    }
    ctx->pc = 0x2E971Cu;
    // 0x2e971c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E971Cu;
    {
        const bool branch_taken_0x2e971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E971Cu;
        // 0x2e9720: 0x8c63068c  lw          $v1, 0x68C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e971c) {
            ctx->pc = 0x2E9728u;
            goto label_2e9728;
        }
    }
    ctx->pc = 0x2E9724u;
label_2e9724:
    // 0x2e9724: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9724u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9728:
    // 0x2e9728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e972c: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x2e972cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x2e9730: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e9730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9734: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e9734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e9738: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2e9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e973c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e9740: 0xae23024c  sw          $v1, 0x24C($s1)
    ctx->pc = 0x2e9740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 3));
    // 0x2e9744: 0x8c233054  lw          $v1, 0x3054($at)
    ctx->pc = 0x2e9744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x913054u));
    // 0x2e9748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9748u;
    {
        const bool branch_taken_0x2e9748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9748) {
            ctx->pc = 0x2E9758u;
            goto label_2e9758;
        }
    }
    ctx->pc = 0x2E9750u;
    // 0x2e9750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9750u;
    {
        const bool branch_taken_0x2e9750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9750u;
        // 0x2e9754: 0x8c680d70  lw          $t0, 0xD70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9750) {
            ctx->pc = 0x2E975Cu;
            goto label_2e975c;
        }
    }
    ctx->pc = 0x2E9758u;
label_2e9758:
    // 0x2e9758: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e975c:
    // 0x2e975c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E975Cu;
    {
        const bool branch_taken_0x2e975c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E975Cu;
        // 0x2e9760: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e975c) {
            ctx->pc = 0x2E9768u;
            goto label_2e9768;
        }
    }
    ctx->pc = 0x2E9764u;
    // 0x2e9764: 0x8c670d50  lw          $a3, 0xD50($v1)
    ctx->pc = 0x2e9764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3408)));
label_2e9768:
    // 0x2e9768: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9768u;
    {
        const bool branch_taken_0x2e9768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9768u;
        // 0x2e976c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9768) {
            ctx->pc = 0x2E9774u;
            goto label_2e9774;
        }
    }
    ctx->pc = 0x2E9770u;
    // 0x2e9770: 0x8c660d30  lw          $a2, 0xD30($v1)
    ctx->pc = 0x2e9770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3376)));
label_2e9774:
    // 0x2e9774: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9774u;
    {
        const bool branch_taken_0x2e9774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9774u;
        // 0x2e9778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9774) {
            ctx->pc = 0x2E9780u;
            goto label_2e9780;
        }
    }
    ctx->pc = 0x2E977Cu;
    // 0x2e977c: 0x8c6506d0  lw          $a1, 0x6D0($v1)
    ctx->pc = 0x2e977cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1744)));
label_2e9780:
    // 0x2e9780: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9780u;
    {
        const bool branch_taken_0x2e9780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9780u;
        // 0x2e9784: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9780) {
            ctx->pc = 0x2E978Cu;
            goto label_2e978c;
        }
    }
    ctx->pc = 0x2E9788u;
    // 0x2e9788: 0x8c6406b0  lw          $a0, 0x6B0($v1)
    ctx->pc = 0x2e9788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_2e978c:
    // 0x2e978c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E978Cu;
    {
        const bool branch_taken_0x2e978c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e978c) {
            ctx->pc = 0x2E979Cu;
            goto label_2e979c;
        }
    }
    ctx->pc = 0x2E9794u;
    // 0x2e9794: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9794u;
    {
        const bool branch_taken_0x2e9794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9794u;
        // 0x2e9798: 0x8c630690  lw          $v1, 0x690($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9794) {
            ctx->pc = 0x2E97A0u;
            goto label_2e97a0;
        }
    }
    ctx->pc = 0x2E979Cu;
label_2e979c:
    // 0x2e979c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e979cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e97a0:
    // 0x2e97a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e97a4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2e97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e97a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e97a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e97ac: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2e97acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2e97b0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x2e97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2e97b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2E97B4u;
    {
        const bool branch_taken_0x2e97b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E97B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97B4u;
        // 0x2e97b8: 0xae230254  sw          $v1, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e97b4) {
            ctx->pc = 0x2E97D8u;
            goto label_2e97d8;
        }
    }
    ctx->pc = 0x2E97BCu;
    // 0x2e97bc: 0x0  nop
    ctx->pc = 0x2e97bcu;
    // NOP
label_2e97c0:
    // 0x2e97c0: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2e97c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2e97c4: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x2e97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x2e97c8: 0xc0ce978  jal         func_33A5E0
    ctx->pc = 0x2E97C8u;
    SET_GPR_U32(ctx, 31, 0x2E97D0u);
    ctx->pc = 0x2E97CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E97C8u;
    // 0x2e97cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5E0u, 0x2E97C8u, 0x2E97D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E97D0u;
label_2e97d0:
    // 0x2e97d0: 0x978388b4  lhu         $v1, -0x774C($gp)
    ctx->pc = 0x2e97d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936756)));
    // 0x2e97d4: 0xa6230274  sh          $v1, 0x274($s1)
    ctx->pc = 0x2e97d4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 628), (uint16_t)GPR_U32(ctx, 3));
label_2e97d8:
    // 0x2e97d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e97d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e97dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e97dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e97e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e97e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e97e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E97E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E97E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E97E4u;
        // 0x2e97e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E97E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E97ECu;
}
