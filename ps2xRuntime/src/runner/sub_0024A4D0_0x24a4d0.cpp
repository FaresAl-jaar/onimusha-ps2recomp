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

// Function: sub_0024A4D0
// Address: 0x24a4d0 - 0x24a540
void sub_0024A4D0_0x24a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A4D0_0x24a4d0");
#endif

    switch (ctx->pc) {
        case 0x24a4e4u: goto label_24a4e4;
        case 0x24a508u: goto label_24a508;
        default: break;
    }

    ctx->pc = 0x24a4d0u;

    // 0x24a4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a4d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a4dc: 0xc049f18  jal         func_127C60
    ctx->pc = 0x24A4DCu;
    SET_GPR_U32(ctx, 31, 0x24A4E4u);
    ctx->pc = 0x24A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A4DCu;
    // 0x24a4e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x24A4DCu, 0x24A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A4E4u;
label_24a4e4:
    // 0x24a4e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24a4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a4e8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24a4ec: 0x2cc30011  sltiu       $v1, $a2, 0x11
    ctx->pc = 0x24a4ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x24a4f0: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x24a4f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x24a4f4: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x24A4F4u;
    {
        const bool branch_taken_0x24a4f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4F4u;
        // 0x24a4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4f4) {
            ctx->pc = 0x24A52Cu;
            goto label_24a52c;
        }
    }
    ctx->pc = 0x24A4FCu;
    // 0x24a4fc: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x24a4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x24a500: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x24a504: 0x0  nop
    ctx->pc = 0x24a504u;
    // NOP
label_24a508:
    // 0x24a508: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24a50c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x24a50cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24a510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24a514: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A514u;
    {
        const bool branch_taken_0x24a514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x24A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A514u;
        // 0x24a518: 0xa6202b  sltu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a514) {
            ctx->pc = 0x24A530u;
            goto label_24a530;
        }
    }
    ctx->pc = 0x24A51Cu;
    // 0x24a51c: 0x0  nop
    ctx->pc = 0x24a51cu;
    // NOP
    // 0x24a520: 0x0  nop
    ctx->pc = 0x24a520u;
    // NOP
    // 0x24a524: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24A524u;
    {
        const bool branch_taken_0x24a524 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A524u;
        // 0x24a528: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a524) {
            ctx->pc = 0x24A508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a508;
        }
    }
    ctx->pc = 0x24A52Cu;
label_24a52c:
    // 0x24a52c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24a52cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a530:
    // 0x24a530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a538: 0x3e00008  jr          $ra
    ctx->pc = 0x24A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A538u;
        // 0x24a53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A540u;
}
