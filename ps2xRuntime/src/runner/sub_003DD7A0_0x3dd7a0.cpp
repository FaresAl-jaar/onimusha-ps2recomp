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

// Function: sub_003DD7A0
// Address: 0x3dd7a0 - 0x3dd8dc
void sub_003DD7A0_0x3dd7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD7A0_0x3dd7a0");
#endif

    switch (ctx->pc) {
        case 0x3dd7d4u: goto label_3dd7d4;
        case 0x3dd7e0u: goto label_3dd7e0;
        case 0x3dd820u: goto label_3dd820;
        case 0x3dd82cu: goto label_3dd82c;
        case 0x3dd8acu: goto label_3dd8ac;
        case 0x3dd8bcu: goto label_3dd8bc;
        default: break;
    }

    ctx->pc = 0x3dd7a0u;

    // 0x3dd7a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3dd7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3dd7a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3dd7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3dd7a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3dd7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3dd7ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3dd7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3dd7b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3dd7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dd7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dd7b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dd7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dd7bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd7c4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3dd7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dd7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd7cc: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DD7CCu;
    SET_GPR_U32(ctx, 31, 0x3DD7D4u);
    ctx->pc = 0x3DD7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD7CCu;
    // 0x3dd7d0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DD7CCu, 0x3DD7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD7D4u;
label_3dd7d4:
    // 0x3dd7d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd7d8: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3DD7D8u;
    SET_GPR_U32(ctx, 31, 0x3DD7E0u);
    ctx->pc = 0x3DD7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD7D8u;
    // 0x3dd7dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3DD7D8u, 0x3DD7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD7E0u;
label_3dd7e0:
    // 0x3dd7e0: 0x3c033586  lui         $v1, 0x3586
    ctx->pc = 0x3dd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13702 << 16));
    // 0x3dd7e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dd7e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3dd7e8: 0x346337bd  ori         $v1, $v1, 0x37BD
    ctx->pc = 0x3dd7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14269);
    // 0x3dd7ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3dd7ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd7f0: 0x0  nop
    ctx->pc = 0x3dd7f0u;
    // NOP
    // 0x3dd7f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3dd7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd7f8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3DD7F8u;
    {
        const bool branch_taken_0x3dd7f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd7f8) {
            ctx->pc = 0x3DD810u;
            goto label_3dd810;
        }
    }
    ctx->pc = 0x3DD800u;
    // 0x3dd800: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x3dd800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3dd804: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3DD804u;
    {
        const bool branch_taken_0x3dd804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD804u;
        // 0x3dd808: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd804) {
            ctx->pc = 0x3DD8C0u;
            goto label_3dd8c0;
        }
    }
    ctx->pc = 0x3DD80Cu;
    // 0x3dd80c: 0x0  nop
    ctx->pc = 0x3dd80cu;
    // NOP
label_3dd810:
    // 0x3dd810: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3dd810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd814: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3dd814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3dd818: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3DD818u;
    SET_GPR_U32(ctx, 31, 0x3DD820u);
    ctx->pc = 0x3DD81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD818u;
    // 0x3dd81c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3DD818u, 0x3DD820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD820u;
label_3dd820:
    // 0x3dd820: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd824: 0xc041468  jal         func_1051A0
    ctx->pc = 0x3DD824u;
    SET_GPR_U32(ctx, 31, 0x3DD82Cu);
    ctx->pc = 0x3DD828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD824u;
    // 0x3dd828: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x3DD824u, 0x3DD82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD82Cu;
label_3dd82c:
    // 0x3dd82c: 0x0  nop
    ctx->pc = 0x3dd82cu;
    // NOP
    // 0x3dd830: 0x0  nop
    ctx->pc = 0x3dd830u;
    // NOP
    // 0x3dd834: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x3dd834u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3dd838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dd838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3dd83c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dd83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dd840: 0x0  nop
    ctx->pc = 0x3dd840u;
    // NOP
    // 0x3dd844: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x3dd844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd848: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD848u;
    {
        const bool branch_taken_0x3dd848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd848) {
            ctx->pc = 0x3DD858u;
            goto label_3dd858;
        }
    }
    ctx->pc = 0x3DD850u;
    // 0x3dd850: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3DD850u;
    {
        const bool branch_taken_0x3dd850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD850u;
        // 0x3dd854: 0x46006046  mov.s       $f1, $f12 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd850) {
            ctx->pc = 0x3DD858u;
            goto label_3dd858;
        }
    }
    ctx->pc = 0x3DD858u;
label_3dd858:
    // 0x3dd858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dd858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd85c: 0x0  nop
    ctx->pc = 0x3dd85cu;
    // NOP
    // 0x3dd860: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3dd860u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd864: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD864u;
    {
        const bool branch_taken_0x3dd864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd864) {
            ctx->pc = 0x3DD878u;
            goto label_3dd878;
        }
    }
    ctx->pc = 0x3DD86Cu;
    // 0x3dd86c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DD86Cu;
    {
        const bool branch_taken_0x3dd86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD86Cu;
        // 0x3dd870: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd86c) {
            ctx->pc = 0x3DD8A0u;
            goto label_3dd8a0;
        }
    }
    ctx->pc = 0x3DD874u;
    // 0x3dd874: 0x0  nop
    ctx->pc = 0x3dd874u;
    // NOP
label_3dd878:
    // 0x3dd878: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3dd878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3dd87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3dd87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd880: 0x0  nop
    ctx->pc = 0x3dd880u;
    // NOP
    // 0x3dd884: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3dd884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd888: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD888u;
    {
        const bool branch_taken_0x3dd888 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3dd888) {
            ctx->pc = 0x3DD898u;
            goto label_3dd898;
        }
    }
    ctx->pc = 0x3DD890u;
    // 0x3dd890: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD890u;
    {
        const bool branch_taken_0x3dd890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd890) {
            ctx->pc = 0x3DD8A0u;
            goto label_3dd8a0;
        }
    }
    ctx->pc = 0x3DD898u;
label_3dd898:
    // 0x3dd898: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3dd898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x3dd89c: 0x0  nop
    ctx->pc = 0x3dd89cu;
    // NOP
label_3dd8a0:
    // 0x3dd8a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3dd8a4: 0xc0414dc  jal         func_105370
    ctx->pc = 0x3DD8A4u;
    SET_GPR_U32(ctx, 31, 0x3DD8ACu);
    ctx->pc = 0x3DD8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD8A4u;
    // 0x3dd8a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x3DD8A4u, 0x3DD8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD8ACu;
label_3dd8ac:
    // 0x3dd8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dd8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd8b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dd8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd8b4: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3DD8B4u;
    SET_GPR_U32(ctx, 31, 0x3DD8BCu);
    ctx->pc = 0x3DD8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD8B4u;
    // 0x3dd8b8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3DD8B4u, 0x3DD8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD8BCu;
label_3dd8bc:
    // 0x3dd8bc: 0x0  nop
    ctx->pc = 0x3dd8bcu;
    // NOP
label_3dd8c0:
    // 0x3dd8c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3dd8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3dd8c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3dd8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3dd8c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3dd8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3dd8cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3dd8ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3dd8d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3dd8d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD8D4u;
        // 0x3dd8d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD8DCu;
}
