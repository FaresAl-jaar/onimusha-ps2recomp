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

// Function: sub_003DBBC0
// Address: 0x3dbbc0 - 0x3dbc1c
void sub_003DBBC0_0x3dbbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBBC0_0x3dbbc0");
#endif

    switch (ctx->pc) {
        case 0x3dbbe8u: goto label_3dbbe8;
        case 0x3dbbfcu: goto label_3dbbfc;
        default: break;
    }

    ctx->pc = 0x3dbbc0u;

    // 0x3dbbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3dbbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3dbbc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dbbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dbbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3dbbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3dbbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dbbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dbbd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3dbbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbbd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3dbbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbbd8: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3dbbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3dbbdc: 0x8e2507c0  lw          $a1, 0x7C0($s1)
    ctx->pc = 0x3dbbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1984)));
    // 0x3dbbe0: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3DBBE0u;
    SET_GPR_U32(ctx, 31, 0x3DBBE8u);
    ctx->pc = 0x3DBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBE0u;
    // 0x3dbbe4: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3DBBE0u, 0x3DBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBE8u;
label_3dbbe8:
    // 0x3dbbe8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DBBE8u;
    {
        const bool branch_taken_0x3dbbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBE8u;
        // 0x3dbbec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbe8) {
            ctx->pc = 0x3DBC04u;
            goto label_3dbc04;
        }
    }
    ctx->pc = 0x3DBBF0u;
    // 0x3dbbf0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3dbbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dbbf4: 0xc0f6f08  jal         func_3DBC20
    ctx->pc = 0x3DBBF4u;
    SET_GPR_U32(ctx, 31, 0x3DBBFCu);
    ctx->pc = 0x3DBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DBBF4u;
    // 0x3dbbf8: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBC20u, 0x3DBBF4u, 0x3DBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBFCu;
label_3dbbfc:
    // 0x3dbbfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBBFCu;
    {
        const bool branch_taken_0x3dbbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBFCu;
        // 0x3dbc00: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbbfc) {
            ctx->pc = 0x3DBC0Cu;
            goto label_3dbc0c;
        }
    }
    ctx->pc = 0x3DBC04u;
label_3dbc04:
    // 0x3dbc04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dbc08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dbc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dbc0c:
    // 0x3dbc0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3dbc0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dbc10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dbc10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbc14: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBC14u;
        // 0x3dbc18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBC1Cu;
}
