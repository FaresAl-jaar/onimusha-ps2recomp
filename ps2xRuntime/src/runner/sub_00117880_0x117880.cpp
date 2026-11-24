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

// Function: sub_00117880
// Address: 0x117880 - 0x117904
void sub_00117880_0x117880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117880_0x117880");
#endif

    switch (ctx->pc) {
        case 0x1178d8u: goto label_1178d8;
        case 0x1178f0u: goto label_1178f0;
        default: break;
    }

    ctx->pc = 0x117880u;

    // 0x117880: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x117880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117884: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117888: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x117888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11788c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x117890: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x117890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x117894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x117894u;
    {
        const bool branch_taken_0x117894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117894u;
        // 0x117898: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117894) {
            ctx->pc = 0x1178A8u;
            goto label_1178a8;
        }
    }
    ctx->pc = 0x11789Cu;
    // 0x11789c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1178a0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1178A0u;
    {
        const bool branch_taken_0x1178a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A0u;
        // 0x1178a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a0) {
            ctx->pc = 0x1178F4u;
            goto label_1178f4;
        }
    }
    ctx->pc = 0x1178A8u;
label_1178a8:
    // 0x1178a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1178a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1178ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1178acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1178b0: 0x24422ea0  addiu       $v0, $v0, 0x2EA0
    ctx->pc = 0x1178b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11936));
    // 0x1178b4: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1178b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1178b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1178b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1178bc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1178bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1178c0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1178C0u;
    {
        const bool branch_taken_0x1178c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C0u;
        // 0x1178c4: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c0) {
            ctx->pc = 0x1178E0u;
            goto label_1178e0;
        }
    }
    ctx->pc = 0x1178C8u;
    // 0x1178c8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1178c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1178cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1178ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178d0: 0xc043724  jal         func_10DC90
    ctx->pc = 0x1178D0u;
    SET_GPR_U32(ctx, 31, 0x1178D8u);
    ctx->pc = 0x1178D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178D0u;
    // 0x1178d4: 0x24a57f80  addiu       $a1, $a1, 0x7F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC90u, 0x1178D0u, 0x1178D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178D8u;
label_1178d8:
    // 0x1178d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1178D8u;
    {
        const bool branch_taken_0x1178d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d8) {
            ctx->pc = 0x1178F4u;
            goto label_1178f4;
        }
    }
    ctx->pc = 0x1178E0u;
label_1178e0:
    // 0x1178e0: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x1178e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x1178e4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1178e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178e8: 0xc043728  jal         func_10DCA0
    ctx->pc = 0x1178E8u;
    SET_GPR_U32(ctx, 31, 0x1178F0u);
    ctx->pc = 0x1178ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1178E8u;
    // 0x1178ec: 0x24a57f80  addiu       $a1, $a1, 0x7F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCA0u, 0x1178E8u, 0x1178F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1178F0u;
label_1178f0:
    // 0x1178f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1178f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1178f4:
    // 0x1178f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1178f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1178f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1178fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1178FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178FCu;
        // 0x117900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1178FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117904u;
}
