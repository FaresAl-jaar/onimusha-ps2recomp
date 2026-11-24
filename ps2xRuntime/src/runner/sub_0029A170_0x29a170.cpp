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

// Function: sub_0029A170
// Address: 0x29a170 - 0x29a260
void sub_0029A170_0x29a170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A170_0x29a170");
#endif

    ctx->pc = 0x29a170u;

    // 0x29a170: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x29a170u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x29a174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a178: 0x34e60040  ori         $a2, $a3, 0x40
    ctx->pc = 0x29a178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)64);
    // 0x29a17c: 0xa08607f9  sb          $a2, 0x7F9($a0)
    ctx->pc = 0x29a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2041), (uint8_t)GPR_U32(ctx, 6));
    // 0x29a180: 0xa08507f8  sb          $a1, 0x7F8($a0)
    ctx->pc = 0x29a180u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2040), (uint8_t)GPR_U32(ctx, 5));
    // 0x29a184: 0x9086065c  lbu         $a2, 0x65C($a0)
    ctx->pc = 0x29a184u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x29a188: 0x14c30033  bne         $a2, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x29A188u;
    {
        const bool branch_taken_0x29a188 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x29A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A188u;
        // 0x29a18c: 0x30e30002  andi        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a188) {
            ctx->pc = 0x29A258u;
            goto label_29a258;
        }
    }
    ctx->pc = 0x29A190u;
    // 0x29a190: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A190u;
    {
        const bool branch_taken_0x29a190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A190u;
        // 0x29a194: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a190) {
            ctx->pc = 0x29A1A0u;
            goto label_29a1a0;
        }
    }
    ctx->pc = 0x29A198u;
    // 0x29a198: 0x35080040  ori         $t0, $t0, 0x40
    ctx->pc = 0x29a198u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x29a19c: 0x0  nop
    ctx->pc = 0x29a19cu;
    // NOP
label_29a1a0:
    // 0x29a1a0: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x29a1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x29a1a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A1A4u;
    {
        const bool branch_taken_0x29a1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1A4u;
        // 0x29a1a8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1a4) {
            ctx->pc = 0x29A1B0u;
            goto label_29a1b0;
        }
    }
    ctx->pc = 0x29A1ACu;
    // 0x29a1ac: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x29a1acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_29a1b0:
    // 0x29a1b0: 0x908307f9  lbu         $v1, 0x7F9($a0)
    ctx->pc = 0x29a1b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2041)));
    // 0x29a1b4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x29a1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x29a1b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A1B8u;
    {
        const bool branch_taken_0x29a1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1B8u;
        // 0x29a1bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1b8) {
            ctx->pc = 0x29A1C8u;
            goto label_29a1c8;
        }
    }
    ctx->pc = 0x29A1C0u;
    // 0x29a1c0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x29A1C0u;
    {
        const bool branch_taken_0x29a1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1C0u;
        // 0x29a1c4: 0xa08007f6  sb          $zero, 0x7F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1c0) {
            ctx->pc = 0x29A230u;
            goto label_29a230;
        }
    }
    ctx->pc = 0x29A1C8u;
label_29a1c8:
    // 0x29a1c8: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x29a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29a1cc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x29a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x29a1d0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x29a1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29a1d4: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x29a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x29a1d8: 0x34668889  ori         $a2, $v1, 0x8889
    ctx->pc = 0x29a1d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x29a1dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x29a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x29a1e0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x29a1e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x29a1e4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29a1e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29a1e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29a1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29a1ec: 0x0  nop
    ctx->pc = 0x29a1ecu;
    // NOP
    // 0x29a1f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x29a1f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x29a1f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29a1f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a1f8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A1F8u;
    {
        const bool branch_taken_0x29a1f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29a1f8) {
            ctx->pc = 0x29A210u;
            goto label_29a210;
        }
    }
    ctx->pc = 0x29A200u;
    // 0x29a200: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29a204: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29a204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29a208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29A208u;
    {
        const bool branch_taken_0x29a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A208u;
        // 0x29a20c: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a208) {
            ctx->pc = 0x29A22Cu;
            goto label_29a22c;
        }
    }
    ctx->pc = 0x29A210u;
label_29a210:
    // 0x29a210: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29a210u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29a214: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29a218: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29a21c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x29a21cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29a220: 0x0  nop
    ctx->pc = 0x29a220u;
    // NOP
    // 0x29a224: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29a224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29a228: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x29a228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_29a22c:
    // 0x29a22c: 0xa08007f6  sb          $zero, 0x7F6($a0)
    ctx->pc = 0x29a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2038), (uint8_t)GPR_U32(ctx, 0));
label_29a230:
    // 0x29a230: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x29a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x29a234: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x29a234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x29a238: 0xa08007f4  sb          $zero, 0x7F4($a0)
    ctx->pc = 0x29a238u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a23c: 0xa48507f2  sh          $a1, 0x7F2($a0)
    ctx->pc = 0x29a23cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x29a240: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x29a240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x29a244: 0xa08607f5  sb          $a2, 0x7F5($a0)
    ctx->pc = 0x29a244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x29a248: 0xac8307ec  sw          $v1, 0x7EC($a0)
    ctx->pc = 0x29a248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2028), GPR_U32(ctx, 3));
    // 0x29a24c: 0x908307f9  lbu         $v1, 0x7F9($a0)
    ctx->pc = 0x29a24cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2041)));
    // 0x29a250: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x29a250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x29a254: 0xa08307f9  sb          $v1, 0x7F9($a0)
    ctx->pc = 0x29a254u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2041), (uint8_t)GPR_U32(ctx, 3));
label_29a258:
    // 0x29a258: 0x3e00008  jr          $ra
    ctx->pc = 0x29A258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A260u;
}
