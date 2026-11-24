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

// Function: sub_00341C70
// Address: 0x341c70 - 0x341d6c
void sub_00341C70_0x341c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341C70_0x341c70");
#endif

    switch (ctx->pc) {
        case 0x341c8cu: goto label_341c8c;
        case 0x341c94u: goto label_341c94;
        case 0x341d00u: goto label_341d00;
        case 0x341d28u: goto label_341d28;
        default: break;
    }

    ctx->pc = 0x341c70u;

    // 0x341c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x341c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341c78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x341c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x341c7c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x341c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x341c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341c84: 0xc0d0714  jal         func_341C50
    ctx->pc = 0x341C84u;
    SET_GPR_U32(ctx, 31, 0x341C8Cu);
    ctx->pc = 0x341C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341C84u;
    // 0x341c88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C50u, 0x341C84u, 0x341C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C8Cu;
label_341c8c:
    // 0x341c8c: 0xc0d0ae4  jal         func_342B90
    ctx->pc = 0x341C8Cu;
    SET_GPR_U32(ctx, 31, 0x341C94u);
    ctx->pc = 0x341C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341C8Cu;
    // 0x341c90: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B90u, 0x341C8Cu, 0x341C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C94u;
label_341c94:
    // 0x341c94: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x341c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341c98: 0x3c024214  lui         $v0, 0x4214
    ctx->pc = 0x341c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16916 << 16));
    // 0x341c9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x341c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x341ca0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x341ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x341ca4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x341ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x341ca8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x341cac: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x341cacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x341cb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341cb8: 0x0  nop
    ctx->pc = 0x341cb8u;
    // NOP
    // 0x341cbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341cbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341cc4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x341CC4u;
    {
        const bool branch_taken_0x341cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341cc4) {
            ctx->pc = 0x341CDCu;
            goto label_341cdc;
        }
    }
    ctx->pc = 0x341CCCu;
    // 0x341ccc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341cccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341cd0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341cd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x341CD4u;
    {
        const bool branch_taken_0x341cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341CD4u;
        // 0x341cd8: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341cd4) {
            ctx->pc = 0x341CF8u;
            goto label_341cf8;
        }
    }
    ctx->pc = 0x341CDCu;
label_341cdc:
    // 0x341cdc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341cdcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341ce0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x341ce4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341ce8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341cec: 0x0  nop
    ctx->pc = 0x341cecu;
    // NOP
    // 0x341cf0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x341cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x341cf4: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x341cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_341cf8:
    // 0x341cf8: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x341CF8u;
    SET_GPR_U32(ctx, 31, 0x341D00u);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x341CF8u, 0x341D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D00u;
label_341d00:
    // 0x341d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341d04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341d08: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x341d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x341d0c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x341d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341d10: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x341d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x341d14: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x341d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x341d18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x341d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x341d1c: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x341d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x341d20: 0xc0414dc  jal         func_105370
    ctx->pc = 0x341D20u;
    SET_GPR_U32(ctx, 31, 0x341D28u);
    ctx->pc = 0x341D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341D20u;
    // 0x341d24: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x341D20u, 0x341D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D28u;
label_341d28:
    // 0x341d28: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x341d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341d2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x341d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341d30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x341d30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x341d34: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x341d34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x341d38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d3c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x341d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341d40: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x341d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341d44: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x341d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341d48: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x341d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d4c: 0xe6030010  swc1        $f3, 0x10($s0)
    ctx->pc = 0x341d4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x341d50: 0xe6020014  swc1        $f2, 0x14($s0)
    ctx->pc = 0x341d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x341d54: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x341d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x341d58: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x341d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x341d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x341d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341d64: 0x3e00008  jr          $ra
    ctx->pc = 0x341D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D64u;
        // 0x341d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341D6Cu;
}
