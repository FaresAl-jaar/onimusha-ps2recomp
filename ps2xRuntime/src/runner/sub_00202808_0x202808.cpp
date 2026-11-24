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

// Function: sub_00202808
// Address: 0x202808 - 0x202f5c
void sub_00202808_0x202808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202808_0x202808");
#endif

    switch (ctx->pc) {
        case 0x2028a0u: goto label_2028a0;
        case 0x2028b8u: goto label_2028b8;
        case 0x2028ccu: goto label_2028cc;
        case 0x2028d4u: goto label_2028d4;
        case 0x2028f8u: goto label_2028f8;
        case 0x20290cu: goto label_20290c;
        case 0x202924u: goto label_202924;
        case 0x20293cu: goto label_20293c;
        case 0x202948u: goto label_202948;
        case 0x202968u: goto label_202968;
        case 0x202980u: goto label_202980;
        case 0x202998u: goto label_202998;
        case 0x2029a8u: goto label_2029a8;
        case 0x2029b8u: goto label_2029b8;
        case 0x2029c8u: goto label_2029c8;
        case 0x2029d8u: goto label_2029d8;
        case 0x202a40u: goto label_202a40;
        case 0x202a6cu: goto label_202a6c;
        case 0x202a74u: goto label_202a74;
        case 0x202aacu: goto label_202aac;
        case 0x202b48u: goto label_202b48;
        case 0x202bacu: goto label_202bac;
        case 0x202c18u: goto label_202c18;
        case 0x202c7cu: goto label_202c7c;
        case 0x202cf8u: goto label_202cf8;
        case 0x202d5cu: goto label_202d5c;
        case 0x202df4u: goto label_202df4;
        case 0x202e60u: goto label_202e60;
        case 0x202e74u: goto label_202e74;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e88u: goto label_202e88;
        case 0x202e9cu: goto label_202e9c;
        case 0x202eb8u: goto label_202eb8;
        case 0x202ec8u: goto label_202ec8;
        case 0x202ee0u: goto label_202ee0;
        case 0x202ef8u: goto label_202ef8;
        case 0x202f24u: goto label_202f24;
        default: break;
    }

    ctx->pc = 0x202808u;

    // 0x202808: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x202808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x20280c: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x202810: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x202810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x202814: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x202814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x202818: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x202818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x20281c: 0x247077e8  addiu       $s0, $v1, 0x77E8
    ctx->pc = 0x20281cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 30696));
    // 0x202820: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x202820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x202824: 0x3c060087  lui         $a2, 0x87
    ctx->pc = 0x202824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)135 << 16));
    // 0x202828: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x202828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x20282c: 0x245377e4  addiu       $s3, $v0, 0x77E4
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30692));
    // 0x202830: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x202830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x202834: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x202834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202838: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x202838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x20283c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20283cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202840: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x202840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x202844: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x202844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x202848: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x202848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x20284c: 0x24b177ec  addiu       $s1, $a1, 0x77EC
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 30700));
    // 0x202850: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x202850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x202854: 0x24d277f0  addiu       $s2, $a2, 0x77F0
    ctx->pc = 0x202854u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 30704));
    // 0x202858: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x202858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x20285c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x20285cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202860: 0x3c090087  lui         $t1, 0x87
    ctx->pc = 0x202860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)135 << 16));
    // 0x202864: 0x25297800  addiu       $t1, $t1, 0x7800
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30720));
    // 0x202868: 0x3c0a0087  lui         $t2, 0x87
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)135 << 16));
    // 0x20286c: 0x254a77fc  addiu       $t2, $t2, 0x77FC
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 30716));
    // 0x202870: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x202874: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x202874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202878: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20287c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x20287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202880: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x202880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x202884: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202888: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x202888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20288c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x20288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x202890: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x202890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x202894: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x202894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x202898: 0xc080810  jal         func_202040
    ctx->pc = 0x202898u;
    SET_GPR_U32(ctx, 31, 0x2028A0u);
    ctx->pc = 0x20289Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202898u;
    // 0x20289c: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202040u, 0x202898u, 0x2028A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028A0u;
label_2028a0:
    // 0x2028a0: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x2028a4: 0x3c060087  lui         $a2, 0x87
    ctx->pc = 0x2028a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)135 << 16));
    // 0x2028a8: 0x24a577f4  addiu       $a1, $a1, 0x77F4
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30708));
    // 0x2028ac: 0x24c677f8  addiu       $a2, $a2, 0x77F8
    ctx->pc = 0x2028acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30712));
    // 0x2028b0: 0xc08085e  jal         func_202178
    ctx->pc = 0x2028B0u;
    SET_GPR_U32(ctx, 31, 0x2028B8u);
    ctx->pc = 0x2028B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028B0u;
    // 0x2028b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202178u, 0x2028B0u, 0x2028B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028B8u;
