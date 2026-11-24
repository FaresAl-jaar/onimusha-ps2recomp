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

// Function: sub_002F64C0
// Address: 0x2f64c0 - 0x2f654c
void sub_002F64C0_0x2f64c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F64C0_0x2f64c0");
#endif

    switch (ctx->pc) {
        case 0x2f64e8u: goto label_2f64e8;
        case 0x2f64f0u: goto label_2f64f0;
        case 0x2f651cu: goto label_2f651c;
        case 0x2f6534u: goto label_2f6534;
        default: break;
    }

    ctx->pc = 0x2f64c0u;

    // 0x2f64c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f64c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f64c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f64c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f64c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f64cc: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f64ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f64d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F64D0u;
    {
        const bool branch_taken_0x2f64d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F64D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64D0u;
        // 0x2f64d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64d0) {
            ctx->pc = 0x2F64E8u;
            goto label_2f64e8;
        }
    }
    ctx->pc = 0x2F64D8u;
    // 0x2f64d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f64d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f64dc: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f64dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f64e0: 0xc0ed2f0  jal         func_3B4BC0
    ctx->pc = 0x2F64E0u;
    SET_GPR_U32(ctx, 31, 0x2F64E8u);
    ctx->pc = 0x2F64E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64E0u;
    // 0x2f64e4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BC0u, 0x2F64E0u, 0x2F64E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64E8u;
label_2f64e8:
    // 0x2f64e8: 0xc0ed2f4  jal         func_3B4BD0
    ctx->pc = 0x2F64E8u;
    SET_GPR_U32(ctx, 31, 0x2F64F0u);
    ctx->pc = 0x3B4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4BD0u, 0x2F64E8u, 0x2F64F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F64F0u;
label_2f64f0:
    // 0x2f64f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F64F0u;
    {
        const bool branch_taken_0x2f64f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f64f0) {
            ctx->pc = 0x2F6538u;
            goto label_2f6538;
        }
    }
    ctx->pc = 0x2F64F8u;
    // 0x2f64f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f64f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f64fc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F64FCu;
    {
        const bool branch_taken_0x2f64fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64FCu;
        // 0x2f6500: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64fc) {
            ctx->pc = 0x2F6528u;
            goto label_2f6528;
        }
    }
    ctx->pc = 0x2F6504u;
    // 0x2f6504: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6504u;
    {
        const bool branch_taken_0x2f6504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6504u;
        // 0x2f6508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6504) {
            ctx->pc = 0x2F6528u;
            goto label_2f6528;
        }
    }
    ctx->pc = 0x2F650Cu;
    // 0x2f650c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2f650cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f6510: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f6510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6514: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6514u;
    SET_GPR_U32(ctx, 31, 0x2F651Cu);
    ctx->pc = 0x2F6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6514u;
    // 0x2f6518: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6514u, 0x2F651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F651Cu;
label_2f651c:
    // 0x2f651c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F651Cu;
    {
        const bool branch_taken_0x2f651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f651c) {
            ctx->pc = 0x2F6538u;
            goto label_2f6538;
        }
    }
    ctx->pc = 0x2F6524u;
    // 0x2f6524: 0x0  nop
    ctx->pc = 0x2f6524u;
    // NOP
label_2f6528:
    // 0x2f6528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f652c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F652Cu;
    SET_GPR_U32(ctx, 31, 0x2F6534u);
    ctx->pc = 0x2F6530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F652Cu;
    // 0x2f6530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F652Cu, 0x2F6534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6534u;
label_2f6534:
    // 0x2f6534: 0x0  nop
    ctx->pc = 0x2f6534u;
    // NOP
label_2f6538:
    // 0x2f6538: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f653c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f653cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6540: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6544: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6544u;
        // 0x2f6548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F654Cu;
}
