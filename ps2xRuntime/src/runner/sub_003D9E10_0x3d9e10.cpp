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

// Function: sub_003D9E10
// Address: 0x3d9e10 - 0x3d9f00
void sub_003D9E10_0x3d9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9E10_0x3d9e10");
#endif

    switch (ctx->pc) {
        case 0x3d9ea8u: goto label_3d9ea8;
        case 0x3d9eb0u: goto label_3d9eb0;
        case 0x3d9ec8u: goto label_3d9ec8;
        case 0x3d9ed8u: goto label_3d9ed8;
        default: break;
    }

    ctx->pc = 0x3d9e10u;

    // 0x3d9e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d9e20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9e24: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3d9e24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d9e28: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3D9E28u;
    {
        const bool branch_taken_0x3d9e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d9e28) {
            ctx->pc = 0x3D9EC0u;
            goto label_3d9ec0;
        }
    }
    ctx->pc = 0x3D9E30u;
    // 0x3d9e30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9E30u;
    {
        const bool branch_taken_0x3d9e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e30) {
            ctx->pc = 0x3D9E40u;
            goto label_3d9e40;
        }
    }
    ctx->pc = 0x3D9E38u;
    // 0x3d9e38: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3D9E38u;
    {
        const bool branch_taken_0x3d9e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9e38) {
            ctx->pc = 0x3D9EF0u;
            goto label_3d9ef0;
        }
    }
    ctx->pc = 0x3D9E40u;
label_3d9e40:
    // 0x3d9e40: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3d9e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3d9e44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d9e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d9e48: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3d9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3d9e4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3d9e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d9e50: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3d9e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3d9e54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3d9e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d9e58: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3d9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3d9e5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d9e5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d9e60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d9e60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d9e64: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d9e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d9e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d9e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d9e6c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9E6Cu;
    {
        const bool branch_taken_0x3d9e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d9e6c) {
            ctx->pc = 0x3D9E84u;
            goto label_3d9e84;
        }
    }
    ctx->pc = 0x3D9E74u;
    // 0x3d9e74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d9e74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d9e78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d9e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d9e7c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D9E7Cu;
    {
        const bool branch_taken_0x3d9e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E7Cu;
        // 0x3d9e80: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9e7c) {
            ctx->pc = 0x3D9EA0u;
            goto label_3d9ea0;
        }
    }
    ctx->pc = 0x3D9E84u;
label_3d9e84:
    // 0x3d9e84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d9e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d9e88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3d9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3d9e8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d9e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d9e90: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3d9e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3d9e94: 0x0  nop
    ctx->pc = 0x3d9e94u;
    // NOP
    // 0x3d9e98: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3d9e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3d9e9c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3d9e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3d9ea0:
    // 0x3d9ea0: 0xc0a6898  jal         func_29A260
    ctx->pc = 0x3D9EA0u;
    SET_GPR_U32(ctx, 31, 0x3D9EA8u);
    ctx->pc = 0x3D9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EA0u;
    // 0x3d9ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A260u, 0x3D9EA0u, 0x3D9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EA8u;
label_3d9ea8:
    // 0x3d9ea8: 0xc0f6c74  jal         func_3DB1D0
    ctx->pc = 0x3D9EA8u;
    SET_GPR_U32(ctx, 31, 0x3D9EB0u);
    ctx->pc = 0x3D9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EA8u;
    // 0x3d9eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB1D0u, 0x3D9EA8u, 0x3D9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EB0u;
label_3d9eb0:
    // 0x3d9eb0: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x3d9eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x3d9eb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3d9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d9eb8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x3d9eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d9ebc: 0x0  nop
    ctx->pc = 0x3d9ebcu;
    // NOP
label_3d9ec0:
    // 0x3d9ec0: 0xc0f6d80  jal         func_3DB600
    ctx->pc = 0x3D9EC0u;
    SET_GPR_U32(ctx, 31, 0x3D9EC8u);
    ctx->pc = 0x3D9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9EC0u;
    // 0x3d9ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB600u, 0x3D9EC0u, 0x3D9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9EC8u;
label_3d9ec8:
    // 0x3d9ec8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9EC8u;
    {
        const bool branch_taken_0x3d9ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EC8u;
        // 0x3d9ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ec8) {
            ctx->pc = 0x3D9EE0u;
            goto label_3d9ee0;
        }
    }
    ctx->pc = 0x3D9ED0u;
    // 0x3d9ed0: 0xc0f6ce4  jal         func_3DB390
    ctx->pc = 0x3D9ED0u;
    SET_GPR_U32(ctx, 31, 0x3D9ED8u);
    ctx->pc = 0x3DB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB390u, 0x3D9ED0u, 0x3D9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9ED8u;
label_3d9ed8:
    // 0x3d9ed8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3D9ED8u;
    {
        const bool branch_taken_0x3d9ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ed8) {
            ctx->pc = 0x3D9EF0u;
            goto label_3d9ef0;
        }
    }
    ctx->pc = 0x3D9EE0u;
label_3d9ee0:
    // 0x3d9ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9ee4: 0xa2032be3  sb          $v1, 0x2BE3($s0)
    ctx->pc = 0x3d9ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11235), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9ee8: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d9ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d9eec: 0x0  nop
    ctx->pc = 0x3d9eecu;
    // NOP
label_3d9ef0:
    // 0x3d9ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9EF8u;
        // 0x3d9efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9F00u;
}
