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

// Function: sub_0036F0F0
// Address: 0x36f0f0 - 0x36f434
void sub_0036F0F0_0x36f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F0F0_0x36f0f0");
#endif

    switch (ctx->pc) {
        case 0x36f10cu: goto label_36f10c;
        case 0x36f168u: goto label_36f168;
        case 0x36f198u: goto label_36f198;
        case 0x36f200u: goto label_36f200;
        case 0x36f210u: goto label_36f210;
        case 0x36f26cu: goto label_36f26c;
        case 0x36f274u: goto label_36f274;
        case 0x36f2b4u: goto label_36f2b4;
        case 0x36f2bcu: goto label_36f2bc;
        case 0x36f2fcu: goto label_36f2fc;
        case 0x36f304u: goto label_36f304;
        case 0x36f344u: goto label_36f344;
        case 0x36f34cu: goto label_36f34c;
        case 0x36f38cu: goto label_36f38c;
        case 0x36f3ccu: goto label_36f3cc;
        case 0x36f3d4u: goto label_36f3d4;
        case 0x36f414u: goto label_36f414;
        case 0x36f41cu: goto label_36f41c;
        default: break;
    }

    ctx->pc = 0x36f0f0u;

    // 0x36f0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36f0f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36f0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f0f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x36f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36f0fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36f0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36f100: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36f100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x36f104: 0xc0dbbe8  jal         func_36EFA0
    ctx->pc = 0x36F104u;
    SET_GPR_U32(ctx, 31, 0x36F10Cu);
    ctx->pc = 0x36F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F104u;
    // 0x36f108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EFA0u, 0x36F104u, 0x36F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F10Cu;
label_36f10c:
    // 0x36f10c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36f10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36f110: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x36f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x36f114: 0x8c24ea28  lw          $a0, -0x15D8($at)
    ctx->pc = 0x36f114u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x36f118: 0x34420050  ori         $v0, $v0, 0x50
    ctx->pc = 0x36f118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)80);
    // 0x36f11c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x36f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x36f120: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x36F120u;
    {
        const bool branch_taken_0x36f120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F120u;
        // 0x36f124: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f120) {
            ctx->pc = 0x36F198u;
            goto label_36f198;
        }
    }
    ctx->pc = 0x36F128u;
    // 0x36f128: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36f128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36f12c: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x36f12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x36f130: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x36f130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x36f134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f138: 0x8203032f  lb          $v1, 0x32F($s0)
    ctx->pc = 0x36f138u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 815)));
    // 0x36f13c: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x36f13cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x36f140: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x36f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36f144: 0x26040028  addiu       $a0, $s0, 0x28
    ctx->pc = 0x36f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x36f148: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x36f148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x36f14c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x36f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x36f150: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x36f150u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x36f154: 0x0  nop
    ctx->pc = 0x36f154u;
    // NOP
    // 0x36f158: 0x0  nop
    ctx->pc = 0x36f158u;
    // NOP
    // 0x36f15c: 0x1010  mfhi        $v0
    ctx->pc = 0x36f15cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36f160: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x36F160u;
    SET_GPR_U32(ctx, 31, 0x36F168u);
    ctx->pc = 0x36F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F160u;
    // 0x36f164: 0xa202032f  sb          $v0, 0x32F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 815), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x36F160u, 0x36F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F168u;
label_36f168:
    // 0x36f168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f16c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f170: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f174: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f178: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x36f178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x36f17c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f180: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f180u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f184: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f184u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f188: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f188u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f18c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f18cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f190: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F190u;
    SET_GPR_U32(ctx, 31, 0x36F198u);
    ctx->pc = 0x36F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F190u;
    // 0x36f194: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F190u, 0x36F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F198u;
label_36f198:
    // 0x36f198: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x36f198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x36f19c: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x36f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x36f1a0: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x36f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x36f1a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F1A4u;
    {
        const bool branch_taken_0x36f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1A4u;
        // 0x36f1a8: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f1a4) {
            ctx->pc = 0x36F1B8u;
            goto label_36f1b8;
        }
    }
    ctx->pc = 0x36F1ACu;
    // 0x36f1ac: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x36F1ACu;
    {
        const bool branch_taken_0x36f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f1ac) {
            ctx->pc = 0x36F208u;
            goto label_36f208;
        }
    }
    ctx->pc = 0x36F1B4u;
    // 0x36f1b4: 0x0  nop
    ctx->pc = 0x36f1b4u;
    // NOP
