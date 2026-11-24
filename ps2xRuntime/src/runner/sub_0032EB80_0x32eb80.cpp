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

// Function: sub_0032EB80
// Address: 0x32eb80 - 0x32ec20
void sub_0032EB80_0x32eb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EB80_0x32eb80");
#endif

    switch (ctx->pc) {
        case 0x32ebc0u: goto label_32ebc0;
        default: break;
    }

    ctx->pc = 0x32eb80u;

    // 0x32eb80: 0x8082000a  lb          $v0, 0xA($a0)
    ctx->pc = 0x32eb80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x32eb84: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x32EB84u;
    {
        const bool branch_taken_0x32eb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32eb84) {
            ctx->pc = 0x32EC10u;
            goto label_32ec10;
        }
    }
    ctx->pc = 0x32EB8Cu;
    // 0x32eb8c: 0x8083000b  lb          $v1, 0xB($a0)
    ctx->pc = 0x32eb8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x32eb90: 0x3c01004f  lui         $at, 0x4F
    ctx->pc = 0x32eb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)79 << 16));
    // 0x32eb94: 0x3c08004f  lui         $t0, 0x4F
    ctx->pc = 0x32eb94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)79 << 16));
    // 0x32eb98: 0x80229a68  lb          $v0, -0x6598($at)
    ctx->pc = 0x32eb98u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4E9A68u));
    // 0x32eb9c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x32eb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32eba0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32eba4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32eba8: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x32eba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x32ebac: 0x10460018  beq         $v0, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x32EBACu;
    {
        const bool branch_taken_0x32ebac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x32EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBACu;
        // 0x32ebb0: 0x25089a68  addiu       $t0, $t0, -0x6598 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ebac) {
            ctx->pc = 0x32EC10u;
            goto label_32ec10;
        }
    }
    ctx->pc = 0x32EBB4u;
    // 0x32ebb4: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x32ebb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x32ebb8: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x32ebb8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x32ebbc: 0x0  nop
    ctx->pc = 0x32ebbcu;
    // NOP
label_32ebc0:
    // 0x32ebc0: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x32ebc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32ebc4: 0x1447000e  bne         $v0, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x32EBC4u;
    {
        const bool branch_taken_0x32ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x32EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBC4u;
        // 0x32ebc8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ebc4) {
            ctx->pc = 0x32EC00u;
            goto label_32ec00;
        }
    }
    ctx->pc = 0x32EBCCu;
    // 0x32ebcc: 0x90850004  lbu         $a1, 0x4($a0)
    ctx->pc = 0x32ebccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32ebd0: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x32ebd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32ebd4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x32ebd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32ebd8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32ebdc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x32ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x32ebe0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32ebe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32ebe8: 0x80630021  lb          $v1, 0x21($v1)
    ctx->pc = 0x32ebe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
    // 0x32ebec: 0x2861ffff  slti        $at, $v1, -0x1
    ctx->pc = 0x32ebecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x32ebf0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x32EBF0u;
    {
        const bool branch_taken_0x32ebf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebf0) {
            ctx->pc = 0x32EC00u;
            goto label_32ec00;
        }
    }
    ctx->pc = 0x32EBF8u;
    // 0x32ebf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32EBF8u;
    {
        const bool branch_taken_0x32ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32ebf8) {
            ctx->pc = 0x32EC18u;
            goto label_32ec18;
        }
    }
    ctx->pc = 0x32EC00u;
label_32ec00:
    // 0x32ec00: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x32ec00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x32ec04: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x32ec04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32ec08: 0x1446ffed  bne         $v0, $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x32EC08u;
    {
        const bool branch_taken_0x32ec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x32ec08) {
            ctx->pc = 0x32EBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ebc0;
        }
    }
    ctx->pc = 0x32EC10u;
label_32ec10:
    // 0x32ec10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32ec14: 0x0  nop
    ctx->pc = 0x32ec14u;
    // NOP
label_32ec18:
    // 0x32ec18: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC20u;
}
