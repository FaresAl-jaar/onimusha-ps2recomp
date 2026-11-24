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

// Function: sub_0038DBD0
// Address: 0x38dbd0 - 0x38dc60
void sub_0038DBD0_0x38dbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DBD0_0x38dbd0");
#endif

    switch (ctx->pc) {
        case 0x38dbd8u: goto label_38dbd8;
        default: break;
    }

    ctx->pc = 0x38dbd0u;

    // 0x38dbd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x38dbd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbd4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x38dbd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38dbd8:
    // 0x38dbd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x38dbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x38dbdc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38DBDCu;
    {
        const bool branch_taken_0x38dbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dbdc) {
            ctx->pc = 0x38DBF8u;
            goto label_38dbf8;
        }
    }
    ctx->pc = 0x38DBE4u;
    // 0x38dbe4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x38dbe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x38dbe8: 0x29230020  slti        $v1, $t1, 0x20
    ctx->pc = 0x38dbe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x38dbec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38DBECu;
    {
        const bool branch_taken_0x38dbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBECu;
        // 0x38dbf0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbec) {
            ctx->pc = 0x38DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38dbd8;
        }
    }
    ctx->pc = 0x38DBF4u;
    // 0x38dbf4: 0x0  nop
    ctx->pc = 0x38dbf4u;
    // NOP
label_38dbf8:
    // 0x38dbf8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38dbfc: 0x11230016  beq         $t1, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x38DBFCu;
    {
        const bool branch_taken_0x38dbfc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        ctx->pc = 0x38DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DBFCu;
        // 0x38dc00: 0x91900  sll         $v1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38dbfc) {
            ctx->pc = 0x38DC58u;
            goto label_38dc58;
        }
    }
    ctx->pc = 0x38DC04u;
    // 0x38dc04: 0x835021  addu        $t2, $a0, $v1
    ctx->pc = 0x38dc04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38dc08: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x38dc08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38dc0c: 0x24c30100  addiu       $v1, $a2, 0x100
    ctx->pc = 0x38dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x38dc10: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x38dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x38dc14: 0x3065001f  andi        $a1, $v1, 0x1F
    ctx->pc = 0x38dc14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x38dc18: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x38dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    // 0x38dc1c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x38dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x38dc20: 0xa547000c  sh          $a3, 0xC($t2)
    ctx->pc = 0x38dc20u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x38dc24: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x38dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38dc28: 0xad480004  sw          $t0, 0x4($t2)
    ctx->pc = 0x38dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 8));
    // 0x38dc2c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x38dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x38dc30: 0xa140000e  sb          $zero, 0xE($t2)
    ctx->pc = 0x38dc30u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x38dc34: 0xa32806  srlv        $a1, $v1, $a1
    ctx->pc = 0x38dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x38dc38: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x38dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x38dc3c: 0x24630fe0  addiu       $v1, $v1, 0xFE0
    ctx->pc = 0x38dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4064));
    // 0x38dc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x38dc44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x38dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38dc48: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x38dc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x38dc4c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38DC4Cu;
    {
        const bool branch_taken_0x38dc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x38dc4c) {
            ctx->pc = 0x38DC58u;
            goto label_38dc58;
        }
    }
    ctx->pc = 0x38DC54u;
    // 0x38dc54: 0xa149000e  sb          $t1, 0xE($t2)
    ctx->pc = 0x38dc54u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 9));
label_38dc58:
    // 0x38dc58: 0x3e00008  jr          $ra
    ctx->pc = 0x38DC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DC60u;
}
