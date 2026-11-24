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

// Function: sub_00243A80
// Address: 0x243a80 - 0x243b54
void sub_00243A80_0x243a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243A80_0x243a80");
#endif

    switch (ctx->pc) {
        case 0x243ad8u: goto label_243ad8;
        case 0x243af0u: goto label_243af0;
        case 0x243b08u: goto label_243b08;
        case 0x243b20u: goto label_243b20;
        default: break;
    }

    ctx->pc = 0x243a80u;

    // 0x243a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x243a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x243a88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x243a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243a90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x243a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x243a94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x243a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x243a98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x243a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x243a9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x243a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x243aa0: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x243AA0u;
    {
        const bool branch_taken_0x243aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x243AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AA0u;
        // 0x243aa4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243aa0) {
            ctx->pc = 0x243AE8u;
            goto label_243ae8;
        }
    }
    ctx->pc = 0x243AA8u;
    // 0x243aa8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x243aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x243aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243ab4: 0x2484bbd8  addiu       $a0, $a0, -0x4428
    ctx->pc = 0x243ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949848));
    // 0x243ab8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243abc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ac0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x243ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243ac4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x243ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243ac8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243acc: 0x8090d8a  j           func_243628
    ctx->pc = 0x243ACCu;
    ctx->pc = 0x243AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243ACCu;
    // 0x243ad0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243628u;
    sub_00243628_0x243628(rdram, ctx, runtime); return;
    ctx->pc = 0x243AD4u;
    // 0x243ad4: 0x0  nop
    ctx->pc = 0x243ad4u;
    // NOP
label_243ad8:
    // 0x243ad8: 0x26a2fffc  addiu       $v0, $s5, -0x4
    ctx->pc = 0x243ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x243adc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x243adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x243ae0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x243AE0u;
    {
        const bool branch_taken_0x243ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243AE0u;
        // 0x243ae4: 0xa0400004  sb          $zero, 0x4($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ae0) {
            ctx->pc = 0x243B30u;
            goto label_243b30;
        }
    }
    ctx->pc = 0x243AE8u;
label_243ae8:
    // 0x243ae8: 0xc049f18  jal         func_127C60
    ctx->pc = 0x243AE8u;
    SET_GPR_U32(ctx, 31, 0x243AF0u);
    ctx->pc = 0x243AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243AE8u;
    // 0x243aec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x243AE8u, 0x243AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243AF0u;
label_243af0:
    // 0x243af0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x243af0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243af4: 0x3c020088  lui         $v0, 0x88
    ctx->pc = 0x243af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)136 << 16));
    // 0x243af8: 0x24515f44  addiu       $s1, $v0, 0x5F44
    ctx->pc = 0x243af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 24388));
    // 0x243afc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x243afcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x243b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b04: 0x0  nop
    ctx->pc = 0x243b04u;
    // NOP
label_243b08:
    // 0x243b08: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x243b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x243b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x243b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x243b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b14: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x243b14u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x243b18: 0xc049fd2  jal         func_127F48
    ctx->pc = 0x243B18u;
    SET_GPR_U32(ctx, 31, 0x243B20u);
    ctx->pc = 0x243B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x243B18u;
    // 0x243b1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127F48u, 0x243B18u, 0x243B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243B20u;
label_243b20:
    // 0x243b20: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x243B20u;
    {
        const bool branch_taken_0x243b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B20u;
        // 0x243b24: 0x2e030020  sltiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b20) {
            ctx->pc = 0x243AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243ad8;
        }
    }
    ctx->pc = 0x243B28u;
    // 0x243b28: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x243B28u;
    {
        const bool branch_taken_0x243b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x243B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B28u;
        // 0x243b2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b28) {
            ctx->pc = 0x243B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_243b08;
        }
    }
    ctx->pc = 0x243B30u;
label_243b30:
    // 0x243b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243b34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x243b34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x243b38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x243b38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243b3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x243b3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243b40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x243b40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243b44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x243b44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x243b48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x243b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x243B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243B4Cu;
        // 0x243b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243B54u;
}
