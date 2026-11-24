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

// Function: sub_0025A230
// Address: 0x25a230 - 0x25a2d8
void sub_0025A230_0x25a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A230_0x25a230");
#endif

    switch (ctx->pc) {
        case 0x25a254u: goto label_25a254;
        case 0x25a274u: goto label_25a274;
        case 0x25a280u: goto label_25a280;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2b0u: goto label_25a2b0;
        default: break;
    }

    ctx->pc = 0x25a230u;

    // 0x25a230: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a244: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x25a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25a248: 0xc4ad0000  lwc1        $f13, 0x0($a1)
    ctx->pc = 0x25a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a24c: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25A24Cu;
    SET_GPR_U32(ctx, 31, 0x25A254u);
    ctx->pc = 0x25A250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A24Cu;
    // 0x25a250: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25A24Cu, 0x25A254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A254u;
label_25a254:
    // 0x25a254: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25a254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25a258: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25a258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25a25c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x25a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25a260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a264: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a268: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25a268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25a26c: 0xc041534  jal         func_1054D0
    ctx->pc = 0x25A26Cu;
    SET_GPR_U32(ctx, 31, 0x25A274u);
    ctx->pc = 0x25A270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A26Cu;
    // 0x25a270: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x25A26Cu, 0x25A274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A274u;
label_25a274:
    // 0x25a274: 0xc7ad0030  lwc1        $f13, 0x30($sp)
    ctx->pc = 0x25a274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a278: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25A278u;
    SET_GPR_U32(ctx, 31, 0x25A280u);
    ctx->pc = 0x25A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A278u;
    // 0x25a27c: 0xc7ac0038  lwc1        $f12, 0x38($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25A278u, 0x25A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A280u;
label_25a280:
    // 0x25a280: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x25a280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x25a284: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25a284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25a288: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a28c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25a28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a290: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25a290u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25a294: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25a298: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x25a298u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x25a29c: 0xc041588  jal         func_105620
    ctx->pc = 0x25A29Cu;
    SET_GPR_U32(ctx, 31, 0x25A2A4u);
    ctx->pc = 0x25A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A29Cu;
    // 0x25a2a0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x25A29Cu, 0x25A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2A4u;
label_25a2a4:
    // 0x25a2a4: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x25a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a2a8: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x25A2A8u;
    SET_GPR_U32(ctx, 31, 0x25A2B0u);
    ctx->pc = 0x25A2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2A8u;
    // 0x25a2ac: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x25A2A8u, 0x25A2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2B0u;
label_25a2b0:
    // 0x25a2b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x25a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x25a2b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25a2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a2b8: 0x0  nop
    ctx->pc = 0x25a2b8u;
    // NOP
    // 0x25a2bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x25a2bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25a2c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25a2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25a2c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25a2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25a2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2D0u;
        // 0x25a2d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A2D8u;
}
