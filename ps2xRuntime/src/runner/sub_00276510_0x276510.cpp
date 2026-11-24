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

// Function: sub_00276510
// Address: 0x276510 - 0x2765a0
void sub_00276510_0x276510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276510_0x276510");
#endif

    ctx->pc = 0x276510u;

    // 0x276510: 0x8c8500bc  lw          $a1, 0xBC($a0)
    ctx->pc = 0x276510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x276514: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276514u;
    {
        const bool branch_taken_0x276514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x276514) {
            ctx->pc = 0x276528u;
            goto label_276528;
        }
    }
    ctx->pc = 0x27651Cu;
    // 0x27651c: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x27651cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x276520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276520u;
    {
        const bool branch_taken_0x276520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276520u;
        // 0x276524: 0xaca300b8  sw          $v1, 0xB8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276520) {
            ctx->pc = 0x276540u;
            goto label_276540;
        }
    }
    ctx->pc = 0x276528u;
label_276528:
    // 0x276528: 0x8c8300b8  lw          $v1, 0xB8($a0)
    ctx->pc = 0x276528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x27652c: 0xaf838910  sw          $v1, -0x76F0($gp)
    ctx->pc = 0x27652cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936848), GPR_U32(ctx, 3));
    // 0x276530: 0x8f838910  lw          $v1, -0x76F0($gp)
    ctx->pc = 0x276530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x276534: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276534u;
    {
        const bool branch_taken_0x276534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276534) {
            ctx->pc = 0x276540u;
            goto label_276540;
        }
    }
    ctx->pc = 0x27653Cu;
    // 0x27653c: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x27653cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
label_276540:
    // 0x276540: 0x8c8500b8  lw          $a1, 0xB8($a0)
    ctx->pc = 0x276540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x276544: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x276544u;
    {
        const bool branch_taken_0x276544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x276544) {
            ctx->pc = 0x276558u;
            goto label_276558;
        }
    }
    ctx->pc = 0x27654Cu;
    // 0x27654c: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x27654cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x276550: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x276550u;
    {
        const bool branch_taken_0x276550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276550u;
        // 0x276554: 0xaca300bc  sw          $v1, 0xBC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276550) {
            ctx->pc = 0x276570u;
            goto label_276570;
        }
    }
    ctx->pc = 0x276558u;
label_276558:
    // 0x276558: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x276558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x27655c: 0xaf838914  sw          $v1, -0x76EC($gp)
    ctx->pc = 0x27655cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936852), GPR_U32(ctx, 3));
    // 0x276560: 0x8f838914  lw          $v1, -0x76EC($gp)
    ctx->pc = 0x276560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x276564: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x276564u;
    {
        const bool branch_taken_0x276564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x276564) {
            ctx->pc = 0x276570u;
            goto label_276570;
        }
    }
    ctx->pc = 0x27656Cu;
    // 0x27656c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x27656cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_276570:
    // 0x276570: 0x908400b3  lbu         $a0, 0xB3($a0)
    ctx->pc = 0x276570u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 179)));
    // 0x276574: 0x3c03008c  lui         $v1, 0x8C
    ctx->pc = 0x276574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)140 << 16));
    // 0x276578: 0x24630910  addiu       $v1, $v1, 0x910
    ctx->pc = 0x276578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2320));
    // 0x27657c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x27657cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x276580: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x276580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x276584: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x276584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276588: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x276588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x27658c: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x27658cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x276590: 0x8f838904  lw          $v1, -0x76FC($gp)
    ctx->pc = 0x276590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
    // 0x276594: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x276594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x276598: 0x3e00008  jr          $ra
    ctx->pc = 0x276598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276598u;
        // 0x27659c: 0xaf838904  sw          $v1, -0x76FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2765A0u;
}
