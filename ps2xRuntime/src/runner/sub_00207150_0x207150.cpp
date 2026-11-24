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

// Function: sub_00207150
// Address: 0x207150 - 0x2071c4
void sub_00207150_0x207150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207150_0x207150");
#endif

    switch (ctx->pc) {
        case 0x207164u: goto label_207164;
        case 0x20717cu: goto label_20717c;
        case 0x207190u: goto label_207190;
        case 0x2071a8u: goto label_2071a8;
        default: break;
    }

    ctx->pc = 0x207150u;

    // 0x207150: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x207150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x207154: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x207154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x207158: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x207158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x20715c: 0xc081d84  jal         func_207610
    ctx->pc = 0x20715Cu;
    SET_GPR_U32(ctx, 31, 0x207164u);
    ctx->pc = 0x207160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20715Cu;
    // 0x207160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207610u, 0x20715Cu, 0x207164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207164u;
label_207164:
    // 0x207164: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x207168: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x207168u;
    {
        const bool branch_taken_0x207168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207168u;
        // 0x20716c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207168) {
            ctx->pc = 0x207188u;
            goto label_207188;
        }
    }
    ctx->pc = 0x207170u;
    // 0x207170: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x207170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x207174: 0xc082e3e  jal         func_20B8F8
    ctx->pc = 0x207174u;
    SET_GPR_U32(ctx, 31, 0x20717Cu);
    ctx->pc = 0x207178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207174u;
    // 0x207178: 0x24847618  addiu       $a0, $a0, 0x7618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B8F8u, 0x207174u, 0x20717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20717Cu;
label_20717c:
    // 0x20717c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x20717Cu;
    {
        const bool branch_taken_0x20717c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20717Cu;
        // 0x207180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20717c) {
            ctx->pc = 0x2071B4u;
            goto label_2071b4;
        }
    }
    ctx->pc = 0x207184u;
    // 0x207184: 0x0  nop
    ctx->pc = 0x207184u;
    // NOP
label_207188:
    // 0x207188: 0xc081c12  jal         func_207048
    ctx->pc = 0x207188u;
    SET_GPR_U32(ctx, 31, 0x207190u);
    ctx->pc = 0x207048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207048u, 0x207188u, 0x207190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207190u;
label_207190:
    // 0x207190: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x207190u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207194: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x207194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207198: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x207198u;
    {
        const bool branch_taken_0x207198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207198u;
        // 0x20719c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207198) {
            ctx->pc = 0x2071B4u;
            goto label_2071b4;
        }
    }
    ctx->pc = 0x2071A0u;
    // 0x2071a0: 0xc087f0a  jal         func_21FC28
    ctx->pc = 0x2071A0u;
    SET_GPR_U32(ctx, 31, 0x2071A8u);
    ctx->pc = 0x21FC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FC28u, 0x2071A0u, 0x2071A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2071A8u;
label_2071a8:
    // 0x2071a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2071a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2071ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2071acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2071b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2071b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2071b4:
    // 0x2071b4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x2071b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2071b8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2071b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2071bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2071BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2071C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2071BCu;
        // 0x2071c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2071BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2071C4u;
}
