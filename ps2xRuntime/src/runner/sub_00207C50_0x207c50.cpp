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

// Function: sub_00207C50
// Address: 0x207c50 - 0x207cc8
void sub_00207C50_0x207c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207C50_0x207c50");
#endif

    switch (ctx->pc) {
        case 0x207c6cu: goto label_207c6c;
        case 0x207ca0u: goto label_207ca0;
        case 0x207cacu: goto label_207cac;
        default: break;
    }

    ctx->pc = 0x207c50u;

    // 0x207c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x207c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x207c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x207c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x207c64: 0xc081d84  jal         func_207610
    ctx->pc = 0x207C64u;
    SET_GPR_U32(ctx, 31, 0x207C6Cu);
    ctx->pc = 0x207C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C64u;
    // 0x207c68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x207C64u, 0x207C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C6Cu;
label_207c6c:
    // 0x207c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x207c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207c74: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x207C74u;
    {
        const bool branch_taken_0x207c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207C74u;
        // 0x207c78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207c74) {
            ctx->pc = 0x207C98u;
            goto label_207c98;
        }
    }
    ctx->pc = 0x207C7Cu;
    // 0x207c7c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207c88: 0x24847978  addiu       $a0, $a0, 0x7978
    ctx->pc = 0x207c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31096));
    // 0x207c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c90: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x207C90u;
    ctx->pc = 0x207C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207C90u;
    // 0x207c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x207C98u;
label_207c98:
    // 0x207c98: 0xc081aa6  jal         func_206A98
    ctx->pc = 0x207C98u;
    SET_GPR_U32(ctx, 31, 0x207CA0u);
    ctx->pc = 0x206A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206A98u, 0x207C98u, 0x207CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CA0u;
label_207ca0:
    // 0x207ca0: 0x26040284  addiu       $a0, $s0, 0x284
    ctx->pc = 0x207ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x207ca4: 0xc082c46  jal         func_20B118
    ctx->pc = 0x207CA4u;
    SET_GPR_U32(ctx, 31, 0x207CACu);
    ctx->pc = 0x207CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CA4u;
    // 0x207ca8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B118u, 0x207CA4u, 0x207CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CACu;
label_207cac:
    // 0x207cac: 0x260402a4  addiu       $a0, $s0, 0x2A4
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x207cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x207cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x207cb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207cbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x207cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207cc0: 0x8082c46  j           func_20B118
    ctx->pc = 0x207CC0u;
    ctx->pc = 0x207CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207CC0u;
    // 0x207cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B118u;
    sub_0020B118_0x20b118(rdram, ctx, runtime); return;
    ctx->pc = 0x207CC8u;
}
