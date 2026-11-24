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

// Function: sub_0031D7B0
// Address: 0x31d7b0 - 0x31d8c8
void sub_0031D7B0_0x31d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D7B0_0x31d7b0");
#endif

    ctx->pc = 0x31d7b0u;

    // 0x31d7b0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x31d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31d7b4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x31D7B4u;
    {
        const bool branch_taken_0x31d7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7b4) {
            ctx->pc = 0x31D8B8u;
            goto label_31d8b8;
        }
    }
    ctx->pc = 0x31D7BCu;
    // 0x31d7bc: 0x10e0003e  beqz        $a3, . + 4 + (0x3E << 2)
    ctx->pc = 0x31D7BCu;
    {
        const bool branch_taken_0x31d7bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7bc) {
            ctx->pc = 0x31D8B8u;
            goto label_31d8b8;
        }
    }
    ctx->pc = 0x31D7C4u;
    // 0x31d7c4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d7c8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x31d7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31d7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31d7d0: 0x84440002  lh          $a0, 0x2($v0)
    ctx->pc = 0x31d7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x31d7d4: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x31d7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31d7d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d7d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d7dc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31d7dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31d7e0: 0x0  nop
    ctx->pc = 0x31d7e0u;
    // NOP
    // 0x31d7e4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x31d7e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31d7e8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x31d7e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x31d7ec: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x31d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x31d7f0: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d7f4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d7f4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d7f8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x31d7f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x31d7fc: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x31D7FCu;
    {
        const bool branch_taken_0x31d7fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d7fc) {
            ctx->pc = 0x31D8B0u;
            goto label_31d8b0;
        }
    }
    ctx->pc = 0x31D804u;
    // 0x31d804: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x31d804u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x31d808: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x31d808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31d80c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x31D80Cu;
    {
        const bool branch_taken_0x31d80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d80c) {
            ctx->pc = 0x31D8B0u;
            goto label_31d8b0;
        }
    }
    ctx->pc = 0x31D814u;
    // 0x31d814: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d818: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x31d818u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x31d81c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d820: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x31d820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31d824: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31d824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d828: 0x84480004  lh          $t0, 0x4($v0)
    ctx->pc = 0x31d828u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x31d82c: 0x84c70002  lh          $a3, 0x2($a2)
    ctx->pc = 0x31d82cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x31d830: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x31d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d834: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d834u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31d838: 0x1073021  addu        $a2, $t0, $a3
    ctx->pc = 0x31d838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31d83c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x31d83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d844: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d848: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x31d848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x31d84c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d84cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d850: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d850u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d854: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31d854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31d858: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31d858u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31d85c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31d85cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31d860: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d864: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x31d864u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31d868: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d868u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d86c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31d86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31d870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31d870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31d874: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x31d874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x31d878: 0x70631818  mult1       $v1, $v1, $v1
    ctx->pc = 0x31d878u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31d87c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31D87Cu;
    {
        const bool branch_taken_0x31d87c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D87Cu;
        // 0x31d880: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d87c) {
            ctx->pc = 0x31D88Cu;
            goto label_31d88c;
        }
    }
    ctx->pc = 0x31D884u;
    // 0x31d884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D884u;
    {
        const bool branch_taken_0x31d884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D884u;
        // 0x31d888: 0x84420006  lh          $v0, 0x6($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d884) {
            ctx->pc = 0x31D894u;
            goto label_31d894;
        }
    }
    ctx->pc = 0x31D88Cu;
label_31d88c:
    // 0x31d88c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d88cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31d890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31d894:
    // 0x31d894: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x31d894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d898: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31d898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d89c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D89Cu;
    {
        const bool branch_taken_0x31d89c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d89c) {
            ctx->pc = 0x31D8B0u;
            goto label_31d8b0;
        }
    }
    ctx->pc = 0x31D8A4u;
    // 0x31d8a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31D8A4u;
    {
        const bool branch_taken_0x31d8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8A4u;
        // 0x31d8a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8a4) {
            ctx->pc = 0x31D8C0u;
            goto label_31d8c0;
        }
    }
    ctx->pc = 0x31D8ACu;
    // 0x31d8ac: 0x0  nop
    ctx->pc = 0x31d8acu;
    // NOP
label_31d8b0:
    // 0x31d8b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D8B0u;
    {
        const bool branch_taken_0x31d8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D8B0u;
        // 0x31d8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d8b0) {
            ctx->pc = 0x31D8C0u;
            goto label_31d8c0;
        }
    }
    ctx->pc = 0x31D8B8u;
label_31d8b8:
    // 0x31d8b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d8bc: 0x0  nop
    ctx->pc = 0x31d8bcu;
    // NOP
label_31d8c0:
    // 0x31d8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x31D8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D8C8u;
}
