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

// Function: sub_0030F910
// Address: 0x30f910 - 0x30fa10
void sub_0030F910_0x30f910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F910_0x30f910");
#endif

    switch (ctx->pc) {
        case 0x30f940u: goto label_30f940;
        case 0x30f950u: goto label_30f950;
        case 0x30f95cu: goto label_30f95c;
        case 0x30f978u: goto label_30f978;
        case 0x30f9d4u: goto label_30f9d4;
        case 0x30f9e4u: goto label_30f9e4;
        case 0x30f9f4u: goto label_30f9f4;
        default: break;
    }

    ctx->pc = 0x30f910u;

    // 0x30f910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x30f910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x30f914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x30f914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x30f918: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30f918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30f91c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x30f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x30f920: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30f920u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f924: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30f924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30f928: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30f928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f92c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30f92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f930: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30f930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f934: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30f938: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F938u;
    SET_GPR_U32(ctx, 31, 0x30F940u);
    ctx->pc = 0x30F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F938u;
    // 0x30f93c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F938u, 0x30F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F940u;
label_30f940:
    // 0x30f940: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x30f940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30f944: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x30f944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f948: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F948u;
    SET_GPR_U32(ctx, 31, 0x30F950u);
    ctx->pc = 0x30F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F948u;
    // 0x30f94c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F948u, 0x30F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F950u;
label_30f950:
    // 0x30f950: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x30f950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30f954: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F954u;
    SET_GPR_U32(ctx, 31, 0x30F95Cu);
    ctx->pc = 0x30F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F954u;
    // 0x30f958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F954u, 0x30F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F95Cu;
label_30f95c:
    // 0x30f95c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30f95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30f960: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x30f960u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x30f964: 0x460ca036  c.le.s      $f20, $f12
    ctx->pc = 0x30f964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f968: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x30F968u;
    {
        const bool branch_taken_0x30f968 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F968u;
        // 0x30f96c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f968) {
            ctx->pc = 0x30F990u;
            goto label_30f990;
        }
    }
    ctx->pc = 0x30F970u;
    // 0x30f970: 0xc041468  jal         func_1051A0
    ctx->pc = 0x30F970u;
    SET_GPR_U32(ctx, 31, 0x30F978u);
    ctx->pc = 0x30F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F970u;
    // 0x30f974: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051A0u, 0x30F970u, 0x30F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F978u;
label_30f978:
    // 0x30f978: 0x0  nop
    ctx->pc = 0x30f978u;
    // NOP
    // 0x30f97c: 0x0  nop
    ctx->pc = 0x30f97cu;
    // NOP
    // 0x30f980: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x30f980u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x30f984: 0x0  nop
    ctx->pc = 0x30f984u;
    // NOP
    // 0x30f988: 0x0  nop
    ctx->pc = 0x30f988u;
    // NOP
    // 0x30f98c: 0x0  nop
    ctx->pc = 0x30f98cu;
    // NOP
label_30f990:
    // 0x30f990: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30f990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f994: 0x0  nop
    ctx->pc = 0x30f994u;
    // NOP
    // 0x30f998: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x30f998u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f99c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x30F99Cu;
    {
        const bool branch_taken_0x30f99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f99c) {
            ctx->pc = 0x30F9A8u;
            goto label_30f9a8;
        }
    }
    ctx->pc = 0x30F9A4u;
    // 0x30f9a4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f9a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_30f9a8:
    // 0x30f9a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30f9ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30f9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f9b0: 0x0  nop
    ctx->pc = 0x30f9b0u;
    // NOP
    // 0x30f9b4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x30f9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f9b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x30F9B8u;
    {
        const bool branch_taken_0x30f9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30f9b8) {
            ctx->pc = 0x30F9C8u;
            goto label_30f9c8;
        }
    }
    ctx->pc = 0x30F9C0u;
    // 0x30f9c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x30f9c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x30f9c4: 0x0  nop
    ctx->pc = 0x30f9c4u;
    // NOP
label_30f9c8:
    // 0x30f9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9cc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x30F9CCu;
    SET_GPR_U32(ctx, 31, 0x30F9D4u);
    ctx->pc = 0x30F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9CCu;
    // 0x30f9d0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x30F9CCu, 0x30F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9D4u;
label_30f9d4:
    // 0x30f9d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30f9d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30f9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9dc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x30F9DCu;
    SET_GPR_U32(ctx, 31, 0x30F9E4u);
    ctx->pc = 0x30F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9DCu;
    // 0x30f9e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x30F9DCu, 0x30F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9E4u;
label_30f9e4:
    // 0x30f9e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30f9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9ec: 0xc0414d0  jal         func_105340
    ctx->pc = 0x30F9ECu;
    SET_GPR_U32(ctx, 31, 0x30F9F4u);
    ctx->pc = 0x30F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9ECu;
    // 0x30f9f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x30F9ECu, 0x30F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9F4u;
label_30f9f4:
    // 0x30f9f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x30f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f9f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30f9fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30f9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30fa00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30fa00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30fa04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30fa04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fa08: 0x3e00008  jr          $ra
    ctx->pc = 0x30FA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA08u;
        // 0x30fa0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FA10u;
}
