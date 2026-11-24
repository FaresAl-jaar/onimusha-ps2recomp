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

// Function: sub_00288700
// Address: 0x288700 - 0x288894
void sub_00288700_0x288700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288700_0x288700");
#endif

    switch (ctx->pc) {
        case 0x288728u: goto label_288728;
        case 0x28876cu: goto label_28876c;
        case 0x288794u: goto label_288794;
        case 0x2887bcu: goto label_2887bc;
        case 0x2887e4u: goto label_2887e4;
        case 0x28880cu: goto label_28880c;
        case 0x288834u: goto label_288834;
        case 0x28884cu: goto label_28884c;
        case 0x288864u: goto label_288864;
        case 0x288878u: goto label_288878;
        default: break;
    }

    ctx->pc = 0x288700u;

    // 0x288700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x288700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x288704: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x288704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x288708: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x288708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28870c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28870cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288710: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x288710u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x288714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x288718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x288718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28871c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28871cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x288720: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x288720u;
    SET_GPR_U32(ctx, 31, 0x288728u);
    ctx->pc = 0x288724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288720u;
    // 0x288724: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x288720u, 0x288728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288728u;
label_288728:
    // 0x288728: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x288728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28872c: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x28872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x288730: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x288730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x288734: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x288734u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x288738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x288738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x28873c: 0x8e67008c  lw          $a3, 0x8C($s3)
    ctx->pc = 0x28873cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x288740: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x288740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x288744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288748: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x288748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x28874c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x28874cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x288750: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x288750u;
    {
        const bool branch_taken_0x288750 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x288754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288750u;
        // 0x288754: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288750) {
            ctx->pc = 0x288770u;
            goto label_288770;
        }
    }
    ctx->pc = 0x288758u;
    // 0x288758: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x288758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x28875c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28875cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288760: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288764: 0xc0a141c  jal         func_285070
    ctx->pc = 0x288764u;
    SET_GPR_U32(ctx, 31, 0x28876Cu);
    ctx->pc = 0x288768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288764u;
    // 0x288768: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x288764u, 0x28876Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28876Cu;
label_28876c:
    // 0x28876c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28876cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_288770:
    // 0x288770: 0x8e6700a4  lw          $a3, 0xA4($s3)
    ctx->pc = 0x288770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x288774: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x288774u;
    {
        const bool branch_taken_0x288774 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x288774) {
            ctx->pc = 0x288798u;
            goto label_288798;
        }
    }
    ctx->pc = 0x28877Cu;
    // 0x28877c: 0x8e6600a8  lw          $a2, 0xA8($s3)
    ctx->pc = 0x28877cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
    // 0x288780: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x288784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x288784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288788: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x288788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28878c: 0xc0a141c  jal         func_285070
    ctx->pc = 0x28878Cu;
    SET_GPR_U32(ctx, 31, 0x288794u);
    ctx->pc = 0x288790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28878Cu;
    // 0x288790: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285070u, 0x28878Cu, 0x288794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288794u;
label_288794:
    // 0x288794: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x288794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_288798:
    // 0x288798: 0x8e670094  lw          $a3, 0x94($s3)
    ctx->pc = 0x288798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x28879c: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28879Cu;
    {
        const bool branch_taken_0x28879c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28879c) {
            ctx->pc = 0x2887C0u;
            goto label_2887c0;
        }
    }
    ctx->pc = 0x2887A4u;
    // 0x2887a4: 0x8e660098  lw          $a2, 0x98($s3)
    ctx->pc = 0x2887a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x2887a8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2887a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2887ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2887acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887b0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2887b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2887b4: 0xc0a1680  jal         func_285A00
    ctx->pc = 0x2887B4u;
    SET_GPR_U32(ctx, 31, 0x2887BCu);
    ctx->pc = 0x2887B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887B4u;
    // 0x2887b8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A00u, 0x2887B4u, 0x2887BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887BCu;
