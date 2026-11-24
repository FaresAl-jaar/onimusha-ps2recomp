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

// Function: sub_002CB1E0
// Address: 0x2cb1e0 - 0x2cb290
void sub_002CB1E0_0x2cb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB1E0_0x2cb1e0");
#endif

    switch (ctx->pc) {
        case 0x2cb200u: goto label_2cb200;
        case 0x2cb260u: goto label_2cb260;
        default: break;
    }

    ctx->pc = 0x2cb1e0u;

    // 0x2cb1e0: 0x28a10100  slti        $at, $a1, 0x100
    ctx->pc = 0x2cb1e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2cb1e4: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CB1E4u;
    {
        const bool branch_taken_0x2cb1e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1E4u;
        // 0x2cb1e8: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1e4) {
            ctx->pc = 0x2CB288u;
            goto label_2cb288;
        }
    }
    ctx->pc = 0x2CB1ECu;
    // 0x2cb1ec: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x2CB1ECu;
    {
        const bool branch_taken_0x2cb1ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1ECu;
        // 0x2cb1f0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1ec) {
            ctx->pc = 0x2CB280u;
            goto label_2cb280;
        }
    }
    ctx->pc = 0x2CB1F4u;
    // 0x2cb1f4: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x2cb1f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2cb1f8: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CB1F8u;
    {
        const bool branch_taken_0x2cb1f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F8u;
        // 0x2cb1fc: 0x24a7fff8  addiu       $a3, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1f8) {
            ctx->pc = 0x2CB250u;
            goto label_2cb250;
        }
    }
    ctx->pc = 0x2CB200u;
label_2cb200:
    // 0x2cb200: 0x883021  addu        $a2, $a0, $t0
    ctx->pc = 0x2cb200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2cb204: 0xa0c80000  sb          $t0, 0x0($a2)
    ctx->pc = 0x2cb204u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cb208: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cb20c: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x2cb20cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb210: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2cb210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2cb214: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x2cb214u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb218: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x2cb21c: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x2cb21cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb220: 0x25030004  addiu       $v1, $t0, 0x4
    ctx->pc = 0x2cb220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2cb224: 0xa0c30004  sb          $v1, 0x4($a2)
    ctx->pc = 0x2cb224u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb228: 0x25030005  addiu       $v1, $t0, 0x5
    ctx->pc = 0x2cb228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x2cb22c: 0xa0c30005  sb          $v1, 0x5($a2)
    ctx->pc = 0x2cb22cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb230: 0x25030006  addiu       $v1, $t0, 0x6
    ctx->pc = 0x2cb230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x2cb234: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x2cb234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb238: 0x25030007  addiu       $v1, $t0, 0x7
    ctx->pc = 0x2cb238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
    // 0x2cb23c: 0xa0c30007  sb          $v1, 0x7($a2)
    ctx->pc = 0x2cb23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cb240: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x2cb240u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x2cb244: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x2cb244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2cb248: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CB248u;
    {
        const bool branch_taken_0x2cb248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb248) {
            ctx->pc = 0x2CB200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb200;
        }
    }
    ctx->pc = 0x2CB250u;
label_2cb250:
    // 0x2cb250: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x2cb250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cb254: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2CB254u;
    {
        const bool branch_taken_0x2cb254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb254) {
            ctx->pc = 0x2CB280u;
            goto label_2cb280;
        }
    }
    ctx->pc = 0x2CB25Cu;
    // 0x2cb25c: 0x0  nop
    ctx->pc = 0x2cb25cu;
    // NOP
label_2cb260:
    // 0x2cb260: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x2cb260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2cb264: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x2cb264u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cb268: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2cb268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2cb26c: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x2cb26cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cb270: 0x0  nop
    ctx->pc = 0x2cb270u;
    // NOP
    // 0x2cb274: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CB274u;
    {
        const bool branch_taken_0x2cb274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb274) {
            ctx->pc = 0x2CB260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb260;
        }
    }
    ctx->pc = 0x2CB27Cu;
    // 0x2cb27c: 0x0  nop
    ctx->pc = 0x2cb27cu;
    // NOP
label_2cb280:
    // 0x2cb280: 0xa08500ff  sb          $a1, 0xFF($a0)
    ctx->pc = 0x2cb280u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 255), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cb284: 0xa0850100  sb          $a1, 0x100($a0)
    ctx->pc = 0x2cb284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 256), (uint8_t)GPR_U32(ctx, 5));
label_2cb288:
    // 0x2cb288: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB290u;
}
