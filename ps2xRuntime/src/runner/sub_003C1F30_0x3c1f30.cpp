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

// Function: sub_003C1F30
// Address: 0x3c1f30 - 0x3c1fd8
void sub_003C1F30_0x3c1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C1F30_0x3c1f30");
#endif

    switch (ctx->pc) {
        case 0x3c1f48u: goto label_3c1f48;
        case 0x3c1f98u: goto label_3c1f98;
        default: break;
    }

    ctx->pc = 0x3c1f30u;

    // 0x3c1f30: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x3c1f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1f34: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x3c1f34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c1f38: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x3C1F38u;
    {
        const bool branch_taken_0x3c1f38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F38u;
        // 0x3c1f3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f38) {
            ctx->pc = 0x3C1F78u;
            goto label_3c1f78;
        }
    }
    ctx->pc = 0x3C1F40u;
    // 0x3c1f40: 0x8c890008  lw          $t1, 0x8($a0)
    ctx->pc = 0x3c1f40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c1f44: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x3c1f44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c1f48:
    // 0x3c1f48: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x3c1f48u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3c1f4c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3c1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3c1f50: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3c1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3c1f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c1f58: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3c1f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3c1f5c: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C1F5Cu;
    {
        const bool branch_taken_0x3c1f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3c1f5c) {
            ctx->pc = 0x3C1F78u;
            goto label_3c1f78;
        }
    }
    ctx->pc = 0x3C1F64u;
    // 0x3c1f64: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c1f64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3c1f68: 0x147182a  slt         $v1, $t2, $a3
    ctx->pc = 0x3c1f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c1f6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3C1F6Cu;
    {
        const bool branch_taken_0x3c1f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F6Cu;
        // 0x3c1f70: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f6c) {
            ctx->pc = 0x3C1F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1f48;
        }
    }
    ctx->pc = 0x3C1F74u;
    // 0x3c1f74: 0x0  nop
    ctx->pc = 0x3c1f74u;
    // NOP
label_3c1f78:
    // 0x3c1f78: 0x11470015  beq         $t2, $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3C1F78u;
    {
        const bool branch_taken_0x3c1f78 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 7));
        if (branch_taken_0x3c1f78) {
            ctx->pc = 0x3C1FD0u;
            goto label_3c1fd0;
        }
    }
    ctx->pc = 0x3C1F80u;
    // 0x3c1f80: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x3c1f80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c1f84: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c1f84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3c1f88: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c1f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1f8c: 0x143082a  slt         $at, $t2, $v1
    ctx->pc = 0x3c1f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c1f90: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3C1F90u;
    {
        const bool branch_taken_0x3c1f90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1F90u;
        // 0x3c1f94: 0xa3040  sll         $a2, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1f90) {
            ctx->pc = 0x3C1FC0u;
            goto label_3c1fc0;
        }
    }
    ctx->pc = 0x3C1F98u;
label_3c1f98:
    // 0x3c1f98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3c1f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3c1f9c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c1f9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3c1fa0: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x3c1fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3c1fa4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x3c1fa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c1fa8: 0xa4a3fffe  sh          $v1, -0x2($a1)
    ctx->pc = 0x3c1fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967294), (uint16_t)GPR_U32(ctx, 3));
    // 0x3c1fac: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c1facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1fb0: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x3c1fb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c1fb4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3C1FB4u;
    {
        const bool branch_taken_0x3c1fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C1FB4u;
        // 0x3c1fb8: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c1fb4) {
            ctx->pc = 0x3C1F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c1f98;
        }
    }
    ctx->pc = 0x3C1FBCu;
    // 0x3c1fbc: 0x0  nop
    ctx->pc = 0x3c1fbcu;
    // NOP
label_3c1fc0:
    // 0x3c1fc0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c1fc4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3c1fc8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x3c1fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x3c1fcc: 0x0  nop
    ctx->pc = 0x3c1fccu;
    // NOP
label_3c1fd0:
    // 0x3c1fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C1FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C1FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C1FD8u;
}
