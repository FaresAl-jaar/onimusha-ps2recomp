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

// Function: sub_0021E150
// Address: 0x21e150 - 0x21e1d8
void sub_0021E150_0x21e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E150_0x21e150");
#endif

    switch (ctx->pc) {
        case 0x21e16cu: goto label_21e16c;
        case 0x21e174u: goto label_21e174;
        case 0x21e19cu: goto label_21e19c;
        case 0x21e1a4u: goto label_21e1a4;
        case 0x21e1b0u: goto label_21e1b0;
        default: break;
    }

    ctx->pc = 0x21e150u;

    // 0x21e150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e15c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e164: 0xc0886b8  jal         func_221AE0
    ctx->pc = 0x21E164u;
    SET_GPR_U32(ctx, 31, 0x21E16Cu);
    ctx->pc = 0x21E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E164u;
    // 0x21e168: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x221AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221AE0u, 0x21E164u, 0x21E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E16Cu;
label_21e16c:
    // 0x21e16c: 0xc0886e4  jal         func_221B90
    ctx->pc = 0x21E16Cu;
    SET_GPR_U32(ctx, 31, 0x21E174u);
    ctx->pc = 0x21E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E16Cu;
    // 0x21e170: 0xfe023788  sd          $v0, 0x3788($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 14216), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221B90u, 0x21E16Cu, 0x21E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E174u;
label_21e174:
    // 0x21e174: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x21e174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x21e178: 0xde043788  ld          $a0, 0x3788($s0)
    ctx->pc = 0x21e178u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 14216)));
    // 0x21e17c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e180: 0xde033780  ld          $v1, 0x3780($s0)
    ctx->pc = 0x21e180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 14208)));
    // 0x21e184: 0xae063798  sw          $a2, 0x3798($s0)
    ctx->pc = 0x21e184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14232), GPR_U32(ctx, 6));
    // 0x21e188: 0x83882f  dsubu       $s1, $a0, $v1
    ctx->pc = 0x21e188u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x21e18c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x21E18Cu;
    {
        const bool branch_taken_0x21e18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E18Cu;
        // 0x21e190: 0xfe023790  sd          $v0, 0x3790($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e18c) {
            ctx->pc = 0x21E1C0u;
            goto label_21e1c0;
        }
    }
    ctx->pc = 0x21E194u;
    // 0x21e194: 0xc04b098  jal         func_12C260
    ctx->pc = 0x21E194u;
    SET_GPR_U32(ctx, 31, 0x21E19Cu);
    ctx->pc = 0x21E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E194u;
    // 0x21e198: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C260u, 0x21E194u, 0x21E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E19Cu;
label_21e19c:
    // 0x21e19c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x21E19Cu;
    SET_GPR_U32(ctx, 31, 0x21E1A4u);
    ctx->pc = 0x21E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E19Cu;
    // 0x21e1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x21E19Cu, 0x21E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1A4u;
label_21e1a4:
    // 0x21e1a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1a8: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x21E1A8u;
    SET_GPR_U32(ctx, 31, 0x21E1B0u);
    ctx->pc = 0x21E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1A8u;
    // 0x21e1ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x21E1A8u, 0x21E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1B0u;
label_21e1b0:
    // 0x21e1b0: 0x0  nop
    ctx->pc = 0x21e1b0u;
    // NOP
    // 0x21e1b4: 0x0  nop
    ctx->pc = 0x21e1b4u;
    // NOP
    // 0x21e1b8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x21e1b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x21e1bc: 0xe614379c  swc1        $f20, 0x379C($s0)
    ctx->pc = 0x21e1bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 14236), bits); }
label_21e1c0:
    // 0x21e1c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e1c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e1c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e1c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e1c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e1cc: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x21e1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21e1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x21E1D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1D0u;
        // 0x21e1d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E1D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E1D8u;
}
