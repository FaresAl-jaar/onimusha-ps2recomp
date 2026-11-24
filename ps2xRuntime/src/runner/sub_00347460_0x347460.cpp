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

// Function: sub_00347460
// Address: 0x347460 - 0x34749c
void sub_00347460_0x347460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347460_0x347460");
#endif

    switch (ctx->pc) {
        case 0x34747cu: goto label_34747c;
        case 0x34748cu: goto label_34748c;
        default: break;
    }

    ctx->pc = 0x347460u;

    // 0x347460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x347464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x347468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34746c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34746cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347470: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x347470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x347474: 0xc0d0a7c  jal         func_3429F0
    ctx->pc = 0x347474u;
    SET_GPR_U32(ctx, 31, 0x34747Cu);
    ctx->pc = 0x347478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347474u;
    // 0x347478: 0x24844820  addiu       $a0, $a0, 0x4820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3429F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3429F0u, 0x347474u, 0x34747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34747Cu;
label_34747c:
    // 0x34747c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34747cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x347480: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x347480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x347484: 0xc0d1f2c  jal         func_347CB0
    ctx->pc = 0x347484u;
    SET_GPR_U32(ctx, 31, 0x34748Cu);
    ctx->pc = 0x347488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347484u;
    // 0x347488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347CB0u, 0x347484u, 0x34748Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34748Cu;
label_34748c:
    // 0x34748c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34748cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347494: 0x3e00008  jr          $ra
    ctx->pc = 0x347494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347494u;
        // 0x347498: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34749Cu;
}
