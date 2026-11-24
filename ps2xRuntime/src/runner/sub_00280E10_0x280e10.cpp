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

// Function: sub_00280E10
// Address: 0x280e10 - 0x280ee8
void sub_00280E10_0x280e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280E10_0x280e10");
#endif

    switch (ctx->pc) {
        case 0x280e2cu: goto label_280e2c;
        case 0x280eb8u: goto label_280eb8;
        case 0x280ed4u: goto label_280ed4;
        default: break;
    }

    ctx->pc = 0x280e10u;

    // 0x280e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x280e14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x280e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x280e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280e24: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x280E24u;
    SET_GPR_U32(ctx, 31, 0x280E2Cu);
    ctx->pc = 0x280E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280E24u;
    // 0x280e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x280E24u, 0x280E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E2Cu;
label_280e2c:
    // 0x280e2c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x280e2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x280e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280e34: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x280E34u;
    {
        const bool branch_taken_0x280e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x280e34) {
            ctx->pc = 0x280EC0u;
            goto label_280ec0;
        }
    }
    ctx->pc = 0x280E3Cu;
    // 0x280e3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280E3Cu;
    {
        const bool branch_taken_0x280e3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e3c) {
            ctx->pc = 0x280E50u;
            goto label_280e50;
        }
    }
    ctx->pc = 0x280E44u;
    // 0x280e44: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x280E44u;
    {
        const bool branch_taken_0x280e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280e44) {
            ctx->pc = 0x280ED8u;
            goto label_280ed8;
        }
    }
    ctx->pc = 0x280E4Cu;
    // 0x280e4c: 0x0  nop
    ctx->pc = 0x280e4cu;
    // NOP
label_280e50:
    // 0x280e50: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x280e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x280e54: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x280e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x280e58: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x280e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x280e5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x280e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x280e60: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x280e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x280e64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x280e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x280e68: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x280e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x280e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x280e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280e70: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x280e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x280e74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x280e74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x280e78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x280e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x280e7c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x280E7Cu;
    {
        const bool branch_taken_0x280e7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x280e7c) {
            ctx->pc = 0x280E94u;
            goto label_280e94;
        }
    }
    ctx->pc = 0x280E84u;
    // 0x280e84: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280e88: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x280e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x280e8c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x280E8Cu;
    {
        const bool branch_taken_0x280e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280E8Cu;
        // 0x280e90: 0x3065ffff  andi        $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e8c) {
            ctx->pc = 0x280EB0u;
            goto label_280eb0;
        }
    }
    ctx->pc = 0x280E94u;
label_280e94:
    // 0x280e94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x280e94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x280e98: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x280e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x280e9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x280e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x280ea0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x280ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x280ea4: 0x0  nop
    ctx->pc = 0x280ea4u;
    // NOP
    // 0x280ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x280ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x280eac: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x280eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_280eb0:
    // 0x280eb0: 0xc0a6b00  jal         func_29AC00
    ctx->pc = 0x280EB0u;
    SET_GPR_U32(ctx, 31, 0x280EB8u);
    ctx->pc = 0x280EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280EB0u;
    // 0x280eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC00u, 0x280EB0u, 0x280EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280EB8u;
label_280eb8:
    // 0x280eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x280eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280ebc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x280ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_280ec0:
    // 0x280ec0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x280ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x280ec4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280EC4u;
    {
        const bool branch_taken_0x280ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EC4u;
        // 0x280ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ec4) {
            ctx->pc = 0x280ED8u;
            goto label_280ed8;
        }
    }
    ctx->pc = 0x280ECCu;
    // 0x280ecc: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x280ECCu;
    SET_GPR_U32(ctx, 31, 0x280ED4u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x280ECCu, 0x280ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280ED4u;
label_280ed4:
    // 0x280ed4: 0x0  nop
    ctx->pc = 0x280ed4u;
    // NOP
label_280ed8:
    // 0x280ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x280ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280edc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x280EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280EE0u;
        // 0x280ee4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280EE8u;
}
