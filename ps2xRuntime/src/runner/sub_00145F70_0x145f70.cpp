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

// Function: sub_00145F70
// Address: 0x145f70 - 0x146160
void sub_00145F70_0x145f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F70_0x145f70");
#endif

    switch (ctx->pc) {
        case 0x145fecu: goto label_145fec;
        case 0x145ffcu: goto label_145ffc;
        case 0x14600cu: goto label_14600c;
        case 0x14601cu: goto label_14601c;
        case 0x146028u: goto label_146028;
        case 0x146058u: goto label_146058;
        case 0x146134u: goto label_146134;
        case 0x146140u: goto label_146140;
        default: break;
    }

    ctx->pc = 0x145f70u;

    // 0x145f70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x145f74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145f80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x145f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x145f88: 0x8c820330  lw          $v0, 0x330($a0)
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x145f8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145F8Cu;
    {
        const bool branch_taken_0x145f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F8Cu;
        // 0x145f90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f8c) {
            ctx->pc = 0x145FA0u;
            goto label_145fa0;
        }
    }
    ctx->pc = 0x145F94u;
    // 0x145f94: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x145F94u;
    {
        const bool branch_taken_0x145f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F94u;
        // 0x145f98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f94) {
            ctx->pc = 0x146148u;
            goto label_146148;
        }
    }
    ctx->pc = 0x145F9Cu;
    // 0x145f9c: 0x0  nop
    ctx->pc = 0x145f9cu;
    // NOP
label_145fa0:
    // 0x145fa0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x145FA0u;
    {
        const bool branch_taken_0x145fa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x145FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FA0u;
        // 0x145fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fa0) {
            ctx->pc = 0x145FB0u;
            goto label_145fb0;
        }
    }
    ctx->pc = 0x145FA8u;
    // 0x145fa8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x145FA8u;
    {
        const bool branch_taken_0x145fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145fa8) {
            ctx->pc = 0x146148u;
            goto label_146148;
        }
    }
    ctx->pc = 0x145FB0u;
