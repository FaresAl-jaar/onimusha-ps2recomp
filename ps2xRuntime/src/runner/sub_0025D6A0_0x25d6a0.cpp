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

// Function: sub_0025D6A0
// Address: 0x25d6a0 - 0x25d724
void sub_0025D6A0_0x25d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D6A0_0x25d6a0");
#endif

    ctx->pc = 0x25d6a0u;

    // 0x25d6a0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x25d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25d6a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x25d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x25d6a8: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x25d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x25d6ac: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x25d6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25d6b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25d6b4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x25d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x25d6b8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x25d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x25d6bc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x25d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x25d6c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D6C0u;
    {
        const bool branch_taken_0x25d6c0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x25D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6C0u;
        // 0x25d6c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6c0) {
            ctx->pc = 0x25D6D4u;
            goto label_25d6d4;
        }
    }
    ctx->pc = 0x25D6C8u;
    // 0x25d6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d6cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25D6CCu;
    {
        const bool branch_taken_0x25d6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6CCu;
        // 0x25d6d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6cc) {
            ctx->pc = 0x25D6ECu;
            goto label_25d6ec;
        }
    }
    ctx->pc = 0x25D6D4u;
label_25d6d4:
    // 0x25d6d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25d6d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x25d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x25d6dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d6dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d6e0: 0x0  nop
    ctx->pc = 0x25d6e0u;
    // NOP
    // 0x25d6e4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x25d6e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25d6e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x25d6e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_25d6ec:
    // 0x25d6ec: 0x3c033580  lui         $v1, 0x3580
    ctx->pc = 0x25d6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13696 << 16));
    // 0x25d6f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x25d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x25d6f4: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x25d6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x25d6f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25d6f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d700: 0x0  nop
    ctx->pc = 0x25d700u;
    // NOP
    // 0x25d704: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x25d704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25d708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25d708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25d70c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x25d70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d710: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x25D710u;
    {
        const bool branch_taken_0x25d710 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D710u;
        // 0x25d714: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d710) {
            ctx->pc = 0x25D71Cu;
            goto label_25d71c;
        }
    }
    ctx->pc = 0x25D718u;
    // 0x25d718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25d718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d71c:
    // 0x25d71c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D71Cu;
        // 0x25d720: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D724u;
}
