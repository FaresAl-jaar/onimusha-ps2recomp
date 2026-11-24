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

// Function: sub_0014B280
// Address: 0x14b280 - 0x14b34c
void sub_0014B280_0x14b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B280_0x14b280");
#endif

    switch (ctx->pc) {
        case 0x14b2b4u: goto label_14b2b4;
        case 0x14b2bcu: goto label_14b2bc;
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2d0u: goto label_14b2d0;
        case 0x14b2d8u: goto label_14b2d8;
        case 0x14b2e0u: goto label_14b2e0;
        case 0x14b304u: goto label_14b304;
        case 0x14b310u: goto label_14b310;
        case 0x14b318u: goto label_14b318;
        case 0x14b320u: goto label_14b320;
        case 0x14b328u: goto label_14b328;
        case 0x14b330u: goto label_14b330;
        default: break;
    }

    ctx->pc = 0x14b280u;

    // 0x14b280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b284: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x14b288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b28c: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b28cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b294: 0x2442a040  addiu       $v0, $v0, -0x5FC0
    ctx->pc = 0x14b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942784));
    // 0x14b298: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x14b298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x14b29c: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b2a0: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x14b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x14b2a4: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b2a8: 0x24c6b370  addiu       $a2, $a2, -0x4C90
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947696));
    // 0x14b2ac: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B2ACu;
    SET_GPR_U32(ctx, 31, 0x14B2B4u);
    ctx->pc = 0x14B2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2ACu;
    // 0x14b2b0: 0x24e7b350  addiu       $a3, $a3, -0x4CB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B2ACu, 0x14B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2B4u;
label_14b2b4:
    // 0x14b2b4: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B2B4u;
    SET_GPR_U32(ctx, 31, 0x14B2BCu);
    ctx->pc = 0x14B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2B4u;
    // 0x14b2b8: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B2B4u, 0x14B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2BCu;
label_14b2bc:
    // 0x14b2bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14B2BCu;
    {
        const bool branch_taken_0x14b2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b2bc) {
            ctx->pc = 0x14B2E8u;
            goto label_14b2e8;
        }
    }
    ctx->pc = 0x14B2C4u;
    // 0x14b2c4: 0x0  nop
    ctx->pc = 0x14b2c4u;
    // NOP
label_14b2c8:
    // 0x14b2c8: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B2C8u;
    SET_GPR_U32(ctx, 31, 0x14B2D0u);
    ctx->pc = 0x14B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2C8u;
    // 0x14b2cc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B2C8u, 0x14B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D0u;
label_14b2d0:
    // 0x14b2d0: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B2D0u;
    SET_GPR_U32(ctx, 31, 0x14B2D8u);
    ctx->pc = 0x14B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2D0u;
    // 0x14b2d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B2D0u, 0x14B2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2D8u;
label_14b2d8:
    // 0x14b2d8: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B2D8u;
    SET_GPR_U32(ctx, 31, 0x14B2E0u);
    ctx->pc = 0x14B2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2D8u;
    // 0x14b2dc: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B2D8u, 0x14B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2E0u;
label_14b2e0:
    // 0x14b2e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B2E0u;
    {
        const bool branch_taken_0x14b2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2e0) {
            ctx->pc = 0x14B2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b2c8;
        }
    }
    ctx->pc = 0x14B2E8u;
label_14b2e8:
    // 0x14b2e8: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x14b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x14b2ec: 0x3c070015  lui         $a3, 0x15
    ctx->pc = 0x14b2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21 << 16));
    // 0x14b2f0: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b2f4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x14b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14b2f8: 0x24c6b370  addiu       $a2, $a2, -0x4C90
    ctx->pc = 0x14b2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947696));
    // 0x14b2fc: 0xc054d34  jal         func_1534D0
    ctx->pc = 0x14B2FCu;
    SET_GPR_U32(ctx, 31, 0x14B304u);
    ctx->pc = 0x14B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B2FCu;
    // 0x14b300: 0x24e7b350  addiu       $a3, $a3, -0x4CB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1534D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1534D0u, 0x14B2FCu, 0x14B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B304u;
label_14b304:
    // 0x14b304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b308: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B308u;
    SET_GPR_U32(ctx, 31, 0x14B310u);
    ctx->pc = 0x14B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B308u;
    // 0x14b30c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B308u, 0x14B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B310u;
label_14b310:
    // 0x14b310: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B310u;
    {
        const bool branch_taken_0x14b310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b310) {
            ctx->pc = 0x14B338u;
            goto label_14b338;
        }
    }
    ctx->pc = 0x14B318u;
label_14b318:
    // 0x14b318: 0xc0551e8  jal         func_1547A0
    ctx->pc = 0x14B318u;
    SET_GPR_U32(ctx, 31, 0x14B320u);
    ctx->pc = 0x14B31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B318u;
    // 0x14b31c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547A0u, 0x14B318u, 0x14B320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B320u;
label_14b320:
    // 0x14b320: 0xc040d08  jal         func_103420
    ctx->pc = 0x14B320u;
    SET_GPR_U32(ctx, 31, 0x14B328u);
    ctx->pc = 0x14B324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B320u;
    // 0x14b324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103420u, 0x14B320u, 0x14B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B328u;
label_14b328:
    // 0x14b328: 0xc0554f4  jal         func_1553D0
    ctx->pc = 0x14B328u;
    SET_GPR_U32(ctx, 31, 0x14B330u);
    ctx->pc = 0x14B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B328u;
    // 0x14b32c: 0x278485b0  addiu       $a0, $gp, -0x7A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1553D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1553D0u, 0x14B328u, 0x14B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B330u;
label_14b330:
    // 0x14b330: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14B330u;
    {
        const bool branch_taken_0x14b330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b330) {
            ctx->pc = 0x14B318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b318;
        }
    }
    ctx->pc = 0x14B338u;
label_14b338:
    // 0x14b338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b344: 0x3e00008  jr          $ra
    ctx->pc = 0x14B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B344u;
        // 0x14b348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B34Cu;
}
