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

// Function: sub_003D6E20
// Address: 0x3d6e20 - 0x3d7078
void sub_003D6E20_0x3d6e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6E20_0x3d6e20");
#endif

    switch (ctx->pc) {
        case 0x3d6e88u: goto label_3d6e88;
        case 0x3d6e90u: goto label_3d6e90;
        case 0x3d6fa4u: goto label_3d6fa4;
        case 0x3d6fb8u: goto label_3d6fb8;
        case 0x3d6fc8u: goto label_3d6fc8;
        case 0x3d6fd8u: goto label_3d6fd8;
        case 0x3d6ff8u: goto label_3d6ff8;
        default: break;
    }

    ctx->pc = 0x3d6e20u;

    // 0x3d6e20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3d6e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3d6e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d6e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d6e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d6e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d6e2c: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3d6e2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3d6e30: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x3d6e30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d6e34: 0x1020008c  beqz        $at, . + 4 + (0x8C << 2)
    ctx->pc = 0x3D6E34u;
    {
        const bool branch_taken_0x3d6e34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E34u;
        // 0x3d6e38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e34) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D6E3Cu;
    // 0x3d6e3c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3d6e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3d6e40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3d6e44: 0x24a54620  addiu       $a1, $a1, 0x4620
    ctx->pc = 0x3d6e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17952));
    // 0x3d6e48: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3d6e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d6e4c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3d6e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6e50: 0x600008  jr          $v1
    ctx->pc = 0x3D6E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3D6E58u: goto label_3d6e58;
            case 0x3D6EC0u: goto label_3d6ec0;
            case 0x3D6EF8u: goto label_3d6ef8;
            case 0x3D6F60u: goto label_3d6f60;
            case 0x3D7050u: goto label_3d7050;
            case 0x3D7058u: goto label_3d7058;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6E50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3D6E58u;
label_3d6e58:
    // 0x3d6e58: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d6e5c: 0x2442e4e0  addiu       $v0, $v0, -0x1B20
    ctx->pc = 0x3d6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960352));
    // 0x3d6e60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d6e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6e64: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3d6e64u;
    { uint32_t bits = FAST_READ32(0x65E4E0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d6e68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d6e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3d6e6cu;
    { uint32_t bits = FAST_READ32(0x65E4E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d6e70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3d6e70u;
    { uint32_t bits = FAST_READ32(0x65E4E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d6e74: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3d6e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3d6e78: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3d6e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3d6e7c: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3d6e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3d6e80: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3D6E80u;
    SET_GPR_U32(ctx, 31, 0x3D6E88u);
    ctx->pc = 0x3D6E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E80u;
    // 0x3d6e84: 0xa2052b32  sb          $a1, 0x2B32($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11058), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3D6E80u, 0x3D6E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E88u;
label_3d6e88:
    // 0x3d6e88: 0xc0f5938  jal         func_3D64E0
    ctx->pc = 0x3D6E88u;
    SET_GPR_U32(ctx, 31, 0x3D6E90u);
    ctx->pc = 0x3D6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E88u;
    // 0x3d6e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D64E0u, 0x3D6E88u, 0x3D6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E90u;
label_3d6e90:
    // 0x3d6e90: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6e90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6e94: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3d6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3d6e98: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6e9c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6ea0: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3d6ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6ea4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6ea8: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d6ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d6eac: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6eb0: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3d6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3d6eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d6eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d6eb8: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6ebc: 0x0  nop
    ctx->pc = 0x3d6ebcu;
    // NOP
label_3d6ec0:
    // 0x3d6ec0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d6ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d6ec4: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x3D6EC4u;
    {
        const bool branch_taken_0x3d6ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EC4u;
        // 0x3d6ec8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ec4) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D6ECCu;
    // 0x3d6ecc: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x3d6eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x3d6ed0: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6ed4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d6ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d6ed8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d6ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6edc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6ee0: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d6ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d6ee4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d6ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d6ee8: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3d6ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d6eec: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d6eecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d6ef0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x3D6EF0u;
    {
        const bool branch_taken_0x3d6ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EF0u;
        // 0x3d6ef4: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ef0) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D6EF8u;
label_3d6ef8:
    // 0x3d6ef8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d6ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d6efc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d6efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d6f00: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x3d6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x3d6f04: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3d6f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d6f08: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3d6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3d6f0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3d6f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3d6f10: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x3d6f10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x3d6f14: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3d6f14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3d6f18: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3d6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3d6f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d6f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d6f20: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3d6f20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3d6f24: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3d6f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3d6f28: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3d6f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d6f2c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6F2Cu;
    {
        const bool branch_taken_0x3d6f2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d6f2c) {
            ctx->pc = 0x3D6F44u;
            goto label_3d6f44;
        }
    }
    ctx->pc = 0x3D6F34u;
    // 0x3d6f34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6f34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6f38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d6f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d6f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D6F3Cu;
    {
        const bool branch_taken_0x3d6f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F3Cu;
        // 0x3d6f40: 0xa6042b28  sh          $a0, 0x2B28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f3c) {
            ctx->pc = 0x3D6F60u;
            goto label_3d6f60;
        }
    }
    ctx->pc = 0x3D6F44u;
label_3d6f44:
    // 0x3d6f44: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3d6f44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3d6f48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d6f4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d6f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3d6f50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3d6f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3d6f54: 0x0  nop
    ctx->pc = 0x3d6f54u;
    // NOP
    // 0x3d6f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3d6f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3d6f5c: 0xa6042b28  sh          $a0, 0x2B28($s0)
    ctx->pc = 0x3d6f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 4));
label_3d6f60:
    // 0x3d6f60: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6f64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3d6f68: 0xa6032b28  sh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6f68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11048), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d6f6c: 0x86032b28  lh          $v1, 0x2B28($s0)
    ctx->pc = 0x3d6f6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11048)));
    // 0x3d6f70: 0x1c60003d  bgtz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x3D6F70u;
    {
        const bool branch_taken_0x3d6f70 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3d6f70) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D6F78u;
    // 0x3d6f78: 0x86022bac  lh          $v0, 0x2BAC($s0)
    ctx->pc = 0x3d6f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11180)));
    // 0x3d6f7c: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x3d6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x3d6f80: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6F80u;
    {
        const bool branch_taken_0x3d6f80 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3D6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F80u;
        // 0x3d6f84: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f80) {
            ctx->pc = 0x3D6F90u;
            goto label_3d6f90;
        }
    }
    ctx->pc = 0x3D6F88u;
    // 0x3d6f88: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x3d6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x3d6f8c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3d6f8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3d6f90:
    // 0x3d6f90: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x3d6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x3d6f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d6f98: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3d6f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3d6f9c: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3D6F9Cu;
    SET_GPR_U32(ctx, 31, 0x3D6FA4u);
    ctx->pc = 0x3D6FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F9Cu;
    // 0x3d6fa0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3D6F9Cu, 0x3D6FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FA4u;
