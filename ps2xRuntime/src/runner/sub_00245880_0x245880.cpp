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

// Function: sub_00245880
// Address: 0x245880 - 0x2458dc
void sub_00245880_0x245880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245880_0x245880");
#endif

    switch (ctx->pc) {
        case 0x245880u: goto label_245880;
        case 0x245884u: goto label_245884;
        case 0x245888u: goto label_245888;
        case 0x24588cu: goto label_24588c;
        case 0x245890u: goto label_245890;
        case 0x245894u: goto label_245894;
        case 0x245898u: goto label_245898;
        case 0x24589cu: goto label_24589c;
        case 0x2458a0u: goto label_2458a0;
        case 0x2458a4u: goto label_2458a4;
        case 0x2458a8u: goto label_2458a8;
        case 0x2458acu: goto label_2458ac;
        case 0x2458b0u: goto label_2458b0;
        case 0x2458b4u: goto label_2458b4;
        case 0x2458b8u: goto label_2458b8;
        case 0x2458bcu: goto label_2458bc;
        case 0x2458c0u: goto label_2458c0;
        case 0x2458c4u: goto label_2458c4;
        case 0x2458c8u: goto label_2458c8;
        case 0x2458ccu: goto label_2458cc;
        case 0x2458d0u: goto label_2458d0;
        case 0x2458d4u: goto label_2458d4;
        case 0x2458d8u: goto label_2458d8;
        default: break;
    }

    ctx->pc = 0x245880u;

label_245880:
    // 0x245880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x245880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_245884:
    // 0x245884: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x245884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245888:
    // 0x245888: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_24588c:
    if (ctx->pc == 0x24588Cu) {
        ctx->pc = 0x24588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245888u;
        // 0x24588c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x245890u;
        goto label_245890;
    }
    ctx->pc = 0x245888u;
    {
        const bool branch_taken_0x245888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245888u;
        // 0x24588c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245888) {
            ctx->pc = 0x2458A8u;
            goto label_2458a8;
        }
    }
    ctx->pc = 0x245890u;
label_245890:
    // 0x245890: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x245890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_245894:
    // 0x245894: 0xc090d8a  jal         func_243628
label_245898:
    if (ctx->pc == 0x245898u) {
        ctx->pc = 0x245898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245894u;
        // 0x245898: 0x2484c810  addiu       $a0, $a0, -0x37F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24589Cu;
        goto label_24589c;
    }
    ctx->pc = 0x245894u;
    SET_GPR_U32(ctx, 31, 0x24589Cu);
    ctx->pc = 0x245898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245894u;
    // 0x245898: 0x2484c810  addiu       $a0, $a0, -0x37F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243628u, 0x245894u, 0x24589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24589Cu;
label_24589c:
    // 0x24589c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2458a0:
    if (ctx->pc == 0x2458A0u) {
        ctx->pc = 0x2458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24589Cu;
        // 0x2458a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458A4u;
        goto label_2458a4;
    }
    ctx->pc = 0x24589Cu;
    {
        const bool branch_taken_0x24589c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24589Cu;
        // 0x2458a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24589c) {
            ctx->pc = 0x2458D0u;
            goto label_2458d0;
        }
    }
    ctx->pc = 0x2458A4u;
label_2458a4:
    // 0x2458a4: 0x0  nop
    ctx->pc = 0x2458a4u;
    // NOP
label_2458a8:
    // 0x2458a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2458a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2458ac:
    // 0x2458ac: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2458acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2458b0:
    // 0x2458b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2458b4:
    if (ctx->pc == 0x2458B4u) {
        ctx->pc = 0x2458B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458B0u;
        // 0x2458b4: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458B8u;
        goto label_2458b8;
    }
    ctx->pc = 0x2458B0u;
    {
        const bool branch_taken_0x2458b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2458B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458B0u;
        // 0x2458b4: 0x2405012b  addiu       $a1, $zero, 0x12B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2458b0) {
            ctx->pc = 0x2458CCu;
            goto label_2458cc;
        }
    }
    ctx->pc = 0x2458B8u;
label_2458b8:
    // 0x2458b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2458b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2458bc:
    // 0x2458bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2458bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2458c0:
    // 0x2458c0: 0x40f809  jalr        $v0
label_2458c4:
    if (ctx->pc == 0x2458C4u) {
        ctx->pc = 0x2458C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458C0u;
        // 0x2458c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458C8u;
        goto label_2458c8;
    }
    ctx->pc = 0x2458C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2458C8u);
        ctx->pc = 0x2458C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458C0u;
        // 0x2458c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458C0u, 0x2458C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2458C8u;
label_2458c8:
    // 0x2458c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2458c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2458cc:
    // 0x2458cc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2458ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2458d0:
    // 0x2458d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2458d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2458d4:
    // 0x2458d4: 0x3e00008  jr          $ra
label_2458d8:
    if (ctx->pc == 0x2458D8u) {
        ctx->pc = 0x2458D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458D4u;
        // 0x2458d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2458DCu;
        goto label_fallthrough_0x2458d4;
    }
    ctx->pc = 0x2458D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2458D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2458D4u;
        // 0x2458d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2458D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2458d4:
    ctx->pc = 0x2458DCu;
}
