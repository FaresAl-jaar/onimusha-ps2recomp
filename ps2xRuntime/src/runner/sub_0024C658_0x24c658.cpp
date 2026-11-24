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

// Function: sub_0024C658
// Address: 0x24c658 - 0x24c6d8
void sub_0024C658_0x24c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C658_0x24c658");
#endif

    switch (ctx->pc) {
        case 0x24c668u: goto label_24c668;
        default: break;
    }

    ctx->pc = 0x24c658u;

    // 0x24c658: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24c658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c65c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24C65Cu;
    {
        const bool branch_taken_0x24c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C65Cu;
        // 0x24c660: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c65c) {
            ctx->pc = 0x24C674u;
            goto label_24c674;
        }
    }
    ctx->pc = 0x24C664u;
    // 0x24c664: 0x0  nop
    ctx->pc = 0x24c664u;
    // NOP
label_24c668:
    // 0x24c668: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x24c668u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24c66c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24c66cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24c670: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x24c670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24c674:
    // 0x24c674: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x24c674u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x24c678: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x24c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x24c67c: 0x24e3ffd0  addiu       $v1, $a3, -0x30
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x24c680: 0x24e4ff9f  addiu       $a0, $a3, -0x61
    ctx->pc = 0x24c680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x24c684: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24c684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24c688: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x24c688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x24c68c: 0x2c840006  sltiu       $a0, $a0, 0x6
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24c690: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x24C690u;
    {
        const bool branch_taken_0x24c690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C690u;
        // 0x24c694: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c690) {
            ctx->pc = 0x24C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C698u;
    // 0x24c698: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C698u;
    {
        const bool branch_taken_0x24c698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c698) {
            ctx->pc = 0x24C69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C698u;
            // 0x24c69c: 0x24e2ffbf  addiu       $v0, $a3, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6B0u;
            goto label_24c6b0;
        }
    }
    ctx->pc = 0x24C6A0u;
    // 0x24c6a0: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x24c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x24c6a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24c6a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24c6a8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x24C6A8u;
    {
        const bool branch_taken_0x24c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6A8u;
        // 0x24c6ac: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6a8) {
            ctx->pc = 0x24C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C6B0u;
label_24c6b0:
    // 0x24c6b0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x24c6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24c6b4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C6B4u;
    {
        const bool branch_taken_0x24c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c6b4) {
            ctx->pc = 0x24C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6B4u;
            // 0x24c6b8: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6D0u;
            goto label_24c6d0;
        }
    }
    ctx->pc = 0x24C6BCu;
    // 0x24c6bc: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x24c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x24c6c0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x24c6c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x24c6c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x24C6C4u;
    {
        const bool branch_taken_0x24c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6C4u;
        // 0x24c6c8: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6c4) {
            ctx->pc = 0x24C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C6CCu;
    // 0x24c6cc: 0x0  nop
    ctx->pc = 0x24c6ccu;
    // NOP
label_24c6d0:
    // 0x24c6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x24C6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6D0u;
        // 0x24c6d4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C6D8u;
}
