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

// Function: sub_002626F0
// Address: 0x2626f0 - 0x262a28
void sub_002626F0_0x2626f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002626F0_0x2626f0");
#endif

    switch (ctx->pc) {
        case 0x262770u: goto label_262770;
        case 0x2627e0u: goto label_2627e0;
        case 0x262850u: goto label_262850;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628e8u: goto label_2628e8;
        case 0x262908u: goto label_262908;
        case 0x262918u: goto label_262918;
        case 0x262930u: goto label_262930;
        case 0x262950u: goto label_262950;
        case 0x262960u: goto label_262960;
        case 0x262978u: goto label_262978;
        case 0x262998u: goto label_262998;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629d4u: goto label_2629d4;
        case 0x2629fcu: goto label_2629fc;
        case 0x262a08u: goto label_262a08;
        default: break;
    }

    ctx->pc = 0x2626f0u;

    // 0x2626f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2626f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2626f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2626f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2626f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2626f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2626fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2626fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x262700: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x262700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x262704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x262708: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x262708u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26270c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x262710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x262710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262714: 0x8c8329c0  lw          $v1, 0x29C0($a0)
    ctx->pc = 0x262714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10688)));
    // 0x262718: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x262718u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26271c: 0x106000ba  beqz        $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x26271Cu;
    {
        const bool branch_taken_0x26271c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26271Cu;
        // 0x262720: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26271c) {
            ctx->pc = 0x262A08u;
            goto label_262a08;
        }
    }
    ctx->pc = 0x262724u;
    // 0x262724: 0x2e61000c  sltiu       $at, $s3, 0xC
    ctx->pc = 0x262724u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x262728: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x262728u;
    {
        const bool branch_taken_0x262728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262728u;
        // 0x26272c: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262728) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262730u;
    // 0x262730: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x262730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x262734: 0x2463f320  addiu       $v1, $v1, -0xCE0
    ctx->pc = 0x262734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964000));
    // 0x262738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26273c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262740: 0x400008  jr          $v0
    ctx->pc = 0x262740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262748u: goto label_262748;
            case 0x262758u: goto label_262758;
            case 0x262768u: goto label_262768;
            case 0x2627A8u: goto label_2627a8;
            case 0x2627B8u: goto label_2627b8;
            case 0x2627C8u: goto label_2627c8;
            case 0x2627D8u: goto label_2627d8;
            case 0x262818u: goto label_262818;
            case 0x262828u: goto label_262828;
            case 0x262838u: goto label_262838;
            case 0x262848u: goto label_262848;
            case 0x262888u: goto label_262888;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262740u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x262748u;
