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

// Function: sub_002270B8
// Address: 0x2270b8 - 0x22711c
void sub_002270B8_0x2270b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002270B8_0x2270b8");
#endif

    switch (ctx->pc) {
        case 0x2270dcu: goto label_2270dc;
        case 0x2270fcu: goto label_2270fc;
        default: break;
    }

    ctx->pc = 0x2270b8u;

    // 0x2270b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2270b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2270bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2270bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2270c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2270c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270c4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2270c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2270c8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2270c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2270cc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2270ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2270d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2270d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2270d4: 0xc089c48  jal         func_227120
    ctx->pc = 0x2270D4u;
    SET_GPR_U32(ctx, 31, 0x2270DCu);
    ctx->pc = 0x2270D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2270D4u;
    // 0x2270d8: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x227120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227120u, 0x2270D4u, 0x2270DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270DCu;
label_2270dc:
    // 0x2270dc: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2270dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2270e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2270e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2270e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2270e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270e8: 0x24c69430  addiu       $a2, $a2, -0x6BD0
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939696));
    // 0x2270ec: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2270ECu;
    {
        const bool branch_taken_0x2270ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2270F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2270ECu;
        // 0x2270f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2270ec) {
            ctx->pc = 0x2270FCu;
            goto label_2270fc;
        }
    }
    ctx->pc = 0x2270F4u;
    // 0x2270f4: 0xc0898b2  jal         func_2262C8
    ctx->pc = 0x2270F4u;
    SET_GPR_U32(ctx, 31, 0x2270FCu);
    ctx->pc = 0x2262C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262C8u, 0x2270F4u, 0x2270FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2270FCu;
label_2270fc:
    // 0x2270fc: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x2270fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x227100: 0xe615003c  swc1        $f21, 0x3C($s0)
    ctx->pc = 0x227100u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x227104: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x227108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x227108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22710c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x22710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x227110: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x227110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227114: 0x3e00008  jr          $ra
    ctx->pc = 0x227114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227114u;
        // 0x227118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22711Cu;
}
