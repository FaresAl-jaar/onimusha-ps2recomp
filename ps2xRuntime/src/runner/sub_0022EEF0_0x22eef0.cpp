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

// Function: sub_0022EEF0
// Address: 0x22eef0 - 0x22ef9c
void sub_0022EEF0_0x22eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EEF0_0x22eef0");
#endif

    ctx->pc = 0x22eef0u;

    // 0x22eef0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x22eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x22eef4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x22eef4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22eef8: 0x244ccde0  addiu       $t4, $v0, -0x3220
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x22eefc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x22eefcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef00: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x22ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4BCDE0u));
    // 0x22ef04: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x22ef04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x22ef08: 0x3c0b004c  lui         $t3, 0x4C
    ctx->pc = 0x22ef08u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)76 << 16));
    // 0x22ef0c: 0x256bcdc0  addiu       $t3, $t3, -0x3240
    ctx->pc = 0x22ef0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294954432));
    // 0x22ef10: 0x1695821  addu        $t3, $t3, $t1
    ctx->pc = 0x22ef10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x22ef14: 0x2465000f  addiu       $a1, $v1, 0xF
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x22ef18: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x22ef18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x22ef1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x22ef1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef20: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x22ef20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x22ef24: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x22ef28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22ef2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x22ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22ef30: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x22ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x22ef34: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x22ef34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x22ef38: 0x24a5ccc0  addiu       $a1, $a1, -0x3340
    ctx->pc = 0x22ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954176));
    // 0x22ef3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x22ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22ef40: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x22EF40u;
    {
        const bool branch_taken_0x22ef40 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF40u;
        // 0x22ef44: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef40) {
            ctx->pc = 0x22EF60u;
            goto label_22ef60;
        }
    }
    ctx->pc = 0x22EF48u;
    // 0x22ef48: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x22ef48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x22ef4c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ef50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ef54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22EF54u;
    {
        const bool branch_taken_0x22ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF54u;
        // 0x22ef58: 0xa5620000  sh          $v0, 0x0($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef54) {
            ctx->pc = 0x22EF68u;
            goto label_22ef68;
        }
    }
    ctx->pc = 0x22EF5Cu;
    // 0x22ef5c: 0x0  nop
    ctx->pc = 0x22ef5cu;
    // NOP
label_22ef60:
    // 0x22ef60: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x22ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x22ef64: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x22ef64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_22ef68:
    // 0x22ef68: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x22ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x22ef6c: 0x2484cdc0  addiu       $a0, $a0, -0x3240
    ctx->pc = 0x22ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954432));
    // 0x22ef70: 0xa0aa0000  sb          $t2, 0x0($a1)
    ctx->pc = 0x22ef70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x22ef74: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x22ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x22ef78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ef7c: 0xa0ad0001  sb          $t5, 0x1($a1)
    ctx->pc = 0x22ef7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 13));
    // 0x22ef80: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x22ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x22ef84: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x22ef84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x22ef88: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x22ef88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 7));
    // 0x22ef8c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x22ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x22ef90: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x22ef90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22ef94: 0x3e00008  jr          $ra
    ctx->pc = 0x22EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF94u;
        // 0x22ef98: 0xa4a20002  sh          $v0, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EF9Cu;
}