label_36f1b8:
    // 0x36f1b8: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x36f1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x36f1bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36F1BCu;
    {
        const bool branch_taken_0x36f1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f1bc) {
            ctx->pc = 0x36F1E0u;
            goto label_36f1e0;
        }
    }
    ctx->pc = 0x36F1C4u;
    // 0x36f1c4: 0x8203032f  lb          $v1, 0x32F($s0)
    ctx->pc = 0x36f1c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 815)));
    // 0x36f1c8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36f1cc: 0x2442ab70  addiu       $v0, $v0, -0x5490
    ctx->pc = 0x36f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945648));
    // 0x36f1d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36f1d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f1d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36F1D8u;
    {
        const bool branch_taken_0x36f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F1D8u;
        // 0x36f1dc: 0x94510000  lhu         $s1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f1d8) {
            ctx->pc = 0x36F208u;
            goto label_36f208;
        }
    }
    ctx->pc = 0x36F1E0u;
label_36f1e0:
    // 0x36f1e0: 0x8203032f  lb          $v1, 0x32F($s0)
    ctx->pc = 0x36f1e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 815)));
    // 0x36f1e4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x36f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x36f1e8: 0x2442ab74  addiu       $v0, $v0, -0x548C
    ctx->pc = 0x36f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945652));
    // 0x36f1ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x36f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36f1f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f1f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f1f8: 0xc0dc804  jal         func_372010
    ctx->pc = 0x36F1F8u;
    SET_GPR_U32(ctx, 31, 0x36F200u);
    ctx->pc = 0x36F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F1F8u;
    // 0x36f1fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372010u, 0x36F1F8u, 0x36F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F200u;
label_36f200:
    // 0x36f200: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x36F200u;
    {
        const bool branch_taken_0x36f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f200) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F208u;
label_36f208:
    // 0x36f208: 0xc0dc7f8  jal         func_371FE0
    ctx->pc = 0x36F208u;
    SET_GPR_U32(ctx, 31, 0x36F210u);
    ctx->pc = 0x36F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F208u;
    // 0x36f20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371FE0u, 0x36F208u, 0x36F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F210u;
label_36f210:
    // 0x36f210: 0x2e210007  sltiu       $at, $s1, 0x7
    ctx->pc = 0x36f210u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x36f214: 0x10200082  beqz        $at, . + 4 + (0x82 << 2)
    ctx->pc = 0x36F214u;
    {
        const bool branch_taken_0x36f214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F214u;
        // 0x36f218: 0x3c040068  lui         $a0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f214) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F21Cu;
    // 0x36f21c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x36f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x36f220: 0x24841900  addiu       $a0, $a0, 0x1900
    ctx->pc = 0x36f220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6400));
    // 0x36f224: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x36f224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x36f228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36f228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36f22c: 0x600008  jr          $v1
    ctx->pc = 0x36F22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x36F238u: goto label_36f238;
            case 0x36F280u: goto label_36f280;
            case 0x36F2C8u: goto label_36f2c8;
            case 0x36F310u: goto label_36f310;
            case 0x36F358u: goto label_36f358;
            case 0x36F398u: goto label_36f398;
            case 0x36F3E0u: goto label_36f3e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F22Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x36F234u;
    // 0x36f234: 0x0  nop
    ctx->pc = 0x36f234u;
    // NOP
label_36f238:
    // 0x36f238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f23c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f240: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f244: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f248: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f24c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f250: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f254: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f258: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f25c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f25cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f260: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f260u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f264: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F264u;
    SET_GPR_U32(ctx, 31, 0x36F26Cu);
    ctx->pc = 0x36F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F264u;
    // 0x36f268: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F264u, 0x36F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F26Cu;
label_36f26c:
    // 0x36f26c: 0xc0dc014  jal         func_370050
    ctx->pc = 0x36F26Cu;
    SET_GPR_U32(ctx, 31, 0x36F274u);
    ctx->pc = 0x36F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F26Cu;
    // 0x36f270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370050u, 0x36F26Cu, 0x36F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F274u;
label_36f274:
    // 0x36f274: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x36F274u;
    {
        const bool branch_taken_0x36f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f274) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F27Cu;
    // 0x36f27c: 0x0  nop
    ctx->pc = 0x36f27cu;
    // NOP
label_36f280:
    // 0x36f280: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f284: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f288: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f28c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f290: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f298: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f29c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f2a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2a4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f2a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f2a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2ac: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F2ACu;
    SET_GPR_U32(ctx, 31, 0x36F2B4u);
    ctx->pc = 0x36F2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2ACu;
    // 0x36f2b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F2ACu, 0x36F2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2B4u;
label_36f2b4:
    // 0x36f2b4: 0xc0dbd44  jal         func_36F510
    ctx->pc = 0x36F2B4u;
    SET_GPR_U32(ctx, 31, 0x36F2BCu);
    ctx->pc = 0x36F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2B4u;
    // 0x36f2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F510u, 0x36F2B4u, 0x36F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2BCu;
label_36f2bc:
    // 0x36f2bc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x36F2BCu;
    {
        const bool branch_taken_0x36f2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f2bc) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F2C4u;
    // 0x36f2c4: 0x0  nop
    ctx->pc = 0x36f2c4u;
    // NOP
