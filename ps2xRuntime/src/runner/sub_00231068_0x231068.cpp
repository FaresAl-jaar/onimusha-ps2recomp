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

// Function: sub_00231068
// Address: 0x231068 - 0x2310c8
void sub_00231068_0x231068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231068_0x231068");
#endif

    switch (ctx->pc) {
        case 0x231088u: goto label_231088;
        case 0x231090u: goto label_231090;
        case 0x2310a4u: goto label_2310a4;
        default: break;
    }

    ctx->pc = 0x231068u;

    // 0x231068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x231068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23106c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x231070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x231074: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x231074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x231078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x231078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23107c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x231080: 0xc08b528  jal         func_22D4A0
    ctx->pc = 0x231080u;
    SET_GPR_U32(ctx, 31, 0x231088u);
    ctx->pc = 0x231084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231080u;
    // 0x231084: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4A0u, 0x231080u, 0x231088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231088u;
label_231088:
    // 0x231088: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x231088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23108c: 0x2450c478  addiu       $s0, $v0, -0x3B88
    ctx->pc = 0x23108cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952056));
label_231090:
    // 0x231090: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231094: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x231094u;
    {
        const bool branch_taken_0x231094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x231094) {
            ctx->pc = 0x231098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231094u;
            // 0x231098: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310A8u;
            goto label_2310a8;
        }
    }
    ctx->pc = 0x23109Cu;
    // 0x23109c: 0xc08c3de  jal         func_230F78
    ctx->pc = 0x23109Cu;
    SET_GPR_U32(ctx, 31, 0x2310A4u);
    ctx->pc = 0x2310A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23109Cu;
    // 0x2310a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230F78u, 0x23109Cu, 0x2310A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2310a8:
    // 0x2310a8: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2310A8u;
    {
        const bool branch_taken_0x2310a8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2310ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310A8u;
        // 0x2310ac: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310a8) {
            ctx->pc = 0x231090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231090;
        }
    }
    ctx->pc = 0x2310B0u;
    // 0x2310b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2310b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2310b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2310b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2310b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2310b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2310bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2310bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2310c0: 0x808b52e  j           func_22D4B8
    ctx->pc = 0x2310C0u;
    ctx->pc = 0x2310C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310C0u;
    // 0x2310c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4B8u;
    sub_0022D4B8_0x22d4b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2310C8u;
}
