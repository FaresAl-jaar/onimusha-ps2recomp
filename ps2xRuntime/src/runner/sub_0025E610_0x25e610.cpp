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

// Function: sub_0025E610
// Address: 0x25e610 - 0x25e698
void sub_0025E610_0x25e610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E610_0x25e610");
#endif

    ctx->pc = 0x25e610u;

    // 0x25e610: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x25e610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x25e614: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E614u;
    {
        const bool branch_taken_0x25e614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e614) {
            ctx->pc = 0x25E628u;
            goto label_25e628;
        }
    }
    ctx->pc = 0x25E61Cu;
    // 0x25e61c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x25e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x25e620: 0xa0830014  sb          $v1, 0x14($a0)
    ctx->pc = 0x25e620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 3));
    // 0x25e624: 0x0  nop
    ctx->pc = 0x25e624u;
    // NOP
label_25e628:
    // 0x25e628: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x25e628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x25e62c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x25E62Cu;
    {
        const bool branch_taken_0x25e62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E62Cu;
        // 0x25e630: 0x3c01008f  lui         $at, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e62c) {
            ctx->pc = 0x25E690u;
            goto label_25e690;
        }
    }
    ctx->pc = 0x25E634u;
    // 0x25e634: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x25e634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
    // 0x25e638: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25e638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25e63c: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x25e63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x25e640: 0x8c23ea24  lw          $v1, -0x15DC($at)
    ctx->pc = 0x25e640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x25e644: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x25e644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x25e648: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x25e648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x25e64c: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x25e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x25e650: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x25e650u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x25e654: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x25e654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x25e658: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x25e658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x25e65c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25E65Cu;
    {
        const bool branch_taken_0x25e65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e65c) {
            ctx->pc = 0x25E690u;
            goto label_25e690;
        }
    }
    ctx->pc = 0x25E664u;
    // 0x25e664: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x25e664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25e668: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x25e668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x25e66c: 0x346560f0  ori         $a1, $v1, 0x60F0
    ctx->pc = 0x25e66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24816);
    // 0x25e670: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x25e670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x25e674: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x25e674u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x25e678: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x25e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25e67c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25e67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x25e680: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x25e680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x25e684: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25e684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25e688: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x25e688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x25e68c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x25e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_25e690:
    // 0x25e690: 0x3e00008  jr          $ra
    ctx->pc = 0x25E690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E698u;
}
