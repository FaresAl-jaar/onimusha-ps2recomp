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

// Function: sub_0033ECD0
// Address: 0x33ecd0 - 0x33ee04
void sub_0033ECD0_0x33ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ECD0_0x33ecd0");
#endif

    switch (ctx->pc) {
        case 0x33ed10u: goto label_33ed10;
        case 0x33ed20u: goto label_33ed20;
        case 0x33ed34u: goto label_33ed34;
        case 0x33ed44u: goto label_33ed44;
        case 0x33ed54u: goto label_33ed54;
        case 0x33ed68u: goto label_33ed68;
        case 0x33ed9cu: goto label_33ed9c;
        case 0x33eda8u: goto label_33eda8;
        case 0x33ede0u: goto label_33ede0;
        default: break;
    }

    ctx->pc = 0x33ecd0u;

    // 0x33ecd0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x33ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x33ecd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x33ecd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x33ecd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x33ecdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33ecdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33ece0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33ece0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ece4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x33ece4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x33ece8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33ece8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ecec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x33ececu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33ecf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33ecf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ecf4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x33ecf4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33ecf8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x33ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33ecfc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33ecfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33ed00: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x33ed00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33ed04: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x33ed04u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x33ed08: 0xc0c83e4  jal         func_320F90
    ctx->pc = 0x33ED08u;
    SET_GPR_U32(ctx, 31, 0x33ED10u);
    ctx->pc = 0x33ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED08u;
    // 0x33ed0c: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F90u, 0x33ED08u, 0x33ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED10u;
label_33ed10:
    // 0x33ed10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33ed10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ed14: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x33ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33ed18: 0xc0414d0  jal         func_105340
    ctx->pc = 0x33ED18u;
    SET_GPR_U32(ctx, 31, 0x33ED20u);
    ctx->pc = 0x33ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED18u;
    // 0x33ed1c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x33ED18u, 0x33ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED20u;
label_33ed20:
    // 0x33ed20: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x33ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33ed24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x33ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33ed28: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33ed28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ed2c: 0xc07cd3c  jal         func_1F34F0
    ctx->pc = 0x33ED2Cu;
    SET_GPR_U32(ctx, 31, 0x33ED34u);
    ctx->pc = 0x33ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED2Cu;
    // 0x33ed30: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x33ED2Cu, 0x33ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED34u;
label_33ed34:
    // 0x33ed34: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x33ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33ed38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33ed38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x33ed3c: 0xc0c83e4  jal         func_320F90
    ctx->pc = 0x33ED3Cu;
    SET_GPR_U32(ctx, 31, 0x33ED44u);
    ctx->pc = 0x33ED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED3Cu;
    // 0x33ed40: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320F90u, 0x33ED3Cu, 0x33ED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED44u;
label_33ed44:
    // 0x33ed44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33ed44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ed48: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ed4c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x33ED4Cu;
    SET_GPR_U32(ctx, 31, 0x33ED54u);
    ctx->pc = 0x33ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED4Cu;
    // 0x33ed50: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x33ED4Cu, 0x33ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED54u;
label_33ed54:
    // 0x33ed54: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33ed58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x33ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33ed5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x33ed5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ed60: 0xc07cd3c  jal         func_1F34F0
    ctx->pc = 0x33ED60u;
    SET_GPR_U32(ctx, 31, 0x33ED68u);
    ctx->pc = 0x33ED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED60u;
    // 0x33ed64: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34F0u, 0x33ED60u, 0x33ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED68u;
label_33ed68:
    // 0x33ed68: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x33ed68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x33ed6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x33ed6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33ed70: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x33ED70u;
    {
        const bool branch_taken_0x33ed70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ed70) {
            ctx->pc = 0x33EDB0u;
            goto label_33edb0;
        }
    }
    ctx->pc = 0x33ED78u;
    // 0x33ed78: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x33ed78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ed7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x33ED7Cu;
    {
        const bool branch_taken_0x33ed7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ed7c) {
            ctx->pc = 0x33ED90u;
            goto label_33ed90;
        }
    }
    ctx->pc = 0x33ED84u;
    // 0x33ed84: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x33ed84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33ed88: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x33ED88u;
    {
        const bool branch_taken_0x33ed88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33ed88) {
            ctx->pc = 0x33EDE0u;
            goto label_33ede0;
        }
    }
    ctx->pc = 0x33ED90u;
label_33ed90:
    // 0x33ed90: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x33ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x33ed94: 0xc0c83e8  jal         func_320FA0
    ctx->pc = 0x33ED94u;
    SET_GPR_U32(ctx, 31, 0x33ED9Cu);
    ctx->pc = 0x33ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ED94u;
    // 0x33ed98: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320FA0u, 0x33ED94u, 0x33ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33ED9Cu;
label_33ed9c:
    // 0x33ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eda0: 0xc0cfaf0  jal         func_33EBC0
    ctx->pc = 0x33EDA0u;
    SET_GPR_U32(ctx, 31, 0x33EDA8u);
    ctx->pc = 0x33EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EDA0u;
    // 0x33eda4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBC0u, 0x33EDA0u, 0x33EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EDA8u;
label_33eda8:
    // 0x33eda8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33EDA8u;
    {
        const bool branch_taken_0x33eda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33eda8) {
            ctx->pc = 0x33EDE0u;
            goto label_33ede0;
        }
    }
    ctx->pc = 0x33EDB0u;
label_33edb0:
    // 0x33edb0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x33edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x33edb4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x33edb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33edb8: 0x0  nop
    ctx->pc = 0x33edb8u;
    // NOP
    // 0x33edbc: 0x46161040  add.s       $f1, $f2, $f22
    ctx->pc = 0x33edbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[22]);
    // 0x33edc0: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x33edc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33edc4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x33EDC4u;
    {
        const bool branch_taken_0x33edc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDC4u;
        // 0x33edc8: 0x46151040  add.s       $f1, $f2, $f21 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edc4) {
            ctx->pc = 0x33EDE0u;
            goto label_33ede0;
        }
    }
    ctx->pc = 0x33EDCCu;
    // 0x33edcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x33edccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33edd0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x33EDD0u;
    {
        const bool branch_taken_0x33edd0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDD0u;
        // 0x33edd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33edd0) {
            ctx->pc = 0x33EDE0u;
            goto label_33ede0;
        }
    }
    ctx->pc = 0x33EDD8u;
    // 0x33edd8: 0xc0cfce4  jal         func_33F390
    ctx->pc = 0x33EDD8u;
    SET_GPR_U32(ctx, 31, 0x33EDE0u);
    ctx->pc = 0x33F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F390u, 0x33EDD8u, 0x33EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EDE0u;
label_33ede0:
    // 0x33ede0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x33ede0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33ede4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x33ede4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33ede8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x33ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33edec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33edecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33edf0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x33edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33edf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x33edf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33edf8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x33edf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33edfc: 0x3e00008  jr          $ra
    ctx->pc = 0x33EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EDFCu;
        // 0x33ee00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EE04u;
}
