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

// Function: sub_001E1810
// Address: 0x1e1810 - 0x1e188c
void sub_001E1810_0x1e1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1810_0x1e1810");
#endif

    switch (ctx->pc) {
        case 0x1e184cu: goto label_1e184c;
        case 0x1e1858u: goto label_1e1858;
        case 0x1e186cu: goto label_1e186c;
        default: break;
    }

    ctx->pc = 0x1e1810u;

    // 0x1e1810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e1814: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1e1814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1e1818: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e1818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e181c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1e181cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e1820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e1824: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x1e1824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x1e1828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e182c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e182cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e1830: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e1834: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e1834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1838: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1e1838u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e183c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e183cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1840: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1e1840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1e1844: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E1844u;
    SET_GPR_U32(ctx, 31, 0x1E184Cu);
    ctx->pc = 0x1E1848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1844u;
    // 0x1e1848: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E1844u, 0x1E184Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E184Cu;
label_1e184c:
    // 0x1e184c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e184cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1850: 0xc07456c  jal         func_1D15B0
    ctx->pc = 0x1E1850u;
    SET_GPR_U32(ctx, 31, 0x1E1858u);
    ctx->pc = 0x1E1854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1850u;
    // 0x1e1854: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D15B0u, 0x1E1850u, 0x1E1858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1858u;
label_1e1858:
    // 0x1e1858: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1e1858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1e185c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1e185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1860: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1e1860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1e1864: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1E1864u;
    SET_GPR_U32(ctx, 31, 0x1E186Cu);
    ctx->pc = 0x1E1868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1864u;
    // 0x1e1868: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1E1864u, 0x1E186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E186Cu;
label_1e186c:
    // 0x1e186c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1e186cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1e1870: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e1870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e1874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e1874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1878: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1878u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e187c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e187cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e1880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1884: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1884u;
        // 0x1e1888: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E188Cu;
}
