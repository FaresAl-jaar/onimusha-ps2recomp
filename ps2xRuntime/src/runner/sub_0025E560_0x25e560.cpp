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

// Function: sub_0025E560
// Address: 0x25e560 - 0x25e60c
void sub_0025E560_0x25e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E560_0x25e560");
#endif

    switch (ctx->pc) {
        case 0x25e588u: goto label_25e588;
        default: break;
    }

    ctx->pc = 0x25e560u;

    // 0x25e560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25e564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25e564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25e568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25e56c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25e570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25e570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e574: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25E574u;
    {
        const bool branch_taken_0x25e574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E574u;
        // 0x25e578: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e574) {
            ctx->pc = 0x25E580u;
            goto label_25e580;
        }
    }
    ctx->pc = 0x25E57Cu;
    // 0x25e57c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_25e580:
    // 0x25e580: 0xc097934  jal         func_25E4D0
    ctx->pc = 0x25E580u;
    SET_GPR_U32(ctx, 31, 0x25E588u);
    ctx->pc = 0x25E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E580u;
    // 0x25e584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E4D0u, 0x25E580u, 0x25E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E588u;
label_25e588:
    // 0x25e588: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x25e588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25e58c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E58Cu;
    {
        const bool branch_taken_0x25e58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x25e58c) {
            ctx->pc = 0x25E5A0u;
            goto label_25e5a0;
        }
    }
    ctx->pc = 0x25E594u;
    // 0x25e594: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25E594u;
    {
        const bool branch_taken_0x25e594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E594u;
        // 0x25e598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e594) {
            ctx->pc = 0x25E5F8u;
            goto label_25e5f8;
        }
    }
    ctx->pc = 0x25E59Cu;
    // 0x25e59c: 0x0  nop
    ctx->pc = 0x25e59cu;
    // NOP
label_25e5a0:
    // 0x25e5a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25e5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e5a4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x25e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x25e5a8: 0x24420bf0  addiu       $v0, $v0, 0xBF0
    ctx->pc = 0x25e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3056));
    // 0x25e5ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e5b0: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x25e5b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e5b4: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E5B4u;
    {
        const bool branch_taken_0x25e5b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x25e5b4) {
            ctx->pc = 0x25E5C8u;
            goto label_25e5c8;
        }
    }
    ctx->pc = 0x25E5BCu;
    // 0x25e5bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25E5BCu;
    {
        const bool branch_taken_0x25e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5BCu;
        // 0x25e5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5bc) {
            ctx->pc = 0x25E5F8u;
            goto label_25e5f8;
        }
    }
    ctx->pc = 0x25E5C4u;
    // 0x25e5c4: 0x0  nop
    ctx->pc = 0x25e5c4u;
    // NOP
label_25e5c8:
    // 0x25e5c8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x25E5C8u;
    {
        const bool branch_taken_0x25e5c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5C8u;
        // 0x25e5cc: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5c8) {
            ctx->pc = 0x25E5F8u;
            goto label_25e5f8;
        }
    }
    ctx->pc = 0x25E5D0u;
    // 0x25e5d0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25E5D0u;
    {
        const bool branch_taken_0x25e5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25e5d0) {
            ctx->pc = 0x25E5E8u;
            goto label_25e5e8;
        }
    }
    ctx->pc = 0x25E5D8u;
    // 0x25e5d8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x25e5d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x25e5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E5DCu;
    {
        const bool branch_taken_0x25e5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E5DCu;
        // 0x25e5e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e5dc) {
            ctx->pc = 0x25E5F8u;
            goto label_25e5f8;
        }
    }
    ctx->pc = 0x25E5E4u;
    // 0x25e5e4: 0x0  nop
    ctx->pc = 0x25e5e4u;
    // NOP
label_25e5e8:
    // 0x25e5e8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x25e5e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25e5ec: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x25e5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25e5f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x25e5f4: 0x0  nop
    ctx->pc = 0x25e5f4u;
    // NOP
label_25e5f8:
    // 0x25e5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e604: 0x3e00008  jr          $ra
    ctx->pc = 0x25E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E604u;
        // 0x25e608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E60Cu;
}
