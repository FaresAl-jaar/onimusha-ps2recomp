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

// Function: sub_003D9BE0
// Address: 0x3d9be0 - 0x3d9dc0
void sub_003D9BE0_0x3d9be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9BE0_0x3d9be0");
#endif

    switch (ctx->pc) {
        case 0x3d9c28u: goto label_3d9c28;
        case 0x3d9c34u: goto label_3d9c34;
        case 0x3d9c88u: goto label_3d9c88;
        case 0x3d9c94u: goto label_3d9c94;
        case 0x3d9ce8u: goto label_3d9ce8;
        case 0x3d9cf4u: goto label_3d9cf4;
        case 0x3d9d6cu: goto label_3d9d6c;
        case 0x3d9d94u: goto label_3d9d94;
        default: break;
    }

    ctx->pc = 0x3d9be0u;

    // 0x3d9be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d9be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d9be4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3d9be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3d9be8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d9bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d9becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d9bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d9bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3d9bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d9bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9bf8: 0x90832bd9  lbu         $v1, 0x2BD9($a0)
    ctx->pc = 0x3d9bf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11225)));
    // 0x3d9bfc: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3D9BFCu;
    {
        const bool branch_taken_0x3d9bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9BFCu;
        // 0x3d9c00: 0x641000fb  daddiu      $s0, $zero, 0xFB (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)251);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9bfc) {
            ctx->pc = 0x3D9CE0u;
            goto label_3d9ce0;
        }
    }
    ctx->pc = 0x3D9C04u;
    // 0x3d9c04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9c08: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D9C08u;
    {
        const bool branch_taken_0x3d9c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d9c08) {
            ctx->pc = 0x3D9C80u;
            goto label_3d9c80;
        }
    }
    ctx->pc = 0x3D9C10u;
    // 0x3d9c10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9C10u;
    {
        const bool branch_taken_0x3d9c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c10) {
            ctx->pc = 0x3D9C20u;
            goto label_3d9c20;
        }
    }
    ctx->pc = 0x3D9C18u;
    // 0x3d9c18: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3D9C18u;
    {
        const bool branch_taken_0x3d9c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c18) {
            ctx->pc = 0x3D9D40u;
            goto label_3d9d40;
        }
    }
    ctx->pc = 0x3D9C20u;
label_3d9c20:
    // 0x3d9c20: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9C20u;
    SET_GPR_U32(ctx, 31, 0x3D9C28u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9C20u, 0x3D9C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C28u;
label_3d9c28:
    // 0x3d9c28: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d9c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d9c2c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D9C2Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C34u);
    ctx->pc = 0x3D9C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C2Cu;
    // 0x3d9c30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D9C2Cu, 0x3D9C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C34u;
label_3d9c34:
    // 0x3d9c34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d9c38: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d9c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d9c3c: 0x2c410032  sltiu       $at, $v0, 0x32
    ctx->pc = 0x3d9c3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x3d9c40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9C40u;
    {
        const bool branch_taken_0x3d9c40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c40) {
            ctx->pc = 0x3D9C50u;
            goto label_3d9c50;
        }
    }
    ctx->pc = 0x3D9C48u;
    // 0x3d9c48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9C48u;
    {
        const bool branch_taken_0x3d9c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C48u;
        // 0x3d9c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c48) {
            ctx->pc = 0x3D9C70u;
            goto label_3d9c70;
        }
    }
    ctx->pc = 0x3D9C50u;
label_3d9c50:
    // 0x3d9c50: 0x2c410064  sltiu       $at, $v0, 0x64
    ctx->pc = 0x3d9c50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x3d9c54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9C54u;
    {
        const bool branch_taken_0x3d9c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9c54) {
            ctx->pc = 0x3D9C68u;
            goto label_3d9c68;
        }
    }
    ctx->pc = 0x3D9C5Cu;
    // 0x3d9c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9C5Cu;
    {
        const bool branch_taken_0x3d9c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C5Cu;
        // 0x3d9c60: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c5c) {
            ctx->pc = 0x3D9C70u;
            goto label_3d9c70;
        }
    }
    ctx->pc = 0x3D9C64u;
    // 0x3d9c64: 0x0  nop
    ctx->pc = 0x3d9c64u;
    // NOP
label_3d9c68:
    // 0x3d9c68: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x3d9c68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3d9c6c: 0x0  nop
    ctx->pc = 0x3d9c6cu;
    // NOP