label_2028b8:
    // 0x2028b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2028b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028bc: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2028bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2028c0: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x2028c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x2028c4: 0xc0808b2  jal         func_2022C8
    ctx->pc = 0x2028C4u;
    SET_GPR_U32(ctx, 31, 0x2028CCu);
    ctx->pc = 0x2028C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028C4u;
    // 0x2028c8: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022C8u, 0x2028C4u, 0x2028CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028CCu;
label_2028cc:
    // 0x2028cc: 0xc0808be  jal         func_2022F8
    ctx->pc = 0x2028CCu;
    SET_GPR_U32(ctx, 31, 0x2028D4u);
    ctx->pc = 0x2022F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022F8u, 0x2028CCu, 0x2028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028D4u;
label_2028d4:
    // 0x2028d4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x2028d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x2028d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2028d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028dc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2028e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2028e4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2028e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2028e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2028ec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2028ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2028f0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2028F0u;
    SET_GPR_U32(ctx, 31, 0x2028F8u);
    ctx->pc = 0x2028F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028F0u;
    // 0x2028f4: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2028F0u, 0x2028F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028F8u;
label_2028f8:
    // 0x2028f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2028f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028fc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2028fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x202900: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x202904: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202904u;
    SET_GPR_U32(ctx, 31, 0x20290Cu);
    ctx->pc = 0x202908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202904u;
    // 0x202908: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202904u, 0x20290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20290Cu;
label_20290c:
    // 0x20290c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202910: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202914: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x202914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202918: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x202918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20291c: 0xc080964  jal         func_202590
    ctx->pc = 0x20291Cu;
    SET_GPR_U32(ctx, 31, 0x202924u);
    ctx->pc = 0x202920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20291Cu;
    // 0x202920: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202590u, 0x20291Cu, 0x202924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202924u;
label_202924:
    // 0x202924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202928: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x202928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x20292c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20292cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202930: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x202930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202934: 0xc0809a8  jal         func_2026A0
    ctx->pc = 0x202934u;
    SET_GPR_U32(ctx, 31, 0x20293Cu);
    ctx->pc = 0x202938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202934u;
    // 0x202938: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2026A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2026A0u, 0x202934u, 0x20293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20293Cu;
label_20293c:
    // 0x20293c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202940: 0xc080bd8  jal         func_202F60
    ctx->pc = 0x202940u;
    SET_GPR_U32(ctx, 31, 0x202948u);
    ctx->pc = 0x202944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202940u;
    // 0x202944: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202F60u, 0x202940u, 0x202948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202948u;
label_202948:
    // 0x202948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20294c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x20294Cu;
    {
        const bool branch_taken_0x20294c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20294c) {
            ctx->pc = 0x202950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20294Cu;
            // 0x202950: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202988u;
            goto label_202988;
        }
    }
    ctx->pc = 0x202954u;
    // 0x202954: 0x3c080087  lui         $t0, 0x87
    ctx->pc = 0x202954u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)135 << 16));
    // 0x202958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20295c: 0x25087800  addiu       $t0, $t0, 0x7800
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30720));
    // 0x202960: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202960u;
    SET_GPR_U32(ctx, 31, 0x202968u);
    ctx->pc = 0x202964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202960u;
    // 0x202964: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202960u, 0x202968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202968u;
label_202968:
    // 0x202968: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20296c: 0x3c090087  lui         $t1, 0x87
    ctx->pc = 0x20296cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)135 << 16));
    // 0x202970: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x202970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202974: 0x252977fc  addiu       $t1, $t1, 0x77FC
    ctx->pc = 0x202974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30716));
    // 0x202978: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202978u;
    SET_GPR_U32(ctx, 31, 0x202980u);
    ctx->pc = 0x20297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202978u;
    // 0x20297c: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202978u, 0x202980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202980u;
label_202980:
    // 0x202980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202980u;
        // 0x202984: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202980) {
            ctx->pc = 0x20298Cu;
            goto label_20298c;
        }
    }
    ctx->pc = 0x202988u;
label_202988:
    // 0x202988: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20298c:
    // 0x20298c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x20298cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x202990: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x202990u;
    SET_GPR_U32(ctx, 31, 0x202998u);
    ctx->pc = 0x202994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202990u;
    // 0x202994: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x202990u, 0x202998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202998u;
label_202998:
    // 0x202998: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20299c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2029a0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2029A0u;
    SET_GPR_U32(ctx, 31, 0x2029A8u);
    ctx->pc = 0x2029A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029A0u;
    // 0x2029a4: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2029A0u, 0x2029A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029A8u;
label_2029a8:
    // 0x2029a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2029a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029ac: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x2029b0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2029B0u;
    SET_GPR_U32(ctx, 31, 0x2029B8u);
    ctx->pc = 0x2029B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029B0u;
    // 0x2029b4: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2029B0u, 0x2029B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029B8u;
