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

// Function: sub_002F62D0
// Address: 0x2f62d0 - 0x2f636c
void sub_002F62D0_0x2f62d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F62D0_0x2f62d0");
#endif

    switch (ctx->pc) {
        case 0x2f62f8u: goto label_2f62f8;
        case 0x2f6314u: goto label_2f6314;
        case 0x2f633cu: goto label_2f633c;
        case 0x2f6354u: goto label_2f6354;
        default: break;
    }

    ctx->pc = 0x2f62d0u;

    // 0x2f62d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f62d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f62d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f62d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f62d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f62d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f62dc: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x2f62dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f62e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F62E0u;
    {
        const bool branch_taken_0x2f62e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62E0u;
        // 0x2f62e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f62e0) {
            ctx->pc = 0x2F6308u;
            goto label_2f6308;
        }
    }
    ctx->pc = 0x2F62E8u;
    // 0x2f62e8: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2f62e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2f62ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62f0: 0xc09aed4  jal         func_26BB50
    ctx->pc = 0x2F62F0u;
    SET_GPR_U32(ctx, 31, 0x2F62F8u);
    ctx->pc = 0x2F62F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62F0u;
    // 0x2f62f4: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BB50u, 0x2F62F0u, 0x2F62F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62F8u;
label_2f62f8:
    // 0x2f62f8: 0x8202000c  lb          $v0, 0xC($s0)
    ctx->pc = 0x2f62f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f62fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f6300: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x2f6300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f6304: 0x0  nop
    ctx->pc = 0x2f6304u;
    // NOP
label_2f6308:
    // 0x2f6308: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2f6308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2f630c: 0xc09af0c  jal         func_26BC30
    ctx->pc = 0x2F630Cu;
    SET_GPR_U32(ctx, 31, 0x2F6314u);
    ctx->pc = 0x2F6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F630Cu;
    // 0x2f6310: 0x24840500  addiu       $a0, $a0, 0x500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BC30u, 0x2F630Cu, 0x2F6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6314u;
label_2f6314:
    // 0x2f6314: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F6314u;
    {
        const bool branch_taken_0x2f6314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6314u;
        // 0x2f6318: 0x3c01008c  lui         $at, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)140 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6314) {
            ctx->pc = 0x2F6358u;
            goto label_2f6358;
        }
    }
    ctx->pc = 0x2F631Cu;
    // 0x2f631c: 0x802205ab  lb          $v0, 0x5AB($at)
    ctx->pc = 0x2f631cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 1451)));
    // 0x2f6320: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6320u;
    {
        const bool branch_taken_0x2f6320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6320u;
        // 0x2f6324: 0x3c04008e  lui         $a0, 0x8E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6320) {
            ctx->pc = 0x2F6348u;
            goto label_2f6348;
        }
    }
    ctx->pc = 0x2F6328u;
    // 0x2f6328: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2f6328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f632c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x2f632cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x2f6330: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2f6330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6334: 0xc0bd390  jal         func_2F4E40
    ctx->pc = 0x2F6334u;
    SET_GPR_U32(ctx, 31, 0x2F633Cu);
    ctx->pc = 0x2F6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6334u;
    // 0x2f6338: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4E40u, 0x2F6334u, 0x2F633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F633Cu;
label_2f633c:
    // 0x2f633c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F633Cu;
    {
        const bool branch_taken_0x2f633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f633c) {
            ctx->pc = 0x2F6358u;
            goto label_2f6358;
        }
    }
    ctx->pc = 0x2F6344u;
    // 0x2f6344: 0x0  nop
    ctx->pc = 0x2f6344u;
    // NOP
label_2f6348:
    // 0x2f6348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f634c: 0xc0bd418  jal         func_2F5060
    ctx->pc = 0x2F634Cu;
    SET_GPR_U32(ctx, 31, 0x2F6354u);
    ctx->pc = 0x2F6350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F634Cu;
    // 0x2f6350: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5060u, 0x2F634Cu, 0x2F6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6354u;
label_2f6354:
    // 0x2f6354: 0x0  nop
    ctx->pc = 0x2f6354u;
    // NOP
label_2f6358:
    // 0x2f6358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f6358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f635c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f635cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f6360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6364: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6364u;
        // 0x2f6368: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F636Cu;
}
