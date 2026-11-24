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

// Function: sub_0025BDA0
// Address: 0x25bda0 - 0x25be0c
void sub_0025BDA0_0x25bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BDA0_0x25bda0");
#endif

    switch (ctx->pc) {
        case 0x25bdc8u: goto label_25bdc8;
        case 0x25bdd4u: goto label_25bdd4;
        case 0x25bde4u: goto label_25bde4;
        case 0x25bdf4u: goto label_25bdf4;
        default: break;
    }

    ctx->pc = 0x25bda0u;

    // 0x25bda0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x25bda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x25bda4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25bda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25bda8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25bdac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25bdb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25bdb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x25bdb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25bdb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25bdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdbc: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x25bdbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x25bdc0: 0xc07671c  jal         func_1D9C70
    ctx->pc = 0x25BDC0u;
    SET_GPR_U32(ctx, 31, 0x25BDC8u);
    ctx->pc = 0x25BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDC0u;
    // 0x25bdc4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C70u, 0x25BDC0u, 0x25BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDC8u;
label_25bdc8:
    // 0x25bdc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25bdc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25bdcc: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x25BDCCu;
    SET_GPR_U32(ctx, 31, 0x25BDD4u);
    ctx->pc = 0x25BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDCCu;
    // 0x25bdd0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x25BDCCu, 0x25BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDD4u;
label_25bdd4:
    // 0x25bdd4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25bdd8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x25bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25bddc: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x25BDDCu;
    SET_GPR_U32(ctx, 31, 0x25BDE4u);
    ctx->pc = 0x25BDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDDCu;
    // 0x25bde0: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x25BDDCu, 0x25BDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDE4u;
label_25bde4:
    // 0x25bde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bde8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25bde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bdec: 0xc0767a8  jal         func_1D9EA0
    ctx->pc = 0x25BDECu;
    SET_GPR_U32(ctx, 31, 0x25BDF4u);
    ctx->pc = 0x25BDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25BDECu;
    // 0x25bdf0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9EA0u, 0x25BDECu, 0x25BDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25BDF4u;
label_25bdf4:
    // 0x25bdf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25bdf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25bdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25bdfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25bdfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25be00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25be00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25be04: 0x3e00008  jr          $ra
    ctx->pc = 0x25BE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25BE04u;
        // 0x25be08: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BE0Cu;
}
