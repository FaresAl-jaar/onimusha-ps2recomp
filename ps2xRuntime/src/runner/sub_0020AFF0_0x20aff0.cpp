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

// Function: sub_0020AFF0
// Address: 0x20aff0 - 0x20b050
void sub_0020AFF0_0x20aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AFF0_0x20aff0");
#endif

    switch (ctx->pc) {
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        default: break;
    }

    ctx->pc = 0x20aff0u;

label_20aff0:
    // 0x20aff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20aff4:
    // 0x20aff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20aff8:
    // 0x20aff8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20affc:
    // 0x20affc: 0xc082d4c  jal         func_20B530
label_20b000:
    if (ctx->pc == 0x20B000u) {
        ctx->pc = 0x20B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFFCu;
        // 0x20b000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B004u;
        goto label_20b004;
    }
    ctx->pc = 0x20AFFCu;
    SET_GPR_U32(ctx, 31, 0x20B004u);
    ctx->pc = 0x20B000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AFFCu;
    // 0x20b000: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B530u, 0x20AFFCu, 0x20B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B004u;
label_20b004:
    // 0x20b004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20b008:
    // 0x20b008: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_20b00c:
    if (ctx->pc == 0x20B00Cu) {
        ctx->pc = 0x20B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B008u;
        // 0x20b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B010u;
        goto label_20b010;
    }
    ctx->pc = 0x20B008u;
    {
        const bool branch_taken_0x20b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B008u;
        // 0x20b00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b008) {
            ctx->pc = 0x20B018u;
            goto label_20b018;
        }
    }
    ctx->pc = 0x20B010u;
label_20b010:
    // 0x20b010: 0x1000000b  b           . + 4 + (0xB << 2)
label_20b014:
    if (ctx->pc == 0x20B014u) {
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B010u;
        // 0x20b014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B018u;
        goto label_20b018;
    }
    ctx->pc = 0x20B010u;
    {
        const bool branch_taken_0x20b010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B010u;
        // 0x20b014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b010) {
            ctx->pc = 0x20B040u;
            goto label_20b040;
        }
    }
    ctx->pc = 0x20B018u;
label_20b018:
    // 0x20b018: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_20b01c:
    // 0x20b01c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20b020:
    if (ctx->pc == 0x20B020u) {
        ctx->pc = 0x20B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B01Cu;
        // 0x20b020: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B024u;
        goto label_20b024;
    }
    ctx->pc = 0x20B01Cu;
    {
        const bool branch_taken_0x20b01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B01Cu;
        // 0x20b020: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b01c) {
            ctx->pc = 0x20B03Cu;
            goto label_20b03c;
        }
    }
    ctx->pc = 0x20B024u;
label_20b024:
    // 0x20b024: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_20b028:
    // 0x20b028: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20b02c:
    if (ctx->pc == 0x20B02Cu) {
        ctx->pc = 0x20B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B028u;
        // 0x20b02c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B030u;
        goto label_20b030;
    }
    ctx->pc = 0x20B028u;
    {
        const bool branch_taken_0x20b028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b028) {
            ctx->pc = 0x20B02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B028u;
            // 0x20b02c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B040u;
            goto label_20b040;
        }
    }
    ctx->pc = 0x20B030u;
label_20b030:
    // 0x20b030: 0x40f809  jalr        $v0
label_20b034:
    if (ctx->pc == 0x20B034u) {
        ctx->pc = 0x20B038u;
        goto label_20b038;
    }
    ctx->pc = 0x20B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20B038u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B030u, 0x20B038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20B038u;
label_20b038:
    // 0x20b038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20b038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20b03c:
    // 0x20b03c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20b03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20b040:
    // 0x20b040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20b040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20b044:
    // 0x20b044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20b044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20b048:
    // 0x20b048: 0x3e00008  jr          $ra
label_20b04c:
    if (ctx->pc == 0x20B04Cu) {
        ctx->pc = 0x20B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B048u;
        // 0x20b04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B050u;
        goto label_fallthrough_0x20b048;
    }
    ctx->pc = 0x20B048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B048u;
        // 0x20b04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20b048:
    ctx->pc = 0x20B050u;
}
