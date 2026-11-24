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

// Function: sub_001D9190
// Address: 0x1d9190 - 0x1d9230
void sub_001D9190_0x1d9190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9190_0x1d9190");
#endif

    switch (ctx->pc) {
        case 0x1d91bcu: goto label_1d91bc;
        case 0x1d91ccu: goto label_1d91cc;
        case 0x1d91dcu: goto label_1d91dc;
        case 0x1d91e8u: goto label_1d91e8;
        case 0x1d91f8u: goto label_1d91f8;
        case 0x1d9204u: goto label_1d9204;
        case 0x1d9214u: goto label_1d9214;
        default: break;
    }

    ctx->pc = 0x1d9190u;

    // 0x1d9190: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d9194: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d9194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d9198: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d919c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d919cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d91a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d91a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d91a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d91a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d91a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d91ac: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x1d91acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d91b0: 0xc4ad0008  lwc1        $f13, 0x8($a1)
    ctx->pc = 0x1d91b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d91b4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1D91B4u;
    SET_GPR_U32(ctx, 31, 0x1D91BCu);
    ctx->pc = 0x1D91B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91B4u;
    // 0x1d91b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1D91B4u, 0x1D91BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91BCu;
label_1d91bc:
    // 0x1d91bc: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x1d91bcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x1d91c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91c4: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x1D91C4u;
    SET_GPR_U32(ctx, 31, 0x1D91CCu);
    ctx->pc = 0x1D91C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91C4u;
    // 0x1d91c8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x1D91C4u, 0x1D91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91CCu;
label_1d91cc:
    // 0x1d91cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d91ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91d0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d91d4: 0xc07679c  jal         func_1D9E70
    ctx->pc = 0x1D91D4u;
    SET_GPR_U32(ctx, 31, 0x1D91DCu);
    ctx->pc = 0x1D91D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91D4u;
    // 0x1d91d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E70u, 0x1D91D4u, 0x1D91DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91DCu;
label_1d91dc:
    // 0x1d91dc: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x1d91dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d91e0: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1D91E0u;
    SET_GPR_U32(ctx, 31, 0x1D91E8u);
    ctx->pc = 0x1D91E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91E0u;
    // 0x1d91e4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1D91E0u, 0x1D91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91E8u;
label_1d91e8:
    // 0x1d91e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d91e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d91ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d91ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d91f0: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x1D91F0u;
    SET_GPR_U32(ctx, 31, 0x1D91F8u);
    ctx->pc = 0x1D91F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91F0u;
    // 0x1d91f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x1D91F0u, 0x1D91F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91F8u;
label_1d91f8:
    // 0x1d91f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d91f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d91fc: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x1D91FCu;
    SET_GPR_U32(ctx, 31, 0x1D9204u);
    ctx->pc = 0x1D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91FCu;
    // 0x1d9200: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x1D91FCu, 0x1D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9204u;
label_1d9204:
    // 0x1d9204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9208: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1d9208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d920c: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D920Cu;
    SET_GPR_U32(ctx, 31, 0x1D9214u);
    ctx->pc = 0x1D9210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D920Cu;
    // 0x1d9210: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D920Cu, 0x1D9214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9214u;
label_1d9214:
    // 0x1d9214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d9214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9218: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d921c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d921cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9220: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d9220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9224: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d9224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9228: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9228u;
        // 0x1d922c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9230u;
}
