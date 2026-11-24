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

// Function: sub_00380310
// Address: 0x380310 - 0x3803f0
void sub_00380310_0x380310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380310_0x380310");
#endif

    switch (ctx->pc) {
        case 0x380360u: goto label_380360;
        case 0x380390u: goto label_380390;
        default: break;
    }

    ctx->pc = 0x380310u;

    // 0x380310: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x380310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x380314: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x380314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
    // 0x380318: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x380318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38031c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38031cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x380320: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x380320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x380324: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x380324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x380328: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x380328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38032c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38032cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x380330: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x380330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x380334: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x380334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380338: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x380338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38033c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38033cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x380340: 0x8c932b80  lw          $s3, 0x2B80($a0)
    ctx->pc = 0x380340u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11136)));
    // 0x380344: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x380344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x380348: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x380348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x38034c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x38034cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x380350: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x380350u;
    {
        const bool branch_taken_0x380350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x380354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380350u;
        // 0x380354: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380350) {
            ctx->pc = 0x3803C8u;
            goto label_3803c8;
        }
    }
    ctx->pc = 0x380358u;
    // 0x380358: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x380358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38035c: 0x0  nop
    ctx->pc = 0x38035cu;
    // NOP
label_380360:
    // 0x380360: 0x82842b8f  lb          $a0, 0x2B8F($s4)
    ctx->pc = 0x380360u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 11151)));
    // 0x380364: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x380364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x380368: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x380368u;
    {
        const bool branch_taken_0x380368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x38036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380368u;
        // 0x38036c: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380368) {
            ctx->pc = 0x380380u;
            goto label_380380;
        }
    }
    ctx->pc = 0x380370u;
    // 0x380370: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x380370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x380374: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x380374u;
    {
        const bool branch_taken_0x380374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x380374) {
            ctx->pc = 0x3803A8u;
            goto label_3803a8;
        }
    }
    ctx->pc = 0x38037Cu;
    // 0x38037c: 0x0  nop
    ctx->pc = 0x38037cu;
    // NOP
label_380380:
    // 0x380380: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x380380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x380384: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x380384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x380388: 0xc04d7c8  jal         func_135F20
    ctx->pc = 0x380388u;
    SET_GPR_U32(ctx, 31, 0x380390u);
    ctx->pc = 0x38038Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380388u;
    // 0x38038c: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F20u, 0x380388u, 0x380390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380390u;
label_380390:
    // 0x380390: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x380390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380394: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x380394u;
    {
        const bool branch_taken_0x380394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x380394) {
            ctx->pc = 0x3803A8u;
            goto label_3803a8;
        }
    }
    ctx->pc = 0x38039Cu;
    // 0x38039c: 0x11963c  dsll32      $s2, $s1, 24
    ctx->pc = 0x38039cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) << (32 + 24));
    // 0x3803a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3803a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3803a4: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x3803a4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
label_3803a8:
    // 0x3803a8: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x3803a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3803ac: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x3803acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3803b0: 0x48e3c  dsll32      $s1, $a0, 24
    ctx->pc = 0x3803b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (32 + 24));
    // 0x3803b4: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x3803b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x3803b8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x3803b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3803bc: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3803BCu;
    {
        const bool branch_taken_0x3803bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3803C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3803BCu;
        // 0x3803c0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3803bc) {
            ctx->pc = 0x380360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380360;
        }
    }
    ctx->pc = 0x3803C4u;
    // 0x3803c4: 0x0  nop
    ctx->pc = 0x3803c4u;
    // NOP
label_3803c8:
    // 0x3803c8: 0xa2922b8e  sb          $s2, 0x2B8E($s4)
    ctx->pc = 0x3803c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11150), (uint8_t)GPR_U32(ctx, 18));
    // 0x3803cc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3803ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3803d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3803d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3803d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3803d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3803d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3803d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3803dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3803dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3803e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3803e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3803e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3803e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3803e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3803E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3803ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3803E8u;
        // 0x3803ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3803E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3803F0u;
}
