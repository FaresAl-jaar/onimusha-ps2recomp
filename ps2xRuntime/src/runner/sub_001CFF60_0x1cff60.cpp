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

// Function: sub_001CFF60
// Address: 0x1cff60 - 0x1d0024
void sub_001CFF60_0x1cff60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFF60_0x1cff60");
#endif

    switch (ctx->pc) {
        case 0x1d0018u: goto label_1d0018;
        default: break;
    }

    ctx->pc = 0x1cff60u;

    // 0x1cff60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cff68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cff6c: 0x90853022  lbu         $a1, 0x3022($a0)
    ctx->pc = 0x1cff6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12322)));
    // 0x1cff70: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFF70u;
    {
        const bool branch_taken_0x1cff70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cff70) {
            ctx->pc = 0x1CFF80u;
            goto label_1cff80;
        }
    }
    ctx->pc = 0x1CFF78u;
    // 0x1cff78: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1CFF78u;
    {
        const bool branch_taken_0x1cff78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff78) {
            ctx->pc = 0x1D0018u;
            goto label_1d0018;
        }
    }
    ctx->pc = 0x1CFF80u;
label_1cff80:
    // 0x1cff80: 0x90853026  lbu         $a1, 0x3026($a0)
    ctx->pc = 0x1cff80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12326)));
    // 0x1cff84: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x1cff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
    // 0x1cff88: 0x240300fe  addiu       $v1, $zero, 0xFE
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1cff8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cff90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cff94: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1cff94u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cff98: 0x0  nop
    ctx->pc = 0x1cff98u;
    // NOP
    // 0x1cff9c: 0x0  nop
    ctx->pc = 0x1cff9cu;
    // NOP
    // 0x1cffa0: 0x1010  mfhi        $v0
    ctx->pc = 0x1cffa0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1cffa4: 0xa0823026  sb          $v0, 0x3026($a0)
    ctx->pc = 0x1cffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12326), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cffa8: 0xc78387d8  lwc1        $f3, -0x7828($gp)
    ctx->pc = 0x1cffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cffac: 0xc78280d4  lwc1        $f2, -0x7F2C($gp)
    ctx->pc = 0x1cffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cffb0: 0xc78480d8  lwc1        $f4, -0x7F28($gp)
    ctx->pc = 0x1cffb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cffb4: 0xc78187d4  lwc1        $f1, -0x782C($gp)
    ctx->pc = 0x1cffb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cffb8: 0x46030142  mul.s       $f5, $f0, $f3
    ctx->pc = 0x1cffb8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1cffbc: 0x46031000  add.s       $f0, $f2, $f3
    ctx->pc = 0x1cffbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x1cffc0: 0xe78080d4  swc1        $f0, -0x7F2C($gp)
    ctx->pc = 0x1cffc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934740), bits); }
    // 0x1cffc4: 0xc78080d4  lwc1        $f0, -0x7F2C($gp)
    ctx->pc = 0x1cffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffc8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1cffc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1cffcc: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1cffccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cffd0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFFD0u;
    {
        const bool branch_taken_0x1cffd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFFD0u;
        // 0x1cffd4: 0xe78187d4  swc1        $f1, -0x782C($gp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936532), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffd0) {
            ctx->pc = 0x1CFFE0u;
            goto label_1cffe0;
        }
    }
    ctx->pc = 0x1CFFD8u;
    // 0x1cffd8: 0xe78580d4  swc1        $f5, -0x7F2C($gp)
    ctx->pc = 0x1cffd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294934740), bits); }
    // 0x1cffdc: 0x0  nop
    ctx->pc = 0x1cffdcu;
    // NOP
label_1cffe0:
    // 0x1cffe0: 0x3c02437e  lui         $v0, 0x437E
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17278 << 16));
    // 0x1cffe4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cffe8: 0xc78087d4  lwc1        $f0, -0x782C($gp)
    ctx->pc = 0x1cffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cffec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1cffecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1cfff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1cfff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cfff4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1CFFF4u;
    {
        const bool branch_taken_0x1cfff4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cfff4) {
            ctx->pc = 0x1D0000u;
            goto label_1d0000;
        }
    }
    ctx->pc = 0x1CFFFCu;
    // 0x1cfffc: 0xe78187d4  swc1        $f1, -0x782C($gp)
    ctx->pc = 0x1cfffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936532), bits); }
label_1d0000:
    // 0x1d0000: 0x90853023  lbu         $a1, 0x3023($a0)
    ctx->pc = 0x1d0000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12323)));
    // 0x1d0004: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d0004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d0008: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d0008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d000c: 0x8c443030  lw          $a0, 0x3030($v0)
    ctx->pc = 0x1d000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12336)));
    // 0x1d0010: 0xc073784  jal         func_1CDE10
    ctx->pc = 0x1D0010u;
    SET_GPR_U32(ctx, 31, 0x1D0018u);
    ctx->pc = 0x1D0014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0010u;
    // 0x1d0014: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDE10u, 0x1D0010u, 0x1D0018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0018u;
label_1d0018:
    // 0x1d0018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d001c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D001Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D001Cu;
        // 0x1d0020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D001Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0024u;
}
