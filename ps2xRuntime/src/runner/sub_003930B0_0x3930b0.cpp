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

// Function: sub_003930B0
// Address: 0x3930b0 - 0x3931e4
void sub_003930B0_0x3930b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003930B0_0x3930b0");
#endif

    switch (ctx->pc) {
        case 0x3931a8u: goto label_3931a8;
        default: break;
    }

    ctx->pc = 0x3930b0u;

    // 0x3930b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3930b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3930b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3930b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3930b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3930b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3930bc: 0x90850032  lbu         $a1, 0x32($a0)
    ctx->pc = 0x3930bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3930c0: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x3930C0u;
    {
        const bool branch_taken_0x3930c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3930C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3930C0u;
        // 0x3930c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3930c0) {
            ctx->pc = 0x3931C0u;
            goto label_3931c0;
        }
    }
    ctx->pc = 0x3930C8u;
    // 0x3930c8: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3930C8u;
    {
        const bool branch_taken_0x3930c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3930c8) {
            ctx->pc = 0x3930F0u;
            goto label_3930f0;
        }
    }
    ctx->pc = 0x3930D0u;
    // 0x3930d0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3930D0u;
    {
        const bool branch_taken_0x3930d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3930d0) {
            ctx->pc = 0x3930E0u;
            goto label_3930e0;
        }
    }
    ctx->pc = 0x3930D8u;
    // 0x3930d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3930D8u;
    {
        const bool branch_taken_0x3930d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3930d8) {
            ctx->pc = 0x3931D8u;
            goto label_3931d8;
        }
    }
    ctx->pc = 0x3930E0u;
label_3930e0:
    // 0x3930e0: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3930e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3930e4: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x3930e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3930e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3930e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3930ec: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x3930ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_3930f0:
    // 0x3930f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3930f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3930f4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3930f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3930f8: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x3930f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x3930fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3930fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x393100: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x393100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x393104: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x393104u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393108: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x393108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39310c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39310cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393110: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x393110u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x393114: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x393114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x393118: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x393118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39311c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39311Cu;
    {
        const bool branch_taken_0x39311c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39311c) {
            ctx->pc = 0x393134u;
            goto label_393134;
        }
    }
    ctx->pc = 0x393124u;
    // 0x393124: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393128: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x39312c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39312Cu;
    {
        const bool branch_taken_0x39312c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39312Cu;
        // 0x393130: 0x94830034  lhu         $v1, 0x34($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39312c) {
            ctx->pc = 0x393150u;
            goto label_393150;
        }
    }
    ctx->pc = 0x393134u;
label_393134:
    // 0x393134: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x393134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x393138: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x393138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39313c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39313cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393140: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x393144: 0x0  nop
    ctx->pc = 0x393144u;
    // NOP
    // 0x393148: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x393148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39314c: 0x94830034  lhu         $v1, 0x34($a0)
    ctx->pc = 0x39314cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
label_393150:
    // 0x393150: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x393150u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x393154: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x393154u;
    {
        const bool branch_taken_0x393154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393154) {
            ctx->pc = 0x3931B0u;
            goto label_3931b0;
        }
    }
    ctx->pc = 0x39315Cu;
    // 0x39315c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x39315cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x393160: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x393160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x393164: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x393164u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x393168: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x393168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x39316c: 0x0  nop
    ctx->pc = 0x39316cu;
    // NOP
    // 0x393170: 0x1812  mflo        $v1
    ctx->pc = 0x393170u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x393174: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x393174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x393178: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x393178u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x39317c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x39317cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x393180: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x393180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x393184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x393184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x393188: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x393188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39318c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x39318cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x393190: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x393190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x393194: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x393194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x393198: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x393198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x39319c: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x39319cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x3931a0: 0xc0e4acc  jal         func_392B30
    ctx->pc = 0x3931A0u;
    SET_GPR_U32(ctx, 31, 0x3931A8u);
    ctx->pc = 0x3931A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3931A0u;
    // 0x3931a4: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B30u, 0x3931A0u, 0x3931A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3931A8u;
label_3931a8:
    // 0x3931a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3931A8u;
    {
        const bool branch_taken_0x3931a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3931a8) {
            ctx->pc = 0x3931D8u;
            goto label_3931d8;
        }
    }
    ctx->pc = 0x3931B0u;
label_3931b0:
    // 0x3931b0: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3931b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3931b4: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x3931b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3931b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3931b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3931bc: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x3931bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_3931c0:
    // 0x3931c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3931c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3931c4: 0xa0830030  sb          $v1, 0x30($a0)
    ctx->pc = 0x3931c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x3931c8: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x3931c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3931cc: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3931ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3931d0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3931d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x3931d4: 0x0  nop
    ctx->pc = 0x3931d4u;
    // NOP
label_3931d8:
    // 0x3931d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3931d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3931dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3931DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3931E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3931DCu;
        // 0x3931e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3931DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3931E4u;
}
