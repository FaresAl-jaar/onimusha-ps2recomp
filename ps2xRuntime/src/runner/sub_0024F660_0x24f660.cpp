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

// Function: sub_0024F660
// Address: 0x24f660 - 0x24f704
void sub_0024F660_0x24f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F660_0x24f660");
#endif

    switch (ctx->pc) {
        case 0x24f69cu: goto label_24f69c;
        case 0x24f6a8u: goto label_24f6a8;
        case 0x24f6bcu: goto label_24f6bc;
        case 0x24f6d0u: goto label_24f6d0;
        case 0x24f6d8u: goto label_24f6d8;
        default: break;
    }

    ctx->pc = 0x24f660u;

    // 0x24f660: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f664: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24f664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f668: 0x8c4374d8  lw          $v1, 0x74D8($v0)
    ctx->pc = 0x24f668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D8u));
    // 0x24f66c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f670: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24f678: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24f67c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F67Cu;
    {
        const bool branch_taken_0x24f67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F67Cu;
        // 0x24f680: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f67c) {
            ctx->pc = 0x24F694u;
            goto label_24f694;
        }
    }
    ctx->pc = 0x24F684u;
    // 0x24f684: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24f684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x24f688: 0x8c4374d0  lw          $v1, 0x74D0($v0)
    ctx->pc = 0x24f688u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4D74D0u));
    // 0x24f68c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x24F68Cu;
    {
        const bool branch_taken_0x24f68c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x24F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F68Cu;
        // 0x24f690: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f68c) {
            ctx->pc = 0x24F6F0u;
            goto label_24f6f0;
        }
    }
    ctx->pc = 0x24F694u;
label_24f694:
    // 0x24f694: 0xc093f14  jal         func_24FC50
    ctx->pc = 0x24F694u;
    SET_GPR_U32(ctx, 31, 0x24F69Cu);
    ctx->pc = 0x24F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F694u;
    // 0x24f698: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC50u, 0x24F694u, 0x24F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F69Cu;
label_24f69c:
    // 0x24f69c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x24f69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x24f6a0: 0x24509930  addiu       $s0, $v0, -0x66D0
    ctx->pc = 0x24f6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940976));
    // 0x24f6a4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x24f6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_24f6a8:
    // 0x24f6a8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x24f6a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f6ac: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F6ACu;
    {
        const bool branch_taken_0x24f6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x24f6ac) {
            ctx->pc = 0x24F6B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F6ACu;
            // 0x24f6b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F6C0u;
            goto label_24f6c0;
        }
    }
    ctx->pc = 0x24F6B4u;
    // 0x24f6b4: 0xc093d28  jal         func_24F4A0
    ctx->pc = 0x24F6B4u;
    SET_GPR_U32(ctx, 31, 0x24F6BCu);
    ctx->pc = 0x24F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6B4u;
    // 0x24f6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F4A0u, 0x24F6B4u, 0x24F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6BCu;
label_24f6bc:
    // 0x24f6bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24f6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_24f6c0:
    // 0x24f6c0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24F6C0u;
    {
        const bool branch_taken_0x24f6c0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x24F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6C0u;
        // 0x24f6c4: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f6c0) {
            ctx->pc = 0x24F6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f6a8;
        }
    }
    ctx->pc = 0x24F6C8u;
    // 0x24f6c8: 0xc093f1a  jal         func_24FC68
    ctx->pc = 0x24F6C8u;
    SET_GPR_U32(ctx, 31, 0x24F6D0u);
    ctx->pc = 0x24FC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC68u, 0x24F6C8u, 0x24F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6D0u;
label_24f6d0:
    // 0x24f6d0: 0xc091c32  jal         func_2470C8
    ctx->pc = 0x24F6D0u;
    SET_GPR_U32(ctx, 31, 0x24F6D8u);
    ctx->pc = 0x2470C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2470C8u, 0x24F6D0u, 0x24F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6D8u;
label_24f6d8:
    // 0x24f6d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24f6d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f6dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24f6dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24f6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f6e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24f6e8: 0x8094a8e  j           func_252A38
    ctx->pc = 0x24F6E8u;
    ctx->pc = 0x24F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6E8u;
    // 0x24f6ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252A38u;
    sub_00252A38_0x252a38(rdram, ctx, runtime); return;
    ctx->pc = 0x24F6F0u;
label_24f6f0:
    // 0x24f6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24f6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24f6f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24f6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f6f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24f6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24f6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F6FCu;
        // 0x24f700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F704u;
}
