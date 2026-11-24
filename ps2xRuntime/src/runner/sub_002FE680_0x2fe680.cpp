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

// Function: sub_002FE680
// Address: 0x2fe680 - 0x2fe728
void sub_002FE680_0x2fe680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE680_0x2fe680");
#endif

    switch (ctx->pc) {
        case 0x2fe700u: goto label_2fe700;
        default: break;
    }

    ctx->pc = 0x2fe680u;

    // 0x2fe680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe684: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe688: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fe688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fe68c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe690: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x2fe690u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x2fe694: 0x78235c20  lq          $v1, 0x5C20($at)
    ctx->pc = 0x2fe694u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C20u));
    // 0x2fe698: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2fe698u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2fe69c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe6a0: 0x78235c30  lq          $v1, 0x5C30($at)
    ctx->pc = 0x2fe6a0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C30u));
    // 0x2fe6a4: 0x7c830030  sq          $v1, 0x30($a0)
    ctx->pc = 0x2fe6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
    // 0x2fe6a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe6ac: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x2fe6acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x2fe6b0: 0x7c830040  sq          $v1, 0x40($a0)
    ctx->pc = 0x2fe6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
    // 0x2fe6b4: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe6b8: 0x78235c50  lq          $v1, 0x5C50($at)
    ctx->pc = 0x2fe6b8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C50u));
    // 0x2fe6bc: 0x7c830050  sq          $v1, 0x50($a0)
    ctx->pc = 0x2fe6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 3));
    // 0x2fe6c0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe6c4: 0x78235c10  lq          $v1, 0x5C10($at)
    ctx->pc = 0x2fe6c4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C10u));
    // 0x2fe6c8: 0x7c830060  sq          $v1, 0x60($a0)
    ctx->pc = 0x2fe6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 3));
    // 0x2fe6cc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x2fe6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x2fe6d0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2fe6d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fe6d4: 0x7c830070  sq          $v1, 0x70($a0)
    ctx->pc = 0x2fe6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 3));
    // 0x2fe6d8: 0x78235c70  lq          $v1, 0x5C70($at)
    ctx->pc = 0x2fe6d8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C70u));
    // 0x2fe6dc: 0x7c830080  sq          $v1, 0x80($a0)
    ctx->pc = 0x2fe6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 3));
    // 0x2fe6e0: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x2fe6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2fe6e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fe6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fe6e8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FE6E8u;
    {
        const bool branch_taken_0x2fe6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE6E8u;
        // 0x2fe6ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe6e8) {
            ctx->pc = 0x2FE710u;
            goto label_2fe710;
        }
    }
    ctx->pc = 0x2FE6F0u;
    // 0x2fe6f0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x2fe6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2fe6f4: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x2fe6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2fe6f8: 0xc096cb8  jal         func_25B2E0
    ctx->pc = 0x2FE6F8u;
    SET_GPR_U32(ctx, 31, 0x2FE700u);
    ctx->pc = 0x2FE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE6F8u;
    // 0x2fe6fc: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B2E0u, 0x2FE6F8u, 0x2FE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE700u;
label_2fe700:
    // 0x2fe700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE700u;
    {
        const bool branch_taken_0x2fe700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe700) {
            ctx->pc = 0x2FE710u;
            goto label_2fe710;
        }
    }
    ctx->pc = 0x2FE708u;
    // 0x2fe708: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2fe708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe70c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2fe70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_2fe710:
    // 0x2fe710: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x2fe710u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2fe714: 0x7e030050  sq          $v1, 0x50($s0)
    ctx->pc = 0x2fe714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 3));
    // 0x2fe718: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fe718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe71c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe71cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe720: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE720u;
        // 0x2fe724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE728u;
}
