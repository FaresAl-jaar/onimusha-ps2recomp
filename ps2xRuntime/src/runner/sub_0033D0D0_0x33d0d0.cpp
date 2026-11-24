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

// Function: sub_0033D0D0
// Address: 0x33d0d0 - 0x33d338
void sub_0033D0D0_0x33d0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D0D0_0x33d0d0");
#endif

    switch (ctx->pc) {
        case 0x33d1c4u: goto label_33d1c4;
        case 0x33d1d4u: goto label_33d1d4;
        case 0x33d2d4u: goto label_33d2d4;
        case 0x33d2ecu: goto label_33d2ec;
        case 0x33d318u: goto label_33d318;
        default: break;
    }

    ctx->pc = 0x33d0d0u;

    // 0x33d0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33d0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33d0d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33d0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33d0d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33d0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33d0dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33d0e0: 0x8c8506ac  lw          $a1, 0x6AC($a0)
    ctx->pc = 0x33d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
    // 0x33d0e4: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x33d0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x33d0e8: 0xac8506ac  sw          $a1, 0x6AC($a0)
    ctx->pc = 0x33d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 5));
    // 0x33d0ec: 0x8c8506b4  lw          $a1, 0x6B4($a0)
    ctx->pc = 0x33d0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1716)));
    // 0x33d0f0: 0x34a50040  ori         $a1, $a1, 0x40
    ctx->pc = 0x33d0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x33d0f4: 0xac8506b4  sw          $a1, 0x6B4($a0)
    ctx->pc = 0x33d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1716), GPR_U32(ctx, 5));
    // 0x33d0f8: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x33d0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x33d0fc: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x33d0fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x33d100: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x33d104: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x33d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x33d108: 0x34a50100  ori         $a1, $a1, 0x100
    ctx->pc = 0x33d108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    // 0x33d10c: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x33d110: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x33d110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x33d114: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x33d114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
    // 0x33d118: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x33d11c: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x33d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x33d120: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x33d120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x33d124: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x33d128: 0x8c850148  lw          $a1, 0x148($a0)
    ctx->pc = 0x33d128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x33d12c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x33d12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x33d130: 0xac850148  sw          $a1, 0x148($a0)
    ctx->pc = 0x33d130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 5));
    // 0x33d134: 0x90850821  lbu         $a1, 0x821($a0)
    ctx->pc = 0x33d134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x33d138: 0x10a3007b  beq         $a1, $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x33D138u;
    {
        const bool branch_taken_0x33d138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x33D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D138u;
        // 0x33d13c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d138) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D140u;
    // 0x33d140: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d144: 0x10a30042  beq         $a1, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x33D144u;
    {
        const bool branch_taken_0x33d144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x33D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D144u;
        // 0x33d148: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d144) {
            ctx->pc = 0x33D250u;
            goto label_33d250;
        }
    }
    ctx->pc = 0x33D14Cu;
    // 0x33d14c: 0x10a6001a  beq         $a1, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x33D14Cu;
    {
        const bool branch_taken_0x33d14c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x33d14c) {
            ctx->pc = 0x33D1B8u;
            goto label_33d1b8;
        }
    }
    ctx->pc = 0x33D154u;
    // 0x33d154: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D154u;
    {
        const bool branch_taken_0x33d154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d154) {
            ctx->pc = 0x33D168u;
            goto label_33d168;
        }
    }
    ctx->pc = 0x33D15Cu;
    // 0x33d15c: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x33D15Cu;
    {
        const bool branch_taken_0x33d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d15c) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D164u;
    // 0x33d164: 0x0  nop
    ctx->pc = 0x33d164u;
    // NOP
