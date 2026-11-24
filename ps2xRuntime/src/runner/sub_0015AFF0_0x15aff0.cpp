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

// Function: sub_0015AFF0
// Address: 0x15aff0 - 0x15b0a4
void sub_0015AFF0_0x15aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AFF0_0x15aff0");
#endif

    switch (ctx->pc) {
        case 0x15b00cu: goto label_15b00c;
        case 0x15b018u: goto label_15b018;
        case 0x15b024u: goto label_15b024;
        case 0x15b030u: goto label_15b030;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b048u: goto label_15b048;
        case 0x15b054u: goto label_15b054;
        case 0x15b060u: goto label_15b060;
        case 0x15b06cu: goto label_15b06c;
        case 0x15b078u: goto label_15b078;
        case 0x15b084u: goto label_15b084;
        case 0x15b08cu: goto label_15b08c;
        default: break;
    }

    ctx->pc = 0x15aff0u;

    // 0x15aff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15aff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15aff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15aff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15affc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15affcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b000: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15b000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b004: 0xc04b946  jal         func_12E518
    ctx->pc = 0x15B004u;
    SET_GPR_U32(ctx, 31, 0x15B00Cu);
    ctx->pc = 0x15B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B004u;
    // 0x15b008: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x15B004u, 0x15B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B00Cu;
label_15b00c:
    // 0x15b00c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x15b00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b010: 0xc04b946  jal         func_12E518
    ctx->pc = 0x15B010u;
    SET_GPR_U32(ctx, 31, 0x15B018u);
    ctx->pc = 0x15B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B010u;
    // 0x15b014: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x15B010u, 0x15B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B018u;
label_15b018:
    // 0x15b018: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x15b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b01c: 0xc04b946  jal         func_12E518
    ctx->pc = 0x15B01Cu;
    SET_GPR_U32(ctx, 31, 0x15B024u);
    ctx->pc = 0x15B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B01Cu;
    // 0x15b020: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x15B01Cu, 0x15B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B024u;
label_15b024:
    // 0x15b024: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b028: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x15B028u;
    SET_GPR_U32(ctx, 31, 0x15B030u);
    ctx->pc = 0x15B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B028u;
    // 0x15b02c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x15B028u, 0x15B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B030u;
label_15b030:
    // 0x15b030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b034: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x15B034u;
    SET_GPR_U32(ctx, 31, 0x15B03Cu);
    ctx->pc = 0x15B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B034u;
    // 0x15b038: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x15B034u, 0x15B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B03Cu;
label_15b03c:
    // 0x15b03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b040: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x15B040u;
    SET_GPR_U32(ctx, 31, 0x15B048u);
    ctx->pc = 0x15B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B040u;
    // 0x15b044: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x15B040u, 0x15B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B048u;
label_15b048:
    // 0x15b048: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x15b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b04c: 0xc04b946  jal         func_12E518
    ctx->pc = 0x15B04Cu;
    SET_GPR_U32(ctx, 31, 0x15B054u);
    ctx->pc = 0x15B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B04Cu;
    // 0x15b050: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x15B04Cu, 0x15B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B054u;
label_15b054:
    // 0x15b054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b058: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x15B058u;
    SET_GPR_U32(ctx, 31, 0x15B060u);
    ctx->pc = 0x15B05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B058u;
    // 0x15b05c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x15B058u, 0x15B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B060u;
label_15b060:
    // 0x15b060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b064: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x15B064u;
    SET_GPR_U32(ctx, 31, 0x15B06Cu);
    ctx->pc = 0x15B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B064u;
    // 0x15b068: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x15B064u, 0x15B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B06Cu;
label_15b06c:
    // 0x15b06c: 0xc64c000c  lwc1        $f12, 0xC($s2)
    ctx->pc = 0x15b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15b070: 0xc04b946  jal         func_12E518
    ctx->pc = 0x15B070u;
    SET_GPR_U32(ctx, 31, 0x15B078u);
    ctx->pc = 0x15B074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B070u;
    // 0x15b074: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E518u, 0x15B070u, 0x15B078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B078u;
label_15b078:
    // 0x15b078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b07c: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x15B07Cu;
    SET_GPR_U32(ctx, 31, 0x15B084u);
    ctx->pc = 0x15B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B07Cu;
    // 0x15b080: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x15B07Cu, 0x15B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B084u;
label_15b084:
    // 0x15b084: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x15B084u;
    SET_GPR_U32(ctx, 31, 0x15B08Cu);
    ctx->pc = 0x15B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B084u;
    // 0x15b088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x15B084u, 0x15B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B08Cu;
label_15b08c:
    // 0x15b08c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15b090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b09c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B09Cu;
        // 0x15b0a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B0A4u;
}
