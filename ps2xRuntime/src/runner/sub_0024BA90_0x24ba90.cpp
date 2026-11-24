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

// Function: sub_0024BA90
// Address: 0x24ba90 - 0x24bb20
void sub_0024BA90_0x24ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BA90_0x24ba90");
#endif

    switch (ctx->pc) {
        case 0x24bab0u: goto label_24bab0;
        case 0x24badcu: goto label_24badc;
        default: break;
    }

    ctx->pc = 0x24ba90u;

    // 0x24ba90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ba94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x24ba94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ba98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24ba98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24ba9c: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BA9Cu;
    {
        const bool branch_taken_0x24ba9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA9Cu;
        // 0x24baa0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba9c) {
            ctx->pc = 0x24BAB8u;
            goto label_24bab8;
        }
    }
    ctx->pc = 0x24BAA4u;
    // 0x24baa4: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x24baa8: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BAA8u;
    SET_GPR_U32(ctx, 31, 0x24BAB0u);
    ctx->pc = 0x24BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAA8u;
    // 0x24baac: 0x2484d918  addiu       $a0, $a0, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BAA8u, 0x24BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BAB0u;
label_24bab0:
    // 0x24bab0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x24BAB0u;
    {
        const bool branch_taken_0x24bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAB0u;
        // 0x24bab4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bab0) {
            ctx->pc = 0x24BB14u;
            goto label_24bb14;
        }
    }
    ctx->pc = 0x24BAB8u;
label_24bab8:
    // 0x24bab8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24BAB8u;
    {
        const bool branch_taken_0x24bab8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x24BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BAB8u;
        // 0x24babc: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bab8) {
            ctx->pc = 0x24BAD4u;
            goto label_24bad4;
        }
    }
    ctx->pc = 0x24BAC0u;
    // 0x24bac0: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x24bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x24bac4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24bac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24bac8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BAC8u;
    {
        const bool branch_taken_0x24bac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bac8) {
            ctx->pc = 0x24BACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BAC8u;
            // 0x24bacc: 0x8cc50020  lw          $a1, 0x20($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BAE8u;
            goto label_24bae8;
        }
    }
    ctx->pc = 0x24BAD0u;
    // 0x24bad0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x24bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_24bad4:
    // 0x24bad4: 0xc093008  jal         func_24C020
    ctx->pc = 0x24BAD4u;
    SET_GPR_U32(ctx, 31, 0x24BADCu);
    ctx->pc = 0x24BAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BAD4u;
    // 0x24bad8: 0x2484d948  addiu       $a0, $a0, -0x26B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C020u, 0x24BAD4u, 0x24BADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BADCu;
label_24badc:
    // 0x24badc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x24BADCu;
    {
        const bool branch_taken_0x24badc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BADCu;
        // 0x24bae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24badc) {
            ctx->pc = 0x24BB14u;
            goto label_24bb14;
        }
    }
    ctx->pc = 0x24BAE4u;
    // 0x24bae4: 0x0  nop
    ctx->pc = 0x24bae4u;
    // NOP
label_24bae8:
    // 0x24bae8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x24bae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24baec: 0x24a4000f  addiu       $a0, $a1, 0xF
    ctx->pc = 0x24baecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x24baf0: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x24baf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x24baf4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24baf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24baf8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x24baf8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x24bafc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x24bafcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x24bb00: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x24bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x24bb04: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x24bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24bb08: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x24bb0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x24bb10: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x24bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_24bb14:
    // 0x24bb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24bb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bb18: 0x3e00008  jr          $ra
    ctx->pc = 0x24BB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB18u;
        // 0x24bb1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BB20u;
}
