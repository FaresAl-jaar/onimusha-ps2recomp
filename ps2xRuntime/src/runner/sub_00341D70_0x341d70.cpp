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

// Function: sub_00341D70
// Address: 0x341d70 - 0x341f38
void sub_00341D70_0x341d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341D70_0x341d70");
#endif

    switch (ctx->pc) {
        case 0x341db8u: goto label_341db8;
        case 0x341dc8u: goto label_341dc8;
        case 0x341df0u: goto label_341df0;
        case 0x341df8u: goto label_341df8;
        case 0x341e6cu: goto label_341e6c;
        case 0x341e7cu: goto label_341e7c;
        case 0x341e98u: goto label_341e98;
        case 0x341ea0u: goto label_341ea0;
        case 0x341eb4u: goto label_341eb4;
        case 0x341f20u: goto label_341f20;
        default: break;
    }

    ctx->pc = 0x341d70u;

    // 0x341d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x341d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x341d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x341d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x341d78: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x341d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341d7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341d80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x341d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341d88: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x341d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341d8c: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x341d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341d90: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x341d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341d94: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x341d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d98: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x341d98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x341d9c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x341d9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x341da0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x341da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x341da4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x341da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x341da8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x341dac: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x341db0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x341DB0u;
    SET_GPR_U32(ctx, 31, 0x341DB8u);
    ctx->pc = 0x341DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DB0u;
    // 0x341db4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x341DB0u, 0x341DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DB8u;
label_341db8:
    // 0x341db8: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x341db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x341dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x341dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341dc0: 0xc0d16b4  jal         func_345AD0
    ctx->pc = 0x341DC0u;
    SET_GPR_U32(ctx, 31, 0x341DC8u);
    ctx->pc = 0x341DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DC0u;
    // 0x341dc4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345AD0u, 0x341DC0u, 0x341DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DC8u;
label_341dc8:
    // 0x341dc8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x341dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x341dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341dd0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x341DD0u;
    {
        const bool branch_taken_0x341dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x341dd0) {
            ctx->pc = 0x341E90u;
            goto label_341e90;
        }
    }
    ctx->pc = 0x341DD8u;
    // 0x341dd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x341DD8u;
    {
        const bool branch_taken_0x341dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341dd8) {
            ctx->pc = 0x341DE8u;
            goto label_341de8;
        }
    }
    ctx->pc = 0x341DE0u;
    // 0x341de0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x341DE0u;
    {
        const bool branch_taken_0x341de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341de0) {
            ctx->pc = 0x341F20u;
            goto label_341f20;
        }
    }
    ctx->pc = 0x341DE8u;
label_341de8:
    // 0x341de8: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x341DE8u;
    SET_GPR_U32(ctx, 31, 0x341DF0u);
    ctx->pc = 0x341DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DE8u;
    // 0x341dec: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x341DE8u, 0x341DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DF0u;
label_341df0:
    // 0x341df0: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x341DF0u;
    SET_GPR_U32(ctx, 31, 0x341DF8u);
    ctx->pc = 0x341DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341DF0u;
    // 0x341df4: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x341DF0u, 0x341DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DF8u;
label_341df8:
    // 0x341df8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x341DF8u;
    {
        const bool branch_taken_0x341df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341df8) {
            ctx->pc = 0x341F20u;
            goto label_341f20;
        }
    }
    ctx->pc = 0x341E00u;
    // 0x341e00: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x341e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341e04: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x341e08: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x341e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x341e0c: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x341e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x341e10: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x341e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x341e14: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x341e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x341e18: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x341e18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x341e1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e24: 0x0  nop
    ctx->pc = 0x341e24u;
    // NOP
    // 0x341e28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341e2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341e30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x341E30u;
    {
        const bool branch_taken_0x341e30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341e30) {
            ctx->pc = 0x341E48u;
            goto label_341e48;
        }
    }
    ctx->pc = 0x341E38u;
    // 0x341e38: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341e38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341e3c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341e3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341e40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x341E40u;
    {
        const bool branch_taken_0x341e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E40u;
        // 0x341e44: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e40) {
            ctx->pc = 0x341E64u;
            goto label_341e64;
        }
    }
    ctx->pc = 0x341E48u;
