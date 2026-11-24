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

// Function: sub_001FD440
// Address: 0x1fd440 - 0x1fd4cc
void sub_001FD440_0x1fd440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD440_0x1fd440");
#endif

    switch (ctx->pc) {
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd480u: goto label_1fd480;
        case 0x1fd498u: goto label_1fd498;
        default: break;
    }

    ctx->pc = 0x1fd440u;

    // 0x1fd440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd444: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1fd444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd44c: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x1fd44cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x1fd450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fd450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fd454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fd454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd458: 0x26108138  addiu       $s0, $s0, -0x7EC8
    ctx->pc = 0x1fd458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934840));
    // 0x1fd45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd460: 0x113180  sll         $a2, $s1, 6
    ctx->pc = 0x1fd460u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1fd464: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fd464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1fd468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd46c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1fd46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1fd470: 0xc07ec84  jal         func_1FB210
    ctx->pc = 0x1FD470u;
    SET_GPR_U32(ctx, 31, 0x1FD478u);
    ctx->pc = 0x1FD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD470u;
    // 0x1fd474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB210u, 0x1FD470u, 0x1FD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD478u;
label_1fd478:
    // 0x1fd478: 0xc07f552  jal         func_1FD548
    ctx->pc = 0x1FD478u;
    SET_GPR_U32(ctx, 31, 0x1FD480u);
    ctx->pc = 0x1FD47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD478u;
    // 0x1fd47c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD548u, 0x1FD478u, 0x1FD480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD480u;
label_1fd480:
    // 0x1fd480: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fd480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd484: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x1fd484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x1fd488: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD488u;
    {
        const bool branch_taken_0x1fd488 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x1FD48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD488u;
        // 0x1fd48c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd488) {
            ctx->pc = 0x1FD4B4u;
            goto label_1fd4b4;
        }
    }
    ctx->pc = 0x1FD490u;
    // 0x1fd490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fd490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd494: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fd498:
    // 0x1fd498: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1fd498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1fd49c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fd49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fd4a0: 0x0  nop
    ctx->pc = 0x1fd4a0u;
    // NOP
    // 0x1fd4a4: 0x0  nop
    ctx->pc = 0x1fd4a4u;
    // NOP
    // 0x1fd4a8: 0x0  nop
    ctx->pc = 0x1fd4a8u;
    // NOP
    // 0x1fd4ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FD4ACu;
    {
        const bool branch_taken_0x1fd4ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4ACu;
        // 0x1fd4b0: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4ac) {
            ctx->pc = 0x1FD498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd498;
        }
    }
    ctx->pc = 0x1FD4B4u;
label_1fd4b4:
    // 0x1fd4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fd4bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd4c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4C4u;
        // 0x1fd4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD4CCu;
}
