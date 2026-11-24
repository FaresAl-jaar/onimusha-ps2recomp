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

// Function: sub_001945D0
// Address: 0x1945d0 - 0x1946b0
void sub_001945D0_0x1945d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001945D0_0x1945d0");
#endif

    ctx->pc = 0x1945d0u;

    // 0x1945d0: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1945d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1945d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1945d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1945d8: 0x30680fff  andi        $t0, $v1, 0xFFF
    ctx->pc = 0x1945d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1945dc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1945dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1945e0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1945e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1945e4: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1945e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1945e8: 0x28610800  slti        $at, $v1, 0x800
    ctx->pc = 0x1945e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2048) ? 1 : 0);
    // 0x1945ec: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1945ECu;
    {
        const bool branch_taken_0x1945ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1945ec) {
            ctx->pc = 0x1945F8u;
            goto label_1945f8;
        }
    }
    ctx->pc = 0x1945F4u;
    // 0x1945f4: 0x2463f000  addiu       $v1, $v1, -0x1000
    ctx->pc = 0x1945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963200));
label_1945f8:
    // 0x1945f8: 0x2861f801  slti        $at, $v1, -0x7FF
    ctx->pc = 0x1945f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294965249) ? 1 : 0);
    // 0x1945fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1945FCu;
    {
        const bool branch_taken_0x1945fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1945fc) {
            ctx->pc = 0x194608u;
            goto label_194608;
        }
    }
    ctx->pc = 0x194604u;
    // 0x194604: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x194604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_194608:
    // 0x194608: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x194608u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19460c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x19460cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194610: 0x0  nop
    ctx->pc = 0x194610u;
    // NOP
    // 0x194614: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194618: 0x1812  mflo        $v1
    ctx->pc = 0x194618u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x19461c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19461cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x194620: 0x0  nop
    ctx->pc = 0x194620u;
    // NOP
    // 0x194624: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x194624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x194628: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x194628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19462c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19462Cu;
    {
        const bool branch_taken_0x19462c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19462c) {
            ctx->pc = 0x194638u;
            goto label_194638;
        }
    }
    ctx->pc = 0x194634u;
    // 0x194634: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x194634u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_194638:
    // 0x194638: 0x71823  negu        $v1, $a3
    ctx->pc = 0x194638u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x19463c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19463cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194640: 0x0  nop
    ctx->pc = 0x194640u;
    // NOP
    // 0x194644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194648: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x194648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19464c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19464Cu;
    {
        const bool branch_taken_0x19464c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19464c) {
            ctx->pc = 0x194658u;
            goto label_194658;
        }
    }
    ctx->pc = 0x194654u;
    // 0x194654: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x194654u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_194658:
    // 0x194658: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x194658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19465c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19465cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194660: 0x46001045  abs.s       $f1, $f2
    ctx->pc = 0x194660u;
    ctx->f[1] = FPU_ABS_S(ctx->f[2]);
    // 0x194664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x194664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x194668: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x194668u;
    {
        const bool branch_taken_0x194668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x194668) {
            ctx->pc = 0x194678u;
            goto label_194678;
        }
    }
    ctx->pc = 0x194670u;
    // 0x194670: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x194670u;
    {
        const bool branch_taken_0x194670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194670u;
        // 0x194674: 0xa4850000  sh          $a1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194670) {
            ctx->pc = 0x1946A0u;
            goto label_1946a0;
        }
    }
    ctx->pc = 0x194678u;
label_194678:
    // 0x194678: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x194678u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19467c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19467cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194680: 0x0  nop
    ctx->pc = 0x194680u;
    // NOP
    // 0x194684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194688: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x194688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19468c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19468cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x194690: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194690u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194694: 0x0  nop
    ctx->pc = 0x194694u;
    // NOP
    // 0x194698: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x194698u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x19469c: 0x0  nop
    ctx->pc = 0x19469cu;
    // NOP
label_1946a0:
    // 0x1946a0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1946a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1946a4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1946a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1946a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1946A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1946ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1946A8u;
        // 0x1946ac: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1946A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1946B0u;
}
