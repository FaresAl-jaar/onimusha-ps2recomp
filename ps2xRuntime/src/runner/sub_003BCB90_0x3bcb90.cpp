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

// Function: sub_003BCB90
// Address: 0x3bcb90 - 0x3bcc64
void sub_003BCB90_0x3bcb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCB90_0x3bcb90");
#endif

    switch (ctx->pc) {
        case 0x3bcbc8u: goto label_3bcbc8;
        case 0x3bcbd8u: goto label_3bcbd8;
        case 0x3bcc28u: goto label_3bcc28;
        default: break;
    }

    ctx->pc = 0x3bcb90u;

    // 0x3bcb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bcb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bcb94: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3bcb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x3bcb98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bcb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bcb9c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bcb9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bcba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bcba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bcba4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bcba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bcba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bcba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3BCBACu;
    {
        const bool branch_taken_0x3bcbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCBACu;
        // 0x3bcbb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcbac) {
            ctx->pc = 0x3BCBB8u;
            goto label_3bcbb8;
        }
    }
    ctx->pc = 0x3BCBB4u;
    // 0x3bcbb4: 0x24110016  addiu       $s1, $zero, 0x16
    ctx->pc = 0x3bcbb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_3bcbb8:
    // 0x3bcbb8: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x3bcbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x3bcbbc: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3bcbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3bcbc0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3BCBC0u;
    SET_GPR_U32(ctx, 31, 0x3BCBC8u);
    ctx->pc = 0x3BCBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBC0u;
    // 0x3bcbc4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3BCBC0u, 0x3BCBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBC8u;
label_3bcbc8:
    // 0x3bcbc8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3BCBC8u;
    {
        const bool branch_taken_0x3bcbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCBC8u;
        // 0x3bcbcc: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcbc8) {
            ctx->pc = 0x3BCC48u;
            goto label_3bcc48;
        }
    }
    ctx->pc = 0x3BCBD0u;
    // 0x3bcbd0: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3BCBD0u;
    SET_GPR_U32(ctx, 31, 0x3BCBD8u);
    ctx->pc = 0x3BCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBD0u;
    // 0x3bcbd4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3BCBD0u, 0x3BCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBD8u;
label_3bcbd8:
    // 0x3bcbd8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3bcbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3bcbdc: 0x860500c2  lh          $a1, 0xC2($s0)
    ctx->pc = 0x3bcbdcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3bcbe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3bcbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3bcbe4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3bcbe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbe8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3bcbe8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3bcbec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3bcbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3bcbf0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3bcbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3bcbf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3bcbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3bcbf8: 0x0  nop
    ctx->pc = 0x3bcbf8u;
    // NOP
    // 0x3bcbfc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3bcbfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3bcc00: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bcc00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bcc04: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3bcc04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3bcc08: 0x0  nop
    ctx->pc = 0x3bcc08u;
    // NOP
    // 0x3bcc0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3bcc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bcc10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3bcc10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3bcc14: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3bcc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3bcc18: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x3bcc18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3bcc1c: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x3bcc1cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x3bcc20: 0xc096750  jal         func_259D40
    ctx->pc = 0x3BCC20u;
    SET_GPR_U32(ctx, 31, 0x3BCC28u);
    ctx->pc = 0x3BCC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCC20u;
    // 0x3bcc24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259D40u, 0x3BCC20u, 0x3BCC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCC28u;
label_3bcc28:
    // 0x3bcc28: 0xa60200c2  sh          $v0, 0xC2($s0)
    ctx->pc = 0x3bcc28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 2));
    // 0x3bcc2c: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x3bcc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x3bcc30: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x3bcc30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3bcc34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3bcc34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3bcc38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3bcc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3bcc3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BCC3Cu;
    {
        const bool branch_taken_0x3bcc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC3Cu;
        // 0x3bcc40: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcc3c) {
            ctx->pc = 0x3BCC50u;
            goto label_3bcc50;
        }
    }
    ctx->pc = 0x3BCC44u;
    // 0x3bcc44: 0x0  nop
    ctx->pc = 0x3bcc44u;
    // NOP
label_3bcc48:
    // 0x3bcc48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bcc4c: 0x0  nop
    ctx->pc = 0x3bcc4cu;
    // NOP
label_3bcc50:
    // 0x3bcc50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bcc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bcc54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bcc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bcc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bcc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bcc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC5Cu;
        // 0x3bcc60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCC64u;
}
