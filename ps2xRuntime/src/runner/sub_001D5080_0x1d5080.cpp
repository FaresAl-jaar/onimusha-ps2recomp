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

// Function: sub_001D5080
// Address: 0x1d5080 - 0x1d5154
void sub_001D5080_0x1d5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5080_0x1d5080");
#endif

    switch (ctx->pc) {
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d510cu: goto label_1d510c;
        default: break;
    }

    ctx->pc = 0x1d5080u;

    // 0x1d5080: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x1d5080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1d5084: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d5088: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d5088u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d508c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d508cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d5090: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1d5090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d5094: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5098: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1d5098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1d509c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d50a0: 0x339b8  dsll        $a3, $v1, 6
    ctx->pc = 0x1d50a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 6);
    // 0x1d50a4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1d50a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1d50a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d50ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d50acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d50b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d50b4: 0x34e70006  ori         $a3, $a3, 0x6
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6);
    // 0x1d50b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d50b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d50bc: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x1d50bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1d50c0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d50c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d50c4: 0x71bfc  dsll32      $v1, $a3, 15
    ctx->pc = 0x1d50c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 15));
    // 0x1d50c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d50c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d50cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d50ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1d50d0: 0x24020551  addiu       $v0, $zero, 0x551
    ctx->pc = 0x1d50d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1361));
    // 0x1d50d4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1d50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x1d50d8: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1d50d8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1d50dc: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x1d50dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x1d50e0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1d50e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d50e4: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x1d50e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x1d50e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d50e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50ec: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1d50ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1d50f0: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D50F0u;
    SET_GPR_U32(ctx, 31, 0x1D50F8u);
    ctx->pc = 0x1D50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50F0u;
    // 0x1d50f4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D50F0u, 0x1D50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50F8u;
label_1d50f8:
    // 0x1d50f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d50f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d50fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d50fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5100: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d5100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5104: 0xc075140  jal         func_1D4500
    ctx->pc = 0x1D5104u;
    SET_GPR_U32(ctx, 31, 0x1D510Cu);
    ctx->pc = 0x1D5108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5104u;
    // 0x1d5108: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4500u, 0x1D5104u, 0x1D510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D510Cu;
label_1d510c:
    // 0x1d510c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5110: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d5110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d5114: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d5118: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d511c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1d511cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d5120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5124: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1d5124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d5128: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d5128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d512c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d512cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5130: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5134: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1d5134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1d5138: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1d5138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1d513c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d513cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5140: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d5140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1d5144: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x1d5148: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1d5148u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1d514c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D514Cu;
        // 0x1d5150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5154u;
}
