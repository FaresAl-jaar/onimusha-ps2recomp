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

// Function: sub_0011AEC0
// Address: 0x11aec0 - 0x11b258
void sub_0011AEC0_0x11aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AEC0_0x11aec0");
#endif

    switch (ctx->pc) {
        case 0x11af18u: goto label_11af18;
        case 0x11af1cu: goto label_11af1c;
        case 0x11afacu: goto label_11afac;
        case 0x11b098u: goto label_11b098;
        case 0x11b0e8u: goto label_11b0e8;
        default: break;
    }

    ctx->pc = 0x11aec0u;

    // 0x11aec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11aec4: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11aec4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11aec8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11aecc: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11aeccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11aed0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aed4: 0x3c0e3f80  lui         $t6, 0x3F80
    ctx->pc = 0x11aed4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16256 << 16));
    // 0x11aed8: 0x44116000  mfc1        $s1, $f12
    ctx->pc = 0x11aed8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x11aedc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11aee0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x11aee0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11aee4: 0x22f8024  and         $s0, $s1, $t7
    ctx->pc = 0x11aee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x11aee8: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x11aee8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x11aeec: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x11aeecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11aef0: 0x160e0012  bne         $s0, $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x11AEF0u;
    {
        const bool branch_taken_0x11aef0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 14));
        ctx->pc = 0x11AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AEF0u;
        // 0x11aef4: 0x1d0782a  slt         $t7, $t6, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aef0) {
            ctx->pc = 0x11AF3Cu;
            goto label_11af3c;
        }
    }
    ctx->pc = 0x11AEF8u;
    // 0x11aef8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11aef8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11aefc: 0x25ef2cdc  addiu       $t7, $t7, 0x2CDC
    ctx->pc = 0x11aefcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11484));
    // 0x11af00: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11af00u;
    { uint32_t bits = FAST_READ32(0x662CDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11af04: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11af04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11af08: 0x4600601a  mula.s      $f12, $f0
    ctx->pc = 0x11af08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[12], ctx->f[0]));
    // 0x11af0c: 0x25ef2ce0  addiu       $t7, $t7, 0x2CE0
    ctx->pc = 0x11af0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11488));
    // 0x11af10: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11af10u;
    { uint32_t bits = FAST_READ32(0x662CE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11af14: 0x4601611c  madd.s      $f4, $f12, $f1
    ctx->pc = 0x11af14u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_11af18:
    // 0x11af18: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x11af18u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_11af1c:
    // 0x11af1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11af20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11af20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11af24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11af24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11af28: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x11af28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11af2c: 0xc7b5001c  lwc1        $f21, 0x1C($sp)
    ctx->pc = 0x11af2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11af30: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x11af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11af34: 0x3e00008  jr          $ra
    ctx->pc = 0x11AF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF34u;
        // 0x11af38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AF3Cu;
label_11af3c:
    // 0x11af3c: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AF3Cu;
    {
        const bool branch_taken_0x11af3c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF3Cu;
        // 0x11af40: 0x3c0f3eff  lui         $t7, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af3c) {
            ctx->pc = 0x11AF5Cu;
            goto label_11af5c;
        }
    }
    ctx->pc = 0x11AF44u;
    // 0x11af44: 0x460c6001  sub.s       $f0, $f12, $f12
    ctx->pc = 0x11af44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x11af48: 0x0  nop
    ctx->pc = 0x11af48u;
    // NOP
    // 0x11af4c: 0x0  nop
    ctx->pc = 0x11af4cu;
    // NOP
    // 0x11af50: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x11af50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x11af54: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x11AF54u;
    {
        const bool branch_taken_0x11af54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF54u;
        // 0x11af58: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af54) {
            ctx->pc = 0x11AF1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af1c;
        }
    }
    ctx->pc = 0x11AF5Cu;
