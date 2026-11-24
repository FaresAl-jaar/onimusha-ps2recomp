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

// Function: sub_00301E70
// Address: 0x301e70 - 0x301f0c
void sub_00301E70_0x301e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301E70_0x301e70");
#endif

    switch (ctx->pc) {
        case 0x301eb8u: goto label_301eb8;
        case 0x301ee8u: goto label_301ee8;
        default: break;
    }

    ctx->pc = 0x301e70u;

    // 0x301e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x301e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x301e74: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x301e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x301e78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x301e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x301e7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x301e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x301e80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x301e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x301e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x301e88: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x301e8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x301e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x301e90: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x301e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x301e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x301e98: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x301e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301e9c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x301e9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x301ea0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x301ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ea4: 0x8e850530  lw          $a1, 0x530($s4)
    ctx->pc = 0x301ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1328)));
    // 0x301ea8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x301ea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x301eac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x301eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301eb0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x301EB0u;
    SET_GPR_U32(ctx, 31, 0x301EB8u);
    ctx->pc = 0x301EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EB0u;
    // 0x301eb4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301EB0u, 0x301EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EB8u;
label_301eb8:
    // 0x301eb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x301eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ebc: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x301EBCu;
    {
        const bool branch_taken_0x301ebc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x301ebc) {
            ctx->pc = 0x301EE8u;
            goto label_301ee8;
        }
    }
    ctx->pc = 0x301EC4u;
    // 0x301ec4: 0x92880538  lbu         $t0, 0x538($s4)
    ctx->pc = 0x301ec4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1336)));
    // 0x301ec8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x301ec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x301eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x301ed0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x301ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ed4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x301ed4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301ed8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x301ed8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301edc: 0x268401c0  addiu       $a0, $s4, 0x1C0
    ctx->pc = 0x301edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 448));
    // 0x301ee0: 0xc09fb38  jal         func_27ECE0
    ctx->pc = 0x301EE0u;
    SET_GPR_U32(ctx, 31, 0x301EE8u);
    ctx->pc = 0x301EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301EE0u;
    // 0x301ee4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27ECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27ECE0u, 0x301EE0u, 0x301EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301EE8u;
label_301ee8:
    // 0x301ee8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x301ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301eec: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x301eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301ef0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x301ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301ef4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x301ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301ef8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x301ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301efc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x301efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301f00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x301f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x301f04: 0x3e00008  jr          $ra
    ctx->pc = 0x301F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301F04u;
        // 0x301f08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301F0Cu;
}
