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

// Function: sub_003B49C0
// Address: 0x3b49c0 - 0x3b4a58
void sub_003B49C0_0x3b49c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B49C0_0x3b49c0");
#endif

    switch (ctx->pc) {
        case 0x3b49e8u: goto label_3b49e8;
        case 0x3b49f8u: goto label_3b49f8;
        case 0x3b4a04u: goto label_3b4a04;
        default: break;
    }

    ctx->pc = 0x3b49c0u;

    // 0x3b49c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b49c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b49c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b49c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b49c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b49c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b49cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b49ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b49d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b49d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49d4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x3b49d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b49d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b49d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b49dc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3b49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b49e0: 0xc096908  jal         func_25A420
    ctx->pc = 0x3B49E0u;
    SET_GPR_U32(ctx, 31, 0x3B49E8u);
    ctx->pc = 0x3B49E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49E0u;
    // 0x3b49e4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3B49E0u, 0x3B49E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49E8u;
label_3b49e8:
    // 0x3b49e8: 0xc78183f0  lwc1        $f1, -0x7C10($gp)
    ctx->pc = 0x3b49e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b49ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b49ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b49f0: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B49F0u;
    SET_GPR_U32(ctx, 31, 0x3B49F8u);
    ctx->pc = 0x3B49F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49F0u;
    // 0x3b49f4: 0x46010341  sub.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B49F0u, 0x3B49F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B49F8u;
label_3b49f8:
    // 0x3b49f8: 0xc78c83f4  lwc1        $f12, -0x7C0C($gp)
    ctx->pc = 0x3b49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b49fc: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B49FCu;
    SET_GPR_U32(ctx, 31, 0x3B4A04u);
    ctx->pc = 0x3B4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B49FCu;
    // 0x3b4a00: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B49FCu, 0x3B4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4A04u;
label_3b4a04:
    // 0x3b4a04: 0xc78483f4  lwc1        $f4, -0x7C0C($gp)
    ctx->pc = 0x3b4a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b4a08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4a0c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3b4a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b4a10: 0xc78283f8  lwc1        $f2, -0x7C08($gp)
    ctx->pc = 0x3b4a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4a14: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x3b4a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4a18: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3b4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3b4a1c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x3b4a1cu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x3b4a20: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3b4a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3b4a24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3b4a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3b4a28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b4a28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b4a2c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x3b4a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x3b4a30: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3b4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b4a34: 0xae0400f0  sw          $a0, 0xF0($s0)
    ctx->pc = 0x3b4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
    // 0x3b4a38: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x3b4a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x3b4a3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3b4a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b4a40: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x3b4a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
    // 0x3b4a44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b4a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b4a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b4a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4a50: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4A50u;
        // 0x3b4a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4A58u;
}
