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

// Function: sub_0010FA78
// Address: 0x10fa78 - 0x10fb28
void sub_0010FA78_0x10fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FA78_0x10fa78");
#endif

    switch (ctx->pc) {
        case 0x10fab8u: goto label_10fab8;
        default: break;
    }

    ctx->pc = 0x10fa78u;

    // 0x10fa78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10fa7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fa80: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x10fa80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x10fa84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fa88: 0x8e252aa0  lw          $a1, 0x2AA0($s1)
    ctx->pc = 0x10fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x402AA0u));
    // 0x10fa8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10fa8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fa90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10fa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10fa94: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x10fa94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x10fa98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10FA98u;
    {
        const bool branch_taken_0x10fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA98u;
        // 0x10fa9c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fa98) {
            ctx->pc = 0x10FAC0u;
            goto label_10fac0;
        }
    }
    ctx->pc = 0x10FAA0u;
    // 0x10faa0: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x10faa0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
    // 0x10faa4: 0xae202aa0  sw          $zero, 0x2AA0($s1)
    ctx->pc = 0x10faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10912), GPR_U32(ctx, 0));
    // 0x10faa8: 0x2642d080  addiu       $v0, $s2, -0x2F80
    ctx->pc = 0x10faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955136));
    // 0x10faac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fab0: 0xc043d34  jal         func_10F4D0
    ctx->pc = 0x10FAB0u;
    SET_GPR_U32(ctx, 31, 0x10FAB8u);
    ctx->pc = 0x10FAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAB0u;
    // 0x10fab4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F4D0u, 0x10FAB0u, 0x10FAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FAB8u;
label_10fab8:
    // 0x10fab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10FAB8u;
    {
        const bool branch_taken_0x10fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAB8u;
        // 0x10fabc: 0x8e252aa0  lw          $a1, 0x2AA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fab8) {
            ctx->pc = 0x10FAC4u;
            goto label_10fac4;
        }
    }
    ctx->pc = 0x10FAC0u;
label_10fac0:
    // 0x10fac0: 0x3c120069  lui         $s2, 0x69
    ctx->pc = 0x10fac0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)105 << 16));
label_10fac4:
    // 0x10fac4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10fac8: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10FAC8u;
    {
        const bool branch_taken_0x10fac8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x10FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAC8u;
        // 0x10facc: 0x2642d080  addiu       $v0, $s2, -0x2F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fac8) {
            ctx->pc = 0x10FB00u;
            goto label_10fb00;
        }
    }
    ctx->pc = 0x10FAD0u;
    // 0x10fad0: 0x2644d080  addiu       $a0, $s2, -0x2F80
    ctx->pc = 0x10fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955136));
    // 0x10fad4: 0xae202aa0  sw          $zero, 0x2AA0($s1)
    ctx->pc = 0x10fad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10912), GPR_U32(ctx, 0));
    // 0x10fad8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x10fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10fadc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fae0: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10fae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10fae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10fae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fae8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10faec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10faecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10faf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10faf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10faf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x10faf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x10faf8: 0x8043d34  j           func_10F4D0
    ctx->pc = 0x10FAF8u;
    ctx->pc = 0x10FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FAF8u;
    // 0x10fafc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F4D0u;
    sub_0010F4D0_0x10f4d0(rdram, ctx, runtime); return;
    ctx->pc = 0x10FB00u;
label_10fb00:
    // 0x10fb00: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x10fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10fb04: 0xae232aa0  sw          $v1, 0x2AA0($s1)
    ctx->pc = 0x10fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10912), GPR_U32(ctx, 3));
    // 0x10fb08: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x10fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10fb0c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x10fb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x10fb10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10fb14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10fb14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fb18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10fb18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10fb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10fb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fb20: 0x3e00008  jr          $ra
    ctx->pc = 0x10FB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FB28u;
}
