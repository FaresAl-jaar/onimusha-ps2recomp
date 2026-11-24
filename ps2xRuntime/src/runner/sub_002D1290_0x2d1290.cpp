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

// Function: sub_002D1290
// Address: 0x2d1290 - 0x2d1324
void sub_002D1290_0x2d1290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1290_0x2d1290");
#endif

    switch (ctx->pc) {
        case 0x2d12b0u: goto label_2d12b0;
        case 0x2d1308u: goto label_2d1308;
        default: break;
    }

    ctx->pc = 0x2d1290u;

    // 0x2d1290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d1294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1298: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d1298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d129c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x2d129cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x2d12a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D12A0u;
    {
        const bool branch_taken_0x2d12a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12a0) {
            ctx->pc = 0x2D12B8u;
            goto label_2d12b8;
        }
    }
    ctx->pc = 0x2D12A8u;
    // 0x2d12a8: 0xc0b43c8  jal         func_2D0F20
    ctx->pc = 0x2D12A8u;
    SET_GPR_U32(ctx, 31, 0x2D12B0u);
    ctx->pc = 0x2D12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12A8u;
    // 0x2d12ac: 0x90840017  lbu         $a0, 0x17($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F20u, 0x2D12A8u, 0x2D12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D12B0u;
label_2d12b0:
    // 0x2d12b0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2D12B0u;
    {
        const bool branch_taken_0x2d12b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12b0) {
            ctx->pc = 0x2D1318u;
            goto label_2d1318;
        }
    }
    ctx->pc = 0x2D12B8u;
label_2d12b8:
    // 0x2d12b8: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x2d12b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x2d12bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D12BCu;
    {
        const bool branch_taken_0x2d12bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12BCu;
        // 0x2d12c0: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12bc) {
            ctx->pc = 0x2D12E0u;
            goto label_2d12e0;
        }
    }
    ctx->pc = 0x2D12C4u;
    // 0x2d12c4: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2d12c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2d12c8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d12cc: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d12ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2d12d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d12d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d12d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D12D8u;
    {
        const bool branch_taken_0x2d12d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12D8u;
        // 0x2d12dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12d8) {
            ctx->pc = 0x2D12F8u;
            goto label_2d12f8;
        }
    }
    ctx->pc = 0x2D12E0u;
label_2d12e0:
    // 0x2d12e0: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2d12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2d12e4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2d12e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x2d12e8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2d12e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2d12ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d12f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d12f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d12f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d12f8:
    // 0x2d12f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D12F8u;
    {
        const bool branch_taken_0x2d12f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d12f8) {
            ctx->pc = 0x2D1310u;
            goto label_2d1310;
        }
    }
    ctx->pc = 0x2D1300u;
    // 0x2d1300: 0xc0b43b4  jal         func_2D0ED0
    ctx->pc = 0x2D1300u;
    SET_GPR_U32(ctx, 31, 0x2D1308u);
    ctx->pc = 0x2D1304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1300u;
    // 0x2d1304: 0x904429d0  lbu         $a0, 0x29D0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0ED0u, 0x2D1300u, 0x2D1308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1308u;
label_2d1308:
    // 0x2d1308: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D1308u;
    {
        const bool branch_taken_0x2d1308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1308) {
            ctx->pc = 0x2D1318u;
            goto label_2d1318;
        }
    }
    ctx->pc = 0x2D1310u;
label_2d1310:
    // 0x2d1310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1314: 0x0  nop
    ctx->pc = 0x2d1314u;
    // NOP
label_2d1318:
    // 0x2d1318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d131c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D131Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D131Cu;
        // 0x2d1320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D131Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1324u;
}