label_11af5c:
    // 0x11af5c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11af5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11af60: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11af60u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11af64: 0x15e0000f  bnez        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x11AF64u;
    {
        const bool branch_taken_0x11af64 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF64u;
        // 0x11af68: 0x3c0f31ff  lui         $t7, 0x31FF (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)12799 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af64) {
            ctx->pc = 0x11AFA4u;
            goto label_11afa4;
        }
    }
    ctx->pc = 0x11AF6Cu;
    // 0x11af6c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11af6cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11af70: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11af70u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11af74: 0x15e0007e  bnez        $t7, . + 4 + (0x7E << 2)
    ctx->pc = 0x11AF74u;
    {
        const bool branch_taken_0x11af74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF74u;
        // 0x11af78: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af74) {
            ctx->pc = 0x11B170u;
            goto label_11b170;
        }
    }
    ctx->pc = 0x11AF7Cu;
    // 0x11af7c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11af7cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11af80: 0x25ef2ce4  addiu       $t7, $t7, 0x2CE4
    ctx->pc = 0x11af80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11492));
    // 0x11af84: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11af84u;
    { uint32_t bits = FAST_READ32(0x662CE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11af88: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11af88u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11af8c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11af8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11af90: 0x25ef2ce8  addiu       $t7, $t7, 0x2CE8
    ctx->pc = 0x11af90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11496));
    // 0x11af94: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11af94u;
    { uint32_t bits = FAST_READ32(0x662CE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11af98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11af98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11af9c: 0x4501ffde  bc1t        . + 4 + (-0x22 << 2)
    ctx->pc = 0x11AF9Cu;
    {
        const bool branch_taken_0x11af9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AF9Cu;
        // 0x11afa0: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af9c) {
            ctx->pc = 0x11AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af18;
        }
    }
    ctx->pc = 0x11AFA4u;
label_11afa4:
    // 0x11afa4: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x11AFA4u;
    SET_GPR_U32(ctx, 31, 0x11AFACu);
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x11AFA4u, 0x11AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AFACu;
label_11afac:
    // 0x11afac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11afb0: 0x25ef2ce8  addiu       $t7, $t7, 0x2CE8
    ctx->pc = 0x11afb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11496));
    // 0x11afb4: 0xc5e40000  lwc1        $f4, 0x0($t7)
    ctx->pc = 0x11afb4u;
    { uint32_t bits = FAST_READ32(0x662CE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11afb8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11afbc: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x11afbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11afc0: 0x25ef2d14  addiu       $t7, $t7, 0x2D14
    ctx->pc = 0x11afc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11540));
    // 0x11afc4: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11afc4u;
    { uint32_t bits = FAST_READ32(0x662D14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11afc8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x11afc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11afcc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11afccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11afd0: 0x25ef2cec  addiu       $t7, $t7, 0x2CEC
    ctx->pc = 0x11afd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11500));
    // 0x11afd4: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11afd4u;
    { uint32_t bits = FAST_READ32(0x662CECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11afd8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11afd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11afdc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11afdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11afe0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11afe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11afe4: 0x25ef2cf0  addiu       $t7, $t7, 0x2CF0
    ctx->pc = 0x11afe4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11504));
    // 0x11afe8: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11afe8u;
    { uint32_t bits = FAST_READ32(0x662CF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11afec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11aff0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11aff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11aff4: 0x25ef2cf4  addiu       $t7, $t7, 0x2CF4
    ctx->pc = 0x11aff4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11508));
    // 0x11aff8: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11aff8u;
    { uint32_t bits = FAST_READ32(0x662CF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11affc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11affcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b000: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b000u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b004: 0x25ef2cf8  addiu       $t7, $t7, 0x2CF8
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11512));
    // 0x11b008: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b008u;
    { uint32_t bits = FAST_READ32(0x662CF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b00c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b010: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b010u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b014: 0x25ef2cfc  addiu       $t7, $t7, 0x2CFC
    ctx->pc = 0x11b014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11516));
    // 0x11b018: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b01c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b01cu;
    { uint32_t bits = FAST_READ32(0x662CFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b020: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b024: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b028: 0x25ef2d00  addiu       $t7, $t7, 0x2D00
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11520));
    // 0x11b02c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b02cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b030: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b030u;
    { uint32_t bits = FAST_READ32(0x662D00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b034: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b038: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b03c: 0x25ef2d04  addiu       $t7, $t7, 0x2D04
    ctx->pc = 0x11b03cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11524));
    // 0x11b040: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b044: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b044u;
    { uint32_t bits = FAST_READ32(0x662D04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b048: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b048u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b04c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b04cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b050: 0x25ef2d08  addiu       $t7, $t7, 0x2D08
    ctx->pc = 0x11b050u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11528));
    // 0x11b054: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b058: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b058u;
    { uint32_t bits = FAST_READ32(0x662D08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b05c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b05cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b060: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b060u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b064: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b068: 0x25ef2d0c  addiu       $t7, $t7, 0x2D0C
    ctx->pc = 0x11b068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11532));
    // 0x11b06c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b06cu;
    { uint32_t bits = FAST_READ32(0x662D0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b070: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b070u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b074: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b074u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b078: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b07c: 0x25ef2d10  addiu       $t7, $t7, 0x2D10
    ctx->pc = 0x11b07cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11536));
    // 0x11b080: 0x46040d80  add.s       $f22, $f1, $f4
    ctx->pc = 0x11b080u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x11b084: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b088: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b088u;
    { uint32_t bits = FAST_READ32(0x662D10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b08c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b08cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b090: 0xc047138  jal         func_11C4E0
    ctx->pc = 0x11B090u;
    SET_GPR_U32(ctx, 31, 0x11B098u);
    ctx->pc = 0x11B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B090u;
    // 0x11b094: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4E0u, 0x11B090u, 0x11B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B098u;
label_11b098:
    // 0x11b098: 0x3c0f3f79  lui         $t7, 0x3F79
    ctx->pc = 0x11b098u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16249 << 16));
    // 0x11b09c: 0x35ef9999  ori         $t7, $t7, 0x9999
    ctx->pc = 0x11b09cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)39321);
    // 0x11b0a0: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11b0a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11b0a4: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B0A4u;
    {
        const bool branch_taken_0x11b0a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A4u;
        // 0x11b0a8: 0x440d0000  mfc1        $t5, $f0 (Delay Slot)
        { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a4) {
            ctx->pc = 0x11B0F8u;
            goto label_11b0f8;
        }
    }
    ctx->pc = 0x11B0ACu;
    // 0x11b0ac: 0x0  nop
    ctx->pc = 0x11b0acu;
    // NOP
    // 0x11b0b0: 0x0  nop
    ctx->pc = 0x11b0b0u;
    // NOP
    // 0x11b0b4: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x11b0b4u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x11b0b8: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b0bc: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x11b0bcu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11b0c0: 0x25ef2ce0  addiu       $t7, $t7, 0x2CE0
    ctx->pc = 0x11b0c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11488));
    // 0x11b0c4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x11b0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x11b0c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x11b0c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11b0cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11b0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11b0d0: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b0d0u;
    { uint32_t bits = FAST_READ32(0x662CE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b0d4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b0d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b0d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11b0dc: 0x25ef2cdc  addiu       $t7, $t7, 0x2CDC
    ctx->pc = 0x11b0dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11484));
    // 0x11b0e0: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b0e0u;
    { uint32_t bits = FAST_READ32(0x662CDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b0e4: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x11b0e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_11b0e8:
    // 0x11b0e8: 0x1e20ff8b  bgtz        $s1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x11B0E8u;
    {
        const bool branch_taken_0x11b0e8 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x11B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E8u;
        // 0x11b0ec: 0x4600a106  mov.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e8) {
            ctx->pc = 0x11AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af18;
        }
    }
    ctx->pc = 0x11B0F0u;
    // 0x11b0f0: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x11B0F0u;
    {
        const bool branch_taken_0x11b0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0F0u;
        // 0x11b0f4: 0x4600a107  neg.s       $f4, $f20 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0f0) {
            ctx->pc = 0x11AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af18;
        }
    }
    ctx->pc = 0x11B0F8u;
