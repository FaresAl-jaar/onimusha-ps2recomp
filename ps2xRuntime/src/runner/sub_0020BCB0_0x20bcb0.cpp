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

// Function: sub_0020BCB0
// Address: 0x20bcb0 - 0x20bd38
void sub_0020BCB0_0x20bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BCB0_0x20bcb0");
#endif

    switch (ctx->pc) {
        case 0x20bcc8u: goto label_20bcc8;
        case 0x20bcdcu: goto label_20bcdc;
        case 0x20bcf4u: goto label_20bcf4;
        case 0x20bd0cu: goto label_20bd0c;
        default: break;
    }

    ctx->pc = 0x20bcb0u;

    // 0x20bcb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bcb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20bcb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bcb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bcbc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20bcc0: 0xc087dfe  jal         func_21F7F8
    ctx->pc = 0x20BCC0u;
    SET_GPR_U32(ctx, 31, 0x20BCC8u);
    ctx->pc = 0x20BCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BCC0u;
    // 0x20bcc4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F7F8u, 0x20BCC0u, 0x20BCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCC8u;
label_20bcc8:
    // 0x20bcc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20bcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20bccc: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x20BCCCu;
    {
        const bool branch_taken_0x20bccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x20BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCCCu;
        // 0x20bcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bccc) {
            ctx->pc = 0x20BD28u;
            goto label_20bd28;
        }
    }
    ctx->pc = 0x20BCD4u;
    // 0x20bcd4: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x20BCD4u;
    SET_GPR_U32(ctx, 31, 0x20BCDCu);
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x20BCD4u, 0x20BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCDCu;
label_20bcdc:
    // 0x20bcdc: 0x82030072  lb          $v1, 0x72($s0)
    ctx->pc = 0x20bcdcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x20bce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20bce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bce4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20BCE4u;
    {
        const bool branch_taken_0x20bce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BCE4u;
        // 0x20bce8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bce4) {
            ctx->pc = 0x20BCF4u;
            goto label_20bcf4;
        }
    }
    ctx->pc = 0x20BCECu;
    // 0x20bcec: 0xc081970  jal         func_2065C0
    ctx->pc = 0x20BCECu;
    SET_GPR_U32(ctx, 31, 0x20BCF4u);
    ctx->pc = 0x2065C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065C0u, 0x20BCECu, 0x20BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BCF4u;
label_20bcf4:
    // 0x20bcf4: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x20bcf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20bcf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bcfc: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20BCFCu;
    {
        const bool branch_taken_0x20bcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20bcfc) {
            ctx->pc = 0x20BD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BCFCu;
            // 0x20bd00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BD2Cu;
            goto label_20bd2c;
        }
    }
    ctx->pc = 0x20BD04u;
    // 0x20bd04: 0xc08412c  jal         func_2104B0
    ctx->pc = 0x20BD04u;
    SET_GPR_U32(ctx, 31, 0x20BD0Cu);
    ctx->pc = 0x20BD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD04u;
    // 0x20bd08: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2104B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2104B0u, 0x20BD04u, 0x20BD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD0Cu;
label_20bd0c:
    // 0x20bd0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x20bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x20bd10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BD10u;
    {
        const bool branch_taken_0x20bd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD10u;
        // 0x20bd14: 0x24848620  addiu       $a0, $a0, -0x79E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd10) {
            ctx->pc = 0x20BD28u;
            goto label_20bd28;
        }
    }
    ctx->pc = 0x20BD18u;
    // 0x20bd18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bd18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bd1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bd20: 0x8082e3e  j           func_20B8F8
    ctx->pc = 0x20BD20u;
    ctx->pc = 0x20BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD20u;
    // 0x20bd24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B8F8u;
    sub_0020B8F8_0x20b8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x20BD28u;
label_20bd28:
    // 0x20bd28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20bd28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bd2c:
    // 0x20bd2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x20BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD30u;
        // 0x20bd34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BD38u;
}