label_262748:
    // 0x262748: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x262748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26274c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x26274Cu;
    {
        const bool branch_taken_0x26274c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26274Cu;
        // 0x262750: 0x64120003  daddiu      $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26274c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262754u;
    // 0x262754: 0x0  nop
    ctx->pc = 0x262754u;
    // NOP
label_262758:
    // 0x262758: 0x2411008c  addiu       $s1, $zero, 0x8C
    ctx->pc = 0x262758u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x26275c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x26275Cu;
    {
        const bool branch_taken_0x26275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26275Cu;
        // 0x262760: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26275c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262764u;
    // 0x262764: 0x0  nop
    ctx->pc = 0x262764u;
    // NOP
label_262768:
    // 0x262768: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262768u;
    SET_GPR_U32(ctx, 31, 0x262770u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262768u, 0x262770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262770u;
label_262770:
    // 0x262770: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x262770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262774: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x262774u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x262778: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x262778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x26277c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x26277cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x262780: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x262780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x262784: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x262784u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x262788: 0x0  nop
    ctx->pc = 0x262788u;
    // NOP
    // 0x26278c: 0x0  nop
    ctx->pc = 0x26278cu;
    // NOP
    // 0x262790: 0x1010  mfhi        $v0
    ctx->pc = 0x262790u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x262794: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x262794u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x262798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26279c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x26279Cu;
    {
        const bool branch_taken_0x26279c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26279Cu;
        // 0x2627a0: 0x24510064  addiu       $s1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26279c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x2627A4u;
    // 0x2627a4: 0x0  nop
    ctx->pc = 0x2627a4u;
    // NOP
label_2627a8:
    // 0x2627a8: 0x24110050  addiu       $s1, $zero, 0x50
    ctx->pc = 0x2627a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2627ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2627ACu;
    {
        const bool branch_taken_0x2627ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627ACu;
        // 0x2627b0: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627ac) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x2627B4u;
    // 0x2627b4: 0x0  nop
    ctx->pc = 0x2627b4u;
    // NOP
label_2627b8:
    // 0x2627b8: 0x24110032  addiu       $s1, $zero, 0x32
    ctx->pc = 0x2627b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2627bc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2627BCu;
    {
        const bool branch_taken_0x2627bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627BCu;
        // 0x2627c0: 0x64120003  daddiu      $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627bc) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x2627C4u;
    // 0x2627c4: 0x0  nop
    ctx->pc = 0x2627c4u;
    // NOP
label_2627c8:
    // 0x2627c8: 0x24110118  addiu       $s1, $zero, 0x118
    ctx->pc = 0x2627c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2627cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2627CCu;
    {
        const bool branch_taken_0x2627cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627CCu;
        // 0x2627d0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627cc) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x2627D4u;
    // 0x2627d4: 0x0  nop
    ctx->pc = 0x2627d4u;
    // NOP
label_2627d8:
    // 0x2627d8: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x2627D8u;
    SET_GPR_U32(ctx, 31, 0x2627E0u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x2627D8u, 0x2627E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627E0u;
label_2627e0:
    // 0x2627e0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2627e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2627e4: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x2627e4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2627e8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2627e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x2627ec: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x2627ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2627f0: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x2627f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x2627f4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x2627f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2627f8: 0x0  nop
    ctx->pc = 0x2627f8u;
    // NOP
    // 0x2627fc: 0x0  nop
    ctx->pc = 0x2627fcu;
    // NOP
    // 0x262800: 0x1010  mfhi        $v0
    ctx->pc = 0x262800u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x262804: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x262804u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x262808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26280c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26280Cu;
    {
        const bool branch_taken_0x26280c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26280Cu;
        // 0x262810: 0x245100c8  addiu       $s1, $v0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26280c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262814u;
    // 0x262814: 0x0  nop
    ctx->pc = 0x262814u;
    // NOP
label_262818:
    // 0x262818: 0x241100a0  addiu       $s1, $zero, 0xA0
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x26281c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26281Cu;
    {
        const bool branch_taken_0x26281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26281Cu;
        // 0x262820: 0x64120002  daddiu      $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26281c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262824u;
    // 0x262824: 0x0  nop
    ctx->pc = 0x262824u;
    // NOP
label_262828:
    // 0x262828: 0x241101f4  addiu       $s1, $zero, 0x1F4
    ctx->pc = 0x262828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
    // 0x26282c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26282Cu;
    {
        const bool branch_taken_0x26282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26282Cu;
        // 0x262830: 0x64120003  daddiu      $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26282c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262834u;
    // 0x262834: 0x0  nop
    ctx->pc = 0x262834u;
    // NOP
label_262838:
    // 0x262838: 0x24110230  addiu       $s1, $zero, 0x230
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x26283c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26283Cu;
    {
        const bool branch_taken_0x26283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26283Cu;
        // 0x262840: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26283c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262844u;
    // 0x262844: 0x0  nop
    ctx->pc = 0x262844u;
    // NOP
label_262848:
    // 0x262848: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262848u;
    SET_GPR_U32(ctx, 31, 0x262850u);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262848u, 0x262850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262850u;
label_262850:
    // 0x262850: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x262850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262854: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x262854u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x262858: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x262858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x26285c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x26285cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x262860: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x262860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x262864: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x262864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x262868: 0x0  nop
    ctx->pc = 0x262868u;
    // NOP
    // 0x26286c: 0x0  nop
    ctx->pc = 0x26286cu;
    // NOP
    // 0x262870: 0x1010  mfhi        $v0
    ctx->pc = 0x262870u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x262874: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x262874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x262878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x262878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26287c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26287Cu;
    {
        const bool branch_taken_0x26287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26287Cu;
        // 0x262880: 0x24510190  addiu       $s1, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26287c) {
            ctx->pc = 0x262890u;
            goto label_262890;
        }
    }
    ctx->pc = 0x262884u;
    // 0x262884: 0x0  nop
    ctx->pc = 0x262884u;
    // NOP
label_262888:
    // 0x262888: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x262888u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x26288c: 0x64120002  daddiu      $s2, $zero, 0x2
    ctx->pc = 0x26288cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_262890:
    // 0x262890: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x262890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x262894: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262898: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x262898u;
    {
        const bool branch_taken_0x262898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262898u;
        // 0x26289c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262898) {
            ctx->pc = 0x2629A0u;
            goto label_2629a0;
        }
    }
    ctx->pc = 0x2628A0u;
    // 0x2628a0: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2628A0u;
    {
        const bool branch_taken_0x2628a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2628a0) {
            ctx->pc = 0x262958u;
            goto label_262958;
        }
    }
    ctx->pc = 0x2628A8u;
    // 0x2628a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2628a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2628ac: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2628ACu;
    {
        const bool branch_taken_0x2628ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2628ac) {
            ctx->pc = 0x262910u;
            goto label_262910;
        }
    }
    ctx->pc = 0x2628B4u;
    // 0x2628b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2628B4u;
    {
        const bool branch_taken_0x2628b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628b4) {
            ctx->pc = 0x2628C8u;
            goto label_2628c8;
        }
    }
    ctx->pc = 0x2628BCu;
    // 0x2628bc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2628BCu;
    {
        const bool branch_taken_0x2628bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2628bc) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x2628C4u;
    // 0x2628c4: 0x0  nop
    ctx->pc = 0x2628c4u;
    // NOP
label_2628c8:
    // 0x2628c8: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x2628C8u;
    SET_GPR_U32(ctx, 31, 0x2628D0u);
    ctx->pc = 0x2628CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628C8u;
    // 0x2628cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x2628C8u, 0x2628D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628D0u;
label_2628d0:
    // 0x2628d0: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2628d4: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2628d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2628d8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x2628d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x2628dc: 0x94630006  lhu         $v1, 0x6($v1)
    ctx->pc = 0x2628dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2628e0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2628E0u;
    SET_GPR_U32(ctx, 31, 0x2628E8u);
    ctx->pc = 0x2628E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628E0u;
    // 0x2628e4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2628E0u, 0x2628E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628E8u;
label_2628e8:
    // 0x2628e8: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x2628e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x2628ec: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2628ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2628f0: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2628f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2628f8: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2628f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2628fc: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x2628fcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x262900: 0xc0ce188  jal         func_338620
    ctx->pc = 0x262900u;
    SET_GPR_U32(ctx, 31, 0x262908u);
    ctx->pc = 0x262904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262900u;
    // 0x262904: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x262900u, 0x262908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262908u;
label_262908:
    // 0x262908: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x262908u;
    {
        const bool branch_taken_0x262908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262908) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x262910u;
label_262910:
    // 0x262910: 0xc0a6998  jal         func_29A660
    ctx->pc = 0x262910u;
    SET_GPR_U32(ctx, 31, 0x262918u);
    ctx->pc = 0x262914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262910u;
    // 0x262914: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x262910u, 0x262918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262918u;
label_262918:
    // 0x262918: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x262918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x26291c: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x26291cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262920: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x262920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x262924: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x262924u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262928: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x262928u;
    SET_GPR_U32(ctx, 31, 0x262930u);
    ctx->pc = 0x26292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262928u;
    // 0x26292c: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x262928u, 0x262930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262930u;
label_262930:
    // 0x262930: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x262930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x262934: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x262934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x262938: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x262938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x26293c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26293cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262940: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x262940u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x262944: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x262944u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x262948: 0xc0ce188  jal         func_338620
    ctx->pc = 0x262948u;
    SET_GPR_U32(ctx, 31, 0x262950u);
    ctx->pc = 0x26294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262948u;
    // 0x26294c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x262948u, 0x262950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262950u;
label_262950:
    // 0x262950: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x262950u;
    {
        const bool branch_taken_0x262950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262950) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x262958u;
label_262958:
    // 0x262958: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x262958u;
    SET_GPR_U32(ctx, 31, 0x262960u);
    ctx->pc = 0x26295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262958u;
    // 0x26295c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x262958u, 0x262960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262960u;
label_262960:
    // 0x262960: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x262964: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x262964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262968: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x262968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x26296c: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x26296cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x262970: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x262970u;
    SET_GPR_U32(ctx, 31, 0x262978u);
    ctx->pc = 0x262974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262970u;
    // 0x262974: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x262970u, 0x262978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262978u;
label_262978:
    // 0x262978: 0x8e8329c0  lw          $v1, 0x29C0($s4)
    ctx->pc = 0x262978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10688)));
    // 0x26297c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x26297cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x262980: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x262980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x262984: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x262984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x262988: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x262988u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x26298c: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x26298cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x262990: 0xc0ce188  jal         func_338620
    ctx->pc = 0x262990u;
    SET_GPR_U32(ctx, 31, 0x262998u);
    ctx->pc = 0x262994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262990u;
    // 0x262994: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x262990u, 0x262998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262998u;
label_262998:
    // 0x262998: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x262998u;
    {
        const bool branch_taken_0x262998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262998) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x2629A0u;
label_2629a0:
    // 0x2629a0: 0x8f908ba8  lw          $s0, -0x7458($gp)
    ctx->pc = 0x2629a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x2629a4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2629a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2629a8: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2629a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2629ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2629acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2629b0: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x2629B0u;
    SET_GPR_U32(ctx, 31, 0x2629B8u);
    ctx->pc = 0x2629B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629B0u;
    // 0x2629b4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x2629B0u, 0x2629B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629B8u;
label_2629b8:
    // 0x2629b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2629b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2629bc: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x2629bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x2629c0: 0x928708e8  lbu         $a3, 0x8E8($s4)
    ctx->pc = 0x2629c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2280)));
    // 0x2629c4: 0x24843050  addiu       $a0, $a0, 0x3050
    ctx->pc = 0x2629c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12368));
    // 0x2629c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2629cc: 0xc0ce188  jal         func_338620
    ctx->pc = 0x2629CCu;
    SET_GPR_U32(ctx, 31, 0x2629D4u);
    ctx->pc = 0x2629D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629CCu;
    // 0x2629d0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338620u, 0x2629CCu, 0x2629D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D4u;
