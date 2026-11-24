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

// Function: sub_0024D6A0
// Address: 0x24d6a0 - 0x24d750
void sub_0024D6A0_0x24d6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D6A0_0x24d6a0");
#endif

    ctx->pc = 0x24d6a0u;

    // 0x24d6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d6a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D6A4u;
    {
        const bool branch_taken_0x24d6a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6A4u;
        // 0x24d6a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6a4) {
            ctx->pc = 0x24D6C0u;
            goto label_24d6c0;
        }
    }
    ctx->pc = 0x24D6ACu;
    // 0x24d6ac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24d6b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d6b4: 0x2484e288  addiu       $a0, $a0, -0x1D78
    ctx->pc = 0x24d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959752));
    // 0x24d6b8: 0x80933e4  j           func_24CF90
    ctx->pc = 0x24D6B8u;
    ctx->pc = 0x24D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6B8u;
    // 0x24d6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF90u;
    sub_0024CF90_0x24cf90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D6C0u;
label_24d6c0:
    // 0x24d6c0: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x24d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x24d6c4: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x24d6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x24d6c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D6C8u;
    {
        const bool branch_taken_0x24d6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d6c8) {
            ctx->pc = 0x24D6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D6C8u;
            // 0x24d6cc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D6ECu;
            goto label_24d6ec;
        }
    }
    ctx->pc = 0x24D6D0u;
    // 0x24d6d0: 0x28c2ff81  slti        $v0, $a2, -0x7F
    ctx->pc = 0x24d6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967169) ? 1 : 0);
    // 0x24d6d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D6D4u;
    {
        const bool branch_taken_0x24d6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d6d4) {
            ctx->pc = 0x24D6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D6D4u;
            // 0x24d6d8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D6ECu;
            goto label_24d6ec;
        }
    }
    ctx->pc = 0x24D6DCu;
    // 0x24d6dc: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x24d6dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x24d6e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24D6E0u;
    {
        const bool branch_taken_0x24d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6E0u;
        // 0x24d6e4: 0x24a7ff81  addiu       $a3, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6e0) {
            ctx->pc = 0x24D700u;
            goto label_24d700;
        }
    }
    ctx->pc = 0x24D6E8u;
    // 0x24d6e8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24d6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24d6ec:
    // 0x24d6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d6f0: 0x2484e2b0  addiu       $a0, $a0, -0x1D50
    ctx->pc = 0x24d6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959792));
    // 0x24d6f4: 0x80933e4  j           func_24CF90
    ctx->pc = 0x24D6F4u;
    ctx->pc = 0x24D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6F4u;
    // 0x24d6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CF90u;
    sub_0024CF90_0x24cf90(rdram, ctx, runtime); return;
    ctx->pc = 0x24D6FCu;
    // 0x24d6fc: 0x0  nop
    ctx->pc = 0x24d6fcu;
    // NOP
label_24d700:
    // 0x24d700: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24D700u;
    {
        const bool branch_taken_0x24d700 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x24D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D700u;
        // 0x24d704: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d700) {
            ctx->pc = 0x24D70Cu;
            goto label_24d70c;
        }
    }
    ctx->pc = 0x24D708u;
    // 0x24d708: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24d708u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_24d70c:
    // 0x24d70c: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D70Cu;
    {
        const bool branch_taken_0x24d70c = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x24D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D70Cu;
        // 0x24d710: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d70c) {
            ctx->pc = 0x24D71Cu;
            goto label_24d71c;
        }
    }
    ctx->pc = 0x24D714u;
    // 0x24d714: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x24d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x24d718: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x24d718u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24d71c:
    // 0x24d71c: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x24d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x24d720: 0x24c3ff81  addiu       $v1, $a2, -0x7F
    ctx->pc = 0x24d720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x24d724: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x24D724u;
    {
        const bool branch_taken_0x24d724 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x24d724) {
            ctx->pc = 0x24D728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D724u;
            // 0x24d728: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D72Cu;
            goto label_24d72c;
        }
    }
    ctx->pc = 0x24D72Cu;
label_24d72c:
    // 0x24d72c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x24d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x24d730: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D730u;
    {
        const bool branch_taken_0x24d730 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x24D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D730u;
        // 0x24d734: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d730) {
            ctx->pc = 0x24D740u;
            goto label_24d740;
        }
    }
    ctx->pc = 0x24D738u;
    // 0x24d738: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x24d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x24d73c: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x24d73cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24d740:
    // 0x24d740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d744: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x24d744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x24d748: 0x3e00008  jr          $ra
    ctx->pc = 0x24D748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D748u;
        // 0x24d74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D750u;
}
