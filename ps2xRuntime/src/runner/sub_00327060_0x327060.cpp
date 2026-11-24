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

// Function: sub_00327060
// Address: 0x327060 - 0x3270b0
void sub_00327060_0x327060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327060_0x327060");
#endif

    switch (ctx->pc) {
        case 0x32707cu: goto label_32707c;
        default: break;
    }

    ctx->pc = 0x327060u;

    // 0x327060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x327064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x327064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327068: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x327068u;
    {
        const bool branch_taken_0x327068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327068u;
        // 0x32706c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327068) {
            ctx->pc = 0x3270A0u;
            goto label_3270a0;
        }
    }
    ctx->pc = 0x327070u;
    // 0x327070: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x327070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x327074: 0xc076664  jal         func_1D9990
    ctx->pc = 0x327074u;
    SET_GPR_U32(ctx, 31, 0x32707Cu);
    ctx->pc = 0x327078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327074u;
    // 0x327078: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9990u, 0x327074u, 0x32707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32707Cu;
label_32707c:
    // 0x32707c: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x32707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x327080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327084: 0x0  nop
    ctx->pc = 0x327084u;
    // NOP
    // 0x327088: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x327088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32708c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x32708Cu;
    {
        const bool branch_taken_0x32708c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x327090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32708Cu;
        // 0x327090: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32708c) {
            ctx->pc = 0x327098u;
            goto label_327098;
        }
    }
    ctx->pc = 0x327094u;
    // 0x327094: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x327094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327098:
    // 0x327098: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x327098u;
    {
        const bool branch_taken_0x327098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327098u;
        // 0x32709c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327098) {
            ctx->pc = 0x3270A4u;
            goto label_3270a4;
        }
    }
    ctx->pc = 0x3270A0u;
label_3270a0:
    // 0x3270a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3270a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3270a4:
    // 0x3270a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3270a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3270a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3270A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3270ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3270A8u;
        // 0x3270ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3270A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3270B0u;
}
