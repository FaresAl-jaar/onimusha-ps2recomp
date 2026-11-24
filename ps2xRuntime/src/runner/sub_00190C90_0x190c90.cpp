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

// Function: sub_00190C90
// Address: 0x190c90 - 0x190d2c
void sub_00190C90_0x190c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190C90_0x190c90");
#endif

    switch (ctx->pc) {
        case 0x190cb4u: goto label_190cb4;
        case 0x190cc8u: goto label_190cc8;
        case 0x190cf0u: goto label_190cf0;
        default: break;
    }

    ctx->pc = 0x190c90u;

    // 0x190c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190c94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x190c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x190c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190c9c: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x190c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x190ca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ca4: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x190ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x190ca8: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x190ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x190cac: 0xc04bc58  jal         func_12F160
    ctx->pc = 0x190CACu;
    SET_GPR_U32(ctx, 31, 0x190CB4u);
    ctx->pc = 0x190CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CACu;
    // 0x190cb0: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F160u, 0x190CACu, 0x190CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CB4u;
label_190cb4:
    // 0x190cb4: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x190cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x190cb8: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x190cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x190cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190cc0: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x190CC0u;
    SET_GPR_U32(ctx, 31, 0x190CC8u);
    ctx->pc = 0x190CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CC0u;
    // 0x190cc4: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x190CC0u, 0x190CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CC8u;
label_190cc8:
    // 0x190cc8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x190ccc: 0x3c023ef5  lui         $v0, 0x3EF5
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16117 << 16));
    // 0x190cd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190cd4: 0x3442be0b  ori         $v0, $v0, 0xBE0B
    ctx->pc = 0x190cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48651);
    // 0x190cd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x190cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x190cdc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190cdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190ce0: 0x0  nop
    ctx->pc = 0x190ce0u;
    // NOP
    // 0x190ce4: 0x0  nop
    ctx->pc = 0x190ce4u;
    // NOP
    // 0x190ce8: 0xc047b5a  jal         func_11ED68
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x190CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190CE8u;
    // 0x190cec: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ED68u, 0x190CE8u, 0x190CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CF0u;
label_190cf0:
    // 0x190cf0: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x190cf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x190cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190cf8: 0x0  nop
    ctx->pc = 0x190cf8u;
    // NOP
    // 0x190cfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x190cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x190d00: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x190d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x190d04: 0xa600008c  sh          $zero, 0x8C($s0)
    ctx->pc = 0x190d04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 140), (uint16_t)GPR_U32(ctx, 0));
    // 0x190d08: 0xa600008a  sh          $zero, 0x8A($s0)
    ctx->pc = 0x190d08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x190d0c: 0xa6000088  sh          $zero, 0x88($s0)
    ctx->pc = 0x190d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 0));
    // 0x190d10: 0xae0010d0  sw          $zero, 0x10D0($s0)
    ctx->pc = 0x190d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4304), GPR_U32(ctx, 0));
    // 0x190d14: 0xae0010d4  sw          $zero, 0x10D4($s0)
    ctx->pc = 0x190d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4308), GPR_U32(ctx, 0));
    // 0x190d18: 0xae0010d8  sw          $zero, 0x10D8($s0)
    ctx->pc = 0x190d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4312), GPR_U32(ctx, 0));
    // 0x190d1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x190d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190d20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190d24: 0x3e00008  jr          $ra
    ctx->pc = 0x190D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D24u;
        // 0x190d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D2Cu;
}
