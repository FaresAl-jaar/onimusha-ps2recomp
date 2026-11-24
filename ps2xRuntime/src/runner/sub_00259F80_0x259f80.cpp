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

// Function: sub_00259F80
// Address: 0x259f80 - 0x25a054
void sub_00259F80_0x259f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259F80_0x259f80");
#endif

    switch (ctx->pc) {
        case 0x25a000u: goto label_25a000;
        case 0x25a018u: goto label_25a018;
        default: break;
    }

    ctx->pc = 0x259f80u;

    // 0x259f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x259f8c: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x259F8Cu;
    {
        const bool branch_taken_0x259f8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x259F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259F8Cu;
        // 0x259f90: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259f8c) {
            ctx->pc = 0x25A038u;
            goto label_25a038;
        }
    }
    ctx->pc = 0x259F94u;
    // 0x259f94: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x259f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x259f98: 0x5843c  dsll32      $s0, $a1, 16
    ctx->pc = 0x259f98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << (32 + 16));
    // 0x259f9c: 0xc21807  srav        $v1, $v0, $a2
    ctx->pc = 0x259f9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x259fa0: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x259fa0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x259fa4: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x259fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x259fa8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x259fa8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x259fac: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x259facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x259fb0: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x259fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x259fb4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x259fb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x259fb8: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x259fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x259fbc: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x259fbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x259fc0: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x259fc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x259fc4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x259fc4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x259fc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x259fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x259fcc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x259fccu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x259fd0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x259fd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x259fd4: 0x0  nop
    ctx->pc = 0x259fd4u;
    // NOP
    // 0x259fd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x259fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x259fdc: 0x1012  mflo        $v0
    ctx->pc = 0x259fdcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x259fe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x259fe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x259fe4: 0x0  nop
    ctx->pc = 0x259fe4u;
    // NOP
    // 0x259fe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x259fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x259fec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x259fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x259ff0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x259ff0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x259ff4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x259ff4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x259ff8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x259FF8u;
    SET_GPR_U32(ctx, 31, 0x25A000u);
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x259FF8u, 0x25A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A000u;
label_25a000:
    // 0x25a000: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25a004: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25a004u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25a008: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x25a008u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x25a00c: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x25a00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25a010: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x25A010u;
    SET_GPR_U32(ctx, 31, 0x25A018u);
    ctx->pc = 0x25A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A010u;
    // 0x25a014: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x25A010u, 0x25A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A018u;
label_25a018:
    // 0x25a018: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25a01c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x25a01cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x25a020: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25a024: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x25a024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x25a028: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25a028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x25a02c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A02Cu;
    {
        const bool branch_taken_0x25a02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A02Cu;
        // 0x25a030: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a02c) {
            ctx->pc = 0x25A040u;
            goto label_25a040;
        }
    }
    ctx->pc = 0x25A034u;
    // 0x25a034: 0x0  nop
    ctx->pc = 0x25a034u;
    // NOP
label_25a038:
    // 0x25a038: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25a038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a03c: 0x0  nop
    ctx->pc = 0x25a03cu;
    // NOP
label_25a040:
    // 0x25a040: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a044: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a044u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a048: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a04c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A04Cu;
        // 0x25a050: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A054u;
}
