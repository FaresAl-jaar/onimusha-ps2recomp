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

// Function: sub_00150120
// Address: 0x150120 - 0x1501c4
void sub_00150120_0x150120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150120_0x150120");
#endif

    switch (ctx->pc) {
        case 0x15014cu: goto label_15014c;
        case 0x150180u: goto label_150180;
        case 0x150198u: goto label_150198;
        default: break;
    }

    ctx->pc = 0x150120u;

    // 0x150120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150124: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x150124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x150128: 0x24020ff3  addiu       $v0, $zero, 0xFF3
    ctx->pc = 0x150128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4083));
    // 0x15012c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15012Cu;
    {
        const bool branch_taken_0x15012c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15012Cu;
        // 0x150130: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15012c) {
            ctx->pc = 0x150138u;
            goto label_150138;
        }
    }
    ctx->pc = 0x150134u;
    // 0x150134: 0x64040ed0  daddiu      $a0, $zero, 0xED0
    ctx->pc = 0x150134u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3792);
label_150138:
    // 0x150138: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x150138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15013c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150140: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x150140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x150144: 0xc053fdc  jal         func_14FF70
    ctx->pc = 0x150144u;
    SET_GPR_U32(ctx, 31, 0x15014Cu);
    ctx->pc = 0x150148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150144u;
    // 0x150148: 0x24846ac0  addiu       $a0, $a0, 0x6AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FF70u, 0x150144u, 0x15014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15014Cu;
label_15014c:
    // 0x15014c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15014Cu;
    {
        const bool branch_taken_0x15014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15014c) {
            ctx->pc = 0x150160u;
            goto label_150160;
        }
    }
    ctx->pc = 0x150154u;
    // 0x150154: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x150154u;
    {
        const bool branch_taken_0x150154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150154u;
        // 0x150158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150154) {
            ctx->pc = 0x1501B8u;
            goto label_1501b8;
        }
    }
    ctx->pc = 0x15015Cu;
    // 0x15015c: 0x0  nop
    ctx->pc = 0x15015cu;
    // NOP
label_150160:
    // 0x150160: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x150160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x150164: 0x8c22cef4  lw          $v0, -0x310C($at)
    ctx->pc = 0x150164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEF4u));
    // 0x150168: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x150168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x15016c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x15016cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x150170: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x150170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x150174: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x150174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x150178: 0xc0957a0  jal         func_255E80
    ctx->pc = 0x150178u;
    SET_GPR_U32(ctx, 31, 0x150180u);
    ctx->pc = 0x15017Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150178u;
    // 0x15017c: 0xac22cef4  sw          $v0, -0x310C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255E80u, 0x150178u, 0x150180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150180u;
label_150180:
    // 0x150180: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x150180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x150184: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x150184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150188: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x150188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x15018c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15018cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150190: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x150190u;
    SET_GPR_U32(ctx, 31, 0x150198u);
    ctx->pc = 0x150194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150190u;
    // 0x150194: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4D70u, 0x150190u, 0x150198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150198u;
label_150198:
    // 0x150198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x150198u;
    {
        const bool branch_taken_0x150198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150198) {
            ctx->pc = 0x1501B0u;
            goto label_1501b0;
        }
    }
    ctx->pc = 0x1501A0u;
    // 0x1501a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1501a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1501a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1501A4u;
    {
        const bool branch_taken_0x1501a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1501A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501A4u;
        // 0x1501a8: 0xa382886c  sb          $v0, -0x7794($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294936684), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1501a4) {
            ctx->pc = 0x1501B8u;
            goto label_1501b8;
        }
    }
    ctx->pc = 0x1501ACu;
    // 0x1501ac: 0x0  nop
    ctx->pc = 0x1501acu;
    // NOP
label_1501b0:
    // 0x1501b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1501b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1501b4: 0x0  nop
    ctx->pc = 0x1501b4u;
    // NOP
label_1501b8:
    // 0x1501b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1501b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1501bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1501BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1501C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1501BCu;
        // 0x1501c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1501BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1501C4u;
}