label_2629d4:
    // 0x2629d4: 0x93828950  lbu         $v0, -0x76B0($gp)
    ctx->pc = 0x2629d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936912)));
    // 0x2629d8: 0x2c410026  sltiu       $at, $v0, 0x26
    ctx->pc = 0x2629d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x2629dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2629DCu;
    {
        const bool branch_taken_0x2629dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629dc) {
            ctx->pc = 0x2629F0u;
            goto label_2629f0;
        }
    }
    ctx->pc = 0x2629E4u;
    // 0x2629e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2629e8: 0xa3828950  sb          $v0, -0x76B0($gp)
    ctx->pc = 0x2629e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936912), (uint8_t)GPR_U32(ctx, 2));
    // 0x2629ec: 0x0  nop
    ctx->pc = 0x2629ecu;
    // NOP
label_2629f0:
    // 0x2629f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2629f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f4: 0xc0a5fcc  jal         func_297F30
    ctx->pc = 0x2629F4u;
    SET_GPR_U32(ctx, 31, 0x2629FCu);
    ctx->pc = 0x2629F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629F4u;
    // 0x2629f8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F30u, 0x2629F4u, 0x2629FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629FCu;
label_2629fc:
    // 0x2629fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2629fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a00: 0xc09d028  jal         func_2740A0
    ctx->pc = 0x262A00u;
    SET_GPR_U32(ctx, 31, 0x262A08u);
    ctx->pc = 0x262A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262A00u;
    // 0x262a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740A0u, 0x262A00u, 0x262A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262A08u;
label_262a08:
    // 0x262a08: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x262a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262a0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x262a0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262a10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x262a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262a14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x262a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262a20: 0x3e00008  jr          $ra
    ctx->pc = 0x262A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A20u;
        // 0x262a24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262A28u;
}
