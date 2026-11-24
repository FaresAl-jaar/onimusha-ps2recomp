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

// Function: sub_0031D6A0
// Address: 0x31d6a0 - 0x31d7a8
void sub_0031D6A0_0x31d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D6A0_0x31d6a0");
#endif

    ctx->pc = 0x31d6a0u;

    // 0x31d6a0: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x31d6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31d6a4: 0x10e0003c  beqz        $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x31D6A4u;
    {
        const bool branch_taken_0x31d6a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6a4) {
            ctx->pc = 0x31D798u;
            goto label_31d798;
        }
    }
    ctx->pc = 0x31D6ACu;
    // 0x31d6ac: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x31D6ACu;
    {
        const bool branch_taken_0x31d6ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6ac) {
            ctx->pc = 0x31D798u;
            goto label_31d798;
        }
    }
    ctx->pc = 0x31D6B4u;
    // 0x31d6b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x31d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31d6b8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x31d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x31d6bc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x31d6bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x31d6c0: 0x84e30002  lh          $v1, 0x2($a3)
    ctx->pc = 0x31d6c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x31d6c4: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x31d6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x31d6c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d6c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d6cc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d6ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d6d0: 0x0  nop
    ctx->pc = 0x31d6d0u;
    // NOP
    // 0x31d6d4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d6d8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d6d8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d6dc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31d6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d6e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31d6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31d6e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31d6e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31d6e8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x31d6e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31d6ec: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x31D6ECu;
    {
        const bool branch_taken_0x31d6ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6ec) {
            ctx->pc = 0x31D790u;
            goto label_31d790;
        }
    }
    ctx->pc = 0x31D6F4u;
    // 0x31d6f4: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x31d6f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x31d6f8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31d6f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d6fc: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x31D6FCu;
    {
        const bool branch_taken_0x31d6fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d6fc) {
            ctx->pc = 0x31D790u;
            goto label_31d790;
        }
    }
    ctx->pc = 0x31D704u;
    // 0x31d704: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x31d704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31d708: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x31d708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x31d70c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d710: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x31d710u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31d714: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x31d714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d718: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x31d718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d71c: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d71cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d720: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d720u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d724: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d724u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d728: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d72c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d72cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d730: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x31d730u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31d734: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31d738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31d738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31d73c: 0x70421018  mult1       $v0, $v0, $v0
    ctx->pc = 0x31d73cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d740: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31d740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31d744: 0x0  nop
    ctx->pc = 0x31d744u;
    // NOP
    // 0x31d748: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x31d748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x31d74c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31d74cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31d750: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x31d750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31d754: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31d754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31d758: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x31d758u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x31d75c: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x31d75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31d760: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31D760u;
    {
        const bool branch_taken_0x31d760 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D760u;
        // 0x31d764: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d760) {
            ctx->pc = 0x31D770u;
            goto label_31d770;
        }
    }
    ctx->pc = 0x31D768u;
    // 0x31d768: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D768u;
    {
        const bool branch_taken_0x31d768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D768u;
        // 0x31d76c: 0x84e20006  lh          $v0, 0x6($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d768) {
            ctx->pc = 0x31D778u;
            goto label_31d778;
        }
    }
    ctx->pc = 0x31D770u;
label_31d770:
    // 0x31d770: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31d770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31d774: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x31d774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_31d778:
    // 0x31d778: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x31d778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31d77c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31d77cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31d780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x31D780u;
    {
        const bool branch_taken_0x31d780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d780) {
            ctx->pc = 0x31D790u;
            goto label_31d790;
        }
    }
    ctx->pc = 0x31D788u;
    // 0x31d788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31D788u;
    {
        const bool branch_taken_0x31d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D788u;
        // 0x31d78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d788) {
            ctx->pc = 0x31D7A0u;
            goto label_31d7a0;
        }
    }
    ctx->pc = 0x31D790u;
label_31d790:
    // 0x31d790: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31D790u;
    {
        const bool branch_taken_0x31d790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D790u;
        // 0x31d794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d790) {
            ctx->pc = 0x31D7A0u;
            goto label_31d7a0;
        }
    }
    ctx->pc = 0x31D798u;
label_31d798:
    // 0x31d798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31d798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d79c: 0x0  nop
    ctx->pc = 0x31d79cu;
    // NOP
label_31d7a0:
    // 0x31d7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x31D7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D7A8u;
}
