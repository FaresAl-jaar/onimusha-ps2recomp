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

// Function: sub_003241C0
// Address: 0x3241c0 - 0x324298
void sub_003241C0_0x3241c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003241C0_0x3241c0");
#endif

    switch (ctx->pc) {
        case 0x3241e8u: goto label_3241e8;
        default: break;
    }

    ctx->pc = 0x3241c0u;

    // 0x3241c0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x3241c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3241c4: 0x10e00030  beqz        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x3241C4u;
    {
        const bool branch_taken_0x3241c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3241c4) {
            ctx->pc = 0x324288u;
            goto label_324288;
        }
    }
    ctx->pc = 0x3241CCu;
    // 0x3241cc: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3241ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3241d0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3241d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3241d4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3241d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3241d8: 0x34448889  ori         $a0, $v0, 0x8889
    ctx->pc = 0x3241d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3241dc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3241dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3241e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3241e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3241e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3241e8:
    // 0x3241e8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x3241e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3241ec: 0x14a30022  bne         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3241ECu;
    {
        const bool branch_taken_0x3241ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3241ec) {
            ctx->pc = 0x324278u;
            goto label_324278;
        }
    }
    ctx->pc = 0x3241F4u;
    // 0x3241f4: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x3241f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3241f8: 0x9063000f  lbu         $v1, 0xF($v1)
    ctx->pc = 0x3241f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x3241fc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3241FCu;
    {
        const bool branch_taken_0x3241fc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x324200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241FCu;
        // 0x324200: 0x90e6002d  lbu         $a2, 0x2D($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 45)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241fc) {
            ctx->pc = 0x324210u;
            goto label_324210;
        }
    }
    ctx->pc = 0x324204u;
    // 0x324204: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x324204u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324208u;
    {
        const bool branch_taken_0x324208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324208u;
        // 0x32420c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x324208) {
            ctx->pc = 0x32422Cu;
            goto label_32422c;
        }
    }
    ctx->pc = 0x324210u;
label_324210:
    // 0x324210: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x324210u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x324214: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x324214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x324218: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x324218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32421c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x32421cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324220: 0x0  nop
    ctx->pc = 0x324220u;
    // NOP
    // 0x324224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x324224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x324228: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x324228u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32422c:
    // 0x32422c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x32422cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x324230: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x324230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x324234: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x324234u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324238: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x324238u;
    {
        const bool branch_taken_0x324238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x324238) {
            ctx->pc = 0x324250u;
            goto label_324250;
        }
    }
    ctx->pc = 0x324240u;
    // 0x324240: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x324244: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x324244u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x324248: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324248u;
    {
        const bool branch_taken_0x324248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324248u;
        // 0x32424c: 0xc3082b  sltu        $at, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324248) {
            ctx->pc = 0x324268u;
            goto label_324268;
        }
    }
    ctx->pc = 0x324250u;
label_324250:
    // 0x324250: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x324250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x324254: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x324254u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x324258: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x324258u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32425c: 0x0  nop
    ctx->pc = 0x32425cu;
    // NOP
    // 0x324260: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x324260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324264: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x324264u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_324268:
    // 0x324268: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x324268u;
    {
        const bool branch_taken_0x324268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x324268) {
            ctx->pc = 0x324278u;
            goto label_324278;
        }
    }
    ctx->pc = 0x324270u;
    // 0x324270: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x324270u;
    {
        const bool branch_taken_0x324270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324270u;
        // 0x324274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324270) {
            ctx->pc = 0x324290u;
            goto label_324290;
        }
    }
    ctx->pc = 0x324278u;
label_324278:
    // 0x324278: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x324278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x32427c: 0x14e0ffda  bnez        $a3, . + 4 + (-0x26 << 2)
    ctx->pc = 0x32427Cu;
    {
        const bool branch_taken_0x32427c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x32427c) {
            ctx->pc = 0x3241E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3241e8;
        }
    }
    ctx->pc = 0x324284u;
    // 0x324284: 0x0  nop
    ctx->pc = 0x324284u;
    // NOP
label_324288:
    // 0x324288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x324288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32428c: 0x0  nop
    ctx->pc = 0x32428cu;
    // NOP
label_324290:
    // 0x324290: 0x3e00008  jr          $ra
    ctx->pc = 0x324290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324298u;
}
