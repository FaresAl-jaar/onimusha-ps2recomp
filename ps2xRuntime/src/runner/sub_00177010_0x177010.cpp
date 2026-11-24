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

// Function: sub_00177010
// Address: 0x177010 - 0x1770b0
void sub_00177010_0x177010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177010_0x177010");
#endif

    switch (ctx->pc) {
        case 0x177050u: goto label_177050;
        default: break;
    }

    ctx->pc = 0x177010u;

    // 0x177010: 0xc7828634  lwc1        $f2, -0x79CC($gp)
    ctx->pc = 0x177010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177014: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x177014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x177018: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x177018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17701c: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x17701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x177020: 0xc7808638  lwc1        $f0, -0x79C8($gp)
    ctx->pc = 0x177020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177024: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x177024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x177028: 0xe7818634  swc1        $f1, -0x79CC($gp)
    ctx->pc = 0x177028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), bits); }
    // 0x17702c: 0xc7818634  lwc1        $f1, -0x79CC($gp)
    ctx->pc = 0x17702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177030: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x177030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x177034: 0xe7808638  swc1        $f0, -0x79C8($gp)
    ctx->pc = 0x177034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), bits); }
    // 0x177038: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x177038u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x17703c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x17703cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x177040: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x177040u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177044: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x177044u;
    {
        const bool branch_taken_0x177044 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177044u;
        // 0x177048: 0xa380863c  sb          $zero, -0x79C4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936124), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177044) {
            ctx->pc = 0x177070u;
            goto label_177070;
        }
    }
    ctx->pc = 0x17704Cu;
    // 0x17704c: 0x0  nop
    ctx->pc = 0x17704cu;
    // NOP
label_177050:
    // 0x177050: 0x9383863c  lbu         $v1, -0x79C4($gp)
    ctx->pc = 0x177050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x177054: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x177054u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x177058: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x177058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x17705c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x177060: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x177060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177064: 0x4500fffa  bc1f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x177064u;
    {
        const bool branch_taken_0x177064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x177068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177064u;
        // 0x177068: 0xa383863c  sb          $v1, -0x79C4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936124), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177064) {
            ctx->pc = 0x177050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177050;
        }
    }
    ctx->pc = 0x17706Cu;
    // 0x17706c: 0x0  nop
    ctx->pc = 0x17706cu;
    // NOP
label_177070:
    // 0x177070: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x177070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x177074: 0xe7828638  swc1        $f2, -0x79C8($gp)
    ctx->pc = 0x177074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), bits); }
    // 0x177078: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x177078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x17707c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x17707cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x177080: 0x0  nop
    ctx->pc = 0x177080u;
    // NOP
    // 0x177084: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x177084u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177088: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x177088u;
    {
        const bool branch_taken_0x177088 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x177088) {
            ctx->pc = 0x1770A8u;
            goto label_1770a8;
        }
    }
    ctx->pc = 0x177090u;
    // 0x177090: 0xc7818634  lwc1        $f1, -0x79CC($gp)
    ctx->pc = 0x177090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x177094: 0xc7808638  lwc1        $f0, -0x79C8($gp)
    ctx->pc = 0x177094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177098: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x177098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x17709c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17709cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1770a0: 0xe7818634  swc1        $f1, -0x79CC($gp)
    ctx->pc = 0x1770a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), bits); }
    // 0x1770a4: 0xe7808638  swc1        $f0, -0x79C8($gp)
    ctx->pc = 0x1770a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), bits); }
label_1770a8:
    // 0x1770a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1770A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1770A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1770B0u;
}
