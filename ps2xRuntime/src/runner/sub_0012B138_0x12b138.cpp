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

// Function: sub_0012B138
// Address: 0x12b138 - 0x12b208
void sub_0012B138_0x12b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B138_0x12b138");
#endif

    switch (ctx->pc) {
        case 0x12b154u: goto label_12b154;
        case 0x12b174u: goto label_12b174;
        case 0x12b1b4u: goto label_12b1b4;
        case 0x12b1d0u: goto label_12b1d0;
        default: break;
    }

    ctx->pc = 0x12b138u;

    // 0x12b138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b13c: 0x4a1002e  bgez        $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x12B13Cu;
    {
        const bool branch_taken_0x12b13c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x12B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B13Cu;
        // 0x12b140: 0xa0860000  sb          $a2, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b13c) {
            ctx->pc = 0x12B1F8u;
            goto label_12b1f8;
        }
    }
    ctx->pc = 0x12B144u;
    // 0x12b144: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12b144u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12b148: 0x52823  negu        $a1, $a1
    ctx->pc = 0x12b148u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12b14c: 0xa08f0001  sb          $t7, 0x1($a0)
    ctx->pc = 0x12b14cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
    // 0x12b150: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12b150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_12b154:
    // 0x12b154: 0x27ad0028  addiu       $t5, $sp, 0x28
    ctx->pc = 0x12b154u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x12b158: 0x28af000a  slti        $t7, $a1, 0xA
    ctx->pc = 0x12b158u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12b15c: 0x15e0001f  bnez        $t7, . + 4 + (0x1F << 2)
    ctx->pc = 0x12B15Cu;
    {
        const bool branch_taken_0x12b15c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B15Cu;
        // 0x12b160: 0x1a0502d  daddu       $t2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b15c) {
            ctx->pc = 0x12B1DCu;
            goto label_12b1dc;
        }
    }
    ctx->pc = 0x12B164u;
    // 0x12b164: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x12b164u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b168: 0x240b000a  addiu       $t3, $zero, 0xA
    ctx->pc = 0x12b168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b16c: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x12b16cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b170: 0xad001a  div         $zero, $a1, $t5
    ctx->pc = 0x12b170u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_12b174:
    // 0x12b174: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x12b174u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12b178: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12B178u;
    {
        const bool branch_taken_0x12b178 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b178) {
            ctx->pc = 0x12B17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B178u;
            // 0x12b17c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B180u;
            goto label_12b180;
        }
    }
    ctx->pc = 0x12B180u;
label_12b180:
    // 0x12b180: 0x7810  mfhi        $t7
    ctx->pc = 0x12b180u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x12b184: 0x7012  mflo        $t6
    ctx->pc = 0x12b184u;
    SET_GPR_U64(ctx, 14, ctx->lo);
    // 0x12b188: 0x25ef0030  addiu       $t7, $t7, 0x30
    ctx->pc = 0x12b188u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 48));
    // 0x12b18c: 0x2812  mflo        $a1
    ctx->pc = 0x12b18cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x12b190: 0xa18f0000  sb          $t7, 0x0($t4)
    ctx->pc = 0x12b190u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12b194: 0x29ce000a  slti        $t6, $t6, 0xA
    ctx->pc = 0x12b194u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x12b198: 0x51c0fff6  beql        $t6, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x12B198u;
    {
        const bool branch_taken_0x12b198 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b198) {
            ctx->pc = 0x12B19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B198u;
            // 0x12b19c: 0xad001a  div         $zero, $a1, $t5 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B174u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b174;
        }
    }
    ctx->pc = 0x12B1A0u;
    // 0x12b1a0: 0x258dffff  addiu       $t5, $t4, -0x1
    ctx->pc = 0x12b1a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x12b1a4: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12b1a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12b1a8: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12b1a8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12b1ac: 0x11e00008  beqz        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B1ACu;
    {
        const bool branch_taken_0x12b1ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1ACu;
        // 0x12b1b0: 0xa1ae0000  sb          $t6, 0x0($t5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1ac) {
            ctx->pc = 0x12B1D0u;
            goto label_12b1d0;
        }
    }
    ctx->pc = 0x12B1B4u;
label_12b1b4:
    // 0x12b1b4: 0x91af0000  lbu         $t7, 0x0($t5)
    ctx->pc = 0x12b1b4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x12b1b8: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12b1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12b1bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12b1c0: 0x1aa782b  sltu        $t7, $t5, $t2
    ctx->pc = 0x12b1c0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x12b1c4: 0x0  nop
    ctx->pc = 0x12b1c4u;
    // NOP
    // 0x12b1c8: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B1C8u;
    {
        const bool branch_taken_0x12b1c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1C8u;
        // 0x12b1cc: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1c8) {
            ctx->pc = 0x12B1B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b1b4;
        }
    }
    ctx->pc = 0x12B1D0u;
label_12b1d0:
    // 0x12b1d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12b1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x12B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1D4u;
        // 0x12b1d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B1DCu;
label_12b1dc:
    // 0x12b1dc: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12b1dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12b1e0: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12b1e4: 0xa04f0000  sb          $t7, 0x0($v0)
    ctx->pc = 0x12b1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x12b1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12b1ec: 0xa04e0000  sb          $t6, 0x0($v0)
    ctx->pc = 0x12b1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x12b1f0: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12B1F0u;
    {
        const bool branch_taken_0x12b1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B1F0u;
        // 0x12b1f4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b1f0) {
            ctx->pc = 0x12B1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b1d0;
        }
    }
    ctx->pc = 0x12B1F8u;
label_12b1f8:
    // 0x12b1f8: 0x240f002b  addiu       $t7, $zero, 0x2B
    ctx->pc = 0x12b1f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12b1fc: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x12b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x12b200: 0x1000ffd4  b           . + 4 + (-0x2C << 2)
    ctx->pc = 0x12B200u;
    {
        const bool branch_taken_0x12b200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B200u;
        // 0x12b204: 0xa08f0001  sb          $t7, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b200) {
            ctx->pc = 0x12B154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b154;
        }
    }
    ctx->pc = 0x12B208u;
}