label_36f2c8:
    // 0x36f2c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f2cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f2d0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f2d4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f2d8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f2dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2e0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f2e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f2e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f2ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f2f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f2f4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F2F4u;
    SET_GPR_U32(ctx, 31, 0x36F2FCu);
    ctx->pc = 0x36F2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2F4u;
    // 0x36f2f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F2F4u, 0x36F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F2FCu;
label_36f2fc:
    // 0x36f2fc: 0xc0dc180  jal         func_370600
    ctx->pc = 0x36F2FCu;
    SET_GPR_U32(ctx, 31, 0x36F304u);
    ctx->pc = 0x36F300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F2FCu;
    // 0x36f300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370600u, 0x36F2FCu, 0x36F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F304u;
label_36f304:
    // 0x36f304: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x36F304u;
    {
        const bool branch_taken_0x36f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f304) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F30Cu;
    // 0x36f30c: 0x0  nop
    ctx->pc = 0x36f30cu;
    // NOP
label_36f310:
    // 0x36f310: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f314: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f318: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f31c: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f320: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f328: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f32c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f334: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f334u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f338: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f33c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F33Cu;
    SET_GPR_U32(ctx, 31, 0x36F344u);
    ctx->pc = 0x36F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F33Cu;
    // 0x36f340: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F33Cu, 0x36F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F344u;
label_36f344:
    // 0x36f344: 0xc0e463c  jal         func_3918F0
    ctx->pc = 0x36F344u;
    SET_GPR_U32(ctx, 31, 0x36F34Cu);
    ctx->pc = 0x36F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F344u;
    // 0x36f348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3918F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3918F0u, 0x36F344u, 0x36F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F34Cu;
label_36f34c:
    // 0x36f34c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x36F34Cu;
    {
        const bool branch_taken_0x36f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f34c) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F354u;
    // 0x36f354: 0x0  nop
    ctx->pc = 0x36f354u;
    // NOP
label_36f358:
    // 0x36f358: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f35c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f360: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f364: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f368: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f370: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f378: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f37c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f37cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f380: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f380u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f384: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F384u;
    SET_GPR_U32(ctx, 31, 0x36F38Cu);
    ctx->pc = 0x36F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F384u;
    // 0x36f388: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F384u, 0x36F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F38Cu;
label_36f38c:
    // 0x36f38c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x36F38Cu;
    {
        const bool branch_taken_0x36f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f38c) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F394u;
    // 0x36f394: 0x0  nop
    ctx->pc = 0x36f394u;
    // NOP
label_36f398:
    // 0x36f398: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f39c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f3a0: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f3a4: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x36f3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x36f3a8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f3ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3b0: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f3b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f3b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f3b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f3b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f3bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f3c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3c4: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F3C4u;
    SET_GPR_U32(ctx, 31, 0x36F3CCu);
    ctx->pc = 0x36F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3C4u;
    // 0x36f3c8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F3C4u, 0x36F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3CCu;
label_36f3cc:
    // 0x36f3cc: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x36F3CCu;
    SET_GPR_U32(ctx, 31, 0x36F3D4u);
    ctx->pc = 0x36F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F3CCu;
    // 0x36f3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x36F3CCu, 0x36F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F3D4u;
label_36f3d4:
    // 0x36f3d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36F3D4u;
    {
        const bool branch_taken_0x36f3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f3d4) {
            ctx->pc = 0x36F420u;
            goto label_36f420;
        }
    }
    ctx->pc = 0x36F3DCu;
    // 0x36f3dc: 0x0  nop
    ctx->pc = 0x36f3dcu;
    // NOP
label_36f3e0:
    // 0x36f3e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f3e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x36f3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x36f3e8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x36f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x36f3ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x36f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x36f3f0: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x36f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x36f3f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36f3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f3f8: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x36f3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x36f3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36f3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f400: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36f400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36f404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f408: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x36f408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f40c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x36F40Cu;
    SET_GPR_U32(ctx, 31, 0x36F414u);
    ctx->pc = 0x36F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F40Cu;
    // 0x36f410: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x36F40Cu, 0x36F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F414u;
label_36f414:
    // 0x36f414: 0xc0dba94  jal         func_36EA50
    ctx->pc = 0x36F414u;
    SET_GPR_U32(ctx, 31, 0x36F41Cu);
    ctx->pc = 0x36F418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F414u;
    // 0x36f418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EA50u, 0x36F414u, 0x36F41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F41Cu;
label_36f41c:
    // 0x36f41c: 0x0  nop
    ctx->pc = 0x36f41cu;
    // NOP
label_36f420:
    // 0x36f420: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x36f420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36f424: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36f424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36f428: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36f428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36f42c: 0x3e00008  jr          $ra
    ctx->pc = 0x36F42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F42Cu;
        // 0x36f430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F434u;
}
