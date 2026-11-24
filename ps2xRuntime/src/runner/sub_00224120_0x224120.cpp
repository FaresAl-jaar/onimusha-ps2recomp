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

// Function: sub_00224120
// Address: 0x224120 - 0x2241a8
void sub_00224120_0x224120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224120_0x224120");
#endif

    switch (ctx->pc) {
        case 0x224160u: goto label_224160;
        default: break;
    }

    ctx->pc = 0x224120u;

    // 0x224120: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x224120u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224124: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x224124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x224128: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x224128u;
    {
        const bool branch_taken_0x224128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224128u;
        // 0x22412c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224128) {
            ctx->pc = 0x22419Cu;
            goto label_22419c;
        }
    }
    ctx->pc = 0x224130u;
    // 0x224130: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x224130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x224134: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x224134u;
    {
        const bool branch_taken_0x224134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x224134) {
            ctx->pc = 0x224138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224134u;
            // 0x224138: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241A0u;
            goto label_2241a0;
        }
    }
    ctx->pc = 0x22413Cu;
    // 0x22413c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x22413Cu;
    {
        const bool branch_taken_0x22413c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22413c) {
            ctx->pc = 0x224140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22413Cu;
            // 0x224140: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241A0u;
            goto label_2241a0;
        }
    }
    ctx->pc = 0x224144u;
    // 0x224144: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x224144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x224148: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x224148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x22414c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x22414Cu;
    {
        const bool branch_taken_0x22414c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22414c) {
            ctx->pc = 0x224150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22414Cu;
            // 0x224150: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241A0u;
            goto label_2241a0;
        }
    }
    ctx->pc = 0x224154u;
    // 0x224154: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x224154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x224158: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x224158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x22415c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x22415cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_224160:
    // 0x224160: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224164: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x224164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x224168: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x224168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x22416c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22416cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x224170: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x224170u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x224174: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x224174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x224178: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x224178u;
    {
        const bool branch_taken_0x224178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x22417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224178u;
        // 0x22417c: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224178) {
            ctx->pc = 0x22419Cu;
            goto label_22419c;
        }
    }
    ctx->pc = 0x224180u;
    // 0x224180: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x224180u;
    {
        const bool branch_taken_0x224180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x224180) {
            ctx->pc = 0x224184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224180u;
            // 0x224184: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241A0u;
            goto label_2241a0;
        }
    }
    ctx->pc = 0x224188u;
    // 0x224188: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x224188u;
    {
        const bool branch_taken_0x224188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224188) {
            ctx->pc = 0x22418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224188u;
            // 0x22418c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2241A0u;
            goto label_2241a0;
        }
    }
    ctx->pc = 0x224190u;
    // 0x224190: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x224190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x224194: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x224194u;
    {
        const bool branch_taken_0x224194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224194) {
            ctx->pc = 0x224198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x224194u;
            // 0x224198: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x224160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224160;
        }
    }
    ctx->pc = 0x22419Cu;
label_22419c:
    // 0x22419c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x22419cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2241a0:
    // 0x2241a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2241A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2241A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2241A0u;
        // 0x2241a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2241A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2241A8u;
}
