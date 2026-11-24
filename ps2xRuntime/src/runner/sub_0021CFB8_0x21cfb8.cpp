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

// Function: sub_0021CFB8
// Address: 0x21cfb8 - 0x21d080
void sub_0021CFB8_0x21cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CFB8_0x21cfb8");
#endif

    switch (ctx->pc) {
        case 0x21cff8u: goto label_21cff8;
        case 0x21d008u: goto label_21d008;
        case 0x21d018u: goto label_21d018;
        default: break;
    }

    ctx->pc = 0x21cfb8u;

    // 0x21cfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21cfbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cfc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21cfc8: 0x26030a0c  addiu       $v1, $s0, 0xA0C
    ctx->pc = 0x21cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2572));
    // 0x21cfcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21cfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21cfd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21cfd4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x21cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21cfd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21CFD8u;
    {
        const bool branch_taken_0x21cfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFD8u;
        // 0x21cfdc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfd8) {
            ctx->pc = 0x21CFF0u;
            goto label_21cff0;
        }
    }
    ctx->pc = 0x21CFE0u;
    // 0x21cfe0: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x21cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21cfe4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x21CFE4u;
    {
        const bool branch_taken_0x21cfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CFE4u;
        // 0x21cfe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cfe4) {
            ctx->pc = 0x21D068u;
            goto label_21d068;
        }
    }
    ctx->pc = 0x21CFECu;
    // 0x21cfec: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x21cfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_21cff0:
    // 0x21cff0: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21CFF0u;
    SET_GPR_U32(ctx, 31, 0x21CFF8u);
    ctx->pc = 0x21CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CFF0u;
    // 0x21cff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21CFF0u, 0x21CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CFF8u;
label_21cff8:
    // 0x21cff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cffc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x21cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x21d000: 0xc0888fc  jal         func_2223F0
    ctx->pc = 0x21D000u;
    SET_GPR_U32(ctx, 31, 0x21D008u);
    ctx->pc = 0x21D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D000u;
    // 0x21d004: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223F0u, 0x21D000u, 0x21D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D008u;
label_21d008:
    // 0x21d008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d00c: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x21d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21d010: 0xc087ed0  jal         func_21FB40
    ctx->pc = 0x21D010u;
    SET_GPR_U32(ctx, 31, 0x21D018u);
    ctx->pc = 0x21D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D010u;
    // 0x21d014: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FB40u, 0x21D010u, 0x21D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D018u;
label_21d018:
    // 0x21d018: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x21d018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d020: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D020u;
    {
        const bool branch_taken_0x21d020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D020u;
        // 0x21d024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d020) {
            ctx->pc = 0x21D050u;
            goto label_21d050;
        }
    }
    ctx->pc = 0x21D028u;
    // 0x21d028: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21D028u;
    {
        const bool branch_taken_0x21d028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d028) {
            ctx->pc = 0x21D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D028u;
            // 0x21d02c: 0x2322024  and         $a0, $s1, $s2 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D064u;
            goto label_21d064;
        }
    }
    ctx->pc = 0x21D030u;
    // 0x21d030: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d034: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D034u;
    {
        const bool branch_taken_0x21d034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D034u;
        // 0x21d038: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d034) {
            ctx->pc = 0x21D058u;
            goto label_21d058;
        }
    }
    ctx->pc = 0x21D03Cu;
    // 0x21d03c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D03Cu;
    {
        const bool branch_taken_0x21d03c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D03Cu;
        // 0x21d040: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d03c) {
            ctx->pc = 0x21D060u;
            goto label_21d060;
        }
    }
    ctx->pc = 0x21D044u;
    // 0x21d044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21D044u;
    {
        const bool branch_taken_0x21d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D044u;
        // 0x21d048: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d044) {
            ctx->pc = 0x21D06Cu;
            goto label_21d06c;
        }
    }
    ctx->pc = 0x21D04Cu;
    // 0x21d04c: 0x0  nop
    ctx->pc = 0x21d04cu;
    // NOP
label_21d050:
    // 0x21d050: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D050u;
    {
        const bool branch_taken_0x21d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D050u;
        // 0x21d054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d050) {
            ctx->pc = 0x21D064u;
            goto label_21d064;
        }
    }
    ctx->pc = 0x21D058u;
label_21d058:
    // 0x21d058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D058u;
    {
        const bool branch_taken_0x21d058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D058u;
        // 0x21d05c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d058) {
            ctx->pc = 0x21D064u;
            goto label_21d064;
        }
    }
    ctx->pc = 0x21D060u;
label_21d060:
    // 0x21d060: 0x2322025  or          $a0, $s1, $s2
    ctx->pc = 0x21d060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_21d064:
    // 0x21d064: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x21d064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21d068:
    // 0x21d068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d06c:
    // 0x21d06c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21d070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d074: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21d074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21d078: 0x3e00008  jr          $ra
    ctx->pc = 0x21D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D078u;
        // 0x21d07c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D080u;
}
