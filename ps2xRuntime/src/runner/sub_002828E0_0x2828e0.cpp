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

// Function: sub_002828E0
// Address: 0x2828e0 - 0x2829a8
void sub_002828E0_0x2828e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002828E0_0x2828e0");
#endif

    switch (ctx->pc) {
        case 0x28296cu: goto label_28296c;
        case 0x282994u: goto label_282994;
        default: break;
    }

    ctx->pc = 0x2828e0u;

    // 0x2828e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2828e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2828e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2828e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2828e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2828e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2828ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2828ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2828f0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2828f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2828f4: 0x10660018  beq         $v1, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x2828F4u;
    {
        const bool branch_taken_0x2828f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x2828F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828F4u;
        // 0x2828f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828f4) {
            ctx->pc = 0x282958u;
            goto label_282958;
        }
    }
    ctx->pc = 0x2828FCu;
    // 0x2828fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2828FCu;
    {
        const bool branch_taken_0x2828fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2828fc) {
            ctx->pc = 0x282910u;
            goto label_282910;
        }
    }
    ctx->pc = 0x282904u;
    // 0x282904: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x282904u;
    {
        const bool branch_taken_0x282904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282904) {
            ctx->pc = 0x282998u;
            goto label_282998;
        }
    }
    ctx->pc = 0x28290Cu;
    // 0x28290c: 0x0  nop
    ctx->pc = 0x28290cu;
    // NOP
label_282910:
    // 0x282910: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x282910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x282914: 0x24a544b0  addiu       $a1, $a1, 0x44B0
    ctx->pc = 0x282914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17584));
    // 0x282918: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x282918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x28291c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x28291cu;
    { uint32_t bits = FAST_READ32(0x4E44B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x282920: 0x240400c1  addiu       $a0, $zero, 0xC1
    ctx->pc = 0x282920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    // 0x282924: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x282924u;
    { uint32_t bits = FAST_READ32(0x4E44B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282928: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x282928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28292c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28292cu;
    { uint32_t bits = FAST_READ32(0x4E44B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282930: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x282930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x282934: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x282934u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x282938: 0xe60006a8  swc1        $f0, 0x6A8($s0)
    ctx->pc = 0x282938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    // 0x28293c: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x28293cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x282940: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x282940u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x282944: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x282944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x282948: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x282948u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x28294c: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x28294cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x282950: 0xa2060821  sb          $a2, 0x821($s0)
    ctx->pc = 0x282950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x282954: 0x0  nop
    ctx->pc = 0x282954u;
    // NOP
label_282958:
    // 0x282958: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x282958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x28295c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28295Cu;
    {
        const bool branch_taken_0x28295c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28295Cu;
        // 0x282960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28295c) {
            ctx->pc = 0x282998u;
            goto label_282998;
        }
    }
    ctx->pc = 0x282964u;
    // 0x282964: 0xc0a0a34  jal         func_2828D0
    ctx->pc = 0x282964u;
    SET_GPR_U32(ctx, 31, 0x28296Cu);
    ctx->pc = 0x2828D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2828D0u, 0x282964u, 0x28296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28296Cu;
label_28296c:
    // 0x28296c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x28296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x282970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282974: 0x244244c0  addiu       $v0, $v0, 0x44C0
    ctx->pc = 0x282974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17600));
    // 0x282978: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x282978u;
    { uint32_t bits = FAST_READ32(0x4E44C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28297c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28297cu;
    { uint32_t bits = FAST_READ32(0x4E44C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x282980: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x282980u;
    { uint32_t bits = FAST_READ32(0x4E44C8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x282984: 0xe60206a0  swc1        $f2, 0x6A0($s0)
    ctx->pc = 0x282984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1696), bits); }
    // 0x282988: 0xe60106a4  swc1        $f1, 0x6A4($s0)
    ctx->pc = 0x282988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1700), bits); }
    // 0x28298c: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x28298Cu;
    SET_GPR_U32(ctx, 31, 0x282994u);
    ctx->pc = 0x282990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28298Cu;
    // 0x282990: 0xe60006a8  swc1        $f0, 0x6A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1704), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x28298Cu, 0x282994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282994u;
label_282994:
    // 0x282994: 0x0  nop
    ctx->pc = 0x282994u;
    // NOP
label_282998:
    // 0x282998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x282998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28299c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28299cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2829a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2829A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2829A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2829A0u;
        // 0x2829a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2829A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2829A8u;
}
