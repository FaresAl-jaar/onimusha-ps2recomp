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

// Function: sub_00390280
// Address: 0x390280 - 0x390348
void sub_00390280_0x390280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390280_0x390280");
#endif

    switch (ctx->pc) {
        case 0x3902c8u: goto label_3902c8;
        case 0x3902f4u: goto label_3902f4;
        default: break;
    }

    ctx->pc = 0x390280u;

    // 0x390280: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x390280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x390284: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x390284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x390288: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x390288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x39028c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x39028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x390290: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x390290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x390294: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x390294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x390298: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x390298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x39029c: 0x8f828c48  lw          $v0, -0x73B8($gp)
    ctx->pc = 0x39029cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x3902a0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3902A0u;
    {
        const bool branch_taken_0x3902a0 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3902A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902A0u;
        // 0x3902a4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902a0) {
            ctx->pc = 0x3902B0u;
            goto label_3902b0;
        }
    }
    ctx->pc = 0x3902A8u;
    // 0x3902a8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3902A8u;
    {
        const bool branch_taken_0x3902a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902A8u;
        // 0x3902ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902a8) {
            ctx->pc = 0x390328u;
            goto label_390328;
        }
    }
    ctx->pc = 0x3902B0u;
label_3902b0:
    // 0x3902b0: 0x8f918c40  lw          $s1, -0x73C0($gp)
    ctx->pc = 0x3902b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x3902b4: 0x3c024f7f  lui         $v0, 0x4F7F
    ctx->pc = 0x3902b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20351 << 16));
    // 0x3902b8: 0x3442fe00  ori         $v0, $v0, 0xFE00
    ctx->pc = 0x3902b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65024);
    // 0x3902bc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3902bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3902c0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3902C0u;
    {
        const bool branch_taken_0x3902c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902C0u;
        // 0x3902c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902c0) {
            ctx->pc = 0x390318u;
            goto label_390318;
        }
    }
    ctx->pc = 0x3902C8u;
label_3902c8:
    // 0x3902c8: 0x92220569  lbu         $v0, 0x569($s1)
    ctx->pc = 0x3902c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1385)));
    // 0x3902cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3902ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3902d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3902d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3902d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3902d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3902d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3902D8u;
    {
        const bool branch_taken_0x3902d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3902DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902D8u;
        // 0x3902dc: 0x8e300564  lw          $s0, 0x564($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902d8) {
            ctx->pc = 0x3902E8u;
            goto label_3902e8;
        }
    }
    ctx->pc = 0x3902E0u;
    // 0x3902e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3902E0u;
    {
        const bool branch_taken_0x3902e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3902E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3902E0u;
        // 0x3902e4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3902e0) {
            ctx->pc = 0x390310u;
            goto label_390310;
        }
    }
    ctx->pc = 0x3902E8u;
label_3902e8:
    // 0x3902e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3902e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3902ec: 0xc076664  jal         func_1D9990
    ctx->pc = 0x3902ECu;
    SET_GPR_U32(ctx, 31, 0x3902F4u);
    ctx->pc = 0x3902F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3902ECu;
    // 0x3902f0: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x3902ECu, 0x3902F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3902F4u;
label_3902f4:
    // 0x3902f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3902f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3902f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3902F8u;
    {
        const bool branch_taken_0x3902f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3902f8) {
            ctx->pc = 0x390308u;
            goto label_390308;
        }
    }
    ctx->pc = 0x390300u;
    // 0x390300: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x390300u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x390304: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x390304u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_390308:
    // 0x390308: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x390308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39030c: 0x0  nop
    ctx->pc = 0x39030cu;
    // NOP
label_390310:
    // 0x390310: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x390310u;
    {
        const bool branch_taken_0x390310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x390310) {
            ctx->pc = 0x3902C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3902c8;
        }
    }
    ctx->pc = 0x390318u;
label_390318:
    // 0x390318: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x390318u;
    {
        const bool branch_taken_0x390318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390318u;
        // 0x39031c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390318) {
            ctx->pc = 0x390328u;
            goto label_390328;
        }
    }
    ctx->pc = 0x390320u;
    // 0x390320: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x390320u;
    {
        const bool branch_taken_0x390320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390320u;
        // 0x390324: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390320) {
            ctx->pc = 0x390328u;
            goto label_390328;
        }
    }
    ctx->pc = 0x390328u;
label_390328:
    // 0x390328: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x390328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39032c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x39032cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390330: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x390330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x390334: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x390334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390338: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x390338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39033c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39033cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390340: 0x3e00008  jr          $ra
    ctx->pc = 0x390340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390340u;
        // 0x390344: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390348u;
}
