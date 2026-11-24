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

// Function: sub_001D8FB0
// Address: 0x1d8fb0 - 0x1d9184
void sub_001D8FB0_0x1d8fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8FB0_0x1d8fb0");
#endif

    switch (ctx->pc) {
        case 0x1d8fecu: goto label_1d8fec;
        case 0x1d9058u: goto label_1d9058;
        case 0x1d9068u: goto label_1d9068;
        case 0x1d9074u: goto label_1d9074;
        case 0x1d90ecu: goto label_1d90ec;
        case 0x1d90fcu: goto label_1d90fc;
        case 0x1d9108u: goto label_1d9108;
        default: break;
    }

    ctx->pc = 0x1d8fb0u;

    // 0x1d8fb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d8fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d8fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8fbc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d8fbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8fc4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1d8fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1d8fc8: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x1d8fc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d8fcc: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1d8fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d8fd0: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1d8fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d8fd4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1d8fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1d8fd8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x1d8fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1d8fdc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1d8fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1d8fe0: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1d8fe0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1d8fe4: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1D8FE4u;
    SET_GPR_U32(ctx, 31, 0x1D8FECu);
    ctx->pc = 0x1D8FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8FE4u;
    // 0x1d8fe8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1D8FE4u, 0x1D8FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8FECu;
label_1d8fec:
    // 0x1d8fec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d8ff0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d8ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d8ff4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8ff8: 0x0  nop
    ctx->pc = 0x1d8ff8u;
    // NOP
    // 0x1d8ffc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d8ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9000: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9000u;
    {
        const bool branch_taken_0x1d9000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9000u;
        // 0x1d9004: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9000) {
            ctx->pc = 0x1D901Cu;
            goto label_1d901c;
        }
    }
    ctx->pc = 0x1D9008u;
    // 0x1d9008: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d9008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d900c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d9010: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9014: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D9014u;
    {
        const bool branch_taken_0x1d9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9014u;
        // 0x1d9018: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9014) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D901Cu;
label_1d901c:
    // 0x1d901c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d901cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d9020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d9020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d9024: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9028: 0x0  nop
    ctx->pc = 0x1d9028u;
    // NOP
    // 0x1d902c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d902cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9030: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9030u;
    {
        const bool branch_taken_0x1d9030 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9030u;
        // 0x1d9034: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9030) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9038u;
    // 0x1d9038: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d9038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d903c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d903cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9040: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9040u;
    {
        const bool branch_taken_0x1d9040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9040u;
        // 0x1d9044: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9040) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9048u;
label_1d9048:
    // 0x1d9048: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1d9048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1d904c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d9050: 0xc076764  jal         func_1D9D90
    ctx->pc = 0x1D9050u;
    SET_GPR_U32(ctx, 31, 0x1D9058u);
    ctx->pc = 0x1D9054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9050u;
    // 0x1d9054: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D90u, 0x1D9050u, 0x1D9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9058u;
label_1d9058:
    // 0x1d9058: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d9058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d905c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d9060: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D9060u;
    SET_GPR_U32(ctx, 31, 0x1D9068u);
    ctx->pc = 0x1D9064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9060u;
    // 0x1d9064: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D9060u, 0x1D9068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9068u;
label_1d9068:
    // 0x1d9068: 0xc7ad0020  lwc1        $f13, 0x20($sp)
    ctx->pc = 0x1d9068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d906c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1D906Cu;
    SET_GPR_U32(ctx, 31, 0x1D9074u);
    ctx->pc = 0x1D9070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D906Cu;
    // 0x1d9070: 0xc7ac0028  lwc1        $f12, 0x28($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1D906Cu, 0x1D9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9074u;
label_1d9074:
    // 0x1d9074: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1d9078: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d9078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d907c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d907cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d9080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d9080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d9084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d9084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d9088: 0x0  nop
    ctx->pc = 0x1d9088u;
    // NOP
    // 0x1d908c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d908cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d9090: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d9090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9094: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9094u;
    {
        const bool branch_taken_0x1d9094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D9098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9094u;
        // 0x1d9098: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9094) {
            ctx->pc = 0x1D90B0u;
            goto label_1d90b0;
        }
    }
    ctx->pc = 0x1D909Cu;
    // 0x1d909c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d90a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d90a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d90a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d90a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d90a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D90A8u;
    {
        const bool branch_taken_0x1d90a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90A8u;
        // 0x1d90ac: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90a8) {
            ctx->pc = 0x1D90DCu;
            goto label_1d90dc;
        }
    }
    ctx->pc = 0x1D90B0u;
label_1d90b0:
    // 0x1d90b0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d90b4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d90b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d90b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d90b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d90bc: 0x0  nop
    ctx->pc = 0x1d90bcu;
    // NOP
    // 0x1d90c0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d90c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d90c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D90C4u;
    {
        const bool branch_taken_0x1d90c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90C4u;
        // 0x1d90c8: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90c4) {
            ctx->pc = 0x1D90DCu;
            goto label_1d90dc;
        }
    }
    ctx->pc = 0x1D90CCu;
    // 0x1d90cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d90ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d90d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d90d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d90d4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D90D4u;
    {
        const bool branch_taken_0x1d90d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D90D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D90D4u;
        // 0x1d90d8: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d90d4) {
            ctx->pc = 0x1D90DCu;
            goto label_1d90dc;
        }
    }
    ctx->pc = 0x1D90DCu;
