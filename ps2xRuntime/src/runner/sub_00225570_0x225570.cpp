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

// Function: sub_00225570
// Address: 0x225570 - 0x22563c
void sub_00225570_0x225570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225570_0x225570");
#endif

    switch (ctx->pc) {
        case 0x225590u: goto label_225590;
        case 0x2255c8u: goto label_2255c8;
        case 0x225618u: goto label_225618;
        default: break;
    }

    ctx->pc = 0x225570u;

    // 0x225570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225578: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x225578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x22557c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225580: 0x8089562  j           func_225588
    ctx->pc = 0x225580u;
    ctx->pc = 0x225584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225580u;
    // 0x225584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225588u;
    goto label_225588;
    ctx->pc = 0x225588u;
label_225588:
    // 0x225588: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x225588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x22558c: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x22558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_225590:
    // 0x225590: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x225590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x225594: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x225594u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x225598: 0x0  nop
    ctx->pc = 0x225598u;
    // NOP
    // 0x22559c: 0x0  nop
    ctx->pc = 0x22559cu;
    // NOP
    // 0x2255a0: 0x0  nop
    ctx->pc = 0x2255a0u;
    // NOP
    // 0x2255a4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2255A4u;
    {
        const bool branch_taken_0x2255a4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2255A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255A4u;
        // 0x2255a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255a4) {
            ctx->pc = 0x225590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225590;
        }
    }
    ctx->pc = 0x2255ACu;
    // 0x2255ac: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x2255acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x2255b0: 0x3421fdf3  ori         $at, $at, 0xFDF3
    ctx->pc = 0x2255b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65011);
    // 0x2255b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2255b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2255b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2255b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2255bc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2255bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2255c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2255c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2255c4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x2255c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_2255c8:
    // 0x2255c8: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x2255cc: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x2255ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2255d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2255d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2255d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2255d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2255d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2255dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2255dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2255e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2255e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2255e4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2255e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2255e8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2255e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2255ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2255ECu;
    {
        const bool branch_taken_0x2255ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2255F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2255ECu;
        // 0x2255f0: 0x28a300ec  slti        $v1, $a1, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255ec) {
            ctx->pc = 0x225604u;
            goto label_225604;
        }
    }
    ctx->pc = 0x2255F4u;
    // 0x2255f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2255f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2255f8: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2255f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2255fc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2255fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x225600: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x225600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_225604:
    // 0x225604: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x225604u;
    {
        const bool branch_taken_0x225604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225604u;
        // 0x225608: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225604) {
            ctx->pc = 0x2255C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2255c8;
        }
    }
    ctx->pc = 0x22560Cu;
    // 0x22560c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x22560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x225610: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x225610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x225614: 0x0  nop
    ctx->pc = 0x225614u;
    // NOP
label_225618:
    // 0x225618: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x225618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22561c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22561cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x225620: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x225620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x225624: 0x0  nop
    ctx->pc = 0x225624u;
    // NOP
    // 0x225628: 0x0  nop
    ctx->pc = 0x225628u;
    // NOP
    // 0x22562c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22562Cu;
    {
        const bool branch_taken_0x22562c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22562Cu;
        // 0x225630: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22562c) {
            ctx->pc = 0x225618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225618;
        }
    }
    ctx->pc = 0x225634u;
    // 0x225634: 0x3e00008  jr          $ra
    ctx->pc = 0x225634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22563Cu;
}
