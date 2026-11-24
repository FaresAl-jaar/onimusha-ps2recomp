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

// Function: sub_00135300
// Address: 0x135300 - 0x135394
void sub_00135300_0x135300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135300_0x135300");
#endif

    switch (ctx->pc) {
        case 0x135324u: goto label_135324;
        case 0x135380u: goto label_135380;
        default: break;
    }

    ctx->pc = 0x135300u;

    // 0x135300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x135300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x135304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x135304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x135308: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x135308u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13530c: 0x8f828020  lw          $v0, -0x7FE0($gp)
    ctx->pc = 0x13530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934560)));
    // 0x135310: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135314: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x135314u;
    {
        const bool branch_taken_0x135314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135314u;
        // 0x135318: 0xaf828020  sw          $v0, -0x7FE0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135314) {
            ctx->pc = 0x135328u;
            goto label_135328;
        }
    }
    ctx->pc = 0x13531Cu;
    // 0x13531c: 0xc04d444  jal         func_135110
    ctx->pc = 0x13531Cu;
    SET_GPR_U32(ctx, 31, 0x135324u);
    ctx->pc = 0x135110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135110u, 0x13531Cu, 0x135324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135324u;
label_135324:
    // 0x135324: 0x0  nop
    ctx->pc = 0x135324u;
    // NOP
label_135328:
    // 0x135328: 0x8f868530  lw          $a2, -0x7AD0($gp)
    ctx->pc = 0x135328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x13532c: 0x34039d2c  ori         $v1, $zero, 0x9D2C
    ctx->pc = 0x13532cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40236);
    // 0x135330: 0x3402efc6  ori         $v0, $zero, 0xEFC6
    ctx->pc = 0x135330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61382);
    // 0x135334: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x135334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x135338: 0x34855680  ori         $a1, $a0, 0x5680
    ctx->pc = 0x135338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22144);
    // 0x13533c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x13533cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x135340: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x135340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x135344: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x135344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x135348: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x135348u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13534c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x13534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x135350: 0xaf828530  sw          $v0, -0x7AD0($gp)
    ctx->pc = 0x135350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935856), GPR_U32(ctx, 2));
    // 0x135354: 0x412fa  dsrl        $v0, $a0, 11
    ctx->pc = 0x135354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 11);
    // 0x135358: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x135358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x13535c: 0x411f8  dsll        $v0, $a0, 7
    ctx->pc = 0x13535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 7);
    // 0x135360: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x135360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x135364: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x135364u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x135368: 0x413f8  dsll        $v0, $a0, 15
    ctx->pc = 0x135368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 15);
    // 0x13536c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x135370: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x135370u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x135374: 0x414ba  dsrl        $v0, $a0, 18
    ctx->pc = 0x135374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 18);
    // 0x135378: 0xc04008c  jal         func_100230
    ctx->pc = 0x135378u;
    SET_GPR_U32(ctx, 31, 0x135380u);
    ctx->pc = 0x13537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135378u;
    // 0x13537c: 0x822026  xor         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100230u, 0x135378u, 0x135380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135380u;
label_135380:
    // 0x135380: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x135380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x135384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135388: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x135388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13538c: 0x3e00008  jr          $ra
    ctx->pc = 0x13538Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13538Cu;
        // 0x135390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13538Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135394u;
}
