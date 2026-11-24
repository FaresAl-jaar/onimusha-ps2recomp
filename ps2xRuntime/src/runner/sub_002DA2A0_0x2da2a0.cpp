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

// Function: sub_002DA2A0
// Address: 0x2da2a0 - 0x2da380
void sub_002DA2A0_0x2da2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA2A0_0x2da2a0");
#endif

    switch (ctx->pc) {
        case 0x2da2c8u: goto label_2da2c8;
        default: break;
    }

    ctx->pc = 0x2da2a0u;

    // 0x2da2a0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x2da2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x2da2a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2da2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2da2a8: 0x24c668a0  addiu       $a2, $a2, 0x68A0
    ctx->pc = 0x2da2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26784));
    // 0x2da2ac: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x2da2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2da2b0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2da2b0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E68A0u));
    // 0x2da2b4: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x2da2b4u;
    { uint32_t bits = FAST_READ32(0x4E68B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da2b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2da2b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da2bc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x2da2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x2da2c0: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2da2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x2da2c4: 0x0  nop
    ctx->pc = 0x2da2c4u;
    // NOP
label_2da2c8:
    // 0x2da2c8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2da2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2da2cc: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x2da2ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2da2d0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2DA2D0u;
    {
        const bool branch_taken_0x2da2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da2d0) {
            ctx->pc = 0x2DA308u;
            goto label_2da308;
        }
    }
    ctx->pc = 0x2DA2D8u;
    // 0x2da2d8: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x2da2d8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2da2dc: 0x0  nop
    ctx->pc = 0x2da2dcu;
    // NOP
    // 0x2da2e0: 0x0  nop
    ctx->pc = 0x2da2e0u;
    // NOP
    // 0x2da2e4: 0x1812  mflo        $v1
    ctx->pc = 0x2da2e4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2da2e8: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x2da2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2da2ec: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x2da2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da2f0: 0x80c60000  lb          $a2, 0x0($a2)
    ctx->pc = 0x2da2f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2da2f4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2da2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2da2f8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2da2f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2da2fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA2FCu;
    {
        const bool branch_taken_0x2da2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA2FCu;
        // 0x2da300: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2fc) {
            ctx->pc = 0x2DA310u;
            goto label_2da310;
        }
    }
    ctx->pc = 0x2DA304u;
    // 0x2da304: 0x0  nop
    ctx->pc = 0x2da304u;
    // NOP
label_2da308:
    // 0x2da308: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2da308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2da30c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2da30cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2da310:
    // 0x2da310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2da310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2da314: 0x2d030005  sltiu       $v1, $t0, 0x5
    ctx->pc = 0x2da314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2da318: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2DA318u;
    {
        const bool branch_taken_0x2da318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA318u;
        // 0x2da31c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da318) {
            ctx->pc = 0x2DA2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da2c8;
        }
    }
    ctx->pc = 0x2DA320u;
    // 0x2da320: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA320u;
    {
        const bool branch_taken_0x2da320 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2DA324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA320u;
        // 0x2da324: 0x53042  srl         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da320) {
            ctx->pc = 0x2DA334u;
            goto label_2da334;
        }
    }
    ctx->pc = 0x2DA328u;
    // 0x2da328: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2da328u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da32c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DA32Cu;
    {
        const bool branch_taken_0x2da32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA32Cu;
        // 0x2da330: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da32c) {
            ctx->pc = 0x2DA34Cu;
            goto label_2da34c;
        }
    }
    ctx->pc = 0x2DA334u;
label_2da334:
    // 0x2da334: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2da334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2da338: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2da338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2da33c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2da33cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da340: 0x0  nop
    ctx->pc = 0x2da340u;
    // NOP
    // 0x2da344: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2da344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2da348: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2da348u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2da34c:
    // 0x2da34c: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x2da34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x2da350: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2da350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2da354: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2da354u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da35c: 0x0  nop
    ctx->pc = 0x2da35cu;
    // NOP
    // 0x2da360: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2da360u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2da364: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2da364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2da368: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2da368u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2da36c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2da36cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2da370: 0x0  nop
    ctx->pc = 0x2da370u;
    // NOP
    // 0x2da374: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x2da374u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da378: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA378u;
        // 0x2da37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA380u;
}
