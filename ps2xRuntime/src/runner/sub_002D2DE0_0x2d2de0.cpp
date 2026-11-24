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

// Function: sub_002D2DE0
// Address: 0x2d2de0 - 0x2d3094
void sub_002D2DE0_0x2d2de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2DE0_0x2d2de0");
#endif

    switch (ctx->pc) {
        case 0x2d2e14u: goto label_2d2e14;
        case 0x2d2ed4u: goto label_2d2ed4;
        case 0x2d2ee0u: goto label_2d2ee0;
        case 0x2d3028u: goto label_2d3028;
        case 0x2d3038u: goto label_2d3038;
        default: break;
    }

    ctx->pc = 0x2d2de0u;

    // 0x2d2de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d2de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d2de8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d2de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d2dec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2d2decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d2df0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d2df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d2df4: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2d2df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d2df8: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x2D2DF8u;
    {
        const bool branch_taken_0x2d2df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2DF8u;
        // 0x2d2dfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2df8) {
            ctx->pc = 0x2D3080u;
            goto label_2d3080;
        }
    }
    ctx->pc = 0x2D2E00u;
    // 0x2d2e00: 0x30a31000  andi        $v1, $a1, 0x1000
    ctx->pc = 0x2d2e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x2d2e04: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x2D2E04u;
    {
        const bool branch_taken_0x2d2e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e04) {
            ctx->pc = 0x2D3080u;
            goto label_2d3080;
        }
    }
    ctx->pc = 0x2D2E0Cu;
    // 0x2d2e0c: 0xc0b4434  jal         func_2D10D0
    ctx->pc = 0x2D2E0Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E14u);
    ctx->pc = 0x2D10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D10D0u, 0x2D2E0Cu, 0x2D2E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E14u;
label_2d2e14:
    // 0x2d2e14: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2d2e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2d2e18: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2d2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2d2e1c: 0x8c24cec0  lw          $a0, -0x3140($at)
    ctx->pc = 0x2d2e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x81CEC0u));
    // 0x2d2e20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d2e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d2e24: 0x14600020  bnez        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D2E24u;
    {
        const bool branch_taken_0x2d2e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e24) {
            ctx->pc = 0x2D2EA8u;
            goto label_2d2ea8;
        }
    }
    ctx->pc = 0x2D2E2Cu;
    // 0x2d2e2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D2E2Cu;
    {
        const bool branch_taken_0x2d2e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e2c) {
            ctx->pc = 0x2D2EA8u;
            goto label_2d2ea8;
        }
    }
    ctx->pc = 0x2D2E34u;
    // 0x2d2e34: 0x8c4306ac  lw          $v1, 0x6AC($v0)
    ctx->pc = 0x2d2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x2d2e38: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2d2e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2d2e3c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2E3Cu;
    {
        const bool branch_taken_0x2d2e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e3c) {
            ctx->pc = 0x2D2EA8u;
            goto label_2d2ea8;
        }
    }
    ctx->pc = 0x2D2E44u;
    // 0x2d2e44: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d2e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2e48: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2d2e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2d2e4c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2d2e4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d2e50: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x2d2e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x2d2e54: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x2d2e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x2d2e58: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2d2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x2d2e5c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d2e5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d2e60: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2d2e60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2e68: 0x0  nop
    ctx->pc = 0x2d2e68u;
    // NOP
    // 0x2d2e6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d2e6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d2e70: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d2e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2e74: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2E74u;
    {
        const bool branch_taken_0x2d2e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2e74) {
            ctx->pc = 0x2D2E8Cu;
            goto label_2d2e8c;
        }
    }
    ctx->pc = 0x2D2E7Cu;
    // 0x2d2e7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2e7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2e80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d2e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d2e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2E84u;
    {
        const bool branch_taken_0x2d2e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E84u;
        // 0x2d2e88: 0xa6040208  sh          $a0, 0x208($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e84) {
            ctx->pc = 0x2D2EA8u;
            goto label_2d2ea8;
        }
    }
    ctx->pc = 0x2D2E8Cu;
label_2d2e8c:
    // 0x2d2e8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d2e8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2e90: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2e94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2e98: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d2e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d2e9c: 0x0  nop
    ctx->pc = 0x2d2e9cu;
    // NOP
    // 0x2d2ea0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d2ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2d2ea4: 0xa6040208  sh          $a0, 0x208($s0)
    ctx->pc = 0x2d2ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 4));
