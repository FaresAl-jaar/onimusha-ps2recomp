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

// Function: sub_0011ED68
// Address: 0x11ed68 - 0x11edd4
void sub_0011ED68_0x11ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011ED68_0x11ed68");
#endif

    switch (ctx->pc) {
        case 0x11ed9cu: goto label_11ed9c;
        case 0x11eda4u: goto label_11eda4;
        case 0x11edb8u: goto label_11edb8;
        default: break;
    }

    ctx->pc = 0x11ed68u;

    // 0x11ed68: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11ed68u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11ed6c: 0x440f6000  mfc1        $t7, $f12
    ctx->pc = 0x11ed6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x11ed70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ed74: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11ed74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11ed78: 0x3c0e3f49  lui         $t6, 0x3F49
    ctx->pc = 0x11ed78u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16201 << 16));
    // 0x11ed7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ed7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ed80: 0x35ce0fda  ori         $t6, $t6, 0xFDA
    ctx->pc = 0x11ed80u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4058);
    // 0x11ed84: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11ed84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11ed88: 0x1cf702a  slt         $t6, $t6, $t7
    ctx->pc = 0x11ed88u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x11ed8c: 0x15c00008  bnez        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x11ED8Cu;
    {
        const bool branch_taken_0x11ed8c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ed8c) {
            ctx->pc = 0x11EDB0u;
            goto label_11edb0;
        }
    }
    ctx->pc = 0x11ED94u;
    // 0x11ed94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x11ed94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11ed98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ed98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ed9c:
    // 0x11ed9c: 0xc0477a2  jal         func_11DE88
    ctx->pc = 0x11ED9Cu;
    SET_GPR_U32(ctx, 31, 0x11EDA4u);
    ctx->pc = 0x11DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE88u, 0x11ED9Cu, 0x11EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDA4u;
label_11eda4:
    // 0x11eda4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11eda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eda8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDA8u;
        // 0x11edac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EDB0u;
label_11edb0:
    // 0x11edb0: 0xc047052  jal         func_11C148
    ctx->pc = 0x11EDB0u;
    SET_GPR_U32(ctx, 31, 0x11EDB8u);
    ctx->pc = 0x11EDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDB0u;
    // 0x11edb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C148u, 0x11EDB0u, 0x11EDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDB8u;
label_11edb8:
    // 0x11edb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11edbc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x11edbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11edc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x11edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11edc4: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x11edc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11edc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11edcc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x11EDCCu;
    {
        const bool branch_taken_0x11edcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDCCu;
        // 0x11edd0: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11edcc) {
            ctx->pc = 0x11ED9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ed9c;
        }
    }
    ctx->pc = 0x11EDD4u;
}