label_341e48:
    // 0x341e48: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341e4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x341e50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341e54: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341e58: 0x0  nop
    ctx->pc = 0x341e58u;
    // NOP
    // 0x341e5c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x341e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x341e60: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_341e64:
    // 0x341e64: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x341E64u;
    SET_GPR_U32(ctx, 31, 0x341E6Cu);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x341E64u, 0x341E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E6Cu;
label_341e6c:
    // 0x341e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x341e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341e70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341e74: 0xc0d0590  jal         func_341640
    ctx->pc = 0x341E74u;
    SET_GPR_U32(ctx, 31, 0x341E7Cu);
    ctx->pc = 0x341E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E74u;
    // 0x341e78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x341E74u, 0x341E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E7Cu;
label_341e7c:
    // 0x341e7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x341e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x341e80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x341e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x341e84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x341E84u;
    {
        const bool branch_taken_0x341e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E84u;
        // 0x341e88: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e84) {
            ctx->pc = 0x341F20u;
            goto label_341f20;
        }
    }
    ctx->pc = 0x341E8Cu;
    // 0x341e8c: 0x0  nop
    ctx->pc = 0x341e8cu;
    // NOP
label_341e90:
    // 0x341e90: 0xc0d0b00  jal         func_342C00
    ctx->pc = 0x341E90u;
    SET_GPR_U32(ctx, 31, 0x341E98u);
    ctx->pc = 0x341E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E90u;
    // 0x341e94: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C00u, 0x341E90u, 0x341E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E98u;
label_341e98:
    // 0x341e98: 0xc0d0af4  jal         func_342BD0
    ctx->pc = 0x341E98u;
    SET_GPR_U32(ctx, 31, 0x341EA0u);
    ctx->pc = 0x341E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341E98u;
    // 0x341e9c: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BD0u, 0x341E98u, 0x341EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341EA0u;
label_341ea0:
    // 0x341ea0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x341EA0u;
    {
        const bool branch_taken_0x341ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EA0u;
        // 0x341ea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ea0) {
            ctx->pc = 0x341F20u;
            goto label_341f20;
        }
    }
    ctx->pc = 0x341EA8u;
    // 0x341ea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x341ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x341eac: 0xc0d0590  jal         func_341640
    ctx->pc = 0x341EACu;
    SET_GPR_U32(ctx, 31, 0x341EB4u);
    ctx->pc = 0x341EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341EACu;
    // 0x341eb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x341EACu, 0x341EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341EB4u;
label_341eb4:
    // 0x341eb4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x341eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x341eb8: 0x3c02424c  lui         $v0, 0x424C
    ctx->pc = 0x341eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16972 << 16));
    // 0x341ebc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x341ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x341ec0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x341ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x341ec4: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x341ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x341ec8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x341ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x341ecc: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x341eccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x341ed0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341ed0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341ed4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ed8: 0x0  nop
    ctx->pc = 0x341ed8u;
    // NOP
    // 0x341edc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x341edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x341ee0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x341ee0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341ee4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x341EE4u;
    {
        const bool branch_taken_0x341ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341ee4) {
            ctx->pc = 0x341EFCu;
            goto label_341efc;
        }
    }
    ctx->pc = 0x341EECu;
    // 0x341eec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341eecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341ef0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341ef4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x341EF4u;
    {
        const bool branch_taken_0x341ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EF4u;
        // 0x341ef8: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ef4) {
            ctx->pc = 0x341F18u;
            goto label_341f18;
        }
    }
    ctx->pc = 0x341EFCu;
label_341efc:
    // 0x341efc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341efcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341f00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x341f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x341f04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x341f08: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x341f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341f0c: 0x0  nop
    ctx->pc = 0x341f0cu;
    // NOP
    // 0x341f10: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x341f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x341f14: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x341f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_341f18:
    // 0x341f18: 0xc0d0ae8  jal         func_342BA0
    ctx->pc = 0x341F18u;
    SET_GPR_U32(ctx, 31, 0x341F20u);
    ctx->pc = 0x342BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BA0u, 0x341F18u, 0x341F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341F20u;
label_341f20:
    // 0x341f20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x341f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x341f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341f30: 0x3e00008  jr          $ra
    ctx->pc = 0x341F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F30u;
        // 0x341f34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341F38u;
}