label_2d2ea8:
    // 0x2d2ea8: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x2d2ea8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2d2eac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2EACu;
    {
        const bool branch_taken_0x2d2eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2eac) {
            ctx->pc = 0x2D2EC0u;
            goto label_2d2ec0;
        }
    }
    ctx->pc = 0x2D2EB4u;
    // 0x2d2eb4: 0xa6000208  sh          $zero, 0x208($s0)
    ctx->pc = 0x2d2eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d2eb8: 0xa600020a  sh          $zero, 0x20A($s0)
    ctx->pc = 0x2d2eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d2ebc: 0xa600020c  sh          $zero, 0x20C($s0)
    ctx->pc = 0x2d2ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 0));
label_2d2ec0:
    // 0x2d2ec0: 0x96030208  lhu         $v1, 0x208($s0)
    ctx->pc = 0x2d2ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2d2ec4: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x2D2EC4u;
    {
        const bool branch_taken_0x2d2ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2ec4) {
            ctx->pc = 0x2D3070u;
            goto label_2d3070;
        }
    }
    ctx->pc = 0x2D2ECCu;
    // 0x2d2ecc: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x2D2ECCu;
    SET_GPR_U32(ctx, 31, 0x2D2ED4u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x2D2ECCu, 0x2D2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2ED4u;
label_2d2ed4:
    // 0x2d2ed4: 0x24050555  addiu       $a1, $zero, 0x555
    ctx->pc = 0x2d2ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x2d2ed8: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x2D2ED8u;
    SET_GPR_U32(ctx, 31, 0x2D2EE0u);
    ctx->pc = 0x2D2EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2ED8u;
    // 0x2d2edc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x2D2ED8u, 0x2D2EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2EE0u;
label_2d2ee0:
    // 0x2d2ee0: 0x64430555  daddiu      $v1, $v0, 0x555
    ctx->pc = 0x2d2ee0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1365);
    // 0x2d2ee4: 0x8602020e  lh          $v0, 0x20E($s0)
    ctx->pc = 0x2d2ee4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 526)));
    // 0x2d2ee8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2d2ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d2eec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d2eecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d2ef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d2ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d2ef4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x2d2ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2d2ef8: 0xa602020e  sh          $v0, 0x20E($s0)
    ctx->pc = 0x2d2ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 526), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d2efc: 0x96020208  lhu         $v0, 0x208($s0)
    ctx->pc = 0x2d2efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2d2f00: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2F00u;
    {
        const bool branch_taken_0x2d2f00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2D2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F00u;
        // 0x2d2f04: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f00) {
            ctx->pc = 0x2D2F14u;
            goto label_2d2f14;
        }
    }
    ctx->pc = 0x2D2F08u;
    // 0x2d2f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2f0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2F0Cu;
    {
        const bool branch_taken_0x2d2f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F0Cu;
        // 0x2d2f10: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f0c) {
            ctx->pc = 0x2D2F2Cu;
            goto label_2d2f2c;
        }
    }
    ctx->pc = 0x2D2F14u;
label_2d2f14:
    // 0x2d2f14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d2f18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d2f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d2f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2f20: 0x0  nop
    ctx->pc = 0x2d2f20u;
    // NOP
    // 0x2d2f24: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x2d2f24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d2f28: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x2d2f28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_2d2f2c:
    // 0x2d2f2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2d2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2f30: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2d2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2d2f34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2d2f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d2f38: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2d2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2d2f3c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2d2f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2d2f40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2d2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2d2f44: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2d2f44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2d2f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d2f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d2f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2f50: 0x0  nop
    ctx->pc = 0x2d2f50u;
    // NOP
    // 0x2d2f54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d2f54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d2f58: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d2f58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2f5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2F5Cu;
    {
        const bool branch_taken_0x2d2f5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d2f5c) {
            ctx->pc = 0x2D2F74u;
            goto label_2d2f74;
        }
    }
    ctx->pc = 0x2D2F64u;
    // 0x2d2f64: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2f64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2f68: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d2f68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d2f6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2F6Cu;
    {
        const bool branch_taken_0x2d2f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2f6c) {
            ctx->pc = 0x2D2F8Cu;
            goto label_2d2f8c;
        }
    }
    ctx->pc = 0x2D2F74u;
label_2d2f74:
    // 0x2d2f74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d2f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2f78: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d2f7c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d2f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2d2f80: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2d2f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2d2f84: 0x0  nop
    ctx->pc = 0x2d2f84u;
    // NOP
    // 0x2d2f88: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d2f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2d2f8c:
    // 0x2d2f8c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D2F8Cu;
    {
        const bool branch_taken_0x2d2f8c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2D2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F8Cu;
        // 0x2d2f90: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f8c) {
            ctx->pc = 0x2D2FA0u;
            goto label_2d2fa0;
        }
    }
    ctx->pc = 0x2D2F94u;
    // 0x2d2f94: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2d2f94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2F98u;
    {
        const bool branch_taken_0x2d2f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F98u;
        // 0x2d2f9c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f98) {
            ctx->pc = 0x2D2FB8u;
            goto label_2d2fb8;
        }
    }
    ctx->pc = 0x2D2FA0u;
