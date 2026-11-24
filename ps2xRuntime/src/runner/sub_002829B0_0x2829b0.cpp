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

// Function: sub_002829B0
// Address: 0x2829b0 - 0x282a50
void sub_002829B0_0x2829b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002829B0_0x2829b0");
#endif

    switch (ctx->pc) {
        case 0x282a34u: goto label_282a34;
        case 0x282a40u: goto label_282a40;
        default: break;
    }

    ctx->pc = 0x2829b0u;

    // 0x2829b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2829b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2829b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2829b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2829b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2829b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2829bc: 0x90820821  lbu         $v0, 0x821($a0)
    ctx->pc = 0x2829bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2829c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2829C0u;
    {
        const bool branch_taken_0x2829c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2829C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829C0u;
        // 0x2829c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2829c0) {
            ctx->pc = 0x282A38u;
            goto label_282a38;
        }
    }
    ctx->pc = 0x2829C8u;
    // 0x2829c8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2829c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2829cc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2829ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2829d0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2829d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2829d4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2829d8: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2829d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2829dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2829dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2829e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2829e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2829e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2829e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2829e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2829e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2829ec: 0x0  nop
    ctx->pc = 0x2829ecu;
    // NOP
    // 0x2829f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2829f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2829f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2829f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2829f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2829F8u;
    {
        const bool branch_taken_0x2829f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2829f8) {
            ctx->pc = 0x282A10u;
            goto label_282a10;
        }
    }
    ctx->pc = 0x282A00u;
    // 0x282a00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282a00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282a04: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282a04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282A08u;
    {
        const bool branch_taken_0x282a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A08u;
        // 0x282a0c: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x282a08) {
            ctx->pc = 0x282A2Cu;
            goto label_282a2c;
        }
    }
    ctx->pc = 0x282A10u;
label_282a10:
    // 0x282a10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x282a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x282a14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282a18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x282a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x282a1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x282a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x282a20: 0x0  nop
    ctx->pc = 0x282a20u;
    // NOP
    // 0x282a24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x282a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x282a28: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x282a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_282a2c:
    // 0x282a2c: 0xc0a6b14  jal         func_29AC50
    ctx->pc = 0x282A2Cu;
    SET_GPR_U32(ctx, 31, 0x282A34u);
    ctx->pc = 0x282A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A2Cu;
    // 0x282a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC50u, 0x282A2Cu, 0x282A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A34u;
label_282a34:
    // 0x282a34: 0x0  nop
    ctx->pc = 0x282a34u;
    // NOP
label_282a38:
    // 0x282a38: 0xc0a09e4  jal         func_282790
    ctx->pc = 0x282A38u;
    SET_GPR_U32(ctx, 31, 0x282A40u);
    ctx->pc = 0x282A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282A38u;
    // 0x282a3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282790u, 0x282A38u, 0x282A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282A40u;
label_282a40:
    // 0x282a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282a48: 0x3e00008  jr          $ra
    ctx->pc = 0x282A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282A48u;
        // 0x282a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282A50u;
}
