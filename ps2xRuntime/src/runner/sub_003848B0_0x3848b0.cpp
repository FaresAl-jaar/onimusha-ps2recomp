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

// Function: sub_003848B0
// Address: 0x3848b0 - 0x384990
void sub_003848B0_0x3848b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003848B0_0x3848b0");
#endif

    switch (ctx->pc) {
        case 0x384900u: goto label_384900;
        case 0x384928u: goto label_384928;
        default: break;
    }

    ctx->pc = 0x3848b0u;

    // 0x3848b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3848b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3848b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3848b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3848b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3848b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3848bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3848bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3848c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3848c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3848c4: 0x2463c678  addiu       $v1, $v1, -0x3988
    ctx->pc = 0x3848c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952568));
    // 0x3848c8: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x3848c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3848cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3848ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3848d0: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3848d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3848d4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3848d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3848d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3848d8u;
    { uint32_t bits = FAST_READ32(0x65C678u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3848dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3848dcu;
    { uint32_t bits = FAST_READ32(0x65C67Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3848e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3848e0u;
    { uint32_t bits = FAST_READ32(0x65C680u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3848e4: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x3848e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3848e8: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x3848e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3848ec: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x3848ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x3848f0: 0xa4820028  sh          $v0, 0x28($a0)
    ctx->pc = 0x3848f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 2));
    // 0x3848f4: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x3848f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x3848f8: 0xc0f8cf8  jal         func_3E33E0
    ctx->pc = 0x3848F8u;
    SET_GPR_U32(ctx, 31, 0x384900u);
    ctx->pc = 0x3848FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848F8u;
    // 0x3848fc: 0xa080002e  sb          $zero, 0x2E($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 46), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E33E0u, 0x3848F8u, 0x384900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384900u;
label_384900:
    // 0x384900: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x384900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x384904: 0x82020030  lb          $v0, 0x30($s0)
    ctx->pc = 0x384904u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384908: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x384908u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x38490c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x38490Cu;
    {
        const bool branch_taken_0x38490c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x38490c) {
            ctx->pc = 0x384920u;
            goto label_384920;
        }
    }
    ctx->pc = 0x384914u;
    // 0x384914: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x384914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x384918: 0xa2020030  sb          $v0, 0x30($s0)
    ctx->pc = 0x384918u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x38491c: 0x0  nop
    ctx->pc = 0x38491cu;
    // NOP
label_384920:
    // 0x384920: 0xc0e1314  jal         func_384C50
    ctx->pc = 0x384920u;
    SET_GPR_U32(ctx, 31, 0x384928u);
    ctx->pc = 0x384924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384920u;
    // 0x384924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C50u, 0x384920u, 0x384928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384928u;
label_384928:
    // 0x384928: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x384928u;
    {
        const bool branch_taken_0x384928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x384928) {
            ctx->pc = 0x384968u;
            goto label_384968;
        }
    }
    ctx->pc = 0x384930u;
    // 0x384930: 0x82030030  lb          $v1, 0x30($s0)
    ctx->pc = 0x384930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384934: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x384934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x384938: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x384938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x38493c: 0x82030030  lb          $v1, 0x30($s0)
    ctx->pc = 0x38493cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384940: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x384940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x384944: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x384944u;
    {
        const bool branch_taken_0x384944 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x384944) {
            ctx->pc = 0x384954u;
            goto label_384954;
        }
    }
    ctx->pc = 0x38494Cu;
    // 0x38494c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38494Cu;
    {
        const bool branch_taken_0x38494c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38494Cu;
        // 0x384950: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38494c) {
            ctx->pc = 0x384964u;
            goto label_384964;
        }
    }
    ctx->pc = 0x384954u;
label_384954:
    // 0x384954: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x384954u;
    {
        const bool branch_taken_0x384954 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x384954) {
            ctx->pc = 0x384964u;
            goto label_384964;
        }
    }
    ctx->pc = 0x38495Cu;
    // 0x38495c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x38495Cu;
    {
        const bool branch_taken_0x38495c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38495Cu;
        // 0x384960: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38495c) {
            ctx->pc = 0x384964u;
            goto label_384964;
        }
    }
    ctx->pc = 0x384964u;
label_384964:
    // 0x384964: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x384964u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
label_384968:
    // 0x384968: 0x8204002f  lb          $a0, 0x2F($s0)
    ctx->pc = 0x384968u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    // 0x38496c: 0x82030030  lb          $v1, 0x30($s0)
    ctx->pc = 0x38496cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x384970: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x384970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x384974: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x384974u;
    {
        const bool branch_taken_0x384974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x384974) {
            ctx->pc = 0x384980u;
            goto label_384980;
        }
    }
    ctx->pc = 0x38497Cu;
    // 0x38497c: 0xa200002f  sb          $zero, 0x2F($s0)
    ctx->pc = 0x38497cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 47), (uint8_t)GPR_U32(ctx, 0));
label_384980:
    // 0x384980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x384984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384988: 0x3e00008  jr          $ra
    ctx->pc = 0x384988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384988u;
        // 0x38498c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384990u;
}
