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

// Function: sub_003901B0
// Address: 0x3901b0 - 0x390280
void sub_003901B0_0x3901b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003901B0_0x3901b0");
#endif

    switch (ctx->pc) {
        case 0x3901f8u: goto label_3901f8;
        case 0x390234u: goto label_390234;
        default: break;
    }

    ctx->pc = 0x3901b0u;

    // 0x3901b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3901b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3901b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3901b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3901b8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3901b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3901bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3901bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3901c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3901c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3901c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3901c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3901c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3901c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3901cc: 0x8f828c48  lw          $v0, -0x73B8($gp)
    ctx->pc = 0x3901ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x3901d0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3901D0u;
    {
        const bool branch_taken_0x3901d0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3901D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901D0u;
        // 0x3901d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901d0) {
            ctx->pc = 0x3901E0u;
            goto label_3901e0;
        }
    }
    ctx->pc = 0x3901D8u;
    // 0x3901d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3901D8u;
    {
        const bool branch_taken_0x3901d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3901DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901D8u;
        // 0x3901dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901d8) {
            ctx->pc = 0x390260u;
            goto label_390260;
        }
    }
    ctx->pc = 0x3901E0u;
label_3901e0:
    // 0x3901e0: 0x8f918c40  lw          $s1, -0x73C0($gp)
    ctx->pc = 0x3901e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x3901e4: 0x3c02561c  lui         $v0, 0x561C
    ctx->pc = 0x3901e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22044 << 16));
    // 0x3901e8: 0x34423ec8  ori         $v0, $v0, 0x3EC8
    ctx->pc = 0x3901e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16072);
    // 0x3901ec: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3901ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3901f0: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3901F0u;
    {
        const bool branch_taken_0x3901f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3901F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F0u;
        // 0x3901f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901f0) {
            ctx->pc = 0x390258u;
            goto label_390258;
        }
    }
    ctx->pc = 0x3901F8u;
label_3901f8:
    // 0x3901f8: 0x16330003  bne         $s1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3901F8u;
    {
        const bool branch_taken_0x3901f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x3901FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F8u;
        // 0x3901fc: 0x8e300564  lw          $s0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901f8) {
            ctx->pc = 0x390208u;
            goto label_390208;
        }
    }
    ctx->pc = 0x390200u;
    // 0x390200: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x390200u;
    {
        const bool branch_taken_0x390200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390200u;
        // 0x390204: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390200) {
            ctx->pc = 0x390250u;
            goto label_390250;
        }
    }
    ctx->pc = 0x390208u;
label_390208:
    // 0x390208: 0x92220569  lbu         $v0, 0x569($s1)
    ctx->pc = 0x390208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x39020c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x39020cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x390210: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x390210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x390214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x390214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x390218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390218u;
    {
        const bool branch_taken_0x390218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390218) {
            ctx->pc = 0x390228u;
            goto label_390228;
        }
    }
    ctx->pc = 0x390220u;
    // 0x390220: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x390220u;
    {
        const bool branch_taken_0x390220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390220u;
        // 0x390224: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390220) {
            ctx->pc = 0x390250u;
            goto label_390250;
        }
    }
    ctx->pc = 0x390228u;
label_390228:
    // 0x390228: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x390228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x39022c: 0xc076664  jal         func_1D9990
    ctx->pc = 0x39022Cu;
    SET_GPR_U32(ctx, 31, 0x390234u);
    ctx->pc = 0x390230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39022Cu;
    // 0x390230: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x39022Cu, 0x390234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390234u;
label_390234:
    // 0x390234: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x390234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x390238: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x390238u;
    {
        const bool branch_taken_0x390238 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x390238) {
            ctx->pc = 0x390248u;
            goto label_390248;
        }
    }
    ctx->pc = 0x390240u;
    // 0x390240: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x390240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x390244: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x390244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390248:
    // 0x390248: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x390248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39024c: 0x0  nop
    ctx->pc = 0x39024cu;
    // NOP
label_390250:
    // 0x390250: 0x1620ffe9  bnez        $s1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x390250u;
    {
        const bool branch_taken_0x390250 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x390250) {
            ctx->pc = 0x3901F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3901f8;
        }
    }
    ctx->pc = 0x390258u;
label_390258:
    // 0x390258: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x390258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39025c: 0x0  nop
    ctx->pc = 0x39025cu;
    // NOP
label_390260:
    // 0x390260: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x390260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x390264: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x390264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390268: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x390268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x39026c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39026cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x390270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x390274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390278: 0x3e00008  jr          $ra
    ctx->pc = 0x390278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390278u;
        // 0x39027c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390280u;
}