label_2029b8:
    // 0x2029b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2029b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029bc: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x2029bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2029c0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2029C0u;
    SET_GPR_U32(ctx, 31, 0x2029C8u);
    ctx->pc = 0x2029C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029C0u;
    // 0x2029c4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2029C0u, 0x2029C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029C8u;
label_2029c8:
    // 0x2029c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029cc: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x2029ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2029d0: 0xc080f8e  jal         func_203E38
    ctx->pc = 0x2029D0u;
    SET_GPR_U32(ctx, 31, 0x2029D8u);
    ctx->pc = 0x2029D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029D0u;
    // 0x2029d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203E38u, 0x2029D0u, 0x2029D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029D8u;
label_2029d8:
    // 0x2029d8: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x2029d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2029dc: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2029DCu;
    {
        const bool branch_taken_0x2029dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029DCu;
        // 0x2029e0: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029dc) {
            ctx->pc = 0x202A2Cu;
            goto label_202a2c;
        }
    }
    ctx->pc = 0x2029E4u;
    // 0x2029e4: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x2029E4u;
    {
        const bool branch_taken_0x2029e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029E4u;
        // 0x2029e8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029e4) {
            ctx->pc = 0x202A30u;
            goto label_202a30;
        }
    }
    ctx->pc = 0x2029ECu;
    // 0x2029ec: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x2029ECu;
    {
        const bool branch_taken_0x2029ec = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2029F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029ECu;
        // 0x2029f0: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029ec) {
            ctx->pc = 0x202A64u;
            goto label_202a64;
        }
    }
    ctx->pc = 0x2029F4u;
    // 0x2029f4: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2029F4u;
    {
        const bool branch_taken_0x2029f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2029f4) {
            ctx->pc = 0x2029F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2029F4u;
            // 0x2029f8: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A30u;
            goto label_202a30;
        }
    }
    ctx->pc = 0x2029FCu;
    // 0x2029fc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2029fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x202a00: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x202A00u;
    {
        const bool branch_taken_0x202a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A00u;
        // 0x202a04: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a00) {
            ctx->pc = 0x202A2Cu;
            goto label_202a2c;
        }
    }
    ctx->pc = 0x202A08u;
    // 0x202a08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x202A08u;
    {
        const bool branch_taken_0x202a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A08u;
        // 0x202a0c: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a08) {
            ctx->pc = 0x202A30u;
            goto label_202a30;
        }
    }
    ctx->pc = 0x202A10u;
    // 0x202a10: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x202a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x202a14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202A14u;
    {
        const bool branch_taken_0x202a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A14u;
        // 0x202a18: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a14) {
            ctx->pc = 0x202A2Cu;
            goto label_202a2c;
        }
    }
    ctx->pc = 0x202A1Cu;
    // 0x202a1c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x202A1Cu;
    {
        const bool branch_taken_0x202a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x202a1c) {
            ctx->pc = 0x202A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A1Cu;
            // 0x202a20: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A30u;
            goto label_202a30;
        }
    }
    ctx->pc = 0x202A24u;
    // 0x202a24: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202A24u;
    {
        const bool branch_taken_0x202a24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x202a24) {
            ctx->pc = 0x202A38u;
            goto label_202a38;
        }
    }
    ctx->pc = 0x202A2Cu;
label_202a2c:
    // 0x202a2c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_202a30:
    // 0x202a30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202A30u;
    {
        const bool branch_taken_0x202a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A30u;
        // 0x202a34: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a30) {
            ctx->pc = 0x202A64u;
            goto label_202a64;
        }
    }
    ctx->pc = 0x202A38u;
label_202a38:
    // 0x202a38: 0xc080bd8  jal         func_202F60
    ctx->pc = 0x202A38u;
    SET_GPR_U32(ctx, 31, 0x202A40u);
    ctx->pc = 0x202A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A38u;
    // 0x202a3c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202F60u, 0x202A38u, 0x202A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A40u;
label_202a40:
    // 0x202a40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202a44: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x202A44u;
    {
        const bool branch_taken_0x202a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202a44) {
            ctx->pc = 0x202A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202A44u;
            // 0x202a48: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202A80u;
            goto label_202a80;
        }
    }
    ctx->pc = 0x202A4Cu;
    // 0x202a4c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x202A4Cu;
    {
        const bool branch_taken_0x202a4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A4Cu;
        // 0x202a50: 0x3c040066  lui         $a0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a4c) {
            ctx->pc = 0x202A60u;
            goto label_202a60;
        }
    }
    ctx->pc = 0x202A54u;
    // 0x202a54: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x202A54u;
    {
        const bool branch_taken_0x202a54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A54u;
        // 0x202a58: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a54) {
            ctx->pc = 0x202A80u;
            goto label_202a80;
        }
    }
    ctx->pc = 0x202A5Cu;
    // 0x202a5c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_202a60:
    // 0x202a60: 0x248465a0  addiu       $a0, $a0, 0x65A0
    ctx->pc = 0x202a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26016));
