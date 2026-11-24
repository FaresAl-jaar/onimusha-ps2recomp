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

// Function: sub_0023B5E8
// Address: 0x23b5e8 - 0x23b624
void sub_0023B5E8_0x23b5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B5E8_0x23b5e8");
#endif

    ctx->pc = 0x23b5e8u;

    // 0x23b5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b5ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B5ECu;
    {
        const bool branch_taken_0x23b5ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B5ECu;
        // 0x23b5f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5ec) {
            ctx->pc = 0x23B608u;
            goto label_23b608;
        }
    }
    ctx->pc = 0x23B5F4u;
    // 0x23b5f4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x23b5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x23b5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b5fc: 0x2484b520  addiu       $a0, $a0, -0x4AE0
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948128));
    // 0x23b600: 0x808baa4  j           func_22EA90
    ctx->pc = 0x23B600u;
    ctx->pc = 0x23B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B600u;
    // 0x23b604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA90u;
    sub_0022EA90_0x22ea90(rdram, ctx, runtime); return;
    ctx->pc = 0x23B608u;
label_23b608:
    // 0x23b608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b60c: 0xa480006a  sh          $zero, 0x6A($a0)
    ctx->pc = 0x23b60cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 106), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b610: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x23b610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b614: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x23b614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x23b618: 0xa4800068  sh          $zero, 0x68($a0)
    ctx->pc = 0x23b618u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 104), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b61c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B61Cu;
        // 0x23b620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B624u;
}
