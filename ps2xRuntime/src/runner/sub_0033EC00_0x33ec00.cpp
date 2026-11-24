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

// Function: sub_0033EC00
// Address: 0x33ec00 - 0x33ecd0
void sub_0033EC00_0x33ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EC00_0x33ec00");
#endif

    switch (ctx->pc) {
        case 0x33ec2cu: goto label_33ec2c;
        case 0x33ec3cu: goto label_33ec3c;
        case 0x33ec50u: goto label_33ec50;
        case 0x33ec78u: goto label_33ec78;
        case 0x33ec84u: goto label_33ec84;
        case 0x33ecb4u: goto label_33ecb4;
        default: break;
    }

    ctx->pc = 0x33ec00u;

    // 0x33ec00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x33ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x33ec04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x33ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x33ec08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33ec08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33ec0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33ec0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33ec10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33ec10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec14: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33ec14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33ec18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ec18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec1c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x33ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33ec20: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x33ec20u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x33ec24: 0xc0c83e4  jal         func_320F90
    ctx->pc = 0x33EC24u;
    SET_GPR_U32(ctx, 31, 0x33EC2Cu);
    ctx->pc = 0x33EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC24u;
    // 0x33ec28: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F90u, 0x33EC24u, 0x33EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC2Cu;
label_33ec2c:
    // 0x33ec2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33ec2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec30: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x33ec30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ec34: 0xc0414d0  jal         func_105340
    ctx->pc = 0x33EC34u;
    SET_GPR_U32(ctx, 31, 0x33EC3Cu);
    ctx->pc = 0x33EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC34u;
    // 0x33ec38: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x33EC34u, 0x33EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC3Cu;
label_33ec3c:
    // 0x33ec3c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x33ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33ec40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x33ec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ec44: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33ec44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ec48: 0xc07cd3c  jal         func_1F34F0
    ctx->pc = 0x33EC48u;
    SET_GPR_U32(ctx, 31, 0x33EC50u);
    ctx->pc = 0x33EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC48u;
    // 0x33ec4c: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x33EC48u, 0x33EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC50u;
label_33ec50:
    // 0x33ec50: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x33ec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33ec54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x33ec54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33ec58: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x33EC58u;
    {
        const bool branch_taken_0x33ec58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ec58) {
            ctx->pc = 0x33EC90u;
            goto label_33ec90;
        }
    }
    ctx->pc = 0x33EC60u;
    // 0x33ec60: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x33ec60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ec64: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x33EC64u;
    {
        const bool branch_taken_0x33ec64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ec64) {
            ctx->pc = 0x33ECB8u;
            goto label_33ecb8;
        }
    }
    ctx->pc = 0x33EC6Cu;
    // 0x33ec6c: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x33ec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33ec70: 0xc0c83e8  jal         func_320FA0
    ctx->pc = 0x33EC70u;
    SET_GPR_U32(ctx, 31, 0x33EC78u);
    ctx->pc = 0x33EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC70u;
    // 0x33ec74: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320FA0u, 0x33EC70u, 0x33EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC78u;
label_33ec78:
    // 0x33ec78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ec7c: 0xc0cfaf0  jal         func_33EBC0
    ctx->pc = 0x33EC7Cu;
    SET_GPR_U32(ctx, 31, 0x33EC84u);
    ctx->pc = 0x33EC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EC7Cu;
    // 0x33ec80: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBC0u, 0x33EC7Cu, 0x33EC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EC84u;
label_33ec84:
    // 0x33ec84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33EC84u;
    {
        const bool branch_taken_0x33ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ec84) {
            ctx->pc = 0x33ECB8u;
            goto label_33ecb8;
        }
    }
    ctx->pc = 0x33EC8Cu;
    // 0x33ec8c: 0x0  nop
    ctx->pc = 0x33ec8cu;
    // NOP
label_33ec90:
    // 0x33ec90: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x33ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x33ec94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33ec94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ec98: 0x0  nop
    ctx->pc = 0x33ec98u;
    // NOP
    // 0x33ec9c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x33ec9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x33eca0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33eca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33eca4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x33ECA4u;
    {
        const bool branch_taken_0x33eca4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECA4u;
        // 0x33eca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33eca4) {
            ctx->pc = 0x33ECB8u;
            goto label_33ecb8;
        }
    }
    ctx->pc = 0x33ECACu;
    // 0x33ecac: 0xc0cfce4  jal         func_33F390
    ctx->pc = 0x33ECACu;
    SET_GPR_U32(ctx, 31, 0x33ECB4u);
    ctx->pc = 0x33F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F390u, 0x33ECACu, 0x33ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ECB4u;
label_33ecb4:
    // 0x33ecb4: 0x0  nop
    ctx->pc = 0x33ecb4u;
    // NOP
label_33ecb8:
    // 0x33ecb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x33ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ecbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33ecbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33ecc0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33ecc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33ecc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33ecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x33ECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ECC8u;
        // 0x33eccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33ECD0u;
}
