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

// Function: sub_001D2860
// Address: 0x1d2860 - 0x1d291c
void sub_001D2860_0x1d2860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2860_0x1d2860");
#endif

    switch (ctx->pc) {
        case 0x1d2888u: goto label_1d2888;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28fcu: goto label_1d28fc;
        default: break;
    }

    ctx->pc = 0x1d2860u;

    // 0x1d2860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2864: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2868: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d286c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2870: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d2870u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2874: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d287c: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1d2880: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D2880u;
    SET_GPR_U32(ctx, 31, 0x1D2888u);
    ctx->pc = 0x1D2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2880u;
    // 0x1d2884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D2880u, 0x1D2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2888u;
label_1d2888:
    // 0x1d2888: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d288c: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1d2890: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d2894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2898: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1d289c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d289cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d28a0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1d28a4: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1d28a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1d28a8: 0xc074648  jal         func_1D1920
    ctx->pc = 0x1D28A8u;
    SET_GPR_U32(ctx, 31, 0x1D28B0u);
    ctx->pc = 0x1D28ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A8u;
    // 0x1d28ac: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x1D28A8u, 0x1D28B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B0u;
label_1d28b0:
    // 0x1d28b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d28b4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1d28b8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d28bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d28bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28c0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x1d28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1d28c4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1d28c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d28c8: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x1d28c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x1d28cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d28ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d28d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d28d4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1d28d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1d28d8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1d28d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1d28dc: 0xc075420  jal         func_1D5080
    ctx->pc = 0x1D28DCu;
    SET_GPR_U32(ctx, 31, 0x1D28E4u);
    ctx->pc = 0x1D28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28DCu;
    // 0x1d28e0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5080u, 0x1D28DCu, 0x1D28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28E4u;
label_1d28e4:
    // 0x1d28e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d28e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d28e8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d28e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1d28ec: 0x34450010  ori         $a1, $v0, 0x10
    ctx->pc = 0x1d28ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1d28f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1d28f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d28f4: 0xc074a48  jal         func_1D2920
    ctx->pc = 0x1D28F4u;
    SET_GPR_U32(ctx, 31, 0x1D28FCu);
    ctx->pc = 0x1D28F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28F4u;
    // 0x1d28f8: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2920u, 0x1D28F4u, 0x1D28FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28FCu;
label_1d28fc:
    // 0x1d28fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d2900: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d2904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2908: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2908u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d290c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d290cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2914: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2914u;
        // 0x1d2918: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D291Cu;
}
