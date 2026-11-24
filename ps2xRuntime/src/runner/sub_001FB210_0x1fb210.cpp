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

// Function: sub_001FB210
// Address: 0x1fb210 - 0x1fb2d8
void sub_001FB210_0x1fb210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB210_0x1fb210");
#endif

    switch (ctx->pc) {
        case 0x1fb220u: goto label_1fb220;
        case 0x1fb248u: goto label_1fb248;
        default: break;
    }

    ctx->pc = 0x1fb210u;

    // 0x1fb210: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1fb214: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x1fb214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1fb218: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FB218u;
    {
        const bool branch_taken_0x1fb218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB218u;
        // 0x1fb21c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb218) {
            ctx->pc = 0x1FB23Cu;
            goto label_1fb23c;
        }
    }
    ctx->pc = 0x1FB220u;
label_1fb220:
    // 0x1fb220: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb224: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb228: 0x0  nop
    ctx->pc = 0x1fb228u;
    // NOP
    // 0x1fb22c: 0x0  nop
    ctx->pc = 0x1fb22cu;
    // NOP
    // 0x1fb230: 0x0  nop
    ctx->pc = 0x1fb230u;
    // NOP
    // 0x1fb234: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB234u;
    {
        const bool branch_taken_0x1fb234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB234u;
        // 0x1fb238: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb234) {
            ctx->pc = 0x1FB220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb220;
        }
    }
    ctx->pc = 0x1FB23Cu;
label_1fb23c:
    // 0x1fb23c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1fb23cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1fb240: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FB240u;
    {
        const bool branch_taken_0x1fb240 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb240) {
            ctx->pc = 0x1FB2D0u;
            goto label_1fb2d0;
        }
    }
    ctx->pc = 0x1FB248u;
label_1fb248:
    // 0x1fb248: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb24c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fb24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fb250: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb254: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb258: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb25c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb260: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb264: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb268: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb26c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb270: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb274: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb278: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb27c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb280: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb284: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb288: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb28c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb290: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb294: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb298: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb29c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb2a4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb2ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb2b4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2b8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb2bc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb2c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1fb2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1fb2c8: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1FB2C8u;
    {
        const bool branch_taken_0x1fb2c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB2C8u;
        // 0x1fb2cc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb2c8) {
            ctx->pc = 0x1FB248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb248;
        }
    }
    ctx->pc = 0x1FB2D0u;
label_1fb2d0:
    // 0x1fb2d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB2D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB2D8u;
}