label_2887bc:
    // 0x2887bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2887bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2887c0:
    // 0x2887c0: 0x8e6700ac  lw          $a3, 0xAC($s3)
    ctx->pc = 0x2887c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x2887c4: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2887C4u;
    {
        const bool branch_taken_0x2887c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887c4) {
            ctx->pc = 0x2887E8u;
            goto label_2887e8;
        }
    }
    ctx->pc = 0x2887CCu;
    // 0x2887cc: 0x8e6600b0  lw          $a2, 0xB0($s3)
    ctx->pc = 0x2887ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2887d0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2887d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2887d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2887d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2887d8: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2887d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2887dc: 0xc0a1680  jal         func_285A00
    ctx->pc = 0x2887DCu;
    SET_GPR_U32(ctx, 31, 0x2887E4u);
    ctx->pc = 0x2887E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2887DCu;
    // 0x2887e0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285A00u, 0x2887DCu, 0x2887E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2887E4u;
label_2887e4:
    // 0x2887e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2887e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2887e8:
    // 0x2887e8: 0x8e67009c  lw          $a3, 0x9C($s3)
    ctx->pc = 0x2887e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x2887ec: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2887ECu;
    {
        const bool branch_taken_0x2887ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2887ec) {
            ctx->pc = 0x288810u;
            goto label_288810;
        }
    }
    ctx->pc = 0x2887F4u;
    // 0x2887f4: 0x8e6600a0  lw          $a2, 0xA0($s3)
    ctx->pc = 0x2887f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x2887f8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x2887f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2887fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2887fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288800: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x288800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x288804: 0xc0a1924  jal         func_286490
    ctx->pc = 0x288804u;
    SET_GPR_U32(ctx, 31, 0x28880Cu);
    ctx->pc = 0x288808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288804u;
    // 0x288808: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286490u, 0x288804u, 0x28880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28880Cu;
label_28880c:
    // 0x28880c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28880cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_288810:
    // 0x288810: 0x8e6700b4  lw          $a3, 0xB4($s3)
    ctx->pc = 0x288810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x288814: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x288814u;
    {
        const bool branch_taken_0x288814 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x288814) {
            ctx->pc = 0x288838u;
            goto label_288838;
        }
    }
    ctx->pc = 0x28881Cu;
    // 0x28881c: 0x8e6600b8  lw          $a2, 0xB8($s3)
    ctx->pc = 0x28881cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    // 0x288820: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x288820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x288824: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x288824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288828: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x288828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x28882c: 0xc0a1924  jal         func_286490
    ctx->pc = 0x28882Cu;
    SET_GPR_U32(ctx, 31, 0x288834u);
    ctx->pc = 0x288830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28882Cu;
    // 0x288830: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286490u, 0x28882Cu, 0x288834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288834u;
label_288834:
    // 0x288834: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x288834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_288838:
    // 0x288838: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x28883c: 0x26660040  addiu       $a2, $s3, 0x40
    ctx->pc = 0x28883cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x288840: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x288840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288844: 0xc076788  jal         func_1D9E20
    ctx->pc = 0x288844u;
    SET_GPR_U32(ctx, 31, 0x28884Cu);
    ctx->pc = 0x288848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288844u;
    // 0x288848: 0x24a56a20  addiu       $a1, $a1, 0x6A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E20u, 0x288844u, 0x28884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28884Cu;
label_28884c:
    // 0x28884c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x28884cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x288850: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x288850u;
    {
        const bool branch_taken_0x288850 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x288854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288850u;
        // 0x288854: 0x38283  sra         $s0, $v1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288850) {
            ctx->pc = 0x288878u;
            goto label_288878;
        }
    }
    ctx->pc = 0x288858u;
    // 0x288858: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28885c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x28885Cu;
    SET_GPR_U32(ctx, 31, 0x288864u);
    ctx->pc = 0x288860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28885Cu;
    // 0x288860: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x28885Cu, 0x288864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288864u;
label_288864:
    // 0x288864: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x288864u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x288868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x288868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28886c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28886cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288870: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x288870u;
    SET_GPR_U32(ctx, 31, 0x288878u);
    ctx->pc = 0x288874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288870u;
    // 0x288874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x288870u, 0x288878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288878u;
label_288878:
    // 0x288878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x288878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28887c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28887cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x288888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28888c: 0x3e00008  jr          $ra
    ctx->pc = 0x28888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28888Cu;
        // 0x288890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288894u;
}
