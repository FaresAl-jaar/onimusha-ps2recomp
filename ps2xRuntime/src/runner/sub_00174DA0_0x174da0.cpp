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

// Function: sub_00174DA0
// Address: 0x174da0 - 0x174e40
void sub_00174DA0_0x174da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174DA0_0x174da0");
#endif

    ctx->pc = 0x174da0u;

    // 0x174da0: 0x8486000c  lh          $a2, 0xC($a0)
    ctx->pc = 0x174da0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174da4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174da8: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174DA8u;
    {
        const bool branch_taken_0x174da8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x174DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DA8u;
        // 0x174dac: 0x24880010  addiu       $t0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174da8) {
            ctx->pc = 0x174DB8u;
            goto label_174db8;
        }
    }
    ctx->pc = 0x174DB0u;
    // 0x174db0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x174DB0u;
    {
        const bool branch_taken_0x174db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DB0u;
        // 0x174db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174db0) {
            ctx->pc = 0x174E38u;
            goto label_174e38;
        }
    }
    ctx->pc = 0x174DB8u;
label_174db8:
    // 0x174db8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x174db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x174dbc: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x174dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x174dc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x174dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x174dc4: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x174dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x174dc8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x174dcc: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x174dccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x174dd0: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x174DD0u;
    {
        const bool branch_taken_0x174dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x174DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD0u;
        // 0x174dd4: 0xa483000c  sh          $v1, 0xC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd0) {
            ctx->pc = 0x174DE0u;
            goto label_174de0;
        }
    }
    ctx->pc = 0x174DD8u;
    // 0x174dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x174DD8u;
    {
        const bool branch_taken_0x174dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174DD8u;
        // 0x174ddc: 0xa485000e  sh          $a1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174dd8) {
            ctx->pc = 0x174DF0u;
            goto label_174df0;
        }
    }
    ctx->pc = 0x174DE0u;
label_174de0:
    // 0x174de0: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x174de0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x174de4: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x174de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174de8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x174de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x174dec: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x174decu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
label_174df0:
    // 0x174df0: 0x84850008  lh          $a1, 0x8($a0)
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x174df4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174df8: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174DF8u;
    {
        const bool branch_taken_0x174df8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x174df8) {
            ctx->pc = 0x174E10u;
            goto label_174e10;
        }
    }
    ctx->pc = 0x174E00u;
    // 0x174e00: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x174e00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x174e04: 0xa486000a  sh          $a2, 0xA($a0)
    ctx->pc = 0x174e04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x174e08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x174E08u;
    {
        const bool branch_taken_0x174e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174E08u;
        // 0x174e0c: 0xa4860008  sh          $a2, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174e08) {
            ctx->pc = 0x174E30u;
            goto label_174e30;
        }
    }
    ctx->pc = 0x174E10u;
label_174e10:
    // 0x174e10: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x174e10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x174e14: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x174e14u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x174e18: 0x8483000a  lh          $v1, 0xA($a0)
    ctx->pc = 0x174e18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x174e1c: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x174e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x174e20: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x174e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x174e24: 0xa4660002  sh          $a2, 0x2($v1)
    ctx->pc = 0x174e24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x174e28: 0xa486000a  sh          $a2, 0xA($a0)
    ctx->pc = 0x174e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 6));
    // 0x174e2c: 0x0  nop
    ctx->pc = 0x174e2cu;
    // NOP
label_174e30:
    // 0x174e30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x174e34: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x174e34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_174e38:
    // 0x174e38: 0x3e00008  jr          $ra
    ctx->pc = 0x174E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174E40u;
}
