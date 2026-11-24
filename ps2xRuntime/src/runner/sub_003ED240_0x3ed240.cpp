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

// Function: sub_003ED240
// Address: 0x3ed240 - 0x3ed298
void sub_003ED240_0x3ed240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED240_0x3ed240");
#endif

    switch (ctx->pc) {
        case 0x3ed27cu: goto label_3ed27c;
        case 0x3ed288u: goto label_3ed288;
        default: break;
    }

    ctx->pc = 0x3ed240u;

    // 0x3ed240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ed244: 0x3c024516  lui         $v0, 0x4516
    ctx->pc = 0x3ed244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17686 << 16));
    // 0x3ed248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ed24c: 0x344254f6  ori         $v0, $v0, 0x54F6
    ctx->pc = 0x3ed24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21750);
    // 0x3ed250: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ed254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ed254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ed258: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x3ed258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ed25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ed25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ed260: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3ed260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3ed264: 0xe48028f0  swc1        $f0, 0x28F0($a0)
    ctx->pc = 0x3ed264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 10480), bits); }
    // 0x3ed268: 0x90822ab0  lbu         $v0, 0x2AB0($a0)
    ctx->pc = 0x3ed268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x3ed26c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3ed26cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3ed270: 0xa0822ab0  sb          $v0, 0x2AB0($a0)
    ctx->pc = 0x3ed270u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ed274: 0xc097834  jal         func_25E0D0
    ctx->pc = 0x3ED274u;
    SET_GPR_U32(ctx, 31, 0x3ED27Cu);
    ctx->pc = 0x3ED278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED274u;
    // 0x3ed278: 0x8c842bb4  lw          $a0, 0x2BB4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E0D0u, 0x3ED274u, 0x3ED27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED27Cu;
label_3ed27c:
    // 0x3ed27c: 0xae022bb4  sw          $v0, 0x2BB4($s0)
    ctx->pc = 0x3ed27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11188), GPR_U32(ctx, 2));
    // 0x3ed280: 0xc0a6188  jal         func_298620
    ctx->pc = 0x3ED280u;
    SET_GPR_U32(ctx, 31, 0x3ED288u);
    ctx->pc = 0x3ED284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED280u;
    // 0x3ed284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298620u, 0x3ED280u, 0x3ED288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED288u;
label_3ed288:
    // 0x3ed288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ed28c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed28cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ed290: 0x3e00008  jr          $ra
    ctx->pc = 0x3ED290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED290u;
        // 0x3ed294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ED298u;
}
