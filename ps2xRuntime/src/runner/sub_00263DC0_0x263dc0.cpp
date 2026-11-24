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

// Function: sub_00263DC0
// Address: 0x263dc0 - 0x263e20
void sub_00263DC0_0x263dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263DC0_0x263dc0");
#endif

    switch (ctx->pc) {
        case 0x263dd4u: goto label_263dd4;
        default: break;
    }

    ctx->pc = 0x263dc0u;

    // 0x263dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x263dc4: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x263dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x263dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263dcc: 0xc0a737c  jal         func_29CDF0
    ctx->pc = 0x263DCCu;
    SET_GPR_U32(ctx, 31, 0x263DD4u);
    ctx->pc = 0x263DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263DCCu;
    // 0x263dd0: 0x2484f610  addiu       $a0, $a0, -0x9F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CDF0u, 0x263DCCu, 0x263DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263DD4u;
label_263dd4:
    // 0x263dd4: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x263dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x263dd8: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x263dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x263ddc: 0x24633d20  addiu       $v1, $v1, 0x3D20
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
    // 0x263de0: 0xa7808848  sh          $zero, -0x77B8($gp)
    ctx->pc = 0x263de0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936648), (uint16_t)GPR_U32(ctx, 0));
    // 0x263de4: 0xac23f730  sw          $v1, -0x8D0($at)
    ctx->pc = 0x263de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8BF730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF730u, _value); } while (0);
    // 0x263de8: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x263dec: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x263decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x263df0: 0x24633d70  addiu       $v1, $v1, 0x3D70
    ctx->pc = 0x263df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15728));
    // 0x263df4: 0xa780884c  sh          $zero, -0x77B4($gp)
    ctx->pc = 0x263df4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936652), (uint16_t)GPR_U32(ctx, 0));
    // 0x263df8: 0xac23f734  sw          $v1, -0x8CC($at)
    ctx->pc = 0x263df8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8BF734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF734u, _value); } while (0);
    // 0x263dfc: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x263dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x263e00: 0x3c01008c  lui         $at, 0x8C
    ctx->pc = 0x263e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
    // 0x263e04: 0x24633d80  addiu       $v1, $v1, 0x3D80
    ctx->pc = 0x263e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15744));
    // 0x263e08: 0xa7808850  sh          $zero, -0x77B0($gp)
    ctx->pc = 0x263e08u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936656), (uint16_t)GPR_U32(ctx, 0));
    // 0x263e0c: 0xac23f738  sw          $v1, -0x8C8($at)
    ctx->pc = 0x263e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8BF738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8BF738u, _value); } while (0);
    // 0x263e10: 0xa7808854  sh          $zero, -0x77AC($gp)
    ctx->pc = 0x263e10u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936660), (uint16_t)GPR_U32(ctx, 0));
    // 0x263e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263e18: 0x3e00008  jr          $ra
    ctx->pc = 0x263E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E18u;
        // 0x263e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263E20u;
}
