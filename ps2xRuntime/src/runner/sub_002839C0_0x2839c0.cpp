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

// Function: sub_002839C0
// Address: 0x2839c0 - 0x283a78
void sub_002839C0_0x2839c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002839C0_0x2839c0");
#endif

    switch (ctx->pc) {
        case 0x2839e0u: goto label_2839e0;
        default: break;
    }

    ctx->pc = 0x2839c0u;

    // 0x2839c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2839c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2839c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2839c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2839c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2839c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2839cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2839ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2839d0: 0x8e0507c8  lw          $a1, 0x7C8($s0)
    ctx->pc = 0x2839d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1992)));
    // 0x2839d4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2839d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2839d8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2839D8u;
    SET_GPR_U32(ctx, 31, 0x2839E0u);
    ctx->pc = 0x2839DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2839D8u;
    // 0x2839dc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2839D8u, 0x2839E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2839E0u;
label_2839e0:
    // 0x2839e0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2839e4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2839e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2839e8: 0x8c630080  lw          $v1, 0x80($v1)
    ctx->pc = 0x2839e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2839ec: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x2839ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4));
    // 0x2839f0: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x2839f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x2839f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2839F4u;
    {
        const bool branch_taken_0x2839f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839F4u;
        // 0x2839f8: 0xa2000238  sb          $zero, 0x238($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 568), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839f4) {
            ctx->pc = 0x283A40u;
            goto label_283a40;
        }
    }
    ctx->pc = 0x2839FCu;
    // 0x2839fc: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x2839fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x283a00: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x283a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x283a04: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x283A04u;
    {
        const bool branch_taken_0x283a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x283a04) {
            ctx->pc = 0x283A40u;
            goto label_283a40;
        }
    }
    ctx->pc = 0x283A0Cu;
    // 0x283a0c: 0xc4412b24  lwc1        $f1, 0x2B24($v0)
    ctx->pc = 0x283a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a10: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x283a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283a14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x283a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283a18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x283A18u;
    {
        const bool branch_taken_0x283a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283a18) {
            ctx->pc = 0x283A28u;
            goto label_283a28;
        }
    }
    ctx->pc = 0x283A20u;
    // 0x283a20: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x283a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x283a24: 0x0  nop
    ctx->pc = 0x283a24u;
    // NOP
label_283a28:
    // 0x283a28: 0x78442b20  lq          $a0, 0x2B20($v0)
    ctx->pc = 0x283a28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x283a2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283a30: 0x7e0400d0  sq          $a0, 0xD0($s0)
    ctx->pc = 0x283a30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 4));
    // 0x283a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283A34u;
    {
        const bool branch_taken_0x283a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A34u;
        // 0x283a38: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a34) {
            ctx->pc = 0x283A58u;
            goto label_283a58;
        }
    }
    ctx->pc = 0x283A3Cu;
    // 0x283a3c: 0x0  nop
    ctx->pc = 0x283a3cu;
    // NOP
label_283a40:
    // 0x283a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283A40u;
    {
        const bool branch_taken_0x283a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a40) {
            ctx->pc = 0x283A58u;
            goto label_283a58;
        }
    }
    ctx->pc = 0x283A48u;
    // 0x283a48: 0x78440020  lq          $a0, 0x20($v0)
    ctx->pc = 0x283a48u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x283a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x283a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283a50: 0x7e0400d0  sq          $a0, 0xD0($s0)
    ctx->pc = 0x283a50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 4));
    // 0x283a54: 0xae0300dc  sw          $v1, 0xDC($s0)
    ctx->pc = 0x283a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
label_283a58:
    // 0x283a58: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x283a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x283a5c: 0x8c630094  lw          $v1, 0x94($v1)
    ctx->pc = 0x283a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x283a60: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x283a60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x283a64: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x283a64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
    // 0x283a68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283a6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283a6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x283a70: 0x3e00008  jr          $ra
    ctx->pc = 0x283A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A70u;
        // 0x283a74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A78u;
}
