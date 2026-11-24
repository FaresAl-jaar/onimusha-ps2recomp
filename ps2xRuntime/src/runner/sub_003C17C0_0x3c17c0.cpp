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

// Function: sub_003C17C0
// Address: 0x3c17c0 - 0x3c18a8
void sub_003C17C0_0x3c17c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C17C0_0x3c17c0");
#endif

    switch (ctx->pc) {
        case 0x3c17f0u: goto label_3c17f0;
        case 0x3c1814u: goto label_3c1814;
        case 0x3c1824u: goto label_3c1824;
        case 0x3c183cu: goto label_3c183c;
        case 0x3c186cu: goto label_3c186c;
        default: break;
    }

    ctx->pc = 0x3c17c0u;

    // 0x3c17c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c17c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c17c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c17c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3c17c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c17cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c17d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c17d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c17d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3c17d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c17d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c17dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c17dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c17e0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3c17e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c17e4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3c17e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3c17e8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x3C17E8u;
    SET_GPR_U32(ctx, 31, 0x3C17F0u);
    ctx->pc = 0x3C17ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C17E8u;
    // 0x3c17ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x3C17E8u, 0x3C17F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C17F0u;
label_3c17f0:
    // 0x3c17f0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3c17f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3c17f4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3c17f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c17f8: 0xc640009c  lwc1        $f0, 0x9C($s2)
    ctx->pc = 0x3c17f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c17fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3c17fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1800: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x3c1800u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3c1804: 0x0  nop
    ctx->pc = 0x3c1804u;
    // NOP
    // 0x3c1808: 0x0  nop
    ctx->pc = 0x3c1808u;
    // NOP
    // 0x3c180c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3C180Cu;
    SET_GPR_U32(ctx, 31, 0x3C1814u);
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3C180Cu, 0x3C1814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1814u;
label_3c1814:
    // 0x3c1814: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C1814u;
    {
        const bool branch_taken_0x3c1814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1814u;
        // 0x3c1818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1814) {
            ctx->pc = 0x3C1850u;
            goto label_3c1850;
        }
    }
    ctx->pc = 0x3C181Cu;
    // 0x3c181c: 0xc0f020c  jal         func_3C0830
    ctx->pc = 0x3C181Cu;
    SET_GPR_U32(ctx, 31, 0x3C1824u);
    ctx->pc = 0x3C0830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0830u, 0x3C181Cu, 0x3C1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C1824u;
label_3c1824:
    // 0x3c1824: 0x86460086  lh          $a2, 0x86($s2)
    ctx->pc = 0x3c1824u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x3c1828: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3c1828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c182c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c182cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1830: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3c1830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1834: 0xc0f0218  jal         func_3C0860
    ctx->pc = 0x3C1834u;
    SET_GPR_U32(ctx, 31, 0x3C183Cu);
    ctx->pc = 0x3C1838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1834u;
    // 0x3c1838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0860u, 0x3C1834u, 0x3C183Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C183Cu;
label_3c183c:
    // 0x3c183c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c183cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c1840: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x3c1840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x3c1844: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C1844u;
    {
        const bool branch_taken_0x3c1844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1844u;
        // 0x3c1848: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1844) {
            ctx->pc = 0x3C1888u;
            goto label_3c1888;
        }
    }
    ctx->pc = 0x3C184Cu;
    // 0x3c184c: 0x0  nop
    ctx->pc = 0x3c184cu;
    // NOP
label_3c1850:
    // 0x3c1850: 0x96470086  lhu         $a3, 0x86($s2)
    ctx->pc = 0x3c1850u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x3c1854: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x3c1854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x3c1858: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x3c1858u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c185c: 0x924500bc  lbu         $a1, 0xBC($s2)
    ctx->pc = 0x3c185cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x3c1860: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3c1860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3c1864: 0xc0f0750  jal         func_3C1D40
    ctx->pc = 0x3C1864u;
    SET_GPR_U32(ctx, 31, 0x3C186Cu);
    ctx->pc = 0x3C1868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C1864u;
    // 0x3c1868: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1D40u, 0x3C1864u, 0x3C186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C186Cu;
label_3c186c:
    // 0x3c186c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c186cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c1870: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C1870u;
    {
        const bool branch_taken_0x3c1870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c1870) {
            ctx->pc = 0x3C1888u;
            goto label_3c1888;
        }
    }
    ctx->pc = 0x3C1878u;
    // 0x3c1878: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x3c1878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3c187c: 0x3042fff0  andi        $v0, $v0, 0xFFF0
    ctx->pc = 0x3c187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x3c1880: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3c1880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c1884: 0x0  nop
    ctx->pc = 0x3c1884u;
    // NOP
label_3c1888:
    // 0x3c1888: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c1888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c188c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c188cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c1890: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c1890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c1894: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c1894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c1898: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c1898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c189c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c189cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c18a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C18A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C18A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C18A0u;
        // 0x3c18a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C18A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C18A8u;
}
