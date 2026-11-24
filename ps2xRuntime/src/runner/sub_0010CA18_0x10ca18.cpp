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

// Function: sub_0010CA18
// Address: 0x10ca18 - 0x10caa8
void sub_0010CA18_0x10ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CA18_0x10ca18");
#endif

    switch (ctx->pc) {
        case 0x10ca58u: goto label_10ca58;
        case 0x10ca84u: goto label_10ca84;
        default: break;
    }

    ctx->pc = 0x10ca18u;

    // 0x10ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ca1c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10ca1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ca24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ca28: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x10CA28u;
    {
        const bool branch_taken_0x10ca28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA28u;
        // 0x10ca2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca28) {
            ctx->pc = 0x10CA84u;
            goto label_10ca84;
        }
    }
    ctx->pc = 0x10CA30u;
    // 0x10ca30: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x10ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x10ca34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10ca34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ca38: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10CA38u;
    {
        const bool branch_taken_0x10ca38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA38u;
        // 0x10ca3c: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca38) {
            ctx->pc = 0x10CA60u;
            goto label_10ca60;
        }
    }
    ctx->pc = 0x10CA40u;
    // 0x10ca40: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CA40u;
    {
        const bool branch_taken_0x10ca40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ca40) {
            ctx->pc = 0x10CA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA40u;
            // 0x10ca44: 0x8e0501c8  lw          $a1, 0x1C8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA4Cu;
            goto label_10ca4c;
        }
    }
    ctx->pc = 0x10CA48u;
    // 0x10ca48: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x10ca48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_10ca4c:
    // 0x10ca4c: 0x24e6ffff  addiu       $a2, $a3, -0x1
    ctx->pc = 0x10ca4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10ca50: 0xc04309e  jal         func_10C278
    ctx->pc = 0x10CA50u;
    SET_GPR_U32(ctx, 31, 0x10CA58u);
    ctx->pc = 0x10CA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA50u;
    // 0x10ca54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C278u, 0x10CA50u, 0x10CA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA58u;
label_10ca58:
    // 0x10ca58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10CA58u;
    {
        const bool branch_taken_0x10ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA58u;
        // 0x10ca5c: 0x8e030108  lw          $v1, 0x108($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca58) {
            ctx->pc = 0x10CA88u;
            goto label_10ca88;
        }
    }
    ctx->pc = 0x10CA60u;
label_10ca60:
    // 0x10ca60: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CA60u;
    {
        const bool branch_taken_0x10ca60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10ca60) {
            ctx->pc = 0x10CA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA60u;
            // 0x10ca64: 0x8e0501d8  lw          $a1, 0x1D8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CA74u;
            goto label_10ca74;
        }
    }
    ctx->pc = 0x10CA68u;
    // 0x10ca68: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x10ca68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x10ca6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10CA6Cu;
    {
        const bool branch_taken_0x10ca6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA6Cu;
        // 0x10ca70: 0x8e0601f4  lw          $a2, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca6c) {
            ctx->pc = 0x10CA78u;
            goto label_10ca78;
        }
    }
    ctx->pc = 0x10CA74u;
label_10ca74:
    // 0x10ca74: 0x8e0601e8  lw          $a2, 0x1E8($s0)
    ctx->pc = 0x10ca74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_10ca78:
    // 0x10ca78: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10ca78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10ca7c: 0xc04314e  jal         func_10C538
    ctx->pc = 0x10CA7Cu;
    SET_GPR_U32(ctx, 31, 0x10CA84u);
    ctx->pc = 0x10CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA7Cu;
    // 0x10ca80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C538u, 0x10CA7Cu, 0x10CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA84u;
label_10ca84:
    // 0x10ca84: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x10ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_10ca88:
    // 0x10ca88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ca8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CA8Cu;
    {
        const bool branch_taken_0x10ca8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA8Cu;
        // 0x10ca90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca8c) {
            ctx->pc = 0x10CA9Cu;
            goto label_10ca9c;
        }
    }
    ctx->pc = 0x10CA94u;
    // 0x10ca94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ca98: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x10ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
label_10ca9c:
    // 0x10ca9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ca9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10caa0: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAA0u;
        // 0x10caa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAA8u;
}
