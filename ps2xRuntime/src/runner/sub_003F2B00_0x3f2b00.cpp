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

// Function: sub_003F2B00
// Address: 0x3f2b00 - 0x3f2b84
void sub_003F2B00_0x3f2b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2B00_0x3f2b00");
#endif

    switch (ctx->pc) {
        case 0x3f2b48u: goto label_3f2b48;
        case 0x3f2b58u: goto label_3f2b58;
        case 0x3f2b68u: goto label_3f2b68;
        case 0x3f2b78u: goto label_3f2b78;
        default: break;
    }

    ctx->pc = 0x3f2b00u;

    // 0x3f2b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f2b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3f2b04: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x3f2b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x3f2b08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3f2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f2b0c: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F2B0Cu;
    {
        const bool branch_taken_0x3f2b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B0Cu;
        // 0x3f2b10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b0c) {
            ctx->pc = 0x3F2B70u;
            goto label_3f2b70;
        }
    }
    ctx->pc = 0x3F2B14u;
    // 0x3f2b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3f2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3f2b18: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3F2B18u;
    {
        const bool branch_taken_0x3f2b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3F2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B18u;
        // 0x3f2b1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2b18) {
            ctx->pc = 0x3F2B60u;
            goto label_3f2b60;
        }
    }
    ctx->pc = 0x3F2B20u;
    // 0x3f2b20: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3F2B20u;
    {
        const bool branch_taken_0x3f2b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2b20) {
            ctx->pc = 0x3F2B50u;
            goto label_3f2b50;
        }
    }
    ctx->pc = 0x3F2B28u;
    // 0x3f2b28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f2b2c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F2B2Cu;
    {
        const bool branch_taken_0x3f2b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f2b2c) {
            ctx->pc = 0x3F2B40u;
            goto label_3f2b40;
        }
    }
    ctx->pc = 0x3F2B34u;
    // 0x3f2b34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3F2B34u;
    {
        const bool branch_taken_0x3f2b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b34) {
            ctx->pc = 0x3F2B78u;
            goto label_3f2b78;
        }
    }
    ctx->pc = 0x3F2B3Cu;
    // 0x3f2b3c: 0x0  nop
    ctx->pc = 0x3f2b3cu;
    // NOP
label_3f2b40:
    // 0x3f2b40: 0xc0fc924  jal         func_3F2490
    ctx->pc = 0x3F2B40u;
    SET_GPR_U32(ctx, 31, 0x3F2B48u);
    ctx->pc = 0x3F2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2490u, 0x3F2B40u, 0x3F2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B48u;
label_3f2b48:
    // 0x3f2b48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F2B48u;
    {
        const bool branch_taken_0x3f2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b48) {
            ctx->pc = 0x3F2B78u;
            goto label_3f2b78;
        }
    }
    ctx->pc = 0x3F2B50u;
label_3f2b50:
    // 0x3f2b50: 0xc0fc97c  jal         func_3F25F0
    ctx->pc = 0x3F2B50u;
    SET_GPR_U32(ctx, 31, 0x3F2B58u);
    ctx->pc = 0x3F25F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F25F0u, 0x3F2B50u, 0x3F2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B58u;
label_3f2b58:
    // 0x3f2b58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2B58u;
    {
        const bool branch_taken_0x3f2b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b58) {
            ctx->pc = 0x3F2B78u;
            goto label_3f2b78;
        }
    }
    ctx->pc = 0x3F2B60u;
label_3f2b60:
    // 0x3f2b60: 0xc0fc9d4  jal         func_3F2750
    ctx->pc = 0x3F2B60u;
    SET_GPR_U32(ctx, 31, 0x3F2B68u);
    ctx->pc = 0x3F2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2750u, 0x3F2B60u, 0x3F2B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B68u;
label_3f2b68:
    // 0x3f2b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3F2B68u;
    {
        const bool branch_taken_0x3f2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f2b68) {
            ctx->pc = 0x3F2B78u;
            goto label_3f2b78;
        }
    }
    ctx->pc = 0x3F2B70u;
label_3f2b70:
    // 0x3f2b70: 0xc0fca2c  jal         func_3F28B0
    ctx->pc = 0x3F2B70u;
    SET_GPR_U32(ctx, 31, 0x3F2B78u);
    ctx->pc = 0x3F28B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F28B0u, 0x3F2B70u, 0x3F2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2B78u;
label_3f2b78:
    // 0x3f2b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2B7Cu;
        // 0x3f2b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2B84u;
}