label_33d168:
    // 0x33d168: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x33d168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x33d16c: 0x24637530  addiu       $v1, $v1, 0x7530
    ctx->pc = 0x33d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30000));
    // 0x33d170: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x33d170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33d174: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x33d174u;
    { uint32_t bits = FAST_READ32(0x657530u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d178: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33d178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d17c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x33d17cu;
    { uint32_t bits = FAST_READ32(0x657534u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d180: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x33d180u;
    { uint32_t bits = FAST_READ32(0x657538u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d184: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x33d184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x33d188: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d18c: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x33d18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x33d190: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d194: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x33d194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x33d198: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d19c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d19cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d1a0: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x33d1a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x33d1a4: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x33d1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d1a8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x33d1ac: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x33D1ACu;
    {
        const bool branch_taken_0x33d1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1ACu;
        // 0x33d1b0: 0xa2060821  sb          $a2, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1ac) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D1B4u;
    // 0x33d1b4: 0x0  nop
    ctx->pc = 0x33d1b4u;
    // NOP
label_33d1b8:
    // 0x33d1b8: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x33d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
    // 0x33d1bc: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x33D1BCu;
    SET_GPR_U32(ctx, 31, 0x33D1C4u);
    ctx->pc = 0x33D1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D1BCu;
    // 0x33d1c0: 0x2406005b  addiu       $a2, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x33D1BCu, 0x33D1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1C4u;
label_33d1c4:
    // 0x33d1c4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x33D1C4u;
    {
        const bool branch_taken_0x33d1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D1C4u;
        // 0x33d1c8: 0x26040890  addiu       $a0, $s0, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d1c4) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D1CCu;
    // 0x33d1cc: 0xc0967c0  jal         func_259F00
    ctx->pc = 0x33D1CCu;
    SET_GPR_U32(ctx, 31, 0x33D1D4u);
    ctx->pc = 0x33D1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D1CCu;
    // 0x33d1d0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F00u, 0x33D1CCu, 0x33D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1D4u;
label_33d1d4:
    // 0x33d1d4: 0x3c03bf06  lui         $v1, 0xBF06
    ctx->pc = 0x33d1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48902 << 16));
    // 0x33d1d8: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x33d1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x33d1dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33d1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d1e0: 0x0  nop
    ctx->pc = 0x33d1e0u;
    // NOP
    // 0x33d1e4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33d1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d1e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x33D1E8u;
    {
        const bool branch_taken_0x33d1e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d1e8) {
            ctx->pc = 0x33D218u;
            goto label_33d218;
        }
    }
    ctx->pc = 0x33D1F0u;
    // 0x33d1f0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d1f4: 0x240300e9  addiu       $v1, $zero, 0xE9
    ctx->pc = 0x33d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    // 0x33d1f8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d1fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d200: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x33d200u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d204: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d208: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x33d208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x33d20c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d210: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33D210u;
    {
        const bool branch_taken_0x33d210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D210u;
        // 0x33d214: 0xae0307ec  sw          $v1, 0x7EC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d210) {
            ctx->pc = 0x33D240u;
            goto label_33d240;
        }
    }
    ctx->pc = 0x33D218u;
label_33d218:
    // 0x33d218: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x33d218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d21c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x33d21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x33d220: 0x240300e8  addiu       $v1, $zero, 0xE8
    ctx->pc = 0x33d220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x33d224: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x33d224u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x33d228: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33d228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d22c: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x33d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x33d230: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d234: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x33d234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x33d238: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x33d238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x33d23c: 0x0  nop
    ctx->pc = 0x33d23cu;
    // NOP
label_33d240:
    // 0x33d240: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x33d240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33d244: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x33D244u;
    {
        const bool branch_taken_0x33d244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D244u;
        // 0x33d248: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d244) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D24Cu;
    // 0x33d24c: 0x0  nop
    ctx->pc = 0x33d24cu;
    // NOP
label_33d250:
    // 0x33d250: 0x3c0342f6  lui         $v1, 0x42F6
    ctx->pc = 0x33d250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17142 << 16));
    // 0x33d254: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x33d254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d258: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x33d258u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33d25c: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x33d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x33d260: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x33d260u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x33d264: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x33d264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x33d268: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x33d268u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x33d26c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x33d26cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33d270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x33d270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d274: 0x0  nop
    ctx->pc = 0x33d274u;
    // NOP
    // 0x33d278: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x33d278u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33d27c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33d27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d280: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33D280u;
    {
        const bool branch_taken_0x33d280 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D280u;
        // 0x33d284: 0x96050824  lhu         $a1, 0x824($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d280) {
            ctx->pc = 0x33D298u;
            goto label_33d298;
        }
    }
    ctx->pc = 0x33D288u;
    // 0x33d288: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d288u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33d28c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33d28cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33d290: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33D290u;
    {
        const bool branch_taken_0x33d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d290) {
            ctx->pc = 0x33D2B0u;
            goto label_33d2b0;
        }
    }
    ctx->pc = 0x33D298u;
label_33d298:
    // 0x33d298: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33d298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33d29c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x33d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x33d2a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33d2a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33d2a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x33d2a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x33d2a8: 0x0  nop
    ctx->pc = 0x33d2a8u;
    // NOP
    // 0x33d2ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33d2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_33d2b0:
    // 0x33d2b0: 0x14a4000f  bne         $a1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x33D2B0u;
    {
        const bool branch_taken_0x33d2b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x33d2b0) {
            ctx->pc = 0x33D2F0u;
            goto label_33d2f0;
        }
    }
    ctx->pc = 0x33D2B8u;
    // 0x33d2b8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x33d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x33d2bc: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x33d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x33d2c0: 0x24427540  addiu       $v0, $v0, 0x7540
    ctx->pc = 0x33d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30016));
    // 0x33d2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d2c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33d2c8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x657540u));
    // 0x33d2cc: 0xc096fb8  jal         func_25BEE0
    ctx->pc = 0x33D2CCu;
    SET_GPR_U32(ctx, 31, 0x33D2D4u);
    ctx->pc = 0x33D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D2CCu;
    // 0x33d2d0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BEE0u, 0x33D2CCu, 0x33D2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D2D4u;
