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

// Function: sub_003DB740
// Address: 0x3db740 - 0x3db81c
void sub_003DB740_0x3db740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB740_0x3db740");
#endif

    ctx->pc = 0x3db740u;

    // 0x3db740: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3db740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3db744: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3db744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3db748: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB748u;
    {
        const bool branch_taken_0x3db748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db748) {
            ctx->pc = 0x3DB760u;
            goto label_3db760;
        }
    }
    ctx->pc = 0x3DB750u;
    // 0x3db750: 0x8c832bdc  lw          $v1, 0x2BDC($a0)
    ctx->pc = 0x3db750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11228)));
    // 0x3db754: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3db754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db758: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB758u;
    {
        const bool branch_taken_0x3db758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB758u;
        // 0x3db75c: 0xe4802ba0  swc1        $f0, 0x2BA0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db758) {
            ctx->pc = 0x3DB768u;
            goto label_3db768;
        }
    }
    ctx->pc = 0x3DB760u;
label_3db760:
    // 0x3db760: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3db760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db764: 0xe4802ba0  swc1        $f0, 0x2BA0($a0)
    ctx->pc = 0x3db764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11168), bits); }
label_3db768:
    // 0x3db768: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x3db768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x3db76c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB76Cu;
    {
        const bool branch_taken_0x3db76c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db76c) {
            ctx->pc = 0x3DB788u;
            goto label_3db788;
        }
    }
    ctx->pc = 0x3DB774u;
    // 0x3db774: 0x8c832bdc  lw          $v1, 0x2BDC($a0)
    ctx->pc = 0x3db774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11228)));
    // 0x3db778: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3db778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db77c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB77Cu;
    {
        const bool branch_taken_0x3db77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB77Cu;
        // 0x3db780: 0xe4802ba4  swc1        $f0, 0x2BA4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11172), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db77c) {
            ctx->pc = 0x3DB790u;
            goto label_3db790;
        }
    }
    ctx->pc = 0x3DB784u;
    // 0x3db784: 0x0  nop
    ctx->pc = 0x3db784u;
    // NOP
label_3db788:
    // 0x3db788: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3db788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db78c: 0xe4802ba4  swc1        $f0, 0x2BA4($a0)
    ctx->pc = 0x3db78cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11172), bits); }
label_3db790:
    // 0x3db790: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x3db790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3db794: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DB794u;
    {
        const bool branch_taken_0x3db794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3db794) {
            ctx->pc = 0x3DB7B0u;
            goto label_3db7b0;
        }
    }
    ctx->pc = 0x3DB79Cu;
    // 0x3db79c: 0x8c832bdc  lw          $v1, 0x2BDC($a0)
    ctx->pc = 0x3db79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11228)));
    // 0x3db7a0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3db7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db7a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB7A4u;
    {
        const bool branch_taken_0x3db7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB7A4u;
        // 0x3db7a8: 0xe4802ba8  swc1        $f0, 0x2BA8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db7a4) {
            ctx->pc = 0x3DB7B8u;
            goto label_3db7b8;
        }
    }
    ctx->pc = 0x3DB7ACu;
    // 0x3db7ac: 0x0  nop
    ctx->pc = 0x3db7acu;
    // NOP
label_3db7b0:
    // 0x3db7b0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3db7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db7b4: 0xe4802ba8  swc1        $f0, 0x2BA8($a0)
    ctx->pc = 0x3db7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11176), bits); }
label_3db7b8:
    // 0x3db7b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3db7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3db7bc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db7c0: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x3db7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x3db7c4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3db7c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3db7c8: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3db7c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3db7cc: 0x3c034461  lui         $v1, 0x4461
    ctx->pc = 0x3db7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17505 << 16));
    // 0x3db7d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3db7d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3db7d4: 0x0  nop
    ctx->pc = 0x3db7d4u;
    // NOP
    // 0x3db7d8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db7d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db7dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3db7dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3db7e0: 0xe4812bc0  swc1        $f1, 0x2BC0($a0)
    ctx->pc = 0x3db7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11200), bits); }
    // 0x3db7e4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db7e8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db7e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db7ec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3db7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3db7f0: 0xe4812bc4  swc1        $f1, 0x2BC4($a0)
    ctx->pc = 0x3db7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11204), bits); }
    // 0x3db7f4: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3db7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3db7f8: 0x46011843  div.s       $f1, $f3, $f1
    ctx->pc = 0x3db7f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x3db7fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3db7fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3db800: 0xe4802bc8  swc1        $f0, 0x2BC8($a0)
    ctx->pc = 0x3db800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11208), bits); }
    // 0x3db804: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x3db804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3db808: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x3db808u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x3db80c: 0x0  nop
    ctx->pc = 0x3db80cu;
    // NOP
    // 0x3db810: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3db810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3db814: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB814u;
        // 0x3db818: 0xe4802bcc  swc1        $f0, 0x2BCC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 11212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB81Cu;
}
