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

// Function: sub_00301FE0
// Address: 0x301fe0 - 0x30205c
void sub_00301FE0_0x301fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301FE0_0x301fe0");
#endif

    switch (ctx->pc) {
        case 0x302018u: goto label_302018;
        case 0x302040u: goto label_302040;
        default: break;
    }

    ctx->pc = 0x301fe0u;

    // 0x301fe0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x301fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x301fe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x301fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x301fe8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x301fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x301fec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x301fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x301ff0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x301ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x301ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x301ff8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x301ffc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x301ffcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x302000: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x302000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302004: 0x8e450530  lw          $a1, 0x530($s2)
    ctx->pc = 0x302004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x302008: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x302008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30200c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30200cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x302010: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x302010u;
    SET_GPR_U32(ctx, 31, 0x302018u);
    ctx->pc = 0x302014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302010u;
    // 0x302014: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x302010u, 0x302018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302018u;
label_302018:
    // 0x302018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x302018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30201c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30201Cu;
    {
        const bool branch_taken_0x30201c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x30201c) {
            ctx->pc = 0x302040u;
            goto label_302040;
        }
    }
    ctx->pc = 0x302024u;
    // 0x302024: 0x92480538  lbu         $t0, 0x538($s2)
    ctx->pc = 0x302024u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1336)));
    // 0x302028: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x302028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30202c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30202cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x302030: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x302030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302034: 0x264401c0  addiu       $a0, $s2, 0x1C0
    ctx->pc = 0x302034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 448));
    // 0x302038: 0xc09fc84  jal         func_27F210
    ctx->pc = 0x302038u;
    SET_GPR_U32(ctx, 31, 0x302040u);
    ctx->pc = 0x30203Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302038u;
    // 0x30203c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27F210u, 0x302038u, 0x302040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302040u;
label_302040:
    // 0x302040: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x302040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x302044: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x302044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x302048: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x302048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30204c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x30204cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x302050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x302050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x302054: 0x3e00008  jr          $ra
    ctx->pc = 0x302054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302054u;
        // 0x302058: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30205Cu;
}
