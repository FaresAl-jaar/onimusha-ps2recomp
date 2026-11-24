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

// Function: sub_0025D050
// Address: 0x25d050 - 0x25d11c
void sub_0025D050_0x25d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D050_0x25d050");
#endif

    switch (ctx->pc) {
        case 0x25d090u: goto label_25d090;
        case 0x25d0a4u: goto label_25d0a4;
        case 0x25d0b8u: goto label_25d0b8;
        case 0x25d0c8u: goto label_25d0c8;
        case 0x25d0d4u: goto label_25d0d4;
        default: break;
    }

    ctx->pc = 0x25d050u;

    // 0x25d050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25d054: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x25d054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x25d058: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25d058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25d05c: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x25d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x25d060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x25d064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25d068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25d06c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d06cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d070: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x25d070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d074: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d078: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25d078u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25d07c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25d07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d080: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x25d080u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x25d084: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25d084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d088: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x25D088u;
    SET_GPR_U32(ctx, 31, 0x25D090u);
    ctx->pc = 0x25D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D088u;
    // 0x25d08c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x25D088u, 0x25D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D090u;
label_25d090:
    // 0x25d090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25d090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25d094: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25d094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25d098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d09c: 0xc0766c8  jal         func_1D9B20
    ctx->pc = 0x25D09Cu;
    SET_GPR_U32(ctx, 31, 0x25D0A4u);
    ctx->pc = 0x25D0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D09Cu;
    // 0x25d0a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B20u, 0x25D09Cu, 0x25D0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0A4u;
label_25d0a4:
    // 0x25d0a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25d0a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25d0a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x25d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25d0ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x25d0acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x25d0b0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x25D0B0u;
    SET_GPR_U32(ctx, 31, 0x25D0B8u);
    ctx->pc = 0x25D0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0B0u;
    // 0x25d0b4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x25D0B0u, 0x25D0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0B8u;
label_25d0b8:
    // 0x25d0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0c0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x25D0C0u;
    SET_GPR_U32(ctx, 31, 0x25D0C8u);
    ctx->pc = 0x25D0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0C0u;
    // 0x25d0c4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x25D0C0u, 0x25D0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0C8u;
label_25d0c8:
    // 0x25d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0cc: 0xc076664  jal         func_1D9990
    ctx->pc = 0x25D0CCu;
    SET_GPR_U32(ctx, 31, 0x25D0D4u);
    ctx->pc = 0x25D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D0CCu;
    // 0x25d0d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x25D0CCu, 0x25D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D0D4u;
label_25d0d4:
    // 0x25d0d4: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x25d0d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x25d0d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25d0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d0dc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x25D0DCu;
    {
        const bool branch_taken_0x25d0dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d0dc) {
            ctx->pc = 0x25D0F8u;
            goto label_25d0f8;
        }
    }
    ctx->pc = 0x25D0E4u;
    // 0x25d0e4: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x25d0e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25d0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25d0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D0ECu;
    {
        const bool branch_taken_0x25d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D0ECu;
        // 0x25d0f0: 0x7e230000  sq          $v1, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d0ec) {
            ctx->pc = 0x25D100u;
            goto label_25d100;
        }
    }
    ctx->pc = 0x25D0F4u;
    // 0x25d0f4: 0x0  nop
    ctx->pc = 0x25d0f4u;
    // NOP
label_25d0f8:
    // 0x25d0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25d0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d0fc: 0x0  nop
    ctx->pc = 0x25d0fcu;
    // NOP
label_25d100:
    // 0x25d100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25d100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25d104: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25d104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d108: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x25d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d10c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25d10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d110: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x25d110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d114: 0x3e00008  jr          $ra
    ctx->pc = 0x25D114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D114u;
        // 0x25d118: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D11Cu;
}
