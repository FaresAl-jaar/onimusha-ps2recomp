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

// Function: sub_0038BFC0
// Address: 0x38bfc0 - 0x38c028
void sub_0038BFC0_0x38bfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038BFC0_0x38bfc0");
#endif

    ctx->pc = 0x38bfc0u;

    // 0x38bfc0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x38bfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x38bfc4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x38bfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38bfc8: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x38bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x38bfcc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x38bfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x38bfd0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x38BFD0u;
    {
        const bool branch_taken_0x38bfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38BFD0u;
        // 0x38bfd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38bfd0) {
            ctx->pc = 0x38C018u;
            goto label_38c018;
        }
    }
    ctx->pc = 0x38BFD8u;
    // 0x38bfd8: 0x8f848b90  lw          $a0, -0x7470($gp)
    ctx->pc = 0x38bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x38bfdc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x38BFDCu;
    {
        const bool branch_taken_0x38bfdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38bfdc) {
            ctx->pc = 0x38C018u;
            goto label_38c018;
        }
    }
    ctx->pc = 0x38BFE4u;
    // 0x38bfe4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x38bfe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38bfe8: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x38bfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x38bfec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38bfecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38bff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38BFF0u;
    {
        const bool branch_taken_0x38bff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38bff0) {
            ctx->pc = 0x38C000u;
            goto label_38c000;
        }
    }
    ctx->pc = 0x38BFF8u;
    // 0x38bff8: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x38bff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x38bffc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x38bffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_38c000:
    // 0x38c000: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38C000u;
    {
        const bool branch_taken_0x38c000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c000) {
            ctx->pc = 0x38C018u;
            goto label_38c018;
        }
    }
    ctx->pc = 0x38C008u;
    // 0x38c008: 0x908229d0  lbu         $v0, 0x29D0($a0)
    ctx->pc = 0x38c008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10704)));
    // 0x38c00c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x38C00Cu;
    {
        const bool branch_taken_0x38c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38c00c) {
            ctx->pc = 0x38C018u;
            goto label_38c018;
        }
    }
    ctx->pc = 0x38C014u;
    // 0x38c014: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38c014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38c018:
    // 0x38c018: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x38c018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x38c01c: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x38c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
    // 0x38c020: 0x80bd35c  j           func_2F4D70
    ctx->pc = 0x38C020u;
    ctx->pc = 0x38C024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C020u;
    // 0x38c024: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    sub_002F4D70_0x2f4d70(rdram, ctx, runtime); return;
    ctx->pc = 0x38C028u;
}
