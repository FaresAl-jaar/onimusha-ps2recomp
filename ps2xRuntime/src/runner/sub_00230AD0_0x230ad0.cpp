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

// Function: sub_00230AD0
// Address: 0x230ad0 - 0x230b28
void sub_00230AD0_0x230ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230AD0_0x230ad0");
#endif

    switch (ctx->pc) {
        case 0x230af4u: goto label_230af4;
        case 0x230b04u: goto label_230b04;
        case 0x230b0cu: goto label_230b0c;
        default: break;
    }

    ctx->pc = 0x230ad0u;

    // 0x230ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230ad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x230ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x230ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x230ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230adc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x230adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x230ae0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x230ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x230ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x230ae8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x230ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x230aec: 0xc08c732  jal         func_231CC8
    ctx->pc = 0x230AECu;
    SET_GPR_U32(ctx, 31, 0x230AF4u);
    ctx->pc = 0x230AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230AECu;
    // 0x230af0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CC8u, 0x230AECu, 0x230AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230AF4u;
label_230af4:
    // 0x230af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230af8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x230af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230afc: 0xc08c2ca  jal         func_230B28
    ctx->pc = 0x230AFCu;
    SET_GPR_U32(ctx, 31, 0x230B04u);
    ctx->pc = 0x230B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230AFCu;
    // 0x230b00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230B28u, 0x230AFCu, 0x230B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B04u;
label_230b04:
    // 0x230b04: 0xc08c738  jal         func_231CE0
    ctx->pc = 0x230B04u;
    SET_GPR_U32(ctx, 31, 0x230B0Cu);
    ctx->pc = 0x230B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B04u;
    // 0x230b08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231CE0u, 0x230B04u, 0x230B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B0Cu;
label_230b0c:
    // 0x230b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x230b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230b10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x230b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x230b14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x230b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230b1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x230b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b20: 0x3e00008  jr          $ra
    ctx->pc = 0x230B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B20u;
        // 0x230b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230B28u;
}