label_3d6fa4:
    // 0x3d6fa4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3d6fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3d6fa8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3d6fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d6fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d6facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3d6fb0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3D6FB0u;
    SET_GPR_U32(ctx, 31, 0x3D6FB8u);
    ctx->pc = 0x3D6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FB0u;
    // 0x3d6fb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3D6FB0u, 0x3D6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FB8u;
label_3d6fb8:
    // 0x3d6fb8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d6fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d6fbc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d6fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d6fc0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3D6FC0u;
    SET_GPR_U32(ctx, 31, 0x3D6FC8u);
    ctx->pc = 0x3D6FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FC0u;
    // 0x3d6fc4: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3D6FC0u, 0x3D6FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FC8u;
label_3d6fc8:
    // 0x3d6fc8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d6fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d6fcc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x3d6fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x3d6fd0: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x3D6FD0u;
    SET_GPR_U32(ctx, 31, 0x3D6FD8u);
    ctx->pc = 0x3D6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FD0u;
    // 0x3d6fd4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x3D6FD0u, 0x3D6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FD8u;
label_3d6fd8:
    // 0x3d6fd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6FD8u;
    {
        const bool branch_taken_0x3d6fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d6fd8) {
            ctx->pc = 0x3D6FE8u;
            goto label_3d6fe8;
        }
    }
    ctx->pc = 0x3D6FE0u;
    // 0x3d6fe0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x3d6fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d6fe4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3d6fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3d6fe8:
    // 0x3d6fe8: 0x86052bac  lh          $a1, 0x2BAC($s0)
    ctx->pc = 0x3d6fe8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11180)));
    // 0x3d6fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ff0: 0xc0f5940  jal         func_3D6500
    ctx->pc = 0x3D6FF0u;
    SET_GPR_U32(ctx, 31, 0x3D6FF8u);
    ctx->pc = 0x3D6FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6FF0u;
    // 0x3d6ff4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6500u, 0x3D6FF0u, 0x3D6FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6FF8u;
label_3d6ff8:
    // 0x3d6ff8: 0x86032bac  lh          $v1, 0x2BAC($s0)
    ctx->pc = 0x3d6ff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11180)));
    // 0x3d6ffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d7000: 0xa6032bac  sh          $v1, 0x2BAC($s0)
    ctx->pc = 0x3d7000u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11180), (uint16_t)GPR_U32(ctx, 3));
    // 0x3d7004: 0x86032bac  lh          $v1, 0x2BAC($s0)
    ctx->pc = 0x3d7004u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11180)));
    // 0x3d7008: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x3d7008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3d700c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3D700Cu;
    {
        const bool branch_taken_0x3d700c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D700Cu;
        // 0x3d7010: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d700c) {
            ctx->pc = 0x3D7040u;
            goto label_3d7040;
        }
    }
    ctx->pc = 0x3D7014u;
    // 0x3d7014: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x3d7014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3d7018: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d7018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d701c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3d701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3d7020: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3d7020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d7024: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3d7024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3d7028: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3d7028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3d702c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3d702cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3d7030: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3d7030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3d7034: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3d7034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3d7038: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D7038u;
    {
        const bool branch_taken_0x3d7038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7038u;
        // 0x3d703c: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7038) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D7040u;
label_3d7040:
    // 0x3d7040: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d7044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D7044u;
    {
        const bool branch_taken_0x3d7044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7044u;
        // 0x3d7048: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7044) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D704Cu;
    // 0x3d704c: 0x0  nop
    ctx->pc = 0x3d704cu;
    // NOP
label_3d7050:
    // 0x3d7050: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d7050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3d7054: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3d7054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3d7058:
    // 0x3d7058: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3d7058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3d705c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D705Cu;
    {
        const bool branch_taken_0x3d705c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D705Cu;
        // 0x3d7060: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d705c) {
            ctx->pc = 0x3D7068u;
            goto label_3d7068;
        }
    }
    ctx->pc = 0x3D7064u;
    // 0x3d7064: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3d7064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3d7068:
    // 0x3d7068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d706c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d706cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7070: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7070u;
        // 0x3d7074: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7078u;
}