label_202a64:
    // 0x202a64: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x202A64u;
    SET_GPR_U32(ctx, 31, 0x202A6Cu);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x202A64u, 0x202A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A6Cu;
label_202a6c:
    // 0x202a6c: 0xc080ff8  jal         func_203FE0
    ctx->pc = 0x202A6Cu;
    SET_GPR_U32(ctx, 31, 0x202A74u);
    ctx->pc = 0x202A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A6Cu;
    // 0x202a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FE0u, 0x202A6Cu, 0x202A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A74u;
label_202a74:
    // 0x202a74: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x202A74u;
    {
        const bool branch_taken_0x202a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A74u;
        // 0x202a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a74) {
            ctx->pc = 0x202F2Cu;
            goto label_202f2c;
        }
    }
    ctx->pc = 0x202A7Cu;
    // 0x202a7c: 0x0  nop
    ctx->pc = 0x202a7cu;
    // NOP
label_202a80:
    // 0x202a80: 0x26e3003f  addiu       $v1, $s7, 0x3F
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 63));
    // 0x202a84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x202a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x202a88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x202a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a8c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x202a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x202a90: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x202a94: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x202a98: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x202a98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x202a9c: 0x3c100087  lui         $s0, 0x87
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)135 << 16));
    // 0x202aa0: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x202aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
    // 0x202aa4: 0xc08084a  jal         func_202128
    ctx->pc = 0x202AA4u;
    SET_GPR_U32(ctx, 31, 0x202AACu);
    ctx->pc = 0x202AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202AA4u;
    // 0x202aa8: 0xae0377e0  sw          $v1, 0x77E0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 30688), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202128u, 0x202AA4u, 0x202AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AACu;
label_202aac:
    // 0x202aac: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202ab0: 0x3c17004c  lui         $s7, 0x4C
    ctx->pc = 0x202ab0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)76 << 16));
    // 0x202ab4: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x202ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x202ab8: 0x26628688  addiu       $v0, $s3, -0x7978
    ctx->pc = 0x202ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936200));
    // 0x202abc: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x202abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x202ac0: 0x26e486b0  addiu       $a0, $s7, -0x7950
    ctx->pc = 0x202ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936240));
    // 0x202ac4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x202ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x202ac8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x202acc: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x202accu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x4B86C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B86C8u, _value); } while (0);
    // 0x202ad0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x202ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x202ad4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x202ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x202ad8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x202ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x202adc: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x202adcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x4B86B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B86B8u, _value); } while (0);
    // 0x202ae0: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x202ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x202ae4: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x202ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x202ae8: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x202ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x202aec: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x202aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x202af0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x202af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x202af4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202af8: 0x12c80041  beq         $s6, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x202AF8u;
    {
        const bool branch_taken_0x202af8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x202AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF8u;
        // 0x202afc: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202af8) {
            ctx->pc = 0x202C00u;
            goto label_202c00;
        }
    }
    ctx->pc = 0x202B00u;
    // 0x202b00: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x202b00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x202b04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202B04u;
    {
        const bool branch_taken_0x202b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B04u;
        // 0x202b08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b04) {
            ctx->pc = 0x202B20u;
            goto label_202b20;
        }
    }
    ctx->pc = 0x202B0Cu;
    // 0x202b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202b10: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202B10u;
    {
        const bool branch_taken_0x202b10 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x202B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B10u;
        // 0x202b14: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b10) {
            ctx->pc = 0x202B30u;
            goto label_202b30;
        }
    }
    ctx->pc = 0x202B18u;
    // 0x202b18: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x202B18u;
    {
        const bool branch_taken_0x202b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B18u;
        // 0x202b1c: 0x3c030087  lui         $v1, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b18) {
            ctx->pc = 0x202DC0u;
            goto label_202dc0;
        }
    }
    ctx->pc = 0x202B20u;
label_202b20:
    // 0x202b20: 0x12c2006f  beq         $s6, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x202B20u;
    {
        const bool branch_taken_0x202b20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x202B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B20u;
        // 0x202b24: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b20) {
            ctx->pc = 0x202CE0u;
            goto label_202ce0;
        }
    }
    ctx->pc = 0x202B28u;
    // 0x202b28: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x202B28u;
    {
        const bool branch_taken_0x202b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B28u;
        // 0x202b2c: 0x3c030087  lui         $v1, 0x87 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b28) {
            ctx->pc = 0x202DC0u;
            goto label_202dc0;
        }
    }
    ctx->pc = 0x202B30u;
