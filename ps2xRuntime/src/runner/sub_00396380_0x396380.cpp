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

// Function: sub_00396380
// Address: 0x396380 - 0x396400
void sub_00396380_0x396380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396380_0x396380");
#endif

    switch (ctx->pc) {
        case 0x3963a8u: goto label_3963a8;
        case 0x3963f0u: goto label_3963f0;
        default: break;
    }

    ctx->pc = 0x396380u;

    // 0x396380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x396380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x396384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x396384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x396388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x396388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39638c: 0x90832b33  lbu         $v1, 0x2B33($a0)
    ctx->pc = 0x39638cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11059)));
    // 0x396390: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x396390u;
    {
        const bool branch_taken_0x396390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396390u;
        // 0x396394: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396390) {
            ctx->pc = 0x3963F0u;
            goto label_3963f0;
        }
    }
    ctx->pc = 0x396398u;
    // 0x396398: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x396398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39639c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x39639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3963a0: 0xc0765a8  jal         func_1D96A0
    ctx->pc = 0x3963A0u;
    SET_GPR_U32(ctx, 31, 0x3963A8u);
    ctx->pc = 0x3963A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963A0u;
    // 0x3963a4: 0x260500c0  addiu       $a1, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D96A0u, 0x3963A0u, 0x3963A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3963A8u;
label_3963a8:
    // 0x3963a8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3963a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3963ac: 0x3c024299  lui         $v0, 0x4299
    ctx->pc = 0x3963acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17049 << 16));
    // 0x3963b0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3963b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3963b4: 0x7a040020  lq          $a0, 0x20($s0)
    ctx->pc = 0x3963b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3963b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3963b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3963bc: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x3963bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3963c0: 0x7c440030  sq          $a0, 0x30($v0)
    ctx->pc = 0x3963c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 4));
    // 0x3963c4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3963c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3963c8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3963c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3963cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x3963ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x3963d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3963d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3963d4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3963d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3963d8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x3963d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x3963dc: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x3963dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x3963e0: 0x8c640128  lw          $a0, 0x128($v1)
    ctx->pc = 0x3963e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x3963e4: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x3963e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x3963e8: 0xc0767b4  jal         func_1D9ED0
    ctx->pc = 0x3963E8u;
    SET_GPR_U32(ctx, 31, 0x3963F0u);
    ctx->pc = 0x3963ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3963E8u;
    // 0x3963ec: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9ED0u, 0x3963E8u, 0x3963F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3963F0u;
label_3963f0:
    // 0x3963f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3963f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3963f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3963f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3963f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3963F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3963FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3963F8u;
        // 0x3963fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3963F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396400u;
}