label_3d9c70:
    // 0x3d9c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9c74: 0x244200fb  addiu       $v0, $v0, 0xFB
    ctx->pc = 0x3d9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 251));
    // 0x3d9c78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3D9C78u;
    {
        const bool branch_taken_0x3d9c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9C78u;
        // 0x3d9c7c: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9c78) {
            ctx->pc = 0x3D9D40u;
            goto label_3d9d40;
        }
    }
    ctx->pc = 0x3D9C80u;
label_3d9c80:
    // 0x3d9c80: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9C80u;
    SET_GPR_U32(ctx, 31, 0x3D9C88u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9C80u, 0x3D9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C88u;
label_3d9c88:
    // 0x3d9c88: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d9c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d9c8c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D9C8Cu;
    SET_GPR_U32(ctx, 31, 0x3D9C94u);
    ctx->pc = 0x3D9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9C8Cu;
    // 0x3d9c90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D9C8Cu, 0x3D9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9C94u;
label_3d9c94:
    // 0x3d9c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d9c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d9c98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d9c98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d9c9c: 0x2c410023  sltiu       $at, $v0, 0x23
    ctx->pc = 0x3d9c9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x3d9ca0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9CA0u;
    {
        const bool branch_taken_0x3d9ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9ca0) {
            ctx->pc = 0x3D9CB0u;
            goto label_3d9cb0;
        }
    }
    ctx->pc = 0x3D9CA8u;
    // 0x3d9ca8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9CA8u;
    {
        const bool branch_taken_0x3d9ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CA8u;
        // 0x3d9cac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9ca8) {
            ctx->pc = 0x3D9CD0u;
            goto label_3d9cd0;
        }
    }
    ctx->pc = 0x3D9CB0u;
label_3d9cb0:
    // 0x3d9cb0: 0x2c410046  sltiu       $at, $v0, 0x46
    ctx->pc = 0x3d9cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)70) ? 1 : 0);
    // 0x3d9cb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9CB4u;
    {
        const bool branch_taken_0x3d9cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9cb4) {
            ctx->pc = 0x3D9CC8u;
            goto label_3d9cc8;
        }
    }
    ctx->pc = 0x3D9CBCu;
    // 0x3d9cbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9CBCu;
    {
        const bool branch_taken_0x3d9cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CBCu;
        // 0x3d9cc0: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cbc) {
            ctx->pc = 0x3D9CD0u;
            goto label_3d9cd0;
        }
    }
    ctx->pc = 0x3D9CC4u;
    // 0x3d9cc4: 0x0  nop
    ctx->pc = 0x3d9cc4u;
    // NOP
label_3d9cc8:
    // 0x3d9cc8: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x3d9cc8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3d9ccc: 0x0  nop
    ctx->pc = 0x3d9cccu;
    // NOP
label_3d9cd0:
    // 0x3d9cd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d9cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9cd4: 0x244200fb  addiu       $v0, $v0, 0xFB
    ctx->pc = 0x3d9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 251));
    // 0x3d9cd8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3D9CD8u;
    {
        const bool branch_taken_0x3d9cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9CD8u;
        // 0x3d9cdc: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9cd8) {
            ctx->pc = 0x3D9D40u;
            goto label_3d9d40;
        }
    }
    ctx->pc = 0x3D9CE0u;
label_3d9ce0:
    // 0x3d9ce0: 0xc04d4a0  jal         func_135280
    ctx->pc = 0x3D9CE0u;
    SET_GPR_U32(ctx, 31, 0x3D9CE8u);
    ctx->pc = 0x135280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135280u, 0x3D9CE0u, 0x3D9CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9CE8u;
label_3d9ce8:
    // 0x3d9ce8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x3d9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3d9cec: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x3D9CECu;
    SET_GPR_U32(ctx, 31, 0x3D9CF4u);
    ctx->pc = 0x3D9CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9CECu;
    // 0x3d9cf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x3D9CECu, 0x3D9CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9CF4u;
label_3d9cf4:
    // 0x3d9cf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d9cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d9cf8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d9cf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d9cfc: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x3d9cfcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x3d9d00: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9D00u;
    {
        const bool branch_taken_0x3d9d00 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d00) {
            ctx->pc = 0x3D9D10u;
            goto label_3d9d10;
        }
    }
    ctx->pc = 0x3D9D08u;
    // 0x3d9d08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D9D08u;
    {
        const bool branch_taken_0x3d9d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D08u;
        // 0x3d9d0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d08) {
            ctx->pc = 0x3D9D30u;
            goto label_3d9d30;
        }
    }
    ctx->pc = 0x3D9D10u;