label_145fb0:
    // 0x145fb0: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x145fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x145fb4: 0xc4226cb0  lwc1        $f2, 0x6CB0($at)
    ctx->pc = 0x145fb4u;
    { uint32_t bits = FAST_READ32(0x696CB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x145fb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145fbc: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x145fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x145fc0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x145fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fc8: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x145fcc: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x145fd0: 0xc4216cb4  lwc1        $f1, 0x6CB4($at)
    ctx->pc = 0x145fd0u;
    { uint32_t bits = FAST_READ32(0x696CB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145fd4: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x145fd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x145fd8: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x145fdc: 0xc4206cb8  lwc1        $f0, 0x6CB8($at)
    ctx->pc = 0x145fdcu;
    { uint32_t bits = FAST_READ32(0x696CB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145fe0: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x145fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x145fe4: 0xc049590  jal         func_125640
    ctx->pc = 0x145FE4u;
    SET_GPR_U32(ctx, 31, 0x145FECu);
    ctx->pc = 0x145FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FE4u;
    // 0x145fe8: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x145FE4u, 0x145FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FECu;
label_145fec:
    // 0x145fec: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x145ff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ff4: 0xc049590  jal         func_125640
    ctx->pc = 0x145FF4u;
    SET_GPR_U32(ctx, 31, 0x145FFCu);
    ctx->pc = 0x145FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145FF4u;
    // 0x145ff8: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x145FF4u, 0x145FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FFCu;
label_145ffc:
    // 0x145ffc: 0x26440088  addiu       $a0, $s2, 0x88
    ctx->pc = 0x145ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x146000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146004: 0xc049590  jal         func_125640
    ctx->pc = 0x146004u;
    SET_GPR_U32(ctx, 31, 0x14600Cu);
    ctx->pc = 0x146008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146004u;
    // 0x146008: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x146004u, 0x14600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14600Cu;
label_14600c:
    // 0x14600c: 0x264400bc  addiu       $a0, $s2, 0xBC
    ctx->pc = 0x14600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
    // 0x146010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146014: 0xc049590  jal         func_125640
    ctx->pc = 0x146014u;
    SET_GPR_U32(ctx, 31, 0x14601Cu);
    ctx->pc = 0x146018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146014u;
    // 0x146018: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x146014u, 0x14601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14601Cu;
label_14601c:
    // 0x14601c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14601cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146020: 0xc0519f4  jal         func_1467D0
    ctx->pc = 0x146020u;
    SET_GPR_U32(ctx, 31, 0x146028u);
    ctx->pc = 0x146024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146020u;
    // 0x146024: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1467D0u, 0x146020u, 0x146028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146028u;
label_146028:
    // 0x146028: 0xa2400357  sb          $zero, 0x357($s2)
    ctx->pc = 0x146028u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 855), (uint8_t)GPR_U32(ctx, 0));
    // 0x14602c: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x146030: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x146030u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x146034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146038: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14603c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x146040: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x146040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x146044: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x146044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x146048: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x146048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14604c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146050: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x146050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x146054: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x146054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_146058:
    // 0x146058: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x146058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14605c: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14605Cu;
    {
        const bool branch_taken_0x14605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x14605c) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x146064u;
    // 0x146064: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x146064u;
    {
        const bool branch_taken_0x146064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x146064) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x14606Cu;
    // 0x14606c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14606Cu;
    {
        const bool branch_taken_0x14606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14606c) {
            ctx->pc = 0x1460F0u;
            goto label_1460f0;
        }
    }
    ctx->pc = 0x146074u;
    // 0x146074: 0x0  nop
    ctx->pc = 0x146074u;
    // NOP
label_146078:
    // 0x146078: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14607c: 0xc4e10024  lwc1        $f1, 0x24($a3)
    ctx->pc = 0x14607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146080: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x146080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146084: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x146084u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x146088: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x146088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x14608c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x14608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146090: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x146090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x146094: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x146094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146098: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x146098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x14609c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x14609cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1460a0: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x1460a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x1460a4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1460a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1460a8: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x1460a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1460ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1460acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1460b0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1460b0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1460b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1460b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1460b8: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1460b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1460bc: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x1460bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1460c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1460c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1460c4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1460c4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1460c8: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1460c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1460cc: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x1460ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1460d0: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x1460d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1460d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1460d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1460d8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1460d8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1460dc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1460dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1460e0: 0xc4e00024  lwc1        $f0, 0x24($a3)
    ctx->pc = 0x1460e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1460e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1460E4u;
    {
        const bool branch_taken_0x1460e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460E4u;
        // 0x1460e8: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460e4) {
            ctx->pc = 0x146110u;
            goto label_146110;
        }
    }
    ctx->pc = 0x1460ECu;
    // 0x1460ec: 0x0  nop
    ctx->pc = 0x1460ecu;
    // NOP
label_1460f0:
    // 0x1460f0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1460f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1460f4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1460f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x1460f8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x1460f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x1460fc: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1460fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
    // 0x146100: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x146100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x146104: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x146104u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x146108: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x146108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x14610c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x14610cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_146110:
    // 0x146110: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x146110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x146114: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x146114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x146118: 0x24e70034  addiu       $a3, $a3, 0x34
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 52));
    // 0x14611c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x146120: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x146120u;
    {
        const bool branch_taken_0x146120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146120u;
        // 0x146124: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146120) {
            ctx->pc = 0x146058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146058;
        }
    }
    ctx->pc = 0x146128u;
    // 0x146128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14612c: 0xc0a8ebc  jal         func_2A3AF0
    ctx->pc = 0x14612Cu;
    SET_GPR_U32(ctx, 31, 0x146134u);
    ctx->pc = 0x146130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14612Cu;
    // 0x146130: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3AF0u, 0x14612Cu, 0x146134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146134u;
label_146134:
    // 0x146134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146138: 0xc0a8ecc  jal         func_2A3B30
    ctx->pc = 0x146138u;
    SET_GPR_U32(ctx, 31, 0x146140u);
    ctx->pc = 0x14613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146138u;
    // 0x14613c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3B30u, 0x146138u, 0x146140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146140u;
label_146140:
    // 0x146140: 0xa2500357  sb          $s0, 0x357($s2)
    ctx->pc = 0x146140u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 855), (uint8_t)GPR_U32(ctx, 16));
    // 0x146144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x146144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146148:
    // 0x146148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14614c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14614cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146158: 0x3e00008  jr          $ra
    ctx->pc = 0x146158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146158u;
        // 0x14615c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146160u;
}