label_11b0f8:
    // 0x11b0f8: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x11b0f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x11b0fc: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x11b0fcu;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11b100: 0x1af7024  and         $t6, $t5, $t7
    ctx->pc = 0x11b100u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x11b104: 0x0  nop
    ctx->pc = 0x11b104u;
    // NOP
    // 0x11b108: 0x0  nop
    ctx->pc = 0x11b108u;
    // NOP
    // 0x11b10c: 0x4616a903  div.s       $f4, $f21, $f22
    ctx->pc = 0x11b10cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x11b110: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x11b110u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b114: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b114u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b118: 0x448e3000  mtc1        $t6, $f6
    ctx->pc = 0x11b118u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x11b11c: 0x25ef2d18  addiu       $t7, $t7, 0x2D18
    ctx->pc = 0x11b11cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11544));
    // 0x11b120: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x11b120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x11b124: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x11b124u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11b128: 0xc5e50000  lwc1        $f5, 0x0($t7)
    ctx->pc = 0x11b128u;
    { uint32_t bits = FAST_READ32(0x662D18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11b12c: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x11b12cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x11b130: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b134: 0x46063000  add.s       $f0, $f6, $f6
    ctx->pc = 0x11b134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x11b138: 0x25ef2ce0  addiu       $t7, $t7, 0x2CE0
    ctx->pc = 0x11b138u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11488));
    // 0x11b13c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x11b13cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x11b140: 0x0  nop
    ctx->pc = 0x11b140u;
    // NOP
    // 0x11b144: 0x0  nop
    ctx->pc = 0x11b144u;
    // NOP
    // 0x11b148: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x11b148u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x11b14c: 0x46002d81  sub.s       $f22, $f5, $f0
    ctx->pc = 0x11b14cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x11b150: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x11b150u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11b154: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b154u;
    { uint32_t bits = FAST_READ32(0x662CE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b158: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x11b158u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x11b15c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11b15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x11b160: 0x46001541  sub.s       $f21, $f2, $f0
    ctx->pc = 0x11b160u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11b164: 0x4616a841  sub.s       $f1, $f21, $f22
    ctx->pc = 0x11b164u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[22]);
    // 0x11b168: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x11B168u;
    {
        const bool branch_taken_0x11b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B168u;
        // 0x11b16c: 0x46012d01  sub.s       $f20, $f5, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b168) {
            ctx->pc = 0x11B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b0e8;
        }
    }
    ctx->pc = 0x11B170u;
