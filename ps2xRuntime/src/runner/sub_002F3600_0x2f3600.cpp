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

// Function: sub_002F3600
// Address: 0x2f3600 - 0x2f36ac
void sub_002F3600_0x2f3600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3600_0x2f3600");
#endif

    ctx->pc = 0x2f3600u;

    // 0x2f3600: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x2f3600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2f3604: 0x240a0346  addiu       $t2, $zero, 0x346
    ctx->pc = 0x2f3604u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 838));
    // 0x2f3608: 0x144a0003  bne         $v0, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3608u;
    {
        const bool branch_taken_0x2f3608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x2F360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3608u;
        // 0x2f360c: 0x24090100  addiu       $t1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3608) {
            ctx->pc = 0x2F3618u;
            goto label_2f3618;
        }
    }
    ctx->pc = 0x2F3610u;
    // 0x2f3610: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F3610u;
    {
        const bool branch_taken_0x2f3610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3610) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3618u;
label_2f3618:
    // 0x2f3618: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x2f3618u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2f361c: 0x31030f00  andi        $v1, $t0, 0xF00
    ctx->pc = 0x2f361cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3840);
    // 0x2f3620: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f3620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2f3624: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2f3624u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2f3628: 0x24428f90  addiu       $v0, $v0, -0x7070
    ctx->pc = 0x2f3628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938512));
    // 0x2f362c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x2f362cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2f3630: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2f3630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2f3634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3638: 0x9449000c  lhu         $t1, 0xC($v0)
    ctx->pc = 0x2f3638u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f363c: 0x11200014  beqz        $t1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F363Cu;
    {
        const bool branch_taken_0x2f363c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F363Cu;
        // 0x2f3640: 0x944a000a  lhu         $t2, 0xA($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f363c) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3644u;
    // 0x2f3644: 0x4e00012  bltz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F3644u;
    {
        const bool branch_taken_0x2f3644 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x2F3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3644u;
        // 0x2f3648: 0x28e10005  slti        $at, $a3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3644) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F364Cu;
    // 0x2f364c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F364Cu;
    {
        const bool branch_taken_0x2f364c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F364Cu;
        // 0x2f3650: 0x310300ff  andi        $v1, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f364c) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3654u;
    // 0x2f3654: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2f3654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2f3658: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3658u;
    {
        const bool branch_taken_0x2f3658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3658) {
            ctx->pc = 0x2F3678u;
            goto label_2f3678;
        }
    }
    ctx->pc = 0x2F3660u;
    // 0x2f3660: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3660u;
    {
        const bool branch_taken_0x2f3660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3660) {
            ctx->pc = 0x2F3670u;
            goto label_2f3670;
        }
    }
    ctx->pc = 0x2F3668u;
    // 0x2f3668: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3668u;
    {
        const bool branch_taken_0x2f3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3668) {
            ctx->pc = 0x2F3688u;
            goto label_2f3688;
        }
    }
    ctx->pc = 0x2F3670u;
label_2f3670:
    // 0x2f3670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3670u;
    {
        const bool branch_taken_0x2f3670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3670u;
        // 0x2f3674: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3670) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3678u;
label_2f3678:
    // 0x2f3678: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2f3678u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2f367c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F367Cu;
    {
        const bool branch_taken_0x2f367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F367Cu;
        // 0x2f3680: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f367c) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3684u;
    // 0x2f3684: 0x0  nop
    ctx->pc = 0x2f3684u;
    // NOP
label_2f3688:
    // 0x2f3688: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2f3688u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2f368c: 0x2529fffe  addiu       $t1, $t1, -0x2
    ctx->pc = 0x2f368cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967294));
label_2f3690:
    // 0x2f3690: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x2f3690u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x2f3694: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x2f3694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x2f3698: 0xa18c0  sll         $v1, $t2, 3
    ctx->pc = 0x2f3698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2f369c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f36a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f36a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F36A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36A4u;
        // 0x2f36a8: 0x2442009c  addiu       $v0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F36A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F36ACu;
}
