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

// Function: sub_00143AA0
// Address: 0x143aa0 - 0x143b48
void sub_00143AA0_0x143aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143AA0_0x143aa0");
#endif

    switch (ctx->pc) {
        case 0x143ac4u: goto label_143ac4;
        case 0x143af0u: goto label_143af0;
        default: break;
    }

    ctx->pc = 0x143aa0u;

    // 0x143aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143aa4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x143aa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143aa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143aac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143ab0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x143ab0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ab4: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x143ab4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x143ab8: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x143ab8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x143abc: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x143ABCu;
    SET_GPR_U32(ctx, 31, 0x143AC4u);
    ctx->pc = 0x143AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143ABCu;
    // 0x143ac0: 0x90a50001  lbu         $a1, 0x1($a1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x143ABCu, 0x143AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AC4u;
label_143ac4:
    // 0x143ac4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AC4u;
    {
        const bool branch_taken_0x143ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ac4) {
            ctx->pc = 0x143AD8u;
            goto label_143ad8;
        }
    }
    ctx->pc = 0x143ACCu;
    // 0x143acc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x143ACCu;
    {
        const bool branch_taken_0x143acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ACCu;
        // 0x143ad0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143acc) {
            ctx->pc = 0x143B38u;
            goto label_143b38;
        }
    }
    ctx->pc = 0x143AD4u;
    // 0x143ad4: 0x0  nop
    ctx->pc = 0x143ad4u;
    // NOP
label_143ad8:
    // 0x143ad8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x143ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x143adc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x143adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x143ae0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x143ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143aec: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x143aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_143af0:
    // 0x143af0: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x143af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x143af4: 0xacc30034  sw          $v1, 0x34($a2)
    ctx->pc = 0x143af4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 3));
    // 0x143af8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x143af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x143afc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143AFCu;
    {
        const bool branch_taken_0x143afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143afc) {
            ctx->pc = 0x143B10u;
            goto label_143b10;
        }
    }
    ctx->pc = 0x143B04u;
    // 0x143b04: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x143b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x143b08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x143b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x143b0c: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x143b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_143b10:
    // 0x143b10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x143b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x143b14: 0x2d030004  sltiu       $v1, $t0, 0x4
    ctx->pc = 0x143b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x143b18: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x143b18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x143b1c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x143b20: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143B20u;
    {
        const bool branch_taken_0x143b20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B20u;
        // 0x143b24: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b20) {
            ctx->pc = 0x143AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143af0;
        }
    }
    ctx->pc = 0x143B28u;
    // 0x143b28: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x143b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x143b2c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x143b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x143b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143b34: 0x0  nop
    ctx->pc = 0x143b34u;
    // NOP
label_143b38:
    // 0x143b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b40: 0x3e00008  jr          $ra
    ctx->pc = 0x143B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B40u;
        // 0x143b44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B48u;
}
