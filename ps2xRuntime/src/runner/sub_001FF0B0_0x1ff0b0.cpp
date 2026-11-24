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

// Function: sub_001FF0B0
// Address: 0x1ff0b0 - 0x1ff11c
void sub_001FF0B0_0x1ff0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF0B0_0x1ff0b0");
#endif

    switch (ctx->pc) {
        case 0x1ff0b0u: goto label_1ff0b0;
        case 0x1ff0b4u: goto label_1ff0b4;
        case 0x1ff0b8u: goto label_1ff0b8;
        case 0x1ff0bcu: goto label_1ff0bc;
        case 0x1ff0c0u: goto label_1ff0c0;
        case 0x1ff0c4u: goto label_1ff0c4;
        case 0x1ff0c8u: goto label_1ff0c8;
        case 0x1ff0ccu: goto label_1ff0cc;
        case 0x1ff0d0u: goto label_1ff0d0;
        case 0x1ff0d4u: goto label_1ff0d4;
        case 0x1ff0d8u: goto label_1ff0d8;
        case 0x1ff0dcu: goto label_1ff0dc;
        case 0x1ff0e0u: goto label_1ff0e0;
        case 0x1ff0e4u: goto label_1ff0e4;
        case 0x1ff0e8u: goto label_1ff0e8;
        case 0x1ff0ecu: goto label_1ff0ec;
        case 0x1ff0f0u: goto label_1ff0f0;
        case 0x1ff0f4u: goto label_1ff0f4;
        case 0x1ff0f8u: goto label_1ff0f8;
        case 0x1ff0fcu: goto label_1ff0fc;
        case 0x1ff100u: goto label_1ff100;
        case 0x1ff104u: goto label_1ff104;
        case 0x1ff108u: goto label_1ff108;
        case 0x1ff10cu: goto label_1ff10c;
        case 0x1ff110u: goto label_1ff110;
        case 0x1ff114u: goto label_1ff114;
        case 0x1ff118u: goto label_1ff118;
        default: break;
    }

    ctx->pc = 0x1ff0b0u;

label_1ff0b0:
    // 0x1ff0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ff0b4:
    // 0x1ff0b4: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ff0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ff0b8:
    // 0x1ff0b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ff0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ff0bc:
    // 0x1ff0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ff0c0:
    // 0x1ff0c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ff0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1ff0c4:
    // 0x1ff0c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff0c8:
    // 0x1ff0c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ff0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ff0cc:
    // 0x1ff0cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff0d0:
    // 0x1ff0d0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ff0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1ff0d4:
    // 0x1ff0d4: 0x40f809  jalr        $v0
label_1ff0d8:
    if (ctx->pc == 0x1FF0D8u) {
        ctx->pc = 0x1FF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0D4u;
        // 0x1ff0d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0DCu;
        goto label_1ff0dc;
    }
    ctx->pc = 0x1FF0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF0DCu);
        ctx->pc = 0x1FF0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0D4u;
        // 0x1ff0d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0D4u, 0x1FF0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF0DCu;
label_1ff0dc:
    // 0x1ff0dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ff0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ff0e0:
    // 0x1ff0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ff0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ff0e4:
    // 0x1ff0e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ff0e8:
    // 0x1ff0e8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1ff0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1ff0ec:
    // 0x1ff0ec: 0x40f809  jalr        $v0
label_1ff0f0:
    if (ctx->pc == 0x1FF0F0u) {
        ctx->pc = 0x1FF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0ECu;
        // 0x1ff0f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF0F4u;
        goto label_1ff0f4;
    }
    ctx->pc = 0x1FF0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FF0F4u);
        ctx->pc = 0x1FF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0ECu;
        // 0x1ff0f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF0ECu, 0x1FF0F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FF0F4u;
label_1ff0f4:
    // 0x1ff0f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ff0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ff0f8:
    // 0x1ff0f8: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x1ff0f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1ff0fc:
    // 0x1ff0fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ff100:
    if (ctx->pc == 0x1FF100u) {
        ctx->pc = 0x1FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0FCu;
        // 0x1ff100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF104u;
        goto label_1ff104;
    }
    ctx->pc = 0x1FF0FCu;
    {
        const bool branch_taken_0x1ff0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF0FCu;
        // 0x1ff100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0fc) {
            ctx->pc = 0x1FF10Cu;
            goto label_1ff10c;
        }
    }
    ctx->pc = 0x1FF104u;
label_1ff104:
    // 0x1ff104: 0xc07f656  jal         func_1FD958
label_1ff108:
    if (ctx->pc == 0x1FF108u) {
        ctx->pc = 0x1FF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF104u;
        // 0x1ff108: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF10Cu;
        goto label_1ff10c;
    }
    ctx->pc = 0x1FF104u;
    SET_GPR_U32(ctx, 31, 0x1FF10Cu);
    ctx->pc = 0x1FF108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF104u;
    // 0x1ff108: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1FF104u, 0x1FF10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF10Cu;
label_1ff10c:
    // 0x1ff10c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ff10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff110:
    // 0x1ff110: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ff110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ff114:
    // 0x1ff114: 0x3e00008  jr          $ra
label_1ff118:
    if (ctx->pc == 0x1FF118u) {
        ctx->pc = 0x1FF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF114u;
        // 0x1ff118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FF11Cu;
        goto label_fallthrough_0x1ff114;
    }
    ctx->pc = 0x1FF114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF114u;
        // 0x1ff118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ff114:
    ctx->pc = 0x1FF11Cu;
}
