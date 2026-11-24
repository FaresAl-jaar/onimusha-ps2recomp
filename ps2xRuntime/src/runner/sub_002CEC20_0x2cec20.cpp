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

// Function: sub_002CEC20
// Address: 0x2cec20 - 0x2cecd4
void sub_002CEC20_0x2cec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEC20_0x2cec20");
#endif

    switch (ctx->pc) {
        case 0x2cec68u: goto label_2cec68;
        default: break;
    }

    ctx->pc = 0x2cec20u;

    // 0x2cec20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cec24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cec28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cec28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cec2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cec2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cec30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cec30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cec34: 0x9082011c  lbu         $v0, 0x11C($a0)
    ctx->pc = 0x2cec34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x2cec38: 0x8c90004c  lw          $s0, 0x4C($a0)
    ctx->pc = 0x2cec38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cec3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cec40: 0xa082011c  sb          $v0, 0x11C($a0)
    ctx->pc = 0x2cec40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2cec44: 0x94820030  lhu         $v0, 0x30($a0)
    ctx->pc = 0x2cec44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2cec48: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2cec48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2cec4c: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x2cec4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cec50: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2cec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2cec54: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2cec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2cec58: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2cec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2cec5c: 0xac430088  sw          $v1, 0x88($v0)
    ctx->pc = 0x2cec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 3));
    // 0x2cec60: 0xc0a83f8  jal         func_2A0FE0
    ctx->pc = 0x2CEC60u;
    SET_GPR_U32(ctx, 31, 0x2CEC68u);
    ctx->pc = 0x2CEC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC60u;
    // 0x2cec64: 0x8c84004c  lw          $a0, 0x4C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0FE0u, 0x2CEC60u, 0x2CEC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC68u;
label_2cec68:
    // 0x2cec68: 0x3c033fa6  lui         $v1, 0x3FA6
    ctx->pc = 0x2cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16294 << 16));
    // 0x2cec6c: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x2cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2cec70: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x2cec70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2cec74: 0x3c033f83  lui         $v1, 0x3F83
    ctx->pc = 0x2cec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16259 << 16));
    // 0x2cec78: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2cec78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2cec7c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cec7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cec80: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2cec80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cec84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cec84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cec88: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2cec88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2cec8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2cec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2cec90: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2cec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2cec94: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x2cec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cec98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2cec98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cec9c: 0xe46000e0  swc1        $f0, 0xE0($v1)
    ctx->pc = 0x2cec9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 224), bits); }
    // 0x2ceca0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2ceca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2ceca4: 0xc46000f4  lwc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ceca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceca8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ceca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cecac: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2cecacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2cecb0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2cecb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2cecb4: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x2cecb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cecb8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cecb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cecbc: 0xe4600108  swc1        $f0, 0x108($v1)
    ctx->pc = 0x2cecbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x2cecc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cecc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cecc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cecc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cecc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CECCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CECD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CECCCu;
        // 0x2cecd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CECCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CECD4u;
}
