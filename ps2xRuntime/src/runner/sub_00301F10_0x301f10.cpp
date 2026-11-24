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

// Function: sub_00301F10
// Address: 0x301f10 - 0x301fe0
void sub_00301F10_0x301f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301F10_0x301f10");
#endif

    switch (ctx->pc) {
        case 0x301f70u: goto label_301f70;
        case 0x301facu: goto label_301fac;
        default: break;
    }

    ctx->pc = 0x301f10u;

    // 0x301f10: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x301f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x301f14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x301f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x301f18: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x301f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x301f1c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x301f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x301f20: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x301f20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f24: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x301f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x301f28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x301f28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f2c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x301f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x301f30: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x301f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x301f34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x301f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x301f38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x301f38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x301f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x301f40: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x301f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x301f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x301f48: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x301f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f4c: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x301f4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x301f50: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x301f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f54: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x301f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x301f58: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x301f58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f5c: 0x8ea50530  lw          $a1, 0x530($s5)
    ctx->pc = 0x301f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1328)));
    // 0x301f60: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x301f60u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x301f64: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x301f64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x301f68: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x301F68u;
    SET_GPR_U32(ctx, 31, 0x301F70u);
    ctx->pc = 0x301F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301F68u;
    // 0x301f6c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x301F68u, 0x301F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301F70u;
label_301f70:
    // 0x301f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x301f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f74: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x301F74u;
    {
        const bool branch_taken_0x301f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x301f74) {
            ctx->pc = 0x301FB0u;
            goto label_301fb0;
        }
    }
    ctx->pc = 0x301F7Cu;
    // 0x301f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x301f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x301f80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x301f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f84: 0xffb60008  sd          $s6, 0x8($sp)
    ctx->pc = 0x301f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 22));
    // 0x301f88: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x301f88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f8c: 0x92a90538  lbu         $t1, 0x538($s5)
    ctx->pc = 0x301f8cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1336)));
    // 0x301f90: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x301f90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x301f94: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x301f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x301f98: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x301f98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301f9c: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x301f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301fa0: 0x26a401c0  addiu       $a0, $s5, 0x1C0
    ctx->pc = 0x301fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
    // 0x301fa4: 0xc09fbac  jal         func_27EEB0
    ctx->pc = 0x301FA4u;
    SET_GPR_U32(ctx, 31, 0x301FACu);
    ctx->pc = 0x301FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301FA4u;
    // 0x301fa8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EEB0u, 0x301FA4u, 0x301FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301FACu;
label_301fac:
    // 0x301fac: 0x0  nop
    ctx->pc = 0x301facu;
    // NOP
label_301fb0:
    // 0x301fb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x301fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x301fb4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x301fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x301fb8: 0xc7b50014  lwc1        $f21, 0x14($sp)
    ctx->pc = 0x301fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x301fbc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x301fbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301fc0: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x301fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301fc4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x301fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301fc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x301fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x301fcc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x301fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x301fd0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x301fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x301fd4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x301fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x301fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x301FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301FD8u;
        // 0x301fdc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301FE0u;
}
