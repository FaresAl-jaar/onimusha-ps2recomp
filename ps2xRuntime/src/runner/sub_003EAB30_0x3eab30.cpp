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

// Function: sub_003EAB30
// Address: 0x3eab30 - 0x3eadf0
void sub_003EAB30_0x3eab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAB30_0x3eab30");
#endif

    switch (ctx->pc) {
        case 0x3eabbcu: goto label_3eabbc;
        case 0x3eabd0u: goto label_3eabd0;
        case 0x3eabe4u: goto label_3eabe4;
        case 0x3eabfcu: goto label_3eabfc;
        case 0x3eac04u: goto label_3eac04;
        case 0x3eac1cu: goto label_3eac1c;
        case 0x3eaca4u: goto label_3eaca4;
        case 0x3eacacu: goto label_3eacac;
        case 0x3ead40u: goto label_3ead40;
        case 0x3ead58u: goto label_3ead58;
        case 0x3eadd0u: goto label_3eadd0;
        default: break;
    }

    ctx->pc = 0x3eab30u;

    // 0x3eab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3eab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3eab34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eab38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3eab3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3eab40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eab40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eab44: 0x90840821  lbu         $a0, 0x821($a0)
    ctx->pc = 0x3eab44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3eab48: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x3EAB48u;
    {
        const bool branch_taken_0x3eab48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3EAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB48u;
        // 0x3eab4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eab48) {
            ctx->pc = 0x3EACB8u;
            goto label_3eacb8;
        }
    }
    ctx->pc = 0x3EAB50u;
    // 0x3eab50: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x3EAB50u;
    {
        const bool branch_taken_0x3eab50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3eab50) {
            ctx->pc = 0x3EAC28u;
            goto label_3eac28;
        }
    }
    ctx->pc = 0x3EAB58u;
    // 0x3eab58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EAB58u;
    {
        const bool branch_taken_0x3eab58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eab58) {
            ctx->pc = 0x3EAB68u;
            goto label_3eab68;
        }
    }
    ctx->pc = 0x3EAB60u;
    // 0x3eab60: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x3EAB60u;
    {
        const bool branch_taken_0x3eab60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eab60) {
            ctx->pc = 0x3EADE0u;
            goto label_3eade0;
        }
    }
    ctx->pc = 0x3EAB68u;
