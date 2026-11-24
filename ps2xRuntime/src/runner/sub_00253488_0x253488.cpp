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

// Function: sub_00253488
// Address: 0x253488 - 0x25351c
void sub_00253488_0x253488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253488_0x253488");
#endif

    ctx->pc = 0x253488u;

    // 0x253488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25348c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25348cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253490: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x253490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x253494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x253498: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x253498u;
    {
        const bool branch_taken_0x253498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253498u;
        // 0x25349c: 0x2cc30008  sltiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x253498) {
            ctx->pc = 0x2534B8u;
            goto label_2534b8;
        }
    }
    ctx->pc = 0x2534A0u;
    // 0x2534a0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2534a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2534a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2534a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2534a8: 0x2484efd0  addiu       $a0, $a0, -0x1030
    ctx->pc = 0x2534a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963152));
    // 0x2534ac: 0x8094c1e  j           func_253078
    ctx->pc = 0x2534ACu;
    ctx->pc = 0x2534B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534ACu;
    // 0x2534b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    sub_00253078_0x253078(rdram, ctx, runtime); return;
    ctx->pc = 0x2534B4u;
    // 0x2534b4: 0x0  nop
    ctx->pc = 0x2534b4u;
    // NOP
label_2534b8:
    // 0x2534b8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2534B8u;
    {
        const bool branch_taken_0x2534b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2534BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2534B8u;
        // 0x2534bc: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2534b8) {
            ctx->pc = 0x2534D8u;
            goto label_2534d8;
        }
    }
    ctx->pc = 0x2534C0u;
    // 0x2534c0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2534c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2534c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2534c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2534c8: 0x2484eff0  addiu       $a0, $a0, -0x1010
    ctx->pc = 0x2534c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963184));
    // 0x2534cc: 0x8094c1e  j           func_253078
    ctx->pc = 0x2534CCu;
    ctx->pc = 0x2534D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2534CCu;
    // 0x2534d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253078u;
    sub_00253078_0x253078(rdram, ctx, runtime); return;
    ctx->pc = 0x2534D4u;
    // 0x2534d4: 0x0  nop
    ctx->pc = 0x2534d4u;
    // NOP
label_2534d8:
    // 0x2534d8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2534d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2534dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2534dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2534e0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2534e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2534e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2534e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2534e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2534e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2534ec: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x2534ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x2534f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2534f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2534f4: 0x244286e0  addiu       $v0, $v0, -0x7920
    ctx->pc = 0x2534f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936288));
    // 0x2534f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2534f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2534fc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2534fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x253500: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x253500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x253504: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x253504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253508: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x253508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x25350c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x25350cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x253510: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x253510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x253514: 0x3e00008  jr          $ra
    ctx->pc = 0x253514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253514u;
        // 0x253518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25351Cu;
}