label_202b30:
    // 0x202b30: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x202b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x202b34: 0x246385b0  addiu       $v1, $v1, -0x7A50
    ctx->pc = 0x202b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935984));
    // 0x202b38: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x202b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x202b3c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202B3Cu;
    {
        const bool branch_taken_0x202b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B3Cu;
        // 0x202b40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b3c) {
            ctx->pc = 0x202BA8u;
            goto label_202ba8;
        }
    }
    ctx->pc = 0x202B44u;
    // 0x202b44: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202b48:
    // 0x202b48: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x202b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x202b4c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x202b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x202b50: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x202b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x202b54: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x202b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x202b58: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x202b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x202b5c: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x202b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x202b60: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x202b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x202b64: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x202b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x202b68: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x202b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b6c: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x202b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b70: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x202b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b74: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x202b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b78: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x202b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b7c: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x202b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b80: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x202b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b84: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x202b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202b88: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202b8c: 0x0  nop
    ctx->pc = 0x202b8cu;
    // NOP
    // 0x202b90: 0x0  nop
    ctx->pc = 0x202b90u;
    // NOP
    // 0x202b94: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x202B94u;
    {
        const bool branch_taken_0x202b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B94u;
        // 0x202b98: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b94) {
            ctx->pc = 0x202B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202b48;
        }
    }
    ctx->pc = 0x202B9Cu;
    // 0x202b9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x202B9Cu;
    {
        const bool branch_taken_0x202b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B9Cu;
        // 0x202ba0: 0x8e0277e0  lw          $v0, 0x77E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b9c) {
            ctx->pc = 0x202BE4u;
            goto label_202be4;
        }
    }
    ctx->pc = 0x202BA4u;
    // 0x202ba4: 0x0  nop
    ctx->pc = 0x202ba4u;
    // NOP
label_202ba8:
    // 0x202ba8: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202bac:
    // 0x202bac: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x202bacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202bb0: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x202bb0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202bb4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x202bb4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x202bb8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x202bb8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x202bbc: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x202bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x202bc0: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x202bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x202bc4: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x202bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x202bc8: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x202bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x202bcc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202bd0: 0x0  nop
    ctx->pc = 0x202bd0u;
    // NOP
    // 0x202bd4: 0x0  nop
    ctx->pc = 0x202bd4u;
    // NOP
    // 0x202bd8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x202BD8u;
    {
        const bool branch_taken_0x202bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BD8u;
        // 0x202bdc: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bd8) {
            ctx->pc = 0x202BACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202bac;
        }
    }
    ctx->pc = 0x202BE0u;
    // 0x202be0: 0x8e0277e0  lw          $v0, 0x77E0($s0)
    ctx->pc = 0x202be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
label_202be4:
    // 0x202be4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x202be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x202be8: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x202be8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202bec: 0x3c080087  lui         $t0, 0x87
    ctx->pc = 0x202becu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)135 << 16));
    // 0x202bf0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x202bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x202bf4: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x202bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x202bf8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x202BF8u;
    {
        const bool branch_taken_0x202bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BF8u;
        // 0x202bfc: 0x8d0377e4  lw          $v1, 0x77E4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 30692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf8) {
            ctx->pc = 0x202DACu;
            goto label_202dac;
        }
    }
    ctx->pc = 0x202C00u;
label_202c00:
    // 0x202c00: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x202c04: 0x246385f8  addiu       $v1, $v1, -0x7A08
    ctx->pc = 0x202c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936056));
    // 0x202c08: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x202c0c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202C0Cu;
    {
        const bool branch_taken_0x202c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C0Cu;
        // 0x202c10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c0c) {
            ctx->pc = 0x202C78u;
            goto label_202c78;
        }
    }
    ctx->pc = 0x202C14u;
    // 0x202c14: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202c18:
    // 0x202c18: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x202c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x202c1c: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x202c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x202c20: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x202c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x202c24: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x202c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x202c28: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x202c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x202c2c: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x202c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x202c30: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x202c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x202c34: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x202c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x202c38: 0xb0a90007  sdl         $t1, 0x7($a1)
    ctx->pc = 0x202c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c3c: 0xb4a90000  sdr         $t1, 0x0($a1)
    ctx->pc = 0x202c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c40: 0xb0aa000f  sdl         $t2, 0xF($a1)
    ctx->pc = 0x202c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c44: 0xb4aa0008  sdr         $t2, 0x8($a1)
    ctx->pc = 0x202c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c48: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x202c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c4c: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x202c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c50: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x202c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c54: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x202c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202c58: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202c5c: 0x0  nop
    ctx->pc = 0x202c5cu;
    // NOP
    // 0x202c60: 0x0  nop
    ctx->pc = 0x202c60u;
    // NOP
    // 0x202c64: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x202C64u;
    {
        const bool branch_taken_0x202c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C64u;
        // 0x202c68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c64) {
            ctx->pc = 0x202C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202c18;
        }
    }
    ctx->pc = 0x202C6Cu;
    // 0x202c6c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x202C6Cu;
    {
        const bool branch_taken_0x202c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C6Cu;
        // 0x202c70: 0x8e0277e0  lw          $v0, 0x77E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c6c) {
            ctx->pc = 0x202CB4u;
            goto label_202cb4;
        }
    }
    ctx->pc = 0x202C74u;
    // 0x202c74: 0x0  nop
    ctx->pc = 0x202c74u;
    // NOP
