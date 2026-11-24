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

// Function: sub_002089D8
// Address: 0x2089d8 - 0x208a34
void sub_002089D8_0x2089d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002089D8_0x2089d8");
#endif

    switch (ctx->pc) {
        case 0x208a20u: goto label_208a20;
        default: break;
    }

    ctx->pc = 0x2089d8u;

    // 0x2089d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2089d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2089dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2089dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2089e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2089e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2089e4: 0x2c850003  sltiu       $a1, $a0, 0x3
    ctx->pc = 0x2089e4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2089e8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2089E8u;
    {
        const bool branch_taken_0x2089e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2089ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089E8u;
        // 0x2089ec: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089e8) {
            ctx->pc = 0x208A24u;
            goto label_208a24;
        }
    }
    ctx->pc = 0x2089F0u;
    // 0x2089f0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2089F0u;
    {
        const bool branch_taken_0x2089f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2089f0) {
            ctx->pc = 0x2089F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2089F0u;
            // 0x2089f4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208A08u;
            goto label_208a08;
        }
    }
    ctx->pc = 0x2089F8u;
    // 0x2089f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2089f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2089fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2089FCu;
    {
        const bool branch_taken_0x2089fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2089FCu;
        // 0x208a00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2089fc) {
            ctx->pc = 0x208A0Cu;
            goto label_208a0c;
        }
    }
    ctx->pc = 0x208A04u;
    // 0x208a04: 0x0  nop
    ctx->pc = 0x208a04u;
    // NOP
label_208a08:
    // 0x208a08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x208a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208a0c:
    // 0x208a0c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x208A0Cu;
    {
        const bool branch_taken_0x208a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x208A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A0Cu;
        // 0x208a10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208a0c) {
            ctx->pc = 0x208A28u;
            goto label_208a28;
        }
    }
    ctx->pc = 0x208A14u;
    // 0x208a14: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x208a14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x208a18: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x208A18u;
    SET_GPR_U32(ctx, 31, 0x208A20u);
    ctx->pc = 0x208A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208A18u;
    // 0x208a1c: 0x24847c00  addiu       $a0, $a0, 0x7C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x208A18u, 0x208A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208A20u;
label_208a20:
    // 0x208a20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x208a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_208a24:
    // 0x208a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x208a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_208a28:
    // 0x208a28: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x208a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x208A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208A2Cu;
        // 0x208a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208A34u;
}
