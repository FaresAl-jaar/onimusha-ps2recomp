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

// Function: sub_00108068
// Address: 0x108068 - 0x1081e0
void sub_00108068_0x108068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108068_0x108068");
#endif

    switch (ctx->pc) {
        case 0x1080a0u: goto label_1080a0;
        case 0x1080a8u: goto label_1080a8;
        case 0x1080c4u: goto label_1080c4;
        case 0x108100u: goto label_108100;
        case 0x108164u: goto label_108164;
        case 0x108188u: goto label_108188;
        case 0x1081a0u: goto label_1081a0;
        default: break;
    }

    ctx->pc = 0x108068u;

    // 0x108068: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x108068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10806c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x108070: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x108070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108074: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x108074u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x108078: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10807c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x10807cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x108080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x108080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x108084: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x108084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x108088: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10808c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10808cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108090: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x108090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x108094: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x108094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10809c: 0x0  nop
    ctx->pc = 0x10809cu;
    // NOP
label_1080a0:
    // 0x1080a0: 0xc0421b6  jal         func_1086D8
    ctx->pc = 0x1080A0u;
    SET_GPR_U32(ctx, 31, 0x1080A8u);
    ctx->pc = 0x1080A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1080A0u;
    // 0x1080a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1086D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1086D8u, 0x1080A0u, 0x1080A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080A8u;
label_1080a8:
    // 0x1080a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1080a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1080ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1080acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080b0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1080b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1080b4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1080b4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20)); // MMIO: 0x10002000
    // 0x1080b8: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x1080b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x1080bc: 0xc0420d2  jal         func_108348
    ctx->pc = 0x1080BCu;
    SET_GPR_U32(ctx, 31, 0x1080C4u);
    ctx->pc = 0x1080C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1080BCu;
    // 0x1080c0: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108348u, 0x1080BCu, 0x1080C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1080C4u;
label_1080c4:
    // 0x1080c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1080c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1080c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1080c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1080cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1080ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1080d0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x1080d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x1080d4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1080d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x1080d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1080d8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x1080dc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x1080dcu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x1080e0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1080e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1080e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1080e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1080e8: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1080E8u;
    {
        const bool branch_taken_0x1080e8 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080E8u;
        // 0x1080ec: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080e8) {
            ctx->pc = 0x108104u;
            goto label_108104;
        }
    }
    ctx->pc = 0x1080F0u;
    // 0x1080f0: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x1080f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1080f4: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1080f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1080f8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1080f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1080fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_108100:
    if (ctx->pc == 0x108100u) {
        ctx->pc = 0x108100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080FCu;
        // 0x108100: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108104u;
        goto label_108104;
    }
    ctx->pc = 0x1080FCu;
    {
        const bool branch_taken_0x1080fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1080FCu;
        // 0x108100: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1080fc) {
            ctx->pc = 0x108108u;
            goto label_108108;
        }
    }
    ctx->pc = 0x108104u;
label_108104:
    // 0x108104: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x108104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_108108:
    // 0x108108: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x108108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x10810c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x10810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x108110: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x108110u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x108114: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x108114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x108118: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x108118u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10811c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x10811cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x108120: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x108120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x108124: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x108124u;
    {
        const bool branch_taken_0x108124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108124u;
        // 0x108128: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108124) {
            ctx->pc = 0x108188u;
            goto label_108188;
        }
    }
    ctx->pc = 0x10812Cu;
    // 0x10812c: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x10812cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x108130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108130u;
    {
        const bool branch_taken_0x108130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108130u;
        // 0x108134: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108130) {
            ctx->pc = 0x108148u;
            goto label_108148;
        }
    }
    ctx->pc = 0x108138u;
    // 0x108138: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108138u;
    {
        const bool branch_taken_0x108138 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108138) {
            ctx->pc = 0x10815Cu;
            goto label_10815c;
        }
    }
    ctx->pc = 0x108140u;
    // 0x108140: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x108140u;
    {
        const bool branch_taken_0x108140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108140u;
        // 0x108144: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108140) {
            ctx->pc = 0x1081B0u;
            goto label_1081b0;
        }
    }
    ctx->pc = 0x108148u;
label_108148:
    // 0x108148: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x108148u;
    {
        const bool branch_taken_0x108148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x108148) {
            ctx->pc = 0x10814Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108148u;
            // 0x10814c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1081B0u;
            goto label_1081b0;
        }
    }
    ctx->pc = 0x108150u;
    // 0x108150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108154: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x108154u;
    {
        const bool branch_taken_0x108154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108154u;
        // 0x108158: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108154) {
            ctx->pc = 0x1081B4u;
            goto label_1081b4;
        }
    }
    ctx->pc = 0x10815Cu;
label_10815c:
    // 0x10815c: 0xc04216c  jal         func_1085B0
    ctx->pc = 0x10815Cu;
    SET_GPR_U32(ctx, 31, 0x108164u);
    ctx->pc = 0x108160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10815Cu;
    // 0x108160: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085B0u, 0x10815Cu, 0x108164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108164u;
label_108164:
    // 0x108164: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x108164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108168: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x108168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10816c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10816Cu;
    {
        const bool branch_taken_0x10816c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10816Cu;
        // 0x108170: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10816c) {
            ctx->pc = 0x108190u;
            goto label_108190;
        }
    }
    ctx->pc = 0x108174u;
    // 0x108174: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x108174u;
    {
        const bool branch_taken_0x108174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x108178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108174u;
        // 0x108178: 0x26a51f48  addiu       $a1, $s5, 0x1F48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108174) {
            ctx->pc = 0x108194u;
            goto label_108194;
        }
    }
    ctx->pc = 0x10817Cu;
    // 0x10817c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108180: 0xc0421c4  jal         func_108710
    ctx->pc = 0x108180u;
    SET_GPR_U32(ctx, 31, 0x108188u);
    ctx->pc = 0x108184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108180u;
    // 0x108184: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108710u, 0x108180u, 0x108188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108188u;
label_108188:
    // 0x108188: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x108188u;
    {
        const bool branch_taken_0x108188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108188u;
        // 0x10818c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108188) {
            ctx->pc = 0x1081B4u;
            goto label_1081b4;
        }
    }
    ctx->pc = 0x108190u;
label_108190:
    // 0x108190: 0x26a51f48  addiu       $a1, $s5, 0x1F48
    ctx->pc = 0x108190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 8008));
label_108194:
    // 0x108194: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x108194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108198: 0xc04354c  jal         func_10D530
    ctx->pc = 0x108198u;
    SET_GPR_U32(ctx, 31, 0x1081A0u);
    ctx->pc = 0x10819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108198u;
    // 0x10819c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D530u, 0x108198u, 0x1081A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081A0u;
label_1081a0:
    // 0x1081a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1081a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1081a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1081a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1081A8u;
    {
        const bool branch_taken_0x1081a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1081ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081A8u;
        // 0x1081ac: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081a8) {
            ctx->pc = 0x1081BCu;
            goto label_1081bc;
        }
    }
    ctx->pc = 0x1081B0u;
label_1081b0:
    // 0x1081b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1081b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1081b4:
    // 0x1081b4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1081B4u;
    {
        const bool branch_taken_0x1081b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1081B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081B4u;
        // 0x1081b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081b4) {
            ctx->pc = 0x1080A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1080a0;
        }
    }
    ctx->pc = 0x1081BCu;
label_1081bc:
    // 0x1081bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1081bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1081c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1081c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1081c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1081c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1081c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1081c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1081cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1081ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1081d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1081d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1081d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1081d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1081d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1081D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081D8u;
        // 0x1081dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081E0u;
}