label_3eab68:
    // 0x3eab68: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3eab68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3eab6c: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x3eab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x3eab70: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3eab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3eab74: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3eab74u;
    { uint32_t bits = FAST_READ32(0x660038u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eab78: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x3eab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x3eab7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3eab7cu;
    { uint32_t bits = FAST_READ32(0x66003Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3eab80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eab84: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3eab84u;
    { uint32_t bits = FAST_READ32(0x660040u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eab88: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x3eab88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x3eab8c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x3eab8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x3eab90: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x3eab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x3eab94: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x3eab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eab98: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3eab98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3eab9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3eaba0: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x3eaba0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x3eaba4: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x3eaba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x3eaba8: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3eaba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3eabac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3eabacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3eabb0: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x3eabb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3eabb4: 0xc096e34  jal         func_25B8D0
    ctx->pc = 0x3EABB4u;
    SET_GPR_U32(ctx, 31, 0x3EABBCu);
    ctx->pc = 0x3EABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EABB4u;
    // 0x3eabb8: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B8D0u, 0x3EABB4u, 0x3EABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EABBCu;
label_3eabbc:
    // 0x3eabbc: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x3eabbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x3eabc0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eabc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3eabc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3eabc8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x3EABC8u;
    SET_GPR_U32(ctx, 31, 0x3EABD0u);
    ctx->pc = 0x3EABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EABC8u;
    // 0x3eabcc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x3EABC8u, 0x3EABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EABD0u;
label_3eabd0:
    // 0x3eabd0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eabd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eabd4: 0x26042b70  addiu       $a0, $s0, 0x2B70
    ctx->pc = 0x3eabd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11120));
    // 0x3eabd8: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3eabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3eabdc: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x3EABDCu;
    SET_GPR_U32(ctx, 31, 0x3EABE4u);
    ctx->pc = 0x3EABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EABDCu;
    // 0x3eabe0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x3EABDCu, 0x3EABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EABE4u;
label_3eabe4:
    // 0x3eabe4: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x3eabe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eabe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eabe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eabec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3eabecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eabf0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3eabf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eabf4: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3EABF4u;
    SET_GPR_U32(ctx, 31, 0x3EABFCu);
    ctx->pc = 0x3EABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EABF4u;
    // 0x3eabf8: 0xe6002b74  swc1        $f0, 0x2B74($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3EABF4u, 0x3EABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EABFCu;
label_3eabfc:
    // 0x3eabfc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EABFCu;
    SET_GPR_U32(ctx, 31, 0x3EAC04u);
    ctx->pc = 0x3EAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EABFCu;
    // 0x3eac00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EABFCu, 0x3EAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC04u;
label_3eac04:
    // 0x3eac04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3eac04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eac08: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3eac08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3eac0c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3eac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3eac10: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3eac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3eac14: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x3EAC14u;
    SET_GPR_U32(ctx, 31, 0x3EAC1Cu);
    ctx->pc = 0x3EAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC14u;
    // 0x3eac18: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x3EAC14u, 0x3EAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAC1Cu;
label_3eac1c:
    // 0x3eac1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3eac20: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3EAC20u;
    {
        const bool branch_taken_0x3eac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC20u;
        // 0x3eac24: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac20) {
            ctx->pc = 0x3EADE0u;
            goto label_3eade0;
        }
    }
    ctx->pc = 0x3EAC28u;
label_3eac28:
    // 0x3eac28: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x3eac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x3eac2c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eac30: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eac30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eac34: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3eac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eac38: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3eac38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eac3c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3eac3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eac40: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3eac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3eac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3eac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eac48: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eac48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eac4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eac4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eac50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eac50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3eac54: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EAC54u;
    {
        const bool branch_taken_0x3eac54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3eac54) {
            ctx->pc = 0x3EAC6Cu;
            goto label_3eac6c;
        }
    }
    ctx->pc = 0x3EAC5Cu;
    // 0x3eac5c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eac5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eac60: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eac60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eac64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EAC64u;
    {
        const bool branch_taken_0x3eac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC64u;
        // 0x3eac68: 0xa6032b22  sh          $v1, 0x2B22($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac64) {
            ctx->pc = 0x3EAC88u;
            goto label_3eac88;
        }
    }
    ctx->pc = 0x3EAC6Cu;
label_3eac6c:
    // 0x3eac6c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eac6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eac70: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3eac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3eac74: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eac74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eac78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3eac78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3eac7c: 0x0  nop
    ctx->pc = 0x3eac7cu;
    // NOP
    // 0x3eac80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3eac80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3eac84: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eac84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
label_3eac88:
    // 0x3eac88: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x3eac88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x3eac8c: 0x7a022b70  lq          $v0, 0x2B70($s0)
    ctx->pc = 0x3eac8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 11120)));
    // 0x3eac90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3eac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3eac94: 0x24a549e0  addiu       $a1, $a1, 0x49E0
    ctx->pc = 0x3eac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18912));
    // 0x3eac98: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3eac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3eac9c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x3EAC9Cu;
    SET_GPR_U32(ctx, 31, 0x3EACA4u);
    ctx->pc = 0x3EACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAC9Cu;
    // 0x3eaca0: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x3EAC9Cu, 0x3EACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EACA4u;
label_3eaca4:
    // 0x3eaca4: 0xc096e44  jal         func_25B910
    ctx->pc = 0x3EACA4u;
    SET_GPR_U32(ctx, 31, 0x3EACACu);
    ctx->pc = 0x3EACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EACA4u;
    // 0x3eaca8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B910u, 0x3EACA4u, 0x3EACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EACACu;
label_3eacac:
    // 0x3eacac: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3eacacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eacb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3eacb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eacb4: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x3eacb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_3eacb8:
    // 0x3eacb8: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eacb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eacbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EACBCu;
    {
        const bool branch_taken_0x3eacbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eacbc) {
            ctx->pc = 0x3EACD0u;
            goto label_3eacd0;
        }
    }
    ctx->pc = 0x3EACC4u;
    // 0x3eacc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eacc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3eacc8: 0xa6032b22  sh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eacc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11042), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eaccc: 0x0  nop
    ctx->pc = 0x3eacccu;
    // NOP