label_202c78:
    // 0x202c78: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202c7c:
    // 0x202c7c: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x202c7cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202c80: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x202c80u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202c84: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x202c84u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x202c88: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x202c88u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x202c8c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x202c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x202c90: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x202c90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x202c94: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x202c94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x202c98: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x202c98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x202c9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202ca0: 0x0  nop
    ctx->pc = 0x202ca0u;
    // NOP
    // 0x202ca4: 0x0  nop
    ctx->pc = 0x202ca4u;
    // NOP
    // 0x202ca8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x202CA8u;
    {
        const bool branch_taken_0x202ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CA8u;
        // 0x202cac: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ca8) {
            ctx->pc = 0x202C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202c7c;
        }
    }
    ctx->pc = 0x202CB0u;
    // 0x202cb0: 0x8e0277e0  lw          $v0, 0x77E0($s0)
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
label_202cb4:
    // 0x202cb4: 0x3c0a0087  lui         $t2, 0x87
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)135 << 16));
    // 0x202cb8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x202cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202cbc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x202cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x202cc0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x202cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x202cc4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x202cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x202cc8: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x202cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x202ccc: 0x8d4377e4  lw          $v1, 0x77E4($t2)
    ctx->pc = 0x202cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8777E4u));
    // 0x202cd0: 0xae8401cc  sw          $a0, 0x1CC($s4)
    ctx->pc = 0x202cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 4));
    // 0x202cd4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x202CD4u;
    {
        const bool branch_taken_0x202cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CD4u;
        // 0x202cd8: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cd4) {
            ctx->pc = 0x202DB8u;
            goto label_202db8;
        }
    }
    ctx->pc = 0x202CDCu;
    // 0x202cdc: 0x0  nop
    ctx->pc = 0x202cdcu;
    // NOP
label_202ce0:
    // 0x202ce0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x202ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x202ce4: 0x24638640  addiu       $v1, $v1, -0x79C0
    ctx->pc = 0x202ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936128));
    // 0x202ce8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x202ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x202cec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202CECu;
    {
        const bool branch_taken_0x202cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CECu;
        // 0x202cf0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cec) {
            ctx->pc = 0x202D58u;
            goto label_202d58;
        }
    }
    ctx->pc = 0x202CF4u;
    // 0x202cf4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202cf8:
    // 0x202cf8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x202cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x202cfc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x202cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x202d00: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x202d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x202d04: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x202d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x202d08: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x202d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x202d0c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x202d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x202d10: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x202d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x202d14: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x202d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x202d18: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x202d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d1c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x202d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d20: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x202d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d24: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x202d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d28: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x202d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d2c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x202d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d30: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x202d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d34: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x202d34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x202d38: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202d3c: 0x0  nop
    ctx->pc = 0x202d3cu;
    // NOP
    // 0x202d40: 0x0  nop
    ctx->pc = 0x202d40u;
    // NOP
    // 0x202d44: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x202D44u;
    {
        const bool branch_taken_0x202d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D44u;
        // 0x202d48: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d44) {
            ctx->pc = 0x202CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202cf8;
        }
    }
    ctx->pc = 0x202D4Cu;
    // 0x202d4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x202D4Cu;
    {
        const bool branch_taken_0x202d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D4Cu;
        // 0x202d50: 0x8e0277e0  lw          $v0, 0x77E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d4c) {
            ctx->pc = 0x202D94u;
            goto label_202d94;
        }
    }
    ctx->pc = 0x202D54u;
    // 0x202d54: 0x0  nop
    ctx->pc = 0x202d54u;
    // NOP
label_202d58:
    // 0x202d58: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x202d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_202d5c:
    // 0x202d5c: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x202d5cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202d60: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x202d60u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202d64: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x202d64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x202d68: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x202d68u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x202d6c: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x202d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x202d70: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x202d70u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x202d74: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x202d74u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x202d78: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x202d78u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x202d7c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x202d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x202d80: 0x0  nop
    ctx->pc = 0x202d80u;
    // NOP
    // 0x202d84: 0x0  nop
    ctx->pc = 0x202d84u;
    // NOP
    // 0x202d88: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x202D88u;
    {
        const bool branch_taken_0x202d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x202D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D88u;
        // 0x202d8c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d88) {
            ctx->pc = 0x202D5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202d5c;
        }
    }
    ctx->pc = 0x202D90u;
    // 0x202d90: 0x8e0277e0  lw          $v0, 0x77E0($s0)
    ctx->pc = 0x202d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 30688)));
