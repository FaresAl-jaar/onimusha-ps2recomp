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

// Function: sub_001872B0
// Address: 0x1872b0 - 0x1873a8
void sub_001872B0_0x1872b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001872B0_0x1872b0");
#endif

    switch (ctx->pc) {
        case 0x1872e4u: goto label_1872e4;
        case 0x1872f0u: goto label_1872f0;
        case 0x18736cu: goto label_18736c;
        case 0x187394u: goto label_187394;
        default: break;
    }

    ctx->pc = 0x1872b0u;

    // 0x1872b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1872b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1872b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1872b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1872b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1872b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1872bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1872bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1872c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1872c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1872c4: 0xac800314  sw          $zero, 0x314($a0)
    ctx->pc = 0x1872c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 0));
    // 0x1872c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1872c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872cc: 0xac800318  sw          $zero, 0x318($a0)
    ctx->pc = 0x1872ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 792), GPR_U32(ctx, 0));
    // 0x1872d0: 0xac80031c  sw          $zero, 0x31C($a0)
    ctx->pc = 0x1872d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 796), GPR_U32(ctx, 0));
    // 0x1872d4: 0xac800310  sw          $zero, 0x310($a0)
    ctx->pc = 0x1872d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 784), GPR_U32(ctx, 0));
    // 0x1872d8: 0xa080030e  sb          $zero, 0x30E($a0)
    ctx->pc = 0x1872d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 782), (uint8_t)GPR_U32(ctx, 0));
    // 0x1872dc: 0xc067c80  jal         func_19F200
    ctx->pc = 0x1872DCu;
    SET_GPR_U32(ctx, 31, 0x1872E4u);
    ctx->pc = 0x1872E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872DCu;
    // 0x1872e0: 0xac800368  sw          $zero, 0x368($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F200u, 0x1872DCu, 0x1872E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872E4u;
label_1872e4:
    // 0x1872e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1872e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1872e8: 0xc063820  jal         func_18E080
    ctx->pc = 0x1872E8u;
    SET_GPR_U32(ctx, 31, 0x1872F0u);
    ctx->pc = 0x1872ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872E8u;
    // 0x1872ec: 0x240500eb  addiu       $a1, $zero, 0xEB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 235));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E080u, 0x1872E8u, 0x1872F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872F0u;
label_1872f0:
    // 0x1872f0: 0x9203030d  lbu         $v1, 0x30D($s0)
    ctx->pc = 0x1872f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 781)));
    // 0x1872f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1872F4u;
    {
        const bool branch_taken_0x1872f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1872F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1872F4u;
        // 0x1872f8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1872f4) {
            ctx->pc = 0x187318u;
            goto label_187318;
        }
    }
    ctx->pc = 0x1872FCu;
    // 0x1872fc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x1872fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x187300: 0xa024d350  sb          $a0, -0x2CB0($at)
    ctx->pc = 0x187300u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x40D350u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x40D350u, _value); } while (0);
    // 0x187304: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x187304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x187308: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x18730c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18730Cu;
    {
        const bool branch_taken_0x18730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x187310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18730Cu;
        // 0x187310: 0xa023d388  sb          $v1, -0x2C78($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294955912), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18730c) {
            ctx->pc = 0x187330u;
            goto label_187330;
        }
    }
    ctx->pc = 0x187314u;
    // 0x187314: 0x0  nop
    ctx->pc = 0x187314u;
    // NOP
label_187318:
    // 0x187318: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18731c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x187320: 0xa023d350  sb          $v1, -0x2CB0($at)
    ctx->pc = 0x187320u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40D350u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x40D350u, _value); } while (0);
    // 0x187324: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x187328: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
    // 0x18732c: 0xa023d388  sb          $v1, -0x2C78($at)
    ctx->pc = 0x18732cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x40D388u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x40D388u, _value); } while (0);
label_187330:
    // 0x187330: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x187330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x187334: 0x94246ac4  lhu         $a0, 0x6AC4($at)
    ctx->pc = 0x187334u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x187338: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18733c: 0x14830016  bne         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x18733Cu;
    {
        const bool branch_taken_0x18733c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18733c) {
            ctx->pc = 0x187398u;
            goto label_187398;
        }
    }
    ctx->pc = 0x187344u;
    // 0x187344: 0x9202030c  lbu         $v0, 0x30C($s0)
    ctx->pc = 0x187344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 780)));
    // 0x187348: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x187348u;
    {
        const bool branch_taken_0x187348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187348u;
        // 0x18734c: 0x3c040084  lui         $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187348) {
            ctx->pc = 0x187378u;
            goto label_187378;
        }
    }
    ctx->pc = 0x187350u;
    // 0x187350: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x187354: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x187358: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x18735c: 0x24a5d350  addiu       $a1, $a1, -0x2CB0
    ctx->pc = 0x18735cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
    // 0x187360: 0x24c6d400  addiu       $a2, $a2, -0x2C00
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956032));
    // 0x187364: 0xc061cec  jal         func_1873B0
    ctx->pc = 0x187364u;
    SET_GPR_U32(ctx, 31, 0x18736Cu);
    ctx->pc = 0x187368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187364u;
    // 0x187368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873B0u, 0x187364u, 0x18736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18736Cu;
label_18736c:
    // 0x18736c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18736Cu;
    {
        const bool branch_taken_0x18736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18736c) {
            ctx->pc = 0x187398u;
            goto label_187398;
        }
    }
    ctx->pc = 0x187374u;
    // 0x187374: 0x0  nop
    ctx->pc = 0x187374u;
    // NOP
label_187378:
    // 0x187378: 0x3c040084  lui         $a0, 0x84
    ctx->pc = 0x187378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)132 << 16));
    // 0x18737c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x18737cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x187380: 0x248410c0  addiu       $a0, $a0, 0x10C0
    ctx->pc = 0x187380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4288));
    // 0x187384: 0x24a5d350  addiu       $a1, $a1, -0x2CB0
    ctx->pc = 0x187384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955856));
    // 0x187388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x187388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18738c: 0xc061cec  jal         func_1873B0
    ctx->pc = 0x18738Cu;
    SET_GPR_U32(ctx, 31, 0x187394u);
    ctx->pc = 0x187390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18738Cu;
    // 0x187390: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1873B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1873B0u, 0x18738Cu, 0x187394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187394u;
label_187394:
    // 0x187394: 0x0  nop
    ctx->pc = 0x187394u;
    // NOP
label_187398:
    // 0x187398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18739c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18739cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1873a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1873A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1873A0u;
        // 0x1873a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1873A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1873A8u;
}
