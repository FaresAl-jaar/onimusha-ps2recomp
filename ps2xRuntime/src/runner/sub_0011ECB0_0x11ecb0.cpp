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

// Function: sub_0011ECB0
// Address: 0x11ecb0 - 0x11ed68
void sub_0011ECB0_0x11ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ECB0_0x11ecb0");
#endif

    switch (ctx->pc) {
        case 0x11ece0u: goto label_11ece0;
        case 0x11ece8u: goto label_11ece8;
        case 0x11ececu: goto label_11ecec;
        case 0x11ecfcu: goto label_11ecfc;
        case 0x11ed1cu: goto label_11ed1c;
        case 0x11ed24u: goto label_11ed24;
        case 0x11ed4cu: goto label_11ed4c;
        case 0x11ed60u: goto label_11ed60;
        default: break;
    }

    ctx->pc = 0x11ecb0u;

    // 0x11ecb0: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11ecb4: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ecb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ecb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ecb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ecbc: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ecbcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11ecc0: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11ecc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11ecc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ecc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ecc8: 0x35ce0fd8  ori         $t6, $t6, 0xFD8
    ctx->pc = 0x11ecc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4056);
    // 0x11eccc: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11ecccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ecd0: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11ecd0u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11ecd4: 0x15c00007  bnez        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x11ECD4u;
    {
        const bool branch_taken_0x11ecd4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECD4u;
        // 0x11ecd8: 0x44806800  mtc1        $zero, $f13 (Delay Slot)
        { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecd4) {
            ctx->pc = 0x11ECF4u;
            goto label_11ecf4;
        }
    }
    ctx->pc = 0x11ECDCu;
    // 0x11ecdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ecdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ece0:
    // 0x11ece0: 0xc047764  jal         func_11DD90
    ctx->pc = 0x11ECE0u;
    SET_GPR_U32(ctx, 31, 0x11ECE8u);
    ctx->pc = 0x11DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD90u, 0x11ECE0u, 0x11ECE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECE8u;
label_11ece8:
    // 0x11ece8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ece8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11ecec:
    // 0x11ecec: 0x3e00008  jr          $ra
    ctx->pc = 0x11ECECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECECu;
        // 0x11ecf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ECECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ECF4u;
label_11ecf4:
    // 0x11ecf4: 0xc047052  jal         func_11C148
    ctx->pc = 0x11ECF4u;
    SET_GPR_U32(ctx, 31, 0x11ECFCu);
    ctx->pc = 0x11ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ECF4u;
    // 0x11ecf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C148u, 0x11ECF4u, 0x11ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ECFCu;
label_11ecfc:
    // 0x11ecfc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11ed00: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x11ed00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed04: 0x104f0013  beq         $v0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x11ED04u;
    {
        const bool branch_taken_0x11ed04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x11ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED04u;
        // 0x11ed08: 0x284f0002  slti        $t7, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed04) {
            ctx->pc = 0x11ED54u;
            goto label_11ed54;
        }
    }
    ctx->pc = 0x11ED0Cu;
    // 0x11ed0c: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11ED0Cu;
    {
        const bool branch_taken_0x11ed0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED0Cu;
        // 0x11ed10: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed0c) {
            ctx->pc = 0x11ED38u;
            goto label_11ed38;
        }
    }
    ctx->pc = 0x11ED14u;
    // 0x11ed14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ED14u;
    {
        const bool branch_taken_0x11ed14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED14u;
        // 0x11ed18: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed14) {
            ctx->pc = 0x11ED2Cu;
            goto label_11ed2c;
        }
    }
    ctx->pc = 0x11ED1Cu;
label_11ed1c:
    // 0x11ed1c: 0xc047508  jal         func_11D420
    ctx->pc = 0x11ED1Cu;
    SET_GPR_U32(ctx, 31, 0x11ED24u);
    ctx->pc = 0x11ED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED1Cu;
    // 0x11ed20: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D420u, 0x11ED1Cu, 0x11ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED24u;
label_11ed24:
    // 0x11ed24: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x11ED24u;
    {
        const bool branch_taken_0x11ed24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED24u;
        // 0x11ed28: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed24) {
            ctx->pc = 0x11ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ece8;
        }
    }
    ctx->pc = 0x11ED2Cu;
label_11ed2c:
    // 0x11ed2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed30: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x11ED30u;
    {
        const bool branch_taken_0x11ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED30u;
        // 0x11ed34: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed30) {
            ctx->pc = 0x11ECE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ece0;
        }
    }
    ctx->pc = 0x11ED38u;
label_11ed38:
    // 0x11ed38: 0x144ffff8  bne         $v0, $t7, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11ED38u;
    {
        const bool branch_taken_0x11ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x11ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED38u;
        // 0x11ed3c: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed38) {
            ctx->pc = 0x11ED1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ed1c;
        }
    }
    ctx->pc = 0x11ED40u;
    // 0x11ed40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ed40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed44: 0xc047764  jal         func_11DD90
    ctx->pc = 0x11ED44u;
    SET_GPR_U32(ctx, 31, 0x11ED4Cu);
    ctx->pc = 0x11ED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED44u;
    // 0x11ed48: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD90u, 0x11ED44u, 0x11ED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED4Cu;
label_11ed4c:
    // 0x11ed4c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x11ED4Cu;
    {
        const bool branch_taken_0x11ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED4Cu;
        // 0x11ed50: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed4c) {
            ctx->pc = 0x11ECE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ece8;
        }
    }
    ctx->pc = 0x11ED54u;
label_11ed54:
    // 0x11ed54: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11ed54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11ed58: 0xc047508  jal         func_11D420
    ctx->pc = 0x11ED58u;
    SET_GPR_U32(ctx, 31, 0x11ED60u);
    ctx->pc = 0x11ED5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED58u;
    // 0x11ed5c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D420u, 0x11ED58u, 0x11ED60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED60u;
label_11ed60:
    // 0x11ed60: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x11ED60u;
    {
        const bool branch_taken_0x11ed60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED60u;
        // 0x11ed64: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed60) {
            ctx->pc = 0x11ECECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ecec;
        }
    }
    ctx->pc = 0x11ED68u;
}