label_202d94:
    // 0x202d94: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x202d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x202d98: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x202d98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x202d9c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x202d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x202da0: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x202da0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x202da4: 0x3c020087  lui         $v0, 0x87
    ctx->pc = 0x202da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)135 << 16));
    // 0x202da8: 0x8c4377e4  lw          $v1, 0x77E4($v0)
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8777E4u));
label_202dac:
    // 0x202dac: 0x8ca286cc  lw          $v0, -0x7934($a1)
    ctx->pc = 0x202dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936268)));
    // 0x202db0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x202db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202db4: 0xae8201cc  sw          $v0, 0x1CC($s4)
    ctx->pc = 0x202db4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 2));
label_202db8:
    // 0x202db8: 0xae8301c8  sw          $v1, 0x1C8($s4)
    ctx->pc = 0x202db8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 3));
    // 0x202dbc: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x202dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
label_202dc0:
    // 0x202dc0: 0x247077e8  addiu       $s0, $v1, 0x77E8
    ctx->pc = 0x202dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 30696));
    // 0x202dc4: 0x8ca386cc  lw          $v1, -0x7934($a1)
    ctx->pc = 0x202dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936268)));
    // 0x202dc8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x202dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202dcc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202DCCu;
    {
        const bool branch_taken_0x202dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DCCu;
        // 0x202dd0: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dcc) {
            ctx->pc = 0x202DECu;
            goto label_202dec;
        }
    }
    ctx->pc = 0x202DD4u;
    // 0x202dd4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x202dd4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x202dd8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202DD8u;
    {
        const bool branch_taken_0x202dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202dd8) {
            ctx->pc = 0x202DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202DD8u;
            // 0x202ddc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202DE0u;
            goto label_202de0;
        }
    }
    ctx->pc = 0x202DE0u;
label_202de0:
    // 0x202de0: 0x1010  mfhi        $v0
    ctx->pc = 0x202de0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x202de4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x202de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202de8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_202dec:
    // 0x202dec: 0xc08089e  jal         func_202278
    ctx->pc = 0x202DECu;
    SET_GPR_U32(ctx, 31, 0x202DF4u);
    ctx->pc = 0x202DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DECu;
    // 0x202df0: 0x8ea40024  lw          $a0, 0x24($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202278u, 0x202DECu, 0x202DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DF4u;
label_202df4:
    // 0x202df4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x202df4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x202df8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x202df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202dfc: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x202e00: 0x3c030087  lui         $v1, 0x87
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)135 << 16));
    // 0x202e04: 0x3c050087  lui         $a1, 0x87
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)135 << 16));
    // 0x202e08: 0x8c6877ec  lw          $t0, 0x77EC($v1)
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x8777ECu));
    // 0x202e0c: 0x26648688  addiu       $a0, $s3, -0x7978
    ctx->pc = 0x202e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936200));
    // 0x202e10: 0x8ca377f0  lw          $v1, 0x77F0($a1)
    ctx->pc = 0x202e10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8777F0u));
    // 0x202e14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x202e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e18: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x202e18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e1c: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x202e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x202e20: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x202e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202e24: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x202e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x202e28: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x202e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x202e2c: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x202e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x202e30: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x202e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x202e34: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x202e38: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x202e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202e3c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x202e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x202e40: 0x8faa00cc  lw          $t2, 0xCC($sp)
    ctx->pc = 0x202e40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x202e44: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x202e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x202e48: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x202e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x202e4c: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x202e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x202e50: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x202e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x202e54: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x202e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x202e58: 0xc085246  jal         func_214918
    ctx->pc = 0x202E58u;
    SET_GPR_U32(ctx, 31, 0x202E60u);
    ctx->pc = 0x202E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E58u;
    // 0x202e5c: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214918u, 0x202E58u, 0x202E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E60u;
label_202e60:
    // 0x202e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202e64: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202E64u;
    {
        const bool branch_taken_0x202e64 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x202e64) {
            ctx->pc = 0x202E74u;
            goto label_202e74;
        }
    }
    ctx->pc = 0x202E6Cu;
    // 0x202e6c: 0xc083346  jal         func_20CD18
    ctx->pc = 0x202E6Cu;
    SET_GPR_U32(ctx, 31, 0x202E74u);
    ctx->pc = 0x202E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E6Cu;
    // 0x202e70: 0x26e486b0  addiu       $a0, $s7, -0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CD18u, 0x202E6Cu, 0x202E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E74u;
label_202e74:
    // 0x202e74: 0xc086c66  jal         func_21B198
    ctx->pc = 0x202E74u;
    SET_GPR_U32(ctx, 31, 0x202E7Cu);
    ctx->pc = 0x202E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E74u;
    // 0x202e78: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B198u, 0x202E74u, 0x202E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E7Cu;
label_202e7c:
    // 0x202e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e80: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x202E80u;
    SET_GPR_U32(ctx, 31, 0x202E88u);
    ctx->pc = 0x202E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E80u;
    // 0x202e84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D2D0u, 0x202E80u, 0x202E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E88u;