label_11b170:
    // 0x11b170: 0x460c6502  mul.s       $f20, $f12, $f12
    ctx->pc = 0x11b170u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x11b174: 0x25ef2cec  addiu       $t7, $t7, 0x2CEC
    ctx->pc = 0x11b174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11500));
    // 0x11b178: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x11b178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b17c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b17cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b180: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b180u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b184: 0x25ef2cf0  addiu       $t7, $t7, 0x2CF0
    ctx->pc = 0x11b184u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11504));
    // 0x11b188: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b188u;
    { uint32_t bits = FAST_READ32(0x662CF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b18c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b18cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b190: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b194: 0x25ef2cf4  addiu       $t7, $t7, 0x2CF4
    ctx->pc = 0x11b194u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11508));
    // 0x11b198: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b198u;
    { uint32_t bits = FAST_READ32(0x662CF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b19c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b19cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b1a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b1a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b1a4: 0x25ef2cf8  addiu       $t7, $t7, 0x2CF8
    ctx->pc = 0x11b1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11512));
    // 0x11b1a8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b1a8u;
    { uint32_t bits = FAST_READ32(0x662CF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b1ac: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b1b0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b1b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b1b4: 0x25ef2cfc  addiu       $t7, $t7, 0x2CFC
    ctx->pc = 0x11b1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11516));
    // 0x11b1b8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b1b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b1bc: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b1bcu;
    { uint32_t bits = FAST_READ32(0x662CFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b1c0: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b1c4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b1c8: 0x25ef2d00  addiu       $t7, $t7, 0x2D00
    ctx->pc = 0x11b1c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11520));
    // 0x11b1cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b1d0: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b1d0u;
    { uint32_t bits = FAST_READ32(0x662D00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b1d4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b1d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b1d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b1d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b1dc: 0x25ef2d04  addiu       $t7, $t7, 0x2D04
    ctx->pc = 0x11b1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11524));
    // 0x11b1e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b1e4: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b1e4u;
    { uint32_t bits = FAST_READ32(0x662D04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b1e8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b1e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b1ec: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b1ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b1f0: 0x25ef2d08  addiu       $t7, $t7, 0x2D08
    ctx->pc = 0x11b1f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11528));
    // 0x11b1f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b1f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b1f8: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b1f8u;
    { uint32_t bits = FAST_READ32(0x662D08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b1fc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b200: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x11b200u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b204: 0x25ef2d0c  addiu       $t7, $t7, 0x2D0C
    ctx->pc = 0x11b204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11532));
    // 0x11b208: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b20c: 0xc5e20000  lwc1        $f2, 0x0($t7)
    ctx->pc = 0x11b20cu;
    { uint32_t bits = FAST_READ32(0x662D0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b210: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x11b210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x11b214: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b214u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b218: 0x25ef2ce8  addiu       $t7, $t7, 0x2CE8
    ctx->pc = 0x11b218u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11496));
    // 0x11b21c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11b21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11b220: 0xc5e30000  lwc1        $f3, 0x0($t7)
    ctx->pc = 0x11b220u;
    { uint32_t bits = FAST_READ32(0x662CE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b224: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x11b224u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x11b228: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x11b228u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x11b22c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x11b22cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b230: 0x25ef2d10  addiu       $t7, $t7, 0x2D10
    ctx->pc = 0x11b230u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 11536));
    // 0x11b234: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x11b234u;
    { uint32_t bits = FAST_READ32(0x662D10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b238: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11b238u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11b23c: 0x4600a542  mul.s       $f21, $f20, $f0
    ctx->pc = 0x11b23cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x11b240: 0x0  nop
    ctx->pc = 0x11b240u;
    // NOP
    // 0x11b244: 0x0  nop
    ctx->pc = 0x11b244u;
    // NOP
    // 0x11b248: 0x4616ad43  div.s       $f21, $f21, $f22
    ctx->pc = 0x11b248u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[22]); }
    // 0x11b24c: 0x46156002  mul.s       $f0, $f12, $f21
    ctx->pc = 0x11b24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x11b250: 0x1000ff31  b           . + 4 + (-0xCF << 2)
    ctx->pc = 0x11B250u;
    {
        const bool branch_taken_0x11b250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B250u;
        // 0x11b254: 0x46006100  add.s       $f4, $f12, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b250) {
            ctx->pc = 0x11AF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11af18;
        }
    }
    ctx->pc = 0x11B258u;
}
