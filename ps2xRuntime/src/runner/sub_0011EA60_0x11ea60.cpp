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

// Function: sub_0011EA60
// Address: 0x11ea60 - 0x11eb10
void sub_0011EA60_0x11ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EA60_0x11ea60");
#endif

    switch (ctx->pc) {
        case 0x11ea94u: goto label_11ea94;
        case 0x11eab4u: goto label_11eab4;
        case 0x11eac0u: goto label_11eac0;
        case 0x11eac4u: goto label_11eac4;
        case 0x11ead8u: goto label_11ead8;
        case 0x11eaf0u: goto label_11eaf0;
        case 0x11eb08u: goto label_11eb08;
        default: break;
    }

    ctx->pc = 0x11ea60u;

    // 0x11ea60: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11ea60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11ea64: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ea64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ea68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ea68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ea6c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ea6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11ea70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ea74: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11ea74u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11ea78: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11ea78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ea7c: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11ea7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11ea80: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11ea80u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11ea84: 0x11c00012  beqz        $t6, . + 4 + (0x12 << 2)
    ctx->pc = 0x11EA84u;
    {
        const bool branch_taken_0x11ea84 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA84u;
        // 0x11ea88: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea84) {
            ctx->pc = 0x11EAD0u;
            goto label_11ead0;
        }
    }
    ctx->pc = 0x11EA8Cu;
    // 0x11ea8c: 0xc047052  jal         func_11C148
    ctx->pc = 0x11EA8Cu;
    SET_GPR_U32(ctx, 31, 0x11EA94u);
    ctx->pc = 0x11EA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EA8Cu;
    // 0x11ea90: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C148u, 0x11EA8Cu, 0x11EA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EA94u;
label_11ea94:
    // 0x11ea94: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11ea94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11ea98: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea9c: 0x104f0016  beq         $v0, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x11EA9Cu;
    {
        const bool branch_taken_0x11ea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EA9Cu;
        // 0x11eaa0: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea9c) {
            ctx->pc = 0x11EAF8u;
            goto label_11eaf8;
        }
    }
    ctx->pc = 0x11EAA4u;
    // 0x11eaa4: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x11EAA4u;
    {
        const bool branch_taken_0x11eaa4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAA4u;
        // 0x11eaa8: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa4) {
            ctx->pc = 0x11EAE0u;
            goto label_11eae0;
        }
    }
    ctx->pc = 0x11EAACu;
    // 0x11eaac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11EAACu;
    {
        const bool branch_taken_0x11eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAACu;
        // 0x11eab0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaac) {
            ctx->pc = 0x11EACCu;
            goto label_11eacc;
        }
    }
    ctx->pc = 0x11EAB4u;
label_11eab4:
    // 0x11eab4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eab8: 0xc047764  jal         func_11DD90
    ctx->pc = 0x11EAB8u;
    SET_GPR_U32(ctx, 31, 0x11EAC0u);
    ctx->pc = 0x11EABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAB8u;
    // 0x11eabc: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD90u, 0x11EAB8u, 0x11EAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAC0u;
label_11eac0:
    // 0x11eac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11eac4:
    // 0x11eac4: 0x3e00008  jr          $ra
    ctx->pc = 0x11EAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAC4u;
        // 0x11eac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EACCu;
label_11eacc:
    // 0x11eacc: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11eaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11ead0:
    // 0x11ead0: 0xc047508  jal         func_11D420
    ctx->pc = 0x11EAD0u;
    SET_GPR_U32(ctx, 31, 0x11EAD8u);
    ctx->pc = 0x11D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D420u, 0x11EAD0u, 0x11EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAD8u;
label_11ead8:
    // 0x11ead8: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EAD8u;
    {
        const bool branch_taken_0x11ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAD8u;
        // 0x11eadc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ead8) {
            ctx->pc = 0x11EAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eac4;
        }
    }
    ctx->pc = 0x11EAE0u;
label_11eae0:
    // 0x11eae0: 0x144ffff4  bne         $v0, $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x11EAE0u;
    {
        const bool branch_taken_0x11eae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAE0u;
        // 0x11eae4: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eae0) {
            ctx->pc = 0x11EAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eab4;
        }
    }
    ctx->pc = 0x11EAE8u;
    // 0x11eae8: 0xc047508  jal         func_11D420
    ctx->pc = 0x11EAE8u;
    SET_GPR_U32(ctx, 31, 0x11EAF0u);
    ctx->pc = 0x11EAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EAE8u;
    // 0x11eaec: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D420u, 0x11EAE8u, 0x11EAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EAF0u;
label_11eaf0:
    // 0x11eaf0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11EAF0u;
    {
        const bool branch_taken_0x11eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAF0u;
        // 0x11eaf4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaf0) {
            ctx->pc = 0x11EAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eac0;
        }
    }
    ctx->pc = 0x11EAF8u;
label_11eaf8:
    // 0x11eaf8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11eaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11eafc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11eb00: 0xc047764  jal         func_11DD90
    ctx->pc = 0x11EB00u;
    SET_GPR_U32(ctx, 31, 0x11EB08u);
    ctx->pc = 0x11EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB00u;
    // 0x11eb04: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD90u, 0x11EB00u, 0x11EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB08u;
label_11eb08:
    // 0x11eb08: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x11EB08u;
    {
        const bool branch_taken_0x11eb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB08u;
        // 0x11eb0c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb08) {
            ctx->pc = 0x11EAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11eac0;
        }
    }
    ctx->pc = 0x11EB10u;
}
