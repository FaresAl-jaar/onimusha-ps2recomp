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

// Function: sub_003D9B40
// Address: 0x3d9b40 - 0x3d9bdc
void sub_003D9B40_0x3d9b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9B40_0x3d9b40");
#endif

    switch (ctx->pc) {
        case 0x3d9b78u: goto label_3d9b78;
        case 0x3d9b84u: goto label_3d9b84;
        case 0x3d9b98u: goto label_3d9b98;
        case 0x3d9bb0u: goto label_3d9bb0;
        case 0x3d9bbcu: goto label_3d9bbc;
        default: break;
    }

    ctx->pc = 0x3d9b40u;

    // 0x3d9b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9b44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d9b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d9b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d9b4c: 0x90832bd9  lbu         $v1, 0x2BD9($a0)
    ctx->pc = 0x3d9b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11225)));
    // 0x3d9b50: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3D9B50u;
    {
        const bool branch_taken_0x3d9b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B50u;
        // 0x3d9b54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b50) {
            ctx->pc = 0x3D9BA8u;
            goto label_3d9ba8;
        }
    }
    ctx->pc = 0x3D9B58u;
    // 0x3d9b58: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3D9B58u;
    {
        const bool branch_taken_0x3d9b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d9b58) {
            ctx->pc = 0x3D9B90u;
            goto label_3d9b90;
        }
    }
    ctx->pc = 0x3D9B60u;
    // 0x3d9b60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9B60u;
    {
        const bool branch_taken_0x3d9b60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9b60) {
            ctx->pc = 0x3D9B70u;
            goto label_3d9b70;
        }
    }
    ctx->pc = 0x3D9B68u;
    // 0x3d9b68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3D9B68u;
    {
        const bool branch_taken_0x3d9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9b68) {
            ctx->pc = 0x3D9BC8u;
            goto label_3d9bc8;
        }
    }
    ctx->pc = 0x3D9B70u;
label_3d9b70:
    // 0x3d9b70: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9B70u;
    SET_GPR_U32(ctx, 31, 0x3D9B78u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9B70u, 0x3D9B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B78u;
label_3d9b78:
    // 0x3d9b78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d9b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d9b7c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D9B7Cu;
    SET_GPR_U32(ctx, 31, 0x3D9B84u);
    ctx->pc = 0x3D9B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B7Cu;
    // 0x3d9b80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D9B7Cu, 0x3D9B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B84u;
label_3d9b84:
    // 0x3d9b84: 0x64420003  daddiu      $v0, $v0, 0x3
    ctx->pc = 0x3d9b84u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)3);
    // 0x3d9b88: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3D9B88u;
    {
        const bool branch_taken_0x3d9b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B88u;
        // 0x3d9b8c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b88) {
            ctx->pc = 0x3D9BD0u;
            goto label_3d9bd0;
        }
    }
    ctx->pc = 0x3D9B90u;
label_3d9b90:
    // 0x3d9b90: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9B90u;
    SET_GPR_U32(ctx, 31, 0x3D9B98u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9B90u, 0x3D9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B98u;
label_3d9b98:
    // 0x3d9b98: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3d9b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3d9b9c: 0x64420003  daddiu      $v0, $v0, 0x3
    ctx->pc = 0x3d9b9cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)3);
    // 0x3d9ba0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D9BA0u;
    {
        const bool branch_taken_0x3d9ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BA0u;
        // 0x3d9ba4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ba0) {
            ctx->pc = 0x3D9BD0u;
            goto label_3d9bd0;
        }
    }
    ctx->pc = 0x3D9BA8u;
label_3d9ba8:
    // 0x3d9ba8: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9BA8u;
    SET_GPR_U32(ctx, 31, 0x3D9BB0u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9BA8u, 0x3D9BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BB0u;
label_3d9bb0:
    // 0x3d9bb0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d9bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d9bb4: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D9BB4u;
    SET_GPR_U32(ctx, 31, 0x3D9BBCu);
    ctx->pc = 0x3D9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9BB4u;
    // 0x3d9bb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D9BB4u, 0x3D9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9BBCu;
label_3d9bbc:
    // 0x3d9bbc: 0x64420005  daddiu      $v0, $v0, 0x5
    ctx->pc = 0x3d9bbcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)5);
    // 0x3d9bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9BC0u;
    {
        const bool branch_taken_0x3d9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BC0u;
        // 0x3d9bc4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bc0) {
            ctx->pc = 0x3D9BD0u;
            goto label_3d9bd0;
        }
    }
    ctx->pc = 0x3D9BC8u;
label_3d9bc8:
    // 0x3d9bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d9bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9bcc: 0x0  nop
    ctx->pc = 0x3d9bccu;
    // NOP
label_3d9bd0:
    // 0x3d9bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d9bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BD4u;
        // 0x3d9bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9BDCu;
}
