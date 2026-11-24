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

// Function: sub_00274930
// Address: 0x274930 - 0x274a10
void sub_00274930_0x274930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274930_0x274930");
#endif

    switch (ctx->pc) {
        case 0x2749a0u: goto label_2749a0;
        default: break;
    }

    ctx->pc = 0x274930u;

    // 0x274930: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274930u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x274934: 0x24037363  addiu       $v1, $zero, 0x7363
    ctx->pc = 0x274934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29539));
    // 0x274938: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x274938u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27493c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27493Cu;
    {
        const bool branch_taken_0x27493c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x274940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27493Cu;
        // 0x274940: 0x24034353  addiu       $v1, $zero, 0x4353 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17235));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27493c) {
            ctx->pc = 0x274950u;
            goto label_274950;
        }
    }
    ctx->pc = 0x274944u;
    // 0x274944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274944u;
    {
        const bool branch_taken_0x274944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274944u;
        // 0x274948: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274944) {
            ctx->pc = 0x274958u;
            goto label_274958;
        }
    }
    ctx->pc = 0x27494Cu;
    // 0x27494c: 0x0  nop
    ctx->pc = 0x27494cu;
    // NOP
label_274950:
    // 0x274950: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x274950u;
    {
        const bool branch_taken_0x274950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274950) {
            ctx->pc = 0x274A08u;
            goto label_274a08;
        }
    }
    ctx->pc = 0x274958u;
label_274958:
    // 0x274958: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27495c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27495cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x274960: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x274960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x274964: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x274964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x274968: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27496c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x27496cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x274970: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x274970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x274974: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x274974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x274978: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27497c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27497cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x274980: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x274980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x274984: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x274984u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x274988: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x274988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27498c: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x27498cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x274990: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x274990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x274994: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x274994u;
    {
        const bool branch_taken_0x274994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274994u;
        // 0x274998: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274994) {
            ctx->pc = 0x274A08u;
            goto label_274a08;
        }
    }
    ctx->pc = 0x27499Cu;
    // 0x27499c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27499cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2749a0:
    // 0x2749a0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2749a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2749a4: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x2749a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2749a8: 0x91050001  lbu         $a1, 0x1($t0)
    ctx->pc = 0x2749a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2749ac: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2749ACu;
    {
        const bool branch_taken_0x2749ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2749ac) {
            ctx->pc = 0x2749C0u;
            goto label_2749c0;
        }
    }
    ctx->pc = 0x2749B4u;
    // 0x2749b4: 0x91050002  lbu         $a1, 0x2($t0)
    ctx->pc = 0x2749b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2749b8: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2749B8u;
    {
        const bool branch_taken_0x2749b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2749b8) {
            ctx->pc = 0x2749F0u;
            goto label_2749f0;
        }
    }
    ctx->pc = 0x2749C0u;
label_2749c0:
    // 0x2749c0: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x2749c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2749c4: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2749c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2749c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2749c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2749cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2749d0: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2749d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2749d4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2749d8: 0x8d06000c  lw          $a2, 0xC($t0)
    ctx->pc = 0x2749d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2749dc: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2749e0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2749e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2749e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2749e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2749e8: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x2749e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x2749ec: 0x0  nop
    ctx->pc = 0x2749ecu;
    // NOP
label_2749f0:
    // 0x2749f0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2749f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2749f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2749f8: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x2749f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2749fc: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x2749fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x274a00: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x274A00u;
    {
        const bool branch_taken_0x274a00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x274A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A00u;
        // 0x274a04: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a00) {
            ctx->pc = 0x2749A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2749a0;
        }
    }
    ctx->pc = 0x274A08u;
label_274a08:
    // 0x274a08: 0x3e00008  jr          $ra
    ctx->pc = 0x274A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274A10u;
}
