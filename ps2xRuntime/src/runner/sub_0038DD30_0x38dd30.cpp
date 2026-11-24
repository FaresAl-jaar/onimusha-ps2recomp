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

// Function: sub_0038DD30
// Address: 0x38dd30 - 0x38de10
void sub_0038DD30_0x38dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DD30_0x38dd30");
#endif

    ctx->pc = 0x38dd30u;

    // 0x38dd30: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x38dd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38dd34: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x38dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x38dd38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x38dd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x38dd3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38dd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38dd40: 0x0  nop
    ctx->pc = 0x38dd40u;
    // NOP
    // 0x38dd44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38dd44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38dd48: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x38DD48u;
    {
        const bool branch_taken_0x38dd48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38dd48) {
            ctx->pc = 0x38DDB0u;
            goto label_38ddb0;
        }
    }
    ctx->pc = 0x38DD50u;
    // 0x38dd50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x38dd50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38dd54: 0x0  nop
    ctx->pc = 0x38dd54u;
    // NOP
    // 0x38dd58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x38dd58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38dd5c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x38DD5Cu;
    {
        const bool branch_taken_0x38dd5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x38dd5c) {
            ctx->pc = 0x38DD78u;
            goto label_38dd78;
        }
    }
    ctx->pc = 0x38DD64u;
    // 0x38dd64: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x38dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x38dd68: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x38dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x38dd6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x38dd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38dd70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x38DD70u;
    {
        const bool branch_taken_0x38dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DD70u;
        // 0x38dd74: 0xac820148  sw          $v0, 0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dd70) {
            ctx->pc = 0x38DDA8u;
            goto label_38dda8;
        }
    }
    ctx->pc = 0x38DD78u;
label_38dd78:
    // 0x38dd78: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x38dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x38dd7c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x38dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x38dd80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38dd80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38dd84: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x38dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x38dd88: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x38dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x38dd8c: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x38dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38dd90: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x38dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38dd94: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x38dd94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x38dd98: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x38dd98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x38dd9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38dd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38dda0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x38dda0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x38dda4: 0x0  nop
    ctx->pc = 0x38dda4u;
    // NOP
label_38dda8:
    // 0x38dda8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x38DDA8u;
    {
        const bool branch_taken_0x38dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDA8u;
        // 0x38ddac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dda8) {
            ctx->pc = 0x38DE08u;
            goto label_38de08;
        }
    }
    ctx->pc = 0x38DDB0u;
label_38ddb0:
    // 0x38ddb0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x38ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x38ddb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x38ddb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38ddb8: 0x0  nop
    ctx->pc = 0x38ddb8u;
    // NOP
    // 0x38ddbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x38ddbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x38ddc0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x38DDC0u;
    {
        const bool branch_taken_0x38ddc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x38ddc0) {
            ctx->pc = 0x38DE00u;
            goto label_38de00;
        }
    }
    ctx->pc = 0x38DDC8u;
    // 0x38ddc8: 0x8c830148  lw          $v1, 0x148($a0)
    ctx->pc = 0x38ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x38ddcc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x38ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x38ddd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x38ddd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x38ddd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ddd8: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x38ddd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x38dddc: 0xac830148  sw          $v1, 0x148($a0)
    ctx->pc = 0x38dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 3));
    // 0x38dde0: 0xc48128f0  lwc1        $f1, 0x28F0($a0)
    ctx->pc = 0x38dde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x38dde4: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x38dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38dde8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x38dde8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x38ddec: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x38ddecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x38ddf0: 0x0  nop
    ctx->pc = 0x38ddf0u;
    // NOP
    // 0x38ddf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38ddf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38ddf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38DDF8u;
    {
        const bool branch_taken_0x38ddf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DDF8u;
        // 0x38ddfc: 0xe4800024  swc1        $f0, 0x24($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ddf8) {
            ctx->pc = 0x38DE08u;
            goto label_38de08;
        }
    }
    ctx->pc = 0x38DE00u;
label_38de00:
    // 0x38de00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38de00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38de04: 0x0  nop
    ctx->pc = 0x38de04u;
    // NOP
label_38de08:
    // 0x38de08: 0x3e00008  jr          $ra
    ctx->pc = 0x38DE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DE10u;
}