label_2d2fa0:
    // 0x2d2fa0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2d2fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2d2fa4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d2fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d2fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2fac: 0x0  nop
    ctx->pc = 0x2d2facu;
    // NOP
    // 0x2d2fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d2fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d2fb4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2d2fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2d2fb8:
    // 0x2d2fb8: 0x0  nop
    ctx->pc = 0x2d2fb8u;
    // NOP
    // 0x2d2fbc: 0x0  nop
    ctx->pc = 0x2d2fbcu;
    // NOP
    // 0x2d2fc0: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x2d2fc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
    // 0x2d2fc4: 0x3c0740c0  lui         $a3, 0x40C0
    ctx->pc = 0x2d2fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16576 << 16));
    // 0x2d2fc8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2d2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2d2fcc: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2d2fccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2d2fd0: 0x8605020e  lh          $a1, 0x20E($s0)
    ctx->pc = 0x2d2fd0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 526)));
    // 0x2d2fd4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2d2fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2d2fd8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x2d2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x2d2fdc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d2fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d2fe0: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x2d2fe0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2d2fe4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2d2fe4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2fe8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2d2fe8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2fec: 0x0  nop
    ctx->pc = 0x2d2fecu;
    // NOP
    // 0x2d2ff0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d2ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d2ff4: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x2d2ff4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d2ff8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2d2ff8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d2ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2d2ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3000: 0x0  nop
    ctx->pc = 0x2d3000u;
    // NOP
    // 0x2d3004: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2d3004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2d3008: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2d3008u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2d300c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d300cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d3010: 0x0  nop
    ctx->pc = 0x2d3010u;
    // NOP
    // 0x2d3014: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2d3014u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d3018: 0x0  nop
    ctx->pc = 0x2d3018u;
    // NOP
    // 0x2d301c: 0x0  nop
    ctx->pc = 0x2d301cu;
    // NOP
    // 0x2d3020: 0xc096798  jal         func_259E60
    ctx->pc = 0x2D3020u;
    SET_GPR_U32(ctx, 31, 0x2D3028u);
    ctx->pc = 0x259E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259E60u, 0x2D3020u, 0x2D3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3028u;
label_2d3028:
    // 0x2d3028: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2d3028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d302c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d302cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2d3030: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2D3030u;
    SET_GPR_U32(ctx, 31, 0x2D3038u);
    ctx->pc = 0x2D3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3030u;
    // 0x2d3034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D3030u, 0x2D3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3038u;
label_2d3038:
    // 0x2d3038: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2d3038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d303c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d303cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d3040: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d3040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3044: 0x0  nop
    ctx->pc = 0x2d3044u;
    // NOP
    // 0x2d3048: 0xa603020a  sh          $v1, 0x20A($s0)
    ctx->pc = 0x2d3048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d304c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2d304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3050: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d3054: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d3054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2d3058: 0x0  nop
    ctx->pc = 0x2d3058u;
    // NOP
    // 0x2d305c: 0xa603020c  sh          $v1, 0x20C($s0)
    ctx->pc = 0x2d305cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d3060: 0x96030208  lhu         $v1, 0x208($s0)
    ctx->pc = 0x2d3060u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x2d3064: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d3064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d3068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3068u;
    {
        const bool branch_taken_0x2d3068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3068u;
        // 0x2d306c: 0xa6030208  sh          $v1, 0x208($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 520), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3068) {
            ctx->pc = 0x2D3080u;
            goto label_2d3080;
        }
    }
    ctx->pc = 0x2D3070u;
label_2d3070:
    // 0x2d3070: 0xa600020a  sh          $zero, 0x20A($s0)
    ctx->pc = 0x2d3070u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 522), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3074: 0xa600020c  sh          $zero, 0x20C($s0)
    ctx->pc = 0x2d3074u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 524), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d3078: 0xa600020e  sh          $zero, 0x20E($s0)
    ctx->pc = 0x2d3078u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 526), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d307c: 0x0  nop
    ctx->pc = 0x2d307cu;
    // NOP
label_2d3080:
    // 0x2d3080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d3080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3084: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d3084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3088: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2d3088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d308c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D308Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D308Cu;
        // 0x2d3090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D308Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3094u;
}
