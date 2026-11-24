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

// Function: sub_003BACD0
// Address: 0x3bacd0 - 0x3badd8
void sub_003BACD0_0x3bacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BACD0_0x3bacd0");
#endif

    switch (ctx->pc) {
        case 0x3bad00u: goto label_3bad00;
        default: break;
    }

    ctx->pc = 0x3bacd0u;

    // 0x3bacd0: 0x90820208  lbu         $v0, 0x208($a0)
    ctx->pc = 0x3bacd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x3bacd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3bacd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3bacd8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x3bacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3bacdc: 0x8c4901c4  lw          $t1, 0x1C4($v0)
    ctx->pc = 0x3bacdcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x3bace0: 0x11200039  beqz        $t1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3BACE0u;
    {
        const bool branch_taken_0x3bace0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bace0) {
            ctx->pc = 0x3BADC8u;
            goto label_3badc8;
        }
    }
    ctx->pc = 0x3BACE8u;
    // 0x3bace8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3bace8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3bacec: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x3bacecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3bacf0: 0x3c0a008c  lui         $t2, 0x8C
    ctx->pc = 0x3bacf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)140 << 16));
    // 0x3bacf4: 0x3c0b008c  lui         $t3, 0x8C
    ctx->pc = 0x3bacf4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)140 << 16));
    // 0x3bacf8: 0x254a31a0  addiu       $t2, $t2, 0x31A0
    ctx->pc = 0x3bacf8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12704));
    // 0x3bacfc: 0x256b0950  addiu       $t3, $t3, 0x950
    ctx->pc = 0x3bacfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2384));
label_3bad00:
    // 0x3bad00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x3bad00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3bad04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3bad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3bad08: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3BAD08u;
    {
        const bool branch_taken_0x3bad08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bad08) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD10u;
    // 0x3bad10: 0x91260002  lbu         $a2, 0x2($t1)
    ctx->pc = 0x3bad10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x3bad14: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3bad14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3bad18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3bad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3bad1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bad20: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x3bad20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3bad24: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x3bad24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x3bad28: 0x14a20023  bne         $a1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3BAD28u;
    {
        const bool branch_taken_0x3bad28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bad28) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD30u;
    // 0x3bad30: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x3bad30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3bad34: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BAD34u;
    {
        const bool branch_taken_0x3bad34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bad34) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD3Cu;
    // 0x3bad3c: 0x91260003  lbu         $a2, 0x3($t1)
    ctx->pc = 0x3bad3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x3bad40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3bad40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3bad44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3bad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3bad48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bad48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bad4c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x3bad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3bad50: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x3bad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3bad54: 0x8c4629c0  lw          $a2, 0x29C0($v0)
    ctx->pc = 0x3bad54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10688)));
    // 0x3bad58: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x3bad58u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3bad5c: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BAD5Cu;
    {
        const bool branch_taken_0x3bad5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bad5c) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD64u;
    // 0x3bad64: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BAD64u;
    {
        const bool branch_taken_0x3bad64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bad64) {
            ctx->pc = 0x3BAD90u;
            goto label_3bad90;
        }
    }
    ctx->pc = 0x3BAD6Cu;
    // 0x3bad6c: 0x8c4c06ac  lw          $t4, 0x6AC($v0)
    ctx->pc = 0x3bad6cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x3bad70: 0x31860002  andi        $a2, $t4, 0x2
    ctx->pc = 0x3bad70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2);
    // 0x3bad74: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BAD74u;
    {
        const bool branch_taken_0x3bad74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAD74u;
        // 0x3bad78: 0x31860004  andi        $a2, $t4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bad74) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD7Cu;
    // 0x3bad7c: 0x14c0000e  bnez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3BAD7Cu;
    {
        const bool branch_taken_0x3bad7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bad7c) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BAD84u;
    // 0x3bad84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3BAD84u;
    {
        const bool branch_taken_0x3bad84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bad84) {
            ctx->pc = 0x3BADD0u;
            goto label_3badd0;
        }
    }
    ctx->pc = 0x3BAD8Cu;
    // 0x3bad8c: 0x0  nop
    ctx->pc = 0x3bad8cu;
    // NOP
label_3bad90:
    // 0x3bad90: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3BAD90u;
    {
        const bool branch_taken_0x3bad90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bad90) {
            ctx->pc = 0x3BADB0u;
            goto label_3badb0;
        }
    }
    ctx->pc = 0x3BAD98u;
    // 0x3bad98: 0x8c4606ac  lw          $a2, 0x6AC($v0)
    ctx->pc = 0x3bad98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1708)));
    // 0x3bad9c: 0x30c60004  andi        $a2, $a2, 0x4
    ctx->pc = 0x3bad9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x3bada0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BADA0u;
    {
        const bool branch_taken_0x3bada0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bada0) {
            ctx->pc = 0x3BADB8u;
            goto label_3badb8;
        }
    }
    ctx->pc = 0x3BADA8u;
    // 0x3bada8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3BADA8u;
    {
        const bool branch_taken_0x3bada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bada8) {
            ctx->pc = 0x3BADD0u;
            goto label_3badd0;
        }
    }
    ctx->pc = 0x3BADB0u;
label_3badb0:
    // 0x3badb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BADB0u;
    {
        const bool branch_taken_0x3badb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3badb0) {
            ctx->pc = 0x3BADD0u;
            goto label_3badd0;
        }
    }
    ctx->pc = 0x3BADB8u;
label_3badb8:
    // 0x3badb8: 0x691021  addu        $v0, $v1, $t1
    ctx->pc = 0x3badb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3badbc: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x3badbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3badc0: 0x1520ffcf  bnez        $t1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x3BADC0u;
    {
        const bool branch_taken_0x3badc0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3badc0) {
            ctx->pc = 0x3BAD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bad00;
        }
    }
    ctx->pc = 0x3BADC8u;
label_3badc8:
    // 0x3badc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3badc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3badcc: 0x0  nop
    ctx->pc = 0x3badccu;
    // NOP
label_3badd0:
    // 0x3badd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3BADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BADD8u;
}