label_1d90dc:
    // 0x1d90dc: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x1d90dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d90e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1d90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d90e4: 0xc076740  jal         func_1D9D00
    ctx->pc = 0x1D90E4u;
    SET_GPR_U32(ctx, 31, 0x1D90ECu);
    ctx->pc = 0x1D90E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90E4u;
    // 0x1d90e8: 0x46001307  neg.s       $f12, $f2 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D00u, 0x1D90E4u, 0x1D90ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90ECu;
label_1d90ec:
    // 0x1d90ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1d90ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d90f0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d90f4: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x1D90F4u;
    SET_GPR_U32(ctx, 31, 0x1D90FCu);
    ctx->pc = 0x1D90F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90F4u;
    // 0x1d90f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x1D90F4u, 0x1D90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90FCu;
label_1d90fc:
    // 0x1d90fc: 0xc7ad0048  lwc1        $f13, 0x48($sp)
    ctx->pc = 0x1d90fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9100: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x1D9100u;
    SET_GPR_U32(ctx, 31, 0x1D9108u);
    ctx->pc = 0x1D9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9100u;
    // 0x1d9104: 0xc7ac0044  lwc1        $f12, 0x44($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x1D9100u, 0x1D9108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9108u;
label_1d9108:
    // 0x1d9108: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1d9108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1d910c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1d910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1d9110: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1d9110u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d9114: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d9114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d9118: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d9118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d911c: 0x0  nop
    ctx->pc = 0x1d911cu;
    // NOP
    // 0x1d9120: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1d9120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d9124: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d9124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9128: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9128u;
    {
        const bool branch_taken_0x1d9128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9128u;
        // 0x1d912c: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9128) {
            ctx->pc = 0x1D9144u;
            goto label_1d9144;
        }
    }
    ctx->pc = 0x1D9130u;
    // 0x1d9130: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1d9130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1d9134: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d9134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d9138: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d913c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D913Cu;
    {
        const bool branch_taken_0x1d913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D913Cu;
        // 0x1d9140: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d913c) {
            ctx->pc = 0x1D9170u;
            goto label_1d9170;
        }
    }
    ctx->pc = 0x1D9144u;
label_1d9144:
    // 0x1d9144: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1d9148: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d9148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d914c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d914cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9150: 0x0  nop
    ctx->pc = 0x1d9150u;
    // NOP
    // 0x1d9154: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d9154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9158: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9158u;
    {
        const bool branch_taken_0x1d9158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9158u;
        // 0x1d915c: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9158) {
            ctx->pc = 0x1D9170u;
            goto label_1d9170;
        }
    }
    ctx->pc = 0x1D9160u;
    // 0x1d9160: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1d9160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1d9164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d9164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9168: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9168u;
    {
        const bool branch_taken_0x1d9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9168u;
        // 0x1d916c: 0x46020080  add.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9168) {
            ctx->pc = 0x1D9170u;
            goto label_1d9170;
        }
    }
    ctx->pc = 0x1D9170u;
label_1d9170:
    // 0x1d9170: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1d9170u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1d9174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9178: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d917c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D917Cu;
        // 0x1d9180: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9184u;
}
