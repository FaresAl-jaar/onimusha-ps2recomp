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

// Function: sub_001360D0
// Address: 0x1360d0 - 0x136194
void sub_001360D0_0x1360d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001360D0_0x1360d0");
#endif

    switch (ctx->pc) {
        case 0x136108u: goto label_136108;
        case 0x13613cu: goto label_13613c;
        default: break;
    }

    ctx->pc = 0x1360d0u;

    // 0x1360d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1360d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1360d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1360d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1360d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1360d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1360dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1360dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1360e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1360e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1360e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1360e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1360e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1360ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1360f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1360f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1360f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1360f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1360f8: 0x27b20074  addiu       $s2, $sp, 0x74
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x1360fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1360fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x136100: 0x27b10078  addiu       $s1, $sp, 0x78
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x136104: 0x27b0007c  addiu       $s0, $sp, 0x7C
    ctx->pc = 0x136104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_136108:
    // 0x136108: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x136108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13610c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x13610cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136110: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x136110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x136114: 0x24a5a560  addiu       $a1, $a1, -0x5AA0
    ctx->pc = 0x136114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944096));
    // 0x136118: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x136118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13611c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x13611cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x136120: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x136120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136124: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x136124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x136128: 0xc6800020  lwc1        $f0, 0x20($s4)
    ctx->pc = 0x136128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13612c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x13612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x136130: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x136130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136134: 0xc041442  jal         func_105108
    ctx->pc = 0x136134u;
    SET_GPR_U32(ctx, 31, 0x13613Cu);
    ctx->pc = 0x136138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136134u;
    // 0x136138: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x136134u, 0x13613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13613Cu;
label_13613c:
    // 0x13613c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x13613cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136140: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x136140u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x136144: 0x2aa30003  slti        $v1, $s5, 0x3
    ctx->pc = 0x136144u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x136148: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x136148u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x13614c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x13614cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x136150: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x136150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136154: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x136154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x136158: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x136158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13615c: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x13615cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x136160: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x136160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136164: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x136164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x136168: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x136168u;
    {
        const bool branch_taken_0x136168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136168u;
        // 0x13616c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136168) {
            ctx->pc = 0x136108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136108;
        }
    }
    ctx->pc = 0x136170u;
    // 0x136170: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x136170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x136174: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x136174u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x136178: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x136178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13617c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13617cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136180: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x136180u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13618c: 0x3e00008  jr          $ra
    ctx->pc = 0x13618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13618Cu;
        // 0x136190: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13618Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136194u;
}