label_3d9d10:
    // 0x3d9d10: 0x2c410032  sltiu       $at, $v0, 0x32
    ctx->pc = 0x3d9d10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x3d9d14: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9D14u;
    {
        const bool branch_taken_0x3d9d14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d14) {
            ctx->pc = 0x3D9D28u;
            goto label_3d9d28;
        }
    }
    ctx->pc = 0x3D9D1Cu;
    // 0x3d9d1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D9D1Cu;
    {
        const bool branch_taken_0x3d9d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D1Cu;
        // 0x3d9d20: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d1c) {
            ctx->pc = 0x3D9D30u;
            goto label_3d9d30;
        }
    }
    ctx->pc = 0x3D9D24u;
    // 0x3d9d24: 0x0  nop
    ctx->pc = 0x3d9d24u;
    // NOP
label_3d9d28:
    // 0x3d9d28: 0x64020002  daddiu      $v0, $zero, 0x2
    ctx->pc = 0x3d9d28u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x3d9d2c: 0x0  nop
    ctx->pc = 0x3d9d2cu;
    // NOP
label_3d9d30:
    // 0x3d9d30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d9d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9d34: 0x244200fb  addiu       $v0, $v0, 0xFB
    ctx->pc = 0x3d9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 251));
    // 0x3d9d38: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3d9d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9d3c: 0x0  nop
    ctx->pc = 0x3d9d3cu;
    // NOP
label_3d9d40:
    // 0x3d9d40: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x3d9d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3d9d44: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x3d9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3d9d48: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D9D48u;
    {
        const bool branch_taken_0x3d9d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D48u;
        // 0x3d9d4c: 0x240200fb  addiu       $v0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d48) {
            ctx->pc = 0x3D9D88u;
            goto label_3d9d88;
        }
    }
    ctx->pc = 0x3D9D50u;
    // 0x3d9d50: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D9D50u;
    {
        const bool branch_taken_0x3d9d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d9d50) {
            ctx->pc = 0x3D9D60u;
            goto label_3d9d60;
        }
    }
    ctx->pc = 0x3D9D58u;
    // 0x3d9d58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3D9D58u;
    {
        const bool branch_taken_0x3d9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d58) {
            ctx->pc = 0x3D9DA8u;
            goto label_3d9da8;
        }
    }
    ctx->pc = 0x3D9D60u;
label_3d9d60:
    // 0x3d9d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d64: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x3D9D64u;
    SET_GPR_U32(ctx, 31, 0x3D9D6Cu);
    ctx->pc = 0x3D9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9D64u;
    // 0x3d9d68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x3D9D64u, 0x3D9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9D6Cu;
label_3d9d6c:
    // 0x3d9d6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d9d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9d70: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d9d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d9d74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3D9D74u;
    {
        const bool branch_taken_0x3d9d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d74) {
            ctx->pc = 0x3D9DA8u;
            goto label_3d9da8;
        }
    }
    ctx->pc = 0x3D9D7Cu;
    // 0x3d9d7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3D9D7Cu;
    {
        const bool branch_taken_0x3d9d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9D7Cu;
        // 0x3d9d80: 0x641000fc  daddiu      $s0, $zero, 0xFC (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)252);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9d7c) {
            ctx->pc = 0x3D9DA8u;
            goto label_3d9da8;
        }
    }
    ctx->pc = 0x3D9D84u;
    // 0x3d9d84: 0x0  nop
    ctx->pc = 0x3d9d84u;
    // NOP
label_3d9d88:
    // 0x3d9d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d9d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9d8c: 0xc0f6770  jal         func_3D9DC0
    ctx->pc = 0x3D9D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D9D94u);
    ctx->pc = 0x3D9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9D8Cu;
    // 0x3d9d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9DC0u, 0x3D9D8Cu, 0x3D9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9D94u;
label_3d9d94:
    // 0x3d9d94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3d9d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3d9d98: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3d9d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d9d9c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D9D9Cu;
    {
        const bool branch_taken_0x3d9d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d9d9c) {
            ctx->pc = 0x3D9DA8u;
            goto label_3d9da8;
        }
    }
    ctx->pc = 0x3D9DA4u;
    // 0x3d9da4: 0x641000fb  daddiu      $s0, $zero, 0xFB
    ctx->pc = 0x3d9da4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)251);
label_3d9da8:
    // 0x3d9da8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d9da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9dac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d9dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d9db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d9db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d9db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9db8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9DB8u;
        // 0x3d9dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9DC0u;
}