label_202e88:
    // 0x202e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e8c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202E8Cu;
    {
        const bool branch_taken_0x202e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E8Cu;
        // 0x202e90: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e8c) {
            ctx->pc = 0x202EA8u;
            goto label_202ea8;
        }
    }
    ctx->pc = 0x202E94u;
    // 0x202e94: 0xc08168c  jal         func_205A30
    ctx->pc = 0x202E94u;
    SET_GPR_U32(ctx, 31, 0x202E9Cu);
    ctx->pc = 0x202E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E94u;
    // 0x202e98: 0x2404fecf  addiu       $a0, $zero, -0x131 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966991));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x202E94u, 0x202E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E9Cu;
label_202e9c:
    // 0x202e9c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x202ea0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x202EA0u;
    {
        const bool branch_taken_0x202ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EA0u;
        // 0x202ea4: 0x248465c0  addiu       $a0, $a0, 0x65C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ea0) {
            ctx->pc = 0x202EF0u;
            goto label_202ef0;
        }
    }
    ctx->pc = 0x202EA8u;
label_202ea8:
    // 0x202ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202eac: 0x24a55b48  addiu       $a1, $a1, 0x5B48
    ctx->pc = 0x202eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23368));
    // 0x202eb0: 0xc08490c  jal         func_212430
    ctx->pc = 0x202EB0u;
    SET_GPR_U32(ctx, 31, 0x202EB8u);
    ctx->pc = 0x202EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EB0u;
    // 0x202eb4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212430u, 0x202EB0u, 0x202EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EB8u;
label_202eb8:
    // 0x202eb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202EB8u;
    {
        const bool branch_taken_0x202eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EB8u;
        // 0x202ebc: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202eb8) {
            ctx->pc = 0x202ED8u;
            goto label_202ed8;
        }
    }
    ctx->pc = 0x202EC0u;
    // 0x202ec0: 0xc08168c  jal         func_205A30
    ctx->pc = 0x202EC0u;
    SET_GPR_U32(ctx, 31, 0x202EC8u);
    ctx->pc = 0x202EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EC0u;
    // 0x202ec4: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205A30u, 0x202EC0u, 0x202EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x202ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202ECCu;
    {
        const bool branch_taken_0x202ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202ECCu;
        // 0x202ed0: 0x248465f0  addiu       $a0, $a0, 0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ecc) {
            ctx->pc = 0x202EF0u;
            goto label_202ef0;
        }
    }
    ctx->pc = 0x202ED4u;
    // 0x202ed4: 0x0  nop
    ctx->pc = 0x202ed4u;
    // NOP
label_202ed8:
    // 0x202ed8: 0xc08074a  jal         func_201D28
    ctx->pc = 0x202ED8u;
    SET_GPR_U32(ctx, 31, 0x202EE0u);
    ctx->pc = 0x202EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ED8u;
    // 0x202edc: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D28u, 0x202ED8u, 0x202EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE0u;
label_202ee0:
    // 0x202ee0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202EE0u;
    {
        const bool branch_taken_0x202ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EE0u;
        // 0x202ee4: 0xae8202d0  sw          $v0, 0x2D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ee0) {
            ctx->pc = 0x202F00u;
            goto label_202f00;
        }
    }
    ctx->pc = 0x202EE8u;
    // 0x202ee8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x202eec: 0x24846618  addiu       $a0, $a0, 0x6618
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26136));
label_202ef0:
    // 0x202ef0: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x202EF0u;
    SET_GPR_U32(ctx, 31, 0x202EF8u);
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x202EF0u, 0x202EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EF8u;
label_202ef8:
    // 0x202ef8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202EF8u;
    {
        const bool branch_taken_0x202ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202EF8u;
        // 0x202efc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef8) {
            ctx->pc = 0x202F2Cu;
            goto label_202f2c;
        }
    }
    ctx->pc = 0x202F00u;
label_202f00:
    // 0x202f00: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x202f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x202f04: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f08: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x202f0c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x202f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x202f10: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x202f10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x202f14: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x202f18: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x202f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x202f1c: 0xc080be6  jal         func_202F98
    ctx->pc = 0x202F1Cu;
    SET_GPR_U32(ctx, 31, 0x202F24u);
    ctx->pc = 0x202F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F1Cu;
    // 0x202f20: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202F98u, 0x202F1Cu, 0x202F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F24u;
label_202f24:
    // 0x202f24: 0xae8002d4  sw          $zero, 0x2D4($s4)
    ctx->pc = 0x202f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 0));
    // 0x202f28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x202f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202f2c:
    // 0x202f2c: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x202f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x202f30: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x202f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x202f34: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x202f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x202f38: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x202f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x202f3c: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202f40: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x202f40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x202f44: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x202f44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x202f48: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x202f48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x202f4c: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x202f4cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x202f50: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x202f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x202f54: 0x3e00008  jr          $ra
    ctx->pc = 0x202F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F54u;
        // 0x202f58: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202F5Cu;
}
