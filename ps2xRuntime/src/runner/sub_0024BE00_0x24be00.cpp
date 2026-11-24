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

// Function: sub_0024BE00
// Address: 0x24be00 - 0x24be64
void sub_0024BE00_0x24be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BE00_0x24be00");
#endif

    ctx->pc = 0x24be00u;

    // 0x24be00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24be04: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24be04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24be08: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BE08u;
    {
        const bool branch_taken_0x24be08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE08u;
        // 0x24be0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be08) {
            ctx->pc = 0x24BE28u;
            goto label_24be28;
        }
    }
    ctx->pc = 0x24BE10u;
    // 0x24be10: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24be10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24be14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24be14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24be18: 0x2484da90  addiu       $a0, $a0, -0x2570
    ctx->pc = 0x24be18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
    // 0x24be1c: 0x8093008  j           func_24C020
    ctx->pc = 0x24BE1Cu;
    ctx->pc = 0x24BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE1Cu;
    // 0x24be20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24BE24u;
    // 0x24be24: 0x0  nop
    ctx->pc = 0x24be24u;
    // NOP
label_24be28:
    // 0x24be28: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BE28u;
    {
        const bool branch_taken_0x24be28 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x24be28) {
            ctx->pc = 0x24BE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BE28u;
            // 0x24be2c: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BE44u;
            goto label_24be44;
        }
    }
    ctx->pc = 0x24BE30u;
    // 0x24be30: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x24be30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x24be34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x24be34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x24be38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BE38u;
    {
        const bool branch_taken_0x24be38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE38u;
        // 0x24be3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24be38) {
            ctx->pc = 0x24BE58u;
            goto label_24be58;
        }
    }
    ctx->pc = 0x24BE40u;
    // 0x24be40: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24be40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24be44:
    // 0x24be44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24be44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24be48: 0x2484dac0  addiu       $a0, $a0, -0x2540
    ctx->pc = 0x24be48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957760));
    // 0x24be4c: 0x8093008  j           func_24C020
    ctx->pc = 0x24BE4Cu;
    ctx->pc = 0x24BE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BE4Cu;
    // 0x24be50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    sub_0024C020_0x24c020(rdram, ctx, runtime); return;
    ctx->pc = 0x24BE54u;
    // 0x24be54: 0x0  nop
    ctx->pc = 0x24be54u;
    // NOP
label_24be58:
    // 0x24be58: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x24be58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x24be5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BE5Cu;
        // 0x24be60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BE64u;
}
