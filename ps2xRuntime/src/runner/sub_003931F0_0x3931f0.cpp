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

// Function: sub_003931F0
// Address: 0x3931f0 - 0x39330c
void sub_003931F0_0x3931f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003931F0_0x3931f0");
#endif

    switch (ctx->pc) {
        case 0x3932d4u: goto label_3932d4;
        default: break;
    }

    ctx->pc = 0x3931f0u;

    // 0x3931f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3931f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3931f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3931f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3931f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3931f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3931fc: 0x90850032  lbu         $a1, 0x32($a0)
    ctx->pc = 0x3931fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x393200: 0x10a3003b  beq         $a1, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x393200u;
    {
        const bool branch_taken_0x393200 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x393204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393200u;
        // 0x393204: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393200) {
            ctx->pc = 0x3932F0u;
            goto label_3932f0;
        }
    }
    ctx->pc = 0x393208u;
    // 0x393208: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x393208u;
    {
        const bool branch_taken_0x393208 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x393208) {
            ctx->pc = 0x393230u;
            goto label_393230;
        }
    }
    ctx->pc = 0x393210u;
    // 0x393210: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x393210u;
    {
        const bool branch_taken_0x393210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x393210) {
            ctx->pc = 0x393220u;
            goto label_393220;
        }
    }
    ctx->pc = 0x393218u;
    // 0x393218: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x393218u;
    {
        const bool branch_taken_0x393218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393218) {
            ctx->pc = 0x393300u;
            goto label_393300;
        }
    }
    ctx->pc = 0x393220u;
label_393220:
    // 0x393220: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x393220u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x393224: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x393224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x393228: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x393228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39322c: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x39322cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_393230:
    // 0x393230: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x393230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x393234: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x393234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x393238: 0x3c053c88  lui         $a1, 0x3C88
    ctx->pc = 0x393238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15496 << 16));
    // 0x39323c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x39323cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x393240: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x393240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
    // 0x393244: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x393244u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393248: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x393248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x39324c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39324cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393250: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x393250u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x393254: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x393254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x393258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x393258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x39325c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x39325Cu;
    {
        const bool branch_taken_0x39325c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39325c) {
            ctx->pc = 0x393274u;
            goto label_393274;
        }
    }
    ctx->pc = 0x393264u;
    // 0x393264: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x393264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393268: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x39326c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39326Cu;
    {
        const bool branch_taken_0x39326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39326Cu;
        // 0x393270: 0x94830034  lhu         $v1, 0x34($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39326c) {
            ctx->pc = 0x393290u;
            goto label_393290;
        }
    }
    ctx->pc = 0x393274u;
label_393274:
    // 0x393274: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x393274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x393278: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x393278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39327c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39327cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x393280: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x393280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x393284: 0x0  nop
    ctx->pc = 0x393284u;
    // NOP
    // 0x393288: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x393288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x39328c: 0x94830034  lhu         $v1, 0x34($a0)
    ctx->pc = 0x39328cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
label_393290:
    // 0x393290: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x393290u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x393294: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x393294u;
    {
        const bool branch_taken_0x393294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x393294) {
            ctx->pc = 0x3932E0u;
            goto label_3932e0;
        }
    }
    ctx->pc = 0x39329Cu;
    // 0x39329c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x39329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3932a0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3932a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3932a4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x3932a4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x3932a8: 0x24426540  addiu       $v0, $v0, 0x6540
    ctx->pc = 0x3932a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25920));
    // 0x3932ac: 0x0  nop
    ctx->pc = 0x3932acu;
    // NOP
    // 0x3932b0: 0x1812  mflo        $v1
    ctx->pc = 0x3932b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3932b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3932b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3932b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3932b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3932bc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x3932bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x3932c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3932c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3932c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3932c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3932c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3932c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3932cc: 0xc0e4acc  jal         func_392B30
    ctx->pc = 0x3932CCu;
    SET_GPR_U32(ctx, 31, 0x3932D4u);
    ctx->pc = 0x3932D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3932CCu;
    // 0x3932d0: 0xe4800038  swc1        $f0, 0x38($a0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392B30u, 0x3932CCu, 0x3932D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3932D4u;
label_3932d4:
    // 0x3932d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3932D4u;
    {
        const bool branch_taken_0x3932d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3932d4) {
            ctx->pc = 0x393300u;
            goto label_393300;
        }
    }
    ctx->pc = 0x3932DCu;
    // 0x3932dc: 0x0  nop
    ctx->pc = 0x3932dcu;
    // NOP
label_3932e0:
    // 0x3932e0: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3932e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3932e4: 0x90830032  lbu         $v1, 0x32($a0)
    ctx->pc = 0x3932e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
    // 0x3932e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3932e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3932ec: 0xa0830032  sb          $v1, 0x32($a0)
    ctx->pc = 0x3932ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 3));
label_3932f0:
    // 0x3932f0: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x3932f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x3932f4: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x3932f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x3932f8: 0xa4800034  sh          $zero, 0x34($a0)
    ctx->pc = 0x3932f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x3932fc: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x3932fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_393300:
    // 0x393300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x393300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x393304: 0x3e00008  jr          $ra
    ctx->pc = 0x393304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393304u;
        // 0x393308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39330Cu;
}