label_3eacd0:
    // 0x3eacd0: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x3eacd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x3eacd4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3eacd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3eacd8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3eacd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3eacdc: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3eacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3eace0: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3eace0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3eace4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3eace4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3eace8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3eace8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3eacec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3eacecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3eacf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3eacf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3eacf4: 0x0  nop
    ctx->pc = 0x3eacf4u;
    // NOP
    // 0x3eacf8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3eacf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3eacfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3eacfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ead00: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EAD00u;
    {
        const bool branch_taken_0x3ead00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EAD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD00u;
        // 0x3ead04: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead00) {
            ctx->pc = 0x3EAD18u;
            goto label_3ead18;
        }
    }
    ctx->pc = 0x3EAD08u;
    // 0x3ead08: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ead08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ead0c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ead0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ead10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EAD10u;
    {
        const bool branch_taken_0x3ead10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ead10) {
            ctx->pc = 0x3EAD30u;
            goto label_3ead30;
        }
    }
    ctx->pc = 0x3EAD18u;
label_3ead18:
    // 0x3ead18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3ead18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ead1c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ead1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3ead20: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ead20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ead24: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ead24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ead28: 0x0  nop
    ctx->pc = 0x3ead28u;
    // NOP
    // 0x3ead2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ead2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ead30:
    // 0x3ead30: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EAD30u;
    {
        const bool branch_taken_0x3ead30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ead30) {
            ctx->pc = 0x3EAD58u;
            goto label_3ead58;
        }
    }
    ctx->pc = 0x3EAD38u;
    // 0x3ead38: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x3EAD38u;
    SET_GPR_U32(ctx, 31, 0x3EAD40u);
    ctx->pc = 0x3EAD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD38u;
    // 0x3ead3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x3EAD38u, 0x3EAD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD40u;
label_3ead40:
    // 0x3ead40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ead40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ead44: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x3ead44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x3ead48: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3ead48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3ead4c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3ead4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3ead50: 0xc0aa1c8  jal         func_2A8720
    ctx->pc = 0x3EAD50u;
    SET_GPR_U32(ctx, 31, 0x3EAD58u);
    ctx->pc = 0x3EAD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAD50u;
    // 0x3ead54: 0x24460030  addiu       $a2, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8720u, 0x3EAD50u, 0x3EAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAD58u;
label_3ead58:
    // 0x3ead58: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x3ead58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x3ead5c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3ead5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ead60: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3ead60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3ead64: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3ead64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3ead68: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x3ead68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3ead6c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ead6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3ead70: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3ead70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3ead74: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3ead74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3ead78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ead78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ead7c: 0x0  nop
    ctx->pc = 0x3ead7cu;
    // NOP
    // 0x3ead80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ead80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ead84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ead84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ead88: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3EAD88u;
    {
        const bool branch_taken_0x3ead88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAD88u;
        // 0x3ead8c: 0x86052b22  lh          $a1, 0x2B22($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ead88) {
            ctx->pc = 0x3EADA0u;
            goto label_3eada0;
        }
    }
    ctx->pc = 0x3EAD90u;
    // 0x3ead90: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ead90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3ead94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3ead94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3ead98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3EAD98u;
    {
        const bool branch_taken_0x3ead98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ead98) {
            ctx->pc = 0x3EADB8u;
            goto label_3eadb8;
        }
    }
    ctx->pc = 0x3EADA0u;
label_3eada0:
    // 0x3eada0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3eada0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3eada4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3eada4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3eada8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3eada8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3eadac: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3eadacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3eadb0: 0x0  nop
    ctx->pc = 0x3eadb0u;
    // NOP
    // 0x3eadb4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3eadb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3eadb8:
    // 0x3eadb8: 0x14a40005  bne         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EADB8u;
    {
        const bool branch_taken_0x3eadb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x3eadb8) {
            ctx->pc = 0x3EADD0u;
            goto label_3eadd0;
        }
    }
    ctx->pc = 0x3EADC0u;
    // 0x3eadc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eadc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eadc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eadc8: 0xc0a4764  jal         func_291D90
    ctx->pc = 0x3EADC8u;
    SET_GPR_U32(ctx, 31, 0x3EADD0u);
    ctx->pc = 0x3EADCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EADC8u;
    // 0x3eadcc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D90u, 0x3EADC8u, 0x3EADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EADD0u;
label_3eadd0:
    // 0x3eadd0: 0x86032b22  lh          $v1, 0x2B22($s0)
    ctx->pc = 0x3eadd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 11042)));
    // 0x3eadd4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EADD4u;
    {
        const bool branch_taken_0x3eadd4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x3EADD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADD4u;
        // 0x3eadd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eadd4) {
            ctx->pc = 0x3EADE0u;
            goto label_3eade0;
        }
    }
    ctx->pc = 0x3EADDCu;
    // 0x3eaddc: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3eaddcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3eade0:
    // 0x3eade0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eade4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3eade4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eade8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EADE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EADE8u;
        // 0x3eadec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EADE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EADF0u;
}
