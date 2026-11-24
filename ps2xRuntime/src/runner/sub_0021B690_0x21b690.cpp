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

// Function: sub_0021B690
// Address: 0x21b690 - 0x21b718
void sub_0021B690_0x21b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B690_0x21b690");
#endif

    switch (ctx->pc) {
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6f0u: goto label_21b6f0;
        default: break;
    }

    ctx->pc = 0x21b690u;

    // 0x21b690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21b694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21b698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b69c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21b6a0: 0xc086c6a  jal         func_21B1A8
    ctx->pc = 0x21B6A0u;
    SET_GPR_U32(ctx, 31, 0x21B6A8u);
    ctx->pc = 0x21B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6A0u;
    // 0x21b6a4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B1A8u, 0x21B6A0u, 0x21B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6A8u;
label_21b6a8:
    // 0x21b6a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21B6A8u;
    {
        const bool branch_taken_0x21b6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A8u;
        // 0x21b6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a8) {
            ctx->pc = 0x21B708u;
            goto label_21b708;
        }
    }
    ctx->pc = 0x21B6B0u;
    // 0x21b6b0: 0x8e301fc0  lw          $s0, 0x1FC0($s1)
    ctx->pc = 0x21b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8128)));
    // 0x21b6b4: 0xc086c3c  jal         func_21B0F0
    ctx->pc = 0x21B6B4u;
    SET_GPR_U32(ctx, 31, 0x21B6BCu);
    ctx->pc = 0x21B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6B4u;
    // 0x21b6b8: 0x26041198  addiu       $a0, $s0, 0x1198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0F0u, 0x21B6B4u, 0x21B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6BCu;
label_21b6bc:
    // 0x21b6bc: 0xc0876b8  jal         func_21DAE0
    ctx->pc = 0x21B6BCu;
    SET_GPR_U32(ctx, 31, 0x21B6C4u);
    ctx->pc = 0x21DAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21DAE0u, 0x21B6BCu, 0x21B6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6C4u;
label_21b6c4:
    // 0x21b6c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b6c8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21B6C8u;
    {
        const bool branch_taken_0x21b6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x21B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6C8u;
        // 0x21b6cc: 0x26041150  addiu       $a0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6c8) {
            ctx->pc = 0x21B6E8u;
            goto label_21b6e8;
        }
    }
    ctx->pc = 0x21B6D0u;
    // 0x21b6d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b6d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b6d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b6d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b6dc: 0x8042e50  j           func_10B940
    ctx->pc = 0x21B6DCu;
    ctx->pc = 0x21B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6DCu;
    // 0x21b6e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B940u;
    sub_0010B940_0x10b940(rdram, ctx, runtime); return;
    ctx->pc = 0x21B6E4u;
    // 0x21b6e4: 0x0  nop
    ctx->pc = 0x21b6e4u;
    // NOP
label_21b6e8:
    // 0x21b6e8: 0xc042e8a  jal         func_10BA28
    ctx->pc = 0x21B6E8u;
    SET_GPR_U32(ctx, 31, 0x21B6F0u);
    ctx->pc = 0x10BA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BA28u, 0x21B6E8u, 0x21B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6F0u;
label_21b6f0:
    // 0x21b6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b6f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b6fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b700: 0x8086dc6  j           func_21B718
    ctx->pc = 0x21B700u;
    ctx->pc = 0x21B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B700u;
    // 0x21b704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B718u;
    sub_0021B718_0x21b718(rdram, ctx, runtime); return;
    ctx->pc = 0x21B708u;
label_21b708:
    // 0x21b708: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b70c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b710: 0x3e00008  jr          $ra
    ctx->pc = 0x21B710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B710u;
        // 0x21b714: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B718u;
}
