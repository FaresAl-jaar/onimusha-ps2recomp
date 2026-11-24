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

// Function: sub_00243498
// Address: 0x243498 - 0x243530
void sub_00243498_0x243498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243498_0x243498");
#endif

    switch (ctx->pc) {
        case 0x2434c8u: goto label_2434c8;
        case 0x2434e8u: goto label_2434e8;
        case 0x2434f8u: goto label_2434f8;
        default: break;
    }

    ctx->pc = 0x243498u;

    // 0x243498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x243498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24349c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24349cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2434a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2434a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2434a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2434a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2434a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2434ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2434acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2434b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2434b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2434b4: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2434b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2434b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2434B8u;
    {
        const bool branch_taken_0x2434b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2434BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434B8u;
        // 0x2434bc: 0x3c130088  lui         $s3, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434b8) {
            ctx->pc = 0x2434D0u;
            goto label_2434d0;
        }
    }
    ctx->pc = 0x2434C0u;
    // 0x2434c0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2434C0u;
    {
        const bool branch_taken_0x2434c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434C0u;
        // 0x2434c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434c0) {
            ctx->pc = 0x243514u;
            goto label_243514;
        }
    }
    ctx->pc = 0x2434C8u;
label_2434c8:
    // 0x2434c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2434C8u;
    {
        const bool branch_taken_0x2434c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434C8u;
        // 0x2434cc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434c8) {
            ctx->pc = 0x243514u;
            goto label_243514;
        }
    }
    ctx->pc = 0x2434D0u;
label_2434d0:
    // 0x2434d0: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x2434d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x2434d4: 0x8e635cf8  lw          $v1, 0x5CF8($s3)
    ctx->pc = 0x2434d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23800)));
    // 0x2434d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2434d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434dc: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2434DCu;
    {
        const bool branch_taken_0x2434dc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2434E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434DCu;
        // 0x2434e0: 0x8c505cf4  lw          $s0, 0x5CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434dc) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x2434E4u;
    // 0x2434e4: 0x0  nop
    ctx->pc = 0x2434e4u;
    // NOP
label_2434e8:
    // 0x2434e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2434e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2434ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2434f0: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x2434F0u;
    SET_GPR_U32(ctx, 31, 0x2434F8u);
    ctx->pc = 0x2434F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2434F0u;
    // 0x2434f4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x2434F0u, 0x2434F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2434F8u;
label_2434f8:
    // 0x2434f8: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2434F8u;
    {
        const bool branch_taken_0x2434f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2434FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2434F8u;
        // 0x2434fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434f8) {
            ctx->pc = 0x2434C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2434c8;
        }
    }
    ctx->pc = 0x243500u;
    // 0x243500: 0x8e625cf8  lw          $v0, 0x5CF8($s3)
    ctx->pc = 0x243500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 23800)));
    // 0x243504: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x243504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x243508: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x243508u;
    {
        const bool branch_taken_0x243508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243508u;
        // 0x24350c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243508) {
            ctx->pc = 0x2434E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2434e8;
        }
    }
    ctx->pc = 0x243510u;
label_243510:
    // 0x243510: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243514:
    // 0x243514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243518: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24351c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24351cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243520: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x243524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243528: 0x3e00008  jr          $ra
    ctx->pc = 0x243528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243528u;
        // 0x24352c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243530u;
}