label_33d2d4:
    // 0x33d2d4: 0x920508e8  lbu         $a1, 0x8E8($s0)
    ctx->pc = 0x33d2d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2280)));
    // 0x33d2d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d2dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33d2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d2e0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x33d2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33d2e4: 0xc0a9688  jal         func_2A5A20
    ctx->pc = 0x33D2E4u;
    SET_GPR_U32(ctx, 31, 0x33D2ECu);
    ctx->pc = 0x33D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D2E4u;
    // 0x33d2e8: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A5A20u, 0x33D2E4u, 0x33D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D2ECu;
label_33d2ec:
    // 0x33d2ec: 0x0  nop
    ctx->pc = 0x33d2ecu;
    // NOP
label_33d2f0:
    // 0x33d2f0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x33d2f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x33d2f4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33D2F4u;
    {
        const bool branch_taken_0x33d2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d2f4) {
            ctx->pc = 0x33D328u;
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D2FCu;
    // 0x33d2fc: 0x8e0508c8  lw          $a1, 0x8C8($s0)
    ctx->pc = 0x33d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2248)));
    // 0x33d300: 0x18a00007  blez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33D300u;
    {
        const bool branch_taken_0x33d300 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x33d300) {
            ctx->pc = 0x33D320u;
            goto label_33d320;
        }
    }
    ctx->pc = 0x33D308u;
    // 0x33d308: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x33d308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33d30c: 0x3c040092  lui         $a0, 0x92
    ctx->pc = 0x33d30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)146 << 16));
    // 0x33d310: 0xc0e360c  jal         func_38D830
    ctx->pc = 0x33D310u;
    SET_GPR_U32(ctx, 31, 0x33D318u);
    ctx->pc = 0x33D314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D310u;
    // 0x33d314: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D830u, 0x33D310u, 0x33D318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D318u;
label_33d318:
    // 0x33d318: 0xae0008c8  sw          $zero, 0x8C8($s0)
    ctx->pc = 0x33d318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2248), GPR_U32(ctx, 0));
    // 0x33d31c: 0x0  nop
    ctx->pc = 0x33d31cu;
    // NOP
label_33d320:
    // 0x33d320: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33d320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d324: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x33d324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_33d328:
    // 0x33d328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33d328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33d32c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33d32cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d330: 0x3e00008  jr          $ra
    ctx->pc = 0x33D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D330u;
        // 0x33d334: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D338u;
}
